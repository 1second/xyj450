// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
// create by snowcat.c 12/15/1997

inherit ROOM;

void create ()
{
  set ("short", "山路");
  set ("long", @LONG

一条山路蜿蜿蜒蜒盘山而上，山路边杂草丛生野花生艳。杂草
后面露出奇石岩，爬着青藤绿蔓。远山蒙笼，云雾在远谷里起
伏飘散。

LONG);

  set("exits", ([
        "eastup"   : __DIR__"shanlu3",
        "southeast"   : __DIR__"shanlu4",
      ]));
  set("outdoors", __DIR__);

  setup();
}



