#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
	float luas, keliling, phi=3.14;
	int diameter,radius;
	cout<<"------------------------------------"<<endl;
	cout<<"menghitung Luas dan Keliling Lingkaran"<<endl;
	cout<<"------------------------------------"<<endl<<endl;
	cout<<"   Masukan Diameter		: ";
	cin>>diameter;
	
	radius=diameter/2;
	luas=phi*radius*radius;
	keliling=2*phi*radius;
	
	cout<<"		Luas Lingkaran		: "<<luas<<endl;
	cout<<"		Keliling lingkaran	: "<<keliling<<endl<<endl;
	cout<<"-------------------------------------"<<endl;
 getch();
}
