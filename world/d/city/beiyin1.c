// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
//changan city

inherit ROOM;

void create ()
{
        set ("short", "������");
        set ("long", @LONG

������λ�ڳ�����֮���ϣ�ס�������Щƶ���˼ҡ����ڹٸ����ٹ�
��������ΰ�����ʮ�ֺá���Χ������䣬·���Ӳݴ�����������
���ƵĻ�ɫ������һ˿�������������˴�����������ڣ������ɫ��
LONG);

        //set("item_desc", ([" *** " : " *** ", ]));

        set("exits", 
        ([ //sizeof() == 4
     "east" : __DIR__"minju1",
     "southeast" : __DIR__"beiyin2",
                "north" : __DIR__"baihu-w4",
        ]));

        set("objects", 
        ([ //sizeof() == 1
//                __DIR__"npc/libai" : 1,
        ]));


        set("outdoors", "changan");
   set("no_clean_up", 0);
        setup();
   replace_program(ROOM);
}

