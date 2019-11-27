#ifndef LISTE_H
#define LISTE_H

#include "Dugum.h"
#include <string>

class Liste
{
private:
	Dugum* basDugum;
	int konumdanBul(std::string arananKelime);
	int toplamKazanc;
public:
	Liste();
	void sonaEkle(std::string kelime);
	void yazdir();
	~Liste();
};

#endif