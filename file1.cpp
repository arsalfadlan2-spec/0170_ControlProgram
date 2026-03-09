#include <iostream>
using namespace std;

int main(){
    int x;

    srand(time(0));
    x = rand() % 10;

    if (x==10){
        x = x+9;
        cout<<"nilai x sudah dikoreksi menjadi : "<<x<<endl;
    }
    
    cout << "Bilangan yang diberikan = "<<x;
}