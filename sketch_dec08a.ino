int pos=0;
int motor_pin_1 = 7;
int motor_pin_2 = 8;
int motor_pin_3 = 9;
int motor_pin_4 = 10;

int n=20;
int thisStep;
float val;
float deg;
float degree;
float val2;
unsigned long tie;
int now = 0 ;
unsigned long present;
unsigned long present1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(motor_pin_1,OUTPUT);
pinMode(motor_pin_2,OUTPUT);
pinMode(motor_pin_3,OUTPUT);
pinMode(motor_pin_4,OUTPUT); 
pinMode(A5,INPUT);
  tie = micros();
  present = 400;
deg = val/90.0;
}
void loop() {
  // put your main code here, to run repeatedly: 
//  val  = analogRead(A5);

     

//val2  = analogRead(A5);
//degree = (val - val2)/deg;

  
   digitalWrite(motor_pin_1, HIGH);
        digitalWrite(motor_pin_2, LOW);
        digitalWrite(motor_pin_3, HIGH); 
        digitalWrite(motor_pin_4, LOW);
     delay(10);
        digitalWrite(motor_pin_1, LOW); 
        digitalWrite(motor_pin_2, HIGH);
        digitalWrite(motor_pin_3, HIGH); 
        digitalWrite(motor_pin_4, LOW);
      delay(10);
        digitalWrite(motor_pin_1, LOW);
        digitalWrite(motor_pin_2, HIGH);
        digitalWrite(motor_pin_3, LOW);
        digitalWrite(motor_pin_4, HIGH);
   delay(10);
        digitalWrite(motor_pin_1, HIGH);
        digitalWrite(motor_pin_2, LOW);
        digitalWrite(motor_pin_3, LOW);
        digitalWrite(motor_pin_4, HIGH);
 int val= analogRead(A5);
   
  Serial.println(val);
  }
  


//delay(10);



  
//Serial.println(kck2);
void step(int st){
thisStep = st;
   switch (st) {
      case 0:  // 1010
        digitalWrite(motor_pin_1, HIGH);
        digitalWrite(motor_pin_2, LOW);
        digitalWrite(motor_pin_3, HIGH); 
        digitalWrite(motor_pin_4, LOW);
      break;
      case 1:  // 0110
        digitalWrite(motor_pin_1, LOW); 
        digitalWrite(motor_pin_2, HIGH);
        digitalWrite(motor_pin_3, HIGH); 
        digitalWrite(motor_pin_4, LOW);
      break;
      case 2:  //0101
        digitalWrite(motor_pin_1, LOW);
        digitalWrite(motor_pin_2, HIGH);
        digitalWrite(motor_pin_3, LOW);
        digitalWrite(motor_pin_4, HIGH);
      break;
      case 3:  //1001
        digitalWrite(motor_pin_1, HIGH);
        digitalWrite(motor_pin_2, LOW);
        digitalWrite(motor_pin_3, LOW);
        digitalWrite(motor_pin_4, HIGH);
      break;
    }
}
