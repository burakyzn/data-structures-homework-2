#include "Liste.h"
#include <iostream>
using namespace std;

int Liste::konumdanBul(string arananKelime)
{
	Dugum* tmp = basDugum;
	int konumSayac = 0;
	while (tmp->ileri != NULL) {
		if (arananKelime == tmp->getirKelime()) {
			return konumSayac;
		}
		tmp = tmp->ileri;
		konumSayac++;
	}

	return -1;
}

Liste::Liste()
{
	basDugum = NULL;
	toplamKazanc = 0;
}

void Liste::sonaEkle(string kelime)
{
	if (basDugum == NULL) {
		basDugum = new Dugum(kelime, 0, NULL, NULL);
	}
	else {
		int konumFarki = konumdanBul(kelime);
		int toplamDugumSayac = 0;
		Dugum* tmp = basDugum;

		while (tmp->ileri != NULL) {
			tmp = tmp->ileri;
			toplamDugumSayac++;
		}

		if (konumFarki == -1) {
			tmp->ileri = new Dugum(kelime, 0, tmp, NULL);
		}
		else {
			konumFarki = toplamDugumSayac - konumFarki + 1;
			int sayiUzunlugu = to_string(konumFarki).length();
			tmp->ileri = new Dugum("", konumFarki, tmp, NULL);
			toplamKazanc += (kelime.length() - sayiUzunlugu);
		}
	}
}

void Liste::yazdir()
{
	cout << "NULL";
	Dugum* tmp = basDugum;
	while (tmp != NULL) {
		cout << ":<->:" << tmp->getirKelime() << " - " << tmp->getirKonum();
		tmp = tmp->ileri;
	}
	cout << ":->NULL" << endl;
	cout << "Toplam kazanc : " << toplamKazanc << " Byte" <<endl;
}

Liste::~Liste(){
		Dugum* tmp = basDugum;
		while (tmp->ileri != NULL) {
			tmp = tmp->ileri;
		}
		
		while(tmp->geri != basDugum){
			tmp = tmp->geri;
			delete tmp->ileri;
		}

		delete basDugum;
}
