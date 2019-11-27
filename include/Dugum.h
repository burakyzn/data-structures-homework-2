#ifndef DUGUM_H
#define DUGUM_H
#include <string>
class Dugum {
private:
	std::string kelime;
	int konum;
public:
	Dugum* ileri;
	Dugum* geri;
	Dugum(std::string kelime, int konum, Dugum* geri, Dugum* ileri);
	std::string getirKelime();
	int getirKonum();
	~Dugum();
};

#endif