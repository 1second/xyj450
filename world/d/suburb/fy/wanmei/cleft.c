// 
// 

inherit ROOM;
void create()
{
        set("short", "��ƫԺ");
        set("long", @LONG
Ժ��������÷�����硣ÿ�ö�����׳�ɳ�����Ȼ���˾����չˡ�÷��
֮�仹���˹����ѵ�С�ӹ�����������ˮ�������ʣ������ÿһ�����硣
�����ڶ����ɣ���Ȼ�Ǳ���Ӫ���ķ�����
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"yard",
]));
        set("outdoors", "wanmei");
        set("item_desc", ([
                "÷��": "
���ƺ����Կ�������𣩼���������
                        \n",

        ]) );
        setup();
}
void init()
{
	add_action("do_chop","chop");
}
int do_chop()
{
object vege;
if((int) query("pulled") <= 10)
{
write("�㿳��һ��÷��������ڻ��\n");
vege = new(__DIR__"obj/tree");
vege->move(this_player());
add("pulled",1);
}
else
        write("�����˿����ˣ���\n");
return 1;
}

void reset()
{
:: reset();
delete("pulled");
}
