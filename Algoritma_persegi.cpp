#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
	float luas, sisi,keliling;
	cout<<"------------------------------------"<<endl;
	cout<<"menghitung Luas dan Keliling Persegi"<<endl;
	cout<<"------------------------------------"<<endl<<endl;
	cout<<"   Masukan Sisi		: ";
	cin>>sisi;
	
	luas=sisi*sisi;
	keliling=4*sisi;
	
	cout<<"		Luas Persegi		: "<<luas<<endl;
	cout<<"		Keliling Persegi	: "<<keliling<<endl<<endl;
	cout<<"-------------------------------------"<<endl;
 getch();
}
