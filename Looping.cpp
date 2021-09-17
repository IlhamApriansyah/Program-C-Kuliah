#include <iostream>

using namespace std;

int main(int argc, char*argv[])
{
	int i,bil,kali;
	cout << "Masukan Bilangan Pertama: "<<endl;
	cin >> bil;
	cout << "Masukan Looping: "<<endl;
	cin >> kali;
	i=1;
	while(i<=kali){
		cout << "Bilangan ke : " <<bil <<endl;
		bil++;
		i++;
	}
	
	system("pause");
	return 0;
}
