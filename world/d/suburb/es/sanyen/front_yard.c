// Room: "/d/sanyen/front_yard.c

inherit ROOM;

void create()
{
	set("short", "ɽ����ǰ�㳡");
	set("long", @LONG
������ɽ����ǰ�Ŀյأ�ƽ��ɮ���Ǿ�����������ǿ���յ�����
����һ�Ű������������ߵĵط�����һ����������������שͷ�����ž�
����ı���, ��������ɽ�š�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : "/d/suburb/es/sanyen/door",
  "west" : "/d/suburb/es/sanyen/gate",
]));
	set("outdoors", "sanyen");
        set("objects", ([
                "/d/suburb/es/sanyen/npc/monk_guard":2,
        ]) );

	setup();
	replace_program(ROOM);
}
