#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float fl = sqrt(n);
    int l = (int)fl;
    if (fl == l)
    {
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < l; j++)
            {
                cout << '*';
            }
            cout << '\n';
        }
    }
    else
    {
        cout << "Can't create such square";
    }
}