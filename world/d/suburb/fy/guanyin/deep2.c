// 
// 

inherit ROOM;
void create()
{
        set("short", "ʯ���");
        set("long", @LONG
��Щʯ�壬�����������������������е�·���������������˱仯
֮������������İ���ͼһ�㣬���˾�����֮�����⣬���������
֮���������ǹ��񹦣������Ѳ⡣
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"road4",
  "north" : __DIR__"narrow",
]));

        set("outdoors", "fengyun");
        setup();
        replace_program(ROOM);
}
