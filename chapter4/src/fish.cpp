/*作者：lu
  日期：
  版权：
*/ #include "fish.h"

fish::fish():type("金枪鱼"),weight(12),length(1.1)
{
    //ctor
    cout << type << weight << length;
}

fish::~fish()
{
    //dtor
}
