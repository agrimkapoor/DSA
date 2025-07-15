// are two strings permutation of each other
#include <iostream>
using namespace std;

bool stringsPermutations(char*a,char*b){
    int freq[26]={0};
    int index,i;
    for(i=0;a[i];++i){//a[i]!='\0' yeh bhi likh sakte hai
    // ascii code of null character is 0

    index=a[i]-'a';
    freq[index]++;

    }
    for(i=0;b[i];++i){
        index=b[i]-'a';
        freq[index]--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
               
    }
    return true; 

}
int main() {
    char a[]="abcd";
    char b[]="dcbax";
    if(stringsPermutations(a,b)){
        cout<<"permutations hai\n";
    }
    else{
        cout<<"permutations nhi hai\n";
    }
    return 0;
}