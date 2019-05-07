#include <iostream.h>
#include <conio.h>
#include <stdio.h>

char nama[20],kelas[8],abs[10];
void main(){
int data[5];
int i,total,rata,tmp;
clrscr();
cout<<"aplikasi nilai hitung rata2"<<endl;
cout<<"================================================"<<endl;
cout<<"Masukkan Nama: ";cin>>nama;
cout<<"================================================"<<endl;
cout<<"Masukkan Nilai ulangan Mahasiswa"<<endl;
total=0;
	for(i=0; i<5; i++)
   {
   cout<<"Masukkan nilai ke-"<<(i+1)<<":";cin>>data[i];
   total=total+data[i];
   }
   cout<<endl;
   cout<<"====================================================="<<endl;
   cout<<"mahasiswa dengan"<<nama<<"punya nilai sebagai berikut:\n"<<endl;
   	rata=total/5;
      cout<<"Total : "<<total<<endl;
      cout<<"Rata-rata: "<<rata<<endl;
      getch();
}
