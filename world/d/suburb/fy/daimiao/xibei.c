//mac's xibei.c
// 
// 

#include <room.h>
inherit ROOM;
void create()
{
  set("short","������");
  set("long",@LONG
��Ϊ�����ʵ۾��з������ʱ�ı��̣�������עĿ�����ض���̩
ɽ��ʯ��Ϊ��Ԫǰ���������ض�����������̩ɽʱ����ة����˹���
�ģ���ϧ����ʮ�����֣���˹ȥ�����������ӳ���
LONG
  );
  set("exits",([
         "east":__DIR__"zhengyuan.c",
               ]));
   
  setup();
  replace_program(ROOM);
}
