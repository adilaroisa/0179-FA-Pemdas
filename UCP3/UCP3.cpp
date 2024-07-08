#include <iostream>
using namespace std;
class MasukUniversitas {
	private : // isi access modifier disini
	int uangPendaftaran;
	// isi daftar variable yang dibutuhkan di bawah ini
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		 // isi nilai default variable yang dibutuhkan di bawah ini
		
	}
	virtual void namaJalurMasuk() { return; }
	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
	virtual void hitungTotalBiaya() { return; }
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	void setuangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}
	float getuangSemesterPertama() {
		return uangSemesterPertama;
	}
	void setuangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}
	float getuangBangunan() {
		return uangBangunan;
	}
	void settotalBiaya(int nilai) {
		this->totalBiaya = nilai;
	}
	float gettotalBiaya() {
		return totalBiaya;
	}
	virtual void tmpilkanTotalBiaya() { return; }

};
class SNBT : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBT
public:
	void uangPendaftaran()
	{
		cout << "Tampilkan uang Pendaftaran";
	}
	void uangSemesterPertama()
	{
		cout << "Tanpilkan Uang semester pertama";
	}

};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
	void uangPendaftaran()
	{
		cout << "Tampilkan uang pendaftaran";
	}
	void uangSemesterPertama()
	{
		cout << "Tampilkan uang semester pertama";
	}
};
int main() {
	// isi disini untuk fungsi main
	
}