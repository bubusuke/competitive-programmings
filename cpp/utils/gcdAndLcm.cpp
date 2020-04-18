#include <iostream>

using namespace std;

// 最大公約数(stdで提供されてる)
int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

// 最小公倍数
int lcm(int a, int b)
{
   return a * b / gcd(a, b);
}