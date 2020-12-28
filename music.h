#include <wiringPi.h>
#include <softTone.h>
//#include <stdio.h>
//int softToneCreate(int pin)
//void softToneWrite(int pin, int freq)

/*make arrays of each note A-G with members assigned to
 frequencies for Octaves 4-8
 */
#define WHOLE       1
#define HALF        2
#define QUARTER     4
#define EIGHTH      8
#define SIXTEENTH   16
int ANote[]={27,
        55,
        110,
        220,
        440,
        880,
        1760,
        3520,
        7040
    };
    int BNote[]={31,
        62,
        123,
        247,
        494,
        988,
        1976,
        3951,
        7902
    };
    int CNote[]={17,
        33,
        65,
        131,
        262,
        523,
        1047,
        2093,
        4186
    };
    int DNote[]={19,
37,
73,
147,
294,
587,
1175,
2349,
4699
};
int ENote[]={21,
41,
82,
165,
330,
659,
1319,
2637,
5274,
};
int FNote[]={22,
44,
87,
175,
349,
698,
1397,
2794,
5588,
};
int GNote[]={25,
49,
98,
196,
392,
784,
1568,
3136,
6272,
};
  void playNote(int n, int d, int p);
  void playNote(int n, int d, int p){ //usage 8 for eights and 4 for quarters etc 2 for halves
        //struct Music s;
        
        softToneWrite(p, n);
        float t=(1.0f/(float)d)*1000.0f;
       // printf("%f", t);
        delay(t);
        softToneWrite(p, 0);
        delay(50);
    }