#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;


//sort : クイックソートのため、同じ値同士の順序が維持されません
//stable_sort : マージソート、同じ値同士の順序が維持されます

#include <algorithm>
int array_sort(){

    int N; //要素数
    int A[N]; //配列

    //なにかしらでAに値セット

    sort(A, A + N); // 昇順
    sort(A, A + N, greater<int>()); //降順

}


#include <algorithm>
#include <vector>
int vector_sort(){

    int N; //要素数
    vector<int> A(N); //配列

    //なにかしらでAに値セット

    sort(A.begin(),A.end());    //昇順
    sort(A.begin(),A.end(),std::greater<int>());    //降順
}

