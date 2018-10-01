int mLf = 2  // for motor left
int mLb = 3
int mRf = 7  //for motor right
int mRb = 8


void setup() {
 
 pinMode(mLf, OUTPUT); // for motors
 pinMode(mLb, OUTPUT);
 pinMode(mRf, OUTPUT);
 pinMode(mRb, OUTPUT);
   
 pinMode(A0, INPUT); // for ELS,LS,MS,RS,ERS IR sensors in the strip
 pinMode(A1, INPUT);
 pinMode(A2, INPUT);
 pinMode(A3, INPUT);
 pinMode(A4, INPUT);
  
}

void loop() {
  int ELS = analogRead(A0);  // taking the readings from different sensors
  int LS =  analogRead(A1);
  int MS =  analogRead(A2);
  int RS =  analogRead(A3);
  int ERS = analogRead(A4);
  

 if(ELS > 500 and LS > 500 and MS < 500 and RS > 500 and ERS > 500) { // For straight line movement

 digitalWrite(mLf , HIGH) ;
 digitalWrite(mRf , HIGH) ;
 digitalWrite(mLb, LOW) ;
 digitalWrite(mRb, LOW) ;
   
 }
 else
 if(RS<500 and ERS >500) { //For curve right turn

 analogWrite(mLf , 200) ;
 digitalWrite(mRf , LOW) ;
 digitalWrite(mLb , LOW) ;
 digitalWrite(mRb , LOW) ;  
 }
 else
 if(RS<500 and ERS<500) { // For sharp right turn

 analogWrite(mLf , 100) ;
 digitalWrite(mRf , LOW) ;
 digitalWrite(mLb, LOW) ;
 digitalWrite(mRb, LOW) ;
   
 }
  else
  if() { // For any break in Line( Keep on moving ahead) ;

 digitalWrite(mLf , HIGH) ;
 digitalWrite(mRf , HIGH) ;
 digitalWrite(mLb, LOW) ;
 digitalWrite(mRb, LOW) ;} 

if(sensor2 < 500 and sensor3 < 500 and sensor4 < 500) // Go straight again
 { 
  digitalWrite(mLf , HIGH) ;
  digitalWrite(mRf , HIGH) ;
  digitalWrite(mLb, LOW) ;
  digitalWrite(mRb, LOW) ;
 }
delay(5);  
}
