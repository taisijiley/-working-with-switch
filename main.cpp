#include <iostream>
using namespace std;

// ����������� � ������� switch_case

int main()
{
	int var, a, b;
	cout << "������� ����� ��� var = "; cin >> var;
	cout << "������� ����� ��� a = "; cin >> a;
	cout << "������� ����� ��� b = "; cin >> b;

	switch (var)
	{
		case 1:
			cout << "����� = " << a + b;
			break;
		case 2:
			cout << "�������� = " << a - b;
			break;
		case 3:
			cout << "������������ = " << a * b;
			break;
		case 4:
			cout << "������� = " << (double)a / b;
			break;
		default:
			cout << "������ �������� ���" << endl;
			break;
	}
}