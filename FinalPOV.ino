int timer = 1700;    
int U18 = 10;
int State = 0;         
int lastState = 0;     

boolean A[]={1,1,1,1,1, 0,0,1,0,1, 1,1,1,1,1};
boolean B[]={1,1,1,1,1, 1,0,1,0,0, 1,1,1,0,0};
boolean C[]={1,1,1,1,1, 1,0,0,0,1, 1,0,0,0,1};
boolean D[]={1,1,1,1,1, 1,0,0,0,1, 0,1,1,1,0};
boolean E[]={1,1,1,1,1, 1,0,1,0,1, 1,0,1,0,1};
boolean F[]={1,1,1,1,1, 0,0,1,0,1, 0,0,1,0,1};
boolean G[]={1,1,1,1,1, 1,0,0,0,1, 1,0,1,0,1, 1,1,1,0,1};
boolean H[]={1,1,1,1,1, 0,0,1,0,0, 1,1,1,1,1};
boolean I[]={1,1,1,0,1, 1,1,1,0,1};
boolean J[]={0,1,0,0,0, 1,0,0,0,0, 1,1,1,1,1};
boolean K[]={1,1,1,1,1, 0,1,0,1,0, 1,0,0,0,1};
boolean L[]={1,1,1,1,1, 1,0,0,0,0, 1,0,0,0,0};
boolean M[]={1,1,1,1,1, 0,0,1,1,0 ,0,1,0,0,0, 0,0,1,1,0, 1,1,1,1,1};
boolean N[]={1,1,1,1,1, 0,0,0,1,0, 0,0,1,0,0, 0,1,0,0,0, 1,1,1,1,1};
boolean O[]={1,1,1,1,1, 1,0,0,0,1, 1,1,1,1,1};
boolean P[]={1,1,1,1,1, 0,0,1,0,1, 0,0,1,1,1};
boolean Q[]={1,1,1,1,1, 1,0,0,0,1, 1,1,1,1,1, 1,0,0,0,0};
boolean R[]={1,1,1,1,1, 0,1,1,0,1, 1,0,1,1,1};
boolean S[]={1,0,1,1,1, 1,0,1,0,1, 1,1,1,0,1};
boolean T[]={0,0,0,0,1, 1,1,1,1,1, 0,0,0,0,1};
boolean U[]={1,1,1,1,1, 1,0,0,0,0, 1,0,0,0,0, 1,1,1,1,1};
boolean V[]={0,1,1,1,1, 1,0,0,0,0, 0,1,1,1,1};
boolean W[]={0,1,1,1,1, 1,0,0,0,0, 0,1,1,1,1, 1,0,0,0,0, 0,1,1,1,1};
boolean X[]={1,0,0,0,1, 0,1,0,1,0, 0,0,1,0,0, 0,1,0,1,0, 1,0,0,0,1};
boolean Y[]={0,0,0,0,1, 0,0,0,1,0, 1,1,1,0,0, 0,0,0,1,0, 0,0,0,0,1};
boolean Z[]={1,0,0,0,1, 1,1,0,0,1, 1,0,1,0,1, 1,0,0,1,1, 1,0,0,0,1};



boolean space[]={0,0,0,0,0};   
boolean questionmark[]={0,0,0,0,1,1, 1,0,1,1,0,1 , 0,0,0,1,1,1 }; //6led
boolean exclamationmark[]={1,0,1,1,1,1,0,1,1,1};
boolean bug[]={0,1,1,1,0,0,0,0, 0,0,0,1,1,0,0,0, 0,1,1,1,1,1,0,1, 
               1,0,1,1,0,1,1,1, 0,0,1,1,1,1,0,0, 0,0,1,1,1,1,0,0,
               0,0,1,1,1,1,0,0, 1,0,1,1,0,1,1,1, 0,1,1,1,1,1,0,1,
               0,0,0,1,1,0,0,0, 0,1,1,1,0,0,0,0};
boolean robot[]={0,0,0,1,1,0,0,0, 0,1,1,1,1,1,0,0, 1,0,0,0,0,0,1,0, 0,1,0,0,1,0,0,1,
                     1,0,0,0,0,0,0,1, 0,1,0,0,1,0,0,1, 1,0,0,0,0,0,1,0,
                     0,1,1,1,1,1,0,0, 0,0,0,1,1,0,0,0};


