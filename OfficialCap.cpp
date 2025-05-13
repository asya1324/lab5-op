#include "OfficialCap.h"
#include <iostream>
using namespace std;

OfficialCap::OfficialCap() {
    cout << "Officialcap constructor" << endl;
}
OfficialCap::~OfficialCap() {
    cout << "Officialcap destructor" << endl;
}



int OfficialCap::GetName() 
{

    cout << UkrainianCity::GetName() << " is a capital of Ukraine" << endl;
    return 1;
}
