#ifndef FLIGHTTRIP_H_INCLUDED
#define FLIGHTTRIP_H_INCLUDED
#include<iostream>
#include<string>
#include "Trip.h"
using namespace std;
class FlightTrip:public Trip
{
public:
   string travel_class;
   static int trip_flight;

    //constructor
    FlightTrip(string x,string y,float dist,string z):Trip(x,y,dist)
    {
        trip_flight++;
        travel_class=z;
    }
    //virtual_function
    void fare_calculation()
    {
        if(travel_class=="first")
        {
            cout<<"The fare calculated is(in Rs):"<<distance*1000<<"\n";
        }
        else if(travel_class=="business")
        {
            cout<<"The fare calculated is(in Rs):"<<distance*3000<<"\n";
        }
        else if(travel_class=="economy")
        {
            cout<<"The fare calculated is(in Rs):"<<distance*500<<"\n";
        }
        cout<<"The total trips taken is:"<<trip_flight;
    }
    void travel_time()
    {
        cout<<"The total travel time for distance is(in hrs) "<<(distance/100)*2<<"\n";
    }
    //operator overloading
    friend ostream& operator<<(ostream& rout,const FlightTrip& t)
    {
        rout<<"\n";
        rout<<"Travel details"<<"\n";
        rout<<"Travel class: "<<t.travel_class<<"\nTrip road:"<<t.trip_flight<<"\nSource:"<<t.source<<"\nDestination:"<<t.dest<<"\nTotal Distance:"<<t.distance;
        return rout;
    }
};
int FlightTrip::trip_flight=0;



#endif // FLIGHTTRIP_H_INCLUDED
