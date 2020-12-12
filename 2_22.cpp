#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, num, n_max = 0;
	cout << "n: ";
	cin >> n;
	cout << "Number of element to check: ";
	cin >> num;
	float max = sin(n);
	for (int i = 1; i < num; i++)
	{
		float elem = sin(n + i / n);
		if (elem > max)
		{
			max = elem;
			n_max = i;
		}
	}
	cout << "Max element is " << max;
	cout << "\nIt number is " << n_max;
}