// two stacks in an array 
 #include<iostream>
 using namespace std;
 class TwoStack
 {
    int *arr;
    int top1;
    int top2;
    int size;
public:
    //intilization Twostack
    TwoStack(int s)
    {
        this->size=s;
        top1=-1;
        top2=s;
        arr= new int[s];

    }
    //Push in stack 1
    void push1(int num)
    {
        //at least one empty space is present 
        if(top2-top1>1)
        {
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"Stack Overflow";
        }
    }
    void push2(int num)
    {
        //at least one empty space is present 
        if(top2-top1>1)
        {
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"Stack Overflow";
        }
    }
    int pop1(){
        if(top1>=0)
        {
            int ans=arr[top1];
            top1--;
            return ans;
        }
        return -1;
    }
      int pop2(){
        if(top2<size)
        {
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
      
      
 };
 int main()
 {
    
    return 0;
 }