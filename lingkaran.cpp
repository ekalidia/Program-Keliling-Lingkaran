#include <iostream>
using namespace std;
int main()
{

int r, d;
float phi=3.14, keliling;
cout<<"Hitung Keliling Lingkaran" <<endl;
cout<<"--------------------------" <<endl;
cout<<"Masukkan jari jari lingkaran :  ";
cin>> r;
d=r+r;
keliling = phi * d;
cout<<" Keliling Lingkaran : "<< keliling <<endl;

return 0;
}
