#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int tg = 0;
    for(size_t i= 0; i< n; i++){
        cin>>a[i];
    }
    int mina= abs(a[0]-a[1]);
    for(size_t i = 0; i< n; i++){
        for(size_t j = i+ 1; j < n; j++){
            tg = abs(a[i]-a[j]);
            if(mina>tg){
                mina = tg;
            }
        }
    }
	cout << mina;
	return 0;
}
