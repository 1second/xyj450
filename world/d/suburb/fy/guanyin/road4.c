// 
// 

inherit ROOM;
void create()
{
        set("short", "С·");
        set("long", @LONG
ʯ���о���һ��С·���������ۣ����������������ٶ��߼���
Ҳ�޷���������......����֮������˭�������Ҳ�������׳�ȥ��
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"deep2",
  "east" : __DIR__"road3",
  "north" : __DIR__"deep",
]));

        set("outdoors", "fengyun");
        setup();
        replace_program(ROOM);
}
