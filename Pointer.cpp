#include <iostream>
#include <string>
#include <conio.h>
 
using namespace std;
 
struct KTP
{
    long int nik;
    string nama;
    string ttl;
    string jenis_kelamin;
    string agama;
    string status_perkawinan;
    string pekerjaan;
    string kewarganegaraan;
    string berlaku;
};
 
int main()
{
    cout<<" Program C++ Pointer Pada Struct (Kartu Tanda Penduduk)"<<endl;
    cout<<endl;
    cout<<" Nama : Ilham Apriansyah"<<endl;
    cout<<" NIK : 1904030007"<<endl;
 
    struct KTP *identitas, kartu;
    kartu.nik = 1904030007;
    kartu.nama = "Ilham Apriansyah";
    kartu.ttl = "TANGERANG, 05 - 01 - 1975";
    kartu.jenis_kelamin = "LAKI - LAKI";
    kartu.agama = "ISLAM";
    kartu.status_perkawinan = "BELUM KAWIN";
    kartu.pekerjaan = "MAHASISWA";
    kartu.kewarganegaraan = "WNI";
    kartu.berlaku = "30 - 05 - 2030";
 
    identitas = &kartu;
 
    cout<<" Nomor Induk Kependudukan : " <<identitas->nik <<endl;
    cout<<" Nama : " <<identitas->nama <<endl;
    cout<<" Tempat / Tanggal Lahir : " <<identitas->ttl <<endl;
    cout<<" Jenis Kelamin : " <<identitas->jenis_kelamin <<endl;
    cout<<" Agama : " <<identitas->agama <<endl;
    cout<<" Status Perkawinan : " <<identitas->status_perkawinan <<endl;
    cout<<" Pekerjaan : " <<identitas->pekerjaan <<endl;
    cout<<" Kewarganegaraan : " <<identitas->kewarganegaraan <<endl;
    cout<<" Berlaku Hingga : " <<identitas->berlaku <<endl;
 
    getch();
}
