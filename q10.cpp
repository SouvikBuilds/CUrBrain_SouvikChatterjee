#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

vector<int>getList(int n){
    vector<int>list;
    for(int i = 2; i<n; i++){
        list.push_back(i);
    }

    return list;
}


int getPrimeNumbers(int n){
    vector<int>totalList = getList(n);
    vector<int>primeList;
    for(int i = 0; i<totalList.size(); i++){
        if(totalList[i] == 0){
            continue;
        }

        primeList.push_back(totalList[i]);
        int prime = totalList[i];
        for(int j = i+prime; j<totalList.size(); j+=prime){
            totalList[j] = 0;
        }
    }

    return primeList.size();
}

int main(){
    int n;
    cout<<"Enter Limit: ";
    cin>>n;
    cout<<"Total Prime Numbers: "<<getPrimeNumbers(n)<<endl;
    return 0;
}