#include <iostream>
using namespace std;

//  long mod =  1e9+7;   10^9+7を意味する

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

//最大公約数
template <typename T>
T gcd(T a, T b) {
   if (a%b == 0) return b;
   return gcd(b, a%b);
}

//最小公倍数
template <typename T>
T lcm(T a, T b) {
   return (a / gcd(a, b)) * b ;
}


//num が den で割り切れないとき: a/b に+1する
template <typename T>
T roundUpDiv(T num, T den){
    return (num-1)/den+1;
}

//初項ini, 項差diff, 項数numの等差数列の和
template <typename T>
T sumUpArithmeticProgression(T ini, T diff, T num){
  	return num  * ((T)2*ini + (num-(T)1)*diff)/ (T)2;
}

