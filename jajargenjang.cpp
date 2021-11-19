#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
	float luas, keliling, alas,tinggi,P;
	cout<<"------------------------------------"<<endl;
	cout<<"menghitung Luas dan Keliling Jajargenjang"<<endl;
	cout<<"------------------------------------"<<endl<<endl;
	cout<<"   Masukan alas		: ";
	cin>>alas;
	cout<<"	  Masukan tinggi	: ";
	cin>>tinggi;
	cout<<"	  Masukan P			: ";
	cin>>P;
	
	luas=alas*tinggi;
	keliling=(2*P)+(2*alas);
	
	cout<<"		Luas Jajargenjang		: "<<luas<<endl;
	cout<<"		Keliling Jajargenjang	: "<<keliling<<endl<<endl;
	cout<<"-------------------------------------"<<endl;
 getch();
}
