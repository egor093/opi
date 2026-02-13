#include <cctype>
#include <iostream>
#include <Windows.h>
#include "latin_letter.h"
#include "russian_letter.h"
#include "number.h"
#include "exit.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;

	do {
	     cout << "Введите число: 1 - символ латинского алфавита, 2 - символ русского алфавита, 3 - цифра, 4 - выход из программы" << endl;
	     cin >> choice;

	     switch (choice) {
	     case 1:
		      getLatinLetter();
		      break;

	     case 2:
		      getRussianLetter();
	       	  break;

       	 case 3:
		      getNumber();
		      break;

	     case 4:
		      exit();
		      break;

	     default:
		      cout << "Ошибка: введен неверный номер" << endl;
		      break;
	     }

	} while (choice != 4);

	return 0;
}

