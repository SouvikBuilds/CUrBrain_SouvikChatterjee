#include<iostream>
using namespace std;

int countDigits(int n){
    if(n == 0){
        return 1;
    }

    if(n < 0){
        n = -n;
    }
    long long temp = n;
    int count = 0;
    while(temp != 0){
        count++;
        temp = temp/10;
    }

    return count;
}

bool hasEvenDigits(int n){
    int count = countDigits(n);
    if(count % 2 != 0){
        return false;
    }

    return true;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    bool result = hasEvenDigits(n);
    if(result == true){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    
    return 0;
}