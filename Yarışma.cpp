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
	cout<<"                 **// YARIÞMAMIZ Yarýþmasý' na Hoþgeldiniz\\\\**    "<<endl;
	cout<<"                            Yarýþmamýz baþlýyor."<<endl;
	cout<<endl;
	cout<<"Ýsminiz kaç karakterden oluþmakta?"<<endl;
	cin>>is;
	char isim[is], i;
	cout<<"Lütfen isminizi yazýnýz."<<endl;
	for(i=0; i<is; i++)
	{
	cin>>isim[i];
	}
	Sleep(2500);
	system("cls");
	A15:
	cout<<endl;
	cout<<"  Kurallarý Öðrenmek Ýçin K Harfine Basýnýz."<<endl;
	cout<<"  Devam Etmek Ýçin D Harfine Basýnýz. "<<endl;
	cout<<endl;
	cout<<" (Not: Bence ilk önce kurallarý öðrenin.)"<<endl;
	cin>>kd;
	switch(kd)
	{
	case 'k':
	case 'K':
	{
		system("cls");
		cout<<" 1) Her bildiðiniz bir soru için kasanýza bir öncekinden 100 TL daha fazla eklenecek."<<endl;
		cout<<endl;
		cout<<" 2) Her bilemediðiniz bir soru için kasanýzdan bir öncekinden 50 TL daha fazla  alýnacak."<<endl;
		cout<<endl;
		cout<<" 3) Kaçýncý soruda olduðunuzu takip etmek ve doðru yanlýþ konumunuzu "<<endl;
		cout<<"öðrenmek için sað taraftaki tablodan yararlanabilirsiniz."<<endl;
		cout<<endl;
		cout<<" 4) Sorularýnýzý 30 saniye içinde cevaplayamazsanýz yarýþmamýzdan elenirsiniz."<<endl;
		cout<<endl;
		cout<<" 5) Yarýþmamýzda ister küçük ister büyük karakter kullanabilirsiniz."<<endl;
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
		cout<<"Geçerli karakter deðil aþaðýda yazan harflerden birine basýnýz!!"<<endl; 
		goto A15;
	}
	
	A12:
	cout<<"                                                   Kasadaki Paranýz="<<score<<"TL"<<endl;
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
		cout<<"30 saniyeden erken cevaplayamadýðýnýz için yarýþmayý kaybettiniz. :("<<endl;
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
		cout<<"            Soruyu "<<fark<<" saniyede cevapladýnýz."<<endl;
		cout<<endl;
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yazýkki bilemediniz. 50 TL kaybettiniz :("<<endl;
				cout<<endl; 
				cout<<"Doðru cevap B 'ydi"<<endl;
				score=score-50;
				s1= 'Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Tebrikler. Doðru bildiniz. 100 TL kazandýnýz :)"<<endl;
				score = score + 100;
				s1= 'D';
				break;
			}	
			case 'c':
			case 'C':
			{
				cout<<"Ne yazýkki bilemediniz. 50 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap B 'ydi"<<endl;
				score=score-50;
				s1= 'Y';
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yazýkki bilemediniz. 50 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap B 'ydi"<<endl;
				score=score-50;
				s1= 'Y';
				break;				}
			default:
			{
				system("cls");
				cout<<"Geçersiz komut!! Þýklardan birini seçiniz"<<endl;
				cout<<"  "<<endl;
				goto A12;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A64:
	cout<<"                                                   Kasadaki Paranýz="<<score<<"TL"<<endl;
	cout<<"SORU 2)                                               "<<s1<<" 1.  100 TL"<<endl;  
	cout<<"  DEV C Programlama dilini geliþtiren                   2.  200 TL *"<<endl;
	cout<<"bilim adamlarýnýn soyadlarý nedir?                      3.  300 TL"<<endl;
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
		cout<<"30 saniyeden erken cevaplayamadýðýnýz için yarýþmayý kaybettiniz. :("<<endl;
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevapladýnýz."<<endl;
		cout<<endl;
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yazýkki bilemediniz. 100 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi"<<endl;
				score=score-100;
				s2= 'Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yazýkki bilemediniz. 100 TL kaybettiniz :("<<endl;
				cout<<endl;	
				cout<<"Doðru cevap C 'ydi"<<endl;
				score=score-100;
				s2= 'Y';
				break;
			}
			case 'c':
			case 'C':
			{	
				cout<<"Tebrikler doðru bildiniz. 200 TL kazandýnýz :)"<<endl;
				score = score + 200;
				s2= 'D';
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yazýkki bilemediniz. 100 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi"<<endl;
				score=score-100;
				s2= 'Y';
				break;
			}
			default:
			{
				system("cls");
					cout<<"Geçersiz komut!! Þýklardan birini seçiniz"<<endl;
				cout<<"  "<<endl;
				goto A64;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A127:
	cout<<"                                                   Kasadaki Paranýz="<<score<<"TL"<<endl;
	cout<<"SORU 3)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Aþaðýdaki kelimelerden hangisi Sivas                  "<<s2<<" 2.  200 TL"<<endl;
	cout<<"aðzýnda 'herhalde' kelimesi yerine kullanýlýr.          3.  300 TL *"<<endl;
	cout<<" A) Ellaamki                                            4.  400 TL"<<endl;
	cout<<" B) Abe                                                 5.  500 TL"<<endl;
	cout<<" C) Býldýr                                              6.  600 TL"<<endl;
	cout<<" D) Ýflah                                               7.  700 TL"<<endl;
	cout<<"                                                        8.  800 TL"<<endl;
	cout<<"                                                        9.  900 TL"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;
	time (&basla);
	cin >> cevap;
	time(&bit);
	
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamadýðýnýz için yarýþmayý kaybettiniz. :("<<endl;
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevapladýnýz."<<endl;
		cout<<endl;
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Tebrikler doðru bildiniz. 300 TL kazandýnýz :)"<<endl;
				score = score + 300;
				s3='D';
					break;
			}
			case 'b':
			case 'B':
			{	
				cout<<"Ne yazýkki bilemediniz. 150 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap A 'ydý"<<endl;
				score=score-150;
				s3='Y';
				break;
			}
			case 'c':
			case 'C':
			{
				cout<<"Ne yazýkki bilemediniz. 150 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap A 'ydý"<<endl;
				score=score-150;
				s3='Y';
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yazýkki bilemediniz. 150 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap A 'ydý"<<endl;
				score=score-150;
				s3='Y';
				break;
			}
			default:
			{
				system("cls");
				cout<<"Geçersiz komut!! Þýklardan birini seçiniz"<<endl;
				cout<<"  "<<endl;
				goto A127;	
			}
		}
	}
	Sleep(3000);
	system("cls");
	A203:
	cout<<"                                                   Kasadaki Paranýz="<<score<<"TL"<<endl;
	cout<<"SORU 4)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Anadolu yöresine ait '.... kapýdan baktýrýr           "<<s2<<" 2.  200 TL"<<endl;
	cout<<"kazma kürek yaktýrýr.' deyiminindeki noktalý          "<<s3<<" 3.  300 TL"<<endl;
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
		cout<<"30 saniyeden erken cevaplayamadýðýnýz için yarýþmayý kaybettiniz. :("<<endl;
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
		{
			cout<<"            Soruyu "<<fark<<" saniyede cevapladýnýz."<<endl;
			cout<<endl;	
			switch(cevap)
			{
			case 'a':
			case 'A':
			{
				cout<<"Ne yazýkki bilemediniz. 200 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap D 'ydi ";
				score=score-200;
				s4='Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yazýkki bilemediniz. 200 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap D 'ydi"<<endl;
				score=score-200;
					s4='Y';
				break;
			}
			case 'c':
			case 'C':
			{
				cout<<"Ne yazýkki bilemediniz. 200 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap D 'ydi"<<endl;
				score=score-200;
				s4='Y';
				break;
			}
			case 'd':
				case 'D':
			{
				cout<<"Tebrikler doðru bildiniz. 400 TL kazandýnýz :)"<<endl;
				score = score + 400;
				s4='D';	
				break;
			}
			default:
			{
				system("cls");
				cout<<"Geçersiz komut!! Þýklardan birini seçiniz"<<endl;
				cout<<"  "<<endl;
				goto A203;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A311:
	cout<<"                                                   Kasadaki Paranýz="<<score<<"TL"<<endl;
	cout<<"SORU 5)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Ülkemizde 81 plakasý hangi þehirde kullanýlmaktadýr?  "<<s2<<" 2.  200 TL"<<endl;
	cout<<" A) Sivas                                             "<<s3<<" 3.  300 TL"<<endl;
	cout<<" B) Kýrþehir                                          "<<s4<<" 4.  400 TL"<<endl;
	cout<<" C) Düzce                                               5.  500 TL *"<<endl;
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
		cout<<"30 saniyeden erken cevaplayamadýðýnýz için yarýþmayý kaybettiniz. :("<<endl;
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevapladýnýz."<<endl;	
		cout<<endl;	
		switch(cevap)	
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yazýkki bilemediniz. 250 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi ";
				score=score-250;
				s5='Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yazýkki bilemediniz. 250 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi"<<endl;
				s5='Y';
				score=score-250;
				break;
			}
			case 'c':
			case 'C':
			{
				cout<<"Tebrikler doðru bildiniz. 500 TL kazandýnýz :)"<<endl;
				s5='D';
				score=score+500;
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yazýkki bilemediniz. 250 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi"<<endl;
				s5='Y';
				score=score-250;
				break;
			}
			default:
			{
				system("cls");
				cout<<"Geçersiz komut!! Þýklardan birini seçiniz"<<endl;
				cout<<"  "<<endl;
				goto A311;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A369:
	cout<<"                                                   Kasadaki Paranýz="<<score<<"TL"<<endl;
	cout<<"SORU 6)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Dünyada ilk olarak neyin videosu çekilmiþtir?         "<<s2<<" 2.  200 TL"<<endl;
	cout<<" A) Hareket eden bir tren.                            "<<s3<<" 3.  300 TL"<<endl;
	cout<<" B) Londra'daki Londan Eye dönmedolabý.               "<<s4<<" 4.  400 TL"<<endl;
	cout<<" C) Süleymaniye Camii.                                "<<s5<<" 5.  500 TL"<<endl;
	cout<<" D) Titanic Gemisi'nin yola çýkýþý.                     6.  600 TL *"<<endl;
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
		cout<<"30 saniyeden erken cevaplayamadýðýnýz için yarýþmayý kaybettiniz. :("<<endl;
		s6  = ' ';
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevapladýnýz."<<endl;	
		cout<<endl;	
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Tebrikler doðru bildiniz. 600 TL kazandýnýz :)"<<endl;
				s6='D';
				score=score+600;
				break;			
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yazýkki bilemediniz. 300 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap A 'ydý"<<endl;
				s6='Y';
				score=score-300;
				break;
			}
			case 'c':
				case 'C':
			{
				cout<<"Ne yazýkki bilemediniz. 300 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap A 'ydý ";
				score=score-300;
				s6='Y';
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yazýkki bilemediniz. 300 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap A 'ydý"<<endl;
				s6='Y';
				score=score-300;
				break;
			}
			default:
			{
				system("cls");
				cout<<"Geçersiz komut!! Þýklardan birini seçiniz"<<endl;
				cout<<"  "<<endl;
				goto A369;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A434:
	cout<<"                                                   Kasadaki Paranýz="<<score<<"TL"<<endl;
	cout<<"SORU 7)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Aþaðýdaki Krallýk veya Ýmparatorluklardan             "<<s2<<" 2.  200 TL"<<endl;
	cout<<"hangisi XIX. Yüzyýlda Tarih sahnesinden silinmiþtir?  "<<s3<<" 3.  300 TL"<<endl;
	cout<<" A) Çin                                               "<<s4<<" 4.  400 TL"<<endl;
	cout<<" B) Osmanlý                                           "<<s5<<" 5.  500 TL"<<endl;
	cout<<" C) Babür                                             "<<s6<<" 6.  600 TL"<<endl;
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
		cout<<"30 saniyeden erken cevaplayamadýðýnýz için yarýþmayý kaybettiniz. :("<<endl;
		s7  = ' ';
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevapladýnýz."<<endl;
		cout<<endl;
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yazýkki bilemediniz. 350 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi ";
				score=score-350;
				s7='Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yazýkki bilemediniz. 350 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi"<<endl;
				s7='Y';
				score=score-350;
					break;
			}
				case 'c':
			case 'C':
			{
				cout<<"Tebrikler doðru bildiniz. 700 TL kazandýnýz :)"<<endl;
				s7='D';
				score=score+700;
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yazýkki bilemediniz. 350 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi"<<endl;
				s7='Y';
				score=score-350;
					break;
			}
			default:
			{
				system("cls");
				cout<<"Geçersiz komut!! Þýklardan birini seçiniz"<<endl;
					cout<<"  "<<endl;
				goto A434;
			}
		}
	}
