const unsigned int led[12] = { 8, 7, 6, 5, 4, 3, 2, 18, 17, 16, 15, 14 };


void setup() {

  for(int x=0;x<=11;x++) pinMode(led[x], OUTPUT);
  for(int x=0;x<=11;x++) digitalWrite(led[x], 0);
}


void loop() {
  
  for(int x=0;x<=11;x++) { 
    digitalWrite(led[x], 1);
    delay(200);
    digitalWrite(led[x], 0);
  }
}