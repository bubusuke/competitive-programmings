#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>


//sort : クイックソートのため、同じ値同士の順序が維持されません
//stable_sort : マージソート、同じ値同士の順序が維持されます

using namespace std;


int main() {

    //宣言
    int vectorSize = 10;
    vector<int> sample(vectorSize);

    // セット
    sample[0] = 1;
    sample.push_back(1);

    // 昇順ソート
    sort(sample.begin(),sample.end());

    // 降順ソート
    sort(sample.begin(),sample.end(),std::greater<int>());
}
///////

struct cell{
	int no;
	char str[64];
};

bool operator<(const cell& left, const cell& right)
{
  return left.no < right.no ;
}

bool operator>(const cell& left, const cell& right)
{
  return left.no > right.no ;
}

int main2(){
	std::vector<cell> data;
	cell a;
/*
	a.no = 1;strcpy(a.str,"1です");
	data.push_back(a);
	a.no = 2;strcpy(a.str,"2です");
	data.push_back(a);
	a.no = 3;strcpy(a.str,"3です");
	data.push_back(a);
	a.no = 4;strcpy(a.str,"4です");
	data.push_back(a);
	a.no = 5;strcpy(a.str,"5です");
	data.push_back(a);
    */

   for (auto d : data){
	   cout << d.no << d.str << endl;

   }

	std::sort(data.begin(),data.end());//昇順ソート
	{for(int i=0;i<data.size();i++) printf("%s\n",data[i].str);}
	
	printf("\n");

	std::sort(data.begin(),data.end(),std::greater<cell>());//降順ソート
	{for(int i=0;i<data.size();i++) printf("%s\n",data[i].str);}


	
//イテレータを使って vector<int> data の要素を最初から最後まで参照する方法は？
    for(auto itr = data.begin(); itr != data.end(); ++itr) {
        *itr;
    }
//イテレータを使って vector<int> data の要素を最後から最初まで参照する方法は？
    for(auto itr = data.rbegin(); itr != data.rend(); ++itr) {
        *itr;
    }

}