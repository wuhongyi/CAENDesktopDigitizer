// DT_PSD.hh --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 六 11月 26 10:23:23 2016 (+0800)
// Last-Updated: 六 12月  3 17:45:30 2016 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 6
// URL: http://wuhongyi.cn 

#ifndef _DT_PSD_H_
#define _DT_PSD_H_

#include "Global.hh"

#include "Board.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class DT_PSD : public Board
{
public:
  DT_PSD(Digitizer* dig,const char *name);
  virtual ~DT_PSD();


  virtual int ProgramDigitizer();
  virtual int AllocateMemory();
  virtual int GetEvent();
  virtual int GetWaveform();
  
private:
  




};

#endif /* _DT_PSD_H_ */

// 
// DT_PSD.hh ends here