int m;
int counter=0;
void setup() {
  for (int Pin = 2; Pin <=9; Pin++) {
    pinMode(Pin, OUTPUT);}
    pinMode(U18, INPUT);
}
int time = 60;
int inner =0;
int i =0;
void loop() {

State = digitalRead(U18);
if(inner>35){
  i++;
  inner=0;
  }
if (State != lastState){
  if (State == HIGH){
  
  switch(i){
    case 0: Write3(A);
            Write1(space);
            inner++;
        break;
    case 1: Write3(B);
            Write1(space);
            inner++;
        break;
    case 2: Write3(C);
            Write1(space);
            inner++;
        break;
    case 3: Write3(D);
            Write1(space);
            inner++;
        break;
    case 4: Write3(E);
            Write1(space);
            inner++;
        break;
    case 5: Write3(F);
            Write1(space);
            inner++;
        break;
    case 6: Write4(G);
            Write1(space);
            inner++;
        break;
    case 7: Write3(H);
            Write1(space);
            inner++;
        break;
    case 8: Write2(I);
            Write1(space);
            inner++;
        break;
    case 9: Write3(J);
            Write1(space);
            inner++;
          break;
    case 10: Write3(K);
             Write1(space);
             inner++;
        break;
    case 11: Write3(L);
             Write1(space);
            inner++;
        break;
    case 12: Write5(M);
             Write1(space);
             inner++;
        break;
    case 13: Write5(N);
             Write1(space);
             inner++;
        break;
    case 14: Write3(O);
             Write1(space);
             inner++;
        break;
    case 15: Write3(P);
             Write1(space);
             inner++;
         break;
    case 16: Write4(Q);
             Write1(space);
             inner++;
        break;
    case 17: Write3(R);
             Write1(space);
             inner++;
        break;
    case 18: Write3(S);
             Write1(space);
             inner++;
        break;
    case 19: Write3(T);
             Write1(space);
             inner++;
        break;
    case 20: Write4(U);
             Write1(space);
             inner++;
        break;
    case 21: Write3(V);
             Write1(space);
             inner++;
             break;
    case 22: Write5(W);
             Write1(space);
              inner++;
        break;
    case 23: Write5(X);
             Write1(space);
            inner++;
        break;
    case 24: Write5(Y);
             Write1(space);
              inner++;
        break;
    case 25: Write5(Z);
             Write1(space);
             inner++;
        break;
    case 26: Bug();
             TurnOff();
             inner++;
        break;
    case 27: Robot();
             TurnOff();
             inner++;
        break;
    case 28: 
             delay(10);
             Write3(H);
	           Write1(space);
             Write3(E);
             Write1(space);
             Write3(L);
             Write1(space);
             Write3(L);
             Write1(space);
             Write3(O);
             Write1(space);
             inner++;
        break;
    }
    
  }
  
}

lastState = State;
if(i>28){
  i=0;
  }
}

void Write5(boolean letter[]){
  m=0;
  for (int n=0; n<=4; n++){
  for (int Pin = 5; Pin <=9; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;}
    delayMicroseconds(timer);}}
    
void Write4(boolean letter[]){
  m=0;
  for (int n=0; n<=3; n++){
  for (int Pin = 5; Pin <=9; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;}
    delayMicroseconds(timer);}}

void Write3(boolean letter[]){

  m=0;
  for (int n=0; n<=2; n++){
  for (int Pin = 5; Pin <=9; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;
    }
    delayMicroseconds(timer);}}//2000

 void Write2(boolean letter[]){
  m=0;
  for (int n=0; n<=1; n++){
  for (int Pin = 5; Pin <=9; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;}
    delayMicroseconds(timer);}}
 
 void Write1(boolean letter[]){
  m=0;
   for (int Pin = 5; Pin <=9; Pin++) {
    digitalWrite(Pin, space[m]);
    m=m+1;}
    delayMicroseconds(1000);}//2000

 void TurnOff(){
    for(int Pin = 2; Pin <=9;Pin++){
        digitalWrite(Pin, LOW);
      }
  }
  void TurnOn(){
    for(int Pin = 2; Pin <=9;Pin++){
        digitalWrite(Pin, HIGH);
      }
  }
  
  void Bug(){
  m=0;
    for (int n=0; n<=10; n++){
    for (int Pin = 2; Pin <=9; Pin++) {
      digitalWrite(Pin, bug[m]);
      m=m+1;}
      delayMicroseconds(timer);}}

  void Robot(){
    m=0;
    for (int n=0; n<=8; n++){
    for (int Pin = 2; Pin <=9; Pin++) {
      digitalWrite(Pin, robot[m]);
      m=m+1;}
     delayMicroseconds(timer);}
     TurnOff();
     delay(15);
     for (int Pin = 6; Pin>1; Pin--) {
      digitalWrite(Pin, HIGH);}
      delayMicroseconds(timer);
      TurnOff();
    
      for (int Pin = 5; Pin>1; Pin--) {
      digitalWrite(Pin, HIGH);}
      delayMicroseconds(timer);
      delay(9);
      for (int Pin = 8; Pin>1; Pin--) {
      digitalWrite(Pin, HIGH);}
      delayMicroseconds(600);
      TurnOff();
      for (int Pin = 5; Pin>1; Pin--) {
      digitalWrite(Pin, HIGH);}
      delayMicroseconds(timer);
      delay(1);
      
      for (int Pin = 9; Pin>1; Pin--) {
      digitalWrite(Pin, HIGH);}
      delayMicroseconds(timer);
      delay(9);
     TurnOff();
     
     for (int Pin = 5; Pin>1; Pin--) {
      digitalWrite(Pin, HIGH);}
      delay(2);
      TurnOff();
      for (int Pin = 8; Pin>1; Pin--) {
      digitalWrite(Pin, HIGH);}
      delayMicroseconds(600);
      TurnOff();
      for (int Pin = 5; Pin>1; Pin--) {
      digitalWrite(Pin, HIGH);}
      delay(11);
      TurnOff();
     
     for (int Pin = 6; Pin>1; Pin--) {
      digitalWrite(Pin, HIGH);}
      delayMicroseconds(timer);
      TurnOff();
     }

  void PacMan(){
          TurnOn();
          delay(9);
          TurnOff();
          delay(15);
          TurnOn();
          delay(60);
          TurnOff();
          digitalWrite(2,HIGH);
          digitalWrite(2,HIGH);
          digitalWrite(2,HIGH);
          digitalWrite(2,HIGH);
          digitalWrite(2,LOW);
          digitalWrite(2,LOW);
          digitalWrite(2,HIGH);
          digitalWrite(2,HIGH);
          delayMicroseconds(1000);
       
    }
    


  


