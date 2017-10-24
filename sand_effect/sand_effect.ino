#define l1 (2)
#define l2 (3)
#define l3 (4)
#define l4 (5)
#define l5 (6)
#define l6 (7)

void setup()
{
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
}

void loop1()
{
  digitalWrite(l1, HIGH);  
  delay(100);
  digitalWrite(l1, LOW);
  
  digitalWrite(l2, HIGH);
  delay(100);
  digitalWrite(l2, LOW);
  
  digitalWrite(l3, HIGH);
  delay(100);
  digitalWrite(l3, LOW);
 
  digitalWrite(l4, HIGH);
  delay(100);
  digitalWrite(l4, LOW);
  
  digitalWrite(l5, HIGH);
  delay(100);
  digitalWrite(l5, LOW);
  
  digitalWrite(l6, HIGH);
  delay(100);
  digitalWrite(l6, LOW);
  
}

void loop2()
{
  digitalWrite(l6, HIGH);
  
  digitalWrite(l1, HIGH);  
  delay(100);
  digitalWrite(l1, LOW);
  
  digitalWrite(l2, HIGH);
  delay(100);
  digitalWrite(l2, LOW);
  
  digitalWrite(l3, HIGH);
  delay(100);
  digitalWrite(l3, LOW);
 
  digitalWrite(l4, HIGH);
  delay(100);
  digitalWrite(l4, LOW);
  
  digitalWrite(l5, HIGH);
  delay(100);
  digitalWrite(l5, LOW);
}

void loop3()
{
   digitalWrite(l6, HIGH);
   digitalWrite(l5, HIGH);
   
   digitalWrite(l1, HIGH);  
  delay(100);
  digitalWrite(l1, LOW);
  
  digitalWrite(l2, HIGH);
  delay(100);
  digitalWrite(l2, LOW);
  
  digitalWrite(l3, HIGH);
  delay(100);
  digitalWrite(l3, LOW);
 
  digitalWrite(l4, HIGH);
  delay(100);
  digitalWrite(l4, LOW);
}

void loop4()
{
  digitalWrite(l6, HIGH);
   digitalWrite(l5, HIGH);
   digitalWrite(l4, HIGH);
   
   digitalWrite(l1, HIGH);  
  delay(100);
  digitalWrite(l1, LOW);
  
  digitalWrite(l2, HIGH);
  delay(100);
  digitalWrite(l2, LOW);
  
  digitalWrite(l3, HIGH);
  delay(100);
  digitalWrite(l3, LOW);
 }

 void loop5()
 {
  digitalWrite(l6, HIGH);
   digitalWrite(l5, HIGH);
   digitalWrite(l4, HIGH);
   digitalWrite(l3, HIGH);
   
   digitalWrite(l1, HIGH);  
  delay(100);
  digitalWrite(l1, LOW);
  
  digitalWrite(l2, HIGH);
  delay(100);
  digitalWrite(l2, LOW);
 }

 void loop6()
 {
  digitalWrite(l6, HIGH);
   digitalWrite(l5, HIGH);
   digitalWrite(l4, HIGH);
   digitalWrite(l3, HIGH);
   digitalWrite(l2, HIGH);
   
   digitalWrite(l1, HIGH);  
  delay(100);
  digitalWrite(l1, LOW);
 }

 void loop7()
 {
  digitalWrite(l6, HIGH);
   digitalWrite(l5, HIGH);
   digitalWrite(l4, HIGH);
   digitalWrite(l3, HIGH);
   digitalWrite(l2, HIGH);
   digitalWrite(l1, HIGH);
 }

 void loop8()
 {
  digitalWrite(l6, LOW);
   digitalWrite(l5, LOW);
   digitalWrite(l4, LOW);
   digitalWrite(l3, LOW);
   digitalWrite(l2, LOW);
   digitalWrite(l1, LOW);
 }



void loop()
{
loop1();
loop2();
loop3();
loop4();
loop5();
loop6();
loop7();
loop8();
}
