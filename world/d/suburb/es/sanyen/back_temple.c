// Room: "/d/sanyen/back_temple.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
һ����ĺ��, ������һ��ҩʦ�����Ľ����������ܵ�ǽ��
Ψ��ΨФ�زʻ���ʮ���޺�, ÿ���޺����Ա߲�д�����õ�����Ĺ�
�̡�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : "/d/suburb/es/sanyen/corridor",
  "east" : "/d/suburb/es/sanyen/tower",
]));

     set("objects", ([
         __DIR__"npc/little_bonze" : 1 ]) );

	setup();
	replace_program(ROOM);
}
