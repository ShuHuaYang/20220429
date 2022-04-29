// C++ code
//
byte btn;

byte pins[7]={13, 12, 11, 10, 9, 8, 7};
byte show[16][7]={
  {0, 0, 0, 0, 0, 0, 1},//0
  {1, 0, 0, 1, 1, 1, 1},
  {0, 0, 1, 0, 0, 1, 0},
  {0, 0, 0, 0, 1, 1, 0},
  {1, 0, 0, 1, 1, 0, 0},
  {0, 1, 0, 0, 1, 0, 0},
  {1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0},
  {0, 0, 0, 1, 0, 0, 0},//a
  {1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 0, 0, 1, 0},
  {1, 0, 0, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {0, 1, 1, 1, 0, 0, 0},
};

void setup()
{
  pinMode(btn,INPUT_PULLUP);
  for (byte i = 0; i < 7; ++i) {
   pinMode(pins[i], OUTPUT); 
  }
}

void loop()
{
 btn = digitalRead(2);
  if(btn==HIGH){
    for (int i=7;i<=13;i++){
    digitalWrite(i, LOW);
     }
  }
  else{
  for(byte i = 0; i < 16; i++){
    for(byte j = 0; j < 7; j++){
      digitalWrite(pins[j], show[i][j]);
    	}
    delay(1000);
  	}
  }
}