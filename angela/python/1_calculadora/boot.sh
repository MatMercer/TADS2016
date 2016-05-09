#!/bin/bash

#se o comando realpath ou python3 nao 
#existir ele os instala automaticamente
if ! type "realpath" > /dev/null; then
	sudo apt-get install realpath
fi

if ! type "python3" > /dev/null; then
	sudo apt-get install python3
fi

CALC=$(realpath ./calc.py)

python3 -i -c "exec(\"import os\\nfrom subprocess import call\\nexec(open('$CALC').read())\")"