CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

act1: turtlec.c Actividades/actividad1.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c Actividades/actividad1.c -o act1 $(LDLIBS)

act2: turtlec.c Actividades/actividad2.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c Actividades/actividad2.c -o act2 $(LDLIBS)

act3: turtlec.c Actividades/actividad3.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c Actividades/actividad3.c -o act3 $(LDLIBS)

reto: turtlec.c Actividades/RetoFinal.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c Actividades/RetoFinal.c -o reto $(LDLIBS)

clean:
	rm -f act1 act2 act3 reto
