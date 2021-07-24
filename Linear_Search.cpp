#include<iostream>
using namespace std;

void linearsearch(int a[],int n){
    int temp = -1;

    for(int i=0;i<5;i++){
        if(a[i]==n){
            cout<<"Element found at location: "<<i<<endl;
            temp=0;
        }
    }
    if(temp==-1){
        cout<<"No element found"<<endl;
    }

}

int main()
{
    int arr[5]={1,22,33,44,55};
    cout<<"Please enter an element to search"<<endl;
    int num;
    cin>>num;

    linearsearch(arr,num);

return 0;
}