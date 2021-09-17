#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
typedef struct nod
{
int data;
struct nod *next;
} NOD, *NODPTR;
void CiptaSenarai (NODPTR *s)
{
*s = NULL;
}
NODPTR NodBaru(int m)
{
NODPTR n;
n = (NODPTR) malloc(sizeof (NOD));
if (n != NULL)
{
n -> data = m;
n -> next = NULL;

}
return n;
}
void SisipSenarai (NODPTR *s, NODPTR t, NODPTR p)
{
if (p==NULL) {
t -> next = *s;
*s =t;
}
else {
t -> next = p -> next;
p -> next = t;
}
}
void CetakSenarai (NODPTR s)
{
NODPTR ps;
for (ps = s; ps != NULL; ps =ps -> next)
printf("%d --> ", ps -> data);
printf("NULL\n");
}
//------------------------------------------
int main()
{
NODPTR pel;
NODPTR n;
int i, k, nilai;
CiptaSenarai(&pel);
printf("Masukkan banyak data =");
scanf("%d",&k);
for (i=1;i<=k;i++)
{
printf("Masukkan data senarai ke-%d= ",i);
scanf("%d",&nilai);
n = NodBaru(nilai);
SisipSenarai (&pel, n, NULL);
}
CetakSenarai (pel);
return 0;
}
