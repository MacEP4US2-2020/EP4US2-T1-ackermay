void setup(){ 
  //define GPIO pins as outputs
  pinMode(5, OUTPUT); 
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  // define function prototype
  void myFunction();
}

void loop() {
  // loop will loop forever
  for ( int i=0 ; i<4 ; i++ ){
    //runs function 4 times
    ledFunction();
    }
    // makes the program hold
    while(true){}
}

void ledFunction(){
  // does part one assuming typo "6,7 and 7" is meant to be "6,7 and 8"
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(5, LOW); 
  digitalWrite(18, HIGH);
  delay(2000);
  digitalWrite(18, LOW);
  digitalWrite(19, HIGH); 
  delay(2000); 
  digitalWrite(19, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(18, HIGH);
  digitalWrite(19, HIGH);
  delay(1000); 
  digitalWrite(5, LOW);
  digitalWrite(18, LOW);
  digitalWrite(19, LOW);
}
