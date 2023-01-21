/****************************************************************/
/****************************************************************/
/*****************		Author:Ahmed Khaled		*****************/
/*****************		Lyer:MCAL				*****************/
/*****************		SWC:DIO					*****************/
/*****************		Version:1.00			*****************/
/****************************************************************/
/****************************************************************/

#ifndef DIO_REGISTER_H_
#define DIO_REGISTER_H_



#define PINA		 *((volatile u8*)0X39)
#define PINB 		 *((volatile u8*)0X36)
#define PINC		 *((volatile u8*)0X33)
#define PIND		 *((volatile u8*)0X30)

#define PORTA		 *((volatile u8*)0X3b)
#define PORTB		 *((volatile u8*)0X38)
#define PORTC		 *((volatile u8*)0X35)
#define PORTD		 *((volatile u8*)0X32)

#endif
