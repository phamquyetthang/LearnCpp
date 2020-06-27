#include <iostream>
using namespace std;
struct Rectangle {
    // your code goes here
    // Cac bien thanh vien
    int height;
    int length;
    // your code goes here
    // Hai ham khoi tao
    Rectangle(){
        height = 0;
        length = 0;
    }
    Rectangle(int h, int l){
        height = h;
        length = l;
    }
    int getPerimeter() {
        // your code goes here
        return height* 2 + length*2;
    }
    
    void print() {
        // your code goes here
        for (size_t i = 1; i <= height; i++)
        {
            for (size_t j = 1; j <= length; j++)
            {
                if(i == 1 || i == height){
                    cout<<"*";
                }else
                {
                    if (j == 1 || j == length)
                    {
                         cout<<"*";
                    }else
                    {
                        cout<<" ";
                    }
                    
                }
            }
            cout<<endl;
            
        }
        
    }
};

int compare(Rectangle a, Rectangle b) {
    // your code goes here
    int c1, c2;
    c1 = a.getPerimeter();
    c2 = b.getPerimeter();
    if (c1>c2)
    {
        return 1;
    }
    else if (c1< c2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main(){
    Rectangle a;
a.height = 3;
a.length = 4;
cout << a.getPerimeter() << endl;
a.print();
    return 0;
}