/*
 * Copyright (C) 2010 Julien BLACHE <jb@jblache.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdint.h>
#include <inttypes.h>

#include "conffile.h"
#include "logger.h"
#include "player.h"
#include "laudio.h"


void
laudio_write(uint8_t *buf, uint64_t rtptime)
{
      DPRINTF(E_LOG, L_LAUDIO, "Dummy local device, writing not supported\n");
      return;
}

uint64_t
laudio_get_pos(void)
{
    return 0;
}

void
laudio_set_volume(int vol)
{
    return;
}

int
laudio_start(uint64_t cur_pos, uint64_t next_pkt)
{
      DPRINTF(E_LOG, L_LAUDIO, "Cannot start dummy audio device\n");
      return -1;
}

void
laudio_stop(void)
{
  return;
}

int
laudio_open(void)
{
      DPRINTF(E_LOG, L_LAUDIO, "Cannot open dummy audio device\n");
      return -1;
}

void
laudio_close(void)
{
  return;
}


int
laudio_init(laudio_status_cb cb)
{
  return 0;
}

void
laudio_deinit(void)
{
  return;
}
