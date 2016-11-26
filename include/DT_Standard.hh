// DT_Standard.hh --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 六 11月 26 10:27:40 2016 (+0800)
// Last-Updated: 六 11月 26 19:23:12 2016 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 4
// URL: http://wuhongyi.cn 

#ifndef _DT_STANDARD_H_
#define _DT_STANDARD_H_

#include "Global.hh"

#include "Board.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class DT_Standard : public Board
{
public:
  DT_Standard(Digitizer* dig,const char *name);
  virtual ~DT_Standard();

  virtual int ProgramDigitizer();
  virtual int AllocateMemory();
  
};

#endif /* _DT_STANDARD_H_ */
// 
// DT_Standard.hh ends here
