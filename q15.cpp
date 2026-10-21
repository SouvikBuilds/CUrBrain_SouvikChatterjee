#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int getMin(vector<int>arr){
    int minNumber = INT_MAX;

    for(int i:arr){
        if(abs(i)<abs(minNumber)){
            minNumber = i;
        }
    }

    return minNumber;
}

int main(){
    int n;
    cout<<"Enter Total count of numbers: ";
    cin>>n;
    vector<int>arr;
    for(int i = 0; i<n; i++){
        int num;
        cout<<"Enter Number "<<i+1<<": ";
        cin>>num;
        arr.push_back(num);
    }

    int minNumber = getMin(arr);
    cout<<"Minimum Number: "<<minNumber<<endl;
    return 0;
}