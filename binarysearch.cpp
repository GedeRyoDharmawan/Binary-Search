#include <iostream>
using namespace std;

int main(){
	cout << "kita akan membuat array dan kita akan mencari nilai array tersebut\n";
	int angka[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int ukuranArray = sizeof(angka)/sizeof(*angka);

cout << "\nDaftar nilai array:\n";	
for (int indeks=0; indeks<ukuranArray; indeks++){
	cout << "angka" << angka[indeks] << "terletak di indeks ke-" << indeks << endl;
}	
int	awal,akhir,nilaiTengah,angkaCari;
bool ketemu = false;
awal = 0;
akhir = 19;
nilaiTengah = (awal+akhir)/2;

cout << "\nMasukan nilai array yang akan dicari: ";
cin >> angkaCari;

while (angkaCari != angka[nilaiTengah] && awal<akhir){
	nilaiTengah = (awal+akhir)/2;
	angka[nilaiTengah];
	if (angkaCari > angka[nilaiTengah]){
		awal = nilaiTengah + 1;
		nilaiTengah = (awal+akhir)/2;
		if (angkaCari == angka[nilaiTengah]){
			ketemu = true;
		}
	}
	else {
		akhir = nilaiTengah - 1;
		nilaiTengah = (awal+akhir)/2;
		if (angkaCari == angka[nilaiTengah]){
			ketemu = true;
		}
	}
}
if (ketemu == true){
	cout << "DATA DITEMUKAN\n";
	cout << "ANGKA" << angka[nilaiTengah] << "TERLETAK PADA INDEKS KE-" << nilaiTengah << endl;
}	
else {
	cout << "DATA TIDAK DITEMUKAN";
}
	return 0;
}
