/*

Binary Search with Bubble Sort
@Author : Alfin Andika Pratama

*/

#include<iostream>
 
using namespace std;

bool BinarySearch(int AR[], int N, int VAL)
{
    int Mid,Lbound=0,Ubound=N-1;
    while(Lbound<=Ubound)
    {
        Mid=(Lbound+Ubound)/2;
        if(VAL>AR[Mid]){
            Lbound=Mid+1;
        }
        else if(VAL<AR[Mid]){
            Ubound=Mid-1;
        }
        else{
            return true;
        }
    }
    return false;
}

int main()
{
    int AR[100],n,val,temp, jumlah = 0;
    bool found;

    cout<<"Masukan Jumlah Angka : ";
    cin>>n;

    

    for(int i=0;i<n;i++)
    {
        cout<<"Masukan Bilangan ke "<<i+1<<" : ";
        cin>>AR[i];
    }

    cout<<"\nMasukan angka yang ingin dicari : ";
    cin>>val;

    //proses sorting menggunakan bubble sort :) :)
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<(n-i);j++){
            if(AR[j]>AR[j+1])
            {
                temp=AR[j];
                AR[j]=AR[j+1];
                AR[j+1]=temp;
            }
        }

    }

    found=BinarySearch(AR,n,val);

    cout<<"Pengurutan Data : ";

    for(int i=0;i<n;i++)
    {
        cout<<AR[i]<<" ";
         jumlah += AR[i];
    }

    if(found){
        cout<<"\nStatus : Data Ditemukan !";
    }
    else{
        cout<<"\nStatus : Data Tidak Ditemukan !";
    }
    cout<<endl;
    cout<<"Penjumlahan Data : "<<jumlah<<endl;
    
    return 0;
}