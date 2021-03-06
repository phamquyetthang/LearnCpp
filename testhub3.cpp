#include <iostream>
#include <cmath>
using namespace std;
struct Point 
{
    double x, y;  // Toạ độ x, y
    Point(); // Hàm khởi tạo điểm (0, 0)
    Point(double, double); // Hàm khởi tạo từ toạ độ x, y
    Point(const Point&); // Hàm khởi tạo sao chép từ một thực thể (instance) Point khác
};

class Triangle 
{
    Point p1, p2, p3;
public:
    Triangle(const Point& , const Point& ,  const Point &); // Hàm khởi tạo tam giác từ 3 điểm
    double getPerimeter() const;  // Hàm trả về chu vi tam giác
    double getArea() const;  // Hàm trả về diện tích tam giác
    // Từ khoá const ở cuối đảm bảo hàm không làm thay đổi các biến thành viên p1, p2, p3
};
Point::Point()
{
    // Your code here
    x= y = 0;
}
    
Point::Point(double x_, double y_)
{
    // Your code here
    x= x_;
    y= y_;
}
    
Point::Point(const Point& p)
{
    // Your code here
    x = p.x;
    y = p.y;
}


Triangle::Triangle(const Point& p1_, const Point& p2_, const Point& p3_)
{
    // Your code here
    p1 = p1_;
    p2 = p2_;
    p3 = p3_;
}
    
double Triangle::getPerimeter() const
{
    // Your code here
    double a, b, c;
    a = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
    b = sqrt((p1.x - p3.x)*(p1.x - p3.x) + (p1.y - p3.y)*(p1.y - p3.y));
    c = sqrt((p3.x - p2.x)*(p3.x - p2.x) + (p3.y - p2.y)*(p3.y - p2.y));
    return a+b+c; // Change this line
}

double Triangle::getArea() const
{
    // Your code here
    double s = 0.5 * abs(((p2.x - p1.x)*(p3.y - p1.y)) - ((p3.x - p1.x)*(p2.y - p1.y)));
    return s; // Change this line
}
int main(){
    Point A(1,1), B(1, 4), C(5, 1);
Triangle tri(A, B, C);
cout << tri.getArea() << endl;
    return 0;
}