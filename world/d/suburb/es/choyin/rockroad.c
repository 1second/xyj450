inherit ROOM;

void create()
{
        set("short", "��ʯ·");
        set("long", @LONG
    ����һ��������ʯ����·���վ����С�����һ����ɽ������
�����վ��쳣��ɽǰ�ϱ��ּ���ϡ�ɱ�--������ɽ������˵����
λ���������ڴ˵أ���֪����ڲ���......
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "north" : "/d/suburb/es/choyin/spath",
  "southup" : "/d/suburb/es/choyin/guyehill",
]));
        set("outdoors", "choyin");
        replace_program(ROOM);
        setup();
}

