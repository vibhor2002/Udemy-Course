#include<iostream>
using namespace std;

bool string_cmp(char str1[],char str2[]){
    if(strlen(str1)!=strlen(str2)){
        return false;
    }

    // for (int i = 0; i < strlen(str1); i++){
    for (int i = 0; str1[i] !='\0'; i++) {
        if (str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    char str1[200];
    // int len=0;
    // cin>>str1;
    // len=strlen(str1);
    // cout<<"Length: "<<len<<endl;

    char str2[200]; 
    cin>>str1;
    cin>>str2;
    // if (strcmp(str1,str2)==0){
    //     cout<<"Equal";
    // }
    // else{
    //     cout<<"Not Equal";
    // }

    // if (string_cmp(str1,str2)){
    //     cout<<"Equal";
    // }
    // else{
    //     cout<<"Not Equal";
    // }

    // strcpy(str2,str1);
    // cout<<str2;

    // strncpy(str2,str1,4);
    // cout<<str2;

    strcat(str1,str2);
    cout<<str1;

    return 0;
}