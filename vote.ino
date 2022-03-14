int i;
int count;
int b=10;
void setup()
{
  for(i=2;i<9;i++)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(b,INPUT);
  
}

void loop() {
  if(digitalRead(b)==HIGH)
  {
      count++;
      delay(500);
  }
      switch(count)
      {
        case 0: for(i=2;i<9;i++)
                {
                  if(i<8)?digitalWrite(i,LOW):digitalWrite(i,HIGH);
                }
         break;
        case 1: for(i=2;i<9;i++)
                {
                  if(i==3||i==4)?digitalWrite(i,LOW):digitalWrite(i,HIGH);           
                 }
        break;
         case 2: for(i=2;i<9;i++)
                 {
                   if(i==4||i==7)?digitalWrite(i,HIGH):digitalWrite(i,LOW);
                 }
          break;
         case 3:for(i=2;i<9;i++)
                {
                  if((i==6)||(i==7))?digitalWrite(i,HIGH):digitalWrite(i,LOW);
                }
          case 4:for(i=2;i<9;i++)
                 {
                   if(i==2||i==5||i==6)?digitalWrite(i,HIGH):digitalWrite(i,LOW);
                 }
          case 5:for(i=2;i<9;i++)
                 {
                  if(i==2||i==6)?digitalWrite(i,HIGH):digitalWrite(i,LOW);
                 }
           case 6:for(i=2;i<9;i++)
                  {
                    if(i==2)?digitalWrite(i,HIGH):digitalWrite(i,LOW);
                  }
           case 7:for(i=2;i<9;i++)
                  {
                    if(i<5)?digitalWrite(i,LOW):digitalWrite(i,HIGH);
                  }
             break;
             case 8:for(i=2;i<9;i++)
                    {
                      digitalWrite(i,LOW);
                    }
             break;
             case 9:for(i=2;i<9;i++)
                    {
                      if(i==6)?digitalWrite(i,HIGH):digitalWrite(i,LOW);
                    }
                    count = 0;
                    break;
              
              default: 
                count =0;
                break;
              }
    }
}
