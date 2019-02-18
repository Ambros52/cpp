#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x1, y1, x2, y2, x3, y3, a, b, c, s, p, hip;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

	p = (a + b + c)/2;
	s = p * sqrt((a - p) * (b - p) * (c - p));

	if (a >= b) {
		if (a >= c) {
			hip = a;
			a = c;
		}
		else hip = c;
	}
	else {
		if (b >= c) {
			hip = b;
			b = c;
		}
		else {
			hip = c;
		}
	}

	if (hip * hip <= a * a + b * b || a > (b + hip) || b > (a + hip) || hip > (a + b))
		cout << "-1";
	else if (hip * hip > a * a + b * b)
		cout << s;

	main();
}