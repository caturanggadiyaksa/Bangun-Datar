#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
	float luas, keliling, panjang,lebar;
	cout<<"------------------------------------"<<endl;
	cout<<"menghitung Luas dan Keliling Persegi"<<endl;
	cout<<"------------------------------------"<<endl<<endl;
	cout<<"   Masukan panjang		: ";
	cin>>panjang;
	cout<<"	  Masukan lebar			: ";
	cin>>lebar;
	luas= panjang * lebar;
	keliling=2*(panjang+lebar);
	
	cout<<"		Luas Persegi Panjang		: "<<luas<<endl;
	cout<<"		Keliling Persegi Panjang	: "<<keliling<<endl<<endl;
	cout<<"-------------------------------------"<<endl;
 getch();
}
