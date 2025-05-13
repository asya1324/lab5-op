#include "SpaceTech.h"
#include <iostream>
using namespace std;

SpaceTech::SpaceTech() {
    cout << "SpaceTech constructor" << endl;
}
SpaceTech::~SpaceTech() {
    cout << "SpaceTech destructor" << endl;
}

int SpaceTech::SetTech(int stech1, int stech2) 
{
    tech1 = stech1;
    tech2 = stech2;
    return 1;
}

int SpaceTech::Sum() 
{
    sum = tech1 + tech2;
    return sum;
}

int SpaceTech::BuildTech() 
{
    cout << GetName() << " built " << sum << " rockets for " << GetGif() << endl;
    return 1;
}

int SpaceTech::makehavchikforspace(string food, string city) 
{   
    foodname = food;
    kuchar = city;
    cout << "Сублімація їжі: " << foodname << endl;
    cout << city << " проводить сумблімацію " << foodname << endl;
    cout << city  << " зробив(ла) сублімаційний(у) " << foodname << endl;

    foodname = "сублімаційний(у) " + food;
    cout << city << " запаковує " << foodname << " у вакуумний пакет." << endl;
    cout << city << "  запакував(ла) вакуумний(у) " << foodname << endl; 

    return 1;
}
