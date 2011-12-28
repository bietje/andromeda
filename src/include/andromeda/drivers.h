/*
 *  Andromeda
 *  Copyright (C) 2011  Bart Kuivenhoven
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __ANDROMEDA_DRIVERS_H
#define __ANDROMEDA_DRIVERS_H

#include <types.h>
#include <thread.h>

#ifdef __cplusplus
extern "C" {
#endif

#define DEVICE_NAME_SIZE 0x100

struct device;

struct driver
{
        int (*discover)(struct device* dev);
        int (*attach)(struct device* dev);
        int (*detach)(struct device* dev);
        int (*suspend)(struct device* dev);
        int (*resume)(struct device* dev);

        mutex_t driver_lock;
        uint32_t attach_cnt;
};

struct device
{
        struct device *parent;
        struct device *children;

        struct device *next;

        char   name[DEVICE_NAME_SIZE];

        struct driver *driver;
        void*  driver_data;

        mutex_t device_lock;
};

int dev_init();

#ifdef __cplusplus
}
#endif


#endif