#pragma once
#include <string>
#include <unistd.h>
using namespace std;

class UkrainianCity
{
    double citsqr;
    int potuzhnist;
    int citizens;

    protected:
    string citname;

    public:

    UkrainianCity();
    ~UkrainianCity();

    int SetSup(string name);
    int SetArea(double area);
    int SetPotuzh(int kavun);
    int Opys();
    string GetName();
    int showPopulation(string name, int people);
};