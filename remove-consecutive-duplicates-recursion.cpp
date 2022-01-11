#include<iostream>
using namespace std;

void remCon(char input[]){
    if(input[0]=='\0'){
        return;
    }

    if(input[0]!=input[1]){
        remCon(input+1);
    }
    else{
        for(int i=0;input[i]!='\0';i++){
            input[i]=input[i+1];
        }
            remCon(input);
    }
}

int main()
{
    char input[100];
    cin>>input;

    remCon(input);
    cout<<input;
    return 0;
}