#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
   string  nip[10], nama[30], alamat[30],tgl[8];
   int jum, gapok[2], Jk[2];
   int a,i,y,z;
   
	//Bagian 1
   cout<<"Masukan Jumlah Karyawan  : ";
   cin>>jum;
   cout<<endl;
   for (int i=1;i<=jum;i++){
        cout<<"KARYAWAN KE-"<<i<<endl;
    cout<<"NIP Karyawan : ";
	cin>>nip[i];
	cout<<"Nama Karyawan : ";
	cin>>nama[i];
	cout<<"Alamat : ";
	cin>>alamat[i];
	cout<<"Tanggal Lahir : ";
	cin>>tgl[i];
	cout<<"Jam Kerja  : ";
	cin>>Jk[i];
	cout<<"Gaji Pokok  : ";
	cin>>gapok[i];
	
}
cout<< endl;
}
