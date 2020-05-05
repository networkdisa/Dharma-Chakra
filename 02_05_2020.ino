#include <FastLED.h>
#define NUM_LEDS 44 
#define DATA_PIN 6 
#define COLOR_ORDER GRB //BRG
CRGB leds[NUM_LEDS];


/****Arrays****/
//pattern1,pattern2
byte halfRing[6][10] = {
    {3,4,14,13,15,24,35,34,36,43},
    {2,5,12,16,23,25,33,37,42,42},
    {1,6,11,17,22,26,32,38,41,41},
    {0,7,10,18,21,27,31,39,40,40},
    {9,8,19,20,28,30,29,29,29,29},
    {3,4,14,13,15,24,35,34,36,43}//for clear repetition
};

//pattern5
byte straight1[6][14] = {
    {3,2,1,0,43,42,41,40,40,40,40,40,40,40},
    {4,5,6,7,36,37,38,39,39,39,39,39,39,39,},
    {14,13,12,11,10,9,8,35,34,33,32,31,30,29},
    {15,16,17,18,19,24,25,26,27,28,28,28,28,28},
    {23,22,21,20,20,20,20,20,20,20,20,20,20,20},
    {3,2,1,0,43,42,41,40}//for clear repetition
};


/****Colors****/
byte colors[5][3] = {
    {0, 0, 255}, //blue
    {255, 255, 0}, //yellow
    {255, 0, 0},//red
    {255, 255, 255}, //white
    {255, 152, 0} //Vivid Gamboge
};

void setup() {
    //Serial.begin(9600);
    FastLED.addLeds<WS2812, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);  //Set Pixel LED type
    LEDS.setBrightness(40);  //set initial brighness max:255

}

void loop() {
  
  pattern1(160, 5);
  pattern2(160, 5);
  pattern3(220, 5);
  pattern4(160, 5);
  pattern5(220, 5);
  pattern6(160, 5);
  //pattern7(220, 5);
  //CylonBounce(0xff, 0, 0, 4, 10, 50);
  

}

/****Patterns****/
/***********Pattern-1***********/
void pattern1(byte paternSpd, byte repCount) {
    for(byte repeat = 0; repeat<repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 10; z++){
                byte ledNo = halfRing[i][z];
                if(i != 5){
                    leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]);
                }else{
                    leds[ledNo] = CRGB(0, 0, 0);
                }
            }
            FastLED.show();
            delay(paternSpd);
        }  
    }
}
/***********Pattern-2***********/
void pattern2(byte paternSpd, byte repCount) {
    for(byte repeat = 0; repeat < repCount; repeat++){
        for(byte i = 0; i < 6; i++){
            FastLED.clear();
            for(byte z = 0; z < 10; z++){
                byte ledNo = halfRing[i][z];
                if(i != 5){
                    leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]);
                }else{
                    leds[ledNo] = CRGB(0, 0, 0);
                }
            }
            FastLED.show();
            delay(paternSpd);
        }  
    } 
}

/***********Pattern-3***********/
void pattern3(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 10; z++){
                byte ledNo = halfRing[i][z];
                if(i != 5){
                    leds[ledNo] = CRGB(colors[i][0], colors[i][1], colors[i][2]);
                }else{
                    leds[ledNo] = CRGB(0, 0, 0);
                }
                FastLED.show();
            }
            //FastLED.show();
            delay(paternSpd);
        }  
    }
}

/***********Pattern-4***********/
void pattern4(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        for(byte i = 0; i < 6; i++){
            FastLED.clear();
            for(byte z = 0; z < 10; z++){
                byte ledNo = halfRing[i][z];
                if(i != 5){
                    leds[ledNo] = CRGB(colors[i][0], colors[i][1], colors[i][2]);
                }else{
                    leds[ledNo] = CRGB(0, 0, 0);
                }
            }
            FastLED.show();
            delay(paternSpd);
        }  
    }
}


/***********Pattern-5***********/
void pattern5(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
      FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight1[i][z];
                if(i != 5){
                    leds[ledNo] = CRGB(colors[i][0], colors[i][1], colors[i][2]);
                }else{
                    leds[ledNo] = CRGB(0, 0, 0);
                }
            }
            FastLED.show();
            delay(paternSpd);
        }  
    }
}

/***********Pattern-6***********/
void pattern6(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        for(byte i = 0; i < 6; i++){
          FastLED.clear();
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight1[i][z];
                if(i != 5){
                    leds[ledNo] = CRGB(colors[i][0], colors[i][1], colors[i][2]);
                }else{
                    leds[ledNo] = CRGB(0, 0, 0);
                }
            }
            FastLED.show();
            delay(paternSpd);
        }  
    }
}

