#include "../turtlec.h"

void fractalTree(Turtle *turtle, float length, int depth) {
  if (depth == 0 || length < 5)
    return;

  turtleForward(turtle, length);

  turtleLeft(turtle, 30);
  fractalTree(turtle, length * 0.7, depth - 1);

  turtleRight(turtle, 60);
  fractalTree(turtle, length * 0.7, depth - 1);

  turtleLeft(turtle, 30);
  turtleBackward(turtle, length);
}

void draw(Turtle *turtle) {
  turtleSetSpeed(turtle, 10.0f);

  turtlePenUp(turtle);
  turtleGoTo(turtle, 400, 550);
  turtlePenDown(turtle);

  turtleLeft(turtle, 90);

  fractalTree(turtle, 100, 4);
}

int main(void) {
  turtleRun(draw, 800, 600, "Actividad 1 - Arbol Fractal");
  return 0;
}
