// *********************************************************************
// A6_pwm.c										Version 05.01.2021_S hpw
// LED-Dimmer
// Dokumentation bcm2835:
// https://www.airspayce.com/mikem/bcm2835/index.html
// *********************************************************************

#include <stdio.h>						    // Header fuer Ein-/Ausgaben
#include <bcm2835.h>					    // Header fuer Broadcom

#define	PIN				RPI_BPLUS_GPIO_J8_12							// PWM-Pin
#define	PWM_CHANNEL		0												// PWM-Channel
#define	PWM_RANGE		1024											// PWM-Range
#define SPEED			1												// Geschwindigkeit

int main(void){
	if(bcm2835_init()==0) return 1;										// Library initalisieren

	// PWM Funktionalität an Pin freischalten
	/// Select LED-PIN
   bcm2835_gpio_fsel(RPI_BPLUS_GPIO_J8_12, BCM2835_GPIO_FSEL_ALT5);
    /// Set LED-PIN to LOW
   //bcm2835_gpio_clr(RPI_BPLUS_GPIO_J8_12);
	// PWM Frequenz einstellen

bcm2835_pwm_set_clock(BCM2835_PWM_CLOCK_DIVIDER_16);

	// PWM Modus einstellen und starten

//bcm2835_pwm_set_clock(BCM2835_PWM_CLOCK_DIVIDER_16);
    bcm2835_pwm_set_mode(0,1,1);
    bcm2835_pwm_set_range(0,1024);

	// PWM Range einstellen

	// In Schleife
		// PWM Duty einstellen
		// Pause
while (1==1) {
	for (uint32_t i=0;i<1024;i++) {
	bcm2835_pwm_set_data(0,i);
	bcm2835_delay(10);
}

for (uint32_t i=1024;i> 0;i--) {
        bcm2835_pwm_set_data(0,i);
        bcm2835_delay(10);

}}

	if(bcm2835_close()==0) return 1;									// Library schließen
	return 0;								// Programmende
}
