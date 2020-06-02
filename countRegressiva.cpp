// 2 DS
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void setAllOff(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
}

void num0() {
  setAllOff();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
}
void num1(){
  setAllOff();
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  
}

void num2(){
  setAllOff();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void num3() {
  setAllOff();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
}

void num4() {
  setAllOff();
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

}
void num5() {
  setAllOff();
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

}
void num6() {
  setAllOff();
  digitalWrite(2, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
}

void num7() {
  setAllOff();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

}

void num8() {
  setAllOff();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
    
}
void num9() {
  setAllOff();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
}

void setDisplayDigit(int number){
  switch(number){
    case 1: 
    	num1(); 
    	break;
    case 2: 
    	num2(); 
    	break;
    case 3: 
    	num3(); 
    	break;
    case 4: 
    	num4(); 
    	break;
    case 5: 
    	num5(); 
    	break;
    case 6: 
    	num6(); 
    	break;
    case 7: 
    	num7(); 
    	break;
    case 8: 
    	num8(); 
    	break;
    case 9: 
    	num9(); 
    	break;
    case 0: 
    	num0(); 
    	break;
  
  }
}
void loop()
{
  int i = 0;
  for(i=9; i>=0 ;i--){
     setDisplayDigit(i);
     delay(1000);
  }
}
