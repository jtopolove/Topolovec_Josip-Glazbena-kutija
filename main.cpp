#include "mbed.h"
#include "pjesme.h"
Pjesme buzzer(ARDUINO_UNO_D11);
DigitalIn Dipswitch1(ARDUINO_UNO_A0);
DigitalIn Dipswitch2(ARDUINO_UNO_A1);
DigitalIn Dipswitch3(ARDUINO_UNO_A2);
DigitalIn Dipswitch4(ARDUINO_UNO_A3);
DigitalOut Reseter (ARDUINO_UNO_D14, 1);
InterruptIn Tipkalo(ARDUINO_UNO_D9, PullUp);
Timer debounce;
Ticker Stoprada;
int Broj_pjesme;
void Zaustavljanje_rada(void)
{
     Reseter=0;
}
int Odabir_Pjesme(void)
{
    int a=0, b=0, c=0, d=0, BP=0;
    Dipswitch1.mode(PullUp);
    Dipswitch2.mode(PullUp);
    Dipswitch3.mode(PullUp);
    Dipswitch4.mode(PullUp);
    if(Dipswitch1==0)
    {
        a=1;
    }
     if(Dipswitch2==0)
    {
        b=2;
    }
     if(Dipswitch3==0)
    {
        c=4;
    }
     if(Dipswitch4==0)
    {
        d=8;
    }
    BP=a+b+c+d;
    return BP;
}
void Pauza(void)
{
    if(debounce.read_ms()>800)
    {
        Stoprada.attach(&Zaustavljanje_rada, 5.0);
        bool Pauza=true;
        debounce.reset();
        buzzer.stop();
        debounce.start();
        while(Pauza==true)
        {
            if(Tipkalo==0 && debounce.read_ms()>800)
            {
                Pauza=false;   
            }
        }
        
        debounce.reset();      
    }
}

int main()
{
    Reseter=1;
    while(1)
    {
        debounce.start();
        Tipkalo.rise(&Pauza);
        Broj_pjesme=Odabir_Pjesme();
        buzzer.start(Broj_pjesme);
        wait_us(2500000);
    }

}