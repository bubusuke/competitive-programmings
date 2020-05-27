#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  unordered_map<int, int> parent, siz;
  UnionFind(int n) {
    for (int i = 0; i < n; i++) {
      parent[i]=i;
      siz[i]=1;
    }
  }
  int find (int x){
    if (parent[x]==x) return x;
    return find(parent[x]);
  }
  void unite(int x, int y){
    int routeX = find(x);
    int routeY = find(y);
    if (routeX == routeY) return;
    
    if (siz[routeX] < siz[routeY]) swap(routeX,routeY);
    parent[routeY] = routeX;
    siz[routeX] += siz[routeY];
  }
  int size(int x) {return siz[find(x)];}
  bool same(int x, int y) {return find(x)==find(y);}
};
