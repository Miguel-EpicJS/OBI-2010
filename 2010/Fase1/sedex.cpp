#include <iostream>

using namespace std;

int main()
{
    int c,x,y,z;
    cin >> c;
    cin >> x >>  y >> z;

    if (c <= x && c <= y && c <= z)
    {
        /* code */
        cout << "S" << endl;

    }else
    {
        cout << "N" << endl;
    }
    
    

    return 0;
}
