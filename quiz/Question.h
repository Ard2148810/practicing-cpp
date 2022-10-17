#ifndef QUIZ_QUESTION_H
#define QUIZ_QUESTION_H


#include <string>
#include <vector>
#include "Answer.h"

class Question {
  std::string questionText;
  std::vector<Answer> answers;
public:
  explicit Question(const std::string &questionText);

  void addAnswer(const Answer& answer);
  std::vector<Answer> getAnswers();
  std::string getQuestionText();
  void toggleAnswer(int answerIndex);
};


#endif //QUIZ_QUESTION_H
