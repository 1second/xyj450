// 
// 

inherit ROOM;
void create()
{
        set("short", "ʯ���Ե");
        set("long", @LONG
���ﲻ�������ѵ���ɳĮ�ľ�ͷ����ֱ���ǵ�����صľ�ͷ������
ǰ�ߣ���Ҫ������Ͳ�������Ԩ�С�ǰ�����ʯ�壬�ޱ��޼ʣ���Ҳ��
��ǰ�ߡ�
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "south" : "/u/quicksand/desert2",
  "north" : __DIR__"road1",
]));

        set("outdoors", "fengyun");
        setup();
        replace_program(ROOM);
}
