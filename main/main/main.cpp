#include <nvs_flash.h>
#include "socket_tasks.hpp"

// Link app_main
extern "C" { void app_main(); }

void app_main()
{
    // Initialize flash
    ESP_ERROR_CHECK(nvs_flash_init());

    initialize_wifi();

    // xTaskCreate(&client_task, "client_task", 8196, NULL, 10, NULL);
    // xTaskCreate(&server_task, "server_task", 8196, NULL, 10, NULL);

    // xTaskCreate(DecoderTask,  "DecoderTask",  4098, NULL, PRIORITY_HIGH, NULL);
    // xTaskCreate(WatchdogTask, "WatchdogTask", 256,  NULL, PRIORITY_HIGH,   NULL);
    // xTaskCreate(TxTask,       "TxTask",       1024, NULL, PRIORITY_MEDIUM, NULL);
    // xTaskCreate(RxTask,       "RxTask",       1024, NULL, PRIORITY_MEDIUM, NULL);
    // xTaskCreate(LCDTask,      "LCDTask",      2048, NULL, PRIORITY_HIGH, NULL);
}