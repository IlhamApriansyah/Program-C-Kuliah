#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void gotoxy(int x, int y){
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
using namespace std;
#define Nmaks 10
typedef int matrik[Nmaks][Nmaks];
int main()
{
int n,i,j;
matrik A,B,C;
cout<<"Program Penjumlahan Matrik A 2x2 dan B 2x2 \n";
cout<<"\n" ;
n = 2 ;
cout<<"Masukkan entri-entri matrik A \n";
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
{
printf("A[%d,%d] = ",i,j);cin>>A[i][j];
} }
system("cls");
cout<<"Masukkan entri-entri matriks B \n";
cout<<"\n" ;
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
{
printf("B[%d,%d] = ",i,j);cin>>B[i][j];
} }
system("cls");
cout<<"\n";
// proses penjumlahan matrik C = A + B
for (i=1;i<=n;i++)
{ for (j=1;j<=n;j++)
{
C[i][j]=A[i][j]+B[i][j];
} }
system("cls");
cout<<"Masukkan entri-entri matrik A,B dan C \n";
cout<<"\n" ;
// proses output matrik A
gotoxy(1,5);
cout<<"A = " ;
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
{
gotoxy (2+4*j,2+2*i+5);
cout<<B[i][j];
} }
// proses output matrik B
gotoxy(1,10);
cout<<"B = " ;
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
{
gotoxy(2+4*j,2+2*i+5);
cout<<B[i][j];
} }
// proses output matrik C
gotoxy(1,15);
cout<<"C = " ;
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
{
gotoxy(2+4*j,2+2*i+10);
cout<<A[i][j];
} }
gotoxy(12,15);
cout<<" + " ;
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
{
gotoxy(13+4*j,2+2*i+10);
cout<<B[i][j];
} }
gotoxy(23,15);
cout<<" = " ;
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
{
gotoxy(24+4*j,2+2*i+10);
cout<<C[i][j];
} } }
