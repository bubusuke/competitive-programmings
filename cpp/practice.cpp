#include <iostream>
using namespace std;

int main() {
    long K;

    cin >> K ;
    long answer[K+100000];
	long baseVal = 20;
	int i = 1;
  	while(i <= K ){ 
        if( i <= 12){
            answer[i] = i;
            i++;
        } else {
                long base = (baseVal/10)%10; //10の位
                if(base-1>=0){
                   answer[i]= baseVal+base-1;
                   i++;
                }
                answer[i]= baseVal+base;
                i++;
                if(base+1<10){
                   answer[i]= baseVal+base+1;
                   i++;
                }
                baseVal+=10;
        }    
    }

    cout << answer[K] << endl;
    return 0;
}
