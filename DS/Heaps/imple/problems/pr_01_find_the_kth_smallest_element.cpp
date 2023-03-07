#include<iostream>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;

            if(arr[parent]<arr[index])
            {   swap(arr[index],arr[parent]);

                index=parent ;
            }
            else{
                return ;
            }
            
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deletek(){
        if(size==0){
            cout<<"Nothing to Delete Heap is Empty ";
            return ;
        }

    arr[1]=arr[size];
    size--;


    int i=1;
    while(i<size){
        int leftIndex=2*i;
        int rightIndex=2*i+1;
        if(leftIndex<size&&arr[leftIndex]>arr[i]){
            swap(arr[i],arr[leftIndex]);
            i=leftIndex;
        }

        else if(rightIndex<size&&arr[i]<arr[rightIndex]){
            swap(arr[i],arr[rightIndex]);
            i=rightIndex;
        }
        else{
            return;
        }
    }
    }

};

void heapify(int arr[],int n,int i){
    int largest=i;
    int left =2*i;
    int right=2*i+1;

    if(left<=n&&arr[largest]<arr[left]){
        largest=left;
    }
    if(largest<=n&&arr[largest]<arr[right]){
        largest=right;

    }if(largest!=1){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){
    int t=n;
    while(t>1){
        swap(arr[t],arr[1]);
        t--;
        heapify(arr,t,1);
    }
}
int main()
{
    

    return 0;
}