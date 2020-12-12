#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "a*x^2 + b*x + c = 0 \n";
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	float d = pow(b, 2) - 4 * a * c;
	if (d < 0)
	{
		cout << "No real solutions";
	}
	else if (d == 0)
	{
		cout << "X = " << -b / (2 * c);
 	}
	else
	{
		cout << "X1 = " << (-b - pow(d, 0.5)) / (a * 2) << ", X2 = " << (-b + pow(d, 0.5)) / (a * 2);
	}
}