    /*
    Pinagem do LCD
    
    GND => (-)
    VCC => 5V
    SDA => A4
    SCL => A5 
    */
    
   #include <Wire.h> 
   #include <LiquidCrystal_I2C.h>

   LiquidCrystal_I2C lcd1(0x3D,16,2);
   LiquidCrystal_I2C lcd2(0x3F,16,2);

   void setup()
   {
   lcd1.init();           // initializa o lcd 
   lcd2.init();           // initializa o lcd 
   lcd1.backlight();      // acende a luz de fundo no lcd
   lcd2.backlight();      // acende a luz de fundo no lcd
   }

   void loop()
   {
   lcd1.setCursor(0,0);
   lcd1.print("Display Numero 1");
   lcd1.setCursor(4,1);
   lcd1.print("Ligado");
   delay(3000);
   lcd1.clear();
   
   lcd2.setCursor(0,0);
   lcd2.print("Display Numero 2");
   lcd2.setCursor(4,1);
   lcd2.print("Ligado");
   delay(3000);
   lcd2.clear();
   
   lcd1.setCursor(0,0);
   lcd1.print("Display 1 e 2");
   lcd2.setCursor(0,0);
   lcd2.print("Display 1 e 2");
   lcd1.setCursor(1,1);
   lcd1.print("Ligados Juntos");
   lcd2.setCursor(1,1);
   lcd2.print("Ligados Juntos");
   delay(3000);
   lcd1.clear();
   lcd2.clear();
   }
