# makefile for pwg
install: 
	gcc pwg.c -o pwg
	mkdir -p ${DESTDIR}${PREFIX}/bin
	cp -f pwg ${DESTDIR}${PREFIX}/bin
clean: 
	rm -f pwg
uninstall: 
	rm -f ${DESTDIR}${PREFIX}/bin/pwg
