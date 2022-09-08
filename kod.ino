#include <Servo.h>

#define donjiPin 3
#define srednjiPin 5
#define gornjiPin 6

Servo donji;
Servo srednji;
Servo gornji;

int donjiUgao = 0;
int srednjiUgao = 130;
int gornjiUgao = 0;

int ugaoMinDonji = 0;
int ugaoMaxDonji = 180;
int ugaoMinSrednji = 80;
int ugaoMaxSrednji = 130;
int ugaoMinGornji = 30;
int ugaoMaxGornji = 120;

int promena = 3;

void setup() {
  Serial.begin(9600);
  Serial.println("a - pomera se levo za 10 stepeni (donji motor)");
  Serial.println("b - pomera se desno za 10 stepeni (donji motor)");
  Serial.println("c - pomera se gore za 10 stepeni (srednji motor)");
  Serial.println("d - pomera se dole za 10 stepeni (srednji motor)");
  Serial.println("e - savija se za 10 stepeni (gornji motor)");
  Serial.println("f - ispruzi se za 10 stepeni (gornji motor)");
  donji.attach(donjiPin);
  srednji.attach(srednjiPin);
  gornji.attach(gornjiPin);
  donji.write(donjiUgao);
  srednji.write(srednjiUgao);
  gornji.write(gornjiUgao);
}

void loop() {
  while (Serial.available() == 0)
  {
    
  }
  char poruka = Serial.read();
  if (poruka == 'a')
  {
    if (donjiUgao + promena <= ugaoMaxDonji)
    {
      donjiUgao += promena;
      donji.write(donjiUgao);
    }
  }
  else if (poruka == 'b')
  {
    if (donjiUgao - promena >= ugaoMinDonji)
    {
      donjiUgao -= promena;
      donji.write(donjiUgao); 
    }
  }
  else if (poruka == 'c')
  {
    if (srednjiUgao + promena <= ugaoMaxSrednji)
    {
      srednjiUgao += promena;
      srednji.write(srednjiUgao);
    }
  }
  else if (poruka == 'd')
  {
    if (srednjiUgao - promena >= ugaoMinSrednji)
    {
      srednjiUgao -= promena;
      srednji.write(srednjiUgao); 
    }
  }
  else if (poruka == 'e')
  {
    if (gornjiUgao + promena <= ugaoMaxGornji)
    {
      gornjiUgao += promena;
      gornji.write(gornjiUgao);
    }
  }
  else if (poruka == 'f')
  {
    if (gornjiUgao - promena >= ugaoMinGornji)
    {
      gornjiUgao -= promena;
      gornji.write(gornjiUgao); 
    }
  }
}
