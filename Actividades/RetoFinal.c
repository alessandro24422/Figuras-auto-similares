#include "../turtlec.h"

void fractalTree3(Turtle *turtle, float length, int depth) {
  if (depth == 0 || length < 5)
    return;

  turtleForward(turtle, length);

  turtleLeft(turtle, 40);
  fractalTree3(turtle, length * 0.7, depth - 1);

  turtleRight(turtle, 40);
  fractalTree3(turtle, length * 0.7, depth - 1);

  turtleRight(turtle, 40);
  fractalTree3(turtle, length * 0.7, depth - 1);

  turtleLeft(turtle, 40);

  turtleBackward(turtle, length);
}

void draw(Turtle *turtle) {
  turtleSetSpeed(turtle, 10.0f);

  turtleSetColor(turtle, 120, 70, 20);

  turtlePenUp(turtle);
  turtleGoTo(turtle, 400, 550);
  turtlePenDown(turtle);

  turtleLeft(turtle, 90);

  fractalTree3(turtle, 200, 3);
}

int main(void) {
  turtleRun(draw, 800, 600, "Reto Final - Arbol de 3 ramas");

  return 0;
}
