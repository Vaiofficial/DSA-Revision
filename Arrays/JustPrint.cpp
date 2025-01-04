#include <iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    string sentence;

    // cout<<"Enter the number: ";
    // cin>>num;
    // cout<<"Number entered: "<<num<<endl;
    cout<<"Enter the sentence: ";
    getline(cin, sentence);
    cout<<"Sentence entered: "<<sentence<<endl;

    return 0;
}