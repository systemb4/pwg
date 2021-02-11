# makefile for pwg
install: 
	gcc pwg.c -o pwg
	mkdir -p /bin
	cp -f pwg /bin
clean: 
	rm -f pwg
uninstall: 
	rm -f /bin/pwg
