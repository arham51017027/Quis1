#include <iostream.h>
#include <conio.h>
   main() {
   char nama [30];
   float jurusan,nk,nt1,nt2,nt3,nmid,nquis,nfinal,tnt,na;
    cout<<"hitung nilai akhir"<<endl;
    cout<<"nama mahasiswa =";cin>>nama;
    cout<<"jurusan mahasiswa =";cin>>jurusan;
    cout<<"nilai kehadiran =";cin>>nk;
    cout<<"nilai tugas1 =";cin>>nt1;
    cout<<"nilai tugas2 =";cin>>nt2;
    cout<<"nilai tugas3 =";cin>>nt3;
    cout<<"nilai mid =";cin>>nmid;
    cout<<" nilai quis =";cin>>nquis;
    cout<<" nilai final =";cin>>nfinal;
    tnt =(nt1+nt2+nt3)/3;
    na =(0,2*nk)+(0,2*tnt)+(0,2*nmid)+(0,2*nquis)+(0,2*nfinal);
    cout<<"siswa yang bernama"<<jurusan<<endl;
    cout<<"jurusan"<<jurusan<<endl;
    cout<<"nilai akhir"<<nk<<endl;
    getch(); }
