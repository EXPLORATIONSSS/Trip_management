#ifndef TRIP_H_INCLUDED
#define TRIP_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class Trip
{
public:
    string source;
    string dest;
    float distance;

    //constructors
    Trip(string x,string y,float dist)
    {
        source=x;
        dest=y;
        distance=dist;
    }
    //Virtual functions
    virtual void fare_calculation()=0;
    virtual void travel_time()=0;
};
#endif // TRIP_H_INCLUDED
