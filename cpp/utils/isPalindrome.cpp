#include <iostream>
using namespace std;
//回文
bool isPalindrome(string s){

    for(int i = 0; i < s.size()/2; i++) {
        if(s[i]!=s[s.size()-1-i]){
            return false;
        }
    }
    return true;
}
