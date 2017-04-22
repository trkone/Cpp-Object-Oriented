#include <iostream>
using namespace std;

class Kare
{
private:
	int uzunkenar;
	int kisakenar;
	
public:	
	Kare()
	{
		cout<<"Parametre bir deger girilmediği için degiskenlere '1' degeri atandi."<<endl;
		uzunkenar=1;
		kisakenar=1;
	}
	
	Kare(int a,int b)
	{
		uzunkenar=a;
		kisakenar=b;
	}
	
	~Kare()
	{
		cout<<"Nesnenin isi bitti YIKICI fonksiyonlar calisti!!"<<endl;
	}
	
	void alan()
	{
		cout<<"Alan....:"<<uzunkenar*kisakenar<<endl;
	}
};

int main()
{
	Kare *a1=new Kare(12,23);
	
	a1->alan();
	
	Kare d1;
	
	d1.alan();
	
	delete a1;
	
	return 0;
}
