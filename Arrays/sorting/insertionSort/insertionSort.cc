#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> vrr, int n){
    int i, j,key;
    for(i=1;i<n;i++){
        key = vrr[i];
        j=i-1;
        while(j>=0 && vrr[j]>key){
            vrr[j+1]=vrr[j];
            j=j-1;
        }
        vrr[j+1]=key;
    }
    for(i=0;i<n;i++){
        cout<<vrr[i]<<" ";
    }
    return;
}
int main(){
    int n,i,temp;
    cin>>n;
    vector<int> vrr;
    for(i=0;i<n;i++){
        cin>>temp;
        vrr.push_back(temp);
    }
    insertionSort(vrr,n);
    return 0;
}