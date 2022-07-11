#include<iostream>
using namespace std;

struct Kampus{
    string namaKampus, alamatKampus;
    int tahunBerdiri;
};


struct Mahasiswa{
    string npm, nama, jurusan; //member
    int umur;
    Kampus kps;
    struct AlamatMhs{
        string jalan;
    }alamat;
    string hobi[3];
}mhs1, mhs2; //global

void cetakDataMahasiswa(Mahasiswa data){
    cout<<"NPM Mahasiswa : " << data.npm << endl;
    cout<<"Nama Mahasiswa : " << data.nama << endl;
    cout<<"Jurusan Mahasiswa : " << data.jurusan << endl;
    cout<<"Umur Mahasiswa : " << data.umur << endl;
    cout<<"Nama Universitas Mahasiswa : " << data.kps.namaKampus << endl;
    cout<<"Alamat Universitas Mahasiswa : " << data.kps.alamatKampus << endl;
    cout<<"Tahun Berdiri Universitas Mahasiswa : " << data.kps.tahunBerdiri << endl;
    cout<<"Hobi1 Mahasiswa : " << data.hobi[0] << endl;
    cout<<"Hobi2 Mahasiswa : " << data.hobi[1] << endl;
    cout<<"Hobi3 Mahasiswa : " << data.hobi[2] << endl;
    cout<<"Alamat Mahasiswa : " << data.alamat.jalan << endl;
    cout<<"==================================================="<<endl<<endl;
}


//untuk mengakses member dari structure, dapat digunakan operator akses member berupa period(.)
int main(){


    //array dari structure
    Mahasiswa mhs[2];

    Kampus kampusUtama = {"Universitas amikom yogyakarta", "sleman", 1945};

    //cara pertama
    mhs[0].npm = "21.11.1111";
    mhs[0].nama = "Sihab";
    mhs[0].jurusan = "informatika";
    mhs[0].umur = 21;
    mhs[0].hobi[0] = "futsal";
    mhs[0].hobi[1] = "joging";
    mhs[0].hobi[2] = "makan";
    mhs[0].kps = kampusUtama;
    mhs[0].alamat.jalan = "candi gebang";


    cetakDataMahasiswa(mhs[0]);

    mhs[1].npm = "21.11.2222";
    mhs[1].nama = "Dea";
    mhs[1].jurusan = "informatika";
    mhs[1].umur = 20;
    mhs[1].hobi[0] = "makan";
    mhs[1].hobi[1] = "tidur";
    mhs[1].hobi[2] = "nonton";
    mhs[1].kps = kampusUtama;
    mhs[1].alamat.jalan = "candi gebang";
    cetakDataMahasiswa(mhs[1]);
    
    

    /*
    //cara kedua
    mhs[1] = {"21.11.2222",  "Qurais", "informatika", 22,.kps ={"Universitas Amikom Yogyakarta", "Sleman, Yogyakarta", 1945},
                {"futsal", "joging", "makan"}, . AlamatMhs = {"candi gebang"}};
    cout<<"NPM Mahasiswa 2 : " << mhs[1].npm << endl;
    cout<<"Nama Mahasiswa 2 : " << mhs[1].nama << endl;
    cout<<"Jurusan Mahasiswa 2 : " << mhs[1].jurusan << endl;
    cout<<"Umur Mahasiswa 2 : " << mhs[1].umur << endl;
    cout<<"Nama Universitas Mahasiswa 2 : " << mhs[1].kps.namaKampus << endl;
    cout<<"Alamat Universitas Mahasiswa 2 : " << mhs[1].kps.namaKampus << endl;
    cout<<"Tahun Berdiri Universitas Mahasiswa 2 : " << mhs[1].kps.namaKampus << endl;
    cout<<"Hobi1 Mahasiswa 2 : " << mhs[1].hobi[0] << endl;
    cout<<"Hobi2 Mahasiswa 2 : " << mhs[1].hobi[1] << endl;
    cout<<"Hobi3 Mahasiswa 2 : " << mhs[1].hobi[2] << endl;
    cout<<"Alamat Mahasiswa 2 : " << mhs[1].alamat.jalan << endl;
    cout<<"==================================================="<<endl<<endl;


    //cara ketiga
    mhs[2] = {"21.11.3333", "sihab", "informatika", 23, .kps = {"Universitas Amikom Yogyakarta", "Sleman, Yogyakarta", 1945},
                {"futsal", "joging", "makan"} };
    cout<<"NPM Mahasiswa 3 : " << mhs[2].npm << endl;
    cout<<"Nama Mahasiswa 3 : " << mhs[2].nama << endl;
    cout<<"Jurusan Mahasiswa 3 : " << mhs[2].jurusan << endl;
    cout<<"Umur Mahasiswa 3 : " << mhs[2].umur << endl;
    cout<<"Nama Universitas Mahasiswa 3 : " << mhs[2].kps.namaKampus << endl;
    cout<<"Alamat Universitas Mahasiswa 3 : " << mhs[2].kps.namaKampus << endl;
    cout<<"Tahun Berdiri Universitas Mahasiswa 3 : " << mhs[2].kps.namaKampus << endl;
    cout<<"Hobi1 Mahasiswa 3 : " << mhs[2].hobi[0] << endl;
    cout<<"Hobi2 Mahasiswa 3 : " << mhs[2].hobi[1] << endl;
    cout<<"Hobi3 Mahasiswa 3 : " << mhs[2].hobi[2] << endl;
    cout<<"Alamat Mahasiswa 3 : " << mhs[2].alamat.jalan << endl;
    
    */
}