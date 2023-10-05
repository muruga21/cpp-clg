#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "THISISATEXT";
    string pattern = "TEXT";
    int n = str.size();
    int m = pattern.size();

    for(int i = 0 ; i < n-m+1 ; i++){
        for(int j = 0 ; j < m ; j++){
            if(str[i+j] != pattern[j]){
                break;
            }
            if(j == m-1){
                cout<<"pattern found at index "<<i<<endl;
            }
        }
    }

    return 0;
}
