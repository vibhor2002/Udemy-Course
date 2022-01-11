#include <iostream>
using namespace std;

void printSub(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }

    printSub(input.substr(1), output);
    printSub(input.substr(1), output + input[0]);
}

void printSub2(char input[], char output[], int i)
{
    if (input[0] == '\0')
    {
        output[i] = '\0';
        cout << output << endl;
        return;
    }
    output[i] = input[0];

    printSub2(input + 1, output, i);
    printSub2(input + 1, output, i + 1);
}

int main()
{
    // string input;
    // cin >> input;

    // string output = "";
    // printSub(input, output);

    char input[100];
    cin >> input;

    char output[10];
    printSub2(input, output,0);

    return 0;
}