/*
    Orion OS, The educational operatingsystem
    Copyright (C) 2011  Bart Kuivenhoven

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <mm/memory.h>
#include <mm/heap.h>
#include <error/panic.h>

int heapBase = 0;
int heapSize = 0;

int initHeap(int base, int size)
{
	heapBase = base;
	heapSize = size;
	
	initBlockMap();
	
#ifndef __COMPRESSED
	initPaging(heapBase, heapSize);
#endif
	return base;
}

int requestPage(int i)
{
	return -1;
}

void initPaging (int *heapPtr, int size)
{
	panic("Paging wasn't initialised!");
}

void memset(int* offset, int value, int size)
{
	int i = 0;
	for (; i <= size; i++)
	{
		offset[i] = value;
	}
}