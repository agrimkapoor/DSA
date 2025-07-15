//ROTATE A STRING
#include <iostream>
#include<cstring>
using namespace std;
void rotatestring(char*a,int k){
 int len=strlen(a);
 k=k%len;// important 
 // now code will work for k>6(len)
 // agar k=5000 toh itni baar shift thodi na karenge
 // if we dont do k%=len then for k=7  null char starting me aajayega so no o/p

// o/p for k=7 must be same as k=1

 // last se k elements shuru me aa rhe hai

 //1.shift all characters k times ahead
    for(int i=len-1;i>=0;i--){// shifting last bucket se karni padegi(not null char)
        a[i+k]=a[i];
    }
//2.bring k characters from end to front
    for(int i=len, j=0;j<k;i++,j++){// int i=len,int j=0 is wrong

    a[j]=a[i];
    }
//3.Add character '\0' at len position
    a[len]='\0';
//4.print
    cout<<a;
}
int main() {
    char a[100]="coding";
   
    int k;
    cin>>k;
    // we have to use cin.ignore agar string i/p karte
    // as number and string ka i/p ek saath ke liye cin.ignore()
    // you can take size of array 2*strlen
    // this code can work for hello world (whitespaces de diye)
    rotatestring(a,k);



    return 0;
}