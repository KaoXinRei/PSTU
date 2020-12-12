#include <iostream>
using namespace std;

int main()
{
	int n, a = 0;
	cin >> n;
	while (n > 0)
	{
		a += n % 10;
		n /= 10;
	}
	cout << a;
}