  void setup() 
{
Serial.begin(9600);
}

void loop() 
{
String aylar[8]={"Ocak","Subat","Mart","Nisan","Mayis"};
int i;
for (i=0;i<=7;i++)
Serial.println(aylar[i]);
delay(1000);
}
