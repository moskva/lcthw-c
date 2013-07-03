**argc**
	argument count

**argv**
	argument vector

`argc` will be the number of strings pointed to by `argv`. They can also be omitted entirely, yielding `int main()`.

`puts` VS. `printf`
	- `puts` adds `\n` to the end of string automatically
	- `printf` don't do it 

`CFLAGS="-Wall" make <file>`
	- `-W` represents warnings.
	- `-Wall` means it will show all possible warnings.