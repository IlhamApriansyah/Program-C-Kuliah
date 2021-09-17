#include <iostream>
#include <conio.h> 
#include <stdlib.h> 
#define MAX 1000 

using namespace std;

int nomer[MAX];
int head=-1, tail=-1;

bool IsEmpty(){ 
   if(tail == -1){
       return true;
   }else{
       return false;
   }
}
bool IsFull(){ 
   if(tail == MAX-1){
       return true;
   }else{
       return false;
   }
}
void AntrianMasuk(int no){
    if (IsEmpty()){
        head=tail=0;
    }else {
        tail++;
    }
    nomer[tail]=no;
}
void AntrianKeluar(){
    if(IsEmpty()){ 
        cout<<"Antrian sudah kosong ! ";
        getch();
    } else {
        for(int a=head;a<tail;a++){
            nomer[a]=nomer[a+1];
        }
        tail--;
        if(tail == -1){
            head = -1;
        }
    }
}
void Clear(){
     head=tail=-1;
}
void View(){
     if(IsEmpty()){
         cout<<"Antrian kosong ! ";

     }else {
         system("cls");
         for(int a=head;a<=tail;a++){
              cout << "==============================="
                   << "\n >> No. Antrian : [" << nomer[a] << "]"
                   << "\n==============================="<< endl;
         }
     }
}

int main(){
    
    int choose, p=1, urut;
    do{
        system("cls");
        cout << "\n\n===== PROGRAM ANTRIAN BANK ====="
             << "\n=================================="
             << "\n 1. Tambah Antrian            "
             << "\n 2. Panggil Antrian           "
             << "\n 3. Lihat daftar antrian      "
             << "\n 4. Format                    "
             << "\n 5. Exit                      "
             << "\n==================================";
        cout << "\nChoose ! "; cin >> choose;
        cout << "\n\n";
        if(choose == 1){
            if(IsFull()) {
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
            }
            else{
                urut=p;
                AntrianMasuk(urut);
                cout << "---------------------------------" << endl;
                cout << "|          NO. ANTRIAN          |" << endl;
                cout << "|               " << p << "              ||" << endl;
                cout << "---------------------------------" << endl;
                cout << "|       Silahkan Mengantri      |" << endl;
                cout << "|      Menunggu " << tail << " Antrian      ||" << endl;
                cout << "---------------------------------" << endl;
                p++;
            }
        }
        else if(choose == 2){
            cout << "=================================" << endl;
            cout << "No. Antrian : [" << nomer[head] << "]";
            cout << "\n=================================" << endl;
            AntrianKeluar();
            cout << "Silahkan Dipanggil !" << endl;
        }
        else if(choose == 3){
            View();
        }
        else if(choose == 4){
            Clear();
            cout<<"Antrian dikosongkan ! ";
        }
        else if(choose == 5){
        }
        else{
            cout << "Masukan anda salah ! \n"<< endl;
        }
        getch();
    }while(choose!=5);
}
