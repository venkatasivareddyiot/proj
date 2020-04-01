int led=2;
int button=A0;
int ledState=HIGH;
int buttoncurrent;
int buttonPrevious=LOW;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}
void loop()
{
 buttoncurrent=digitalRead(button);
   if(buttoncurrent==HIGH && buttonPrevious==LOW)
   {
    if(ledState==HIGH)
    {
    ledState=LOW;
   }
   else
   {
    ledState=HIGH;
   }
   }
   digitalWrite(led,ledState);
   buttonPrevious=buttoncurrent;
}
