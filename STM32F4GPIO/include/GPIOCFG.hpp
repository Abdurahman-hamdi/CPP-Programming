
#ifndef __GPIOCFG__
#define __GPIOCFG__
#include <cstdint>

typedef enum : std::uint8_t
{
    GPIOA=0,
    GPIOB,
    GPIOC,
    GPIOD,
    GPIOE,
    GPIOF,
    GPIOG,
    GPIOH,
    GPIOI,
    GPIOJ,
    GPIOK
}GPIO_port;


	class IO_DEF
	{
		public:
			void  configue();
			void  toggle_pins(std::uint16_t);
			void  set_pins(std::uint16_t);
			void  reset_pins(std::uint16_t);
			void  writeport(std::uint16_t);
			std::uint16_t  readport();
	};
	
	
	class USART_DEF
	{
		
		
		
		
	};
	
	
	class ADC_DEF
	{
		
		
		
	};
#endif