#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <cstring>
#include <main.h>
extern "C"
{
	//extern uint8_t r;
	extern char *ch_text;
}
Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	modelListener->setText(ch_text);
}
