/****************************************************************************
**										SAKARYA �N�VERS�TES�
**							 B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**									B�LG�SAYAR M�HEND�SL��� B�L�M�
**									 PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�...:			�DEV 2.2
**				��RENC� ADI...............: EMRULLAH KARAKO�
**				��RENC� NUMARASI.:			B171210002
**				DERS GRUBU����:				1.  ��RET�M A GRUBU
****************************************************************************/

#include<iostream>
#include<time.h>
#include<conio.h>

using namespace std;

int main()

{

	int sayilar[10];										//  10 Terimlik dizi tan�mlad�k.
	int j = 0;												//  Okun hangi sat�rda olaca��n� kontrol eden de�i�ken.
	char harf='a';											//  En ba�ta ekranda yaz�l� mbi dizi ��kartmas� i�in 'a' �eklinde tan�mlad�k.


	srand(time(0));
	for (int i = 0;i < 10;i++)								//  10 Terimlik dizimize 0-10 aras� rastgele terimler atad�k.
		sayilar[i] = rand() % 10;






	while (true)											//  Biz herhangi bir tu�a basmad���m�z s�rece �al��mas� i�in sonsuz d�ng� tan�mlad�k.
	{
		
		

		if (harf == 'a' || harf == 'A')						//	E�er bast���m�z tu� a ise bu d�ng�ye girecek.
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
			if (j >= 10)								//  Dizimiz 10 terimlik bir dizi oldu�u i�in ok 10 terim d���nda olmas�n diye j>10 durumunda j=0 atamas� yap�ld�.
				j = 0;
			harf = _getch();							
			system("cls");
		
		
		
			

		}
		
		else if (harf == 'd' || harf == 'D')						//	E�er bast���m�z tu� d ise bu d�ng�ye girecek.
		{
			if (j == 1)                                     //  1. terimde i=0 j=1 oldu�u i�in en alt sat�ra ok ��karmayaca�� i�in j=1 durumu i�in �zel bir ko�ul belirttik.
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
			if (j <= 0)												//  Dizimiz en  az 1 elemanl� oldu�u i�in terim say�s�n� en az 1 yapmak i�in kullan�ld�.
				j = 10;
			harf = _getch();
			system("cls");
		



		}

		else if(harf == 'c' || harf == 'C')							//	E�er bast���m�z tu� c ise bu d�ng�ye girecek.
		{



			return 0;											//  C tu�una bast���m�zda console ekran�n� kapatacak.



		}


	}






	system("cls");



}