#include "pch.h""
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cin >> n;
	switch (n) {
	case 1:
		cout << "понедельник";
		break;
	case 2:
		cout << "вторник";
		break;
	case 3:
		cout << "среда";
		break;
	case 4:
		cout << "четверг";
		break;
	case 5:
		cout << "пятница";
		break;
	case 6:
		cout << "суббота";
		break;
	case 7:
		cout << "воскресенье";
		break;
	default:
		cout << "ERROR";
		break;
	}

	main();
}