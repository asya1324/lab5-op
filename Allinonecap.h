#pragma once
#include "OfficialCap.h"
#include "Food.h"
#include "SpaceTech.h"

class Allinonecap:  public OfficialCap,  public SpaceTech,  public Food
{
    public:

    Allinonecap();
    ~Allinonecap();

};