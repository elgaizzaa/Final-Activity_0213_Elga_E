#include <iostream>
using namespace std;


class MasukUniversitas {
private: // isi access modifier disini
    int uangPendaftaran;
    int uangSemesterPertama; 
    int uangBangunan;
    int totalBiaya; // int tu tipe datanya  dgn member si totalbiaya
 int uangPendaftaran;   // isi daftar variable yang dibutuhkan di bawah ini


public:
 MasukUniversitas() { // kalo ini konstruktor soalnya kan masi menunjukan kalo nilainya masi 0
 uangPendaftaran = 0; // isi nilai default variable yang dibutuhkan di bawah ini
 uangSemesterPertama = 0;
 uangBangunan = 0;
 totalBiaya = 0;
 }


 virtual void namaJalurMasuk()  // ini termasuk fungsi yang bisa di turunin mknya ini uda bs disebut polymorpisem
 { return; } // isi disini dengan fungsi virtual yang dibutuhkan
 

 virtual void inputnominal()
// adanya set dan get untuk mengakses variabel yg di private kaya kelass di atas dan itu implementasi dri encapsulasi


//ini metod
 void setUangPendaftaran(int nilai) { // pokoknya set itu buat ngasi nilai 
 this->uangPendaftaran = nilai;
 }
 float getUangPendaftaran() { // kalo get ini nnti tugasnya nyimpen nilai dari si set 
    return uangPendaftaran; // adanya return ini bisa jdi buat ngekeep lah /nangkepsi nilai yg dikasi sm si set
 }
  void setuangSemesterPertama (int nilai) {
     this->uangSemesterPertama = nilai; // isi setter dan getter variable yang dibutuhkan di bawah ini
}
 float getUangSemesterPertama() {
    return uangSemesterPertama;
 }
 void setBangunan(int nilai) {
    this->uangBangunan = nilai;
 }  // btw ini bentuk encapsulasi mknya ada set sm get nya
 float getuangBangunan(){
    return uangBangunan;
 }
 void settotalBiaya(int nilai) { // ini prosedur set totalbiaya untuk ngasih nilai 
    this->totalBiaya = nilai; // nah nnti si nilai ini jdi nya parameter
 }
 float gettotalBangunan() { // ini fungsi buat nyimpen nilainya
    return totalBiaya; //untuk dapet nilai dri si set ato kata lainnya di tangkaplah 
 }
  };

  //ini pakai penerapan inheritance knra turunan clas snbt dri kls masukuniv 
class SNBT : public MasukUniversitas { // isi disini untuk melengkapi class SNBT
public: // akses modifier
 void uangPendaftaran(){ // ini proseedudr uangpendaf
    cout << "SNBT" << endl; // nnti di tampilin kalo di snbt itu progamnya
 } 

 void inputnominal() {
    int nilai;
    cout << "Masukan nominal uangPendaftaran:  "; // untuk maskin nominal uang pendaftaran 
    cin >> nilai; //nah nnti disini masukin nilai (nominal dri uangpendaftaran)
    setUangPendaftaran(nilai); // baru lah nnti di simpan disini

    cout << "Masukan nominal uangSemesterPertama: ";
    cin >> nilai;
    setuangSemesterPertama(nilai);

   cout << "Masukan nominal UangBangunan: ";
   cin >> nilai;
   setUangBangunan(nilai);
   
   cout << "masukan totalBiaya: ";
   cin >> nilai;
   settotalBiaya(nilai);
 }

 float hitungtotalBiaya() {
    return (getUangPendaftaran() *0. ) + (getUangSemesterPertama () *0. ) + (getuangBangunan () *0. ); // inii abstraksi kan prosesnnya di sembunyiin fungsi yg rumit mknya lsng muncul aja nilainya
 }

 void totalBiaya() {
    float totalBiaya = hitungtotalBiaya();
    cout << "total Biaya: " << totalBiaya << endl;
    if (totalBiaya >= 45100000) {
        cout << "kategori mahal" << endl;
    } else {
        cout << "bisa pakai kategori lain" << endl;
    }
 }
};

// ini trmasuk inheritance soalnya kls snbp itu turunan dri kls masukuniv
class SNBP : public MasukUniversitas { // isi disini untuk melengkapi class SNBP
public:
void uangPendaftaran(){
    cout << "SNBP" << endl;
 }

   void inputnominal() {
    int nilai;
    cout << "Masukan nominal uangPendaftaran:  ";
    cin >> nilai;
    setUangPendaftaran(nilai);

    cout << "Masukan nominal uangSemesterPertama: ";
    cin >> nilai;
    setuangSemesterPertama(nilai);
   }

float hitungtotalBiaya() {
    return (getUangPendaftaran() *0. ) + (getUangSemesterPertama () *0. ) ;
 }

 void totalBiaya() {
    float totalBiaya = hitungtotalBiaya();
    cout << "total Biaya: " << totalBiaya << endl;
    if (totalBiaya >= 9100000) {
        cout << "kategori sedang " << endl;
    } else {
        cout << "bisa pakai kategori lain" << endl;
    }
 }
};
int main() {// isi disini untuk fungsi main
    char pilih; // ini variabel lokal dgn tipe data chr
    MasukUniversitas* MasukUniversitas; // ini pointer ke objek dari kls masukuniv yg nnti bklan aku gunain ke objek masuk univ ,dn ini knp pointer krna nerapin sistem polymorpy kn bisa di tumpuk
    SNBT SNBT; // ini objct dri kls snbt
    SNBP SNBP; // ini object dari kls snbp

    do {
        cout << "Masukan nominal uang pendaftaran: " <<endl;
        cout << "1. pilih jalur snbt " << endl;
        cout << "2. pilih jalur snbp " << endl;
        cout << "3. exit " << endl;
        cout << "pilih: ";
        cin >> pilih;

     (pilih) {// ini pilihan 
        pilihan '1':
          MasukUniversitas = &SNBT; //ini bentuk deklarasi objek yg bakalan ditunjuk si pointer
          break;
        pilihan '2':
          MasukUniversitas = &SNBP;
          break;
        pilihan  '3':
           return 0;
        default:
            cout << "pilihan tidak tersedia" << endl;
            continue;
         }
    
    } while (pilih = '3');

       return 0;

}