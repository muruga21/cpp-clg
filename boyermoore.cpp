#include <bits/stdc++.h>
using namespace std;

void search(string text , string pattern){
    int m = text.size();
    int n = pattern.size();
    unordered_map<char,int> mp;
    for(int i = 0 ; i < n ; i++){
        int temp = n-i-1 ;
        if(temp == 0) temp = n;
        mp[pattern[i]] = temp;
    }
    for(int s = 0 ; s < m-n+1 ;){
        int j = n-1 ;
        int pos = s+j;
        while(pattern[j] == text[pos] && j>=0){
            j--;
            pos--;
        }
        if(j<0){
            cout<<"pattern found at "<<s<<endl;
            s++;
        }
        else{
            int temp = mp[text[pos]];
            s += max(1,temp);
        }
    }

}

int main()
{
    string text = "RPCRQMGRPCRQ";
    string pattern = "RPCRQ";
    search(text,pattern);   
    return 0;
}
