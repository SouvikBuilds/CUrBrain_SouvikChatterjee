#include<iostream>
#include <vector>
#include <math.h>
using namespace std;

long long get_sum(vector<long long>&arr){
    if(arr.size() == 0){
        return 0;
    }
    long long mod = 1;
    for(int i = 0; i<9; i++){
        mod*=10;
    }
    mod = mod+7;
    long long sum = 0;
    for(long long i:arr){
        sum+=i;
        sum = sum%mod;
    }

    return sum;
}

int main(){
    int n;
    
    vector<long long>arr;
    cout<<"Enter No of Elements: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        long long val;
        cout<<"Enter Element "<<i+1<<": ";
        cin>>val;
        arr.push_back(val);
    }
    long long result = get_sum(arr);
    cout<<"Result: "<<result<<endl;
    return 0;
}