#ifndef __GPIOD__
#define __GPIOD__

#include"GPIOCFG.hpp"
#include<cstdint>
#include<memory>
#include "stm32f4xx_gpio.h"

//prototype for GPIO model
namespace IO
{
	/**/
	template< GPIO_port T, typename type>
	class GPIO
	{

	public:
		explicit GPIO(std::unique_ptr<type> custom_port):port{std::move(custom_port)}
			{
				
			}
	
		GPIO(const GPIO& )=delete;//ports cann't be copied into each other as they are not same


		~GPIO()
		{
			//TBD
		}
	private:	
	// a poiter to the object that will perform all the acticvties of conguired port whatever uart, adc..etc
		std::unique_ptr<type> port; 
	};
	
	
}

#endif