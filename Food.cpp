#include "Food.h"
#include <iostream>
using namespace std;

Food::Food() {
    cout << "Food constructor" << endl;
}
Food::~Food() {
    cout << "Food destructor" << endl;
}

int Food::SetSht(int sfood) {

    sht = sfood;
    return 1;
}

int Food::SetFood(string snamefood) {

    namefood = snamefood;
    return 1;
}

int Food::GiftFood() {
    
    cout << GetName() << " gifted " << GetGif() << " " << sht << " pieces of " << namefood << endl;
    return 1;
}