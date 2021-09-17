#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	int mhs,grade,nilaiakhir,nilaitugas,UTS,UAS;
	char Nama[32],NIM[10];
	
cout << "UJIAN TENGAH SEMESTER GANJIL 2020/2021"<<endl;
cout << endl;
cout << "Ilham Apriansyah - 1904030007 - 3B T.Informatika"<<endl;
cout << endl;
cout << "-----------------------------------"<<endl;
cout << "Program menghitung Nilai Akhir dan Grade Mahasiswa"<<endl;
cout << endl;
cout << "Silahkan Input NIM,Nama,Nilai Tugas,UTS serta UAS"<<endl;
cout << "Kami akan menghitung Nilai Akhir dan Grade Anda"<<endl;
cout << endl;
cout << "Jumlah Mahasiswa : "; cin>> mhs;

for (int i=0; i<mhs; i++){
cout << "-----------------------------------"<<endl;
cout << "NIM : "; cin >> NIM;
cout << "Nama : "; cin >> Nama;
cout << "Nilai Tugas: "; cin >> nilaitugas;
cout << "Nilai UTS : "; cin >> UTS;
cout << "Nilai UAS : "; cin >> UAS;
cout << "-----------------------------------"<<endl;

nilaiakhir = (nilaitugas+UTS+UAS)/3;
grade = (nilaiakhir);
cout<<"Lembar Hasil Nilai Akhir dan Grade"<<endl;
cout<<"NIM : "<<NIM<<endl;
cout<<"Nama : "<<Nama<<endl;
cout<<"Nilai Tugas : "<<nilaitugas<<endl;
cout<<"Nilai UTS : "<<UTS<<endl;
cout<<"Nilai UAS : "<<UAS<<endl;
cout << "Nilai Akhir : "<<nilaiakhir<<endl;

 if (grade >= 90) {
  cout<<"Grade : A"<<endl;
 } else if ((grade>=80) && (grade < 90)) {
  cout<<"Grade : B"<<endl;
 } else if ((grade>=70) && (grade < 80)) {
  cout<<"Grade : C"<<endl;
 } else if ((grade>=60) && (grade < 70)) {
  cout<<"Grade : D"<<endl;
 } else if (grade < 60) {
  cout<<"Grade : E"<<endl;
 }
}
}


