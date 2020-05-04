#include <iostream>
using namespace std;

//累乗
#include <math.h>
int sample(){
    return pow(2, 3); //2^3
}

//  long mod =  1e9+7;   10^9+7を意味する


//a が b で割り切れるとき: a/b
//a が b で割り切れないとき: a/b + 1
int sample2(){
    int a, b;
    return (a + b - 1) / b ;
}
