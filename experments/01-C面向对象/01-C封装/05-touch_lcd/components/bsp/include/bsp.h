/**
 * @file   bsp.h
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
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 板级硬件初始化
 */
void bsp_init(void);

/**
 * @brief 板级硬件反初始化
 */
void bsp_deinit(void);


#ifdef __cplusplus
}
#endif
