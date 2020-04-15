#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
using namespace std;

const int INF = 100000000;
//状態を表すクラスpair、typedef
typedef pair<int, int> P;
const int MAX_N=100;
const int MAX_M=100;

//入力
char maze[MAX_N][MAX_M + 1]; // 迷路
int N, M;
int sx, sy;
int gx, gy;

int d[MAX_N][MAX_M]; //最短距離

int dx[4] = {1, 0, -1, 0} , dy[4] = { 0, 1, 0, -1};

// (sx, sy)から(gx、gy)への最短距離を求める
// たどりつけないとINF
int bfs(){
    queue<P> que; 

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j ++){
            d[i][j]= INF;
        }
    }

    //スタート地点をキューに入れる
    que.push( P(sx, sy));
    d[sx][sy]=0;

    //キューが空になるまでループ
    while (que.size()){
        //キューの先頭を取り出す
        P p = que.front(); que.pop();
        //取り出してきた状態がゴールなら探索終了
        if (p.first == gx && p.second == gy ){
            break;
        }

        //移動4方向をループ
        for (int i = 0; i < 4; i++){
            //移動した後の点を(nx, ny)とする
            int nx = p.first + dx[i] , ny = p.second + dy[i];

            //移動可能か
            if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#'){
                //初めて通る箇所か
                if (d[nx][ny] ==INF){
                    que.push(P(nx, ny));
                    d[nx][ny]= d[p.first][p.second]+1;
                }
            }
        }
    }
    return d[gx][gy];

}

int main() {

    map<string, string> mapUtils;

    // キーの存在チェック
    if ( mapUtils.count("check") == 0){
        //存在しない
    } else {
        //存在する
    }

    // セット
    mapUtils["key"] = "value";

    // map ループ
    auto begin = mapUtils.begin(), end = mapUtils.end();
    for (auto iter= begin; iter != end; iter++){
        string key = iter->first;
        string value = iter->second;

    }
    return 0;
}