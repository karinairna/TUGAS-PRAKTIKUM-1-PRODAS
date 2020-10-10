//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//

#include<iostream>
using namespace std;
int main()
{
    char nama[14];
    int noKomptr,jam1,menit1,detik1,jam2,menit2,detik2,jumlahjam,jumlahmenit,jumlahdetik,totalbayar;

 
    cout<<"          **********   SELAMAT DATANG DI BABY NET ***********"<<endl<<endl;
 
 
    cout<<"*******************************************************************\n";
    cout<<"                   Tarif Rp 5000   per jam \n\n";
    cout<<"Masukkan Nama Kamu      :  ";cin>>nama;
    cout<<"Masukkan No Komputer    :  ";cin>>noKomptr;
    cout<<"********************************************************************\n\n\n";
    
	cout<<"Waktu Mulai   \n";
    cout<<"masukkan jam :";
    cin>>jam1;
    cout<<"masukkan menit :";
    cin>>menit1;
    cout<<"masukkan detik :";
    cin>>detik1;
    cout<<"********************************************************************\n\n\n";
    cout<<"Waktu Selesai   \n";
    cout<<"masukkan jam :";
    cin>>jam2;
    cout<<"masukkan menit :";
    cin>>menit2;
    cout<<"masukkan detik :";
    cin>>detik2;
   
    
	jumlahdetik = ((jam2-jam1)*3600) + ((menit2-menit1)*60) + (detik2-detik1);
    totalbayar =jumlahdetik * 5000 / 3600;
    cout<<"********************************************************************\n\n\n";
    cout<<"Nama:  "<<nama<<endl;
    cout<<"NoKomputer:  "<<noKomptr<<endl;
    cout<<"LamaPenggunaan:  "<<(jam2-jam1)<<"Jam"<<(menit2-menit1)<<"Menit"<<(detik2-detik1)<<"Detik"<<endl;
    
	cout<<"********************************************************************\n\n\n";
    cout<<"Total BayarRp. "<<totalbayar<<endl;
    

    cout<<"########################## TERIMAKASIH #################################\n";
    
    return 0;
}
