#include <iostream>
using namespace std;
float rates(char service,float minutes,string period);
main()
{
    char service;
    float minutes;
    string period;
    float charges;
    cout << "Enter type of service=";
    cin >> service;
    cout << "Enter time period=";
    cin >> period;
    cout << "Enter minutes=";
    cin >> minutes;
    charges=rates(service,minutes,period);
    cout << "The Charges are="<< charges << endl;
}
float rates(char service,float minutes,string period)
{
    float charges;
    if (service == 'r' && minutes <= 50)
    {
        charges=10;
        return charges;
    }
    else if (service =='r' && minutes >50)
    {
        charges=10+(minutes*0.20);
        return charges;
    }
    if (service == 'p' && period == "day" && minutes <=75)
    {
        charges=25;
        return charges;
    }
    if (service =='p' && period == "day" && minutes > 75)
    {
        charges=25+(minutes*0.10);
        return charges;
    }
    if (service == 'p' && period == "night" && minutes <=100)
    {
        charges=25;
        return charges;
    }
    if (service =='p' && period == "night" && minutes > 100)
    {
        charges=25+(minutes*0.05);
        return charges;
    }

return 0;
}