#include <iostream>
using namespace std;

int main(){

    
    int nilai = 10;
    int *ptr = &nilai;

    cout<<"nilai pada varibel nilai adalah : "<< nilai <<endl;

    *ptr = 7;
    cout<<"nilai pada varibel nilai adalah : "<< nilai <<endl;
    cout<<"nilai : "<<nilai<<endl;
    cout<<"&nilai : "<<&nilai<<endl;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"*ptr : "<<*ptr<<endl<<endl;

    cout<<"==========================================================================="<<endl;

    string nama = "sihab";
    
    cout<<nama<<" berada pada alamat : " << &nama <<endl;

    //cara pertama
    string *ptrNama1;
    ptrNama1 = &nama;

    //cara kedua
    string *ptrNama = &nama;

    cout<<"ptr nama1 : " << ptrNama1 <<endl;
    cout<<"ptr nama : " << ptrNama <<endl;

    cout<<"nilai pada alamat ptrNama : " << *ptrNama<<endl;

    *ptrNama = "dea";
    cout<<"nilai pada variabel nama : "<< *ptrNama <<endl;
    cout<<"nilai pada alamat ptrNama : " << nama <<endl;
    

}