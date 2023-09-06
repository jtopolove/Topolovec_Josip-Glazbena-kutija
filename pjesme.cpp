#include "mbed.h"
#include "pjesme.h"
#define Nota_A1flat 415.5
#define Nota_A1 440
#define Nota_B1flat 466
#define Nota_B1 494
#define Nota_C1 523
#define Nota_C1sharp 554
#define Nota_D1 587
#define Nota_D1sharp 622
#define Nota_E1 659
#define Nota_F1 698
#define Nota_F1sharp 740
#define Nota_G1 784
#define Nota_G1sharp 826

//Do-Re-Mi Quick
float Note_Pjesma1[] {Nota_A1flat, Nota_A1, Nota_B1flat, Nota_B1, Nota_C1, Nota_C1sharp, Nota_D1, Nota_D1sharp, Nota_E1, Nota_F1, Nota_F1sharp, Nota_G1, 0};
int Trajanje_Pjesma1[] = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 0};
//Do-Re-Mi Slow
float Note_Pjesma2[] {Nota_A1flat, Nota_A1, Nota_B1flat, Nota_B1, Nota_C1, Nota_C1sharp, Nota_D1, Nota_D1sharp, Nota_E1, Nota_F1, Nota_F1sharp, Nota_G1, 0};
int Trajanje_Pjesma2[] = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 0};
//Sretan rođendan
float Note_Pjesma3[] {Nota_C1,Nota_C1,Nota_D1,Nota_C1,Nota_F1,Nota_E1,Nota_C1,Nota_C1,Nota_D1,Nota_C1,Nota_G1,Nota_F1,Nota_C1,Nota_C1,Nota_C1*2,Nota_A1,Nota_F1,Nota_E1,Nota_D1,Nota_B1flat,Nota_B1flat,Nota_A1,Nota_F1,Nota_G1,Nota_G1};
int Trajanje_Pjesma3[] = {500,1000,500,500,500,250,500,1000,500,500,500,250,500,1000,500,500,500,500,500,500,1000,500,500,500,250};
//Himna
float Note_Pjesma4[]={659.3, 659.3, 659.3, 587.3, 587.3, 523.3, 523.3, 392, 349.2, 329.6, 349.2,
392, 440, 392, 349.2, 329.6, 349.2, 392, 659.3, 659.3, 659.3, 587.3, 587.3, 523.3, 523.3, 392,
349.2, 329.6, 349.2, 392, 440, 493.9, 493.9, 587.3, 523.3, 493.9, 493.9, 493.9, 440, 493.9,
493.9, 523.3, 587.3, 493.9, 587.3, 587.3, 587.3, 587.3, 587.3, 523.3, 493.9, 440, 392, 659.3,
659.3, 659.3, 587.3, 587.3, 523.3, 523.3, 392, 349.2, 329.6, 349.2, 392, 440, 493.9, 493.9,
587.3, 523.3, 0};
int Trajanje_Pjesma4[]={1000, 1000, 1500, 500, 500, 500, 1000, 2000, 500, 500, 500, 500, 2000, 500, 500, 500, 500, 2000, 1000, 1000, 1500, 500,
500, 500, 1000, 2000, 500, 500, 500, 500, 2000, 500, 500, 1000, 2000, 1000, 1000, 1500, 500, 1000, 500, 500, 500, 500, 500, 500, 500,
500, 1000, 1000, 1000, 1000, 2000, 1000, 1000, 1500, 500, 500, 500, 1000, 2000, 500, 500, 500, 500, 2000, 500, 500, 1000, 2000, 0};
//Imperial march btoken
float Note_Pjesma5[]={Nota_A1,Nota_A1,Nota_A1,Nota_A1,Nota_A1,Nota_A1,Nota_F1,0,Nota_A1,Nota_A1,Nota_A1,Nota_A1,Nota_A1,Nota_A1,Nota_F1,0,Nota_A1,Nota_A1,Nota_A1,Nota_F1,Nota_C1*2,Nota_A1,Nota_F1,Nota_C1*2,Nota_A1,Nota_E1*2,Nota_E1*2,Nota_E1*2,Nota_F1*2,Nota_C1*2,Nota_A1,Nota_F1,Nota_C1*2,Nota_A1,Nota_A1*2,Nota_A1,Nota_A1,Nota_A1*2,Nota_G1*2,Nota_G1*2,Nota_D1*2,Nota_D1*2,Nota_D1*2,0,Nota_A1,Nota_D1*2,Nota_D1*2,Nota_C1*2,Nota_C1*2,Nota_B1,Nota_C1*2,0,Nota_F1,Nota_G1,Nota_F1,Nota_A1,Nota_C1*2,Nota_A1,Nota_C1*2,Nota_E1*2,Nota_A1*2,Nota_A1,Nota_A1,Nota_A1*2,Nota_G1*2,Nota_G1*2,Nota_D1*2,Nota_D1*2,Nota_D1*2,0,Nota_A1,Nota_D1*2,Nota_D1*2,Nota_C1*2,Nota_C1*2,Nota_B1,Nota_C1*2,0,Nota_F1,Nota_G1,Nota_F1,Nota_A1,Nota_A1,Nota_F1,Nota_C1*2,Nota_A1};
int Trajanje_Pjesma5[]={500,500,2000,2000,2000,2000,1000,1000,500,500,2000,2000,2000,2000,1000,1000,500,500,500,1000,2000,500,1000,2000,250,500,500,500,1000,2000,500,1000,2000,250,500,1000,2000,500,1000,2000,2000,2000,1000,1000,1000,500,1000,2000,2000,2000,2000,1000,1000,500,1000,2000,500,1000,2000,250,500,1000,2000,500,1000,2000,2000,2000,1000,1000,1000,500,1000,2000,2000,2000,2000,1000,1000,500,1000,2000,500,1000,2000,250};
//Korobienki broken
float Note_Pjesma6[]={Nota_E1*2,Nota_B1,Nota_C1*2,Nota_D1*2,Nota_C1*2,Nota_B1,Nota_A1,Nota_A1,Nota_C1*2,Nota_E1*2,Nota_D1*2,Nota_C1*2,Nota_B1,Nota_C1*2,Nota_D1*2,Nota_E1*2,Nota_C1*2,Nota_A1,Nota_A1,Nota_A1,Nota_B1,Nota_C1*2,Nota_D1*2,Nota_F1*2,Nota_A1*2,Nota_G1*2,Nota_F1*2,Nota_E1*2,Nota_C1*2,Nota_E1*2,Nota_D1*2,Nota_C1*2,Nota_B1,Nota_B1,Nota_C1*2,Nota_D1*2,Nota_E1*2,Nota_C1*2,Nota_A1,Nota_A1,0,Nota_E1*2,Nota_B1,Nota_C1*2,Nota_D1*2,Nota_C1*2,Nota_B1,Nota_A1,Nota_A1,Nota_C1*2,Nota_E1*2,Nota_D1*2,Nota_C1*2,Nota_B1,Nota_C1*2,Nota_D1*2,Nota_E1*2,Nota_C1*2,Nota_A1,Nota_A1,Nota_A1,Nota_B1,Nota_C1*2,Nota_D1*2,Nota_F1*2,Nota_A1*2,Nota_G1*2,Nota_F1*2,Nota_E1*2,Nota_C1*2,Nota_E1*2,Nota_D1*2,Nota_C1*2,Nota_B1,Nota_B1,Nota_C1*2,Nota_D1*2,Nota_E1*2,Nota_C1*2,Nota_A1,Nota_A1,0,Nota_E1*2,Nota_C1*2,Nota_D1*2,Nota_B1,Nota_C1*2,Nota_A1,Nota_G1sharp,Nota_B1,0,Nota_E1*2,Nota_C1*2,Nota_D1*2,Nota_B1,Nota_C1*2,Nota_E1*2,Nota_A1*2,Nota_G1sharp*2};
int Trajanje_Pjesma6[]={500,1000,1000,500,1000,1000,500,1000,1000,500,1000,1000,500,1000,500,500,500,500,1000,500,1000,1000,500,1000,500,1000,1000,500,1000,500,1000,1000,500,1000,1000,500,500,500,500,500,500,500,1000,1000,500,1000,1000,500,1000,1000,500,1000,1000,500,1000,500,500,500,500,1000,500,1000,1000,500,1000,500,1000,1000,500,1000,500,1000,1000,500,1000,1000,500,500,500,500,500,500,250,250,250,250,250,250,250,500,1000,250,250,250,250,500,500,250,250};
//AIschizo
int Trajanje_Pjesma7[] = {200, 200, 200, 200, 200, 200, 400, 200, 200, 200, 200, 200, 400, 200, 200, 200, 200,
  200, 200, 200, 200, 400, 200, 200, 200, 200, 200, 200, 200, 200, 400, 200, 200, 200,
  200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 400, 200, 200};
