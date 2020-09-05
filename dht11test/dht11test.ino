#include <dht11.h> 
#include <LiquidCrystal.h> 
#define DHT11PIN 8        //设置DHT11数据传输引脚为8                                    
dht11 DHT11;             //实例化一个对象
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd (rs,en,d4,d5,d6,d7);  

void setup() {                                                     

Serial.begin(9600);
lcd.begin(16,2);                                           
pinMode(DHT11PIN,OUTPUT);                       
}

void loop() {                                                  
   int chk = DHT11.read(DHT11PIN);
   int t=(float)DHT11.temperature;
   int h=(float)DHT11.humidity;
  lcd.setCursor(0, 0);
  lcd.print("Tep: ");
  lcd.print(t);
  lcd.print("C");        
  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(h);
  lcd.print("%");
  Serial.print("Tempeature:");                
  Serial.print(t);                         
  Serial.println("℃");
  Serial.print("Humidity:");                            
  Serial.print(h);                               
  Serial.println("%");                     //串口打印测量的温湿度
  delay(200);
}
