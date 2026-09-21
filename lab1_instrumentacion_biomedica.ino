const int pwmPin = 2; 
const float frecuencia = 2.0; // Frecuencia de 2 Hz pedida en la guía

void setup() {
  pinMode(pwmPin, OUTPUT);
}

void loop() {
  // Usamos millis() en lugar de delay() para el temporizado
  unsigned long tiempoActual = millis(); 
  
  // Convertimos el tiempo a segundos
  float tiempoSegundos = tiempoActual / 1000.0; 
  
  // Generamos una onda senoidal (valores entre -1 y 1)
  float seno = sin(2 * PI * frecuencia * tiempoSegundos); 
  
  // Mapeamos el seno de [-1, 1] al rango PWM [0, 255]
  int valorPWM = (int)((seno + 1.0) * 127.5); 
  
  analogWrite(pwmPin, valorPWM);
}