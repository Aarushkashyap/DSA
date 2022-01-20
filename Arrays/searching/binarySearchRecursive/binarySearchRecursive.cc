#include<iostream>
#include<vector>
using namespace std;
void binarySearchRecursive(vector<int> vrr, int ul, int ll, int key,int n){
    int mid;
    mid=(ul+ll)/2;
    if(n<0){
        cout<<"Key not found";
        return;
    }
    if(vrr[mid]==key){
        cout<<"Key found at: "<<mid;
        return;
    }
    else if(vrr[mid]>key){
        binarySearchRecursive(vrr,mid-1,ll,key,n-1);
    }
    else{
        binarySearchRecursive(vrr, ul, mid+1, key,n-1);
    }
}
int main(){
    int n,i,temp,key;
    cin>>n;
    vector<int> vrr;
    for(i=0;i<n;i++){
        cin>>temp;
        vrr.push_back(temp);
    }
    cin>>key;
    binarySearchRecursive(vrr,n-1,0,key,n);
    return 0;
}