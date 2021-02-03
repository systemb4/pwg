# makefile for pwg
install: 
	gcc pwg.c -o pwg
	mkdir -p ${DESTDIR}${PREFIX}/bin
	cp -f pwg ${DESTDIR}${PREFIX}/bin
	cp -u config.def.h config.h
clean: 
	rm -f pwg
uninstall: 
	rm -f ${DESTDIR}${PREFIX}/bin/pwg
