int L1 = 2;
int L2 = 3;
int L3 = 4;
int L4 = 5;
int L5 = 6;
int L6 = 7;

void setup()
{
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
}

void loop1()
{
  digitalWrite(L1, HIGH);  
  delay(100);
  digitalWrite(L1, LOW);
  
  digitalWrite(L2, HIGH);
  delay(100);
  digitalWrite(L2, LOW);
  
  digitalWrite(L3, HIGH);
  delay(100);
  digitalWrite(L3, LOW);
 
  digitalWrite(L4, HIGH);
  delay(100);
  digitalWrite(L4, LOW);
  
  digitalWrite(L5, HIGH);
  delay(100);
  digitalWrite(L5, LOW);
  
  digitalWrite(L6, HIGH);
  delay(100);
  digitalWrite(L6, LOW);
  
}

void loop2()
{
  digitalWrite(L6, HIGH);
  
  digitalWrite(L1, HIGH);  
  delay(100);
  digitalWrite(L1, LOW);
  
  digitalWrite(L2, HIGH);
  delay(100);
  digitalWrite(L2, LOW);
  
  digitalWrite(L3, HIGH);
  delay(100);
  digitalWrite(L3, LOW);
 
  digitalWrite(L4, HIGH);
  delay(100);
  digitalWrite(L4, LOW);
  
  digitalWrite(L5, HIGH);
  delay(100);
  digitalWrite(L5, LOW);
}

void loop3()
{
   digitalWrite(L6, HIGH);
   digitalWrite(L5, HIGH);
   
   digitalWrite(L1, HIGH);  
  delay(100);
  digitalWrite(L1, LOW);
  
  digitalWrite(L2, HIGH);
  delay(100);
  digitalWrite(L2, LOW);
  
  digitalWrite(L3, HIGH);
  delay(100);
  digitalWrite(L3, LOW);
 
  digitalWrite(L4, HIGH);
  delay(100);
  digitalWrite(L4, LOW);
}

void loop4()
{
  digitalWrite(L6, HIGH);
  digitalWrite(L5, HIGH);
  digitalWrite(L4, HIGH);
   
  digitalWrite(L1, HIGH);  
  delay(100);
  digitalWrite(L1, LOW);
  
  digitalWrite(L2, HIGH);
  delay(100);
  digitalWrite(L2, LOW);
  
  digitalWrite(L3, HIGH);
  delay(100);
  digitalWrite(L3, LOW);
 }

 void loop5()
 {
  digitalWrite(L6, HIGH);
  digitalWrite(L5, HIGH);
  digitalWrite(L4, HIGH);
  digitalWrite(L3, HIGH);
   
  digitalWrite(L1, HIGH);  
  delay(100);
  digitalWrite(L1, LOW);
  
  digitalWrite(L2, HIGH);
  delay(100);
  digitalWrite(L2, LOW);
 }

 void loop6()
 {
  digitalWrite(L6, HIGH);
  digitalWrite(L5, HIGH);
  digitalWrite(L4, HIGH);
  digitalWrite(L3, HIGH);
  digitalWrite(L2, HIGH);
   
  digitalWrite(L1, HIGH);  
  delay(100);
  digitalWrite(L1, LOW);
 }

 void loop7()
 {
  digitalWrite(L6, HIGH);
  digitalWrite(L5, HIGH);
  digitalWrite(L4, HIGH);
  digitalWrite(L3, HIGH);
  digitalWrite(L2, HIGH);
  digitalWrite(L1, HIGH);
 }

 void loop8()
 {
  digitalWrite(L6, LOW);
  digitalWrite(L5, LOW);
  digitalWrite(L4, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(L1, LOW);
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
