int Red=11;
int Umber=12;
int Green=13;


void setup(){pinMode(Red,OUTPUT);
             pinMode(Umber,OUTPUT);
             pinMode(Green,OUTPUT);
             }


void loop(){
  for(int j=1;j<=5;j=j+1)
          { digitalWrite(Red,HIGH);
           delay(4000);
           digitalWrite(Red,LOW);
           delay(4000);}
           
       for (int j=2;j>=6;j=j-1)     
       {digitalWrite(Umber,HIGH);
           delay(3000);
           digitalWrite(Umber,LOW);
           delay(3000);}

        for (int j=4;j<=9;j=j+3)   
        { digitalWrite(Green,HIGH);
            delay(2000);
            digitalWrite(Green,LOW);
            delay(2000);}
            
           }
  
