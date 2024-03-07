#include<iostream>
using namespace std;

int main(){

    /*    BREAK- use to move out of the loop    */

    cout<<"FOR loop with break :"<<endl;
       for(int i=0;i<5;i++)
       {
        cout<<"karan"<<endl;
        break;                 // go out of the loop without executing rest code in the loop
        cout<<"kumar"<<endl;
       }
       cout<<"Mahato"<<endl;

    /*    CONTINUE - use to skip particular iteration   */

       cout<<"FOR loop with continue :"<<endl;
       for(int i=0;i<5;i++)
       {
        cout<<"karan"<<endl;
        continue;              // go to next iteration without executing rest code in the loop
        cout<<"kumar"<<endl;
       }
       cout<<"Mahato"<<endl;

       return 0;
}