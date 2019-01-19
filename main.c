#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include<math.h>
	struct ogrenci{
		char *ad[20];
		char *soyad[20];
		char *harfi[10];
		char *durumu[10];
		int vize1,vize2,final,notu;
		int dersort;
		}ogrenci[10];


	struct ogrenci2{
		char *ad[20];
		char *soyad[20];
		char *harfi[10];
		char *durumu[10];
		int vize1,vize2,final,notu;
		int dersort;
		}ogrenci2;




	int menu(){
		int secim;
			printf("----------MENU----------\n");
		printf("1.Kayit Ekle\n");
		printf("2.Kayitlari Listele\n");
		printf("3.Sinif Basari Notu Hesapla\n");
		printf("4.Sirali Liste\n");
		printf("5.Istatistikler\n");
		printf("6.Cikis\n");
		printf("Bir islem secin :");
		scanf("%d",&secim);
		return secim;
		}


	main(){
		int i=0,geridon,ogrencisayisi=0,secim=0,s=0,q=0;
		float ortalama;
		jump:
		secim=menu();



		if(secim==1){
			jump1:


			printf("----------KAYIT YAP----------\n");
		//for a
			char harfnotu = ogrenci[q].harfi;
			printf("Ogrencinin adi :");
			scanf("%s",&ogrenci[q].ad);
			printf("Ogrencinin soyadi :");
			scanf("%s",&ogrenci[q].soyad);
			printf("Ogrencinin 1.vize sinavi :");
			scanf("%d",&ogrenci[q].vize1);
			printf("Ogrencinin 2.vize sinavi :");
			scanf("%d",&ogrenci[q].vize2);
			printf("Ogrencinin final sinavi :");
			scanf("%d",&ogrenci[q].final);
			ogrenci[q].notu=(ogrenci[q].vize1*20/100)+(ogrenci[q].vize2*30/100)+(ogrenci[q].final*50/100);
			if(ogrenci[q].notu>=90){
				sprintf(&ogrenci[q].harfi,"%s","AA");
				sprintf(&ogrenci[q].durumu,"%s","Gecti");
			}
			else if(ogrenci[q].notu>=85 && ogrenci[q].notu<=89){
				sprintf(&ogrenci[q].harfi,"%s","BA");
				sprintf(&ogrenci[q].durumu,"%s","Gecti");
			}
			else if(ogrenci[q].notu>=80 && ogrenci[q].notu<=84){
				sprintf(&ogrenci[q].harfi,"%s","BB");
				sprintf(&ogrenci[q].durumu,"%s","Gecti");
			}
			else if(ogrenci[q].notu>=75 && ogrenci[q].notu<=79){
				sprintf(&ogrenci[q].harfi,"%s","CB");
				sprintf(&ogrenci[q].durumu,"%s","Gecti");
			}
			else if(ogrenci[q].notu>=70 && ogrenci[q].notu<=74){
				sprintf(&ogrenci[q].harfi,"%s","CC");
				sprintf(&ogrenci[q].durumu,"%s","Gecti");
			}
			else if(ogrenci[q].notu>=65 && ogrenci[q].notu<=69){
				sprintf(&ogrenci[q].harfi,"%s","DC");
				sprintf(&ogrenci[q].durumu,"%s","Gecti");
			}
			else if(ogrenci[q].notu>=60 && ogrenci[q].notu<=64){
				sprintf(&ogrenci[q].harfi,"%s","DD");
				sprintf(&ogrenci[q].durumu,"%s","Gecti");
			}
			else if(ogrenci[q].notu>=50 && ogrenci[q].notu<=59){
				sprintf(&ogrenci[q].harfi,"%s","FD");
				sprintf(&ogrenci[q].durumu,"%s","Sartli gecti");
			}
			else if(ogrenci[q].notu>=0 && ogrenci[q].notu<=49){
				sprintf(&ogrenci[q].harfi,"%s","FF");
				sprintf(&ogrenci[q].durumu,"%s","Kaldi");
			}
			/*else if(ogrenci[q].harfi=="AA" || ogrenci[s].harfi=="BA" || ogrenci[s].harfi=="BB" || ogrenci[s].harfi=="CB" || ogrenci[s].harfi=="CC" || ogrenci[s].harfi=="DC" || ogrenci[s].harfi=="DD"){
				sprintf(&ogrenci[s].durumu,"%s","Gecti");
			}
			else if(ogrenci[s].harfi=="FD"){
				sprintf(&ogrenci[q].durumu,"%s","Sartli gecti");
			}
			else{
				sprintf(&ogrenci[q].durumu,"%s","Kaldi");
			}*/
			q=q+1;
			ogrencisayisi++;
			printf("Ogrenci kaydi tamamlandi!\n");


			printf("Geri donmek icin 1 e , kayida devam icin 2 ye basin");
			scanf("%d",&geridon);
			if(geridon==1){
				goto jump;
			}
			else if(geridon==2 && q!=10){
				goto jump1;
			}

		//for kapan


		}
		if(secim==2){
		printf("----------KAYITLARI LISTELE----------\n");
		printf("Ad   Soyad   Vize1   Vize2  Final NotOrtalamasi HarfNotu      Durumu\n");
			for(;s<=ogrencisayisi;){
		printf("%s  %s    %d        %d     %d      %d       %s         %s\n",ogrenci[s].ad,ogrenci[s].soyad,ogrenci[s].vize1,ogrenci[s].vize2,ogrenci[s].final,ogrenci[s].notu,ogrenci[s].harfi,ogrenci[s].durumu);
			s++;;
			}
			printf("Geri donmek icin 1 e basin,programdan cikmak icin 1 harici bir deger girin :\n");
			scanf("%d",&geridon);
			if(geridon==1){
				goto jump;
			}
			else if(geridon!=1){
				printf("Programdan cikiliyor");
				exit(1);
			}

		}
		if(secim==3){
			ortalama=0;
			i=0;
			printf("----------SINIF ORTALAMASI----------\n");
			for(;i<10;i++){
			ogrenci[i].notu=(ogrenci[i].vize1*20/100)+(ogrenci[i].vize2*30/100)+(ogrenci[i].final*50/100);
			ortalama=ortalama+ogrenci[i].notu;
		}
			ortalama=ortalama/ogrencisayisi;
			printf("ogrenci notu %.2f\n",ortalama);
			printf("Geri donmek icin 1 e basin,programdan cikmak icin 1 harici bir deger girin :\n");
			scanf("%d",&geridon);
			if(geridon==1){
				goto jump;
			}
			else if(geridon!=1){
				printf("Programdan cikiliyor");
				exit(1);
			}
		}
		if(secim==4){
			printf("----------KAYITLARIN SIRALI HALI----------\n");
			int k;
			int j;
			for(k=0;k<=ogrencisayisi;k++){
				for(j=k;j<=ogrencisayisi;j++){
					if(ogrenci[k].notu<ogrenci[j+1].notu){
						sprintf(&ogrenci2.ad,"%s",ogrenci[k].ad);
						sprintf(&ogrenci2.soyad,"%s",ogrenci[k].soyad);
						ogrenci2.vize1=ogrenci[k].vize1;
						ogrenci2.vize2=ogrenci[k].vize2;
						ogrenci2.final=ogrenci[k].final;
						ogrenci2.notu=ogrenci[k].notu;
						sprintf(&ogrenci2.harfi,"%s",ogrenci[k].harfi);
						sprintf(&ogrenci2.durumu,"%s",ogrenci[k].durumu);


						sprintf(&ogrenci[k].ad,"%s",ogrenci[j+1].ad);
						sprintf(&ogrenci[k].soyad,"%s",ogrenci[j+1].soyad);
						ogrenci[k].vize1=ogrenci[j+1].vize1;
						ogrenci[k].vize2=ogrenci[j+1].vize2;
						ogrenci[k].final=ogrenci[j+1].final;
						ogrenci[k].notu=ogrenci[j+1].notu;
						sprintf(&ogrenci[k].harfi,"%s",ogrenci[j+1].harfi);
						sprintf(&ogrenci[k].durumu,"%s",ogrenci[j+1].durumu);

						sprintf(&ogrenci[j+1].ad,"%s",ogrenci2.ad);
						sprintf(&ogrenci[j+1].soyad,"%s",ogrenci2.soyad);
						ogrenci[j+1].vize1=ogrenci2.vize1;
						ogrenci[j+1].vize2=ogrenci2.vize2;
						ogrenci[j+1].final=ogrenci2.final;
						ogrenci[j+1].notu=ogrenci2.notu;
						sprintf(&ogrenci[j+1].harfi,"%s",ogrenci2.harfi);
						sprintf(&ogrenci[j+1].durumu,"%s",ogrenci2.durumu);


					}

				}
			}
			printf("Ad   Soyad   Vize1   Vize2  Final NotOrtalamasi HarfNotu      Durumu\n");
			for(;i<ogrencisayisi;){
		printf("%s  %s   %d        %d     %d      %d           %s     %s\n",ogrenci[i].ad,ogrenci[i].soyad,ogrenci[i].vize1,ogrenci[i].vize2,ogrenci[i].final,ogrenci[i].notu,ogrenci[i].harfi,ogrenci[i].durumu);
		i++;
	}
			}

		if(secim==5){
			printf("----------ISTATISTIKI BILGILER----------\n");
			int ortalama1=0,h=0,ortustu=0,yuzde=1;
			for(i=0;i<ogrencisayisi;i++){
			ogrenci[i].notu=(ogrenci[i].vize1*20/100)+(ogrenci[i].vize2*30/100)+(ogrenci[i].final*50/100);
			ortalama1=ortalama1+ogrenci[i].notu;
		}
			ortalama1=ortalama1/ogrencisayisi;
			printf("En yuksek not ortalamasi: %d\n",ogrenci[0].notu);
			printf("En dusuk not ortalamasi: %d\n",ogrenci[ogrencisayisi-1].notu);
			printf("Sinif ortalamasi: %d\n",ortalama1);
			for(;h<ogrencisayisi;h++){
				if(ogrenci[h].notu>ortalama1){
					ortustu++;
				}
			}
			yuzde=ortustu*10;
			printf("Ortalama Ustu kisi sayisi: %d - Basari orani: %d%d",ortustu,yuzde);

		}
		if(secim==6){
			exit(1);
		}
		return 0;
}
