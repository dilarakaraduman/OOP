#include "pch.h"
#include <iostream>
using namespace std;
void duzUcgen(int giris) { //düz üçgen için fonksiyon oluşturduk

    int a, b, bosluk;
    int yildiz = 1; //başlangıç için değer atadik

    {

        bosluk = giris - 1;


        if (3 <= giris && giris <= 15) //istediğimiz aralıkta olmasını sağladık
            for (a = 0; a < giris / 2 + 1; ++a) {//satir sayısı için döngü
                for (b = 0; b < bosluk; ++b)//bosluk için döngü
                    cout << " ";

                for (b = 0; b < yildiz; ++b) {//yildiz için döngü
                    cout << "*";
                }
                cout << endl;//bir satır atlaması için
                bosluk--;//bosluğu azalttık
                yildiz = yildiz + 2;//ikişer olarak yildizi arttırdık
            }


    }

}


void tersUcgen(int giris) {//ters ücgen icin fonksiyon

    int bosluk = 1, yildiz;//

    int a = 0;
    int deneme = 1;
    {

        yildiz = giris - 1;

        while (a < giris) {//satir sayisi icin döngü
            a++;
            int b = 0;
            while (b <= bosluk) {//bosluk icin döngü
                b++;
                cout << " ";
            }
            int x = yildiz;
            while (0 <= x) {//yildiz sayisi icin döngü
                x--;
                cout << "*";

            }
            cout << endl;//alt satira gecmesi icin
            bosluk++;//bosluğu bir arttirdik
            yildiz = yildiz - 2;//yildiz sayisini ikiser azalttik


        }



    }
}

int main(int argc, char** argv) {
    int sayi;
    int secim;
    cout << "lutfen cizmek istediginiz ucgen icin basindaki sayiyi tuslayiniz" << endl;
    cout << "1:DUZ UCGEN" << endl;
    cout << "2:TERS UCGEN" << endl;
    cout << "3:ELMAS UCGEN" << endl;
    cout << "4:CIKIS" << endl;
    cout << "Secimim:";

    cin >> secim;//yapmak istenilen islemi sectirdik
    cout << endl;
    if (secim > 4) {//eger dortten buyuk sayi girildiyse
        cout << "---Secenekler arasinda olmayan bir deger girdiniz!---" << endl;
        exit;//cikis yapilir
    }
    else {//eger 4 rakami girildiyse

        if (secim == 4) {//secim 4 ise cikis saglanir
            cout << "***cikis yapildi ***" << endl;
            exit;
        }

        else { //eger uygun sayilar girildiyse

            cout << "lutfen 3 ile 15 arasinda bir tek sayi giriniz" << endl << endl;
            cout << "3 giris deneme hakkiniz vardir" << endl;

            for (int deneme = 1; deneme <= 3; ++deneme) {//deneme sayisi icin dongu olusturduk
                cout << "istedigim buyukluk:";
                cin >> sayi;//istenilen buyukluk icin deger aldik
                cout << endl;
                if (sayi % 2 == 1) { //tek sayi ise isleme devam edilir
                    deneme = deneme + 3;//deneme sayisini arttirdim ki tekrar donguye girmesin
                    if (3 <= sayi && sayi <= 15)//istenilen aralikta ise isleme devam edilir
                        switch (secim) {
                        case 1://1 tuslandıysa
                            duzUcgen(sayi);//fonksiyon main'e cagirilir

                            break;
                        case 2:
                            tersUcgen(sayi);//fonksiyon main'e cagirilir

                            break;
                        case 3:
                            duzUcgen(sayi);//fonksiyon main'e cagirilir
                            tersUcgen(sayi);//fonksiyon main'e cagirilir

                            break;

                        }
                }
                else
                    if (deneme == 3) {//deneme hakki 3 olduysa 
                        cout << ":(   :(    :(" << endl;
                        cout << "Tum haklarinizi kullandiniz" << endl;
                        exit;//cikis yapilir
                    }
                    else
                        cout << "tekrar giriniz" << endl;//daha deneme hakki bitmesiyse tekrar sayi girmesi istenir


            }
        }

    }
}
