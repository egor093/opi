#include <cctype>
#include <iostream>
#include <Windows.h>
using namespace std;

void getNumber() {
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char inputChar;

    do {
   	    cout << "Введите цифру: ";
	    cin >> inputChar;

	    if (isdigit(inputChar)) {
		    cout << "Код символа '" << inputChar << "': " << int(inputChar) << endl;
	    }

	    else {
		    cout << "Ошибка: введеный символ не является цифрой" << endl;
	    }

    } while (inputChar != 0x2e);
}
