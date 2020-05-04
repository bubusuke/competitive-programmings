
string abc="abcdefghijklmnopqrstuvwxyz";
string ABC="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

//string s のテキストをすべて大文字変換
#include <algorithm>
std::transform(s.cbegin(), s.cend(), s.begin(), ::toupper);

//小文字
std::transform(s.cbegin(), s.cend(), s.begin(), ::tolower);


//string s のsubstring
string s = "hello!";
s.substr(2, 3); // llo が出力
s.substr(2); // llo! が出力
 