#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    string s, s0;
    
    
    cout << "Введите s";
    getline(cin, s);
     
    cout << "Введите s0";
    getline (cin, s0);
    
    int k = 0;
    
    for (int i = 0; i < s.size(); i++){
        int counter = 0;
        for (int j = 0; j < s0.size(); j++){
            if(s[i] == s0[j]){
                counter++;
                i++;
            }
            else{
                break;
            }
        }
        if (counter == s0.size()){
            k++;
        }
    }

    cout << k << endl;
}
