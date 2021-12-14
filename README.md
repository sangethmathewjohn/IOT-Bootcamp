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