/***********Pattern-7***********/
void pattern7(byte paternSpd, byte repCount){
  
}

void showStrip() {
   FastLED.show();
}

void setPixel(int Pixel, byte red, byte green, byte blue) {
   /*leds[Pixel].r = red;
   leds[Pixel].g = green;
   leds[Pixel].b = blue;*/
   leds[Pixel] = CRGB(red, green, blue);
}


void setAll(byte red, byte green, byte blue) {
  for(int i = 0; i < NUM_LEDS; i++ ) {
    //setPixel(i, red, green, blue);
    //leds[i] = CRGB(red, green, blue);
  }
  FastLED.show();
}

/********************************************************
void CylonBounce(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay){

  for(int i = 0; i < NUM_LEDS-EyeSize-2; i++) {
    setAll(0,0,0);
    setPixel(i, red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      setPixel(i+j, red, green, blue);
    }
    setPixel(i+EyeSize+1, red/10, green/10, blue/10);
    showStrip();
    delay(SpeedDelay);
  }

  delay(ReturnDelay);

  for(int i = NUM_LEDS-EyeSize-2; i > 0; i--) {
    setAll(0,0,0);
    setPixel(i, red/10, green/10, blue/10);
    for(int j = 1; j <= EyeSize; j++) {
      setPixel(i+j, red, green, blue);
    }
    setPixel(i+EyeSize+1, red/10, green/10, blue/10);
    showStrip();
    delay(SpeedDelay);
  }
 
  delay(ReturnDelay);
}******************************************************************/




/*for (int i = 0; i < rep; i++) {
    FastLED.clear(); 
    
    leds[3] = CRGB(255, 0, 0);
    leds[4] = CRGB(255, 0, 0);
    leds[14] = CRGB(255, 0, 0);
    leds[13] = CRGB(255, 0, 0);
    leds[15] = CRGB(255, 0, 0);
    leds[24] = CRGB(255, 0, 0);
    leds[35] = CRGB(255, 0, 0);
    leds[34] = CRGB(255, 0, 0);
    leds[36] = CRGB(255, 0, 0);
    leds[43] = CRGB(255, 0, 0);
    FastLED.show();
    delay(sp);
    
    leds[2] = CRGB(255, 0, 0);
    leds[5] = CRGB(255, 0, 0);
    leds[12] = CRGB(255, 0, 0);
    leds[16] = CRGB(255, 0, 0);
    leds[23] = CRGB(255, 0, 0);
    leds[25] = CRGB(255, 0, 0);
    leds[33] = CRGB(255, 0, 0);
    leds[37] = CRGB(255, 0, 0);
    leds[42] = CRGB(255, 0, 0);
    FastLED.show();
    delay(sp);
    
    leds[1] = CRGB(255, 0, 0);
    leds[6] = CRGB(255, 0, 0);
    leds[11] = CRGB(255, 0, 0);
    leds[17] = CRGB(255, 0, 0);
    leds[22] = CRGB(255, 0, 0);
    leds[26] = CRGB(255, 0, 0);
    leds[32] = CRGB(255, 0, 0);
    leds[38] = CRGB(255, 0, 0);
    leds[41] = CRGB(255, 0, 0);
    FastLED.show();
    delay(sp);
    
    leds[0] = CRGB(255, 0, 0);
    leds[7] = CRGB(255, 0, 0);
    leds[10] = CRGB(255, 0, 0);
    leds[18] = CRGB(255, 0, 0);
    leds[21] = CRGB(255, 0, 0);
    leds[27] = CRGB(255, 0, 0);
    leds[31] = CRGB(255, 0, 0);
    leds[39] = CRGB(255, 0, 0);
    leds[40] = CRGB(255, 0, 0);
    FastLED.show();
    delay(sp);
    
    leds[9] = CRGB(255, 0, 0);
    leds[8] = CRGB(255, 0, 0);
    leds[19] = CRGB(255, 0, 0);
    leds[20] = CRGB(255, 0, 0);
    leds[28] = CRGB(255, 0, 0);
    leds[30] = CRGB(255, 0, 0);
    leds[29] = CRGB(255, 0, 0);
    FastLED.show();
    delay(sp);

    leds[3] = CRGB(0, 0, 0);
    leds[4] = CRGB(0, 0, 0);
    leds[14] = CRGB(0, 0, 0);
    leds[13] = CRGB(0, 0, 0);
    leds[15] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    FastLED.show();
    delay(sp);
    
  }*/
