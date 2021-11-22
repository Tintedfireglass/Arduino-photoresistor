void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
 int a= analogRead(A0);
 int b= map(a,0,600,0,2);
  switch(b)
  { 
  case 0:
  Serial.println("dark");
  break;
  
  case 1:
  Serial.println("medium");
  break;
  
  case 2:
  Serial.println("bright");
  break;
  }
}
