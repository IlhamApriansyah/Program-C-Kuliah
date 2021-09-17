#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char TOTAL,komisi;
	long pendapatan, jasa = 0, Komisi = 0, total = 0;
	cout << "Pendapatan hari ini Rp. ";
	cin >> pendapatan;
	if (pendapatan > 0 && pendapatan <= 2000000) {
	jasa = 500000; Komisi = 0.1 * pendapatan;
	}
	else if ( pendapatan <=5000000) {
	jasa = 5000000; Komisi = 0.15 * pendapatan;
	}
	else if ( pendapatan <=10000000) {
	jasa = 10000000; Komisi = 0.2 * pendapatan;
	}
	TOTAL = komisi + jasa;
	cout << "Uang Jasa Rp. " << jasa <<endl;
	cout << "Uang Komisi Rp. " << komisi <<endl;
	cout << "--------------------" <<endl;
	cout << "Hasil Total Rp. " << TOTAL <<endl;
system ("pause");
return 0;
}
