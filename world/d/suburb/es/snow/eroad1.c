// Room: "/d/snow/eroad1.c

inherit ROOM;

void create()
{
	set("short", "����С��");
	set("long", @LONG
����һ����ͨ�Ļ���С������������������һ·������ɽ��������
һ���������������ѩͤ��Ľֵ���
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "northeast" : "/d/suburb/es/snow/eroad2",
  "north" : "/d/suburb/es/snow/temple",
  "west" : "/d/suburb/es/snow/sroad1",
]));
	set("outdoors", "snow");

	setup();
	replace_program(ROOM);
}
