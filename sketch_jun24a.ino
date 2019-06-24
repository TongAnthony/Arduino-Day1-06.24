void setup() {
  // put your setup code here, to run once:
 for(int i=6; i<=9; i++)
 {
  pinMode(i,OUTPUT);
 }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int y=5; y<=9; y++)
 {
  digitalWrite(y,HIGH);
 }
  for(int x=5; x<=9; x++)
  {
    digitalWrite(x,LOW);
    delay(100);
  }
  
  for(int a=10;a>=6;a--)
  {
    for(int b=a;b<=9;b++)
    {
    digitalWrite(b,HIGH);
    delay(50);
    digitalWrite(b,LOW);
    delay(50);
    }
  }
  for (int j=1;j<=10;j++)
  {
    for (int z=5;z<=9;z++)
    {
      digitalWrite(z,HIGH);
    }
    delay(100);
    for (int z=5;z<=9;z++)
    {
      digitalWrite(z,LOW);
    }
    delay(100);
  }
  for (int c=10;c>=6;c--)
  {
    digitalWrite(c,HIGH);
    delay(50);
    digitalWrite(c,LOW);
  }
}
