// =================================================================
// Praktikum Mikrokontroler: ESP32 + LED RGB Common Anode
// Kaki Terpanjang (Common Anode) dihubungkan ke pin 3V3 (+3.3V)
// Logika Active LOW: LOW (0V) = LED Menyala, HIGH (3.3V) = LED Mati
// =================================================================

#define PIN_RED   15  // Kaki Katode Merah (R) + Resistor 220 Ohm
#define PIN_GREEN 2   // Kaki Katode Hijau (G) + Resistor 220 Ohm
#define PIN_BLUE  4   // Kaki Katode Biru  (B) + Resistor 220 Ohm

void setup() {
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);

  // Matikan semua warna terlebih dahulu (set ke HIGH / 3.3V)
  digitalWrite(PIN_RED, HIGH);
  digitalWrite(PIN_GREEN, HIGH);
  digitalWrite(PIN_BLUE, HIGH);
}

void loop() {
  // 1. Nyalakan Warna MERAH (Red = LOW, lainnya HIGH)
  digitalWrite(PIN_RED, LOW);
  digitalWrite(PIN_GREEN, HIGH);
  digitalWrite(PIN_BLUE, HIGH);
  delay(1000); // Tunggu 1 detik

  // 2. Nyalakan Warna HIJAU (Green = LOW, lainnya HIGH)
  digitalWrite(PIN_RED, HIGH);
  digitalWrite(PIN_GREEN, LOW);
  digitalWrite(PIN_BLUE, HIGH);
  delay(1000); // Tunggu 1 detik

  // 3. Nyalakan Warna BIRU (Blue = LOW, lainnya HIGH)
  digitalWrite(PIN_RED, HIGH);
  digitalWrite(PIN_GREEN, HIGH);
  digitalWrite(PIN_BLUE, LOW);
  delay(1000); // Tunggu 1 detik
}
