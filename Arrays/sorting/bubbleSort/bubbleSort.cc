#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> vrr, int n){
    int temp,i;
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(vrr[j]>vrr[j+1]){
                temp = vrr[j];
                vrr[j]=vrr[j+1];
                vrr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<vrr[i]<<" ";
    }
    return ;
}
int main(){
    int n,i,temp;
    cin>>n;
    vector<int> vrr;
    for(i=0;i<n;i++){
        cin>>temp;
        vrr.push_back(temp);
    }
    bubbleSort(vrr,n);
    return 0;
}