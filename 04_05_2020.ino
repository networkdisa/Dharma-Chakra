/**************
Design by DISA - +94775522254
*************/


#include <FastLED.h>
#define NUM_LEDS 44 
#define DATA_PIN 6 
#define COLOR_ORDER GRB //BRG
CRGB leds[NUM_LEDS];


/****Arrays****/
//pattern1,pattern2,pattern3,pattern4,pattern7
byte halfRing[6][10] = {
    {3,4,14,13,15,24,35,34,36,43},
    {2,5,12,16,23,25,33,37,42,42},
    {1,6,11,17,22,26,32,38,41,41},
    {0,7,10,18,21,27,31,39,40,40},
    {9,8,19,20,28,30,29,29,29,29},
    {3,4,14,13,15,24,35,34,36,43}//for clear repetition
};

//pattern5,pattern6
byte straight1[6][14] = {
    {3,2,1,0,43,42,41,40,40,40,40,40,40,40},
    {4,5,6,7,36,37,38,39,39,39,39,39,39,39,},
    {14,13,12,11,10,9,8,35,34,33,32,31,30,29},
    {15,16,17,18,19,24,25,26,27,28,28,28,28,28},
    {23,22,21,20,20,20,20,20,20,20,20,20,20,20},
    {3,2,1,0,43,42,41,40}//for clear repetition
};

//pattern8
byte straight2[9][7] = {
    {3,2,1,0,0,0,0},
    {4,5,6,7,7,7,7},
    {14,13,12,11,10,9,8},
    {15,16,17,18,19,19,19},
    {23,22,21,20,20,20,20},
    {24,25,26,27,28,28,28},
    {35,34,33,32,31,30,29},
    {36,37,38,39,39,39,39},
    {43,42,41,40,40,40,40},
};
byte straightClear[2][4] = {
    {3,2,1,0},//left
    {43,42,41,40}//right
};

//
byte straight3[6][14] = {
    {23,22,21,20,20,20,20,20,20,20,20,20,20,20},
    {15,16,17,18,19,24,25,26,27,28,28,28,28,28},
    {14,13,12,11,10,9,8,35,34,33,32,31,30,29},
    {4,5,6,7,36,37,38,39,39,39,39,39,39,39,},
    {3,2,1,0,43,42,41,40,40,40,40,40,40,40},
    {23,22,21,20,20,20,20,20,20,20,20,20,20,20}//for clear repetition
};

//
byte triangle1[6][9]{
    {3,5,13,15,23,24,34,37,43},
    {2,6,12,16,22,25,33,38,42},
    {1,7,11,17,21,26,32,39,41},
    {18,20,27,27,27,27,27,27,27},
    {10,9,8,31,30,29,19,28,28},
    {3,5,13,15,23,24,34,37,43}//for clear repetition
};

//
byte ringCross[4][18] = {
    {3,4,14,13,15,24,35,34,36,43,9,8,19,20,28,30,29,29},
    {2,5,12,16,23,25,33,37,42,0,7,10,18,21,27,31,39,40},
    {1,6,11,17,22,26,32,38,41,41,41,41,41,41,41,41,41,41},
    {3,4,14,13,15,24,35,34,36,43,9,8,19,20,28,30,29,29},//for clear repetition  
};

