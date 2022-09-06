void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 //loop for first name
 char name[8]="armaan";
 
 for(int i;i<8;i++)
 {
    //A
    if(name[i]=='a')
    {
    Dot();
    Dash(); //morse code for armaan
    }
   //R     //morse for second name chetal can be made by making changed in the program 
   if(name[i]=='r')
   {
    Dot();
    Dash();
    Dot();
   }
   //M
    if(name[i]=='m')
    {
    Dash();
    Dash();
    }
      //A
    if(name[i]=='a')
    {
     Dot();
     Dash();
    }
   //A
   if(name[i]=='a')
   {
   Dot();
   Dash();
   }
    //N
    if(name[i]=='n')
    {
    Dash();
    Dot();
    }
 }    
  
 
}
void Dot() //method for dot in morse code
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void Dash() //method for line in morse code
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
