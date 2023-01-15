#include<iostream>
using namespace std;
string grade(float percentage);
main()
    {
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    string name;
    float percentage;
    float totalmarks;
    string var;

    
    cout << "Enter name: ";
    cin>>name;
    cout<< "Enter marks of s1";
    cin>>s1;
    cout<<"Enter marks of s2";
    cin>>s2;
    cout<<"Enter marks of s3";
    cin>> s3;
    cout<< "Enter marks of s4";
    cin>>s4;
    cout << "Enter marks of s5";
    cin>>s5;
    cout <<name<<endl;
    totalmarks=s1+s2+s3+s4+s5;
    cout<< totalmarks<<endl;
    percentage=(totalmarks*100)/500;
    cout <<"Percentage is:"<<percentage<<endl;
    var=grade (percentage);
    cout<<"Grade is: "<<var<<endl;

    
}
string grade (float percentage)
{
    string grade;
    if (percentage>=90 && percentage<=100)
    {
         grade ="A+";
    }
    else if (percentage>=80 && percentage >=90)
    {
        grade="A";
    }
    else if(percentage>=70 && percentage <=80) 
    {
        grade ="B+";
    }
    else if (percentage >=60 && percentage <=70 )
    {
        grade="B";
    }
   else if (percentage>=50 && percentage<=60)
   {
    grade="C";
   }

else if (percentage>=40 && percentage<=50)
{
    grade="D";
}
else if (percentage<40)
{
    grade = "F";
}
return grade;
}