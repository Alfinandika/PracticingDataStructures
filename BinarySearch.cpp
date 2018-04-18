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
    int AR[100],n,val,temp;;
    bool found;

    cout<<"Masukan Jumlah Angka : ";
    cin>>n;

    

    for(int i=0;i<n;i++)
    {
        cout<<"Masukan Bilangan ke "<<i+1<<" : ";
        cin>>AR[i];
    }

    cout<<"\nMasukan angka yang ingin dicari ";
    cin>>val;

    //proses sorting menggunakan bubble sort :) :)
    for(int i=1;i<n;++i)
    {
        for(int j=0;j<(n-i);++j)
            if(AR[j]>AR[j+1])
            {
                temp=AR[j];
                AR[j]=AR[j+1];
                AR[j+1]=temp;
            }
    }

    found=BinarySearch(AR,n,val);

    if(found){
        cout<<"\nData Ditemukan !";
    }
    else{
        cout<<"\nData Tidak Ditemukan !";
    }
    cout<<endl;
    
    return 0;
}