#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int m = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if ((i+j)%2==1)
            {
                cout << ".";
            }
            else
            {
                cout << " *";
            }
        }
        cout << endl;
    }
    return 0;
}
