inherit ROOM;
// 
// 


void create()
{
        set("short", "Сľ�ݶ�");
        set("long", @LONG
һ����ƽ����ľ�伸��ռ���������ݶ�����ľ��������ϸ����ˮ
��©�����й���Ȫˮ��ÿ�����ս���ֱ�䣬����Ȫˮ�ͱ�ɹ�ȣ�����
������£�������ԡ��
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "down" : __DIR__"woodhouse",
]));
        set("outdoors", "wanmei");
        set("objects", ([
        __DIR__"npc/dodo": 1,
                        ]) );
        setup();
        replace_program(ROOM);
}
