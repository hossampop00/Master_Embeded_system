/*
 * main.c
 *
 *  Created on: Oct 12, 2022
 *      Author: Hossam Eldesokey
 */

//Led Toggle

#include <stdint.h>

//Register Address
#define RCC_BASE 0x40021000
#define PortA_BASE 0x40010800

#define RCC_APB2ENR  *(volatile uint32_t *) (RCC_BASE + 0x18)
#define GPIOA_CRH    *(volatile uint32_t *) (PortA_BASE + 0x04)
#define GPIOA_ODR    *(volatile uint32_t *) (PortA_BASE + 0x0c)

typedef volatile unsigned int vuint32_t ;
//------bit field------
typedef union {
	vuint32_t all_fields ;
	struct{
		vuint32_t reserved:13 ; // 0 to bit 12
		vuint32_t pin13:1 ;     // set bit 13
	}pin;

}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(PortA_BASE + 0x0c) ;

int main(void)
{
	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH &= 0xFFF0FFFF;  // GPIO_PA_CRH &= ~(1<<) ???
	GPIOA_CRH &= 0x00020000;

	while(1)
	{
		//GPIOA_ODR |= 1<<13;       //set bit 13
		R_ODR->pin.pin13 = 1;
		for(int i;i<5000;i++);    // delay
		//GPIOA_ODR &= ~(1<<13);    //clear bit 13
		R_ODR->pin.pin13 = 0;
		for(int i;i<5000;i++);    // delay

	}

	return 0;
}


