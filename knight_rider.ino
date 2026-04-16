// C++ code
int leds[] ={4,5,6,7,8,9,10,11,12,13};
int size = 10;

void setup(){
  
  for( int i=0; i< size ;i++){
  	pinMode( leds[i], OUTPUT);
  }
}

void loop() {

  //Left to right
  for(int i=0; i< size; i++){
  	digitalWrite( leds[i] , HIGH);
  	delay(100);  //Wait for 100 millisecond(s)
  	digitalWrite( leds[i] , LOW);
  }
  
  //Right to left
  for(int i=size-2 ; i>0 ; i-- ){
  	digitalWrite( leds[i] , HIGH);
  	delay(100);  //Wait for 100 millisecond(s)
  	digitalWrite( leds[i] , LOW);
  }
  
}
