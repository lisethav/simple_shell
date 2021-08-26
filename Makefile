shelling_ :
	gcc -g  -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

comp-holb- :
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o hsh

comp-holb_ :
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o hsh

chown :
	sudo chown dkbarb10 *

clean :
	rm -f shelling_ *.o *.gch *.out *hsh

clean_tops :
	sudo rm -rf /home/.Process.tmp;sudo rm -rf /home/.simple_shell_history

run :
	./hsh

running :
	./a.out ls /etc

shellingR :
	./_shelling

valgrind :
	echo "/bin/ls" | valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./hsh

valgrind2:
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./hsh
