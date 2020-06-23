/* viet ham kiem tra so nguyen to
dung ham vua viet in ra so nguyen to tu 1 den 100
dau vao : so tu 1 den 100
dau ra: neu no la snt thi in ra
*/

#include <iostream>
using namespace std;
int kiemtraNT(int n){
    // chia het cho 1 va chinh no
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            dem++;
        }
        if (dem > 2){ // toi uu hon, de khong can phai chay het mang
            return 0;
        }

    }
    if (dem == 2)
    {
        return 1; //bao hieu so do la so nguyen to
    }else
    {
        return 0;
    }


}
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (kiemtraNT(i) == 1)
        {
            cout<<i<<endl;
        }

    }
    return 0;
}
