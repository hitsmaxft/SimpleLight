#include <gba_video.h>
#include <gba_interrupt.h>
#include <gba_systemcalls.h>
#include <gba_input.h>
#include <stdio.h>
#include <stdlib.h>
#include <gba_base.h>
#include <gba_dma.h>
#include <string.h>
#include <stdarg.h>
#include <gba_timers.h>

#define MOD_SET_INDEX 64

u16 IWRAM_CODE Read_MOD_info()
{
    return Read_SET_info(MOD_SET_INDEX);
}

//TODO
u16 IWRAM_CODE Read_MOD_Enable(u8 key, u16 info) 
{
    //check valid key
    return info & key == 1;
}