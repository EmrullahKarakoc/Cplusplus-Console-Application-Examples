/****************************************************************************
**										SAKARYA ÜNÝVERSÝTESÝ
**							 BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**									BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**									 PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI…...:			ÖDEV 2.1
**				ÖÐRENCÝ ADI...............: EMRULLAH KARAKOÇ
**				ÖÐRENCÝ NUMARASI.:			B171210002
**				DERS GRUBU…………:				1.  ÖÐRETÝM A GRUBU
****************************************************************************/

#include<iostream>
using namespace std;
int main()

{

	cout << "*****PROGRAMLAMAYA GIRIS DERSI ORTALAMA HESAPLAMA*****" << endl << endl;

	double ödev1, ödev2, kisa1, kisa2, vize, final1, vizeetki, ödevetki, kisaetki, finaletki, toplam;


	cout << "Vize notunu giriniz.....:";					//Vize notunun girilmesi istendi
	cin >> vize;

	cout << "1. Odev notunu giriniz.....:";					//1. ödev notunun girilmesi istendi.
	cin >> ödev1;
	
	cout << "2. Odev notunu giriniz.....:";					//2. ödev notunun girilmesi istendi.
	cin >> ödev2;

	cout << "1. Kisa Sinav notunu giriniz.....:";			//1. kýsa sýnav notunun girilmesi istendi.
	cin >> kisa1;

	cout << "2. Kisa Sinav notunu giriniz.....:";			//2. kýsa notunun girilmesi istendi.
	cin >> kisa2;

	cout << "Final notunu giriniz.....:";					//Final notunun girilmesi istendi.
	cin >> final1;		
	cout << endl;
	cout << "***********************" << endl;

	



	cout << "Vizenin Yil Icine Etkisi Yuzde Kac Olacaktir  : ";				//Vizenin yýl içine etkisi  istendi.
	cin >> vizeetki;
	
	cout << "Odevlerin Yil Icine Etkisi Yuzde Kac Olacaktir  : ";			//Ödevlerin yýl içine etkisi  istendi.
	cin >> ödevetki;

	cout << "Kisa Sinavlarin Yil Icine Etkisi Yuzde Kac Olacaktir  : ";		//Kýsa sýnavlarýn yýl içine etkisi  istendi.
	cin >> kisaetki;
	
	cout << "Finalin Yil Icine Etkisi Yuzde Kac Olacaktir  : ";				//Finalin yýl içine etkisi  istendi.
	cin >> finaletki;


	toplam = ((vize*vizeetki) / 100) + ((ödev1*ödevetki) / 100) + ((ödev2*ödevetki) / 100) + ((kisa1*kisaetki) / 100) + ((kisa2*kisaetki) / 100) + ((final1*finaletki) / 100);

	cout << endl << endl << "Toplam ortalamaniz  :" << toplam << endl << endl;				//Toplam ortalama ekrana yazdýrýldý.

	if (toplam > 90)														
		cout << "AA aldiniz" << endl;
	else if (toplam > 85)
		cout << "BA  aldiniz" << endl;
	else if (toplam > 80)
		cout << "BB aldiniz" << endl;
	else if (toplam > 75)												 // Girdiði deðer aralýðýna göre harflendirme yapýldý.
		cout << "CB aldiniz" << endl;
	else if (toplam > 65)
		cout << "CC aldiniz" << endl;
	else if (toplam > 58)
		cout << "DC aldiniz" << endl;
	else if (toplam > 50)
		cout << "DD aldiniz" << endl;
	else
		cout << "FF aldiniz" << endl;


	system("pause");



}