//
byte inTOout[6][11] = {
    {3,4,14,13,19,20,28,43,36,35,34},
    {2,5,12,18,21,27,42,37,33,33,33},
    {1,6,11,17,22,26,41,38,32,32,32},
    {0,7,10,16,23,25,40,39,31,31,31},
    {9,8,15,24,30,29,29,29,29,29,29},
    {3,4,14,13,19,20,28,43,36,35,34}//for clear repetition  
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
  
    ////pattern1(160, 5); //half ring bottom to top -  single color -  fill effect (bottom to top)
    ////pattern2(160, 5); //half ring bottom to top -  single color - ring by ring
     ////pattern3(220, 5); //half ring bottom to top - step by step color - fill effect (bottom to top)
    ////pattern4(160, 5); //half ring bottom to top -  step by step color - ring by ring
    ////pattern12(160, 5); //half ring bottom to top -  multi color - fill effect (bottom to top)
    
    ////pattern5(220, 5); //half ring bottom to top center - step by step color - fill effect
    ////pattern6(160, 5); //half ring bottom to top center - step by step color - line by line
    ////pattern15(160, 5); //half ring bottom to top center - single color - line by line
    ////pattern16(160, 5); //half ring bottom to top center - single color - fill effect
    
    ////pattern7(220, 20); //half ring bottom to top -  step by step color - fill effect (top to bottom reversly)
    ////pattern23(220, 20); //half ring bottom to top -  multi color - fill effect (top to bottom reversly)
    
   ////pattern8(160, 5); //left to right - single color - line by line
    ////pattern9(160, 5); //left to right - single color - fill effect
    ////pattern10(160, 5); //left to right - multi color - line by line
    ////pattern11(160, 5); //left to right - multi color - fill effect
    
    ////pattern13(160, 5); //right to left - single color - line by line
    ////pattern14(160, 5); //right to left - single color - fill effect
    ////pattern18(160, 5); //right to left - multi color - line by line
    ////pattern19(160, 5); //right to left - multi color - fill effect
    
    ////pattern17(160, 5); //half ring top center to bottom - single color - line by line 
    ////pattern20(160, 5); //half ring top center to bottom - single color - fill effect 
    ////pattern21(160, 5); //half ring top center to bottom - step by step color - fill effect
    ////pattern22(160, 5); //half ring top center to bottom - step by step color - line by line 
     

    ////pattern24(160, 5); //triangle bottom to top - step by step color - fill effect
    ////pattern25(160, 5); //triangle bottom to top - step by step color - line by line

     ////pattern26(80, 5); //triangle bottom to top - single color - line by line 
     ////pattern27(75, 5); //triangle bottom to top - step by step color - line by line 


    ////pattern28(160, 5); //top and bottom meet in center - single color - line by line 
    ////pattern29(200, 5); //top and bottom meet in center - step by step color - line by line 

    ////pattern30(160, 5); //In to out - single color - line by line 
    ////pattern31(160, 5); //In to out - step by step color - line by line 
    ////pattern32(160, 5); //In to out - single color - fill effect 
    ////pattern33(160, 5); //In to out - multi color - fill effect 
    ////pattern34(160, 5); //In to out - step by step color - fill effect 
    
    //delay(5000);

    pattern34(160, 5);
    pattern2(160, 5);
    pattern5(220, 5);
    pattern25(160, 5);
    pattern30(160, 5);
    pattern20(160, 5);
    pattern15(160, 5);
    pattern23(220, 20);
    pattern31(160, 5);
    pattern11(160, 5);
    pattern28(160, 5);
    pattern14(160, 5);
    pattern10(160, 5);
    pattern7(220, 20);
    pattern4(160, 5);
    pattern16(160, 5);
    pattern8(160, 5);
    pattern32(160, 5);
    pattern29(200, 5);
    pattern24(160, 5);
    pattern9(160, 5);
    pattern18(160, 5);
    pattern3(220, 5);
    pattern6(160, 5);
    pattern21(160, 5);
    pattern27(75, 5);
    pattern33(160, 5);
    pattern26(80, 5);
    pattern19(160, 5);
    pattern13(160, 5);
    pattern12(160, 5);
    pattern1(160, 5);
    pattern17(160, 5);
    pattern22(160, 5);

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
    FastLED.clear();
    byte steadyRingNo = 4; //to remember what is lighted ring
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter           
        for(byte p = 0; p <= steadyRingNo; p++){
            for(byte j = 0; j < 10; j++){//j=halfRing array horizantal element counter
                byte ledNo = halfRing[p][j];
                leds[ledNo] = CRGB(colors[p][0], colors[p][1], colors[p][2]); 
                FastLED.show();
            }
        delay(paternSpd);
        //Serial.print(p); //Serial.print("------"); Serial.println(l); 
        } //Serial.println("*******"); 

        if(steadyRingNo == 0){ //to avoid (k = steadyRingNo - 1) goes minus
            FastLED.clear();
            delay(paternSpd);
            steadyRingNo = 5; 
        }else{
            //Serial.print("offRing =");Serial.println(offRing); 
                for(int k = steadyRingNo - 1; k >= 0; --k){ //when decrement the for loop we have to use "int"  
                    for(byte n = 0; n < 10; n++){
                        byte off_ledNo = halfRing[k][n];            
                        leds[off_ledNo] = CRGB(0, 0, 0);
                        FastLED.show();    
                    }
                    delay(paternSpd);  
                    //Serial.print(k); //Serial.print("------"); Serial.println(l);      
                }//Serial.println("-------"); 
        }
        steadyRingNo = steadyRingNo - 1; //to off rop to bottom rings
        //Serial.print("-------"); Serial.print(steadyRingNo); Serial.println("-------");    
    }
}

