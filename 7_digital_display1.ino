//ins
const int Bud11 = 11;
const int Bud2 = 10;
const int Bud3 = 9;
const int Bud4 = 8;
//outs
  const int power1A = 3;
  const int power2B = 2;
  const int power3C = 4;
  const int power4D = 5;
  const int power5E = 6;
  const int power6F = 1;
  const int power7G = 7;
int button1 =1;
int button2 =1;
int button3 =1;
int button4 =1;
//0-	0000
//1-	0001
//2-	0010
//3-	0011
//4-	0100
//5-	0101
//6-	0110
//7-	0111
//8-	1000
//9-	1001
//10-	1010
//11-	1011
//12-	1100
//13-	1101
//14-	1110
//15-	1111

void setup()
{ for(int i = 1; i < 8; i++){ pinMode(i,OUTPUT);
  }
 
  for(int i = 8; i <= 11; i++){ pinMode(i,INPUT_PULLUP);
 }
}

void loop()
{ 
button1 = digitalRead(Bud11);
button2 = digitalRead(Bud2);
button3 = digitalRead(Bud3);
button4 = digitalRead(Bud4);
//refix if, else section
  //get the void parts done come back to this section not working
  if(button1 ==0 && button2 ==0 && button3 ==0 && button4 ==0)
  {
    d0();
  } 
  if(button1 ==0 && button2 ==0 && button3 ==0 && button4 ==1){
    d1();
  } 
  if(button1 ==0 && button2 ==0 && button3 ==1 && button4 ==0){
    d2();
  } 
  if(button1 ==0 && button2 ==0 && button3 ==1 && button4 ==1){
    d3();
  } 
  if(button1 ==0 && button2 ==1 && button3 ==0 && button4 ==0){
    d4();
  } 
  if(button1 ==0 && button2 ==1 && button3 ==0 && button4 ==1){
    d5();
  } 
  if(button1 ==0 && button2 ==1 && button3 ==1 && button4 ==0){
    d6();
  } 
  if(button1 ==0 && button2 ==1 && button3 ==1 && button4 ==1){
    d7();
  }
  if(button1 ==1 && button2 ==0 && button3 ==0 && button4 ==0){
    d8();
  }
  if(button1 ==1 && button2 ==0 && button3 ==0 && button4 ==1){
    d9();
  }
  if(button1 ==1 && button2 ==0 && button3 ==1 && button4 ==0){
    dA();
  }
  if(button1 ==1 && button2 ==0 && button3 ==1 && button4 ==1){
    dB();
  } 
  if(button1 ==1 && button2 ==1 && button3 ==0 && button4 ==0){
    dC();
  } 
  if(button1 ==1 && button2 ==1 && button3 ==0 && button4 ==1){
    dD();
  } 
  if(button1 ==1 && button2 ==1 && button3 ==1 && button4 ==0){
    dE();
  } 
  if(button1 ==1 && button2 ==1 && button3 ==1 && button4 ==1){
    dF();
  } 
  else{
    dnone();
      }
  }
 

  void dnone(){
    digitalWrite(power1A,LOW);
     digitalWrite(power2B,LOW);
    digitalWrite(power3C,LOW);
     digitalWrite(power4D,LOW);
  digitalWrite(power5E,LOW);
  digitalWrite(power6F,LOW);
  digitalWrite(power7G,LOW);
  }
  void d0(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,HIGH);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,HIGH);
  digitalWrite(power5E,HIGH);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,LOW);
  }
void d1(){
    digitalWrite(power1A,LOW);
     digitalWrite(power2B,HIGH);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,LOW);
  digitalWrite(power5E,LOW);
  digitalWrite(power6F,LOW);
  digitalWrite(power7G,LOW);
  }
void d2(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,HIGH);
    digitalWrite(power3C,LOW);
     digitalWrite(power4D,HIGH);
  digitalWrite(power5E,HIGH);
  digitalWrite(power6F,LOW);
  digitalWrite(power7G,HIGH);
  }
void d3(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,HIGH);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,HIGH);
  digitalWrite(power5E,LOW);
  digitalWrite(power6F,LOW);
  digitalWrite(power7G,HIGH);
  }
void d4(){
    digitalWrite(power1A,LOW);
     digitalWrite(power2B,HIGH);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,LOW);
  digitalWrite(power5E,LOW);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,HIGH);
  }
void d5(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,LOW);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,HIGH);
  digitalWrite(power5E,LOW);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,HIGH);
  }
void d6(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,LOW);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,HIGH);
  digitalWrite(power5E,HIGH);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,HIGH);
  }
void d7(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,HIGH);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,LOW);
  digitalWrite(power5E,LOW);
  digitalWrite(power6F,LOW);
  digitalWrite(power7G,LOW);
  }
void d8(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,HIGH);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,HIGH);
  digitalWrite(power5E,HIGH);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,HIGH);
  }
void d9(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,HIGH);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,LOW);
  digitalWrite(power5E,LOW);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,HIGH);
  }
void dA(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,HIGH);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,LOW);
  digitalWrite(power5E,HIGH);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,HIGH);
  }

void dB(){
    digitalWrite(power1A,LOW);
     digitalWrite(power2B,LOW);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,HIGH);
  digitalWrite(power5E,HIGH);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,HIGH);
  }
void dC(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,LOW);
    digitalWrite(power3C,LOW);
     digitalWrite(power4D,HIGH);
  digitalWrite(power5E,HIGH);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,LOW);
  }

void dD(){
    digitalWrite(power1A,LOW);
     digitalWrite(power2B,HIGH);
    digitalWrite(power3C,HIGH);
     digitalWrite(power4D,HIGH);
  digitalWrite(power5E,HIGH);
  digitalWrite(power6F,LOW);
  digitalWrite(power7G,HIGH);
  }
void dE(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,LOW);
    digitalWrite(power3C,LOW);
     digitalWrite(power4D,HIGH);
  digitalWrite(power5E,HIGH);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,HIGH);
  }
void dF(){
    digitalWrite(power1A,HIGH);
     digitalWrite(power2B,LOW);
    digitalWrite(power3C,LOW);
     digitalWrite(power4D,LOW);
  digitalWrite(power5E,HIGH);
  digitalWrite(power6F,HIGH);
  digitalWrite(power7G,HIGH);
  }