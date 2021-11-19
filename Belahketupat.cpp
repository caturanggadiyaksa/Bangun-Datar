#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
	float luas, keliling, sisi, D1,D2;
	cout<<"------------------------------------"<<endl;
	cout<<"menghitung Luas dan Keliling Belahketupat"<<endl;
	cout<<"------------------------------------"<<endl<<endl;
	cout<<"   Masukan sisi		: ";
	cin>>sisi;
	cout<<"	  Masukan D1		: ";
	cin>>D1;
	cout<<"	  Masukan D2		: ";
	cin>>D2;
	
	luas=(D1*D2)/2;
	keliling=4*sisi;
	
	cout<<"		Luas Belahketupat		: "<<luas<<endl;
	cout<<"		Keliling Belahketupat	: "<<keliling<<endl<<endl;
	cout<<"-------------------------------------"<<endl;
 getch();
}
