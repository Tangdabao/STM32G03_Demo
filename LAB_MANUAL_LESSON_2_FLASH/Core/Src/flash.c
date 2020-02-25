#include "flash.h"

/*******************************************************************************
** ����	      FLASH��ʼ��
** ����       ��
** ����ֵ	    ��
** ע��       
** �޸���־
*******************************************************************************/
void FLASH_Init(void)
{
    HAL_FLASH_Unlock();
    __HAL_FLASH_CLEAR_FLAG(FLASH_FLAG_ALL_ERRORS);
    HAL_FLASH_Lock();
}

/*******************************************************************************
** ����	      ��Flash��һ�ֽ�����
** ����       add:�洢����ַ,��0��ʼ
** ����ֵ	    ����������
** ע��       
** �޸���־
*******************************************************************************/
uint8_t FLASH_ReadOneByte(uint32_t add)
{
		return *(__IO uint8_t*)(add);
}


/*******************************************************************************
** ����	      ��Flash�����ֽ�����
** ����       add:�洢����ַ,��0��ʼ
** ����ֵ	    ����������
** ע��       
** �޸���־
*******************************************************************************/
uint32_t FLASH_ReadDword(uint32_t add)
{	
		return *(__IO uint32_t*)(add);
}


/*******************************************************************************
** ����	      ��Flash��ȡ�������
** ����       add:�洢����ַ,��0��ʼ
              p_rbuf:��ȡ�������ݴ�ŵĻ���ָ��
              nbyte��Ҫ��ȡ������������λ���ֽ�
** ����ֵ	    ��
** ע��       
** �޸���־
*******************************************************************************/
void FLASH_ReadnBytes(uint32_t add, uint8_t * p_rbuf, uint32_t nbyte)
{
    //add += FLASH_BASE;//����Flashʵ�ʵ�ַ    
    while(nbyte>0)
    {
        *p_rbuf = *(__IO uint8_t*)add;
        add++;
        p_rbuf++;
        nbyte--;
    }
}