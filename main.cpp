#include "manobiblioteka.h"
#include "studentas.h"

int main()
{
    vector <studentas> eilutMas;

    for (int i = 0; i < 2; i++) {
        studentas A;
        cin >> A;  
        eilutMas.push_back(A);
    }

    cout << endl;
    for (const auto& a : eilutMas)
        cout << a << endl;  

    return 0;
}
