/****************************************************************************
**										SAKARYA ÜNÝVERSÝTESÝ
**							 BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**									BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**									 PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI…...:			ÖDEV 2.3
**				ÖÐRENCÝ ADI...............: EMRULLAH KARAKOÇ
**				ÖÐRENCÝ NUMARASI.:			B171210002
**				DERS GRUBU…………:				1.  ÖÐRETÝM A GRUBU
****************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

int main()

{

	cout << "***** IKINCI DERECEDEN DENKLEM KOKLERINI HESAPLAYAN PROGRAM *****" << endl << endl;
	double a, b, c, delta, kök1, kök2;
	cout << " a x^2 + bx + c = 0 " << endl;
	cout << "******************************" << endl;

	cout << "a degerini giriniz.......:";						//a deðerinin girilmesini istedik
	cin >> a;
	cout << endl;

	cout << "b degerini giriniz.......:";						//b deðerinin girilmesini istedik
	cin >> b;
	cout << endl;

	cout << "c degerini giriniz.......:";						//c deðerinin girilmesini istedik
	cin >> c;
	cout << endl;
	cout << "****************************" << endl;


	delta = (b*b) - (4 * a*c);									   //delta hesaplandý
	

	kök1 = (-b + sqrt(delta)) / (2 * a);					       //1. kök hesaplandý
	kök2 = (-b + sqrt(delta)) / (2 * a);						   //2. kök hesaplandý

	if (delta < 0)
		cout << " Delta < 0 oldugu icin gercel kok yoktur ";

	else if (delta == 0)
	{
		cout << " Delta = 0 oldugu icin cakisik iki kok vardir." << endl;
		cout << " KOK  = " << -b / (2 * a) << endl;
	}
	else
	{
		cout << " Delta > 0 oldugu icin 2 gercel kok vardir. " << endl;
		cout << "  1. Kok = ...." << kök1 << endl << endl;
		cout << "  2. Kok = ...." << kök2 << endl << endl;
	}












	system("pause");



}