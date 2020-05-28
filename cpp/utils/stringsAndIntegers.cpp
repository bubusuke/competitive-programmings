#include <bits/stdc++.h>
using namespace std;


string toUpper(string s){
  transform(s.cbegin(), s.cend(), s.begin(), ::toupper);
  return s;
}
string toLower(string s){
  transform(s.cbegin(), s.cend(), s.begin(), ::tolower);
  return s;
}

int main() {

    // string -> int
    cout << stoi("100") << endl;

    // int -> string
    cout << to_string(100) << endl;

    // 固定文字の生成
    string allA = string(100, 'a'); // aaa....aaa (length 100)
 

    return 0;
}