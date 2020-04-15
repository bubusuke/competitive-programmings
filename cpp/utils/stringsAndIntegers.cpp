#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {

    // string -> int
    cout << stoi("100") << endl;

    // int -> string
    cout << to_string(100) << endl;

    // 固定文字の生成
    string allA = string(100, 'a'); // aaa....aaa (length 100)
 

    return 0;
}