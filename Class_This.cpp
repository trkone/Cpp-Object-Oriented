#include <iostream>
using namespace std;

int alan(int x)
{
	return x*x;
}

class Kare
{
public:
	int b;
	
	int alan(int x)
	{
		return x;
	}
		
	Kare(int a)
	{
		b=this->alan(a);		// Burda derleyici iki tane int alan isimli fonksiyon olduğu için herhangi birini doğrudan çalıştıracaktır.	
	}							// Bizde bu karışıklığı engellemek için derleyiciye this->alan(a); diyerek sınıf içersindeki fonksiyonu kullanmasını emir ettik.
	
	
};



int main()
{
	Kare a1(5);
	
	cout<<a1.b<<endl;
	
	return 0;
}
