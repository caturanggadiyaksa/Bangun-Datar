#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
	float luas, keliling, S1, S2, S3,Tinggi;
	cout<<"------------------------------------"<<endl;
	cout<<"menghitung Luas dan Keliling Trapesium"<<endl;
	cout<<"------------------------------------"<<endl<<endl;
	cout<<"   Masukan S1		: ";
	cin>>S1;
	cout<<"	  Masukan S2		: ";
	cin>>S2;
	cout<<"	  Masukan S3		: ";
	cin>>S3;
	cout<<"	  Masukan Tinggi	: ";
	cin>>Tinggi;
	
	
	
	luas=(S1+S2*Tinggi)/2;
	keliling=S1+S2+S3+Tinggi;
	
	cout<<"		Luas Trapesium		: "<<luas<<endl;
	cout<<"		Keliling Trapesium	: "<<keliling<<endl<<endl;
	cout<<"-------------------------------------"<<endl;
 getch();
}
