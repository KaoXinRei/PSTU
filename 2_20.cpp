#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, num;
	float z;
	bool flag = false;
	cout << "n: ";
	cin >> n;
	cout << "z: ";
	cin >> z;
	cout << "Number of element to check: ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		if (sin(n + i / n) == z)
		{
			flag = true;
			break;
		}
	}
	if (flag)
	{
		cout << "There is " << z;
	}
	else
	{
		cout << "There is no " << z;
	}
}