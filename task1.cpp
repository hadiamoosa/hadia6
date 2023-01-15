#include<iostream>
using namespace std;
string activity(string temp,string humidity);
main()
{
    string temp;
    string humidity;
    string action;
    cout<< "Enter temperature: ";
    cin>>temp;
    cout<< "Enter humidity: ";
    cin>>humidity;
    action= activity(temp,humidity);
    cout<< "activity is:"<<action ;
}

string activity(string temp,string humidity)
{
    string action;
    if (temp=="warm" && humidity=="dry")
    {
       action= "playtennis";
    }
 if (temp=="warm" && humidity=="humid")
 {
   action = "swim";
 }
 if (temp=="cold"&& humidity=="dry")
 {
    action= "playbasketball";
 }
 if (temp== "cold"&& humidity == "humid")
 {
    action= "watchtv";
 }
 return action;
}
