
#include "sjcoding.h"

const int BUZZER = 10;

char note[] = "ggaaggeggeed ggaaggegedec";
char beat[] = "11111121111221111112111122";
int note_length = strlen(note);
int tempo = 300;

int melody(char note) {
  switch (note) {
    case 'c': return NOTE_C4;
    case 'd': return NOTE_D4;
    case 'e': return NOTE_E4;
    case 'f': return NOTE_F4;
    case 'g': return NOTE_G4;
    case 'a': return NOTE_A4;
    case 'b': return NOTE_B4;
    case 'C': return NOTE_C5;
    default: return 0;
  }
}

void setup() {
  for (int i = 0; i < note_length; i++) {
 
    if (note[i] != ' ') {             //소리
      int frequency = melody(note[i]);
      tone(BUZZER, frequency);
    }

    int noteDuration = tempo * (beat[i] - '0'); //박지
    delay(noteDuration);

    noTone(BUZZER);

    int pauseDuration = 100;
    delay(pauseDuration);
  }
}

void loop() {}