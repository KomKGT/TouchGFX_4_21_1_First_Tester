#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>


#include "main.h"
#include "cmsis_os2.h"
#include <cstring>
extern "C"
{
	extern osMessageQueueId_t uartQueueHandle;
	struct uartData_t *uartData_r;
	extern char *c_data;
	extern int i_counter;
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

	//modelListener->setText(c_data);
	modelListener->setInt(i_counter);
	if(osMessageQueueGetCount(uartQueueHandle)>0)
	{
		if(osMessageQueueGet(uartQueueHandle, &uartData_r, 0, 0) == osOK)
		{
			strncpy(RData,uartData_r->Data,uartData_r->size);
			modelListener->uart_Data(RData);
		}
	}

}
