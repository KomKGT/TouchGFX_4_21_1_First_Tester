#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void scrollWheel1_1UpdateItem(CustomContainer1& item, int16_t itemIndex)
    {
            // Override and implement this function in Screen1
    	item.setListElement(itemIndex);
    }

protected:
    Callback<Screen1View,int16_t> scrollList1_ItemSelectCallback;
    void scrollList1_ItemSelectedHandler(int16_t itemSelected);
};

#endif // SCREEN1VIEW_HPP
