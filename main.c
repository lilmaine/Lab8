#include <msp430.h> 
#include "RobotSensor.h"
#include "RobotMovement.h"
/*
 * main.c
 */

int main(void) {

    WDTCTL = WDTPW | WDTHOLD;        // Stop watchdog timer
    initTimer();
    initSensors();
    RobotMovement(LEFT);
        for (;;)
      {
                   CenterSensorScan();
                   if (ADC10MEM > 0x2CC)
                           RobotMovement(RIGHT90);                      // Set P1.0 LED on
                   else if (ADC10MEM < 0x200)
                                      RobotMovement(BACK);

                        LeftSensorScan();
        if (ADC10MEM > 0x2CC)
                RobotMovement(RIGHT);
                        else if (ADC10MEM < 0x200)
                                 RobotMovement(LEFT);
                         RobotMovement(BACK);




      }
        return 0;
}
