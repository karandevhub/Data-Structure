#include<iostream>
using namespace std;

void printUpperCase(char ch[]){

        int s=0;
        while(ch[s]!='\0'){
            if(ch[s]>= 'a' && ch[s]<='z'){
                ch[s]=ch[s]-32;
                s++;
            }
            else
                s++;
        }

        cout<<ch;

}

int main()
{
   char ch[100];
    cout<<"enter string"<<endl;  
   cin.getline(ch,50);
   printUpperCase(ch);
    return 0;
}