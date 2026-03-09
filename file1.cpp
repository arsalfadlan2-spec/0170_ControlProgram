#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x;

    srand(time(0));
    x = rand() % 10;

    if (x==0){
        x = x+9;
        cout<<"nilai x sudah dikoreksi menjadi : "<<x<<endl;
    }
    
    cout << "Bilangan yang diberikan = "<<x;
}