float Note_Pjesma7[] = {Nota_A1, Nota_A1, Nota_F1, Nota_C1sharp, Nota_D1sharp, Nota_D1, Nota_C1sharp, Nota_F1,
  Nota_A1, Nota_E1, Nota_F1, Nota_C1sharp, Nota_D1sharp, Nota_D1, Nota_C1sharp, Nota_F1,
  Nota_A1, Nota_B1flat, Nota_F1, Nota_C1sharp, Nota_D1sharp, Nota_E1, Nota_F1, Nota_C1sharp, Nota_D1sharp, Nota_E1, Nota_D1, Nota_C1sharp, Nota_A1,
  Nota_F1, Nota_A1, Nota_C1sharp, Nota_D1sharp, Nota_E1, Nota_F1, Nota_C1sharp, Nota_A1,
  Nota_F1, Nota_A1, Nota_C1sharp, Nota_D1sharp, Nota_E1, Nota_F1, Nota_G1sharp, Nota_G1, Nota_F1, Nota_D1sharp, Nota_D1, Nota_C1sharp, Nota_A1};
  float Note_Pjesma8[] = {
  392.00, 392.00, 440.00, 392.00, 523.25, 493.88, 440.00, 392.00, 659.26, 659.26, 587.33, 523.25, 493.88, 466.16, 523.25, 392.00,
  392.00, 440.00, 392.00, 587.33, 523.25, 493.88, 440.00, 392.00, 783.99, 783.99, 698.46, 659.26, 587.33, 523.25, 493.88, 440.00
};

