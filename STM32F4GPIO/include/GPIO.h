#ifndef __GPIOD__
#define __GPIOD__

#include<cstdint>
#include<memory>
#include "stm32f4xx_gpio.h"


namespace IO
{
	template< GPIO_port T, config_stratgy type>
	class GPIO
	{

	public:
		GPIO(std::unique_ptr<type> custom_port):port{std::move(custom_port)}
			{
				
			}
	

	private:	
		std::unique_ptr<type> port;
	
	};
	
	
}

#endif