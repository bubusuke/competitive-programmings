#include <iostream>
using namespace std;

//累乗
#include <math.h>
int sample(){
    return pow(2, 3); //2^3
}

template <typename T>
T modMinus(T a, T b, T mod) {
  a %= mod;
  b %= mod;
  return (a>b)? (a-b)%mod: (mod+a-b)%mod;
}

template <typename T>
T modPow(T base, T e, T mod) {
  if(e==0) return 1;
  if(e==1) return base%mod;
  if(e%(T)2==1) return (base * modPow(base, e-(T)1, mod)) %mod;
  
  T tmp = modPow(base, e/(T)2, mod);
  return (tmp * tmp) % mod;
}

template <typename T>
T primeModDiv(T num, T den, T primeMod){
  return ( num*modPow(den, primeMod-(T)2, primeMod) )%primeMod;
}

template <typename T>
T modComb(T n, T k, T mod) {
  T num = (T)1; //numerator
  T den = (T)1; //denominator
  if (k > n-k) k = n-k;
  for (T i = 1; i <= k; i++) {
    num *= (n-i+(T)1);
    num %= mod;
    den *= i;
    den %= mod;
  }
  return primeModDiv(num, den, mod);
}

template <typename T>
T Combination(T n, T k) {
  T val = 1;
  if (k > n-k) k = n-k;
  for (T i = 1; i <= k; i++) {
    val *= (n-i+1);
    val /= i;
  }
  return val;
}

//  long mod =  1e9+7;   10^9+7を意味する


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

