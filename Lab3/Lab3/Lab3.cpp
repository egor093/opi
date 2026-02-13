#include <iostream>
//SibilkovEgor2007
// Windows-1251 53 69 62 69 6c 6b 6f 76 45 67 6f 72 32 30 30 37
// UTF-8 53 69 62 69 6c 6b 6f 76 45 67 6f 72 32 30 30 37 
// UTF-16 53 00 69 00 62 00 69 00 6c 00 6b 00 6f 00 76 00 45 00 67 00 6f 00 72 00 32 00 30 00 30 00 37 00


//СибильковЕгорДмитриевич2007
// Windows-1251 d1 e8 e1 e8 eb fc ea ee e2 c5 e3 ee f0 c4 ec e8 f2 f0 e8 e5 e2 e8 f7 32 30 30 37
// UTF-8 d0a1 d0b8 d0b1 d0b8 d0bb d18c d0ba d0be d0b2 d095 d0b3 d0be d180 d094 d0bc d0b8 d182 d180 d0b8 d0b5 d0b2 d0b8 d187 32 30 30 37 
// UTF-16 21 04 38 04 31 04 38 04 3b 04 4c 04 3a 04 3e 04 32 04 15 04 33 04 3e 04 40 04 14 04 3c 04 38 04 42 04 40 04 38 04 35 04 32 04 38 04 47 04 32 00 30 00 30 00 37 00


//Сибильков2007Egor
//Windows-1251 d1 e8 e1 e8 eb fc ea ee e2 32 30 30 37 45 67 6f 72
// UTF-8 d0a1 d0b8 d0b1 d0b8 d0bb d18c d0ba d0be d0b2 32 30 30 37 45 67 6f 72 
// UTF-16 21 04 38 04 31 04 38 04 3b 04 4c 04 3a 04 3e 04 32 04 32 00 30 00 30 00 37 00 45 00 67 00 6f 00 72 00

int main()
{
    int number = 0x12345678;
    char lfie[] = "SibilkovEgor2007";
    char rfie[] = "СибильковЕгорДмитриевич2007";
    char lr[] = "Сибильков2007Egor";

    wchar_t Lfie[] = L"SsibilkovEgor2007";
    wchar_t Rfie[] = L"СибильковЕгорДмитриевич2007";
    wchar_t LR[] = L"Сибильков2007Egor";

    std::cout << lfie << std::endl;
    return 0;
}