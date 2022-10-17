#ifndef QUIZ_ANSWER_H
#define QUIZ_ANSWER_H


#include <string>

class Answer {
public:
  explicit Answer(const std::string& text, bool isCorrect);

  std::string text;
  bool isCorrect;
  bool isSelected;
};


#endif //QUIZ_ANSWER_H
