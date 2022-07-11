#include<iostream>
using namespace std;

struct Mahasiswa{
    string npm, nama, jurusan;
    int umur;
}mhs1, mhs2; //global

//untuk mengakses member dari structure, dapat digunakan operator akses member berupa period(.)
int main(){


    //cara pertama
    mhs1.npm = "21.11.1111";
    mhs1.nama = "Muhammad";
    mhs1.jurusan = "informatika";
    mhs1.umur = 21;

    cout<<"NPM Mahasiswa 1 : " << mhs1.npm << endl;
    cout<<"Nama Mahasiswa 1 : " << mhs1.nama << endl;
    cout<<"Jurusan Mahasiswa 1 : " << mhs1.jurusan << endl;
    cout<<"Umur Mahasiswa 1 : " << mhs1.umur << endl;
    cout<<"==================================================="<<endl<<endl;
    


    //cara kedua
    mhs2 = {"21.11.2222",  "Qurais", "informatika", 22};
    cout<<"NPM Mahasiswa 2 : " << mhs2.npm << endl;
    cout<<"Nama Mahasiswa 2 : " << mhs2.nama << endl;
    cout<<"Jurusan Mahasiswa 2 : " << mhs2.jurusan << endl;
    cout<<"Umur Mahasiswa 2 : " << mhs2.umur << endl;
    cout<<"==================================================="<<endl<<endl;


    //cara ketiga
    Mahasiswa mhs3 = {"21.11.3333", "sihab", "informatika", 23 };
    cout<<"NPM Mahasiswa 3 : " << mhs3.npm << endl;
    cout<<"Nama Mahasiswa 3 : " << mhs3.nama << endl;
    cout<<"Jurusan Mahasiswa 3 : " << mhs3.jurusan << endl;
    cout<<"Umur Mahasiswa 3 : " << mhs3.umur << endl;
    
}