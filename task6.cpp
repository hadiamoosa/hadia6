#include<iostream>
using namespace std;

float apartmentPrice(string month, int stays);
float studioPrice(string month, int stays);

main()
{
	string month;
	int stays;
	float result1;	
	float result2;
	float final1;
	float final2;
	float final3;
	float final4;
	
	cout<<"Enter the month: ";
	cin>>month;
	cout<<"Enter no of stays[0...200]: ";
	cin>>stays;
		
	result1= apartmentPrice(month, stays);
	if(stays>14)	
	{
		final1=result1 * 0.10;
		final2=result1-final1;
		cout<<"APARTMENT: "<<final2<<"$"<<endl;
		
	}
	else
	{
		cout<<"APARTMENT: "<<result1<<"$"<<endl;
	}
	
	
	result2= studioPrice(month, stays);
	if((month=="may") || (month=="october"))
	{
		if(stays>7 && stays<14)
		{
			final3= result2 * 0.05;
			final4= result2-final3;	
			cout<<"STUDIO: "<<"$"<<final4;
		}
		else if(stays>14)
		{
			final3= result2 * 0.30;	
			final4= result2-final3;
			cout<<"STUDIO: "<<"$"<<final4;
		}

	}

	else if((month=="july") || (month=="august"))
	{
		cout<<"STUDIO: "<<"$"<<result2;	
	}

	else if((month=="june") || (month=="september"))
	{
		if(stays>14)
		{
			final3= result2 * 0.20;	
			final4= result2-final3;
			cout<<"STUDIO: "<<"$"<<final4;
		}
		
		else
		{
			cout<<"STUDIO: "<<"$"<<result2;
		}
	}
	


}

float apartmentPrice(string month, int stays)
{
	float price;

	if((month=="may") || (month=="october"))
	{
		price=65 * stays;
	}

	else if((month=="june") || (month=="september"))
	{
		price=68.70 * stays;
	}

	else if((month=="july") || (month=="august"))
	{
		price=77 * stays;
	}

	return price;
}

float studioPrice(string month, int stays)
{	
	float price1;
	float price2;

	if((month=="may") || (month=="october"))
	{
		price1=50 * stays;
		
	}

	else if((month=="june") || (month=="september"))
	{
		price1=75.20 * stays;

	}

	else if((month=="july") || (month=="august"))
	{
		price1=76 * stays;
	}

	return price1;
}