/****************************************************************************
**										SAKARYA �N�VERS�TES�
**							 B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**									B�LG�SAYAR M�HEND�SL��� B�L�M�
**									 PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�...:			�DEV 2.1
**				��RENC� ADI...............: EMRULLAH KARAKO�
**				��RENC� NUMARASI.:			B171210002
**				DERS GRUBU����:				1.  ��RET�M A GRUBU
****************************************************************************/

#include<iostream>
using namespace std;
int main()

{

	cout << "*****PROGRAMLAMAYA GIRIS DERSI ORTALAMA HESAPLAMA*****" << endl << endl;

	double �dev1, �dev2, kisa1, kisa2, vize, final1, vizeetki, �devetki, kisaetki, finaletki, toplam;


	cout << "Vize notunu giriniz.....:";					//Vize notunun girilmesi istendi
	cin >> vize;

	cout << "1. Odev notunu giriniz.....:";					//1. �dev notunun girilmesi istendi.
	cin >> �dev1;
	
	cout << "2. Odev notunu giriniz.....:";					//2. �dev notunun girilmesi istendi.
	cin >> �dev2;

	cout << "1. Kisa Sinav notunu giriniz.....:";			//1. k�sa s�nav notunun girilmesi istendi.
	cin >> kisa1;

	cout << "2. Kisa Sinav notunu giriniz.....:";			//2. k�sa notunun girilmesi istendi.
	cin >> kisa2;

	cout << "Final notunu giriniz.....:";					//Final notunun girilmesi istendi.
	cin >> final1;		
	cout << endl;
	cout << "***********************" << endl;

	



	cout << "Vizenin Yil Icine Etkisi Yuzde Kac Olacaktir  : ";				//Vizenin y�l i�ine etkisi  istendi.
	cin >> vizeetki;
	
	cout << "Odevlerin Yil Icine Etkisi Yuzde Kac Olacaktir  : ";			//�devlerin y�l i�ine etkisi  istendi.
	cin >> �devetki;

	cout << "Kisa Sinavlarin Yil Icine Etkisi Yuzde Kac Olacaktir  : ";		//K�sa s�navlar�n y�l i�ine etkisi  istendi.
	cin >> kisaetki;
	
	cout << "Finalin Yil Icine Etkisi Yuzde Kac Olacaktir  : ";				//Finalin y�l i�ine etkisi  istendi.
	cin >> finaletki;


	toplam = ((vize*vizeetki) / 100) + ((�dev1*�devetki) / 100) + ((�dev2*�devetki) / 100) + ((kisa1*kisaetki) / 100) + ((kisa2*kisaetki) / 100) + ((final1*finaletki) / 100);

	cout << endl << endl << "Toplam ortalamaniz  :" << toplam << endl << endl;				//Toplam ortalama ekrana yazd�r�ld�.

	if (toplam > 90)														
		cout << "AA aldiniz" << endl;
	else if (toplam > 85)
		cout << "BA  aldiniz" << endl;
	else if (toplam > 80)
		cout << "BB aldiniz" << endl;
	else if (toplam > 75)												 // Girdi�i de�er aral���na g�re harflendirme yap�ld�.
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