// Room: "/d/oldpine/tree2.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
���������ʸ���һ��������������ϣ�����������Ѿ����ߡ�����
�ߣ������С�ĵ�����ȥ����������Ҳ��ȥ�������������Ͻ��������
���������󲿷ֶ������ɺ�Զ���㹹������
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "up" : "/d/suburb/es/oldpine/tree3",
  "down" : "/d/suburb/es/oldpine/tree1",
]));

	set ("objects", ([
		__DIR__"npc/butterfly":		6,
]));

	setup();
	replace_program(ROOM);
}
