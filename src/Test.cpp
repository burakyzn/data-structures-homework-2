#include <iostream>
#include <fstream>
#include "Liste.h"
using namespace std;

int main() {
	Liste* kelimeListesi = new Liste();
	ifstream dosyaOkuyucu("icerik.txt", ios::in);

	if (dosyaOkuyucu.is_open()) {
		string kelime;
		while (dosyaOkuyucu >> kelime) {
			kelimeListesi->sonaEkle(kelime);
		}
	}

	kelimeListesi->yazdir();
	delete kelimeListesi;
	system("pause");
	return 0;
}