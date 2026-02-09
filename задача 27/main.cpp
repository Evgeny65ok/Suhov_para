#include <iostream>
using namespace std;
int circles[10]; // 10 кружков создаём хотя
int shadedResult = -1; //результат
void findSolution(int pos); //будет рабоать за решение как список что бы работал перебор
int main() {findSolution(1);
    if (shadedResult != -1) {
        cout << "Число в закрашенном кружке: \n" << shadedResult ;
    } else {
        cout << "Решение не найдено \n" 
    }
    return 0;
}