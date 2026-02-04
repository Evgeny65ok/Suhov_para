#include <iostream>

int main() {
    std::cout << "HELLo world!\n"; //вывод на экран
    std::cerr << "ERROR!!!" << std::endl; //вывод о ошибках
    std::cout << "крутой \n";
    int a;
    std::cin >> a; //ввод с клавиатуры
    return a;
}
// ./HW Что бы программа заработала
// g++ -o HW HW.cpp что бы скомпилировалось ./ 
// echo $? - что бы вернуть перменную или ноль
// \n или << std::endl; что бы перети на новую строку
// ls -la дает файлы проекта
// ps -ax | grep HW - ВЫводит все процессы теминалы по нужному запросу
// cd /proc/
//cd fd переходим в папку директории
// ./HW 1 >> output 2 >> error.log 