#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


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