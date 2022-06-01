#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;

class toko{
	public:
		void barang1();
		void caribrg();
		void sort();
	private:

		typedef struct{
		int id;
		char nama[20];
		int stok;
		}
		brg;
		brg barang[5];
		brg temp;
		int n,i, b, cari, ada;
};

void toko::barang1(){
	cout<<"Masukan Jumlah Barang : ";
	cin>>n;
	cout<<endl;
	
	for (int i=0; i<n; i++) {
		cout<<endl;
		
		cout<<"Barang ke-"<<i+1<<endl;
		cout<<"Masukkan Id Barang : ";
		cin>>barang[i].id;
		cout<<"Masukkan Nama Barang : ";
		cin>>barang[i].nama;
		cout<<"Masukkan Stok Barang : ";
		cin>>barang[i].stok;
	}
	cout<<endl;
	cout<<"DAFTAR BARANG"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"ID    		Nama          	 STOK                "<<endl;
	cout<<"-------------------------------------------"<<endl;

	for (int i=0; i<n;i++) {
	cout<<" "<<barang[i].id<<"            "<<barang[i].nama<<"			"<<barang[i].stok<<endl;
	
	}
}
void toko::sort(){
	 for(i=0;i<n;i++){
        for(b=0;b<n-1;b++){
            if(barang[b].id > barang[b+1].id){
                temp.id=barang[b].id;
                barang[b].id=barang[b+1].id;
                barang[b+1].id=temp.id;

                strcpy(temp.nama,barang[b].nama);
                strcpy(barang[b].nama,barang[b+1].nama);
                strcpy(barang[b+1].nama,temp.nama);

                temp.stok=barang[b].stok;
                barang[b].stok=barang[b+1].stok;
				barang[b+1].stok=temp.stok;
			}
		}
	}
	cout<<endl;
    cout<<"DAFTAR BARANG SETELAH DIURUTKAN"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"ID    		Nama           	STOK                "<<endl;
	cout<<"-------------------------------------------"<<endl;

	for (int i=0; i<n;i++) {
	cout<<" "<<barang[i].id<<"            "<<barang[i].nama<<"			"<<barang[i].stok<<endl;
	}
}
void toko::caribrg(){
	cout<<"Masukan Kode Barang Untuk Mencari : ";
    cin>>cari;
	int brg=0;
		for(int i=0;i<n;i++){
			if(barang[i].id==cari){
			brg=1;
			cout<<"DAFTAR BARANG"<<endl;
			cout<<"-------------------------------------------"<<endl;
			cout<<"ID    		Nama         	  STOK                "<<endl;
			cout<<"-------------------------------------------"<<endl;

			cout<<" "<<barang[i].id<<"            "<<barang[i].nama<<"			"<<barang[i].stok<<endl;
            }


        	if (brg == 0){
                cout<<"Data Tidak ditemukan"<<endl;
            }
		}
}
int main(){
	toko x;
	x.barang1();
	x.sort();
	x.caribrg();
}