int Trajanje_Pjesma8[] = {
  500, 500, 500, 500, 500, 500, 500, 1000, 500, 500, 500, 500, 500, 1000, 500, 1500,
  500, 500, 500, 500, 500, 500, 500, 1000, 500, 500, 500, 500, 500, 500, 500, 1000
};

float Note_Pjesma9[] = {
  392.00, 349.23, 329.63, 293.66, 293.66, 329.63, 349.23, 392.00, 392.00,
  349.23, 329.63, 349.23, 392.00, 392.00, 440.00, 392.00, 349.23, 329.63,
  293.66, 293.66, 329.63, 349.23, 392.00, 392.00, 349.23, 329.63, 349.23,
  293.66, 293.66, 293.66, 329.63, 349.23, 392.00, 349.23, 293.66
};

int Trajanje_Pjesma9[] = {
  400, 200, 200, 400, 200, 200, 400, 800, 400,
  400, 200, 200, 400, 200, 200, 400, 200, 200,
  400, 200, 200, 400, 200, 200, 400, 200, 200,
  400, 200, 200, 400, 200, 200, 400, 400
};

float Note_Pjesma10[] = {
  392.00, 440.00, 493.88, 523.25, 587.33, 659.26, 783.99,
  392.00, 440.00, 493.88, 523.25, 587.33, 659.26, 783.99,
  392.00, 440.00, 493.88, 523.25, 587.33, 659.26, 783.99,
  293.66, 329.63, 349.23, 392.00, 440.00, 493.88, 523.25,
  349.23, 392.00, 440.00, 466.16, 493.88, 523.25, 587.33,
  523.25, 587.33, 659.26, 587.33, 523.25, 493.88, 523.25,
  349.23, 392.00, 440.00, 466.16, 493.88, 523.25, 587.33,
  392.00, 440.00, 493.88, 523.25, 587.33, 659.26, 783.99,
  392.00, 440.00, 493.88, 523.25, 587.33, 659.26, 783.99,
  392.00, 440.00, 493.88, 523.25, 587.33, 659.26, 783.99,
  349.23, 392.00, 440.00, 493.88, 523.25, 587.33, 523.25,
  493.88, 523.25, 587.33, 659.26, 698.46, 783.99, 698.46,
  523.25, 587.33, 659.26, 698.46, 783.99, 880.00, 987.77,
  349.23, 392.00, 440.00, 493.88, 523.25, 587.33, 523.25,
  523.25, 587.33, 659.26, 698.46, 783.99, 880.00, 987.77,
  523.25, 587.33, 659.26, 698.46, 783.99, 880.00, 987.77,
  523.25, 587.33, 659.26, 698.46, 783.99, 880.00, 987.77
};

