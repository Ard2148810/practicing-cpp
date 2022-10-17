#ifndef QUIZ_QUIZ_H
#define QUIZ_QUIZ_H


#include <vector>
#include "Question.h"

class Quiz {
  std::vector<Question> questions;
public:
  explicit Quiz(const std::string &questions);
};


#endif //QUIZ_QUIZ_H
