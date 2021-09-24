#include <iostream>
using namespace std;
int main()

{
    int psd, ptp, sp, sd, smp, sma, mhs, jml;
    int tpsd, tptp, tsp, tsd, tsmp, tsma, tmhs;

    cout << "Menghitung biaya yang harus dikeluarkan pemerintah untuk program kuota gratis dengan rincian sebagai berikut.\n            a. Siswa PAUD                         : 20 GB\n            b. Siswa SD                           : 35 GB\n            c. Siswa SMP                          : 35 GB\n            d. Siswa SMA                          : 35 GB\n            e. Mahasiswa                          : 50 GB\n            f. Pengajar Tingkat Sekolah Dasar     : 42 GB\n            g. Pengajar Tingkat Pendidikan Tinggi : 50 GB\n biaya yang dikeluarkan per 1 GB sebesar Rp. 6.000,00.\n"<< endl;
    cout << "Masukkan Jumlah Pengajar di tingkat Sekolah Dasar        : ";
    cin >> psd;
    cout << "Masukkan Jumlah Pengajar di tingkat Pendidikan Tinggi    : ";
    cin >> ptp;
    cout << "Masukkan Jumlah Siswa Paud                               : ";
    cin >> sp;
    cout << "Masukkan Jumlah Siswa SD                                 : ";
    cin >> sd;
    cout << "Masukkan Jumlah Siswa SMP                                : ";
    cin >> smp;
    cout << "Masukkan Jumlah Siswa SMA                                : ";
    cin >> sma;
    cout << "Masukkan Jumlah Mahasiswa                                : ";
    cin >> mhs;

	tpsd = psd*42*6000;
	tptp = ptp*50*6000;
	tsp  = sp*20*6000;
	tsd  = sd*35*6000;
	tsmp = smp*35*6000;
	tsma = sma*35*6000;
	tmhs = mhs*50*6000;
	jml  = tpsd+tptp+tsp+tsd+tsmp+tsma+tmhs;




    cout << "\nInilah Jumlah Biaya yang Dikeluarkan Oleh Pemerintah dari Program Kuota Gratis : "<<"\n"<<"Rp. "<<jml<<",00";

     
    
}
