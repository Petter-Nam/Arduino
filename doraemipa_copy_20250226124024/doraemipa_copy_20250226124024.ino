const int BUZZER = 10;
const int melody[8] = {262, 294, 330, 349, 393, 440, 494, 523};
void setup() {  
  for (int cnt = 0; cnt <= 7; cnt++) {  
    tone(BUZZER, melody[cnt]);  
    delay(1000);
  }
  noTone(BUZZER);
}

void loop() {
  
}