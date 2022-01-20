#include<iostream>
#include<vector>
using namespace std;
void linearSearch(vector<int> vrr,int key, int n){
    int i;
    for(i=0;i<n;i++){
        if(vrr[i]==key){
            cout<<"Key found at index: "<<i;
            return;
        }
    }
    cout<<"Key not found.";
}
int main(){
    int temp,key,n;
    cin>>n;
    vector<int> vrr;
    for(int i=0;i<n;i++){
        cin>>temp;
        vrr.push_back(temp);
    }
    cin>>key;
    linearSearch(vrr,key,n);
    return 0;
}