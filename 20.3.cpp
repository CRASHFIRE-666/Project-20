#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    string string;
    
    cout << "Введите строку";
    getline(cin, string);
    
    int k = 0;
    
    for (int i = 0; i < string.size(); i++){
        if (string[i] >= 'A' & string[i] <= 'Z'){
            k++;
        }
    }
    cout << k << endl;
}
