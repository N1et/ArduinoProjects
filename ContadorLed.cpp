
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
    
  }
}

#define DISPLAY1 2
#define DISPLAY2 6
#define DISPLAY3 10

void loop(){
  int i = 5; // min 
  int x = 9; // secs
  int y = 9; // msecs
  
  setDisplay(DISPLAY1, 6);
  setDisplay(DISPLAY2, 0);
  setDisplay(DISPLAY3, 0);
  delay(1000);
  for(; i >= 0 ; i--){
    setDisplay(DISPLAY1, i);
    
    for(x=9; x >= 0; x--){
    	setDisplay(DISPLAY2, x);
        
      	for(y=9; y >= 0 ; y--) {
           setDisplay(DISPLAY3, y);
           delay(500);
      }  
    }   
  }
 
    digitalWrite(5, HIGH);
    delay(10000);
    
  
}
