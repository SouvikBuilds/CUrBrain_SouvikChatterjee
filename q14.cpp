#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>thresholdFilter(vector<int>arr,int threshold){
    if(arr.size() == 0) return {};
    vector<int>result;
    for(int i:arr){
        if(i>=threshold){
            result.push_back(i);
        }
    }

    if(result.size() == 0) return {};
    return result;
}

int main(){
    int n;
    cout<<"Enter Val of N: ";
    cin>>n;
    vector<int>arr;
    for(int i = 0; i<n; i++){
        int num;
        cout<<"Enter Number "<<i+1<<": ";
        cin>>num;
        arr.push_back(num);
    }
    int threshold;
    cout<<"Enter Threshold: ";
    cin>>threshold;
    vector<int>result = thresholdFilter(arr,threshold);

    for(int i:result){
        cout<<i<<" ";
    }

    cout<<endl;
    return 0;
}