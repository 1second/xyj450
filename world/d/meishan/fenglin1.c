// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 

#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

�����в�ľ���࣬����̲ݸ߿�ûϥ����紵�������з���
�������������������������Բ��д��С����Ϸ�Ҷ�ƻ���
��������춼��ס�ˡ�
LONG);


  set("objects", ([ /* sizeof() == 1*/ 
  __DIR__"npc/cao" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/meishan/tiezhu",
  "northeast" : __DIR__"sengquan",
]));

  setup();
}
