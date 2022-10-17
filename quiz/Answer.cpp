#include "Answer.h"

Answer::Answer(const std::string& text, const bool isCorrect) {
  this->text = text;
  this->isCorrect = isCorrect;
  this->isSelected = false;
}
