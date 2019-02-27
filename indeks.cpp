// PROGRAM MENCARI DATA DAN INDEKSNYA BERUPA ANGKA
// Dibuat oleh : Risa Amalia
// NIM / PRODI : 18050623019 / D3 MANAJEMEN INFORMATIKA
// Mata Kuliah : Praktikum Struktur Data

#include <iostream>
using namespace std;
int main () {

    int arr[100]={12,34,12,11,9,8,65,12,78,90,3,2,45,38,67},in;
    int index[20], result=0;


    cout << " \t PROGRAM MENCARI DATA DAN INDEKSNYA BERUPA ANGKA";
    cout << " \n\n Silahkan masukkan bilangan yang akan dicari  : ";
    cin  >> in;

    for (int i=0;i<100;i++){
        if (arr[i]==in){
            index[result]=i;
            result++;
        }
    }

    cout << "------------------------------------------------------------------";
    cout << endl;
    cout << " Jumlah bilangan yang dicari sebanyak         : " << result << endl;
    cout << " Bilangan yang dicari terdapat pada indeks ke : ";

    for (int j=0;j<result;j++){
        cout << index[j] << "\t\n" ;
    }
    cout << "------------------------------------------------------------------";

}
