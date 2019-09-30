#ifndef NOTES_H
#define NOTES_H

#define C0  18
#define CS0 17
#define D0  18
#define DS0 19
#define E0  21
#define F0  22
#define FS0 23
#define G0  25
#define GS0 26
#define A0  28
#define AS0 29
#define C1  33
#define CS1 35
#define D1  37
#define DS1 39
#define E1  41
#define F1  44
#define FS1 46
#define G1  49
#define GS1 52
#define A1  55
#define AS1 58
#define C2  65
#define CS2 69
#define D2  73
#define DS2 78
#define E2  82
#define F2  87
#define FS2 93
#define G2  98
#define GS2 104
#define A2  110
#define as2 117
#define B2  123
#define C3  131
#define CS3 139
#define D3  147
#define DS3 156
#define E3  165
#define F3  175
#define FS3 185
#define G3  196
#define GS3 208
#define A3  220
#define AS3 233
#define B3  247
#define C4  262
#define CS4 277
#define D4  294
#define DS4 311
#define E4  330
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  494
#define C5  523
#define CS5 554
#define D5  587
#define DS5 622
#define E5  659
#define F5  698
#define FS5 740
#define G5  784
#define GS5 831
#define A5  880
#define AS5 932
#define B5  988
#define C6  1047
#define CS6 1109
#define D6  1175
#define DS6 1245
#define E6  1319
#define F6  1397
#define FS6 1480
#define G6  1568
#define GS6 1661
#define A6  1760
#define AS6 1865
#define B6  1976
#define C7  2093
#define CS7 2217
#define D7  2349
#define DS7 2489
#define E7  2637
#define F7  2794
#define FS7 2960
#define G7  3136
#define GS7 3322
#define A7  3520
#define AS7 3729
#define B7  3951
#define C8  4186
#define CS8 4435
#define D8  4699
#define DS8 4978
#define E8  5274
#define F8  5588
#define FS8 5920
#define G8  6272
#define GS8 6645
#define A8  7040
#define AS8 7459
#define B8  7902

class notes{
    public:
        notes(int p);
        void control(int n);
        void play(int notelist[], int);
//        void Star();
//        void Bee();
//        void Melody();
        int de = 100;
        int index = 0;
        int state = -1;
    
	  private:
      int pin;
      int starnote[54]={C5, C5, G5, G5, A5, A5, G5, 0, F5, F5, E5, E5, D5, D5, C5, 0,
                          G5, G5, F5, F5, E5, E5, D5, 0, G5, G5, F5, F5, E5, E5, D5, 0,
                          C5, C5, G5, G5, A5, A5, G5, 0, F5, F5, E5, E5, D5, D5, C5, 0};
        int sizeofStar = sizeof(starnote)/sizeof(int);

        int starduration[54]={4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                            4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                            4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

        int beenote[64]={G5, E5, E5, 0, F5, D5, D5, 0, C5, D5, E5, F5, G5, G5, G5, 0,
                         G5, E5, E5, 0, F5, D5, D5, 0, C5, E5, G5, G5, E5, 0, 0, 0,
                         D5, D5, D5, D5, D5, E5, F5, 0, E5, E5, E5, E5, E5, F5, G5, 0,
                         G5, E5, E5, 0, F5, D5, D5, 0, C5, E5, G5, G5, C5, 0, 0, 0};
        int sizeofBee = sizeof(beenote)/sizeof(int);
         
        int beeduration[64]={4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                             4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                             4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                             4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

        int Melodynote[98]={E4, E4, E4, C4, E4, G4, G3,  
                C4, G3, E3, A3, B3, AS3, A3, G3, 
                E4, G4, A4, F4, G4, E4, C4, D4, B3,
                C4, G3, E3, A3, B3, AS3, A3, G3, 
                E4, G4, A4, F4, G4, E4, C4, D4, B3,
                G4, FS4, E4, DS4, E4, GS3, A3, C4, A3, C4, 
                D4, G4, FS4, E4, DS4, E4, C5, C5, C5,
                G4, FS4, E4, DS4, E4, GS3, A3, 
                C4, A3, C4, D4, DS4, D4, C4,
                C4, C4, C4, C4, D4, E4, C4, A3, 
                G3, C4, C4, C4, C4, D4, E4,
                C4, C4, C4, C4, D4, E4, C4, A3, G3};
        int sizeofMelody = sizeof(Melodynote)/sizeof(int);
         
        int Melodyduration[98]={8,4,4,8,4,2,2,
                3,3,3,4,4,8,4,8,
                8,8,4,8,4,3,8,8,3,
                3,3,3,4,4,8,4,8,
                8,8,4,8,4,3,8,8,2,
                8,8,8,4,4,8,8,4,8,8,
                3,8,8,8,4,4,4,8,2,
                8,8,8,4,4,8,8,
                4,8,8,3,3,3,1,
                8,4,4,8,4,8,4,8,
                2,8,4,4,8,4,1,
                8,4,4,8,4,8,4,8,2};

};

#endif
