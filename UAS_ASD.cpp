#include <iostream>
using namespace std;

#define Ukuran 10000

typedef int JenisInfo;
JenisInfo NIM;
typedef struct JenisSimpul *LokSimpul;
typedef struct JenisSimpul {
	JenisInfo info;
	LokSimpul selanjutnya;
}simpul;

typedef struct JenisTabelHash{
	LokSimpul indeks;
}TabelHash;


void BuatTabelHash (JenisTabelHash *TH){
	JenisInfo i;
	for (i=0; i < Ukuran; i++){
		TH[i].indeks=NULL;
	}
}

bool ApakahKosong (JenisTabelHash *THi){
	return (*THi).indeks == NULL;
}

LokSimpul AlokasiSimpul (JenisInfo x){
  LokSimpul SimpulBaru;
  SimpulBaru = new struct JenisSimpul;
  SimpulBaru -> info =x;
  SimpulBaru -> selanjutnya = NULL;
  return SimpulBaru;
}

void MasukDepan (JenisTabelHash *THi, JenisInfo x){
  LokSimpul SimpulBaru;
  SimpulBaru = AlokasiSimpul(x);
  SimpulBaru -> selanjutnya = (*THi).indeks;
  (*THi).indeks = SimpulBaru;
}




void MasukanNilai(JenisTabelHash TH[],JenisInfo x){
    JenisInfo i;
    i = x % (Ukuran + 1);

    MasukDepan(&TH[i],x);
}


void AmbilNilai(JenisTabelHash TH[], JenisInfo x){
    JenisInfo i;

    i = x % (Ukuran + 1);

    if(ApakahKosong (&TH[i])){
        cout<<"Data tidak ditemukan di Indeks"<<i<<endl;
    }else{
        LokSimpul sementara;

        sementara = TH[i].indeks;

        while(sementara->info !=x){
            if(sementara == NULL){
                cout<<"Data tidak ditemukan di indeks"<<i<<endl;

                return;
            }
        }
        cout<<"Data ditemukan di indeks"<<i<<endl;
    }
}

int main(){
    JenisTabelHash TH[Ukuran];
    cin>>NIM ;

    BuatTabelHash(TH);

    MasukanNilai(TH, NIM);
    AmbilNilai(TH, NIM);

    return 0;
}
