
#include <iostream>
#include <Windows.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".1251");
    FILE* stream;
    wchar_t ch;
    string dot;
    cout << "Введите путь к файлу:";
    cin >> dot;
    fopen_s(&stream, dot.data(), "r, ccs=UTF-8");
    if (stream == NULL)
    {
        cout << "Ошибка открытия файла";
        exit(0);
    }

    ch = fgetwc(stream);
    while (ch != WEOF)
    {
        wcout.put(ch);
        if (ch != '\n' && ch != ' ')
            wcout.put(' ');
        ch = fgetwc(stream);
    }
    fclose(stream);
}
