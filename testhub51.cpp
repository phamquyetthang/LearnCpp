#include <iostream>
using namespace std;
void nhap(int a[], int n){
    for(size_t i = 0; i<n; i++){
        cin>>a[i];
    }
}
void kiemtra(int a[], int n){
    bool cl = false;
    int dem = 0;
    int max1 , max2;
    max1 = max2 =1;
    for(size_t i = 0; i<n; i++){
        if(a[i]%2 != 0){
            cl = true;
            break;
        }
    }
    if(cl == false){
        cout<<"Day khong co so le.";
    }else{
        for(size_t i = 0; i<n; i++){
            if(a[i]%2 != 0 && a[i]> max2){
                max1 = max2;
                max2 = a[i];
                dem++;
            }
        }
        if(dem == 1){
            cout<<"Day co mot so le la: "<<max2<<".";
        }else{
            cout<<"Hai so le lon nhat la: "<<max2<<" va "<<max1<<".";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    nhap(a, n);
    kiemtra(a, n);
    return 0;
}