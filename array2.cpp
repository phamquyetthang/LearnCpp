#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	int n; cin>>n;
	int b[n], am[n], duong[n], a[n];
	int soam = 0, soduong = 0, sok = 0, sokhong, l=0;
	
	for(int i = 0; i<n;i++)
		cin>>b[i];
	sort(b, b+n);
	for(int i = 0; i<n; i++){
		int dem = 0;
		for(int j = i-1; j>=0; j--){
			if(b[i] == b[j])
				dem++;
		}
		if(dem ==0){
			a[l] = b[i];
			l++;
		}
		else continue;
	}
	for(int i = 0; i<l; i++){
		if(a[i] == 0)
			sok++;
		if(a[i] > 0){
			duong[soduong] = a[i];
				soduong++;
		}
		if(a[i] < 0){
			am[soam] = a[i];
			soam++;
		}
	}
	if(sok == 1){
		am[soam] = 0;
		soam++;
	}
	for(int i = 0; i<soduong; i++){
		int tg;
		for(int j = i+1; j<soduong; j++){
			tg = duong[i]+duong[j];
			for(int k = 0; k<soam; k++)
				if(tg + am[k] == 0)
					cout<<duong[i]<<" "<<duong[j]<<" "<<am[k]<<endl;			
		}
	}
	for(int i = 0; i<soam; i++){
		int tg;
		for(int j = i+1; j<soam; j++){
			tg = am[i]+am[j];
			for(int k = 0; k<soduong; k++)
				if(tg + duong[k] == 0)
					cout<<am[i]<<" "<<am[j]<<" "<<duong[k]<<endl;			
		}
	}
	
	return 0;
}