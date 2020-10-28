#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;
main()

{
	int a;
	float b,c,d,e;
	string nama,pass;
	
	cout<<"Login Akun \n";
	cout<<"================= \n";
	cout<<"Username  : "; cin>>nama;
	cout<<"Password  : "; cin>>pass;
	cout<<"================= \n";
	if (nama=="login" && pass=="000")
	{cout<<"Login Berhasil!";}
	else if (nama!="login"&&pass=="000")
	{cout<<"Username Anda salah!"; return 0;} 
	else if (nama=="login" && pass!="000")
	{cout<<"Password Anda salah!"; return 0;} 
	else {cout<<"Username dan Password Anda salah!"; return 0;}
	cout<<" \n"; cout<<"\n";
	cout<<"Input Nilai Mata Kuliah\n";
	cout<<"1. Algoritma dan Pemrograman\n";
	cout<<"2. Kalkulus\n";
	cout<<"Pilih : ";cin>>a;
	cout<<"\n";
	
	switch (a)
	{
		
		case 1 : cout<<"Nilai Harian = "; cin>>c;
				 cout<<"Nilai UTS    = "; cin>>d;
				 cout<<"Nilai UAS    = "; cin>>e;
				 cout<<"\n";
				  b = (c+d+e)/3;
				 
		if (b>=80)
		
		{printf ("Anda lulus Algoritma dan Pemrograman dengan nilai "); cout<<setprecision (4)<<b<<endl;}
		else {printf ("Anda tidak lulus Algoritma dan Pemrograman dengan nilai "); cout<<setprecision (4)<<b<<endl;}
				break;
	
		case 2 : cout<<"Nilai Harian = "; cin>>c;
				 cout<<"Nilai UTS    = "; cin>>d;
				 cout<<"Nilai UAS    = "; cin>>e;
				 cout<<"\n";
				 b = (c+d+e)/3;
				 
		if (b>=80)
		 
		{printf ("Anda lulus Kalkulus dengan nilai ");  cout<<setprecision (4)<<b<<endl;}	
		else {printf ("Anda tidak lulus Kalkulus dengan nilai "); cout<<setprecision (4)<<b<<endl;}
				break;
		default : cout<<"Input Anda Salah!";
	}
	cout<<" \n"; cout<<" \n";
	cout<<"Press any key to continue..";
	getche();
}
