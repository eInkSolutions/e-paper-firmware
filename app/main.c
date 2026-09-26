#include <stdio.h>

#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_idf_version.h"
#include "esp_system.h"

void app_main(void)
{
    esp_chip_info_t chip_info;
    uint32_t flash_size = 0;

    esp_chip_info(&chip_info);
    esp_flash_get_size(NULL, &flash_size);

    printf("\n=== e-paper-firmware hardware information ===\n");
    printf("IDF version: %s\n", esp_get_idf_version());
    printf("Target: %s\n", CONFIG_IDF_TARGET);
    printf("Chip cores: %d\n", chip_info.cores);
    printf("Chip revision: %d\n", chip_info.revision);
    printf("Embedded flash: %s\n", (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "yes" : "no");
    printf("Wi-Fi: %s\n", (chip_info.features & CHIP_FEATURE_WIFI_BGN) ? "yes" : "no");
    printf("BLE: %s\n", (chip_info.features & CHIP_FEATURE_BLE) ? "yes" : "no");
    printf("Flash size: %lu MB\n", (unsigned long)(flash_size / (1024 * 1024)));
    printf("============================================\n\n");
}
