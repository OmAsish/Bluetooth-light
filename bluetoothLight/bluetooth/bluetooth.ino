char t;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
 while(Serial.available())
 {
   t=Serial.read();
   Serial.println(t);
   delay(1000);
 } // put your main code here, to run repeatedly:
 
   if (t=='A'){
   digitalWrite(13,HIGH);
   }
   if (t=='C'){
   digitalWrite(12,HIGH);
   }
   if (t=='D'){
   digitalWrite(11,HIGH);
   }
   if (t=='E'){
   digitalWrite(10,HIGH);
   }
   if (t=='F'){
   digitalWrite(13,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(10,HIGH);
   }
   if (t=='B'){
   digitalWrite(13,LOW);
   }
   if (t=='G'){
   digitalWrite(12,0);
   }
   if (t=='H'){
   digitalWrite(11,0);
   }
   if (t=='I'){
   digitalWrite(10,0);
   }
   if (t=='J'){
   digitalWrite(13,0);
   digitalWrite(12,0);
   digitalWrite(11,0);
   digitalWrite(10,0);
   }
 
}
