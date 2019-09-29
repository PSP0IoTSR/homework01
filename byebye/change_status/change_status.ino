
int i = 0;

void setup() {
  
  pinMode(2, INPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  
  change();
  i_status();
 
}

// when press the button , change i = 0,1,2 
void change(){
  if(HIGH == digitalRead(2) ){
       i = (i+1)%3;          
  }
  delay(200);
}

// get i status
int i_status(){
  Serial.println(i); 
  return i;  
}
