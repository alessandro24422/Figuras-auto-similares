#include "../turtlec.h"
#include <math.h>

void levy(Turtle *turtle, float length, int depth) {
  if (depth == 0) {
    turtleForward(turtle, length);
    return;
  }

  turtleLeft(turtle, 45);

  levy(turtle, length / sqrt(2.0), depth - 1);

  turtleRight(turtle, 90);

  levy(turtle, length / sqrt(2.0), depth - 1);

  turtleLeft(turtle, 45);
}

void draw(Turtle *turtle) {
  turtleSetSpeed(turtle, 10.0f);

  turtlePenUp(turtle);
  turtleGoTo(turtle, 250, 300);
  turtlePenDown(turtle);

  levy(turtle, 300, 5);
}

int main(void) {
  turtleRun(draw, 800, 600, "Actividad 3 - Levy C");
  return 0;
}
