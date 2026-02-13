#include <cctype>
#include <iostream>
#include <Windows.h>
using namespace std;

void getRussianLetter() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char input;

    do {
	    cout << "Введите символ русского алфавита" << endl;
	    cin >> input;

	    if ((input >= 192 && input <= 255)  || (input == 184) || (input == 168)) {
		    float diferens = toupper(input) - tolower(input);
		    cout << "Разница значений кодов: " << abs(diferens) << endl;
	    }

	    else {
	    	cout << "Ошибка: введеный символ не является буквой русского алфавита" << endl;
	    }

    } while (input != 0x2e);
}