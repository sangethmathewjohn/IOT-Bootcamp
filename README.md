# IOT-Bootcamp
Bootcamp for IOT usin arduino and nodemcu.

### Blinking LED

    void setup(){
      pinMode(4,OUTPUT); //pin D2 of NOdemcu
      }
    void loop(){
      digitalWrite(4,HIGH);
      delay(1000);
      digitalWrite(4,LOW);
      delay(1000);
      }

### LDR data_serial-data

    void setup() {
      Serial.begin(9600);   // initialize serial communication at 9600 BPS
    }
    void loop() {

      int ldr = analogRead(A0);   // read the input on analog pin 0
      Serial.println(ldr);   // print out the value you read

    }
