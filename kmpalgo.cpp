#include<iostream>
#include<string.h>

using namespace std;



void prefixlps(char *pattern,int m,int *lps){

    int len = 0; //variable to assist on traversal
    lps[0] = 0;
    int i = 1;

    while(i < m){ //find a match,increment
        if(pattern[i] == pattern[len]){

            len++;
            lps[i] = len;
            i++;
        }
        else{ //match not found and len not equal
            if(len != 0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }

    for (int z=0;z<m;z++){
    cout<<lps[z]<<" ";}
}

void kmpsearch(char *text,char *pattern){

    int n = strlen(text);
    int m = strlen(pattern);
    int lps[m];
    prefixlps(pattern,m,lps);
    int i = 0,j = 0;
    while((n - i) >= (m - j)){
        if(pattern[j] == text[i]){
            i++,j++;
        }
        else{
            if(j!=0){
                j = lps[j-1];
            }
            else{
                i=i+1;
            }
        }
        if(j==m){
            cout << "Pattern is found"<<" ";
            j = lps[j-1];
        }

    }
}

int main(){

    char text[] = "ababcabcababaab";
    char pattern[] = "baab";
    kmpsearch(text,pattern);
    return 0;

}