
// definir pin de saída para o LED
const int ledPin = 13;

// definir código Morse para cada letra
char letters[] = {
  ".-",   // A
  "-...", // B
  "-.-.", // C
  "-..",  // D
  ".",    // E
  "..-.", // F
  "--.",  // G
  "....", // H
  "..",   // I
  ".---", // J
  "-.-",  // K
  ".-..", // L
  "--",   // M
  "-.",   // N
  "---",  // O
  ".--.", // P
  "--.-", // Q
  ".-.",  // R
  "...",  // S
  "-",    // T
  "..-",  // U
  "...-", // V
  ".--",  // W
  "-..-", // X
  "-.--", // Y
  "--.."  // Z
};

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // obter mensagem a ser transmitida em código Morse
  char message = "HELLO WORLD";

    int tamArray = sizeof(message)/ sizeof(char);
  // transmitir cada letra da mensagem
  for (int i = 0; i < tamArray; i++) {
    char letter = toupper(message[i]);

    // ignorar espaços em branco
    if (letter == ' ') {
      delay(7 * dotLength);
      continue;
    }

    // transmitir código Morse para a letra
    char code = letters[letter - 'A'];
    for (int j = 0; j < code.length(); j++) {
      if (code[j] == '.') {
        digitalWrite(ledPin, HIGH);
        delay(dotLength);
        digitalWrite(ledPin, LOW);
        delay(dotLength);
      } else if (code[j] == '-') {
        digitalWrite(ledPin, HIGH);
        delay(3 * dotLength);
        digitalWrite(ledPin, LOW);
        delay(dotLength);
      }
    }

    // pausa entre letras
    delay(3 * dotLength);
  }
}