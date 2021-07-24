#include<iostream>
using namespace std;

int partition(int arr[],int l,int r){
    int i= l-1;
    int pivit=arr[r];

    for(int j=l;j<r;j++){
        if(arr[j]<pivit){
            i++;
            swap(arr[j],arr[i]);
        }
    }

    swap(arr[i+1],arr[r]);
    return i+1;
}

void quicksort(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);

        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

int main(){

    int arr[5]={2,4,1,5,3};

    quicksort(arr,0,4);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}