#include <cmath>
#include <iostream>
using namespace std;
double a, b, c;
const double e = 0.00001;
int k;
double f(double x)
{
	return acos(x) - pow((1 - 0.3 * pow(x, 3)), 0.5);
}
int main()
{
	k = 0;
	a = 0;
	b = 1;
	while (b - a > e) {
		c = (a + b) / 2;
		if ((f(b) * f(c)) < 0)
			a = c;
		else
			b = c;
		k = k + 1;
		cout << (a + b) / 2 << endl;
	}
	cout << (a + b) / 2 << endl;
	cout << k;
	return 0;
}
