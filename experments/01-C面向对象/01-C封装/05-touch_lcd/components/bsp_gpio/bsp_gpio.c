/**
 * @file   bsp_gpio.c
 * @author xLumina
 * @date   2026-04-27
 * @brief  板级gpio驱动
 * 
 * @par History:	修改历史
 *   - V1.0.0 | 2026-4-27 | xLumina | 初始版本创建
 *
 * @par Function List:	功能函数
 * 
 */

static const char *TAG = "bsp_gpio";

#include "bsp_gpio.h"
#include "board_pin.h"

/********** C库 ***********/
#include <stdio.h>

/********** 平台相关库 **********/
#include "driver/gpio.h"
#include "esp_log.h"



uint8_t bsp_gpio_init(void)
{
    esp_err_t ret;
    /* 输出 GPIO 引脚配置 */
    const gpio_config_t cfg = {
        .pin_bit_mask   = 1ULL << DISPLAY_RESET_PIN | 1ULL << DISPLAY_DC_PIN,
        .mode           = GPIO_MODE_OUTPUT,
        .pull_down_en   = GPIO_PULLDOWN_DISABLE,
        .pull_up_en     = GPIO_PULLUP_DISABLE,
        .intr_type      = GPIO_INTR_DISABLE,
    };
    ret = gpio_config(&cfg);
    if (ESP_OK != ret) {
        ESP_LOGW(TAG, "BSP GPIO init fail [%d]\r\n", ret);
        return 0;
    }
    /* 输入 GPIO 引脚配置 */



    ESP_LOGI(TAG, "BSP GPIO init success\r\n");
    return 1;
}


uint8_t bsp_gpio_deinit(void)
{

}