
int nilai = 25;

void setup() {
  Serial.begin(115200);

  Serial.println("=== KONVERSI BILANGAN ===");

  Serial.print("Desimal      : ");
  Serial.println(nilai);

  Serial.print("Biner        : ");
  Serial.println(nilai, BIN);

  Serial.print("Heksadesimal : ");
  Serial.println(nilai, HEX);

  Serial.print("Oktal        : ");
  Serial.println(nilai, OCT);
}

void loop() {
  
}
