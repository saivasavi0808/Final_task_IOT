char text1[] = "$GPVTG,054.7,T,034.4,M,005.5,N,010.2,K";
char text2[] = "$GPGGA,134658.00,5106.9792,N,11402.3003,W,2,09,1.0,1048.47,M,-16.27,M,08,AAAA*60";
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  delay(200);
  Serial.write(text1);
  Serial.write("/");
  delay(500);
  Serial.write(text2);
  delay(500);
}
