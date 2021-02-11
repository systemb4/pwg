# makefile for pwg
install: 
	gcc pwg.c -o pwg
	mkdir -p /bin
	cp -f pwg /bin
	cp -f pwg.1 /usr/local/man/man1
clean: 
	rm -f pwg
uninstall: 
	rm -f /bin/pwg
