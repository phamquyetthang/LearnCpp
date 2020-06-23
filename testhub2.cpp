#include <iostream>
using namespace std;
struct TrangTrinhChieu 
{
    string noiDung;
    TrangTrinhChieu* tiep;
};

class BaiTrinhChieu
{
    TrangTrinhChieu* trangDau;
public:
    void xoaTrangThua();
};
void BaiTrinhChieu :: xoaTrangThua(){
    TrangTrinhChieu* n = trangDau;
    TrangTrinhChieu* m = new TrangTrinhChieu;
    while (n != NULL)
    {   
        m = n->tiep;
        while (m != NULL)
        {
            if (m->noiDung == "")
            {
                n->tiep= m->tiep;
                delete(m);
            }
            m = m->tiep;
        }
        n = n->tiep;
    }  
}
int main(){
    return 0;
}