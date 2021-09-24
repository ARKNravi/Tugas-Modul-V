#include <iostream>
using namespace std;
int main()

{
    int kp1, kp2, odp, km;

    cout << "Mengetahui Zona di daerah anda"<< endl;
    cout << "Masukkan Kasus Positif COVID-19 Minggu Pertama di Daerah Anda: ";
    cin >> kp1;
    cout << "Masukkan Kasus Positif COVID-19 Minggu Kedua di Daerah Anda  : ";
    cin >> kp2;
    cout << "Masukkan Kasus Kematian Akibat COVID-19 di Daerah Anda       : ";
    cin >> km;
    cout << "Masukkan ODP di Daerah Anda                                  : ";
    cin >> odp;

    cout << "\nInilah Hasil Zona di Daerah Anda                             : "<<"\n";

     if (kp1 == 0 && kp2 == 0 && odp == 0 && km == 0 )
     cout <<"Daerah Anda Terdaftar Zona Hijau"<<endl;
     else if (kp1 == 0 && kp2 == 0 && odp > 0 && km == 0 )
     cout <<"Daerah Anda Terdaftar Zona Oranye"<<endl;
     else if (kp1 > 0 && kp2 > kp1 && odp > 0 && km == 0 )
     cout <<"Daerah Anda Terdaftar Zona Merah"<<endl;
     else if (kp1 > 0 && kp2 > kp1 && odp > 0 && km > 0 )
     cout <<"Daerah Anda Terdaftar Zona Hitam"<<endl;
     else {
	 cout<<"Tidak Ada di Daftar Karena tidak ada kenaikan kasus positif di minggu pertama dan kedua Mohon Lakukan Data Ulang Lagi :)"; 
	 }
    
}
