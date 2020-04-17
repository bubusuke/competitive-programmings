#include <algorithm>
#include <vector>
using namespace std;


// next permutation を使うもの
int main() {
  vector<int> v(n);

  //順列生成
  do{
    //vは次の順列になる
    for(int i=0;i<n;i++){
          //なんらかの操作
    }
  }while(next_permutation(v.begin(),v.end()));
}

/** 手作り
 *  getPermutations(空の配列,並べる対象の配列)　で使用する。
 *  例：
 *    vector<int> v = {1,2,3};
 *    vector<int> blank;
 *    vector<vector<int>> permutations = getPermutations(blank, v);
 */
vector<vector<int>> getPermutations(vector<int> pre, vector<int> rest){
  vector<vector<int>> ret;
  if (rest.size()==0) {
    ret.push_back(pre);
    return ret;
  }
  for(int i=0; i<rest.size(); i++){
    vector<int> nextPre = pre;
    nextPre.push_back(rest[i]);

    vector<int> nextRest;
    for(int j=0; j<rest.size(); j++){
      if(i != j){
        nextRest.push_back(rest[j]);
      }
    }
    vector<vector<int>> tmpret = getPermutations(nextPre, nextRest);
    for(auto tmp: tmpret){
      ret.push_back(tmp);
    }
  }
  return ret;
}
