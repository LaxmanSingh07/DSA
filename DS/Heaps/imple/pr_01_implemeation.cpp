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
        void insert(int val)
        {
            size=size+1;
            int index=size;
            arr[index]=val;

            while(index>1){
                int parent=index/2;
                if(arr[parent]<arr[index]){
                    swap(arr[parent],arr[index]);
                    index=parent;

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

        void deletes(){
            if(size==0){
                cout<<"Nothing to Delete\n"<<endl;
                return;

            }

            //step 1 : put last element into first index 

            arr[1]=arr[size];
            //step 2: remove the last element 

            size--;


            //step 3: take root node to its correct position 

            int i=1;
            while(i<size){
                int leftIndex=2*i;
                int rightIndex=2*i+1;
                if(leftIndex<size&&arr[i]<arr[leftIndex]){
                        swap(arr[i],arr[leftIndex]);
                        i=leftIndex;
                }
                else if(rightIndex<size &&arr[i]<arr[rightIndex]){
                    swap(arr[i],arr[rightIndex]);
                    i=rightIndex;

                }
                else{
                    return;
                }
            }

        }
};


// 0 base indexing 
// void heapify(int arr[],int n,int i){
//     int largest=i;
//     int left=2*i;
//     int right=2*i+1;
//     if(left<n&&arr[largest]<arr[left]){
//         largest=left;

//     }
//     if(right<n&&arr[largest]<arr[right]){
//         largest=right;
//     }
//     if(largest!=i){
//         swap(arr[largest],arr[i]);
//         heapify(arr,n,largest);
//     }
// }


void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n&&arr[largest]<arr[left]){
        largest=left;

    }
    if(right<=n&&arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){
    int t=n;
    while(t>1){
        // step 1:
        swap(arr[t],arr[1]);
        //step 2:
        t--;
        //step3:
        heapify(arr,t,1);


    }
}
int main()
{
        Heap h;
        h.insert(50);
        h.insert(55);
        h.insert(53);
        h.insert(52);
        h.insert(54);

        h.print();
    h.deletes();
    h.print();
    int arr[]={-1,54,55,53,52,50};
    int n=5;
    for(int i=5/2;i>0;i--){
    heapify(arr,5,i);
    }

    cout<<"printing array "<<endl;
    for(int i=1;i<=5;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;

    //heapsort 

    heapSort(arr,n);
        cout<<"printing sorted  array "<<endl;
    for(int i=1;i<=5;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;

    return 0;
}