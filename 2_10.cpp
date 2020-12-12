#include <iostream>
using namespace std;

int main()
{
	int n, a, max;
	cout << "Number of elements: ";
	cin >> n;
	cin >> a;
	max = a;
	for (int i = 1; i < n; i++)
	{
		cin >> a;
		if (a > max)
		{
			max = a;
		}
	}
	cout << "Max elemnt is " << max;
}