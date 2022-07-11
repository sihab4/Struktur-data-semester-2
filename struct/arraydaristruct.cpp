#include<iostream>
using namespace std;

struct Mahasiswa{
    string npm, nama, jurusan; //member
    int umur;
    string hobi[3];
}mhs1, mhs2; //global

//untuk mengakses member dari structure, dapat digunakan operator akses member berupa period(.)
int main(){
    //array dari structure
    Mahasiswa mhs[3];


    //cara pertama
    mhs[0].npm = "21.11.1111";
    mhs[0].nama = "Muhammad";
    mhs[0].jurusan = "informatika";
    mhs[0].umur = 21;
    mhs[0].hobi[0] = "futsal";
    mhs[0].hobi[1] = "joging";
    mhs[0].hobi[2] = "makan";

    cout<<"NPM Mahasiswa 1 : " << mhs[0].npm << endl;
    cout<<"Nama Mahasiswa 1 : " << mhs[0].nama << endl;
    cout<<"Jurusan Mahasiswa 1 : " << mhs[0].jurusan << endl;
    cout<<"Umur Mahasiswa 1 : " << mhs[0].umur << endl;
    cout<<"Hobi1 Mahasiswa 1 : " << mhs[0].hobi[0] << endl;
    cout<<"Hobi2 Mahasiswa 1 : " << mhs[0].hobi[1] << endl;
    cout<<"Hobi3 Mahasiswa 1 : " << mhs[0].hobi[2] << endl;
    cout<<"==================================================="<<endl<<endl;
    


    //cara kedua
    mhs[1] = {"21.11.2222",  "Qurais", "informatika", 22, {"futsal", "joging", "makan"}};
    cout<<"NPM Mahasiswa 2 : " << mhs[1].npm << endl;
    cout<<"Nama Mahasiswa 2 : " << mhs[1].nama << endl;
    cout<<"Jurusan Mahasiswa 2 : " << mhs[1].jurusan << endl;
    cout<<"Umur Mahasiswa 2 : " << mhs[1].umur << endl;
    cout<<"Hobi1 Mahasiswa 2 : " << mhs[1].hobi[0] << endl;
    cout<<"Hobi2 Mahasiswa 2 : " << mhs[1].hobi[1] << endl;
    cout<<"Hobi3 Mahasiswa 2 : " << mhs[1].hobi[2] << endl;
    cout<<"==================================================="<<endl<<endl;


    //cara ketiga
    mhs[2] = {"21.11.3333", "sihab", "informatika", 23, {"futsal", "joging", "makan"} };
    cout<<"NPM Mahasiswa 3 : " << mhs[2].npm << endl;
    cout<<"Nama Mahasiswa 3 : " << mhs[2].nama << endl;
    cout<<"Jurusan Mahasiswa 3 : " << mhs[2].jurusan << endl;
    cout<<"Umur Mahasiswa 3 : " << mhs[2].umur << endl;
    cout<<"Hobi1 Mahasiswa 3 : " << mhs[2].hobi[0] << endl;
    cout<<"Hobi2 Mahasiswa 3 : " << mhs[2].hobi[1] << endl;
    cout<<"Hobi3 Mahasiswa 3 : " << mhs[2].hobi[2] << endl;
    
}