#include <iostream>
using namespace std;

int main()
{
	int n;
	float x, sum = 1, x_elem = 1, f_elem = 1;
	cout << "X: ";
	cin >> x;
	cout << "N: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		f_elem *= i;
		x_elem *= x;
		sum += x_elem / f_elem;
	}
	cout << sum;
}