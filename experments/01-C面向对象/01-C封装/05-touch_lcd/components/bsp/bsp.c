/**
 * @file   bsp.c
 * @author xLumina
 * @date   2026-04-27
 * @brief  板级总驱动
 * 
 * @par History:	修改历史
 *   - V1.0.0 | 2026-4-27 | xLumina | 初始版本创建
 *
 * @par Function List:	功能函数
 * 
 */


#include "bsp.h"
#include "bsp_spi.h"
#include "bsp_display.h"
#include "bsp_touch.h"

/*========= c标准库 =========*/
#include <stdio.h>


void bsp_init(void)
{

    bsp_spi_init();

}

void bsp_deinit(void)
{

    bsp_spi_deinit();
    
}
