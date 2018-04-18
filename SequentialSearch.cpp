/*

Sequential Search with Selection Sort
@Author : Alfin Andika Pratama

*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    int cari,ketemu;
    int A[100];
    int n;
    int temp;
    int jumlah = 0;

   cout<<"PROGRAM SEARCHING\n";

   cout<<"Masukan Jumlah Angka : ";
    cin>>n;
   for (i=0;i<n;i++)
   {
   cout<<"masukkan data ke-"<<i+1<<" : ";
   cin>>A[i] ;
   }

   //proses sorting menggunakan selection sort :) :)

   for(int j=0;j<n; j++){
    for(int i=j+1;i<n; i++)
     {
         if(A[j]>A[i])  
          {
             temp=A[j];
             A[j]=A[i]; 
             A[i]=temp;
          }
      }
    }

   cout<<endl;
    cout<<"Input bilangan yang dicari : ";
    cin>>cari;
    cout<<"Pengurutan Data : ";

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
         jumlah += A[i];
    }
    cout<<endl;

    ketemu=0;
    for(i=0;i<n;i++)
    {
        if (A[i]==cari)
        {
            ketemu=1;
            cout<<"Status : Data ditemukan pada indeks ke-"<<i<<endl;;
        }
    }

    if (ketemu==0){
       cout<<"Status : Data tidak ditemukan";
    }

    cout<<endl;
    cout<<"Penjumlahan Data : "<<jumlah<<endl;
    cout<<endl;
}