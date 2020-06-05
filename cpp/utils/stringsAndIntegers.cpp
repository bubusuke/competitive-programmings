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

vector<string> split(string s, char delim){
  int startIdx=0;
  int len = 0;
  vector<string> ret;
  for (int i = 0; i < (int)s.size(); i++) {
    if(s[i]==delim){
      if (len != 0) ret.push_back(s.substr(startIdx, len));
      startIdx=i+1;
      len=0;
    }
    len++;
  }
  if (len!=0) ret.push_back(s.substr(startIdx, len));
  return ret;
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