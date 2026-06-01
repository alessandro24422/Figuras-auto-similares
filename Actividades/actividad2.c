#include "../turtlec.h"

void fractalTree(Turtle *turtle, float length, int depth) {
  if (depth == 0 || length < 5)
    return;

  if (depth > 5)
    turtleSetColor(turtle, 120, 70, 20);
  else
    turtleSetColor(turtle, 0, 200, 0);

  turtleForward(turtle, length);

  turtleLeft(turtle, 20);
  // turtleLeft(turtle, 30);
  // turtleLeft(turtle, 45);

  fractalTree(turtle, length * 0.6, depth - 1);
  // fractalTree(turtle, length * 0.7, depth - 1);
  // fractalTree(turtle, length * 0.8, depth - 1);

  turtleRight(turtle, 40);
  // turtleRigt(turtle, 60);
  // turtleRight(turtle, 90);

  fractalTree(turtle, length * 0.6, depth - 1);
  // fractalTree(turtle, length * 0.7, depth - 1);
  // fractalTree(turtle, length * 0.8, depth - 1);

  turtleLeft(turtle, 20);
  // turtleLeft(turtle, 30);
  // turtleLeft(turtle, 45);

  turtleBackward(turtle, length);
}

void draw(Turtle *turtle) {
  turtleSetSpeed(turtle, 10.0f);

  turtlePenUp(turtle);
  turtleGoTo(turtle, 400, 550);
  turtlePenDown(turtle);

  turtleLeft(turtle, 90);

  fractalTree(turtle, 120, 5);
}

int main(void) {
  turtleRun(draw, 800, 600, "Actividad 2 - Variacion");
  return 0;
}
