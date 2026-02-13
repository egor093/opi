#include <cctype>
#include <iostream>
#include <Windows.h>
using namespace std;

void getLatinLetter() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char input;

    do {
	    cout << "Введите символ латинского алфавита" << endl;
	    cin >> input;

	    if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')){
	    float diferens = toupper(input) - tolower(input);
	    cout << "Разница значений кодов: " << abs(diferens) << endl;
	    }

	    else {
		cout << "Ошибка: введеный символ не является буквой латинского алфавита" << endl;
	    }

    } while (input != 0x2e);
}

