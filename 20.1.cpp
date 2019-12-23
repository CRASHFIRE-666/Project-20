#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char symbol, check;
    
    cout << "Введите символ";
    cin >> symbol;
    cout << char (symbol - 1) << endl;
    cout << char (symbol + 1) << endl;
}
