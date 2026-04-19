#include <IRrecv.h>
#include <IRremoteESP8266.h>
#include <IRutils.h>

const uint16_t RECV_PIN = 36;   
const uint8_t LED_PIN = 12; 
int speed = 50;     // LED pin

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(115200);
  motor_setup();

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);   

  irrecv.enableIRIn();         
}

void loop() {
  speed = constrain(speed, 0, 100);
  if (irrecv.decode(&results)) {

    uint32_t irCode = results.value;   // Get IR code
    Serial.println(irCode, HEX);       // Print code in HEX

    if (irCode == 0xFF18E7) {
      forward(speed);     
      Serial.println("forward");
    }
    else if (irCode == 0xFF4AB5) {
      backward(speed);      
      Serial.println("backward");
    }
    else if (irCode == 0xFF5AA5) {
      turnRight(speed);
      Serial.println("Right");
    }
    else if (irCode == 0xFF10EF) {
      turnLeft(speed);
      Serial.println("Left");
    }
    else if (irCode == 0xFFB04F){
      speed += 5;
      Serial.println("increase");
    }
    else if (irCode == 0xFF6897){
      speed -= 5;
      Serial.println("decrease");
    }
    else if (irCode == 0xFF38C7){
      stop();
    }
    irrecv.resume(); 
  }
}

//Up.Code      : 0xFF18E7 (32 Bits)
//Down.Code      : 0xFF4AB5 (32 Bits)
//Right.Code      : 0xFF5AA5 (32 Bits)
//Left.Code      : 0xFF10EF (32 Bits)
//#. 0xFFB04F
//*. 0xFF6897
//OK. 0xFF38C7





