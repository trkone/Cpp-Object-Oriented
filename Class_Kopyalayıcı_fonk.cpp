#include <iostream>
using namespace std;

class Kare
{
private:
	int uzun,kisa;
	
public:
	Kare(int a,int b)
	{
		uzun=a;
		kisa=b;
	}
	
	Kare(Kare &a1)
	{
		uzun=a1.uzun;	// buradaki uzun  oluşturduğumuz "knesne" nesnesi 
		kisa=a1.kisa;	// a1.uzun ise parametre olarak girilen Kare sınıfının g1 nesnesinin uzun degiskeni
	}

	void alan()
	{
		cout<<"Alan....:"<<uzun*kisa<<endl;
	}
};

int main()
{
	Kare g1(20,30);
	g1.alan();
	
	Kare knesne(g1);
	
	knesne.alan();
	
	return 0;
}
