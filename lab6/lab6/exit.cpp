#include <cctype>
#include <iostream>
#include <Windows.h>
using namespace std;

void exit() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Программа завершена";
}