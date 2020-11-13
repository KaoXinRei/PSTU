#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
	n = n / 2;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n + i + 1; j++)
        {
            if (i + j > n)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}

