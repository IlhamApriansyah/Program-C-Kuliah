#include <iostream>
#include <iomanip>


using namespace std;
int main(){
	int kode, harga, nominal, sub_nominal, total;
	
	
	cout<<"   PROGRAM KALKULASI HARGA CASH GAME	    "<<endl;
	cout<<"---------------Menu Produk---------------"<<endl;
	cout<<"1. Mobile Legends    3 Diamonds       = Rp. 1650"<<endl;
	cout<<"2. Free Fire         5 Diamonds       = Rp. 1000"<<endl;
	cout<<"3. Garena Shells     33 Garena Shells = Rp. 10000"<<endl;
	cout<<"4. Steam Wallet      IDR 12000        = Rp. 14300"<<endl;
	cout<<"5. Megaxus           10000 Mi-Cash    = Rp. 10900"<<endl;
	
	cout<<"Pilih produk yang diinginkan : ";
	cin>>kode;
	switch(kode){
		case 1 :
			
			harga=165;
			sub_nominal=3;
			break;
			
		case 2 :
			
			harga=1000;
			sub_nominal=5;
			break;
			
		case 3 :
			
			harga=10000;
			sub_nominal=33;
			break;
			
		case 4 :
			
			harga=14300;
			sub_nominal=12000;
			break;
			
		case 5 :
			
			harga=10900;
			sub_nominal=10000;
			break;
	}
	
			cout<<endl;
			cout<<"Masukkan Nominal produk : ";
			cin>>nominal;
			total =(harga*nominal)/sub_nominal;
			cout<<"Total yang harus dibayar : Rp. "<<total<<endl;
		
	}

