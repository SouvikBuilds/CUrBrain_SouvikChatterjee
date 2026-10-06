#include<iostream>
#include<vector>
using namespace std;

int getGcd(int a, int b){
    if(b == 0){
        return a;
    }

    return getGcd(b,a%b);
}

int chechGCDofArray(vector<int>&arr){
    int n = arr.size();
    int gcd = arr[0];

    for(int i=1;i<n;i++){
        gcd = getGcd(gcd,arr[i]);
    }

    return gcd;
}

int main(){
    vector<int>arr;
    int n;
    printf("Enter Total Count of Numbers: ");
    cin>>n;
    for(int i = 0; i<n; i++){
        int elm;
        cout<<"Enter Number "<<i+1<<": ";
        cin>>elm;
        arr.push_back(elm);
        
    }
    cout<<"GCD value: "<<chechGCDofArray(arr)<<endl;
    return 0;
}