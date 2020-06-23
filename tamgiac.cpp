#include <iostream>
using namespace std;
void printRow(int m, int n){
    for(int i = 1; i <= m; i++){
        cout<<" ";
    }
    for(int j = 1; j <= n; j++){
            cout<<"*";
        }
}
int main(){
    int n;
    cin>>n;
    for(int i = 1; i<= n; i++){
        if (i == 1){
            printRow(n-i, i);
        }else{
            printRow(n-i, i+(i-1));
        }
        cout<<endl;
    }

}
