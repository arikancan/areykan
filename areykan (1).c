#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int toplam_para;
    int tane_ceyrek = 0;
    int tane_onluk = 0;
    int tane_beslik = 0;
    int tane_birlik = 0;
    int ceyrek = 25;
    int onluk = 10;
    int beslik = 5;
    int birlik = 1;
    do
    {
        toplam_para = get_int("Para üstü giriniz (pozitif bir sayı giriniz): ");
    } while (toplam_para <= 0);


    while(toplam_para >= 25)
    {
        toplam_para -= ceyrek;
        tane_ceyrek ++;
    }
        while(toplam_para >= 10)
    {
        toplam_para -= onluk;
        tane_onluk ++;
    }
            while(toplam_para >= 5)
    {
        toplam_para -= beslik;
        tane_beslik ++;
    }
                while(toplam_para >= 1)
    {
        toplam_para -= birlik;
        tane_birlik ++;
    }
        printf("%d tane çeyrek\n", tane_ceyrek);
        printf("%d tane onluk\n", tane_onluk);
        printf("%d tane beşlik\n", tane_beslik);
        printf("%d tane birlik\n", tane_birlik);
}