/***********Pattern-8***********/
void pattern8(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter    
        for(byte i = 0; i < 9; i++ ){
            FastLED.clear();
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]); 
            }
            FastLED.show();    
            delay(paternSpd);  
        }
    }
}

/***********Pattern-9***********/
void pattern9(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter    
        FastLED.clear();
        for(byte i = 0; i < 9; i++ ){
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]); 
            }
            FastLED.show();    
            delay(paternSpd);  
        }
    }
}

/***********Pattern-10***********/
void pattern10(byte paternSpd, byte repCount){
    byte colorChange = 0;
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter    
        for(byte i = 0; i < 9; i++ ){
            FastLED.clear();
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[colorChange][0], colors[colorChange][1], colors[colorChange][2]); 
                colorChange = colorChange + 1;
                if(colorChange == 4){
                    colorChange = 0;
                }
            }
            FastLED.show();    
            delay(paternSpd);  
        }
    }
}

/***********Pattern-11***********/
void pattern11(byte paternSpd, byte repCount){
    byte colorChange = 0;
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter
        FastLED.clear();    
        for(byte i = 0; i < 9; i++ ){
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[colorChange][0], colors[colorChange][1], colors[colorChange][2]); 
                colorChange = colorChange + 1;
                if(colorChange == 4){
                    colorChange = 0;
                }
            }
            FastLED.show();    
            delay(paternSpd);  
        }
    }
}

/***********Pattern-12***********/
void pattern12(byte paternSpd, byte repCount) {
    byte colorChange = 0;
    for(byte repeat = 0; repeat<repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 10; z++){
                byte ledNo = halfRing[i][z];
                if(i != 5){
                    leds[ledNo] = CRGB(colors[colorChange][0], colors[colorChange][1], colors[colorChange][2]);
                }else{
                    leds[ledNo] = CRGB(0, 0, 0);
                }
                colorChange = colorChange + 1;
                if(colorChange == 4){
                    colorChange = 0;
                }
            }
            FastLED.show();
            delay(paternSpd);
        }  
    }
}

/***********Pattern-13***********/
void pattern13(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter    
        for(int i = 8; i >= 0; --i ){
            FastLED.clear();
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]); 
            }
            FastLED.show();    
            delay(paternSpd);  
        }
    }
}

/***********Pattern-14***********/
void pattern14(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter 
        FastLED.clear();   
        for(int i = 8; i >= 0; --i ){
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]); 
            }
            FastLED.show();    
            delay(paternSpd);  
        }
    }
}

/***********Pattern-15***********/
void pattern15(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        for(byte i = 0; i < 6; i++){
          FastLED.clear();
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight1[i][z];
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

/***********Pattern-16***********/
void pattern16(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight1[i][z];
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

/***********Pattern-17***********/
void pattern17(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        for(byte i = 0; i < 6; i++){
          FastLED.clear();
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight3[i][z];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]);
            }
            FastLED.show();
            delay(paternSpd);
        }  
    }
}

/***********Pattern-18***********/
void pattern18(byte paternSpd, byte repCount){
    byte colorChange = 0;
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter    
        for(int i = 8; i >= 0; --i ){
            FastLED.clear();
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[colorChange][0], colors[colorChange][1], colors[colorChange][2]); 
                colorChange = colorChange + 1;
                if(colorChange == 4){
                    colorChange = 0;
                }
            }
            FastLED.show();    
            delay(paternSpd);  
        }
    }
}

