#pragma once
#include "UkrainianCity.h"

class OfficialCap : virtual public UkrainianCity
{
    public:

    OfficialCap();
    ~OfficialCap();

    int GetName();
};