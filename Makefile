# makefile for pwg
install: 
	gcc src/pwg.c -o src/pwg
	mkdir -p ${DESTDIR}${PREFIX}/bin
	cp -f src/pwg ${DESTDIR}${PREFIX}/bin
clean: 
	rm -f src/pwg
uninstall: 
	rm -f ${DESTDIR}${PREFIX}/bin/pwg
