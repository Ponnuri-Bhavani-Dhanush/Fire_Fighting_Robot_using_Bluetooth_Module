 
#include<Servo.h>
#include<SoftwareSerial.h>
Servo box;
SoftwareSerial BT(0, 1); //TX, RX respetively
String readdata;
int pos = 0;
int p;
int motor1 = 10;
int motor2 = 11;
int sensor1 = A0;
int sensor2 = A1;
int sensor3 = A5;
int buzzer = 7;
void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(buzzer, INPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  //pinMode(5,OUTPUT);
  //pinMode(6,OUTPUT);
  box.attach(12);
  // put your setup code here, to run once
}

void loop() {
  int value1 = digitalRead(sensor1);
  int value2 = digitalRead(sensor2);
  int value3 = digitalRead(sensor3);      // put your main code here, to run repeatedly:
  Serial.println(value1);
  Serial.println(value2);
  Serial.println(value3);
  if (value1 == 0 || value2 == 0 || value3 == 0) {
    tone(buzzer, 1000);
  }
  else {
    noTone(buzzer);
  }
  while (BT.available())
  {
  delay(10); 
  char c = BT.read();
  readdata += c; 
  } 
  if (readdata.length() > 0) {
    Serial.println(readdata);

  if(readdata == "FORWARD")
  {
    Serial.println("FORWARD");
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(100);
    if(readdata == "SRIGHT")
    {
    box.write(180);
    Serial.println("SRIGHT");
    }
    else if(readdata == "SLEFT")
    {
    box.write(0);
    Serial.println("SLEFT");
    }
    if(readdata == "SPRAYON")
    {
      digitalWrite(motor2, HIGH);
      Serial.println("SPRAYON");
    }
    else if(readdata == "SPRAYOFF")
    {
      digitalWrite(motor2, LOW);
      Serial.println("SPRAYOFF");
    }
  }

  else if(readdata == "BACK")
  {
    Serial.println("BACKWARD");
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(100);
    if(readdata == "SRIGHT")
    {
    box.write(180);
    Serial.println("SRIGHT");
    }
    else if(readdata == "SLEFT")
    {
    box.write(0);
    Serial.println("SLEFT");
    }
    if(readdata == "SPRAYON")
    {
      digitalWrite(motor2, HIGH);
      Serial.println("SPRAYON");
    }
    else if(readdata == "SPRAYOFF")
    {
      digitalWrite(motor2, LOW);
      Serial.println("SPRAYOFF");
    }
  }
  else if (readdata == "LEFT")
  {
    Serial.println("LEFT");
    digitalWrite (3,HIGH);
    digitalWrite (4,LOW);
    delay (500);
    digitalWrite (4,HIGH);
    if(readdata == "SRIGHT")
    {
    box.write(180);
    Serial.println("SRIGHT");
    }
    else if(readdata == "SLEFT")
    {
    box.write(0);
    Serial.println("SLEFT");
    }
    if(readdata == "SPRAYON")
    {
      digitalWrite(motor2, HIGH);
      Serial.println("SPRAYON");
    }
    else if(readdata == "SPRAYOFF")
    {
      digitalWrite(motor2, LOW);
      Serial.println("SPRAYOFF");
    }
   
  }

 else if ( readdata == "RIGHT")
 {
   Serial.println("RIGHT");
   digitalWrite (3, LOW);
   digitalWrite (4, HIGH); 
   delay (500);
   digitalWrite (3,HIGH);
   if(readdata == "SRIGHT")
    {
    box.write(180);
    Serial.println("SRIGHT");
    }
    else if(readdata == "SLEFT")
    {
    box.write(0);
    Serial.println("SLEFT");
    }
   if(readdata == "SPRAYON")
    {
      digitalWrite(motor2, HIGH);
      Serial.println("SPRAYON");
    }
    else if(readdata == "SPRAYOFF")
    {
      digitalWrite(motor2, LOW);
      Serial.println("SPRAYOFF");
    }
 }

 else if (readdata == "STOP")
 {
   Serial.println("STOP");
   digitalWrite (3, LOW);
   digitalWrite (4, LOW);
   delay (100);
   if(readdata == "SRIGHT")
    {
    box.write(180);
    Serial.println("SRIGHT");
    }
    else if(readdata == "SLEFT")
    {
    box.write(0);
    Serial.println("SLEFT");
    }
   if(readdata == "SPRAYON")
    {
      digitalWrite(motor2, HIGH);
      Serial.println("SPRAYON");
    }
    else if(readdata == "SPRAYOFF")
    {
       digitalWrite(motor2, LOW);
       Serial.println("SPRAYOFF");
    }
 }

readdata="";
}
}
