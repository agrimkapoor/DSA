//i KO BINARY ME CONVERT KARO IN N BITS
#include <iostream>
#include<cstring>
using namespace std;
int main() {
    
    int n=3;
    for(int i=0;i<=((1<<n)-1);i++){//loop of i from 0 to 7
        int no=i;//DONT CHANGE i
        for(int j=0;j<n;j++){//PRINTING N BITS FOR EACH I
            cout<<(no&1);//ye bracket lagana zaroori hai
            no=no>>1;
        }
        cout<<endl;
    }
    // 000
    // 100
    // 010
    // 110  //YE BITS ULTE ORDER MEI PRINT HO RAHI HAI FOR EACH i
    // 001  // AGAR J KA LOOP ULTA CHALAYE TOH BHI YE HI O/P AAYEGA(HAM N TIMES KAAM KAR RAHE HAI ,J KI VALUE SE FARAK NHI PADH RAHA)
    // 101  // AS HAM LSB PEHLE EXTRACT KAR RAHE HAI
    // 011
    // 111

    //BUT STILL WE GOT ALL THE  2^3 COMBINATIONS 


    return 0;
}