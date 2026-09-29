#include<iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

vector<long long>replace_even_digits(long long n){
    if(n<=0){
        cout<<"Only Positive Numbers are allowed."<<endl;
        return {-1};
    }

    long long temp = n;
    vector<long long>arr;
    while(temp != 0){
        long long rem = temp %10;
        arr.push_back(rem);    
        temp = temp/10;
    }

    for(long long &i:arr){
        if(i%2 == 0){
            i = 0;
        }
    }

    reverse(arr.begin(),arr.end());
    return arr;


}

int main(){
    long long n;
    cout<<"Enter a Number: ";
    cin>>n;
    vector<long long>result = replace_even_digits(n);
    for(int i:result){
        cout<<i<<" ";
    }

    cout<<endl;
    return 0;
}