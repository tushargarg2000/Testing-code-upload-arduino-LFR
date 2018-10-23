#define m1f 2  // for motor left
#define m1b 3
#define m2f 7  //for motor right
#define m2b 8


void setup() {
 
//for motors 
 pinMode(m1f, OUTPUT);
 pinMode(m1b, OUTPUT);
 pinMode(m2f, OUTPUT);
 pinMode(m2b, OUTPUT);
 
   
   pinMode(A3, INPUT); // for s2,s3,s4 IR sensors in the strip
   pinMode(A1, INPUT);
   pinMode(A4, INPUT);
 
  
}

void loop() {
  int s2 = analogRead(A3) ; // taking the readings
  int s3 = analogRead(A1) ;
  int s4 = analogRead(A4) ;
  

 if(s2 >500 and s3 < 500 and s4 >500) { // Straight Line

 digitalWrite(m1f , HIGH) ;
 digitalWrite(m2f , HIGH) ;
 digitalWrite(m1b, LOW) ;
 digitalWrite(m2b, LOW) ;
   
 }
 else
 if(s2 >500 and ( s3 < 500 or s3 > 500) and s4 <500 ) { //Turn right

 digitalWrite(m1f , HIGH) ;
 digitalWrite(m2f , LOW) ;
 digitalWrite(m1b , LOW) ;
 digitalWrite(m2b , LOW) ;  
 }
 else
 if(s2 < 500 and (s3 < 500 or s3 > 500) and s4 > 500) { // Turn Left

 digitalWrite(m1f , LOW) ;
 digitalWrite(m2f , HIGH) ;
 digitalWrite(m1b, LOW) ;
 digitalWrite(m2b, LOW) ;
   
 }
  else
  if(s2 > 500 and s3 > 500 and s4 > 500) { // Break in Line(Keep on moving ahead) ;

 digitalWrite(m1f , HIGH) ;
 digitalWrite(m2f , HIGH) ;
 digitalWrite(m1b, LOW) ;
 digitalWrite(m2b, LOW) ;} 

if(s2 < 500 and s3 < 500 and s4 < 500) //Go straight again
 { 
  digitalWrite(m1f , HIGH) ;
 digitalWrite(m2f , HIGH) ;
 digitalWrite(m1b, LOW) ;
 digitalWrite(m2b, LOW) ;
 }
delay(1);  
}
