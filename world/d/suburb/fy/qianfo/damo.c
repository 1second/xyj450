// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","��Ħ��");
  set("long",@LONG
�����ĦΪ�й����ڵ�ʼ�棬����ɽ�����´��ڹ������ţ�����
����Ϊ����֮�棬������ʦ�����ֳ����Ρ����﹩�����������λ��
ɽ���ޡ�
LONG
  );
  set("exits",([
         "west":__DIR__"tianwang.c"
               ]));
        set("objects", ([
                __DIR__"obj/damo" : 1,
       ]) );
  setup();
  replace_program(ROOM);
}
