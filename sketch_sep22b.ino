String str = "Nyan";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 

}

void loop() {
  str = str + "!"; 
  Serial.println (str);
  delay(500);
  // put your main code here, to run repeatedly:

}
