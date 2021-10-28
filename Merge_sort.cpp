#include <iostream>

using namespace std;

void merge(int arr[],int mid,int left,int right){
    int i=left;
    int j=mid+1;
    int k=left;
    
    int temp[5];
    
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    
    while(j<=right){
        temp[k]=arr[j];
        j++;
        k++;
    }
    
    for(int s=left;s<=right;s++){
        arr[s]=temp[s];
    }
}


void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        
        merge(arr,mid,left,right);
    }
}

int main()
{
    int arr[5]={3,2,6,5,1};
    mergesort(arr,0,4);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
