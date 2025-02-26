// C++ code
//
#define LED1 11
#define LED2 12
#define LED3 13
unsigned char led_pin[] = {11,12,13};
void setup()
{
 	for (unsigned char i = 0; i < 3; i++) pinMode(led_pin[i], OUTPUT);
  for (unsigned char j = 0; j < 3; j++) digitalWrite(led_pin[j], LOW);
}

void loop()
{
  for (unsigned char i = 0; i < 3; i++) 
  {
    digitalWrite(led_pin[i], HIGH);
    delay(1000);
    digitalWrite(led_pin[i], LOW);
  }
}