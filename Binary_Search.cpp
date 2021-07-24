#include<iostream>
using namespace std;

int binarysearch(int arr[],int left,int right,int x){
    while(left<=right){
        int mid =(right+left)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(x<arr[mid]){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[10];
    int num;
    int output;

    cout<<"Enter 10 integers in ascending form"<<endl;
    for(int i;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Enter the numbers that you want to search in array"<<endl;
    cin>>num;

    output=binarysearch(arr,0,9,num);

    if(output==-1){
        cout<<"Match not found"<<endl;
    }
    else{
        cout<<"Match found at Index Position: "<<output<<endl;
    }

return 0;
}