
#include<iostream>
#include<string>
using namespace std;
class car{
public:
    string brand;
    string model;
    int year;
    car(string x, string y, int z){
        brand=x;
        model=y;
        year=z;
    };
};
int main(){
    car ob1("Toyota", "Revo",2020);
    car ob2("Chevrolet","Colorado",2019);
    car ob3("Mazda","Pickup",2020);
    string s= ob1.brand;
   cout << ob1.brand <<" "<<ob1.model<<" "<<ob1.year<<end;
   cout << ob2.brand <<" "<<ob2.model<<" "<<ob2.year<<end;
   cout << ob3.brand <<" "<<ob3.model<<" "<<ob3.year<<end;
    return 0;
}
