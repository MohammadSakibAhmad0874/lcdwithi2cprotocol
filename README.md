# lcdwithi2cprotocol
# Arduino I2C LCD Display Project
![Stunning Wolt-Borwo](https://github.com/user-attachments/assets/d699fe28-418d-483e-acca-a22fbf779de9)

![Arduino I2C LCD Display](https://raw.githubusercontent.com/arduino-libraries/LiquidCrystal_I2C/master/extras/LCD-I2C.jpg)

## Introduction
This Arduino project demonstrates how to control an I2C LCD display using the LiquidCrystal_I2C library. The sketch alternates between displaying "SAKIE" on the top row and "Ahmad" on the bottom row of a 16x2 LCD display, with timed delays between messages.

The I2C interface simplifies wiring by requiring only 4 connections (VCC, GND, SDA, SCL) instead of the traditional 16 pins needed for parallel LCDs.

## Features
- Simple text display on I2C LCD
- Automatic clearing between display cycles
- Backlight control
- Adjustable timing for message display
- Compatible with most 16x2 I2C LCD modules

## Hardware Requirements
- Arduino board (Uno, Nano, Mega, etc.)
- 16x2 LCD with I2C interface module
- Breadboard and jumper wires
- USB cable for Arduino

## Wiring Instructions
Connect the LCD to your Arduino as follows:

| LCD I2C Pin | Arduino Pin |
|-------------|-------------|
| GND         | GND         |
| VCC         | 5V          |
| SDA         | A4 (Uno) or SDA pin |
| SCL         | A5 (Uno) or SCL pin |

**Note:** If your Arduino has dedicated SDA/SCL pins (like the Uno R4 or Leonardo), use those instead.

## Software Installation
1. Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software)
2. Open the Arduino IDE and install the required library:
   - Go to **Sketch > Include Library > Manage Libraries...**
   - Search for "LiquidCrystal I2C"
   - Install "LiquidCrystal I2C by Frank de Brabander"
3. Connect your Arduino to your computer
4. Select the correct board and port under **Tools > Board** and **Tools > Port**

## Uploading the Code
Copy the following code to your Arduino IDE:

```cpp
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize LCD with I2C address 0x27, 16 columns and 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2); // Use 0x3F if 0x27 doesn't work

void setup() {
  lcd.init();         // Initialize LCD
  lcd.backlight();    // Turn on backlight
}

void loop() {
  // Display "SAKIE" on top row
  lcd.setCursor(0, 0);
  lcd.print("SAKIE");
  delay(3000);        // Display for 3 seconds
  
  // Display "Ahmad" on bottom row
  lcd.setCursor(0, 1);
  lcd.print("Ahmad");
  delay(2000);        // Display for 2 seconds
  
  lcd.clear();        // Clear display before next cycle
}
```

## I2C Address Configuration
Before uploading:
1. Determine your LCD's I2C address using an I2C scanner sketch
2. If your display doesn't work with 0x27, try:
   - `LiquidCrystal_I2C lcd(0x3F, 16, 2);`
   - `LiquidCrystal_I2C lcd(0x20, 16, 2);`

## Customization Options
- **Change displayed text**: Modify the strings in `lcd.print()` commands
- **Adjust timing**: Change the values in `delay()` functions (in milliseconds)
- **Add more messages**: Insert additional display commands in the loop
- **Control backlight**: Use `lcd.noBacklight()` to turn off backlight

## Troubleshooting
1. **Blank display**: 
   - Check I2C address
   - Verify wiring connections
   - Adjust contrast using the potentiometer on I2C module
2. **Garbled text**:
   - Ensure correct library is installed
   - Check for conflicting libraries
   - Verify 16x2 display configuration
3. **I2C address unknown**:
   - Use an I2C scanner sketch to detect address

## Contributing
Feel free to fork this project and submit pull requests with improvements. Report issues in the repository's issue tracker.

## License
This project is open source and available under the [MIT License](LICENSE).
This Arduino project demonstrates how to control an I2C LCD display using the LiquidCrystal_I2C library. The sketch alternates between displaying "SAKIE" on the top row and "Ahmad" on the bottom row of a 16x2 LCD display, with timed delays between messages.
