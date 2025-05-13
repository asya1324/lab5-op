#pragma once
#include "UnofficialCap.h"
#include <string>
using namespace std;

class Food : virtual public UnofficialCap
{
    int sht;
    string namefood;

    public:

    Food();
    ~Food();

    int SetSht(int sfood);
    int SetFood(string snamefood);
    int GiftFood();
};
