/****************************************************************************
**										SAKARYA �N�VERS�TES�
**							 B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**									B�LG�SAYAR M�HEND�SL��� B�L�M�
**									 PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�...:			�DEV 2.3
**				��RENC� ADI...............: EMRULLAH KARAKO�
**				��RENC� NUMARASI.:			B171210002
**				DERS GRUBU����:				1.  ��RET�M A GRUBU
****************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

int main()

{

	cout << "***** IKINCI DERECEDEN DENKLEM KOKLERINI HESAPLAYAN PROGRAM *****" << endl << endl;
	double a, b, c, delta, k�k1, k�k2;
	cout << " a x^2 + bx + c = 0 " << endl;
	cout << "******************************" << endl;

	cout << "a degerini giriniz.......:";						//a de�erinin girilmesini istedik
	cin >> a;
	cout << endl;

	cout << "b degerini giriniz.......:";						//b de�erinin girilmesini istedik
	cin >> b;
	cout << endl;

	cout << "c degerini giriniz.......:";						//c de�erinin girilmesini istedik
	cin >> c;
	cout << endl;
	cout << "****************************" << endl;


	delta = (b*b) - (4 * a*c);									   //delta hesapland�
	

	k�k1 = (-b + sqrt(delta)) / (2 * a);					       //1. k�k hesapland�
	k�k2 = (-b + sqrt(delta)) / (2 * a);						   //2. k�k hesapland�

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
		cout << "  1. Kok = ...." << k�k1 << endl << endl;
		cout << "  2. Kok = ...." << k�k2 << endl << endl;
	}












	system("pause");



}