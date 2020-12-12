#include <iostream>
using namespace std;

int main()
{
	int n, a;
	bool flag = true;
	cout << "Number of elements: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a < 0)
		{
			cout << "Negative is first";
			flag = false;
			break;
		}
		else if (a > 0)
		{
			cout << "Positive is first";
			flag = false;
			break;
		}
	}
	if (flag)
	{
		cout << "All elements are zeroes";
	}
}