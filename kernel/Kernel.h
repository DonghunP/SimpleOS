/*
 * Kernel.h
 *
 *  Created on: Jan 17, 2021
 *      Author: dhpark
 */

#ifndef KERNEL_KERNEL_H_
#define KERNEL_KERNEL_H_

#include "stdbool.h"

//#include "task.h"
#include "event.h"
#include "msg.h"

void Kernel_start(void);
void Kernel_yield(void);

void Kernel_send_events(uint32_t event_list);
KernelEventFlag_t  Kernel_wait_events(uint32_t waiting_list);

bool Kernel_send_msg(KernelMsgQ_t Qname, void *data, uint32_t count);
uint32_t Kernel_recv_msg(KernelMsgQ_t Qname, void *out_data, uint32_t count);
#endif /* KERNEL_KERNEL_H_ */
