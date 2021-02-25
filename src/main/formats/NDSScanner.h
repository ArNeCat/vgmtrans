#pragma once
#include "Scanner.h"

class NDSScanner:
    public VGMScanner {
 public:
  NDSScanner(void) {
    USE_EXTENSION(L"nds")
    USE_EXTENSION(L"sdat")
      USE_EXTENSION(L"DSE")
  }
  virtual ~NDSScanner(void) {
  }


  virtual void Scan(RawFile *file, void *info = 0);
  void SearchForSDAT(RawFile *file);
  uint32_t LoadFromSDAT(RawFile *file, uint32_t offset);
      void SearchForDSE(RawFile *file);
  uint32_t LoadFromDSE(RawFile *file, uint32_t offset);
};
