#pragma once
#include "Food.h"
#include "SpaceTech.h"

class SpaceCuisine:  public Food,  public SpaceTech
{
    
    string city;
    string foodname;

    public:

    SpaceCuisine();
    ~SpaceCuisine();

    int serve(string name, string food);
    
};