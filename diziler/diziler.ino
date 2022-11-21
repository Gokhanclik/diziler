  void setup() 
{
Serial.begin(9600);
}

void loop() 
{
String aylar[12]={"Ocak","Subat","Mart","Nisan","Mayis","Haziran","Temmuz","Ağustos","Eylül","Ekim","Kasım","Aralık"};
int i;
for (i=0;i<=11;i++)
Serial.println(aylar[i]);
delay(1000);
}
