// Room: "/d/sanyen/sroad2.c

inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
����ɽ·������ת�˸��䣬��������һ��ɽ������������������
����˳��ɽ�ƻ�����ɽ��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : "/d/suburb/es/sanyen/sroad1",
 "east" : "/d/suburb/es/sanyen/gate",
]));
	set("outdoors", "sanyen");

	setup();
	replace_program(ROOM);
}
