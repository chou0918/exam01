// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{
    //uLCD.cls(); 
    //uLCD.reset();
    //uLCD.background_color(0xFFFFFF);
    // basic printf demo = 16 by 18 characters on screen

    uLCD.color(BLUE);
    uLCD.printf("\n107000119\n"); //Default Green on black text

    //uLCD.printf("\n  Starting Demo...");
    //uLCD.locate( 1,  1);
    //uLCD.line( 1,  1 ,  2,  2,  0xFFFFFF);
   // uLCD.triangle(90, 80, 20, 20, 10, 80, 0x008000);
   // uLCD.triangle(80, 30, 20, 20, 60, 85, 0x008000);
    uLCD.text_char('----',9,8,GREEN);
    uLCD.text_char('----',10,8,GREEN);
    uLCD.text_char('----',8,10,GREEN);
    uLCD.text_char('----',8,9,GREEN);
    uLCD.text_char('----',11,10,GREEN);
    uLCD.text_char('----',10,11,GREEN);
    uLCD.text_char('----',9,11,GREEN);
    uLCD.text_char('----',11,9,GREEN);
    uLCD.text_width(4); //4X size text

    uLCD.text_height(4);

  /* uLCD.color(GREEN);

    for (int i=30; i>=0; --i) {

        uLCD.locate(1,2);

        uLCD.printf("%2D",i);

        wait(1);

    }*/

}