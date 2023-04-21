#include<stdio.h>
#include<stdint.h>
#include<math.h>
using namespace std;
#define pi 3.14
class vongTron{
    private:
        int8_t banKinh;
    public:
        vongTron(int8_t r);
        void chuVi();
        void dienTich();
};
vongTron::vongTron(int8_t r){
    this->banKinh = r;
}
void vongTron::chuVi()
{
    double c = 2*pi*banKinh;
    printf("Chu vi hinh tron: %.2f\n",c);
}
void vongTron::dienTich(){
    double s = pi*pow(banKinh,2);
    printf("Dien tich hinh tron: %.2f\n",s);
}
int main(){
    vongTron Q(5);
    Q.chuVi();
    Q.dienTich();
    
    return 0;
}