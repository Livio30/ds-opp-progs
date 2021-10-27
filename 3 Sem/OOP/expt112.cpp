#include<iostream>
using namespace std;

void staticVar(){
    static int c = 0;
    cout << c++;
}
void var(){
    int c = 0;
    cout << c++;
}

int main(){
    cout<<"Static Variable : ";
    for (int i = 0; i < 5; i++)
        staticVar();
    cout<<"\nVariable : ";
    for (int i = 0; i < 5; i++)
        var();
    return 0;    
}