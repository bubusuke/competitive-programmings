#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
using namespace std;

int queue_sample(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << " "; // 先頭要素を参照する
        q.pop(); // 先頭要素を削除
    }

    return 0;  // 1 2 3
}

int stack_sample(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty()) {
        cout << s.top() << " "; // 先頭要素を参照する
        s.pop(); // 先頭要素を削除
    }

    return 0;  // 3 2 1


}
