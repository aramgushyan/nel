#include<iostream>
#include<math.h>
using namespace std;
const double e = 0.000001;
double a, b, c;
int k;
double u(double x)
{
	return cos(pow(1 - 0.3 * pow(x, 3), 0.5));
}
double u1(double x)
{
	return sin(pow(1 - 0.3 * pow(x, 3), 0.5)) * 0.9 * pow(x, 2);
}

int main()
{
	k = 0;
	a = 0;
	b = 1;
	c = (a + b) / 2;
	if (fabs(u1(c)) < 1)
	{
		while (fabs(c - a) > e)
		{
			a = c;
			c = u(c);
			cout << c << endl;
			k = k + 1;
		}
		cout << k << endl;
	}
	return 0;

}