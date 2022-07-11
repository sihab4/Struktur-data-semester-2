#include<iostream>
using namespace std;

struct Mahasiswa{
    string npm, nama, jurusan; //member
    int umur;
    string hobi[3];
}mhs1, mhs2; //global

//untuk mengakses member dari structure, dapat digunakan operator akses member berupa period(.)
int main(){


    //cara pertama
    mhs1.npm = "21.11.1111";
    mhs1.nama = "Muhammad";
    mhs1.jurusan = "informatika";
    mhs1.umur = 21;
    mhs1.hobi[0] = "futsal";
    mhs1.hobi[1] = "joging";
    mhs1.hobi[2] = "makan";

    cout<<"NPM Mahasiswa 1 : " << mhs1.npm << endl;
    cout<<"Nama Mahasiswa 1 : " << mhs1.nama << endl;
    cout<<"Jurusan Mahasiswa 1 : " << mhs1.jurusan << endl;
    cout<<"Umur Mahasiswa 1 : " << mhs1.umur << endl;
    cout<<"Hobi1 Mahasiswa 1 : " << mhs1.hobi[0] << endl;
    cout<<"Hobi2 Mahasiswa 1 : " << mhs1.hobi[1] << endl;
    cout<<"Hobi3 Mahasiswa 1 : " << mhs1.hobi[2] << endl;
    cout<<"==================================================="<<endl<<endl;
    


    //cara kedua
    mhs2 = {"21.11.2222",  "Qurais", "informatika", 22, {"futsal", "joging", "makan"}};
    cout<<"NPM Mahasiswa 2 : " << mhs2.npm << endl;
    cout<<"Nama Mahasiswa 2 : " << mhs2.nama << endl;
    cout<<"Jurusan Mahasiswa 2 : " << mhs2.jurusan << endl;
    cout<<"Umur Mahasiswa 2 : " << mhs2.umur << endl;
    cout<<"Hobi1 Mahasiswa 2 : " << mhs1.hobi[0] << endl;
    cout<<"Hobi2 Mahasiswa 2 : " << mhs1.hobi[1] << endl;
    cout<<"Hobi3 Mahasiswa 2 : " << mhs1.hobi[2] << endl;
    cout<<"==================================================="<<endl<<endl;


    //cara ketiga
    Mahasiswa mhs3 = {"21.11.3333", "sihab", "informatika", 23, {"futsal", "joging", "makan"} };
    cout<<"NPM Mahasiswa 3 : " << mhs3.npm << endl;
    cout<<"Nama Mahasiswa 3 : " << mhs3.nama << endl;
    cout<<"Jurusan Mahasiswa 3 : " << mhs3.jurusan << endl;
    cout<<"Umur Mahasiswa 3 : " << mhs3.umur << endl;
    cout<<"Hobi1 Mahasiswa 3 : " << mhs1.hobi[0] << endl;
    cout<<"Hobi2 Mahasiswa 3 : " << mhs1.hobi[1] << endl;
    cout<<"Hobi3 Mahasiswa 3 : " << mhs1.hobi[2] << endl;
    
}