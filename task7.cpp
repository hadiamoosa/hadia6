#include<iostream>
using namespace std;
int time(int startingh,int arrivalh,int startingm,int arrivalm);

main()
{
    int startingh;
    int startingm;
    int arrivalh;
    int arrivalm;
    int difference;
    int startingh1;
    int startingm1;
     int startingh2;
     int startingm2;
    cout << "Exam starting time(hour) : ";
    cin >> startingh;
    cout << "Exam starting time(minutes) : ";
    cin >> startingm;
    cout << "Student hour of arrival: ";
    cin >> arrivalh;
    cout << "Students minutes of arrival: ";
    cin >> arrivalm;
    difference= time(startingh,arrivalh,startingm,arrivalm);
    
    cout << difference<<endl;


    if(difference == 0)
    {
        cout<< "On time";

    }
  else if (difference < 0)
   { 
   
    
    cout<< "Late" <<  endl;
    difference=difference*-1;
    cout<<(difference/60)<< "hours and" <<(difference%60)<<"minutes"<<endl;

     }
 else if (difference > 0)
 {
    cout<< "Early" <<  endl;
    difference=difference*-1;
    cout<<(difference/60)<< "hours and" <<(difference%60)<<"minutes"<<endl;

    
 }

	

}
int time(int startingh,int arrivalh,int startingm,int arrivalm)

{
    int starting;
    int arrival;
    int startingh1;
    int difference;
   starting=(startingh*60)+startingm;
    arrival=(arrivalh*60)+arrivalm;
    difference=starting-arrival;
    
  return difference;
}	


