#include <iostream>
#include <stdio.h>
#include <conio.h>
int main()
{
int cek=0, data[20], x, hapus;
char pil;
do {
system("CLS");
printf("1. Tambah Antrian\n");
printf("2. Hapus Antrian\n");
printf("3. Lihat Antrian\n");
printf("4. Keluar\n");
printf("Silahkan masukkan pilihan anda... ");
pil=getche();

if(pil!='1' && pil !='2' && pil !='3' && pil!='4' )
printf("\n\nAnda salah mengetikkan inputan...\n");
else
{
if(pil=='1') //PUSH
{
if(cek==20)
printf("\nAntrian Penuh\n\n");
else
{
printf("\nMasukkan nilai-->");scanf("%i",&x);
data[cek]=x;

cek++;
}}
else
{
if(pil=='2') //POP
{
if(cek==0)
printf("\nAntrian kosong\n\n");
else
{
hapus=data[0];
for(int v=0;v<cek;v++)
data[v]=data[v+1];
data[cek-1]=NULL;
cek--;
printf("\nData dgn nilai=%i terhapus.",hapus);
}
getch();
}
else
{
if(pil=='3') //CEK DATA
{
if(cek==0)

printf("\nAntrian Kosong.\n\n");

else
{
printf("\n");
for(int z=0;z<cek;z++)
{
printf(" | ");
printf("%i",data[z]);
printf(" | ");
}

}
getch();
}
}
}
}

}while(pil!='4');
}




