
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

#endif