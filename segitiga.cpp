#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
	float luas, keliling, alas, Tinggi,S1;
	cout<<"------------------------------------"<<endl;
	cout<<"menghitung Luas dan Keliling Trapesium"<<endl;
	cout<<"------------------------------------"<<endl<<endl;
	cout<<"   Masukan alas		: ";
	cin>>alas;
	cout<<"	  Masukan Tinggi		: ";
	cin>>Tinggi;
	cout<<"	  Masukan S1		: ";
	cin>>S1;
	
	luas=(alas*Tinggi)/2;
	keliling=S1+alas+Tinggi;
	
	cout<<"		Luas Segitiga		: "<<luas<<endl;
	cout<<"		Keliling Segitiga	: "<<keliling<<endl<<endl;
	cout<<"-------------------------------------"<<endl;
 getch();
}
