#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text = "aaabbbabbba";
    string pattern = "onion";
    int m = pattern.size();
    vector<int> lps(m,0);
    int len = 1 ; 
    int i = 1;
    while(i<m){
        if(pattern[i] == pattern[len]){
            lps[i] = len;
            len++;
            i++;
        }
        else{
            lps[i]=0;
            i++;
        }
    }
    for(auto x : lps){
        cout<<x;
    }
    return 0;
}
