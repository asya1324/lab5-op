#pragma once
#include "UnofficialCap.h"

class OfficialCap : virtual public UnofficialCap
{
    public:

    OfficialCap();
    ~OfficialCap();

    int GetName();
};