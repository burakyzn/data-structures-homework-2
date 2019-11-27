#include "Dugum.h"
#include <string>
using namespace std;

Dugum::Dugum(string kelime, int konum, Dugum* geri, Dugum* ileri)
{
	this->ileri = ileri;
	this->kelime = kelime;
	this->konum = konum;
	this->geri = geri;
}

string Dugum::getirKelime(){
	return this->kelime;
}

int Dugum::getirKonum(){
	return this->konum;
}

Dugum::~Dugum(){
}
