#include<iostream>
using namespace std;

void insertionsort(int arr[]){
    int j=0;
    int key=0;
    for(int i=1;i<5;i++){
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key; 
        
    }
}

int main(){
    int arr[5]={2,1,5,3,4};
    insertionsort(arr);

    for(int i;i<5;i++){
        cout<<arr[i]<<" ";
    }


return 0;
}