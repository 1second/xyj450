//mac's houzai.c
// 
// 


#include <room.h>
inherit ROOM;
void create()
{
  set("short","������");
  set("long",@LONG
�������ĺ��ţ������Ǹ����ɵ���שΧǽ�������򱱱���̩ɽ
�ˣ�������ۻ��ǱشӴ��ţ���˳�Ϊ�����ţ�Ϊ���ض������˼��
LONG
  );
  set("exits",([
 //        "north":"/d/suburb/fy/taishan/daizong.c",
         "south":__DIR__"tongting.c",
         "west" :__DIR__"jiaolou3.c",
         "east" :__DIR__"jiaolou4.c",
               ]));
        set("objects", ([
                __DIR__"npc/tie" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
