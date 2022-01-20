#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> vrr, int n){
    int min,i,j,temp;
    for(i=0;i<n-1;i++){
        min= i;
        for(j=i+1;j<n;j++){
            if(vrr[j]<vrr[min]){
                min = j;
            }
            temp=vrr[min];
            vrr[min]=vrr[i];
            vrr[i]=temp;
        }
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
    selectionSort(vrr, n);
    return 0;
}