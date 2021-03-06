/*
 * event.c
 *
 *  Created on: Jan 17, 2021
 *      Author: dhpark
 */

#include "stdint.h"
#include "stdbool.h"

#include "event.h"

static uint32_t sEventFlag;

void Kernel_evern_flag_init(void)
{
    sEventFlag = 0;
}

void Kernel_event_flag_set(KernelEventFlag_t event)
{
    sEventFlag |= (uint32_t)event;
}

void Kernel_event_flag_clear(KernelEventFlag_t event)
{
    sEventFlag &= ~((uint32_t)event);
}

bool Kernel_event_flag_check(KernelEventFlag_t event)
{
    if(sEventFlag & (uint32_t)event)
    {
        Kernel_event_flag_clear(event);
        return true;
    }
    return false;
}