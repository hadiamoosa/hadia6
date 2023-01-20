#include <iostream>
using namespace std;
void point(int b, int x, int y);

main()
{
    
    
        int b;
        int x;
        int y;
        cout << "Enter h : ";
        cin >> b;
        cout << "Enter x coordinate : ";
        cin >> x;
        cout << "Enter y coordinate : ";
        cin >> y;
        point(b,x,y);
    
}

void point(int b, int x, int y)
{
    if ((x > 0 && x < 3 * b && y > 0 && y < b) || (x > b && x < 2 * b && y > 0 && y < 4 * b))
    {
        cout << "Inside" << endl;
    }
    else if ((x >= 0 && x <= 3 * b && y >= 0 && y <= b) || (x >= b && x <= 2 * b && y >= 0 && y <= 4 * b))
    {
        cout << "Border" << endl;
    }
    else
    {
        cout << "Outside" << endl;
    }
}