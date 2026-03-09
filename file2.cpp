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
string kategori_nilai(float r){
        if (r >= 90)
             return "A (Sangat Baik)";
        else if (r >= 80)
            return "B (Baik)";
        else if (r >= 70)
            return "C (Cukup)";
        else 
            return "D (Kurang)";
}
    
int main(){
    float nilBI,nilMT,rerata;
    string status;

    cout <<"masukkan Nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout <<"masukkan nilai Matematika = ";
    cin >> nilMT;

    string kategori;

    cout << "Rata-rata nilai = " << rerata << endl;
    cout << "Status = " << status << endl;
    cout << "Kategori Nilai = " << kategori << endl;

    
    //rerata =(nilbi+nilMT)/2;
    //if (rerata >= 60)
        //  Status = "lolos";
    //else
        // status = "gagal";
    rerata = Rata_rata(nilBI,nilMT);
    status = Status_lulus(rerata);
    kategori = kategori_nilai(rerata);
    // Status = Status_lulus(rerata)

    cout << "status kelulusan = "<<Status_lulus(rerata)<<" ,dengan nilai rerata = "<<rerata<<endl;
    cout << "Perlu belajar lebih giat!" << endl;

}