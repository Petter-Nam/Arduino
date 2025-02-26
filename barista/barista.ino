// 핀 번호 정의
const int redLED = 13;
const int yellowLED = 12;
const int greenLED = 11;

void setup() {
  // LED 핀을 출력으로 설정
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // 바리스타가 커피를 준비하는 모습 (빨간색 LED 점등)
  digitalWrite(redLED, HIGH);
  delay(2000); // 2초 대기
  
  // 손님이 들어오는 모습 (노란색 LED 점등)
  digitalWrite(yellowLED, HIGH);
  delay(3000); // 2초 대기
  // 커피가 완성된 모습 (초록색 LED 점등)
  digitalWrite(greenLED, HIGH);
  delay(2000); // 2초 대기

  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  while(1);
}


