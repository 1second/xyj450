// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","������");
  set("long",@LONG
���������ǹ������������ֳ���֦ˮƿ����ʨ����������٤
ɽ��֮�䣬����������Э�ţ�������Ϊ������������ʨΪ����������
����ΧΪ�����Ҿ����Ʋ���ʮ���Ρ�
LONG
  );
  set("exits",([
            "south":__DIR__"weituo.c",
            "north":__DIR__"luohan.c",
            "west" :__DIR__"zhaitang.c",
            "east" :__DIR__"xiangji.c"
               ]));
          set("objects", ([
                __DIR__"npc/bonze8" : 1,
       ]) );
	set("NONPC",1);   
  setup();
  replace_program(ROOM);
}
