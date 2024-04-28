#include <iostream>
using namespace std;

// калькулятор с помощью switch_case

int main()
{
	int var, a, b;
	cout << "Введите число для var = "; cin >> var;
	cout << "Введите число для a = "; cin >> a;
	cout << "Введите число для˙ b = "; cin >> b;

	switch (var)
	{
		case 1:
			cout << "Сумма = " << a + b;
			break;
		case 2:
			cout << "Разность = " << a - b;
			break;
		case 3:
			cout << "Произведение = " << a * b;
			break;
		case 4:
			cout << "Деление = " << (double)a / b;
			break;
		default:
			cout << "Такого варианта нет" << endl;
			break;
	}
}
