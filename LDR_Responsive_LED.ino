void setup() {
  Serial.begin(9600); // initialize serial communication at 9600 BPS
  pinMode(5,OUTPUT);
}
void loop() {

  int ldr = analogRead(A0); // read the input on analog pin 0
  Serial.println(ldr);   // print out the value you read
  digitalWrite(5,1024-ldr);

}
