// *********************************************************************
// A4_led.c										Version 05.01.2021_S hpw
// Blinken einer LED
// Dokumentation bcm2835:
// https://www.airspayce.com/mikem/bcm2835/index.html
// *********************************************************************

#include <stdio.h>						    // Header fuer Ein-/Ausgaben
#include <bcm2835.h>					    // Header fuer Broadcom

/// #define  PIN

int main(void){
    /// Init
    bcm2835_init();
    /// Select LED-PIN
    bcm2835_gpio_fsel(RPI_BPLUS_GPIO_J8_12, BCM2835_GPIO_FSEL_OUTP);
    /// Set LED-PIN to LOW
    bcm2835_gpio_clr(RPI_BPLUS_GPIO_J8_12);

    /// execute function 100 times
    for (int i = 0; i < 100; i++) {
        /// Set LED-PIN to HIGH
        bcm2835_gpio_set(RPI_BPLUS_GPIO_J8_12);
        /// Delay execution for 1000 ms (1s)
        bcm2835_delay(500);
        /// Set LED-PIN to LOW
        bcm2835_gpio_clr(RPI_BPLUS_GPIO_J8_12);
	bcm2835_delay(500);
    }

    bcm2835_gpio_clr(RPI_BPLUS_GPIO_J8_12);

    bcm2835_close();

	return 0;								// Programmende
}
