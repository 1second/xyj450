// 
// 


inherit ROOM;
void create()
{
        set("short", "��ɽ��");
        set("long", @LONG
�������ƺ������ŵ����꽭�ϵ�ζ������Զ���ĳ�����ͺͽ��ϵ�
�󲿷ֶ���һ����С�����¿ɰ���������ǰ������ǻ�ɫ�ģ��Ʋ�Ҳ
�ǻ�ɫ�ģ�����������С��ȫ����������һƬ���롣
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "northdown" : __DIR__"road",
  "southwest" : __DIR__"cx1",
]));
        set("outdoors", "chenxiang");
        setup();
        replace_program(ROOM);
}
