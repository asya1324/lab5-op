#include "Food.h"
#include "SpaceTech.h"
#include "SpaceCuisine.h"
#include <iostream>
using namespace std;


SpaceCuisine::SpaceCuisine() {
    cout << "SpaceCuisine constructor" << endl;
}
SpaceCuisine::~SpaceCuisine() {
    cout << "SpaceCuisine destructor" << endl;
}


int SpaceCuisine::serve(string name, string food) 
{   
    city = name;
    foodname = food;
    cout << city << " подав(ла) до космічного столу " << foodname << "\n";
    return 1;
}