/*
 * at_push.h
 *
 *  Created on: 2015��5��25��
 *      Author: Sunday
 */

#ifndef APP_USER_AT_BOARD_H_
#define APP_USER_AT_BOARD_H_

#include <c_types.h>
//
//
//void ICACHE_FLASH_ATTR at_setupInterval(uint8_t id, char *pPara);
//void ICACHE_FLASH_ATTR at_execPushInitial(uint8_t id);
//void ICACHE_FLASH_ATTR at_queryCmdPushStatus(uint8_t id);


void ICACHE_FLASH_ATTR at_queryReadDHT(uint8_t id);
void ICACHE_FLASH_ATTR at_setupLed(uint8_t id, char *pPara);
void ICACHE_FLASH_ATTR at_setupRedLed(uint8_t id, char *pPara);
void ICACHE_FLASH_ATTR at_setupGreenLed(uint8_t id, char *pPara);
void ICACHE_FLASH_ATTR at_setupBlueLed(uint8_t id, char *pPara);
void ICACHE_FLASH_ATTR at_setupButton(uint8_t id, char *pPara);
void ICACHE_FLASH_ATTR at_setupIR(uint8_t id, char *pPara);
void ICACHE_FLASH_ATTR at_setupRelax(uint8_t id, char *pPara);
void ICACHE_FLASH_ATTR at_execColorInit(uint8_t id);


void ICACHE_FLASH_ATTR test_key_init();

#endif /* APP_USER_AT_PUSH_H_ */