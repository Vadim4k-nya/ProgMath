#include <iostream>
#include <cmath>

double F(double x)
{
	return 2 * sin(x) - atan(x);
}

int main()
{
	double a = 2.5, b = 2.6, c{}, x{}, e = 0.001;

	while (b - a > 2 * e)
	{
		c = (a + b) / 2;
		if (F(a) * F(c) < 0)
		{
			b = c;
		}
		else
		{
			a = c;
		}
	}
	x = (a + b) / 2;
	std::cout << "x = " << x;
}
