;   Orion OS, The educational operatingsystem
;   Copyright (C) 2011  Bart Kuivenhoven

;   This program is free software: you can redistribute it and/or modify
;   it under the terms of the GNU General Public License as published by
;   the Free Software Foundation, either version 3 of the License, or
;   (at your option) any later version.

;   This program is distributed in the hope that it will be useful,
;   but WITHOUT ANY WARRANTY; without even the implied warranty of
;   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;   GNU General Public License for more details.

;   You should have received a copy of the GNU General Public License
;   along with this program.  If not, see <http://www.gnu.org/licenses/>.

%include "asm/call.mac"

[GLOBAL readCR0]
readCR0:
  mov eax, cr0
  ret

[GLOBAL writeCR0]
  enter

  mov eax, [ebp+8]
  mov cr0, eax

  return

[GLOBAL readCR3]
readCR3:
  mov eax, cr3
  ret

[GLOBAL writeCR3]
writeCR3:
  enter

  mov eax, [ebp+8]
  mov cr3, eax

  return

[GLOBAL mutex_lock]
mutex_lock:
  enter

  mov eax, 1
  mov ebx, [ebp+8]
.spin:
  xchg [ebx], eax
  test eax, eax
  jnz .spin

  return

[GLOBAL mutex_test] ; // Return 0 if mutex was unlocked, 1 if locked
mutex_test:
  enter

  mov eax, 1
  xchg [ebp+8], eax

  return


[GLOBAL mutex_unlock]
mutex_unlock:
  enter
  xor eax, eax
  mov [ebp+8], eax
  return
