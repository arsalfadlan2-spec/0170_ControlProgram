#include <iostream>
using namespace std;

float Rata_rata(float a,float b){
    return (a+b)/2;
}

string Status_lulus(float r){
    if (r >= 80)
        return "lolos";
    else
        return "gagal";
}
    
int main(){
    float nilBI,nilMT,rerata;
    string status;

    cout <<"masukkan Nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout <<"masukkan nilai Matematika = ";
    cin >> nilMT;

    //rerata =(nilbi+nilMT)/2;
    //if (rerata >= 60)
        //  Status = "lolos";
    //else
        // status = "gagal";
    rerata = Rata_rata(nilBI,nilMT);
    // Status = Status_lulus(rerata)

    cout << "status kelulusan = "<<Status_lulus(rerata)<<" ,dengan nilai rerata = "<<rerata<<endl;

}