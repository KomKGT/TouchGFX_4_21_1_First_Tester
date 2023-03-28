#ifndef MODEL_HPP
#define MODEL_HPP
#include <touchgfx/hal/types.hpp> //For int16_t
class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void setHour(int16_t setHour);
    void setMinute(int16_t setMinute);
    int16_t getHour();
    int16_t getMinute();
protected:
    int16_t hour;
    int16_t minute;
    ModelListener* modelListener;
};

#endif // MODEL_HPP
