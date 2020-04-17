#include <iostream>

using namespace std;

int main()
{
    int m,l,c,t =0;
    cin >> m;
    
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> l >> c;
        if (l > c)
        {
            /* code */
            t += c;
        }
        
    }

    cout << t << endl;
    

    return 0;
}
