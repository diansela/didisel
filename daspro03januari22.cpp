#include <iostream>
using namespace std;

/*void cetak (string nama) {
	cout << nama << endl;
}

int main () {
	cetak ("TI Brotherhood");
}*/

/*void penjumlahan (int a, int b) {
	cout << "program penjumlahan" << endl;
	cout << "hasil penjumlahan :" << a+b <<endl;
}
int main () {
	penjumlahan (4,2);
	
}*/
int penjumlahan (int a, int b) {
	return a+b;
}

int main () {
	int hasil = penjumlahan (5,2);
	cout << hasil << endl;
}