int Trajanje_Pjesma10[] = {
  375, 375, 375, 375, 375, 375, 750,
  375, 375, 375, 375, 375, 375, 750,
  375, 375, 375, 375, 375, 375, 750,
  375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 750,
  375, 375, 375, 375, 375, 375, 750,
  375, 375, 375, 375, 375, 375, 750,
  375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375,
  375, 375, 375, 375, 375, 375, 375, 
  375, 375, 375, 375, 375, 375, 375};

float Note_Pjesma11[] {
    Nota_G1, Nota_A1, Nota_B1, Nota_C1, Nota_D1, Nota_C1, Nota_B1,
    Nota_A1, Nota_G1, Nota_A1, Nota_B1, Nota_C1, Nota_B1, Nota_A1,
    Nota_D1, Nota_E1, Nota_F1, Nota_G1, Nota_A1, Nota_G1, Nota_F1,
    Nota_E1, Nota_D1, Nota_E1, Nota_F1, Nota_G1, Nota_F1, Nota_E1,
    Nota_A1, Nota_B1, Nota_C1sharp, Nota_D1sharp, Nota_E1, Nota_D1sharp, Nota_C1sharp,
    Nota_B1, Nota_A1, Nota_B1, Nota_C1sharp, Nota_D1sharp, Nota_C1sharp, Nota_B1,
    Nota_A1, Nota_G1, Nota_A1, Nota_B1, Nota_C1, Nota_B1, Nota_A1,
    Nota_D1, Nota_E1, Nota_F1, Nota_G1, Nota_A1, Nota_G1, Nota_F1,
    Nota_E1, Nota_D1, Nota_E1, Nota_F1, Nota_G1, Nota_F1, Nota_E1,
    Nota_G1, Nota_A1, Nota_B1, Nota_C1, Nota_D1, Nota_C1, Nota_B1,
    Nota_A1, Nota_G1, Nota_A1, Nota_B1, Nota_C1, Nota_B1, Nota_A1,
    Nota_D1, Nota_E1, Nota_F1, Nota_G1, Nota_A1, Nota_G1, Nota_F1,
    Nota_E1, Nota_D1, Nota_E1, Nota_F1, Nota_G1, Nota_F1, Nota_E1,
    Nota_F1, Nota_G1, Nota_A1, Nota_G1, Nota_F1, Nota_E1, Nota_D1,
    Nota_E1, Nota_D1, Nota_C1, Nota_B1, Nota_A1, Nota_B1, Nota_C1,
    Nota_D1, Nota_C1, Nota_B1, Nota_A1
};

int Trajanje_Pjesma11[] =  {
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 250, 250, 500, 250, 250,
    500, 250, 500, 250, 500, 250, 250,
    250, 250, 250, 250, 500, 500, 1000,
    500, 500, 1000, 500
}; 
float Note_Pjesma12[] = {
    Nota_E1, Nota_A1, Nota_B1, Nota_C1, Nota_B1, Nota_A1,
    Nota_G1, Nota_A1, Nota_B1, Nota_C1, Nota_D1, Nota_C1,
    Nota_G1, Nota_F1, Nota_E1, Nota_D1, Nota_C1, Nota_B1,
    Nota_E1, Nota_A1, Nota_B1, Nota_C1, Nota_B1, Nota_A1,
    Nota_G1, Nota_A1, Nota_B1, Nota_C1, Nota_D1, Nota_C1,
    Nota_G1, Nota_F1, Nota_E1, Nota_D1, Nota_C1, Nota_B1
};

int Trajanje_Pjesma12[] = { 
    400, 400, 400, 400, 400, 400,
    400, 400, 400, 400, 400, 400,
    400, 400, 400, 400, 400, 400,
    400, 400, 400, 400, 400, 400,
    400, 400, 400, 400, 400, 400,
    400, 400, 400, 400, 400, 400};
const int tempo_pjesme = 1;
float Za_odsvirati;
float Duty_cycle = 1;


