#include<iostream>
using namespace std;

long long check_palindrome(int n){
    if(n == 0){
        return n;
    }

    long long temp = n;
    long long sum = 0;
    while(temp != 0){
        long long rem = temp % 10;
        sum = sum*10+rem;
        temp = temp/10;
    }

    long long result = 0;
    if(sum == n){
        return n;
    }else{
        result = n + sum;
    }

    return result;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int result = check_palindrome(n);
    cout<<result<<endl;
    return 0;
}