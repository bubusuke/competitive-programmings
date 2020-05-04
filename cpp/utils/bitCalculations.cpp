#include <iostream>
#include <bitset>
using namespace std;

//★★以下のi番目は1から始まる。0番目はない。★★
//ビット bit に i 番目のフラグが立っているかどうか  if (bit & (1<<i))
//ビット bit に i 番目のフラグが消えているかどうか  if (!(bit & (1<<i)))
//ビット bit に i 番目のフラグを立てる              bit｜= (1<<i)
//ビット bit に i 番目のフラグを消す                bit &= ~(1<<i)
//ビット bit に何個のフラグが立っているか           __builtin_popcount(bit)
//ビット bit に i 番目のフラグを立てたもの             bit｜(1<<i)
//ビット bit に i 番目のフラグを消したもの          bit & ~(1<<i)

//bit出力                                           bitset<8>(int X)

//bit全検索
//n 個の要素からなる集合 {0,1,…,n−10,1,…,n−1} の部分集合
int bitFullSearch(int n){
  
  for(int bit=0; bit < (1<<n); bit++){
    
    cout << bitset<8>(bit) << endl;
    
  }
  return 0;
}

int main(){

  return bitFullSearch(4);

}

