#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

bool check_divisible_prefix_subarray(vector<long long>&arr,long long k){
    if(arr.size() == 0){
        return false;
    }

    if(k == 0){
        return false;
    }

    long long sum = 0;
    for(long long i:arr){
        sum+=i;
        if(sum%abs(k) == 0){
            return true;
        }
    }

    return false;
}

int main(){
    long long n;
    cout<<"Enter No of Elements: ";
    cin>>n;
    
    vector<long long>arr;
    for(long long i = 0; i<n; i++){
        long long val;
        cout<<"Enter Element "<<i+1<<": ";
        cin>>val;
        arr.push_back(val);
    }

    long long k;
    cout<<"Enter value of k: ";
    cin>>k;

    if(check_divisible_prefix_subarray(arr,k) == true){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}