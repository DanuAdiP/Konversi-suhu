#include<iostream>
using namespace std;

int main()
{
	float C,F,R;
	cout<<"KONVERSI SUHU"<<endl<<endl;
	cout<<"Masukkan Celciusnya = ";cin>>C;
	F=C*1.8+32;
	R=C*0.8;
	cout<<"Nilai Fahrenheit = "<<F<<endl<<"Nilai Reamur = "<<R;
	return 0;
}
