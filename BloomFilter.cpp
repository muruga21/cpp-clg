#include<bits/stdc++.h>
using namespace std;

int hashfun1(int i){
    return (i%5);
}

int hashfun2(int i){
    return (2*i + 3)%5;
}

int main()
{
    vector<int> values = {2,4,6,8};
    vector<int> filter(5,0);
    for(auto x : values){
        int i = hashfun1(x);
        int j = hashfun2(x);
        filter[i] = 1;
        filter[j] = 1;
    }
    int val = 16;
    int i = hashfun1(val);
    int j = hashfun2(val);
    if(filter[i] && filter[j]){
        cout<<"False positive";
    }
    else{
        cout<<"Negative";
    }
    return 0;
}
