#pragma once
#include "UnofficialCap.h"

class SpaceTech : virtual public UnofficialCap
{
    int tech1;
    int tech2;
    int sum;
    string foodname;
    string kuchar;

    public:

    SpaceTech();
    ~SpaceTech();

    int SetTech(int stech1, int stech2);
    int Sum();
    int BuildTech();
    int makehavchikforspace(string food, string kuchar);
};