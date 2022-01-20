#include<iostream>
#include<vector>
using namespace std;
void binarySearch(vector<int> vrr, int ll, int ul, int key)
{
    int i,mid;
    while(ul>=ll){
        mid = (ul+ll)/2;
        if(vrr[mid]==key){
            cout<<"Key found at: "<<mid;
            return;
        }
        if(vrr[mid]>key){
            ul=mid-1;
        }
        else{
            ll=mid+1;
        }
    }
    cout<<"Key not found";
}
int main(){
    int key,temp,n;
    cin>>n;
    vector<int> vrr;
    for(int i=0;i<n;i++){
        cin>>temp;
        vrr.push_back(temp);
    }
    cin>>key;
    binarySearch(vrr, 0, n-1, key);
    return 0;
}