// square.c

inherit ROOM;

void create()
{
        set("short", "���䳡");
	set("long", @LONG
�����ǻ�ɽ�ɵ����䳡��ͨ������໪ɽ�ɵ����ڴ�ϰ������������
����ӭ���ˡ����񣬻�ɽ�ɲ�֪Ϊ�ξ�����ɽ��ȥ��ֻ���������ӿ��ң�
�����ƺ����Ĺ���ô�࣬����Щ�ο��ڴ���Ϣ���ϱߵķ������Ϲ���һ��
�ң����顸������Ϊ�������������ƺ�����С��ͨ��ɽ�ϡ�
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"yunu",
  "south" : __DIR__"buwei1",
]));

        set("no_clean_up", 0);
        set("outdoors", "xx" );

        setup();
        replace_program(ROOM);
}
 
