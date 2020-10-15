// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
// Room: /u/mimi/zhuziguo/wall.c  snowcat moved to /d/qujing/wuji
inherit ROOM;

void create()
{
  set ("short", "宫墙外围");
  set ("long", @LONG

这里是王宫的宫墙外围，高大的墙壁乃是青石垒成，十分结实整齐。
宫墙上方有一个哨亭角楼。

LONG);

  set("exits", ([ /* sizeof() == 1 */
    "west" : __DIR__"wall2",
    "east" : __DIR__"zym",
  ]));
  set("objects", ([ /* sizeof() == 1 */
    __DIR__"npc/weishi" : 3,
  ]));
  set("outdoors", __DIR__"");                   
  setup();
}

int valid_leave (object who, string dir)
{
  object shi = present ("wei shi", environment(who));
  if (dir == "west" && shi && living (shi))
      return notify_fail (shi->query("name")+"喝道：禁行！\n");
  return ::valid_leave(who, dir);
}
