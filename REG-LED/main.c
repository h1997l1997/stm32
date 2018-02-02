#include "stm32f10x.h"

int main(void)
{	
	//打开GPIOB端口时钟
	*(unsigned int *)0x40021018 |= (  (1)  <<  3 );
	
	//配置IO口为输出
	*(unsigned int *)0x40010C00 |= (  (1)  <<  (4*0)  );
	
	//控制ODR寄存器
	*(unsigned int *)0x40010C0C &= ~(1<<0);
}

void SystemInit(void)
{
	//函数体为空，骗过编译器不报错
}