/***********Pattern-19***********/
void pattern19(byte paternSpd, byte repCount){
    byte colorChange = 0;
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter 
        FastLED.clear();   
        for(int i = 8; i >= 0; --i ){
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[colorChange][0], colors[colorChange][1], colors[colorChange][2]); 
                colorChange = colorChange + 1;
                if(colorChange == 4){
                    colorChange = 0;
                }
            }
            FastLED.show();    
            delay(paternSpd);  
        }
    }
}

/***********Pattern-20***********/
void pattern20(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight3[i][z];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]);
            }
            FastLED.show();
            delay(paternSpd);
        }  
    }
}

/***********Pattern-21***********/
void pattern21(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight3[i][z];
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

/***********Pattern-22***********/
void pattern22(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        for(byte i = 0; i < 6; i++){
            FastLED.clear();
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight3[i][z];
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

/***********Pattern-23***********/
void pattern23(byte paternSpd, byte repCount){
    byte colorChange = 0;
    FastLED.clear();
    byte steadyRingNo = 4; //to remember what is lighted ring
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter           
        for(byte p = 0; p <= steadyRingNo; p++){
            for(byte j = 0; j < 10; j++){//j=halfRing array horizantal element counter
                byte ledNo = halfRing[p][j];
                leds[ledNo] = CRGB(colors[colorChange][0], colors[colorChange][1], colors[colorChange][2]);
                colorChange = colorChange + 1;
                if(colorChange == 4){
                    colorChange = 0;
                } 
                FastLED.show();
            }
        delay(paternSpd);
        //Serial.print(p); //Serial.print("------"); Serial.println(l); 
        } //Serial.println("*******"); 

        if(steadyRingNo == 0){ //to avoid (k = steadyRingNo - 1) goes minus
            FastLED.clear();
            delay(paternSpd);
            steadyRingNo = 5; 
        }else{
            //Serial.print("offRing =");Serial.println(offRing); 
                for(int k = steadyRingNo - 1; k >= 0; --k){ //when decrement the for loop we have to use "int"  
                    for(byte n = 0; n < 10; n++){
                        byte off_ledNo = halfRing[k][n];            
                        leds[off_ledNo] = CRGB(0, 0, 0);
                        FastLED.show();    
                    }
                    delay(paternSpd);  
                    //Serial.print(k); //Serial.print("------"); Serial.println(l);      
                }//Serial.println("-------"); 
        }
        steadyRingNo = steadyRingNo - 1; //to off rop to bottom rings
        //Serial.print("-------"); Serial.print(steadyRingNo); Serial.println("-------");    
    }
}

/***********Pattern-24***********/
void pattern24(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 9; z++){
                byte ledNo = triangle1[i][z];
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

/***********Pattern-25***********/
void pattern25(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat<repCount; repeat++){
        for(byte i = 0; i < 6; i++){
            FastLED.clear();
            for(byte z = 0; z < 9; z++){
                byte ledNo = triangle1[i][z];
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

/***********Pattern-26***********/
void pattern26(byte paternSpd, byte repCount){
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter    
        for(byte i = 0; i < 9; i++ ){//left to right - single color - line by line
            FastLED.clear();
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]); 
            }
            FastLED.show();    
            delay(paternSpd);  
        }

        for(int i = 8; i >= 0; --i ){ //right to left - single color - line by line
            FastLED.clear();
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]); 
            }
            FastLED.show();    
            delay(paternSpd);  
        }

        for(byte i = 0; i < 6; i++){ //bottom to top center - single color - line by line
          FastLED.clear();
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight1[i][z];
                if(i != 5){
                    leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]);
                }else{
                    leds[ledNo] = CRGB(0, 0, 0);
                }
            }
            FastLED.show();
            delay(paternSpd);
        }

        for(byte i = 0; i < 6; i++){ //top center to bottom - single color - line by line
            FastLED.clear();
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight3[i][z];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]);
            }
            FastLED.show();
            delay(paternSpd);
        }       
    }
}

