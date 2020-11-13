#include <iostream>
using namespace std;

int main()
{
    int s = 0, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int elem = 1;
        for (int j = i; j <= i * 2; j++)
        {
            elem *= j;
        }
        s += elem;
    }
    cout << s;
}
