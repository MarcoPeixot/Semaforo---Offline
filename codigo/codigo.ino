// Definindo os pinos para LEDs e Buzzer
const int ledVerde = 13;
const int ledAmarelo = 12;
const int ledVermelho = 25;
const int buzzer = 19;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT); // Configura o buzzer como saída
}

// Função para ligar o LED e controlar o buzzer
void ligaLeds(int led, int tempo, bool buzzerAtivo) {
  digitalWrite(led, HIGH);
  digitalWrite(buzzer, buzzerAtivo ? HIGH : LOW); // Liga o buzzer se buzzerAtivo for true
  delay(tempo);
  digitalWrite(led, LOW);
  digitalWrite(buzzer, LOW); // Desliga o buzzer ao final
}

void loop() {
  // Sinal Vermelho (6 segundos, buzzer desligado)
  ligaLeds(ledVermelho, 6000, false);

  // Sinal Amarelo (2 segundos, buzzer desligado)
  ligaLeds(ledAmarelo, 2000, false);

  // Sinal Verde (2 segundos, buzzer ligado)
  ligaLeds(ledVerde, 2000, true);

  // Tempo adicional no Verde (2 segundos, buzzer ligado)
  ligaLeds(ledVerde, 2000, true);

  // Sinal Amarelo (2 segundos, buzzer desligado)
  ligaLeds(ledAmarelo, 2000, false);
}
