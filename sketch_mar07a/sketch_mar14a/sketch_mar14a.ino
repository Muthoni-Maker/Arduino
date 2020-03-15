int Red=11;






void setup() {
     pinMode(Red,OUTPUT);

}

void loop() {
         for(int j=300;j<=400;j=j+1)
         {digitalWrite(Red,HIGH);
         delay(3000);
         digitalWrite(Red,LOW);
         delay(3000);
          }

}
