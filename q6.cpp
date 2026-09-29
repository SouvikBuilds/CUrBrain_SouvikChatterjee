#include<iostream>
#include <algorithm>
using namespace std;

long long get_freq_diff(long long n, int a, int b){

    if(n < 0){
        return -1;
    }

    long long countA = 0;
    long long countB = 0;

    if(n == 0){
        countA = (a == 0);
        countB = (b == 0);

        return abs(countA - countB);
    }

    long long temp = n;

    while(temp != 0){

        int rem = temp % 10;

        if(rem == a)
            countA++;

        if(rem == b)
            countB++;

        temp /= 10;
    }

    return abs(countA - countB);
}

int main(){
    int n,a,b;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Enter Digit One: ";
    cin>>a;
    cout<<"Enter Digit two: ";
    cin>>b;

    long long result = get_freq_diff(n,a,b);
    cout<<"Result: "<<result<<" "<<endl;
    return 0;
}