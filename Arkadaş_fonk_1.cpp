#include <iostream>
using namespace std;

class Daire
{
private:
	const double pi=3.14;
	double yaricap;
	
	
public:
	void alan(Daire &d1);
	Daire(double a)
	{
		yaricap=a;
	}
};


void Daire::alan(Daire &d1)		//private üyelere erişebilir. ANCAK  bir nesne kullanmak zorunda
{								// Nesne kullanmayıp doğrudan fonksiyon üzerinden private kısma erişmek için friend'i kullanmak zorundayız
	cout<<"Alan="<<d1.yaricap*d1.yaricap*d1.pi<<endl;		//  Git hesabının Cpp-Object-Oriented kısmından Arkadaş_fonk_2.cpp adlı kısımdan
}															//  friend yapısının nasıl kullanıldığını görebilirsiniz

int main()
{
	Daire a1(3.1);
	
	a1.alan(a1);
	return 0;
}
