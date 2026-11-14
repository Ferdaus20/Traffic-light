
// #define Red_Led 12
// #define Gre_Led 14
// #define Yel_Led 32
// #define SDA 22
// #define SCL 21



// void setup() {
//  pinMode(Red_Led, OUTPUT);
//  pinMode(Gre_Led, OUTPUT);
//  pinMode(Yel_Led, OUTPUT);
// }

// void loop() {
//   digitalWrite(Red_Led, HIGH);
//   delay(5000);
//   digitalWrite(Red_Led, LOW);

//   digitalWrite(Gre_Led, HIGH);
//   delay(5000);
//   digitalWrite(Gre_Led, LOW);


//   digitalWrite(Yel_Led, HIGH);
//   delay(2000);
//   digitalWrite(Yel_Led, LOW);
  
// }


// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>


// #define Red_Led 12
// #define Gre_Led 14
// #define Yel_Led 32
// #define SDA 22
// #define SCL 21

// // Initialize 16x2 LCD at address 0x27
// LiquidCrystal_I2C lcd(0x27, 16, 2);

// void setup() {
  
//   pinMode(Red_Led, OUTPUT);
//   pinMode(Gre_Led, OUTPUT);
//   pinMode(Yel_Led, OUTPUT);
//   Wire.begin(SDA, SCL);
//   lcd.init();
//   lcd.backlight();
// }

// void loop() {
//   // Show "Stop" for 5 seconds
//   lcd.clear();
//   lcd.setCursor(0, 0);
//   lcd.print("Red Light: Stop!");
//   digitalWrite(Red_Led, HIGH);
//   delay(5000); // 5000 milliseconds = 5 seconds
//   digitalWrite(Red_Led, LOW);

//   // Show "Go" for 5 seconds
//   lcd.clear();
//   lcd.setCursor(0, 0);
//   lcd.print("Green light: Go");
//   digitalWrite(Gre_Led, HIGH);
//   delay(5000); // 5000 milliseconds = 5 seconds
//   digitalWrite(Gre_Led, LOW);


//     // Show "slow" for 2 seconds
//   lcd.clear();
//   lcd.setCursor(0, 0);
//   lcd.print("Yellow : Go slow");
//   digitalWrite(Yel_Led, HIGH);
//   delay(2000); // 2000 milliseconds = 2 seconds
//   digitalWrite(Yel_Led, LOW);
// }


#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define Red_Led 12
#define Gre_Led 14
#define Yel_Led 32
#define SDA 22
#define SCL 21

// Initialize 16x2 LCD at address 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(Red_Led, OUTPUT);
  pinMode(Gre_Led, OUTPUT);
  pinMode(Yel_Led, OUTPUT);

  Wire.begin(SDA, SCL);
  lcd.init();
  lcd.backlight();
}

void loop() {
  // 1. RED LIGHT - Stop (5 seconds)
  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("RED LIGHT");
  lcd.setCursor(5, 1);
  lcd.print("STOP!");
  digitalWrite(Red_Led, HIGH);
  delay(5000);
  digitalWrite(Red_Led, LOW);

  // 2. GREEN LIGHT - Go (5 seconds)
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("GREEN LIGHT");
  lcd.setCursor(6, 1);
  lcd.print("GO!");
  digitalWrite(Gre_Led, HIGH);
  delay(5000);
  digitalWrite(Gre_Led, LOW);

  // 3. YELLOW LIGHT - Slow (2 seconds)
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("YELLOW LIGHT");
  lcd.setCursor(4, 1);
  lcd.print("GO SLOW!");
  digitalWrite(Yel_Led, HIGH);
  delay(2000);
  digitalWrite(Yel_Led, LOW);
}

