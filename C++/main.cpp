#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>

struct Vector2D
{
  float x = 0.0f;
  float y = 0.0f;

  Vector2D() = default;

  Vector2D(float _x, float _y)
    {
      x = _x;
      y = _y;
    }
};

inline float Distance2D(const Vector2D &v1, const Vector2D &v2)
{
  return sqrt(powf(v2.x-v1.x, 2.0f) + powf(v2.y-v1.y, 2.0f));
}

//creates a random Vector2D object for task 1
inline Vector2D RandomVector2D()
{
  float x = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/500));
  float y = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/500));
  if((rand() % 2) == 0)
  {
    x *= -1.0f;
  }
  if((rand() % 2) == 0)
  {
    y *= -1.0f;
  }
  return Vector2D(x,y);
}


int main()
{
  srand ( time(NULL) );

  std::vector<Vector2D> points;
  Vector2D origin = Vector2D(0.0f, 0.0f);

  float currentDistance = 0.0f;

  //used for task 2
  unsigned int maxDistanceIndex = 0;
  float maxDistance = 0.0f;

  //used for task 4
  unsigned int minDistanceIndex = 0;
  float minDistance = 707.107f;

  //used for task 3
  double totalx = 0.0;
  double totaly = 0.0;

  //used for task 5
  unsigned int Q1Count = 0;
  unsigned int Q2Count = 0;
  unsigned int Q3Count = 0;
  unsigned int Q4Count = 0;

  //task 1
  for(int i = 0; i < 1000; i++)
  {
    points.push_back(RandomVector2D());
    currentDistance = Distance2D(points[i], origin);

    //task 2
    if(currentDistance > maxDistance)
    {
      maxDistance = currentDistance;
      maxDistanceIndex = i;
    }

    //task 4
    if(currentDistance < minDistance)
    {
      minDistance = currentDistance;
      minDistanceIndex = i;
    }

    //first part of task 3
    totalx += points[i].x;
    totaly += points[i].y;

    //task 5. Didn't consider edge cases
    if(points[i].x >= 0 && points[i].y >= 0)
    {
      Q1Count += 1;
    } else
    if(points[i].x >= 0 && points[i].y < 0)
    {
      Q2Count += 1;
    } else
    if(points[i].x < 0 && points[i].y < 0)
    {
      Q3Count += 1;
    } else
    if(points[i].x < 0 && points[i].y >= 0)
    {
      Q4Count += 1;
    }
  }

  //end of task 2
  std::cout << "The farthest point from zero is at index " << maxDistanceIndex << std::endl;

  //end of task 4
  std::cout << "The closest point to zero is at index " << minDistanceIndex << std::endl;

  //end of task 3
  Vector2D averageVector2D = Vector2D(totalx / 1000.0, totaly / 1000.0);
  std::cout << "the average position is x: " << averageVector2D.x << " y: " << averageVector2D.y << std::endl;

  //end of task 5
  if(Q1Count >= Q2Count && Q1Count >= Q3Count && Q1Count >= Q4Count)
    std::cout << "Q1 has the greatest number of points" << std::endl;
  if(Q2Count >= Q1Count && Q2Count >= Q3Count && Q2Count >= Q4Count)
    std::cout << "Q2 has the greatest number of points" << std::endl;
  if(Q3Count >= Q1Count && Q3Count >= Q2Count && Q3Count >= Q4Count)
    std::cout << "Q3 has the greatest number of points" << std::endl;
  if(Q4Count >= Q1Count && Q4Count >= Q2Count && Q4Count >= Q3Count)
    std::cout << "Q3 has the greatest number of points" << std::endl;

  return 0;
}
