// Room: "/d/city/street7.c

inherit ROOM;

void create()
{
	set("short", "ʮ��·��");
	set("long", @LONG
��ʦ�������ߺͱ������Ҫ�ֵ������������ｻ�棬������Ļ�
�������������������ַǷ�������ĻʼҼ�̳�����������壬������
�����������ɫ�ı����š�
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "east" : "/d/suburb/es/city/street8",
  "west" : "/d/suburb/es/city/street15",
  "north" : "/d/suburb/es/city/street16",
  "south" : "/d/suburb/es/city/jitan",]));

	set("outdoors", "city");

	setup();
	replace_program(ROOM);
}
