int signal = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup(){
 // display three
 pinMode(10, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(13, OUTPUT);
  
 // display two
 pinMode(9, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(6, OUTPUT);
 
  // idk
 pinMode(5, OUTPUT);
 
  // display one
 pinMode(4, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(2, OUTPUT);
 pinMode(1, OUTPUT);
  
 pinMode(14, OUTPUT);
 pinMode(15, OUTPUT);
 
}

void setDisplay(int port, int n) { // 2
  digitalWrite(port, LOW); // 0 
  digitalWrite(port+1, LOW); // 0
  digitalWrite(port+2, LOW); // 0
  digitalWrite(port+3, LOW);
  switch(n) {
   	case 1:
    	digitalWrite(port, HIGH);
    	break;
    case 2:
    	digitalWrite(port+1, HIGH);
    	break;
    case 3:
    	digitalWrite(port, HIGH);
    	digitalWrite(port+1, HIGH);
    	break;
    case 4:
    	digitalWrite(port+2, HIGH);
    	break;
    case 5:
    	digitalWrite(port, HIGH);
    	digitalWrite(port+2, HIGH);
    	break;
    case 6:
     	digitalWrite(port+1, HIGH);
    	digitalWrite(port+2, HIGH);
        break;
    case 7:
    	digitalWrite(port, HIGH);
    	digitalWrite(port+1, HIGH);
    	digitalWrite(port+2, HIGH);
    	break;
    case 8:
    	digitalWrite(port+3, HIGH);
    	break;
    case 9:
    	digitalWrite(port, HIGH);
    	digitalWrite(port+3, HIGH);
    	break;
    
  }
}

#define DISPLAY1 1
#define DISPLAY2 6
#define DISPLAY3 10

void ConvertToDisplay(int numb){
  int i = numb;
  
  setDisplay(DISPLAY1, 0);
  if(numb >= 100){
    for(; i >= 10; i/=10);
    setDisplay(DISPLAY1, i);
  }  
    i=numb/10;
    i= i % 10;
    setDisplay(DISPLAY2, i);
    
    i=numb%10;
    setDisplay(DISPLAY3, i);

}


void loop(){
 signal = 0.01723 * readUltrasonicDistance(14, 15);
 
 ConvertToDisplay(signal);
 delay(1000);
}
  
