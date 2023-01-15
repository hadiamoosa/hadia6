#include<iostream>
using namespace std;
string sign(int day,string month);
main()
{
    string month;
    int day;
    string zodiacsign;
    cout<< "Enter day :";
    cin>>day;
    cout<< "Enter month: ";
    cin>>month;
    zodiacsign=sign(day,month);
    cout<< "sign is" <<zodiacsign;
} 


string sign(int day,string month)
{
string zodiacsign;
if ((month == "March" && day >=21 )||(month == "April"&&  day<=19))
{
    zodiacsign="Aries";
}
else if ((month == "April" && day >=20 )||(month == "May"&&  day<=20))
{
    zodiacsign="Taurus";
}
else if ((month == "May" && day >=21 )||(month == "June"&&  day<=20))
{
    zodiacsign="Gemini";
}
else if ((month == "June" && day >=21 )||(month == "July"&&day<=22))
{
    zodiacsign="Cancer";
}
else if ((month == "July" && day >=23 )||(month == "August"&& day<=22))
{
    zodiacsign="Leo";
}
else if ((month == "August" && day >=23 ) || (month == "September"&&  day<=22))
{
    zodiacsign="Virgo";
}
else if ((month == "September" && day >=23 )||(month == "October"&& day<=22))
{
    zodiacsign="Libra";
}
else if ((month == "October" && day >=23 )||(month == "November"&&  day<=21))
{
    zodiacsign="Scorpio";
}
else if ((month == "November" && day >=22 )||(month == "December"&&  day<=21))
{
    zodiacsign="Saggitarius";
}
else if(((month == "December" && day >=22 ))||(month == "January"&&  day<=19))
{
    zodiacsign="Capricorn";
}
else if ((month == "January" && day >=20 )||(month == "Febraury"&& day<=18))
{
    zodiacsign="Aquarius";
}
else if ((month == "Febraury" && day >=19)||(month == "March"&& day<=20))
{
    zodiacsign="Pisces";
}
return zodiacsign;
}