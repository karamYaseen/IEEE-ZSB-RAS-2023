/*********************************************************************************************/
/*************************** Name     :  Karam Yaseen   **************************************/
/*************************** Data     :  4/5/2023       **************************************/
/*************************** SWC      :  LCD            **************************************/
/*************************** E_Mail   :  karamyaseen725@gmail.com    *************************/
/*************************** version  :  1.0            **************************************/
/*********************************************************************************************/

#ifndef LCD_Confiq_H
#define LCD_Confiq_H

/* Options :    1-DIO_u8_PORTA
                2-DIO_u8_PORTB
                3-DIO_u8_PORTC
                4-DIO_u8_PORTD
*/

#define LCD_u8_CONTROL_PORT                DIO_u8_PORTA
#define LCD_u8_RS_PIN                      DIO_u8_PIN0
#define LCD_u8_RW_PIN                      DIO_u8_PIN1
#define LCD_u8_E_PIN                       DIO_u8_PIN2

#define LCD_u8_DATA_PORT                   DIO_u8_PORTB

#define COPY_MODE_flag                 	   LCD_u8_8BIT_MODE
#endif
