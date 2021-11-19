#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
	float luas, keliling, D1,D2, P,L;
	cout<<"------------------------------------"<<endl;
	cout<<"menghitung Luas dan Layang-Layang"<<endl;
	cout<<"------------------------------------"<<endl<<endl;
	cout<<"   Masukan D1		: ";
	cin>>D1;
	cout<<"	  Masukan D2		: ";
	cin>>D2;
	cout<<"	  Masukan P		: ";
	cin>>P;
	cout<<"	  Masukan L	: ";
	cin>>L;
	
	
	
	luas=(D1*D2)/2;
	keliling=2*(P+L);
	
	cout<<"		Luas Layang-Layang		: "<<luas<<endl;
	cout<<"		Keliling Layang-Layang	: "<<keliling<<endl<<endl;
	cout<<"-------------------------------------"<<endl;
 getch();
}
