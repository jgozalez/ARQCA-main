/*!
\file   Blink.c
\date   2020-11-13
\author Fulvio Vivas <fulvio.vivas@unicauca.edu.co>
\brief  Example blink.

\par Copyright
Information contained herein is proprietary to and constitutes valuable
confidential trade secrets of unicauca, and
is subject to restrictions on use and disclosure.

\par
Copyright (c) unicauca 2020. All rights reserved.

\par
The copyright notices above do not evidence any actual or
intended publication of this material.
******************************************************************************
*/
#include <xc.h>
#include <pic18f4550.h>  /*Header file PIC18f4550 definitions*/
#include "fuses.h"
#include "pinout.h"

void secuencial_Efecto1(void);
void secuencial_Efecto2(void);
void secuencial_Efecto3(void);
void secuencial_Efecto4(void);
void secuencial_Efecto5(void);
void secuencial_Efecto6(void);

unsigned char efecto = 1;
unsigned long velocidad = 1;

int main(void) {
    TRISD = 0;
    LATD = 0;
    TRISBbits.TRISB7 = 1;
    TRISBbits.TRISB6 = 1;
    INTCON2bits.RBPU = 0;
    while (1) {
        //efecto
        if (PORTBbits.RB7 =! 1) {
            __delay_ms(50);
            efecto = efecto + 1;
            if(efecto == 7){efecto=1;}
        }
        switch (efecto) {
            case 1: secuencial_Efecto1();
                break;
            case 2: secuencial_Efecto2();
                break;
            case 3: secuencial_Efecto3();
                break;
            case 4: secuencial_Efecto4();
                break;
            case 5: secuencial_Efecto5();
                break;
            case 6: secuencial_Efecto6();
                break;        
        }
    }
    return 1;
}

void secuencial_Efecto1(void) {
        LATD = 0xAA;
        if(velocidad==1){__delay_ms(50);LATD=0x00;__delay_ms(50);}
        else if(velocidad==2){__delay_ms(100);LATD=0x00;__delay_ms(100);}
        else if(velocidad==3){__delay_ms(200);LATD=0x00;__delay_ms(200);}
        else if(velocidad==4){__delay_ms(250);LATD=0x00;__delay_ms(250);}
        else if(velocidad==5){__delay_ms(400);LATD=0x00;__delay_ms(400);}
        else if(velocidad==6){__delay_ms(500);LATD=0x00;__delay_ms(500);}
        //velocidad
        if (!PORTBbits.RB6) {
            __delay_ms(50);
            velocidad = velocidad + 1;
            if(velocidad == 7){velocidad = 1;}
        }
    }

void secuencial_Efecto2(void) {
        LATD = 0xFF;
        if(velocidad==1){__delay_ms(50);LATD=0x00;__delay_ms(50);}
        else if(velocidad==2){__delay_ms(100);LATD=0x00;__delay_ms(100);}
        else if(velocidad==3){__delay_ms(200);LATD=0x00;__delay_ms(200);}
        else if(velocidad==4){__delay_ms(250);LATD=0x00;__delay_ms(250);}
        else if(velocidad==5){__delay_ms(400);LATD=0x00;__delay_ms(400);}
        else if(velocidad==6){__delay_ms(500);LATD=0x00;__delay_ms(500);}
        //velocidad
        if (!PORTBbits.RB6) {
            __delay_ms(50);
            velocidad = velocidad + 1;
            if(velocidad == 7){velocidad = 1;}
        }
    }

void secuencial_Efecto3(void) {
        LATD = 0x66;
        if(velocidad==1){__delay_ms(50);LATD=0x00;__delay_ms(50);}
        else if(velocidad==2){__delay_ms(100);LATD=0x00;__delay_ms(100);}
        else if(velocidad==3){__delay_ms(200);LATD=0x00;__delay_ms(200);}
        else if(velocidad==4){__delay_ms(250);LATD=0x00;__delay_ms(250);}
        else if(velocidad==5){__delay_ms(400);LATD=0x00;__delay_ms(400);}
        else if(velocidad==6){__delay_ms(500);LATD=0x00;__delay_ms(500);}
        //velocidad
        if (!PORTBbits.RB6) {
            __delay_ms(50);
            velocidad = velocidad + 1;
            if(velocidad == 7){velocidad = 1;}
        }
    }

void secuencial_Efecto4(void) {
        LATD = 0x99;
        if(velocidad==1){__delay_ms(50);LATD=0x00;__delay_ms(50);}
        else if(velocidad==2){__delay_ms(100);LATD=0x00;__delay_ms(100);}
        else if(velocidad==3){__delay_ms(200);LATD=0x00;__delay_ms(200);}
        else if(velocidad==4){__delay_ms(250);LATD=0x00;__delay_ms(250);}
        else if(velocidad==5){__delay_ms(400);LATD=0x00;__delay_ms(400);}
        else if(velocidad==6){__delay_ms(500);LATD=0x00;__delay_ms(500);}
        //velocidad
        if (!PORTBbits.RB6) {
            __delay_ms(50);
            velocidad = velocidad + 1;
            if(velocidad == 7){velocidad = 1;}
        }
    }

void secuencial_Efecto5(void) {
        LATD = 0x55;
        if(velocidad==1){__delay_ms(50);LATD=0x00;__delay_ms(50);}
        else if(velocidad==2){__delay_ms(100);LATD=0x00;__delay_ms(100);}
        else if(velocidad==3){__delay_ms(200);LATD=0x00;__delay_ms(200);}
        else if(velocidad==4){__delay_ms(250);LATD=0x00;__delay_ms(250);}
        else if(velocidad==5){__delay_ms(400);LATD=0x00;__delay_ms(400);}
        else if(velocidad==6){__delay_ms(500);LATD=0x00;__delay_ms(500);}
        //velocidad
        if (!PORTBbits.RB6) {
            __delay_ms(50);
            velocidad = velocidad + 1;
            if(velocidad == 7){velocidad = 1;}
        }
    }

void secuencial_Efecto6(void) {
    volatile unsigned int m=0,n=0;
    for (int i = 0; i < 5; i++) {
        LATD = m+n;
        m += (1 << i) & 0x0f;
        n += (1 >> (7-i)) & 0xf0;
        if(velocidad==1){__delay_ms(50);LATD=0x00;__delay_ms(50);}
        else if(velocidad==2){__delay_ms(100);LATD=0x00;__delay_ms(100);}
        else if(velocidad==3){__delay_ms(200);LATD=0x00;__delay_ms(200);}
        else if(velocidad==4){__delay_ms(250);LATD=0x00;__delay_ms(250);}
        else if(velocidad==5){__delay_ms(400);LATD=0x00;__delay_ms(400);}
        else if(velocidad==6){__delay_ms(500);LATD=0x00;__delay_ms(500);}
        //velocidad
        if (!PORTBbits.RB6) {
            __delay_ms(50);
            velocidad = velocidad + 1;
            if(velocidad == 7){velocidad = 1;}
        }
    }
}