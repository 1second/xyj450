// path1.c

inherit ROOM;

void create()
{
        set("short", "��ɽ����");
	set("long", @LONG
�����ǻ�ɽ���£�����������С�������µ�һɽ����������ɽ����
ɽ����Զ������һ��������������������ʱ���������롸����ͨ������
���и�С��ׯ�������м��䷿�ݡ�
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
  "west" : "/d/suburb/xkx/village/eexit",
  "north" : __DIR__"yuquan",
  "southeast" : __DIR__"shaluo",
]));
        set("no_clean_up", 0);
        set("outdoors", "xx" );

        setup();
        replace_program(ROOM);
}
 
