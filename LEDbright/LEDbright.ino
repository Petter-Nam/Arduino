const unsigned char LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // for (unsigned char t_high = 0; t_high <= 10; t_high++) {
  //   digitalWrite(LED, HIGH);
  //   delay(t_high);
  //   digitalWrite(LED, LOW);
  //   delay(10-t_high);
  // }

  for (unsigned char t_high = 10; t_high >= 1; t_high--) {
    int cnt = 0;
    Serial.println(t_high);
    while (true)
    {
      digitalWrite(LED, HIGH);
      delay(t_high);
      digitalWrite(LED, LOW);
      delay(10-t_high);
      cnt++;
      if (cnt == 10) break;
    }
  }
}