Pjesme::Pjesme(PinName pin) : _pin(pin)
{
    _pin = 0;
}
void Pjesme::start(int n)
{
    switch (n)
    {
       case 1:
       for(int i=0; i<12; i++) 
       {
            int w = Trajanje_Pjesma1[i] * tempo_pjesme;
            if(Note_Pjesma1[i] == 0) {
            _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma1[i];
            Duty_cycle = 0.6;
            }

            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
             
        }
        break;
        case 2:
       for(int i=0; i<12; i++) 
       {
            int w = Trajanje_Pjesma2[i] * tempo_pjesme;
            if(Note_Pjesma2[i] == 0) {
             _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma2[i];
                Duty_cycle = 0.6;
            }

            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
            
        }
        break;
        case 3:
       for(int i=0; i<25; i++) 
       {
            int w = Trajanje_Pjesma3[i] * tempo_pjesme;
            if(Note_Pjesma3[i] == 0) {
            _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma3[i];
                Duty_cycle = 0.6;
            }

            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
            
        }
        break;
        case 4:
       for(int i=0; i<70; i++) 
       {
            int w = Trajanje_Pjesma4[i] * tempo_pjesme;
            if(Note_Pjesma4[i] == 0) {
             _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma4[i];
                Duty_cycle = 0.6;
            }

            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
            
        }
        break;
        case 5:
       for(int i=0; i<86; i++) 
       {
            printf("\n");
            printf("%d", i);
            int w = Trajanje_Pjesma5[i] * tempo_pjesme;
            if(Note_Pjesma5[i] == 0) {
             _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma5[i];
                Duty_cycle = 0.6;
            }

            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
            
        }
        break;
         case 6:
       for(int i=0; i<99; i++) 
       {
            printf("\n");
            printf("%d", i);
            int w = Trajanje_Pjesma6[i]/2;
            if(Note_Pjesma6[i] == 0) {
             _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma6[i];
                Duty_cycle = 0.6;
            }

            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
            
        }
        break;
        case 7:
       for(int i=0; i<50; i++) 
       {
            printf("\n");
            printf("%d", i);
            int w = Trajanje_Pjesma7[i];
            if(Note_Pjesma7[i] == 0) {
             _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma7[i];
                Duty_cycle = 0.6;
            }

            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
        }
        break;
                case 8:
       for(int i=0; i<32; i++) 
       {
            int w = Trajanje_Pjesma8[i];
            if(Note_Pjesma8[i] == 0) {
             _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma8[i];
                Duty_cycle = 0.6;
            }
            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
       }
        break;
                case 9:
       for(int i=0; i<35; i++) 
       {
            int w = Trajanje_Pjesma9[i];
            if(Note_Pjesma9[i] == 0) {
             _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma9[i];
                Duty_cycle = 0.6;
            }
            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
       }
        break;
                case 10:
       for(int i=0; i<119; i++) 
       {
            int w = Trajanje_Pjesma10[i];
            if(Note_Pjesma10[i] == 0) {
             _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma10[i];
                Duty_cycle = 0.6;
            }
            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
       }
        break;
                case 11:
       for(int i=0; i<109; i++) 
       {
            int w = Trajanje_Pjesma11[i];
            if(Note_Pjesma11[i] == 0) {
             _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma11[i];
                Duty_cycle = 0.6;
            }
            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
        }
        break;
                case 12:
       for(int i=0; i<36; i++) 
       {
            int w = Trajanje_Pjesma12[i];
            if(Note_Pjesma12[i] == 0) {
             _pin.write(0);
            } else {
             Za_odsvirati = 1 / Note_Pjesma12[i];
                Duty_cycle = 0.6;
            }
            _pin.period (Za_odsvirati);
            _pin.write(Duty_cycle);
            wait_us(w*1000);
        }
        break;
                case 13:
       for(int i=0; i<14; i++) 
       {
            _pin.period (1.0/523);
            _pin.write(0.6);
            wait_us(500000);    
        }
        break;
                case 14:
       for(int i=0; i<15; i++) 
       {
            _pin.period (1.0/523);
            _pin.write(0.6);
            wait_us(500000);
            
        }
        break;
                case 15:
       for(int i=0; i<16; i++) 
       {
            _pin.period (1.0/523);
            _pin.write(0.6);
            wait_us(500000);
        }
        break;                                                      
    }
_pin.period (1);
_pin.write(0);
wait_us(1000);
}

void Pjesme::stop(void)
{
    _pin.write(0);
}