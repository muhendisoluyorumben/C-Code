#include<iostream>
#include<Locale.h>
#include<windows.h>
#include<cstring>
#include<time.h>
#include<stdio.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Turkish");
	int is;
	char cevap;
	char kd;
	char s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	int score=0;
	int sayi;
	double fark;
	cout<<"                 **// YARI�MAMIZ Yar��mas�' na Ho�geldiniz\\\\**    "<<endl;
	cout<<"                            Yar��mam�z ba�l�yor."<<endl;
	cout<<endl;
	cout<<"�sminiz ka� karakterden olu�makta?"<<endl;
	cin>>is;
	char isim[is], i;
	cout<<"L�tfen isminizi yaz�n�z."<<endl;
	for(i=0; i<is; i++)
	{
	cin>>isim[i];
	}
	Sleep(2500);
	system("cls");
	A15:
	cout<<endl;
	cout<<"  Kurallar� ��renmek ��in K Harfine Bas�n�z."<<endl;
	cout<<"  Devam Etmek ��in D Harfine Bas�n�z. "<<endl;
	cout<<endl;
	cout<<" (Not: Bence ilk �nce kurallar� ��renin.)"<<endl;
	cin>>kd;
	switch(kd)
	{
	case 'k':
	case 'K':
	{
		system("cls");
		cout<<" 1) Her bildi�iniz bir soru i�in kasan�za bir �ncekinden 100 TL daha fazla eklenecek."<<endl;
		cout<<endl;
		cout<<" 2) Her bilemedi�iniz bir soru i�in kasan�zdan bir �ncekinden 50 TL daha fazla  al�nacak."<<endl;
		cout<<endl;
		cout<<" 3) Ka��nc� soruda oldu�unuzu takip etmek ve do�ru yanl�� konumunuzu "<<endl;
		cout<<"��renmek i�in sa� taraftaki tablodan yararlanabilirsiniz."<<endl;
		cout<<endl;
		cout<<" 4) Sorular�n�z� 30 saniye i�inde cevaplayamazsan�z yar��mam�zdan elenirsiniz."<<endl;
		cout<<endl;
		cout<<" 5) Yar��mam�zda ister k���k ister b�y�k karakter kullanabilirsiniz."<<endl;
		cout<<endl;
		system("pause");
		system("cls");
		goto A12;
		break;
	}
	case 'd':
	case 'D':
	{
		system("cls");
		goto A12;
		break;
	}
	default:
		system("cls");
		cout<<"Ge�erli karakter de�il a�a��da yazan harflerden birine bas�n�z!!"<<endl; 
		goto A15;
	}
	
	A12:
	cout<<"                                                   Kasadaki Paran�z="<<score<<"TL"<<endl;
	cout<<"SORU 1)                                                 1.  100 TL *"<<endl;
	cout<<"  Mercedes' in tam ismi nedir?                          2.  200 TL"<<endl;
	cout<<" A) Mercedes-Shelby                                     3.  300 TL"<<endl;
	cout<<" B) Mercedes-Benz                                       4.  400 TL"<<endl;
	cout<<" C) Mercedes-Tesla                                      5.  500 TL"<<endl;
	cout<<" D) Mercedes-Faraday                                    6.  600 TL"<<endl;
	cout<<"                                                        7.  700 TL"<<endl;
	cout<<"                                                        8.  800 TL"<<endl;
	cout<<"                                                        9.  900 TL"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;
	time_t basla, bit;
	time (&basla);	
	cin >> cevap;
	time(&bit);
	
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamad���n�z i�in yar��may� kaybettiniz. :("<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"             ##      ## "<<endl;
		Sleep(300);
		cout<<"               ##  ##"<<endl;
		Sleep(300);
		cout<<"                 ##"<<endl;
		Sleep(300);
		cout<<"               ##  ##"<<endl;
		Sleep(300);
		cout<<"             ##      ##"<<endl;
		Sleep(3000);
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevaplad�n�z."<<endl;
		cout<<endl;
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yaz�kki bilemediniz. 50 TL kaybettiniz :("<<endl;
				cout<<endl; 
				cout<<"Do�ru cevap B 'ydi"<<endl;
				score=score-50;
				s1= 'Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Tebrikler. Do�ru bildiniz. 100 TL kazand�n�z :)"<<endl;
				score = score + 100;
				s1= 'D';
				break;
			}	
			case 'c':
			case 'C':
			{
				cout<<"Ne yaz�kki bilemediniz. 50 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap B 'ydi"<<endl;
				score=score-50;
				s1= 'Y';
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yaz�kki bilemediniz. 50 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap B 'ydi"<<endl;
				score=score-50;
				s1= 'Y';
				break;				}
			default:
			{
				system("cls");
				cout<<"Ge�ersiz komut!! ��klardan birini se�iniz"<<endl;
				cout<<"  "<<endl;
				goto A12;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A64:
	cout<<"                                                   Kasadaki Paran�z="<<score<<"TL"<<endl;
	cout<<"SORU 2)                                               "<<s1<<" 1.  100 TL"<<endl;  
	cout<<"  DEV C Programlama dilini geli�tiren                   2.  200 TL *"<<endl;
	cout<<"bilim adamlar�n�n soyadlar� nedir?                      3.  300 TL"<<endl;
	cout<<" A) Born - Pasteur                                      4.  400 TL"<<endl;
	cout<<" B) Hewlett - Packard                                   5.  500 TL"<<endl;
	cout<<" C) Ritchie - Labs                                      6.  600 TL"<<endl;
	cout<<" D) Ford - Shelby                                       7.  700 TL"<<endl;
	cout<<"                                                        8.  800 TL"<<endl;
	cout<<"                                                        9.  900 TL"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;
	time (&basla);
	cin >> cevap;
	time(&bit);
	
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamad���n�z i�in yar��may� kaybettiniz. :("<<endl;
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevaplad�n�z."<<endl;
		cout<<endl;
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yaz�kki bilemediniz. 100 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi"<<endl;
				score=score-100;
				s2= 'Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yaz�kki bilemediniz. 100 TL kaybettiniz :("<<endl;
				cout<<endl;	
				cout<<"Do�ru cevap C 'ydi"<<endl;
				score=score-100;
				s2= 'Y';
				break;
			}
			case 'c':
			case 'C':
			{	
				cout<<"Tebrikler do�ru bildiniz. 200 TL kazand�n�z :)"<<endl;
				score = score + 200;
				s2= 'D';
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yaz�kki bilemediniz. 100 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi"<<endl;
				score=score-100;
				s2= 'Y';
				break;
			}
			default:
			{
				system("cls");
					cout<<"Ge�ersiz komut!! ��klardan birini se�iniz"<<endl;
				cout<<"  "<<endl;
				goto A64;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A127:
	cout<<"                                                   Kasadaki Paran�z="<<score<<"TL"<<endl;
	cout<<"SORU 3)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"A�a��daki kelimelerden hangisi Sivas                  "<<s2<<" 2.  200 TL"<<endl;
	cout<<"a�z�nda 'herhalde' kelimesi yerine kullan�l�r.          3.  300 TL *"<<endl;
	cout<<" A) Ellaamki                                            4.  400 TL"<<endl;
	cout<<" B) Abe                                                 5.  500 TL"<<endl;
	cout<<" C) B�ld�r                                              6.  600 TL"<<endl;
	cout<<" D) �flah                                               7.  700 TL"<<endl;
	cout<<"                                                        8.  800 TL"<<endl;
	cout<<"                                                        9.  900 TL"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;
	time (&basla);
	cin >> cevap;
	time(&bit);
	
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamad���n�z i�in yar��may� kaybettiniz. :("<<endl;
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevaplad�n�z."<<endl;
		cout<<endl;
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Tebrikler do�ru bildiniz. 300 TL kazand�n�z :)"<<endl;
				score = score + 300;
				s3='D';
					break;
			}
			case 'b':
			case 'B':
			{	
				cout<<"Ne yaz�kki bilemediniz. 150 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap A 'yd�"<<endl;
				score=score-150;
				s3='Y';
				break;
			}
			case 'c':
			case 'C':
			{
				cout<<"Ne yaz�kki bilemediniz. 150 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap A 'yd�"<<endl;
				score=score-150;
				s3='Y';
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yaz�kki bilemediniz. 150 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap A 'yd�"<<endl;
				score=score-150;
				s3='Y';
				break;
			}
			default:
			{
				system("cls");
				cout<<"Ge�ersiz komut!! ��klardan birini se�iniz"<<endl;
				cout<<"  "<<endl;
				goto A127;	
			}
		}
	}
	Sleep(3000);
	system("cls");
	A203:
	cout<<"                                                   Kasadaki Paran�z="<<score<<"TL"<<endl;
	cout<<"SORU 4)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Anadolu y�resine ait '.... kap�dan bakt�r�r           "<<s2<<" 2.  200 TL"<<endl;
	cout<<"kazma k�rek yakt�r�r.' deyiminindeki noktal�          "<<s3<<" 3.  300 TL"<<endl;
	cout<<"yere hangi ay gelmelidir?                               4.  400 TL *"<<endl;
	cout<<" A) April                                               5.  500 TL"<<endl;
	cout<<" B) Ekim                                                6.  600 TL"<<endl;
	cout<<" C) Ocak                                                7.  700 TL"<<endl;
	cout<<" D) Mart                                                8.  800 TL"<<endl;
	cout<<"                                                        9.  900 TL"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;
	time (&basla);
	cin >> cevap;
	time(&bit);
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamad���n�z i�in yar��may� kaybettiniz. :("<<endl;
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
		{
			cout<<"            Soruyu "<<fark<<" saniyede cevaplad�n�z."<<endl;
			cout<<endl;	
			switch(cevap)
			{
			case 'a':
			case 'A':
			{
				cout<<"Ne yaz�kki bilemediniz. 200 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap D 'ydi ";
				score=score-200;
				s4='Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yaz�kki bilemediniz. 200 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap D 'ydi"<<endl;
				score=score-200;
					s4='Y';
				break;
			}
			case 'c':
			case 'C':
			{
				cout<<"Ne yaz�kki bilemediniz. 200 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap D 'ydi"<<endl;
				score=score-200;
				s4='Y';
				break;
			}
			case 'd':
				case 'D':
			{
				cout<<"Tebrikler do�ru bildiniz. 400 TL kazand�n�z :)"<<endl;
				score = score + 400;
				s4='D';	
				break;
			}
			default:
			{
				system("cls");
				cout<<"Ge�ersiz komut!! ��klardan birini se�iniz"<<endl;
				cout<<"  "<<endl;
				goto A203;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A311:
	cout<<"                                                   Kasadaki Paran�z="<<score<<"TL"<<endl;
	cout<<"SORU 5)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"�lkemizde 81 plakas� hangi �ehirde kullan�lmaktad�r?  "<<s2<<" 2.  200 TL"<<endl;
	cout<<" A) Sivas                                             "<<s3<<" 3.  300 TL"<<endl;
	cout<<" B) K�r�ehir                                          "<<s4<<" 4.  400 TL"<<endl;
	cout<<" C) D�zce                                               5.  500 TL *"<<endl;
	cout<<" D) Zonguldak                                           6.  600 TL"<<endl;
	cout<<"                                                        7.  700 TL"<<endl;
	cout<<"                                                        8.  800 TL"<<endl;
	cout<<"                                                        9.  900 TL"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;
	time (&basla);
	cin >> cevap;
	time(&bit);
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamad���n�z i�in yar��may� kaybettiniz. :("<<endl;
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevaplad�n�z."<<endl;	
		cout<<endl;	
		switch(cevap)	
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yaz�kki bilemediniz. 250 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi ";
				score=score-250;
				s5='Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yaz�kki bilemediniz. 250 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi"<<endl;
				s5='Y';
				score=score-250;
				break;
			}
			case 'c':
			case 'C':
			{
				cout<<"Tebrikler do�ru bildiniz. 500 TL kazand�n�z :)"<<endl;
				s5='D';
				score=score+500;
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yaz�kki bilemediniz. 250 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi"<<endl;
				s5='Y';
				score=score-250;
				break;
			}
			default:
			{
				system("cls");
				cout<<"Ge�ersiz komut!! ��klardan birini se�iniz"<<endl;
				cout<<"  "<<endl;
				goto A311;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A369:
	cout<<"                                                   Kasadaki Paran�z="<<score<<"TL"<<endl;
	cout<<"SORU 6)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"D�nyada ilk olarak neyin videosu �ekilmi�tir?         "<<s2<<" 2.  200 TL"<<endl;
	cout<<" A) Hareket eden bir tren.                            "<<s3<<" 3.  300 TL"<<endl;
	cout<<" B) Londra'daki Londan Eye d�nmedolab�.               "<<s4<<" 4.  400 TL"<<endl;
	cout<<" C) S�leymaniye Camii.                                "<<s5<<" 5.  500 TL"<<endl;
	cout<<" D) Titanic Gemisi'nin yola ��k���.                     6.  600 TL *"<<endl;
	cout<<"                                                        7.  700 TL"<<endl;
	cout<<"                                                        8.  800 TL"<<endl;
	cout<<"                                                        9.  900 TL"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;	
	time (&basla);
	cin >> cevap;
	time(&bit);
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamad���n�z i�in yar��may� kaybettiniz. :("<<endl;
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevaplad�n�z."<<endl;	
		cout<<endl;	
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Tebrikler do�ru bildiniz. 600 TL kazand�n�z :)"<<endl;
				s6='D';
				score=score+600;
				break;			
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yaz�kki bilemediniz. 300 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap A 'yd�"<<endl;
				s6='Y';
				score=score-300;
				break;
			}
			case 'c':
				case 'C':
			{
				cout<<"Ne yaz�kki bilemediniz. 300 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap A 'yd� ";
				score=score-300;
				s6='Y';
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yaz�kki bilemediniz. 300 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap A 'yd�"<<endl;
				s6='Y';
				score=score-300;
				break;
			}
			default:
			{
				system("cls");
				cout<<"Ge�ersiz komut!! ��klardan birini se�iniz"<<endl;
				cout<<"  "<<endl;
				goto A369;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A434:
	cout<<"                                                   Kasadaki Paran�z="<<score<<"TL"<<endl;
	cout<<"SORU 7)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"A�a��daki Krall�k veya �mparatorluklardan             "<<s2<<" 2.  200 TL"<<endl;
	cout<<"hangisi XIX. Y�zy�lda Tarih sahnesinden silinmi�tir?  "<<s3<<" 3.  300 TL"<<endl;
	cout<<" A) �in                                               "<<s4<<" 4.  400 TL"<<endl;
	cout<<" B) Osmanl�                                           "<<s5<<" 5.  500 TL"<<endl;
	cout<<" C) Bab�r                                             "<<s6<<" 6.  600 TL"<<endl;
	cout<<" D) Avusturya-Macaristan                                7.  700 TL *"<<endl;
	cout<<"                                                        8.  800 TL"<<endl;
	cout<<"                                                        9.  900 TL"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;
	time (&basla);
	cin >> cevap;
	time(&bit);
		fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamad���n�z i�in yar��may� kaybettiniz. :("<<endl;
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevaplad�n�z."<<endl;
		cout<<endl;
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yaz�kki bilemediniz. 350 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi ";
				score=score-350;
				s7='Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yaz�kki bilemediniz. 350 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi"<<endl;
				s7='Y';
				score=score-350;
					break;
			}
				case 'c':
			case 'C':
			{
				cout<<"Tebrikler do�ru bildiniz. 700 TL kazand�n�z :)"<<endl;
				s7='D';
				score=score+700;
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yaz�kki bilemediniz. 350 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi"<<endl;
				s7='Y';
				score=score-350;
					break;
			}
			default:
			{
				system("cls");
				cout<<"Ge�ersiz komut!! ��klardan birini se�iniz"<<endl;
					cout<<"  "<<endl;
				goto A434;
			}
		}
	}
Sleep(3000);
	system("cls");
	A498:
	cout<<"                                                   Kasadaki Paran�z="<<score<<"TL"<<endl;
	cout<<"SORU 8)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"T�rkiye'de nobel edebiyat �d�l�ne aday g�sterilen     "<<s2<<" 2.  200 TL"<<endl;
	cout<<"ilk kad�n yazar a�a��dakilerden hangisidir?           "<<s3<<" 3.  300 TL"<<endl;
	cout<<" A) �yk� Didem Ayd�n                                  "<<s4<<" 4.  400 TL"<<endl;
	cout<<" B) Elif �afak                                        "<<s5<<" 5.  500 TL"<<endl;
	cout<<" C) Halide Nusret Zorlutuna                           "<<s6<<" 6.  600 TL"<<endl;
	cout<<" D) Leyla Erbil                                       "<<s7<<" 7.  700 TL"<<endl;
	cout<<"                                                        8.  800 TL *"<<endl;
	cout<<"                                                        9.  900 TL"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;
	time (&basla);
	cin >> cevap;
	time(&bit);	
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamad���n�z i�in yar��may� kaybettiniz. :("<<endl;
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevaplad�n�z."<<endl;
		cout<<endl;
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yaz�kki bilemediniz. 400 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap D 'ydi ";
				score=score-400;
				s8='Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yaz�kki bilemediniz. 400 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap D 'ydi"<<endl;
				s8='Y';
				score=score-400;
				break;
			}
			case 'c':
			case 'C':
			{
					cout<<"Ne yaz�kki bilemediniz. 400 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap D 'ydi"<<endl;
				s8='Y';
				score=score-400;
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Tebrikler do�ru bildiniz. 800 TL kazand�n�z :)"<<endl;
				s8='D';
				score=score+800;
				break;
			}
			default:
			{
				system("cls");
				cout<<"Ge�ersiz komut!! ��klardan birini se�iniz"<<endl;
				cout<<"  "<<endl;
					goto A498;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A561:
	cout<<"                                                   Kasadaki Paran�z="<<score<<"TL"<<endl;
	cout<<"SORU 9)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Tanr� El�isi kitab�n�n yazar� Halil Cibran            "<<s2<<" 2.  200 TL"<<endl;
	cout<<"ne zaman �lm��t�r?                                    "<<s3<<" 3.  300 TL"<<endl;
	cout<<" A) 30 Ocak 1881 (73 ya��nda)                         "<<s4<<" 4.  400 TL"<<endl;
	cout<<" B) 10 Nisan 1931 (48 ya��nda)                        "<<s5<<" 5.  500 TL"<<endl;
	cout<<" C) 2 Ekim 1957 (41 ya��nda)                          "<<s6<<" 6.  600 TL"<<endl;
	cout<<" D) 19 A�ustos 1978 (57 ya��nda)                      "<<s7<<" 7.  700 TL"<<endl;
	cout<<"                                                      "<<s8<<" 8.  800 TL"<<endl;
	cout<<"                                                        9.  900 TL *"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;	
	time (&basla);
	cin >> cevap;
	time(&bit);
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamad���n�z i�in yar��may� kaybettiniz. :("<<endl;
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevaplad�n�z."<<endl;	
		cout<<endl;	
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
					cout<<"Ne yaz�kki bilemediniz. 450 TL kaybettiniz :("<<endl;
					cout<<endl;
					cout<<"Do�ru cevap B 'ydi ";
					score=score-450;
					s9='Y';
					break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Tebrikler do�ru bildiniz. 900 TL kazand�n�z :)"<<endl;
				s9='D';
				score=score+900;
				break;
			}
			case 'c':
			case 'C':
			{
				cout<<"Ne yaz�kki bilemediniz. 450 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap B 'ydi"<<endl;
				s9='Y';
				score=score-450;
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yaz�kki bilemediniz. 450 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap B 'ydi"<<endl;
				s9='Y';
				score=score-450;
				break;
			}
			default:
			{
				system("cls");
				cout<<"Ge�ersiz komut!! ��klardan birini se�iniz"<<endl;
				cout<<"  "<<endl;
				goto A561;
			}
		}
	}
		Sleep(3000);
	system("cls");
	A624:
	cout<<"                                                   Kasadaki Paran�z="<<score<<"TL"<<endl;
	cout<<"SORU 10)                                              "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Wolksvagen'�n l�ks ara� kategorisinde �retti�i        "<<s2<<" 2.  200 TL"<<endl;
	cout<<"modeli a�a��dakilerden hangisdir?                     "<<s3<<" 3.  300 TL"<<endl;
	cout<<" A) Polo                                              "<<s4<<" 4.  400 TL"<<endl;
	cout<<" B) Jetta                                             "<<s5<<" 5.  500 TL"<<endl;
	cout<<" C) WV CC                                             "<<s6<<" 6.  600 TL"<<endl;
	cout<<" D) Caddy                                             "<<s7<<" 7.  700 TL"<<endl;
	cout<<"                                                      "<<s8<<" 8.  800 TL"<<endl;
	cout<<"                                                      "<<s9<<" 9.  900 TL"<<endl;
	cout<<"                                                       10. 1000 TL *"<<endl;	
	time (&basla);
	cin >> cevap;
	time(&bit);
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamad���n�z i�in yar��may� kaybettiniz. :("<<endl;
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevaplad�n�z."<<endl;
		cout<<endl;		
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yaz�kki bilemediniz. 500 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi ";
				score=score-500;
				s10='Y';
				goto A692;
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yaz�kki bilemediniz. 500 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi"<<endl;
				s10='Y';
				score=score-500;
				goto A692;
				break;
			}
			case 'c':
			case 'C':
				{
				cout<<"Tebrikler do�ru bildiniz. 1000 TL kazand�n�z :)"<<endl;
				s10='D';
				score=score+1000;
				goto A692;
				break;
			}
			case 'd':
			case 'D':	
			{		
				cout<<"Ne yaz�kki bilemediniz. 500 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Do�ru cevap C 'ydi"<<endl;
				s10='Y';
				score=score-500;
				goto A692;
				break;
			}
			default:
			{
				system("cls");
				cout<<"Ge�ersiz komut!! ��klardan birini se�iniz"<<endl;
				cout<<"  "<<endl;
				goto A624;
			}
		
	}
		A692:
		Sleep(3000);
		system("cls");
		cout<<"   Yar��mam�zdan "<<score<<" TL Kazand�n�z."<<endl;                  
		cout<<endl;                                                                  
		cout<<"     ___________________________________              "<<endl;                                                                  
		cout<<"    |   YARI�MAMIZ    Yar��mas� 'ndan   |             "<<endl;
		cout<<"    |        "<<score<<" TL 'lik                |     "<<endl;
		cout<<"    |             �EK                   |             "<<endl;
		cout<<"    | �eki alan:          �mza:         |             "<<endl;
		cout<<"    |  ";
		for(i=0; i<is; i++)
		{
		cout<<isim[i];
		}
		cout<<"     Murat �AH�N       |     "<<endl;
		cout<<"    |___________________________________|             "<<endl;
		cout<<"                                                      "<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"        "<<s1<<" 1.  100 TL                      "<<endl;
		cout<<"        "<<s2<<" 2.  200 TL                      "<<endl;
		cout<<"        "<<s3<<" 3.  300 TL                      "<<endl;
		cout<<"        "<<s4<<" 4.  400 TL                      "<<endl;
		cout<<"        "<<s5<<" 5.  500 TL                      "<<endl;
		cout<<"        "<<s6<<" 6.  600 TL                      "<<endl;
		cout<<"        "<<s7<<" 7.  700 TL                      "<<endl;
		cout<<"        "<<s8<<" 8.  800 TL                      "<<endl;
		cout<<"        "<<s9<<" 9.  900 TL                      "<<endl;
		cout<<"       "<<s10<<" 10. 1000 TL                     "<<endl;
		system("pause");
	}
}

