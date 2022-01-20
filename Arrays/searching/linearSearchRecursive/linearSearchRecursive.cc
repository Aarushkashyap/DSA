#include<iostream>
#include<vector>
using namespace std;
void linearSearchRecursive(vector<int> vrr, int n, int key){

    if(n<0){
        cout<<"key not found";
        return;
    }
    if(vrr[n]==key){
        cout<<"Key found at: "<<n;
        return;
    }
    else{
        linearSearchRecursive(vrr, n-1, key);
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
    linearSearchRecursive(vrr, n, key);
    return 0;
}