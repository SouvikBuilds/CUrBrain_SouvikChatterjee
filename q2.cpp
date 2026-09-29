#include<iostream>
using namespace std;

long long reverse_and_double(long long n){
    if(n == 0){
        return 0;
    }

    long long temp = n;
    long long sum = 0;
    while(temp != 0){
        long long rem = temp%10;
        sum = sum*10+rem;
        temp = temp/10;
    }

    long long doubleSum = sum*2;

    
    return doubleSum;

}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int result = reverse_and_double(n);
    cout<<"Result: "<<result<<endl;
    return 0;
}