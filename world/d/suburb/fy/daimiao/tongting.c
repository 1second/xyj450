//mac's tongting.c
// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","ͭͤ����");
  set("long",@LONG
��ǰ��������һ�������ɵ�ͭ��ͤ�ӣ�ͤ��Ϊһʵ������������
�����������ƣ�ɽˮ��ʯ��Ԣ��������գ����������ɽ���곤����
˼��
LONG
  );
  set("exits",([
         "north":__DIR__"houzai.c",
         "south":__DIR__"houqing.c",
               ]));
        set("objects", ([
                __DIR__"npc/master" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
