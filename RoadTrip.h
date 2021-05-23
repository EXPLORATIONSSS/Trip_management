#ifndef ROADTRIP_H_INCLUDED
#define ROADTRIP_H_INCLUDED
#include<iostream>
#include<string>
#include "Trip.h"
using namespace std;
class RoadTrip:public Trip
{
public:
   string service_type;
   static int trip_road;

    //constructor
    RoadTrip(string x,string y,float dist,string z):Trip(x,y,dist)
    {
        trip_road++;
        service_type=z;
    }
    //virtual_function
    void fare_calculation()
    {
        float fare_cal=distance*50*trip_road;
        cout<<"The estimated fare calculation for total trips "<<trip_road<<" (in kms) "<<fare_cal<<"\n";
        //return fare_cal;
    }
    void travel_time()
    {
        float fare;
        if(service_type=="car")
        {
            cout<<"Estimated time(in hrs):"<<2*distance<<"\n";

        }
        else if(service_type=="bus")
        {
            cout<<"Estimated Time(in hrs):"<<3*distance<<"\n";

        }
        else if(service_type=="jeep")
        {
            cout<<"Estimated Time(in hrs):"<<1*distance<<"\n";

        }
        else
        {
            cout<<"We dont provide services other than car,bus and jeep"<<"\n";

        }

    }
    //opertaor overloading
    friend ostream& operator<<(ostream& rout,const RoadTrip& t)
    {
        rout<<"\n";
        rout<<"Travel Details"<<"\n";
        rout<<"Service type:"<<t.service_type<<"\nTrip road:"<<t.trip_road<<"\nSource:"<<t.source<<"\nDestination:"<<t.dest<<"\nTotal Distance:"<<t.distance;
        return rout;
    }

};
int RoadTrip::trip_road=0;

#endif // ROADTRIP_H_INCLUDED
