#include <iostream>
using namespace std;
// void nhap(int a){ // chi tao ra mot ban sao giu lieu
//     cin>>a;
// }
void nhap(int &a){ //toan tu & de lay dia chi
    cin>>a;
}
int main(){
    int b = 0;
    nhap(b);
    cout<<b;
}
