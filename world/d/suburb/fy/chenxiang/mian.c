// 
// 

inherit ROOM;
void create()
{
        set("short", "С���");
        set("long", @LONG
��ݵ����赱Ȼ�ܼ�ª�������������������֮��Ҳ��һЩ�ܼ򵥵�
���㡣��һ�ֺ�����ľ²˺��ӣ����ǳ�θ�ر�õ��ˣ������������ˡ�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"cx1",
]));
        set("objects", ([
        __DIR__"npc/oldman": 1,
                        ]) );
        setup();
        replace_program(ROOM);
}
