#ifndef SCREEN2VIEW_HPP
#define SCREEN2VIEW_HPP

#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

class Screen2View : public Screen2ViewBase
{
public:
    Screen2View();
    virtual ~Screen2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void v_HourIncrease_v();
    virtual void v_HourDecrease_v();
    virtual void v_MinIncrease_v();
    virtual void v_MinDecrease_v();
    virtual void v_SaveBTN_v();


protected:
    int16_t hour;
    int16_t minute;
};

#endif // SCREEN2VIEW_HPP
