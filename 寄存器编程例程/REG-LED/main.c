#include "stm32f10x.h"

int main(void)
{	
	//��GPIOB�˿�ʱ��
	*(unsigned int *)0x40021018 |= (  (1)  <<  3 );
	
	//����IO��Ϊ���
	*(unsigned int *)0x40010C00 |= (  (1)  <<  (4*0)  );
	
	//����ODR�Ĵ���
	*(unsigned int *)0x40010C0C &= ~(1<<0);
}

void SystemInit(void)
{
	//������Ϊ�գ�ƭ��������������
}

