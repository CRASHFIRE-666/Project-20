#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string string;
    char c;
    
    cout << "Введите строку";
    getline(cin, string);
    
    cout << "Введите символ";
    cin >> s;
    
    
    
    for (int i = 0; i < string.size(); i++){
        if (string[i] == s){
            cout << string[i] << s;
        }
        else{
            cout << string[i];
        }
    }

}
