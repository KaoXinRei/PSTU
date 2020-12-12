#include <iostream>
using namespace std;

int main()
{
	int n, z;
	bool flag = false;
	cin >> n >> z;
	while (n > 0)
	{
		if (z == n % 10)
		{
			flag = true;
			break;
		}
		n /= 10;
	}
	if (flag)
	{
		cout << "There is " << z << " in this number";
	}
	else
	{
		cout << "There is no " << z << " in this number";
	}
}