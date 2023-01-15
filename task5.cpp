#include<iostream>
using namespace std;
float pricew(string day,float quantity,string fruit);
float priceh(string day,float quantity,string fruit);
main()
{
    string day;
    float quantity;
    string fruit;
    float price1;
    float price2;
    cout<< "Enter day of week: ";
    cin>>day;
    cout<< "Enter quantity of fruit: ";
    cin>>quantity;
    cout<< "Enter name of fruit: ";
    cin>>fruit;
     
     
     
     if (day == "Saturday" || day == "Sunday")
     {
               price2=priceh(day,quantity,fruit );
              cout << "Price is: "<<price2;
     }
    else if (day=="Monday"|| day == "Tuesday" || day=="Wednesday"|| day == "Thursday" || day == "Friday")
      {
        price1=pricew(day,quantity,fruit);
        cout << "Price is :"<<price1<<endl;

          }
}


float pricew(string day,float quantity,string fruit)
{
    float price1;
    
    if ( fruit == "banana" )
    {
    price1=2.50*quantity;
   
    }
    else if (fruit == "apple")
    {
        price1=1.20*quantity;
    }
    else if (fruit == "orange")
    {
        price1 = 0.85*quantity;
    }
    else if (fruit == "grapefruit")
    {
        price1 = 1.45*quantity;
    }
    else if (fruit=="kiwi")
    {
        price1 =2.70*quantity;
    }
    else if (fruit == "pineapple")
    {
        price1 ==5.50*quantity;
    }
    else if (fruit == "grapes")
    {
        price1 == 3.85*quantity;
    }
    else 
    {
        cout<< "Error";
    }
    return price1;
}

float priceh(string day,float quantity,string fruit)
{
float price2;
if ( fruit == "banana" )
    {
    price2=2.70*quantity;
   
    }
    else if (fruit == "apple")
    {
        price2=1.25*quantity;
    }
    else if (fruit == "orange")
    {
        price2 = 0.90*quantity;
    }
    else if (fruit == "grapefruit")
    {
        price2 = 1.60*quantity;
    }
    else if (fruit=="kiwi")
    {
        price2 =3.00*quantity;
    }
    else if (fruit == "pineapple")
    {
        price2 ==5.60*quantity;
    }
    else if (fruit == "grapes")
    {
        price2 == 4.20*quantity;

}
else 
{
    cout << "error";
}
return price2;
}



