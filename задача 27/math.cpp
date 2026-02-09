#include <iostream>
extern int circles[10]; 
extern int shadedResult; 
bool check(){
    long long p1 = (long long)circles[1] * circles[2] * circles[3] * circles[4];
    long long p2 = (long long)circles[4] * circles[5] * circles[6] * circles[7];
    long long p3 = (long long)circles[7] * circles[8] * circles[9] * circles[1];
    return (p1 == p2 && p2 == p3); //возразает и проверят ли равны ли все перменные
}
bool used[10]; // нужно что бы принммала целое число
void findSolution(int pos) {
    