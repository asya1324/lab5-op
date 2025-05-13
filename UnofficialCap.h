#pragma once
#include "UkrainianCity.h"
#include <string>
using namespace std;

class UnofficialCap : virtual public UkrainianCity
{
    string gem;
    string reciever;

    public:

    UnofficialCap();
    ~UnofficialCap();

    int SetGem(string sgem);
    int GetGem(string name);
    int Opys();
    int SetGif(string sreciever);
    string GetGif();
};