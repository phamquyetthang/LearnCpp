#include <iostream>
using namespace std;
void nhap(int n, int a[]){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    };
}
int check(int x, int n, int a[]){
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return 1;
        }
    };
}
int main(){
    int n;
    int a[n];
    int x;
    nhap(n, a);
    int e = check(x, n, a);
    if (e == 1)
    {
        cout<<"Yes";
    }else
    {
        cout<<"No";
    };
    cout << n;
    return 0;
}
