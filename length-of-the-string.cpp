#include<iostream>
using namespace std;

void length(char input[]){
    int i;
    for ( i = 0; input[i] != '\0'; i++)
    {
        cout<<input[i];   
    }
    cout<<endl<<i;
}

int main()
{
    char name[200];
    cout<<"Enter your name: ";
    cin>>name;
    cin.getline(name,200);
    // name[1]='\0';
    // name[3]='d';
    // name[4]='e';
    cout<<"Your name is: "<<name<<endl;
    // cout<<strlen(name);
    length(name);
    return 0;
}