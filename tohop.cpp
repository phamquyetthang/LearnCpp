// Ta có công thức truy hồi như sau:C^k_n + C^{k+1}_n = C^{k+1}_{n+1}

// Với các tính chất sau:

// C^0_n=C^n_n = 1
// C^1_n = C^{n-1}_n = n
#include<iostream>
using namespace std;
int C(int n, int k) {
    if (n == 0 || k == n) return 1;
    if (n == 1) return n;
    return C(n - 1, k - 1) + C(n, k - 1);
}

int main(){
    int n, k;
    cout << "Nhap k: ";
    cin >> k;
    cout << "Nhap n: ";
    cin >> n;
    cout << "To hop bang: " << C(k, n);
    return 0;
}