/***********Pattern-27***********/
void pattern27(byte paternSpd, byte repCount){
    byte colorRepeat = 0;
    for(byte repeat = 0; repeat < repCount; repeat++){ //i=repition counter    
        for(byte i = 0; i < 9; i++ ){//left to right - single color - line by line
            FastLED.clear();
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[colorRepeat][0], colors[colorRepeat][1], colors[colorRepeat][2]); 
                
                colorRepeat = colorRepeat + 1;
                if(colorRepeat == 5){
                    colorRepeat = 0;
                }
            }
            FastLED.show(); 
            colorRepeat = 0;   
            delay(paternSpd);  
        }

        for(int i = 8; i >= 0; --i ){ //right to left - single color - line by line
            FastLED.clear();
            for(byte j = 0; j < 7; j++){
                byte ledNo = straight2[i][j];
                leds[ledNo] = CRGB(colors[colorRepeat][0], colors[colorRepeat][1], colors[colorRepeat][2]); 
                colorRepeat = colorRepeat + 1;
                if(colorRepeat == 5){
                    colorRepeat = 0;
                }
            }
            FastLED.show(); 
            colorRepeat = 0;      
            delay(paternSpd);  
        }

        for(byte i = 0; i < 6; i++){ //bottom to top center - single color - line by line
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

        for(byte i = 0; i < 6; i++){ //top center to bottom - single color - line by line
            FastLED.clear();
            for(byte z = 0; z < 14; z++){
                byte ledNo = straight3[i][z];
                leds[ledNo] = CRGB(colors[i][0], colors[i][1], colors[i][2]);
            }
            FastLED.show();
            delay(paternSpd);
        }       
    }
}

/***********Pattern-28***********/
void pattern28(byte paternSpd, byte repCount) {
    for(byte repeat = 0; repeat < repCount; repeat++){
        for(byte i = 0; i < 3; i++){
            FastLED.clear();
            for(byte z = 0; z < 18; z++){
                byte ledNo = ringCross[i][z];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]);
            }
            FastLED.show();
            delay(paternSpd);
        }  
    } 
}

/***********Pattern-29***********/
void pattern29(byte paternSpd, byte repCount) {
    for(byte repeat = 0; repeat < repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 4; i++){
            for(byte z = 0; z < 18; z++){
                byte ledNo = ringCross[i][z];;
                if(i != 3){
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

/***********Pattern-30***********/
void pattern30(byte paternSpd, byte repCount) {
    for(byte repeat = 0; repeat < repCount; repeat++){
        for(byte i = 0; i < 5; i++){
            FastLED.clear();
            for(byte z = 0; z < 11; z++){
                byte ledNo = inTOout[i][z];
                leds[ledNo] = CRGB(colors[repeat][0], colors[repeat][1], colors[repeat][2]);
            }
            FastLED.show();
            delay(paternSpd);
        }  
    } 
}

/***********Pattern-31***********/
void pattern31(byte paternSpd, byte repCount) {
    for(byte repeat = 0; repeat < repCount; repeat++){
        for(byte i = 0; i < 5; i++){
            FastLED.clear();
            for(byte z = 0; z < 11; z++){
                byte ledNo = inTOout[i][z];
                leds[ledNo] = CRGB(colors[i][0], colors[i][1], colors[i][2]);
            }
            FastLED.show();
            delay(paternSpd);
        }  
    } 
}

/***********Pattern-32***********/
void pattern32(byte paternSpd, byte repCount) {
    for(byte repeat = 0; repeat < repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 11; z++){
                byte ledNo = inTOout[i][z];
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

/***********Pattern-33***********/
void pattern33(byte paternSpd, byte repCount) {
    byte colorRepeat = 0;
    for(byte repeat = 0; repeat < repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 11; z++){
                byte ledNo = inTOout[i][z];
                if(i != 5){
                    leds[ledNo] = CRGB(colors[colorRepeat][0], colors[colorRepeat][1], colors[colorRepeat][2]);
                }else{
                    leds[ledNo] = CRGB(0, 0, 0);
                }
                colorRepeat = colorRepeat + 1;
                if(colorRepeat == 5){
                    colorRepeat = 0;
                }
            }
            FastLED.show();
            colorRepeat = 0;
            delay(paternSpd);
        }  
    } 
}

/***********Pattern-34***********/
void pattern34(byte paternSpd, byte repCount) {
    for(byte repeat = 0; repeat < repCount; repeat++){
        FastLED.clear();
        for(byte i = 0; i < 6; i++){
            for(byte z = 0; z < 11; z++){
                byte ledNo = inTOout[i][z];
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



/******************************************************************/
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
