#include<iostream>
using namespace std;

void swap(int & x, int & y) {
  int temp = x;
  x = y;
  y = temp;
}

class MinHeap{
    public:
    int *harr;
    int capacity;
    int heap_size;

    MinHeap(int cap){
        heap_size=0;
        capacity=cap;
        harr=new int[cap];
    }

    void insertKey(int k){
        if(heap_size==capacity){
           cout<<"could not insert Overflow ";
           return;
        }
        heap_size++;
        int i=heap_size-1;
        harr[i]=k;
        while(i!=0 && harr[parent(i)]>harr[i]){
            swap(harr[i],harr[parent(i)]);
            i=parent(i);
        }
    }

    int extractMin(){
        if(heap_size<=0){
            return INT_MAX;
        }
        if(heap_size==1){
            heap_size--;
            return harr[0];
        }

        int root=harr[0];
        harr[0]=harr[heap_size-1];
        heap_size--;
        MinHeapify(0);

        return root;
    }

    void MinHeapify(int i){
        int l=left(i);
        int r=right(i);
        int smallest=i;
        if(i<heap_size && harr[l]<arr[i]){
            smallest=r;
        }
        if(smallest!=i){
            swap( &harr[i], &harr[smallest]);
            MinHeapify(smallest);
        }
    }

    int parent(int i){
        return (i-1)/2;
    }

    int left(int i){
        return (2*i+1);
    }

    int right(int i){
        return (2*i+2);
    }

    void print(){
        for(int i=0;i<heap_size;i++){
            cout<<harr[i]<<" ";
        }cout<<endl;
    }
};

int main(){

    MinHeap H(5);
    H.insertKey(8 );
    H.insertKey(3);
    H.insertKey(4);
    H.print();

    return 0;
}