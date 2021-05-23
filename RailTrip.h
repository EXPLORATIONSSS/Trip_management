#ifndef RAILTRIP_H_INCLUDED
#define RAILTRIP_H_INCLUDED
#include<iostream>
#include<string>
#include "Trip.h"
using namespace std;
class RailTrip:public Trip
{
public:
   string travel_class;
   static int trip_rail;

    //constructor
    RailTrip(string x,string y,float dist,string z):Trip(x,y,dist)
    {
        trip_rail++;
        travel_class=z;
    }
    //virtual_function
    void fare_calculation()
    {
        if(travel_class=="first")
        {
            cout<<"The fare calculated is:"<<distance*50<<"\n";
        }
        else if(travel_class=="second")
        {
            cout<<"The fare calculated is:"<<distance*30<<"\n";
        }
        else if(travel_class=="third")
        {
            cout<<"The fare calculated is:"<<distance*10<<"\n";
        }
    }
    void travel_time()
    {
        cout<<"The total travel time for distance is(in hrs) "<<distance*10<<"\n";
    }
    //Trip number
    void total_trip_num()
    {
        cout<<"The total number of road trips taken are"<<trip_rail;
    }
    //ostream operator
     friend ostream& operator<<(ostream& rout,const RailTrip& t)
    {
        rout<<"\n";
        rout<<"Travel Details"<<"\n";
        rout<<"Travel Class:"<<t.travel_class<<"\nTrip road:"<<t.trip_rail<<"\nSource:"<<t.source<<"\nDestination:"<<t.dest<<"\nTotal Distance:"<<t.distance;
        return rout;
    }


};
int RailTrip::trip_rail=0;


#endif // RAILTRIP_H_INCLUDED
