// square.c

inherit ROOM;

void create()
{
        set("short", "����");
	set("long", @LONG
���ǻ�ɽ��������Ⱥ�ľ�����������Ϊ�������˴���ǰ�������Ϲ���
�������á������Ҷ���кܿ���ȴûʲô���裬��ǽ�������ѽ��Σ�
����������Ⱥ���¡���ͽ�ĵط������������ҡ�
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"square",
  "south" : __DIR__"buwei2",
]));
        set("objects", ([ __DIR__"npc/dayou": 1,
                 ]) );

        set("no_clean_up", 0);

        setup();
}
int valid_leave(object me, string dir)
{
        if (dir == "south" && objectp(present("lu dayou", environment(me))))
                return notify_fail(
"½���кȵ��������Ǽ�ʦ���ң���λ" + RANK_D->query_respect(me) + "��ֹ����\n");
        return ::valid_leave(me, dir);
}
 
