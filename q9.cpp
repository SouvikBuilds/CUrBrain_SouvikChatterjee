#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

bool checkPrime(int n){
    if(n<2){
        return 2;
    }

    for(int i = 2; i<=sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;
}

int findNextPrime(int n){
    if(n<2){
        return 2;
    }
    int nextNumber = n+1;
    while(checkPrime(nextNumber) != true){
        nextNumber++;
    }

    return nextNumber;
}

int main(){
    int number;
    cout<<"Enter a Number: ";
    cin>>number;

    int nextPrimeNumber = findNextPrime(number);
    cout<<"NextPrime Number: "<<nextPrimeNumber<<endl;
    return 0;
}