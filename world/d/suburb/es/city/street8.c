// Room: "/d/city/street8.c

inherit ROOM;

void create()
{
	set("short", "��ʦ�ֵ�");
	set("long", @LONG
�����������ھ�ʦ�Ĵ���ϣ�����������Լ��������ͭ���ϵķ�
�⣬����ı����Ǿ���Ψһ��Ǯׯ��������������������Ⱥ��ż����
�ܼ���һ����ɮ�¡�
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"street9",
  "north" : "/d/suburb/es/city/bank",
  "west" : "/d/suburb/es/city/street7",]));
	set("objects", ([
		"/d/suburb/es/snow/npc/scavenger": 1 ]) );

	set("outdoors", "city");

	setup();
	replace_program(ROOM);
}
