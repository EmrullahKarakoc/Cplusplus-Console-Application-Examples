/****************************************************************************
**										SAKARYA ÜNÝVERSÝTESÝ
**							 BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**									BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**									 PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI…...:			ÖDEV 2.2
**				ÖÐRENCÝ ADI...............: EMRULLAH KARAKOÇ
**				ÖÐRENCÝ NUMARASI.:			B171210002
**				DERS GRUBU…………:				1.  ÖÐRETÝM A GRUBU
****************************************************************************/

#include<iostream>
#include<time.h>
#include<conio.h>

using namespace std;

int main()

{

	int sayilar[10];										//  10 Terimlik dizi tanýmladýk.
	int j = 0;												//  Okun hangi satýrda olacaðýný kontrol eden deðiþken.
	char harf='a';											//  En baþta ekranda yazýlý mbi dizi çýkartmasý için 'a' þeklinde tanýmladýk.


	srand(time(0));
	for (int i = 0;i < 10;i++)								//  10 Terimlik dizimize 0-10 arasý rastgele terimler atadýk.
		sayilar[i] = rand() % 10;






	while (true)											//  Biz herhangi bir tuþa basmadýðýmýz sürece çalýþmasý için sonsuz döngü tanýmladýk.
	{
		
		

		if (harf == 'a' || harf == 'A')						//	Eðer bastýðýmýz tuþ a ise bu döngüye girecek.
		{
			if (j == 10)
				j = 0;

			

			for (int i = 0;i < 10;i++)
			{
				if (j == (i))
					cout << " --->  " << sayilar[i] << endl;
				else
					cout << "       " << sayilar[i] << endl;

			}
			

			j++;
			if (j >= 10)								//  Dizimiz 10 terimlik bir dizi olduðu için ok 10 terim dýþýnda olmasýn diye j>10 durumunda j=0 atamasý yapýldý.
				j = 0;
			harf = _getch();							
			system("cls");
		
		
		
			

		}
		
		else if (harf == 'd' || harf == 'D')						//	Eðer bastýðýmýz tuþ d ise bu döngüye girecek.
		{
			if (j == 1)                                     //  1. terimde i=0 j=1 olduðu için en alt satýra ok çýkarmayacaðý için j=1 durumu için özel bir koþul belirttik.
				j = 11;
			if (j == 0)
				j = 10;
			for (int i = 0;i < 10;i++)
			{
				if ((j-2) == (i))
					cout << " --->  " << sayilar[i] << endl;
				else
					cout << "       " << sayilar[i] << endl;

			}


			j--;
			if (j <= 0)												//  Dizimiz en  az 1 elemanlý olduðu için terim sayýsýný en az 1 yapmak için kullanýldý.
				j = 10;
			harf = _getch();
			system("cls");
		



		}

		else if(harf == 'c' || harf == 'C')							//	Eðer bastýðýmýz tuþ c ise bu döngüye girecek.
		{



			return 0;											//  C tuþuna bastýðýmýzda console ekranýný kapatacak.



		}


	}






	system("cls");



}