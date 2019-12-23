#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    string s;
    
    cout << "Введите строку";
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++){
        if (s[i] != ' '){
            cout << s[i] << " ";
        }
    }
}
