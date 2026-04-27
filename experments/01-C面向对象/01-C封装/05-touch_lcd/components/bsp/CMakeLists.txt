idf_component_register(SRCS "bsp.c"
                    INCLUDE_DIRS "include"
                    REQUIRES bsp_spi bsp_touch bsp_display)
