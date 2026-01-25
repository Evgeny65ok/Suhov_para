#include <iostream>
using namespace std;
string convertToBase(int val, int base) {
    if (val == 0) return "0";
    string res = "";
    while (val > 0) {
        int digit = val % base;
        char symbol;
        if (digit < 10)
            symbol = '0' + digit;  
        else
            symbol = 'A' + (digit - 10); 
        
        res = symbol + res; 
        val = val / base;
    }
    
    return res;
}
int main() {
    int n;
    cout << "Введите основание системы счисления (n): ";
    cin >> n;
    if (n == 2 || n == 8 || n == 10 || n == 16 || n >= 30) {
        cout << "Ошибка: такое основание нельзя!" << endl;
        return 0;
    }
    
    cout << "Таблица умножения в " << n << "-ричной системе:\n\n";
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int mul = i * j;
            cout << convertToBase(mul, n) << "\t";
        }
        cout << endl;
    }
    
    return 0;
}