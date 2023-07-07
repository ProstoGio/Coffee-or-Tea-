#include <bits/stdc++.h>
using namespace std;

int main (){

    string choice;
    cout<<"Coffee or Tea?: ";
    cin>>choice;
    string choice2;
    for(int i=0; i<choice.size(); i++){
        choice2+=char(tolower(choice[i]));
    }
    if(choice2=="coffee")cout<<"Wrong, it's Tea!";
        else cout<<"Wrong, it's coffee!";

    return 0;
}