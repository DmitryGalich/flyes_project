#ifndef DATA_HOLDER
#define DATA_HOLDER

#include <memory>

#include "cell.h"
#include "fly.h"

class DataHolder {
 public:
  DataHolder() : flies_(3), cells_(9) {}
  ~DataHolder() = default;

  std::vector<Fly>& GetFlies() { return flies_; }
  std::vector<Cell>& GetCells() { return cells_; }

 private:
  std::vector<Fly> flies_;
  std::vector<Cell> cells_;
};

#endif
