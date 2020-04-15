#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int N;
  int W;

  cin >> N >> W;
  std::vector<int> v(N, 0);
  std::vector<int> w(N, 0);

  for (int i = 0; i < N; i++) cin >> v[i] >> w[i];

  // ナプサックがWだった時の最大価値
  std::vector<int> dp(W+1, 0);

  for (int i = 0; i < N; i++){
    std::vector<int> nextDP(W+1, 0);

    for (int j=0; j <= W; j++){
      //荷物を入れる場合は入れた場合との価値の差を確認
      if (j >= w[i]){
        nextDP[j] = max(dp[j - w[i]] + v[i], nextDP[j]);
      } 
    }
    dp = nextDP;
  }

  cout << dp[W] << endl;
  return 0;
}
