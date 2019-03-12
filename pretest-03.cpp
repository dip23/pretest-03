/*
Nama	: Difa Bagasputra M
NPM		: 140810180057
Kelas	: A
Tanggal	: 12 Maret 2019
Deskripsi	: Program untuk sorting mahasiswa
*/

#include <iostream>
using namespace std;

struct r_mhs{
    char npm[14];
    char nama[40];
    float ipk;
    int npm2;
};
typedef r_mhs LarikMhs[30];

void banyakData(int& n){
	cout<<"Masukkan Banyak data : ";cin>>n;
}

void inputMhs(LarikMhs& mhs, int n) {
    for(int i = 0; i < n; i++) {
        cout << "Masukkan data Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama : "; cin.ignore();cin.getline(mhs[i].nama, 40);
        cout << "NPM : "; cin >> mhs[i].npm;
        cout << "IPK : "; cin >> mhs[i].ipk;
        cout << endl;
    }
}

void cetakMhs(LarikMhs mhs, int n) {
    cout<<"Data Mahasiswa\n";
    for(int i = 0; i < n; i++) {
		cout<<"Pegawai ke - "<<i+1<<endl;
        cout<<"NPM : "<<mhs[i].npm<<endl;
        cout<<"Nama :"<<mhs[i].nama<<endl;
        cout<<"IPK : "<<mhs[i].ipk<<endl;
        cout<<endl;
    }
}

void convNPM(LarikMhs& mhs, int n){
	for(int i = 0; i < n; i++) {
		mhs[i].npm2=atoi(mhs[i].npm);
    }
}

void sortNPM(LarikMhs& mhs, int n){
	convNPM(mhs,n);
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(mhs[j].npm2>mhs[j+1].npm2){
				swap(mhs[j],mhs[j+1]);
			}
		}
	}
}

int main() {
    LarikMhs mhs;
    int n;
    banyakData(n);
    inputMhs(mhs, n);
    sortNPM(mhs, n);
    cetakMhs(mhs, n);
}
	 
