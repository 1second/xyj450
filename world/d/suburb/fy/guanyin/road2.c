// 
// 

inherit ROOM;
void create()
{
        set("short", "ʯ�����");
        set("long", @LONG
����ǰ�ߣ�����ǰ��һ���߲����ƵĹ�ʯ��壬����׷��Ķ���
����ǰ�档��·��һ�ۣ���ǡ����Ȼ��ͨ��ʯ��Ⱥ�С�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"road3",
  "west" : __DIR__"road1",
]));

        set("outdoors", "fengyun");
        setup();
        replace_program(ROOM);
}