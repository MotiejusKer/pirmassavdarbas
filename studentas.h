
#include "manobiblioteka.h"

class studentas {
private:
	string var, pav;
	vector <double> nd;
	double vid, med, rez, egz;
public:
	studentas();
	studentas(string, string, vector <double>, double);
	studentas(const studentas &);
	~studentas();

	void printas();

	void pav_(string);
	string Get_pav();
	void Rez(double);
	void Vid();
	void Med();

	friend std::ostream& operator<<(std::ostream& out, const studentas& s);
	friend std::istream& operator>>(std::istream& in, studentas& s);

};
