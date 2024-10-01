#include "studentas.h"

studentas::studentas()
{
	var = "Test";
	pav = "Test";
	nd = { 1,2,3 };
	egz = 0;
	Vid();
	Med();
	Rez(vid);
}

studentas::studentas(string Var_, string Pav_, vector <double> Paz_, double Egz_) {
	var = Var_;
	pav = Pav_;
	nd = Paz_;
	egz = Egz_;
	Vid();
	Med();
	Rez(vid);
}
studentas::~studentas() {
	var.clear();
	pav.clear();
	nd.clear();
	vid = 0;
	egz = 0;
	rez = 0;
	med = 0;
}

void studentas::printas() {
	cout << setw(10) << left << var << "  " << setw(10) << left << pav << setw(10) << "ND.:";
	for (auto d : nd) cout << setw(10) << setprecision(2) << fixed << d << "  ";
	cout << setw(10) << "Egz.:" << setw(10) << setprecision(2) << fixed << egz << setw(10)
		<< "Rez.:" << setw(10) << setprecision(2) << fixed << rez << "Vid. " << vid << " Med. " << med << endl;
}

void studentas::pav_(string Pav_) {
	pav = Pav_;
}
string studentas::Get_pav() {
	return pav;
}
void studentas::Rez(double kint) {
	rez = kint * 0.4 + egz * 0.6;
}
void studentas::Vid() {
	double sum = accumulate(nd.begin(), nd.end(), 0.);
	/*
	double sum = 0.;
	for (auto i : paz) sum += i;
	*/
	vid = sum / nd.size();
}

void studentas::Med() {
	if (!nd.empty()) {
		sort(nd.begin(), nd.end());  
		int dydis = nd.size();
		if (dydis % 2 == 0) {
			med = (nd[dydis / 2 - 1] + nd[dydis / 2]) / 2.0;  
		}
		else {
			med = nd[dydis / 2];  
		}
	}
	else {
		med = 0;
	}
}
