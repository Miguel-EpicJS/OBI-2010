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
// Link da explicação de cada código https://pt.stackoverflow.com/questions/446746/resolvendo-obi-2010-ex-do-gar%c3%a7om/446747#446747
