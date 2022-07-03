#include "question2.h"

bool test_config()
{
    return true;
}

const double FAHRENHEIT_CONVERSION = 9.0/5.0;
const double FAHRENHEIT_SCALE_OFFSET = 32;

double get_fahrenheit(double celsius){
    return (FAHRENHEIT_CONVERSION * celsius) + FAHRENHEIT_SCALE_OFFSET;
}
