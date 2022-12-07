#include <iostream>

using namespace std;

int main()
{
	int g, h,j;
	char name;// мини калькулятор c использованием 2 чисел
	cout << "I am calculator    " << endl;
	cout << "choose hint ( - , + , * or /)   ";
	cin >> name;
	if (name == '-') {
		cout << "first mean = ";
		cin >> g;
		cout << "second mean = ";
		cin >> h;
		j = g - h;
		cout << "answer = " << j;
	}
	else if (name == '+') {
		cout << "first mean = ";
		cin >> g;
		cout << "second mean = ";
		cin >> h;
		j = g + h;
		cout << "answer = " << j;
	}
	else if (name == '*') {
		cout << "first mean = ";
		cin >> g;
		cout << "second mean = ";
		cin >> h;
		j = g * h;
		cout << "answer = " << j;
	}
	else if (name == '/') {
		cout << "first mean = ";
		cin >> g;
		cout << "second mean = ";
		cin >> h;
		j = g / h;
		cout << "answer = " << j;
	}
	else {
		cout << "my mini programm can't do it yet but wait for the update my developers will fix it ^--^";
	}



	return 0;
}