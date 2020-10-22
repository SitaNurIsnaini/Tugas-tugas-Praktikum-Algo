#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int p,q,r,x ;
	char nama [25];
	
	cout<<"Nama = "; cin.getline(nama,sizeof(nama));
	cout<<"NIM  = "; cin>>p; cin.ignore();
	cout<<"UTS  = "; cin>>q; cin.ignore();
	cout<<"UAS  = "; cin>>r; cin.ignore(); cout<<" \n";
	cout<<"Hai nama saya "; cout<<nama; cout<<", NIM "; cout<<p<<endl;
	
	x = (q+r)/2;
	cout<<"Nilai akhir saya "; cout<<x<<endl;
	cout<<"\n"; cout<<"Press any button to continue";
	getche();
	
}

