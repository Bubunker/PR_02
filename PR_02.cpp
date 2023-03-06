#include "stdafx.h"
#include "math.h"
#include <cmath>
#include "iostream"
#include <string>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <stdio.h>

using namespace std;

class Employee
{
public:
	string name;
	int vozr;
};

void showData(Employee *group, int N)
{
	cout << "N " << "ФИО \t" << "Возраст" << endl;
	cout << "=====================================" << endl;

	for (int i = 0; i < N; i++) {
		cout << i + 1 << '\t' << group[i].name << '\t' << group[i].vozr << endl;
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int N;

	setlocale(LC_ALL, "Russian");
	cout << "ПР_01 Работа с товарами через функции\n";
	cout << "Напишите кол-во записей: \n";
	cin >> N;

	Employee employeelist[20];
	Employee *group = new Employee[N];
	cin.get();

	for (int i = 0; i < N; i++) {
		cout << "ФИО: ";
		getline(cin, group[i].name);
		cout << "Возраст: ";
		cin >> group[i].vozr;
		

		cin.get();					// считывает из потока Enter который пользователь нажимает после ввода
		cout << endl;
	}
	showData(group, N);

	return 0;
}

