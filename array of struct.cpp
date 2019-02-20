#include<iostream>
#include<iomanip>
#include <cstdio>
#include <conio.h>
 #include<stdlib.h>
using namespace std;
struct dbuku {
		char kbuku[99];
		char nbuku[99];
		char tt[99];
		char pg[99];
		char hrg[99];
};

int i,jml;
dbuku dbk [101];

void tambah(){
    cout<<"JUMLAH BARANG :";
    cin>>jml;
    for(i=0;i<jml;i++){
        cout<<"KODE BUKU			: "; cin>>dbk[i].kbuku;
        cout<<"NAMA BUKU			: "; cin>>dbk[i].nbuku;
        cout<<"TAHUN TERBIT BUKU	: "; cin>>dbk[i].tt;
        cout<<"PENGARANG BUKU		: "; cin>>dbk[i].pg;
        cout<<"HARGA BUKU			: "; cin>>dbk[i].hrg;
        cout<<"---------------------------------------------"<<endl;
    }
}

void tampil(){
    cout<<setfill(' ')
        <<setw(38)<<"DAFTAR BUKU"<<setw(38)<<endl<<endl;
    cout<<setfill(' ')
        <<setw(8)<<left<<"NOMOR"
        <<setw(13)<<left<<"KODE"
        <<setw(23)<<left<<"NAMA"
        <<setw(14)<<left<<"TAHUN TERBIT"
        <<setw(14)<<left<<"PENGARANG"
        <<setw(10)<<left<<"HARGA"
        <<endl<<endl;
    for (int i=0; i<jml; i++) {
        cout<<setfill(' ')
        <<setw(8)<<i+1
    	<<setw(13)<<left<<dbk[i].kbuku
    	<<setw(23)<<left<<dbk[i].nbuku
    	<<setw(14)<<left<<dbk[i].tt
        <<setw(14)<<left<<dbk[i].pg
        <<setw(10)<<left<<dbk[i].hrg
        <<endl << endl;
    }
}

int main () {
	int pil;
	bool menu;
	menu=false;

	do{
        cout<<"1. TAMBAH BUKU"<<endl;
        cout<<"2. TAMPILKAN BUKU"<<endl;
        cout<<"3. HAPUS BUKU"<<endl;
        cout<<"4. EDIT BUKU"<<endl;
        cout<<"PILIHAN :";
        cin>>pil;

        if(pil==1){
            tambah();
            cout<<"Back";
            menu=true;
            getch();
            system("cls");
        }
        else if(pil==2){
                tampil();
//            system("cls");
        }
        else if(pil==3){

            int kb;
            cout<<"\n PENGHAPUSAN DATA BUKU\n";
            cout<<" ____________________________________\n\n";
            cout<<" KODE BUKU : ";
            cin>>kb;
            cout<<endl;
            i--;

            for(int c=kb;c<i;c++)
            {
                    dbk[i]=dbk[i-1];
            }
            jml=jml-1;
            cout<<" DATA BERHASIL DIHAPUS\n\n";
            cout<<" ____________________________________________\n\n";
            cout<<"BACK";
            getch();
        }else if (pil==4){
            int kb;
            cout<<"NOMOR BUKU YANG AKAN DIEDIT :";
            cin>>kb;
            kb=kb-1;
            cout<<"KODE BUKU			: "; cin>>dbk[kb].kbuku;
            cout<<"NAMA BUKU			: "; cin>>dbk[kb].nbuku;
            cout<<"TAHUN TERBIT BUKU	: "; cin>>dbk[kb].tt;
            cout<<"PENGARANG BUKU		: "; cin>>dbk[kb].pg;
            cout<<"HARGA BUKU			: "; cin>>dbk[kb].hrg;
        }

    }while(menu=true);
}
