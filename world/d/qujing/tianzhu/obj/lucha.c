// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 

inherit ITEM;
inherit F_LIQUID;

void create()
{
  set_name("绿茶", ({"lu cha", "cha"}));
  set_weight(900);
  if (clonep())
    set_default_object(__FILE__);
  else {
    set("long", "一大碗新泡的绿茶。\n");
    set("unit", "大碗");
    set("value", 30);
    set("max_liquid", 5);
  }

  // because a container can contain different liquid
  // we set it to contain water at the beginning
  set("liquid", ([
    "type": "water",
    "name": "绿茶",
    "remaining": 5,
  ]));
}

