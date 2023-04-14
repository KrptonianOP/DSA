#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the character: "<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"lower case"<<ch<<endl;

    }
    else if(ch>='A' && ch<='Z'){
        cout<<"upper case"<<ch<<endl;
    }
    else{
        cout<<"numbric number"<<ch<<endl;
    }
    
    return 0;
}