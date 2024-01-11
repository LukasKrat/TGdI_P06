// *********************************************************************
// A5_lm75.c									Version 05.01.2021_S hpw
// Frostwarner
// Dokumentation bcm2835:
// https://www.airspayce.com/mikem/bcm2835/index.html
// *********************************************************************
#include <stdio.h>						    // Header fuer Ein-/Ausgaben
#include <bcm2835.h>					    // Header fuer Broadcom

#define		PIN				RPI_BPLUS_GPIO_J8_12						// LED-Pin
#define		I2C_ADR			0x48										// Adresse LM75

int main(void){
	if(bcm2835_init()==0) return 1;										// Library initalisieren

    char buf[16] = "";

	// Pin als output einstellen

    /// Select LED-PIN
    bcm2835_gpio_fsel(RPI_BPLUS_GPIO_J8_12, BCM2835_GPIO_FSEL_OUTP);
    /// Set LED-PIN to LOW
    bcm2835_gpio_clr(RPI_BPLUS_GPIO_J8_12);

	// I2C initalisieren
    bcm2835_i2c_begin();

puts("setting address\n");

	// I2C Adresse einstellen
    bcm2835_i2c_setSlaveAddress(I2C_ADR);
	
//puts("address set\n");

puts("setting mode\n");
	// I2C Mode einstellen
     //bcm2835_aux_spi_setClockDivider(BCM2835_I2C_CLOCK_DIVIDER_150);
    bcm2835_i2c_setClockDivider(BCM2835_I2C_CLOCK_DIVIDER_626);

	// In Schleife
puts("begin reading\n");
    for (int i = 0; i < 100; ++i) {
        // Daten lesen und ausgeben
        bcm2835_i2c_read(buf,2);
        //int16_t bufInt = (((int16_t) (buf[0]) << 8) + buf[1]) >> 5;

	int16_t bufA = (int16_t) (buf[0]);
        int16_t bufB = buf[1];
        int16_t bufInt;         
        bufA =  bufA << 8;
	bufInt = bufA + bufB;
	bufInt = bufInt >> 5;
        // LED an- bzw. ausschalten
        printf("%d -> %f\n",bufInt, bufInt*0.125);
        // Pause

	if (bufInt < 0) 
		bcm2835_gpio_set(RPI_BPLUS_GPIO_J8_12);
	else 
		bcm2835_gpio_clr(RPI_BPLUS_GPIO_J8_12);
        delay(1000);
    }

    bcm2835_i2c_end();
    // I2C-Pins auf Standard

	if(bcm2835_close()==0) return 1;									// Library schließen
	return 0;								// Programmende
}
