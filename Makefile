# makefile for pwg
pwg: 
	gcc pwg.c -o pwg
install: pwg
	mkdir -p /bin
	cp -f pwg /bin
	cp -f pwg.1 /usr/local/man/man1
clean: 
	rm -f pwg
uninstall: 
	rm -f /bin/pwg
	rm -f /usr/local/man/man1/pwg.1
