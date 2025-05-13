#include "UkrainianCity.h"
#include <iostream>
using namespace std;

UkrainianCity::UkrainianCity() {
    cout << "UkrainianCity constructor" << endl;
}
UkrainianCity::~UkrainianCity() {
    cout << "UkrainianCity destructor" << endl;
}

int UkrainianCity::SetSup(string name) 
{
    citname = name;
    return 1;
}

int UkrainianCity::SetArea(double area) 
{
    citsqr = area;
    return 1;
}

int UkrainianCity::SetPotuzh(int kavun) 
{
    potuzhnist = kavun;
    return 1;
}

int UkrainianCity::Opys() 
{
    cout << citname << " is " << citsqr << " km² and has " << potuzhnist << " kavuniv potuzhnosti!!!" << endl;
    return 1;
}

string UkrainianCity::GetName() 
{
    return citname;
}

int UkrainianCity::showPopulation(string name, int people) 
{
    citname = name;
    citizens = people;
    cout << citname << " has " << citizens << " citizens " << endl;
    return 1;
}