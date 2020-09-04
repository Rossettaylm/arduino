#include <LiquidCrystal.h>

const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd (rs,en,d4,d5,d6,d7);

byte smiley[8] = {    //1表示亮，0表示不亮，此例显示一个笑脸
      B00000,
      B10001,
      B00000,
      B00000,
      B10001,
      B01110,
      B00000,
    };



void setup() {
  int x=1;
  lcd.createChar(x , smiley); 
  lcd.begin (16,2);  //设置行列数
  lcd.write(x);//显示笑脸
  lcd.print(" YLM17020310023");
  Serial.begin(9600); //打开串口
  lcd.setCursor(0,1); //设置第0列 ，第1行
  lcd.print("Please input:");
}

void loop() {
  if(Serial.available())  //判断串口缓冲器的状态，用以判断数据是否送达串口
  {
    delay(100); //保证串口字符接收完毕
    lcd.clear();
    lcd.print(Serial.readString()); //从串口缓冲区读取输入的字符串，并输出到lcd1602上

  }
    
  }
