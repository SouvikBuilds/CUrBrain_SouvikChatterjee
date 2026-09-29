#include<iostream>
using namespace std;

long long check_diff(long long n){
    if(n<=0){
        cout<<"Only positive Integer."<<endl;
        return -1;
    }

    long long temp = n;
    long long sum = 0;
    long long product = 1;
    while(temp != 0){
        long long rem = temp%10;
        sum+=rem;
        product*=rem;
        temp/=10;
    }

    long long diff = product-sum;

    return diff;
}

int main(){
    long long n;
    cout<<"Enter a Number: ";
    cin>>n;

    long long result = check_diff(n);
    cout<<result<<endl;
    return 0;
}