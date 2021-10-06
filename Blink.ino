#define RedLed 10
#define YellowLed 11
#define GreenLed 12
int trigPin = 9; // назначаем имя для Pin8
int echoPin = 8; // назначаем имя для Pin9



void setup() { 
  Serial.begin (9600); // подключаем монитор порта
  pinMode(trigPin, OUTPUT); // назначаем trigPin (Pin8), как выход
  pinMode(echoPin, INPUT); // назначаем echoPin (Pin9), как вход
  pinMode(GreenLed, OUTPUT);
  pinMode(YellowLed, OUTPUT);
  pinMode(RedLed, OUTPUT);
} 
 
void loop() { 
  int duration, cm; // назначаем переменную "cm" и "duration" для показаний датчика
  digitalWrite(trigPin, LOW); // изначально датчик не посылает сигнал
  delayMicroseconds(2); // ставим задержку в 2 ммикросекунд

  digitalWrite(trigPin, HIGH); // посылаем сигнал
  delayMicroseconds(10); // ставим задержку в 10 микросекунд
  digitalWrite(trigPin, LOW); // выключаем сигнал

  duration = pulseIn(echoPin, HIGH); // включаем прием сигнала

  cm = duration / 58; // вычисляем расстояние в сантиметрах

  Serial.print(cm); // выводим расстояние в сантиметрах
  Serial.println(" cm");

  delay(500); // ставим паузу в 1 секунду
  if (cm >= 70)
{
  digitalWrite(GreenLed, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(GreenLed, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
 }
else if (70 < cm > 50)
{
 digitalWrite(YellowLed, HIGH);   // turn the LED on (HIGH is the voltage level)  
  delay(1000); 
   digitalWrite(YellowLed, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
 }
else
{
 digitalWrite(RedLed, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);  
  digitalWrite(RedLed, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second// do Thing A// do Thing B// do Thing C
}

}
