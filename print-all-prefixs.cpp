#include<iostream>
using namespace std;

void prefixes(char str[]){
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<str[j];
        }
        cout<<endl;
    }
    
}

int main()
{
    char str[100];
    cin.getline(str,100);
    prefixes(str);
    return 0;
}