// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
// created 4/4/1997 by snowcat
#include <ansi.h>

inherit ITEM;

void create()
{
  set_name("西梁国的传说", ({ "story" }) );
  set_weight(10);
  setup();
  set("unit", "册");
  set("long", @LONG

〖西梁国的传说〗

据说古西梁国的小公主天下招亲，惊动了大唐世人纷纷前往。此西梁国乃
西天取经必经之地，可谓一关。更有众多武林强手立志闯关西行，踏上征
程。

在西梁国，不同的玩家闯关时可能会遇到不同的难题，解题的难易程度不
一。比如：
  －误喝了子母河水如何落胎；
  －向小公主提亲被拒怎么办；
  －被小公主相中如何拒绝；
  －被小公主打入冷宫如何逃脱；
  －女玩家被小公主挽留时怎样答复；
  －武功不敌小公主怎样说服小公主放行
等等。

西梁国人多嘴杂，喜好议论街头新闻，所以玩家有了一个难题之后可能会
人人皆知，而很难再改头换面换一个难题去解。不过，一旦解决了难题就
能获得道行上的晋升。

∵雪豹∵

〖附西梁国简图〗

一线天［终点］
   ＼
    长别亭
     ｜＼            ※※※※※
     ｜山坡－迷宫出口※ 迷宫 ※
     ｜              ※※※※※   
     ｜                  后宫
     ｜                   ｜
     ｜          东侧殿－前宫－西侧殿
     ｜                   ｜
     ｜                王宫大门
     ｜                   ｜
     ｜      安乐巷西－安乐巷中－安乐巷东
     ｜         ｜　　　　｜　　　　｜                         ［起点］
   小路      儿女巷西－儿女巷中－儿女巷东                河东岸－山路
     ｜         ｜　　　　｜　　　　｜                     ｜
     ｜      桑花巷西－桑花巷中－桑花巷东         茅屋   河东岸
     ｜                                  ＼        ｜      ｜
     ｜                                三岔路口－河西岸…河东岸
     ｜                                    ｜
   小路－－－－小路－－－－－－－－－－－解阳山
                                           ｜
                                         聚仙庵
                                           ｜
                                          庵内

LONG
  );

  setup();
}

void init()
{
}

