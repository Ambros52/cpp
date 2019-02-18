#include "pch.h""
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float k, b, R, d;
	cin >> k >> b >> R;

	//(y*y +  x*x) = R*R
	//y = x*k + b

	//x*x + (kx + b)(kx + b) = R*R

	//x*x + k*k*x*x + 2bkx + b*b = R*R
	// (k*k + 1)*x*x + 2*b*k*x + b*b = R*R

	d = 4 * b*b*k*k - 4 * (k*k + 1) * (b*b - R * R);
	if (d == 0)
		cout << "1";
	else if (d > 0)
		cout << "2";
	else
		cout << "0";
}