
# include "Arduino.h"
#include "pwm_control.h"

 pwm::pwm(){
 }

void pwm::pwmcontrol(){


 int ledChannel = 0;

  // increase the LED brightness
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    // changing the LED brightness with PWM
    ledcWrite(ledChannel, dutyCycle);
    delay(10);
  }
  // decrease the LED brightness
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    ledcWrite(ledChannel, dutyCycle);   
    delay(10);
  }
}
