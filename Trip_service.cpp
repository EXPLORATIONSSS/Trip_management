#include<iostream>
#include<string>
#include "Trip.h"
#include "RoadTrip.h"
#include "RailTrip.h"
#include "FlightTrip.h"
using namespace std;
int main()
{
    int num;
    float dis;
    string s,d,cl;
    char ch;
    do
    {
    cout<<"Hi friends! Welcome to Raaghavi Trip Service"<<"\n";
    cout<<"Choose the trip Service";
    cout<<"1. Flight , 2. Rail , 3. Road"<<"\n";
    cin>>num;
    switch(num)
    {
        case 1:
                {
                cout<<"Enter the source,destination,distance,travelclass";
                cin>>s>>d>>dis>>cl;
                Trip *t;
                FlightTrip obj(s,d,dis,cl);
                t=&obj;
                t->travel_time();
                t->fare_calculation();
                cout<<obj;
                cout<<"Do you want continue with any other trip press y or else n";
                cin>>ch;
               break;
                }
        case 2:
                {
                cout<<"Enter the source,destination,distance,travelclass";
                cin>>s>>d>>dis>>cl;
                RailTrip R(s,d,dis,cl);
                Trip &t1=R;
                t1.travel_time();
                t1.fare_calculation();
                R.total_trip_num();
                cout<<R;
                cout<<"Do you want continue with any other trip press y or else n";
                cin>>ch;
                break;
                }
        case 3:
                {
                cout<<"Enter the source,destination,distance,servicetype";
                cin>>s>>d>>dis>>cl;
                Trip *t3=new RoadTrip(s,d,dis,cl);
                t3->travel_time();
                t3->fare_calculation();
                cout<<"Do you want continue with any other trip press y or else n";
                cin>>ch;
                break;
                }
    }
    }while(ch=='y');
}
