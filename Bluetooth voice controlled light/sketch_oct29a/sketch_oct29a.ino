String text;
void setup() {

pinMode(13,OUTPUT);
Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
 while(Serial.available())
 {
  delay(10);
  char c=Serial.read();
  text += c;
 } 
 delay(1000);
 Serial.println(text);
  if(text.length()>0)
  {
    if(text=="light on")
    {
     digitalWrite(13,HIGH);
    }
    if(text=="of")
    {
     digitalWrite(13,LOW);
    }
    text="";
  }
 // put your main code here, to run repeatedly:

}
