inherit ROOM;
// 
// 


void create()
{
        set("short", "ç�ֱ�Ե");
        set("long", @LONG
Խ������Խ�ܣ�������������������Ҳ��ð߰ߵ�㡣é�ݽ��񣬹�ľ
������·�����𡣴����ķ�ҲԽ�������䳱ʪ��Զ�����ֵ�������м�ֻ��
����ͺӥ������˺���ѷεĽ���������ë����Ȼ��
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"groups4",
  "south" : "/d/suburb/fy/zhaoze/edge",
]));
        set("outdoors", "manglin");
	set("NONPC",1);
        setup();
        replace_program(ROOM);
}
