//DIRECTIONS
#include <iostream>
using namespace std;
int main() {
    //sample i/p : SSSSEENW
    int x=0,y=0;
    char ch;
    ch=cin.get();
    while(ch!='\n'){//agar cin toh ch mei \n kabhi nhi aayega and infinite loop
        //THIS LOOP RUNS JAB TAK ENTER NHI PRESS KAROGE
        if(ch=='S')y--;
        if(ch=='N')y++;
        if(ch=='W')x--;
        if(ch=='E')x++;

        ch=cin.get();
    }
    //lexicographical : E N S W
    if(x>0){
        for(int i=1;i<=x;i++){
            cout<<'E';
        }
        for(int i=1;i<=abs(y);i++){
            if(y<0)cout<<'S';
            else cout<<'N';
        }
    }
    else{
         for(int i=1;i<=abs(y);i++){
            if(y<0)cout<<'S';
            else cout<<'N';
        }
         for(int i=1;i<=abs(x);i++){
            cout<<'W';
        }

    }
    //M2
    /*
        if(x>0){
            for(int i=1;i<=x;i++){
                cout<<'E';
            }
           
        }
        for(int i=1;i<=abs(y);i++){
                if(y<0)cout<<'S';
                else cout<<'N';
            }
        if(x<=0){
            
            for(int i=1;i<=abs(x);i++){
                cout<<'W';
            }

        }
    */
    return 0;
}