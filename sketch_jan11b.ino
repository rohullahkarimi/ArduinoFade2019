int led = 6;
int brightness = 0;
int fadeAmount = 5;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available()) {
    
    char serIn = Serial.read();
    
    if(serIn=='A') {
        brightness = brightness + fadeAmount;
        if (brightness > 255) {
          brightness=255;
        }
       
    
    }
      if(serIn=='B') {
        brightness = brightness + -fadeAmount;
        if (brightness < 0) {
          brightness=0;
        }
        
      
    }
    analogWrite(led, brightness);
    Serial.println(brightness);
    
  }
                    
}
