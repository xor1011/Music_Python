#include "music.h"
//int softToneCreate(int pin)
//void softToneWrite(int pin, int freq)



int main(){
    wiringPiSetup();
    //int f;
//struct Music m;
//    m.pin=23; 
    softToneCreate(23);
    //printf("Enter tone in herz: ");
    //scanf("%d", &f);
    for (int x=0; x<=0; x++){
    for (int i=4; i<=7; i++){
       playNote(BNote[i],EIGHTH, 23);
        playNote(ANote[i],EIGHTH, 23);
        playNote(CNote[i],WHOLE, 23); 
        playNote(GNote[i+1],HALF, 23);
        playNote(ENote[i+1],HALF, 23);
        playNote(DNote[i+1],HALF, 23);
        playNote(CNote[i-1],EIGHTH, 23);
        playNote(ANote[i-1],EIGHTH, 23);
        playNote(BNote[i-1],WHOLE, 23);
    }}
        playNote(CNote[5],QUARTER, 23);
        playNote(ENote[5],EIGHTH, 23);
        playNote(FNote[5],EIGHTH, 23);
        playNote(DNote[5],QUARTER, 23);
        playNote(FNote[5],EIGHTH, 23);
        playNote(ANote[5],EIGHTH, 23);
        playNote(ENote[5],QUARTER, 23);
        playNote(DNote[5],EIGHTH, 23);
        playNote(ENote[5],HALF, 23);
        playNote(ENote[6], QUARTER, 23);
        playNote(ENote[6], QUARTER, 23);
        playNote(ENote[6], HALF, 23);
        playNote(FNote[6], EIGHTH, 23);
        playNote(GNote[6], EIGHTH, 23);
        playNote(ENote[6], EIGHTH, 23);
        playNote(CNote[6], QUARTER, 23);
        playNote(CNote[6], QUARTER, 23);
        playNote(FNote[6], HALF, 23);
        playNote(FNote[6], EIGHTH, 23);
        playNote(GNote[6], EIGHTH, 23);
        playNote(FNote[6], EIGHTH, 23);
        playNote(DNote[6], HALF, 23);
        playNote(FNote[5], EIGHTH, 23);
        playNote(GNote[5], EIGHTH, 23);
        playNote(FNote[5], EIGHTH, 23);
        playNote(DNote[5], HALF, 23);
        playNote(FNote[5], EIGHTH, 23);
        playNote(GNote[5], EIGHTH, 23);
        playNote(FNote[5], EIGHTH, 23);
        playNote(DNote[5], HALF, 23);
        playNote(FNote[5], EIGHTH, 23);
        playNote(GNote[5], EIGHTH, 23);
        playNote(FNote[5], EIGHTH, 23);
        playNote(ANote[5], HALF, 23);
    return 0;
}
