#include <iostream>
#include <conio.h>
#include <stdio.h>

struct TNode{

char data[30];
TNode *next;
TNode *prev;
};
TNode *head, *tail;
void init(void);
int isEmpty(void);
void insertDepan(char databaru[30]);
void insertBelakang (char databaru[30]);
void inserttengah(char databaru[30], int pilihdepan, int pilihbelakang);
void tampil(void);
void hapusDepan(void);
void hapusBelakang(void);
void deletetengah(int pilih);
void clear(void);
int cari(char elemen[30]);
main()
{
////////////////////////////////
char pilih;
char elm[30];
int depan,belakang;
init();
do
{
printf("\n");
printf("\t\t===================================\n");
printf("\t\t|| CONTOH PROGRAM ||\n");
printf("\t\t|| LINK LIST ||\n");
printf("\t\t===================================\n");
printf(" \t\tMENU PILIHAN : \n");
printf("\t\t===================================\n");
printf("\t\t[1] MASUKKAN DATA DARI DEPAN\n");
printf("\t\t[2] MASUKKAN DATA DARI BELAKANG\n");
printf("\t\t[3] MASUKKAN DATA DI TENGAH\n");
printf("\t\t[4] TAMPILKAN DATA\n");
printf("\t\t[5] HAPUS DATA PALING DEPAN\n");
printf("\t\t[6] HAPUS DATA PALING BELAKANG\n");
printf("\t\t[7] HAPUS DATA DI TENGAH\n");
printf("\t\t[8] HAPUS SEMUA DATA\n");
printf("\t\t[9] CARI DATA\n");
printf("\t\t[0] KELUAR\n");
printf("\t\t===================================\n\n");
printf("\t\t===================================\n\n");
printf("\n");
printf("\t\t->->PILIHAN ANDA : ");

scanf("%s",&pilih);
switch(pilih)
{
case '1':system("cls");
tampil();
printf("\n");
printf(" \t\tMASUKKAN DATA DARI DEPAN\n");
printf("\t\t----------------------------\n");
printf("\t\t:: MASUKKAN DATA : ");
scanf("%s",&elm);
insertDepan(elm);
getch();
system("cls");
break;
case '2':system("cls");
tampil();
printf("\n");
printf(" \t\tMASUKKAN DATA BELAKANG\n");
printf("\t\t----------------------------\n");
printf("\t\t:: MASUKKAN DATA : ");
scanf("%s",&elm);
insertBelakang(elm);
system("cls");
break;
case '3':system("cls");
tampil();
printf("\n");
printf(" \t\tMASUKKAN DATA DARI TENGAH\n");
printf("\t\t----------------------------\n");
printf("\t\t:: MASUKKAN DATA : ");
scanf("%s",&elm);
printf("\t\t:: DATA DEPAN : ");
scanf("%i",&depan);
printf("\t\t:: DATA BELAKANG : ");
scanf("%i",&belakang);
inserttengah(elm,depan,belakang);
getch();
system("cls");
break;
case '4':system("cls");
tampil();
printf("\t\t-------------\n\n");
printf("\t\tPress Enter to Continue..");
getch();
system("cls");
break;
case '5':system("cls");

tampil();
hapusDepan();
printf("\n");
printf("\t\t-------------\n");
printf("\t\tPress Enter to Continue..");
getch();
system("cls");
break;
case '6':system("cls");
tampil();
hapusBelakang();
printf("\n");
printf("\t\t-------------\n");
printf("\t\tPress Enter to Continue..");
getch();
system("cls");
break;
case '7':system("cls");
tampil();
printf("\n");
printf(" \t\tMENGHAPUS DATA DARI TENGAH\n");
printf("\t\t----------------------------\n");
printf("\t\t:: DATA NO : ");
scanf("%i",&depan);
deletetengah(depan);
getch();
system("cls");
break;
case '8':system("cls");
clear();
printf("\t\tDATA TELAH DIHAPUS SEMUA\n");
printf("\t\t-------------\n");
printf("\t\tPress Enter to Continue..");
getch();
system("cls");
break;
case '9':system("cls");
printf("\n");
printf(" \t\t MASUKKAN DATA YANG DICARI\n");
printf("\t\t----------------------------\n");
printf("\t\t:: MASUKKAN DATA : ");
scanf("%s",&elm);
if(cari(elm)==1){
printf("\n\t\tdata success ditemukan");
}else{
printf("\n\t\tMaaf data tidak ditemukan");
}

getch();
system("cls");
break;
case '0': break;
getch();
system("cls");
default:printf("\t\tSalah pilih...\n");
break;
}
}while(pilih!='0');
}
/////////////////////////////////
void init(void){
head = NULL;
tail = NULL;
}
/////////////////////////////////
int isEmpty(void){
if(tail == NULL) return 1;
else return 0;
}
//////////////////////////////////
void insertDepan(char databaru[30]){
TNode *baru;
int i;
baru = new TNode;
for(i=0;i<=30;i++){
baru->data[i] = databaru[i];
}
baru->next = baru;
baru->prev = baru;
if(isEmpty()==1){
head=baru;
tail=baru;
head->next = head;
head->prev = head;
tail->next = tail;
tail->prev = tail;
}
else {

baru->next = head;
head->prev = baru;
head = baru;
head->prev = tail;
tail->next = head;
}
printf("\n\t\t Data masuk \n");
printf("\t\tPress Enter to Continue..");
}
////////////////////////////////////////////////////
void insertBelakang (char databaru[30]){
TNode *baru,*bantu;
int i;
baru = new TNode;
for(i=0;i<=30;i++){
baru->data[i] = databaru[i];
}
baru->next = baru;
baru->prev = baru;
if(isEmpty()==1){
head=baru;
tail=baru;
head->next = head;
head->prev = head;
tail->next = tail;
tail->prev = tail;
}
else {
tail->next = baru;
baru->prev = tail;
tail = baru;
tail->next = head;
head->prev = tail;
}
printf("\t\tData masuk\n");
printf("\t\tPress Enter to Continue..");
}
//////////////////////////////////////////////
void tampil(void){
int i=0;
if(isEmpty()==0){
do{
i++;
printf("\t\t%i. %s\n",i,head->data);
printf("\t\t===================\n");

head=head->next;
}while(head!=tail->next);
printf("\n");
} else printf("\t\t\t..Masih kosong..\n\n");
}
//////////////////////////////////////////////
void hapusDepan(void){
TNode *hapus;
char d[30];
int i;
if (isEmpty()==0){
if(head != tail){
hapus = head;
for (i=0;i<=30;i++){
d[i] = hapus->data[i];
}
head = head->next;
tail->next = head;
head->prev = tail;
delete hapus;
} else {
for (i=0;i<=30;i++){
d[i] = head->data[i];
}
head = NULL;
tail = NULL;
}
printf("\t\t%s terhapus\n",d);
} else printf("\t\tMasih kosong\n");
}
//////////////////////////////////////////
void hapusBelakang(void){
TNode *hapus;
char d[30];
int i;
if (isEmpty()==0){
if(head != tail){
hapus = tail;
for (i=0;i<=30;i++){
d[i] = hapus->data[i];
}
tail = tail->prev;
tail->next = head;
head->prev = tail;
delete hapus;
} else {

for (i=0;i<=30;i++){
d[i] = head->data[i];
}
head = NULL;
tail = NULL;
}
printf("\t\t%s terhapus\n",d);
} else printf("\t\tMasih kosong\n");
}
//////////////////////////////////////////
void clear(void){
TNode *bantu,*hapus;
if (isEmpty()==0){
bantu = head;
while(bantu->next!=head){
hapus = bantu;
bantu = bantu->next;
delete hapus;
}
head = NULL;
}
}
//////////////////////////////////////////
//////////////////////////////////////
int cari(char elemen[30]){
int i=0;
int status=0;
if(isEmpty()==0){
do{
i++;
if(head->data[i]==elemen[i]){
status=1;
}else head=head->next;
}while(head!=tail->next && i<=30);
return(status);
} else printf("\t\tMasih kosong\n");
}
/////////////////////////////////////
void inserttengah(char databaru[30], int pilihdepan, int pilihbelakang){
TNode *baru,*bantu,*depan,*belakang;
char elemen[30];
int i;
int j;
baru = new TNode;
for(i=0;i<=30;i++){

baru->data[i] = databaru[i];
}
baru->next = baru;
baru->prev = baru;
if(isEmpty()==1){
head=baru;
tail=baru;
head->next = head;
head->prev = head;
tail->next = tail;
tail->prev = tail;
}else{
depan = head;
belakang = head;
for(i=1;i<pilihdepan;i++){
depan=depan->next;
}
for(i=1;i<pilihbelakang;i++){
belakang=belakang->next;
}
depan->next = baru;
baru->prev = depan;
baru->next = belakang;
belakang->prev = baru;
}
printf("\t\tData masuk\n");
printf("\t\tPress Enter to Continue..");
}
////////////////////////////////////////////////////////
void deletetengah(int pilih){
TNode *hapusdepan,*hapusbelakang,*hapustengah;
char d[30];
int i,j;
if (isEmpty()==0){
if(head != tail){
hapusdepan = head;
hapusbelakang = head;
hapustengah = head;
for(i=1;i<pilih;i++){
hapusdepan=hapusdepan->next;
}
for(i=1;i<(pilih+2);i++){
hapusbelakang=hapusbelakang->next;
}
for(i=1;i<=pilih;i++){
hapustengah=hapustengah->next;
}
for(j=1;j<pilih;j++){

for (i=0;i<=30;i++){
d[i] = hapustengah->data[i];
}
hapustengah = hapustengah->next;
}
delete hapustengah;
hapusdepan->next = hapusbelakang;
hapusbelakang->prev=hapusdepan;
} else {
for (i=0;i<=30;i++){
d[i] = hapustengah->data[i];
}
head = NULL;
tail = NULL;
}
printf("\t\t%s Success terhapus\n",d);
} else printf("\t\tMasih kosong\n");
}
