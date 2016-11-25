// Board.hh --- 
// 
// Description: 
// Author: Hongyi Wu(吴鸿毅)
// Email: wuhongyi@qq.com 
// Created: 五 11月 25 19:44:44 2016 (+0800)
// Last-Updated: 五 11月 25 21:16:57 2016 (+0800)
//           By: Hongyi Wu(吴鸿毅)
//     Update #: 3
// URL: http://wuhongyi.cn 

#ifndef _BOARD_H_
#define _BOARD_H_

#include "Global.hh"
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class Board
{
public:
  Board(Digitizer* dig);
  virtual ~Board();

private:
  Digitizer* digitizer;

};

#endif /* _BOARD_H_ */
// 
// Board.hh ends here
