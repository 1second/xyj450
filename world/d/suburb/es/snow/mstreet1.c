// Room: "/d/snow/mstreet1.c

inherit ROOM;

void create()
{
	set("short", "ѩͤ��ֵ�");
	set("long", @LONG
������������ѩͤ��Ľֵ��ϣ����߲�Զ����һ��ߴ��Ժ�ӣ���
������һ���ִ����ˣ�������д����������ݡ�������ֻ����������
�У��Ǹ���ʮ�߼����Ĺ㳡�����������൱���֡�����������һ���Ʒ�
�������Զ��������ּ����ѿ�������ʲô�֣������Ʒ��������⡣
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : "/d/suburb/es/snow/bank",
  "south" : "/d/suburb/es/snow/square",
  "north" : "/d/suburb/es/snow/mstreet2",
  "east" : "/d/suburb/es/snow/school1",
]));
	set("outdoors", "snow");

	setup();
	replace_program(ROOM);
}
