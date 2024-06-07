#include<bits/stdc++.h>
using namespace std;


class ST{
    vector<int>seg,lazy;

    public:
    ST(int n): seg(4*n),lazy(4*n,0){

    }

        void build(int idx,int low,int high,vector<int>&arr){
            if(low==high){
                seg[idx]=arr[low];
                return ;
            }
            int mid=low+(high-low)/2;
            build(2*idx+1,low,mid,arr);
            build(2*idx+2,mid+1,high,arr);
            seg[idx]=seg[2*idx+1]+seg[2*idx+2];
        }
        void update(int idx,int low,int high,int l,int r,int val){
            // update lazy value

            if(lazy[idx]!=0){
                seg[idx]+=(high-low+1)*lazy[idx];
                // propagate lazy value to children
                if(low!=high){
                    lazy[2*idx+1]+=lazy[idx];
                    lazy[2*idx+2]+=lazy[idx];
                }
                lazy[idx]=0;
            }

            // no overlap (l r low high or low high l r)
            if(r<low || l>high) return;

            // complete overlap [l low high r] 
            if(l<=low && r>=high){
                seg[idx]+=(high-low+1)*val;
                // propagate lazy value to children
                if(low!=high){
                    lazy[2*idx+1]+=val;
                    lazy[2*idx+2]+=val;
                }
                return;
            }

            // partial overlap

            int mid=low+(high-low)/2;
            update(2*idx+1,low,mid,l,r,val);
            update(2*idx+2,mid+1,high,l,r,val);
            seg[idx]=seg[2*idx+1]+seg[2*idx+2];

        }

        int query(int idx,int low,int high,int l,int r){
            // update lazy value

            if(lazy[idx]!=0){
                seg[idx]+=(high-low+1)*lazy[idx];
                // propagate lazy value to children
                if(low!=high){
                    lazy[2*idx+1]+=lazy[idx];
                    lazy[2*idx+2]+=lazy[idx];
                }
                lazy[idx]=0;
            }

            // no overlap (l r low high or low high l r)

            if(r<low || l>high) return 0;

            // complete overlap [l low high r]

            if(l<=low && r>=high){
                return seg[idx];
            }

            // partial overlap

            int mid=low+(high-low)/2;
            int left=query(2*idx+1,low,mid,l,r);
            int right=query(2*idx+2,mid+1,high,l,r);

            return left+right;

        }
};

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ST s(n);
    s.build(0,0,n-1,arr);

    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int l,r;
            cin>>l>>r;
            cout<<s.query(0,0,n-1,l,r)<<endl;
        }else{
            int l,r,val;
            cin>>l>>r>>val;
            s.update(0,0,n-1,l,r,val);
        }
    }

    return 0;
}