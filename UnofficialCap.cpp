#include "UnofficialCap.h"
#include <iostream>
using namespace std;

UnofficialCap::UnofficialCap() {
    cout << "UnofficialCap constructor" << endl;
}
UnofficialCap::~UnofficialCap() {
    cout << "UnofficialCap destructor" << endl;
}

int UnofficialCap::SetGem(string sgem) 
{
    gem = sgem;
    return 1;
}

int UnofficialCap::GetGem(string name) 
{
    citname = name;
    cout << citname << "'s gem is " << gem << endl;
    return 1;
}

int UnofficialCap::Opys() 
{
    cout << GetName() << "'s gem is " << gem << endl;
    return 1;
}

int UnofficialCap::SetGif(string sreciever) 
{
    reciever = sreciever;
    return 1;
}

string UnofficialCap::GetGif() 
{
    return reciever;
}
