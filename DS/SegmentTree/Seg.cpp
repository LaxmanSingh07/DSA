#include <bits/stdc++.h>
using namespace std;
class Segment{
    public:
        vector<int> seg;
        int n;
        Segment(int n){
            this->n = n;
            seg.resize(4*n);
        }

        void build(int idx,int low,int high,vector<int>&arr){
            if(low==high){
                seg[idx]=arr[low];
                return;
            }
            int mid=(low)+(high-low)/2;
            build(2*idx+1,low,mid,arr);
            build(2*idx+2,mid+1,high,arr);
            seg[idx]=min(seg[2*idx+1],seg[2*idx+2]);
        }

        int query(int idx,int low,int high,int l,int r){
            //no overlap (l r low high or low high l r)
            if(r<low ||l>high) return INT_MAX;
            //complete overlap [l low high r]
            if(l<=low && r>=high){
                return seg[idx];
            }

            //partial overlap

            int mid=(low)+(high-low)/2;
            int left= query(2*idx+1,low,mid,l,r);
            int right=query(2*idx+2,mid+1,high,l,r);

            return min(left,right);

        }

        void update(int idx,int low,int high,int i,int val){
            if(low==high){
                seg[idx]=val;
                return;
            }
            int mid=(low)+(high-low)/2;
            if(i<=mid){
                update(2*idx+1,low,mid,i,val);
            }else{
                update(2*idx+2,mid+1,high,i,val);
            }
            seg[idx]=min(seg[2*idx+1],seg[2*idx+2]);
        }

    
};

int main(){
    vector<int> arr={1,3,2,-2,4,5};
    Segment s(arr.size());
    s.build(0,0,arr.size()-1,arr);
    cout<<s.query(0,0,arr.size()-1,1,3)<<endl;
    s.update(0,0,arr.size()-1,2,0);
    cout<<s.query(0,0,arr.size()-1,1,3)<<endl;
    return 0;
}