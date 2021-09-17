#include <iostream>

using namespace std;
int main(){
	
	int n = 7;
	
	for(int i=n; i>0; i--){
		for(int j=i; j>0; j--){
			
			string nomor = (i%2!=0 ? i + " " : j + " ");
			cout<<nomor;
		}
	}
}
