#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

vector<int>getFactors(int number){
    int squareRootedNo = sqrt(number);
    vector<int>factors;
    int i = 1;
    while(i<=squareRootedNo){
        if(number % i == 0){
            factors.push_back(i);
            if(i != number/i){
                factors.push_back(number/i);
            }
        }
        i++;
    }

    sort(factors.begin(),factors.end());

    return factors;
}

int findKthFactor(int num, int k){
    vector<int>factors = getFactors(num);
    if(k>factors.size()){
        return -1;
    }

    return factors[k-1];
}

int main(){
    int n,k;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Enter K: ";
    cin>>k;
    int kthFactor = findKthFactor(n,k);
    cout<<"kth Factor: "<<kthFactor<<endl;
    return 0;
}