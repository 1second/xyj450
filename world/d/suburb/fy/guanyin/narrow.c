// 
// 

inherit ROOM;
void create()
{
        set("short", "ʯ������");
        set("long", @LONG
�磬�����ɳ�����������ȼ䣬��ƽ����һ�����ع���֮�⣬��ɽ
���������һ�ߡ����������ȼ䣬������ɳ��ȴ����Ҳ�Ʋ����ˡ�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"sand",
  "south" : __DIR__"deep2",
  "east" : __DIR__"deep",
]));

        setup();
        replace_program(ROOM);
}
