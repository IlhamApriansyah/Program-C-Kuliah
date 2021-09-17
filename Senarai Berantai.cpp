#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;
struct angka{
int data;
angka *next;
};
angka *head;
int data_kosong(){
if (head==NULL)
return 1;
else return 0;
}
void data_depan(int databaru){
angka *baru;
baru = new angka;
baru->data = databaru;
baru->next = NULL;
if (data_kosong()==1){
head=baru;
head->next=NULL;
}else{
baru->next=head;
head=baru;
}
printf("\t\t\tAngka %d Berhasil di Simpan\n", databaru);
printf("\t\t\t____________________________________________\n");
}
void tampil_data(){
angka *bantu;
bantu=head;
if(data_kosong()==0){
printf("\t\t\t--------------------------------------------\n");
printf("\t\t\tData yang telah di Masukkan :\n\n");
printf("\t\t\t");
while(bantu != NULL) {
printf(" %d ", bantu->data);
bantu=bantu->next;
} printf("\n\t\t\t--------------------------------------------\n");
} else printf("\n\t\t\tData Kosong!!!\n\n");
}
void hapus_depan() {

angka *hapus;
int depan;
if (data_kosong()==0){
if (head->next!= NULL) {
hapus=head;
depan=hapus->data;
head=head->next;
delete hapus;
}else{
depan=head->data;
head=NULL;
}
printf("\n\t\t\tAngka %d Terhapus\n",depan);
printf("\t\t\t--------------------------------------------\n");
} else printf("\t\t\tData Kosong!!!\n\n");
}
void hapus_belakang(){
angka *hapus,*bantu;
int belakang;
if (data_kosong()==0){
if(head->next != NULL){
bantu=head;
while(bantu->next->next!=NULL){
bantu=bantu->next;
}
hapus=bantu->next;
belakang=hapus->data;
bantu->next=NULL;
delete hapus;
}else{
belakang=head->data;
head=NULL;
}
printf("\n\t\t\tAngka %d Terhapus\n", belakang);
printf("\t\t\t--------------------------------------------\n");
}else printf("\t\t\tData Kosong!!!\n\n");
}
void hapus_data(){
angka *hapus, *bantu;
bantu=head;
while(bantu !=NULL){
hapus=bantu;
bantu=bantu->next;
delete hapus;
}head=NULL;
printf("\n\t\t\tSemua Data Terhapus\n");
printf("\t\t\t--------------------------------------------\n");
}

void data_belakang (int databaru){
angka *baru,*bantu;
baru=new angka;
baru->data=databaru;
baru->next=NULL;
if(data_kosong()==1){
head=baru;
head->next=NULL;
}else{
bantu=head;
while(bantu->next!=NULL){
bantu=bantu->next;
}
bantu->next = baru;
}
printf("\t\t\tAngka %d Berhasil di Simpan\n", databaru);
printf("\t\t\t--------------------------------------------\n");
}
int main(){
system("color A0");
int databaru;
int pilihan;
menu :
printf("\t\t\t____________________________________________\n");
printf("\t\t\t----------------LINKED LIST-----------------\n\n");
printf("\t\t\t -MENU-\n\n");
printf("\t\t\t1. Masukkan Data dari Depan\n");
printf("\t\t\t2. Masukkan Data dari Belakang\n");
printf("\t\t\t3. Tampilkan Data\n");
printf("\t\t\t4. Hapus dari Depan\n");
printf("\t\t\t5. Hapus dari Belakang\n");
printf("\t\t\t6. Hapus Semua Data\n");
printf("\t\t\t7. Keluar\n");
printf("\t\t\t--------------------------------------------\n\n");
while (true){
printf("\t\t\tPilih Menu : ");scanf("%d", &pilihan);
if(pilihan==1){
printf("\t\t\t--------------------------------------------\n");
printf("\t\t\tMasukkan Data : ");scanf("%d", &databaru);
printf("\n");
data_depan(databaru); goto menu;
}else if (pilihan==2){
printf("\t\t\t--------------------------------------------\n");
printf("\t\t\tMasukkan Data : ");scanf("%d", &databaru);
printf("\n");
data_belakang(databaru); goto menu;
}else if(pilihan==3){
tampil_data(); goto menu;

}else if(pilihan==4){
hapus_depan(); goto menu;
}else if(pilihan==5){
hapus_belakang(); goto menu;
}else if(pilihan==6){
hapus_data(); goto menu;
}else if(pilihan==7){
break;
return EXIT_SUCCESS;
}
}
printf("\n\t\t\tTekan untuk Keluar...");
printf("\n\t\t\t--------------------------------------------\n");
printf("\t\t\t");
getch();
}
