#include <iostream>
using namespace std;

//累乗
#include <math.h>
int sample(){ 
    return pow(2, 3); //2^3
}

//a が b で割り切れるとき: a/b
//a が b で割り切れないとき: a/b + 1
int sample2(){ 
    int a, b;
    return (a + b - 1) / b ; 
}

//初項ini, 項差diff, 項数numの等差数列の和
long sumUp(long ini, long diff, long num){
  	return num  * (2*ini + (num-1)*diff)/ 2;
}

