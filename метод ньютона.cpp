#include<iostream>
#include<math.h>
using namespace std;
double a, b, c;
int k;
const double e = 0.00001;
double f(double x)
{
	return acos(x) - sqrt(1 - 0.3 * pow(x, 3));
}
double f1(double x)
{
	return 0.9 * pow(x, 2) / 2 * pow((1 - 0.3 * pow(x, 3)), 0.5) - 1 / pow((1 - pow(x, 2)), 0.5);
}
double f2(double x)
{
	return (1.8 * x * 2 * pow((1 - 0.3 * pow(x, 3)), 0.5) - 0.9 * pow(x, 2)
		/ pow((1 - 0.3 * pow(x, 3)), 0.5)) / (4 - 1.2 * pow(x, 3))
		- 2 * x / (1 - pow(x, 2));
}
int main()
{
	a = 0;
	b = 0.9;
	k = 0;
	if (f(a) * f2(a) > 0)
		c = a;
	else
	{
		if (f(b) * f2(b) > 0)
			c = b;
		else
		{
			c = -100000;
		}
	}
	if (c > -100000)
	{
		while (fabs(f(c)) > e)
		{
			c = c - f(c) / f1(c);
			k = k + 1;
			cout << c << endl;
		}
	}
	cout << k;
	return 0;
}

