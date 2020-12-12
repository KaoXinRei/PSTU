#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	bool flag = true;
	cin >> b;
	cin >> a;
	while (a != 0)
	{
		if (a <= b)
		{
			flag = false;
			break;
		}
		b = a;
		cin >> a;
	}
	if (flag)
	{
		cout << "Numbers are in ascending order";
	}
	else
	{
		cout << "Numbers are not in ascending order";
	}
}