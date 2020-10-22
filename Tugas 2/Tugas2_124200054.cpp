#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
main ()
 
 {
	int a,b,c,d,f;

	cout<<"Umur Ayah   = "; cin>>a; cin.ignore();
	cout<<"Umur Ibu    = "; cin>>b; cin.ignore();
	cout<<"Umur Anak 1 = "; cin>>c; cin.ignore();
	cout<<"Umur Anak 2 = "; cin>>d; cin.ignore(); 
	cout<<endl;
	
	if (a>20)
	{a=30000*30;}
	if (b>20)
	{b=30000*30;}
	if (c>20)
	{c=30000*30;}
	else if (c>12 && c<=20)
	{c=20000*30;}
	else if (c<=12)
	{c=15000*30;}
	if (d>20)
	{d=30000*30;}
	else if (d>12 && d<=20)
	{d=20000*30;}
	else if (d<=12)
	{d=15000*30;}
	
	f=a+b+c+d;
	printf("Tagihan satu bulan adalah Rp.");cout<<f<<endl;
	cout<<endl;
	cout<<"Press any key to continue...";
	getche();
 }