Sleep(3000);
	system("cls");
	A498:
	cout<<"                                                   Kasadaki Paranýz="<<score<<"TL"<<endl;
	cout<<"SORU 8)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Türkiye'de nobel edebiyat ödülüne aday gösterilen     "<<s2<<" 2.  200 TL"<<endl;
	cout<<"ilk kadýn yazar aþaðýdakilerden hangisidir?           "<<s3<<" 3.  300 TL"<<endl;
	cout<<" A) Öykü Didem Aydýn                                  "<<s4<<" 4.  400 TL"<<endl;
	cout<<" B) Elif Þafak                                        "<<s5<<" 5.  500 TL"<<endl;
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
		cout<<"30 saniyeden erken cevaplayamadýðýnýz için yarýþmayý kaybettiniz. :("<<endl;
		s8  = ' ';
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevapladýnýz."<<endl;
		cout<<endl;
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yazýkki bilemediniz. 400 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap D 'ydi ";
				score=score-400;
				s8='Y';
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yazýkki bilemediniz. 400 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap D 'ydi"<<endl;
				s8='Y';
				score=score-400;
				break;
			}
			case 'c':
			case 'C':
			{
					cout<<"Ne yazýkki bilemediniz. 400 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap D 'ydi"<<endl;
				s8='Y';
				score=score-400;
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Tebrikler doðru bildiniz. 800 TL kazandýnýz :)"<<endl;
				s8='D';
				score=score+800;
				break;
			}
			default:
			{
				system("cls");
				cout<<"Geçersiz komut!! Þýklardan birini seçiniz"<<endl;
				cout<<"  "<<endl;
					goto A498;
			}
		}
	}
	Sleep(3000);
	system("cls");
	A561:
	cout<<"                                                   Kasadaki Paranýz="<<score<<"TL"<<endl;
	cout<<"SORU 9)                                               "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Tanrý Elçisi kitabýnýn yazarý Halil Cibran            "<<s2<<" 2.  200 TL"<<endl;
	cout<<"ne zaman ölmüþtür?                                    "<<s3<<" 3.  300 TL"<<endl;
	cout<<" A) 30 Ocak 1881 (73 yaþýnda)                         "<<s4<<" 4.  400 TL"<<endl;
	cout<<" B) 10 Nisan 1931 (48 yaþýnda)                        "<<s5<<" 5.  500 TL"<<endl;
	cout<<" C) 2 Ekim 1957 (41 yaþýnda)                          "<<s6<<" 6.  600 TL"<<endl;
	cout<<" D) 19 Aðustos 1978 (57 yaþýnda)                      "<<s7<<" 7.  700 TL"<<endl;
	cout<<"                                                      "<<s8<<" 8.  800 TL"<<endl;
	cout<<"                                                        9.  900 TL *"<<endl;
	cout<<"                                                       10. 1000 TL"<<endl;	
	time (&basla);
	cin >> cevap;
	time(&bit);
	fark = difftime(bit, basla);
	if(fark>30)
	{
		cout<<"30 saniyeden erken cevaplayamadýðýnýz için yarýþmayý kaybettiniz. :("<<endl;
		s9  = ' ';
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevapladýnýz."<<endl;	
		cout<<endl;	
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
					cout<<"Ne yazýkki bilemediniz. 450 TL kaybettiniz :("<<endl;
					cout<<endl;
					cout<<"Doðru cevap B 'ydi ";
					score=score-450;
					s9='Y';
					break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Tebrikler doðru bildiniz. 900 TL kazandýnýz :)"<<endl;
				s9='D';
				score=score+900;
				break;
			}
			case 'c':
			case 'C':
			{
				cout<<"Ne yazýkki bilemediniz. 450 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap B 'ydi"<<endl;
				s9='Y';
				score=score-450;
				break;
			}
			case 'd':
			case 'D':
			{
				cout<<"Ne yazýkki bilemediniz. 450 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap B 'ydi"<<endl;
				s9='Y';
				score=score-450;
				break;
			}
			default:
			{
				system("cls");
				cout<<"Geçersiz komut!! Þýklardan birini seçiniz"<<endl;
				cout<<"  "<<endl;
				goto A561;
			}
		}
	}
		Sleep(3000);
	system("cls");
	A624:
	cout<<"                                                   Kasadaki Paranýz="<<score<<"TL"<<endl;
	cout<<"SORU 10)                                              "<<s1<<" 1.  100 TL"<<endl;
	cout<<"Wolksvagen'ýn lüks araç kategorisinde ürettiði        "<<s2<<" 2.  200 TL"<<endl;
	cout<<"modeli aþaðýdakilerden hangisdir?                     "<<s3<<" 3.  300 TL"<<endl;
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
		cout<<"30 saniyeden erken cevaplayamadýðýnýz için yarýþmayý kaybettiniz. :("<<endl;
		s10 = ' ';
		goto A692;
	}
	else
	{
		cout<<"            Soruyu "<<fark<<" saniyede cevapladýnýz."<<endl;
		cout<<endl;		
		switch(cevap)
		{
			case 'a':
			case 'A':
			{
				cout<<"Ne yazýkki bilemediniz. 500 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi ";
				score=score-500;
				s10='Y';
				goto A692;
				break;
			}
			case 'b':
			case 'B':
			{
				cout<<"Ne yazýkki bilemediniz. 500 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi"<<endl;
				s10='Y';
				score=score-500;
				goto A692;
				break;
			}
			case 'c':
			case 'C':
				{
				cout<<"Tebrikler doðru bildiniz. 1000 TL kazandýnýz :)"<<endl;
				s10='D';
				score=score+1000;
				goto A692;
				break;
			}
			case 'd':
			case 'D':	
			{		
				cout<<"Ne yazýkki bilemediniz. 500 TL kaybettiniz :("<<endl;
				cout<<endl;
				cout<<"Doðru cevap C 'ydi"<<endl;
				s10='Y';
				score=score-500;
				goto A692;
				break;
			}
			default:
			{
				system("cls");
				cout<<"Geçersiz komut!! Þýklardan birini seçiniz"<<endl;
				cout<<"  "<<endl;
				goto A624;
			}
		
	}
		A692:
		Sleep(3000);
		system("cls");
		cout<<"   Yarýþmamýzdan "<<score<<" TL Kazandýnýz."<<endl;                  
		cout<<endl;                                                                  
		cout<<"     ___________________________________              "<<endl;                                                                  
		cout<<"    |   YARIÞMAMIZ    Yarýþmasý 'ndan   |             "<<endl;
		cout<<"    |        "<<score<<" TL 'lik                |     "<<endl;
		cout<<"    |             ÇEK                   |             "<<endl;
		cout<<"    | Çeki alan:          Ýmza:         |             "<<endl;
		cout<<"    |  ";
		for(i=0; i<is; i++)
		{
		cout<<isim[i];
		}
		cout<<"     Murat ÞAHÝN       |     "<<endl;
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

