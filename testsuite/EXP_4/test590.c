#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = 3U;
volatile uint64_t t1 = 352710LLU;
int64_t x63 = INT64_MIN;
int16_t x65 = INT16_MAX;
int8_t x66 = 10;
uint8_t x85 = UINT8_MAX;
static int16_t x88 = INT16_MIN;
static uint32_t x98 = UINT32_MAX;
int64_t x108 = 441LL;
volatile int32_t x117 = INT32_MIN;
volatile uint32_t t11 = 17426U;
int16_t x125 = 2;
uint32_t x138 = 938726U;
volatile uint16_t x157 = 9812U;
volatile int16_t x160 = INT16_MIN;
int64_t x171 = -1LL;
static int16_t x203 = -1;
int8_t x222 = 19;
static int16_t x233 = -1;
int8_t x236 = -1;
int64_t x266 = 7249904094175230LL;
int64_t t24 = 92895226336574929LL;
static uint64_t x304 = UINT64_MAX;
volatile int32_t t26 = 44;
uint8_t x311 = 1U;
uint64_t x314 = 3369596086859519LLU;
static volatile uint64_t t28 = 84LLU;
volatile uint64_t t31 = 7166613194531157LLU;
int32_t x353 = 1444;
uint64_t x438 = 712390789986468185LLU;
volatile int16_t x439 = INT16_MIN;
int64_t x482 = 507777318865839LL;
int32_t x484 = -1;
int32_t t40 = -1651261;
volatile uint64_t t41 = 30795LLU;
volatile uint32_t x545 = 46532073U;
uint16_t x548 = UINT16_MAX;
volatile uint32_t t43 = 34690003U;
volatile int32_t t48 = 57548044;
int32_t x658 = INT32_MAX;
int32_t x667 = INT32_MAX;
volatile uint32_t t51 = 14144338U;
static uint8_t x670 = 1U;
int64_t x672 = -64511357LL;
uint16_t x717 = UINT16_MAX;
volatile uint32_t x718 = 74335U;
static int32_t x720 = INT32_MIN;
uint64_t x730 = UINT64_MAX;
volatile uint64_t t55 = 0LLU;
uint64_t x774 = 15LLU;
int32_t x776 = INT32_MIN;
uint8_t x799 = 4U;
int8_t x815 = -1;
int16_t x816 = INT16_MIN;
int64_t x822 = 29688504816706LL;
volatile int64_t t60 = 3354LL;
int16_t x829 = INT16_MIN;
uint64_t x854 = 6156391449730LLU;
static int64_t x856 = -191LL;
uint8_t x862 = 3U;
static int32_t t69 = 2990088;
int64_t x1007 = -1LL;
int32_t t71 = 526504;
int32_t x1025 = -1;
volatile uint64_t t73 = 85389438317LLU;
int32_t x1041 = -1;
int16_t x1042 = 163;
int64_t x1059 = -25491LL;
int64_t x1061 = -1LL;
int64_t x1064 = INT64_MIN;
uint64_t x1071 = 68994271731752LLU;
int8_t x1077 = -3;
int16_t x1079 = -12;
static int8_t x1080 = INT8_MIN;
uint32_t x1137 = 14U;
int64_t t82 = -34LL;
uint32_t t83 = 64689830U;
int8_t x1175 = INT8_MIN;
int64_t t87 = 624572948LL;
int32_t x1232 = INT32_MIN;
volatile int32_t t89 = 14749;
static int32_t x1284 = 32555508;
int64_t t91 = -294392274640LL;
volatile uint32_t x1303 = UINT32_MAX;
int16_t x1412 = -251;
volatile uint16_t x1416 = UINT16_MAX;


void f0(void) {
	uint16_t x9 = 343U;
	uint64_t x10 = 903260747LLU;
	int32_t x12 = -353;
	volatile uint64_t t0 = 19338832170103514LLU;

	t0 = (x9%(x10>>(x11/x12)));

	if (t0 != 343LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x21 = INT32_MIN;
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = -1;
	int64_t x24 = 3397LL;

	t1 = (x21%(x22>>(x23/x24)));

	if (t1 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x37 = 6695520;
	static int32_t x38 = 59;
	int16_t x39 = -9466;
	int64_t x40 = INT64_MAX;
	static volatile int32_t t2 = 1;

	t2 = (x37%(x38>>(x39/x40)));

	if (t2 != 23) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x49 = -560315547LL;
	uint8_t x50 = UINT8_MAX;
	volatile int8_t x51 = -1;
	int64_t x52 = -1LL;
	volatile int64_t t3 = 13809771148311892LL;

	t3 = (x49%(x50>>(x51/x52)));

	if (t3 != -56LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x53 = -16;
	volatile uint32_t x54 = 4062524U;
	int32_t x55 = -1;
	volatile int16_t x56 = -1;
	static volatile uint32_t t4 = 0U;

	t4 = (x53%(x54>>(x55/x56)));

	if (t4 != 879412U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x61 = -1;
	int8_t x62 = 7;
	static int64_t x64 = INT64_MIN;
	volatile int32_t t5 = -2334006;

	t5 = (x61%(x62>>(x63/x64)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x67 = 43874751U;
	int16_t x68 = -85;
	int32_t t6 = 92789;

	t6 = (x65%(x66>>(x67/x68)));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x86 = INT64_MAX;
	int64_t x87 = -1LL;
	volatile int64_t t7 = -1LL;

	t7 = (x85%(x86>>(x87/x88)));

	if (t7 != 255LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x97 = INT8_MAX;
	int16_t x99 = 3;
	uint16_t x100 = 2307U;
	uint32_t t8 = 49216298U;

	t8 = (x97%(x98>>(x99/x100)));

	if (t8 != 127U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x101 = INT16_MAX;
	static uint16_t x102 = 10U;
	uint8_t x103 = UINT8_MAX;
	uint32_t x104 = 5339U;
	volatile int32_t t9 = 231;

	t9 = (x101%(x102>>(x103/x104)));

	if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x105 = 3U;
	int16_t x106 = 6;
	int8_t x107 = INT8_MIN;
	int32_t t10 = 23744024;

	t10 = (x105%(x106>>(x107/x108)));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x118 = 97998U;
	volatile uint16_t x119 = 54U;
	int8_t x120 = 4;

	t11 = (x117%(x118>>(x119/x120)));

	if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x126 = 1604U;
	uint64_t x127 = 612740273942554LLU;
	static int32_t x128 = -21;
	volatile int32_t t12 = 6517342;

	t12 = (x125%(x126>>(x127/x128)));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x133 = INT16_MIN;
	uint32_t x134 = 7338U;
	static int32_t x135 = -1;
	int8_t x136 = -1;
	volatile uint32_t t13 = 2792401U;

	t13 = (x133%(x134>>(x135/x136)));

	if (t13 != 3128U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x137 = INT8_MIN;
	int64_t x139 = 168296440LL;
	volatile int64_t x140 = INT64_MAX;
	static uint32_t t14 = 29986U;

	t14 = (x137%(x138>>(x139/x140)));

	if (t14 != 295718U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x141 = -17;
	volatile int64_t x142 = 2LL;
	int64_t x143 = -1LL;
	int64_t x144 = INT64_MAX;
	static int64_t t15 = -87790LL;

	t15 = (x141%(x142>>(x143/x144)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x145 = INT8_MIN;
	uint64_t x146 = 2150329788000821129LLU;
	int8_t x147 = INT8_MAX;
	volatile uint16_t x148 = 1068U;
	uint64_t t16 = 115843184540968LLU;

	t16 = (x145%(x146>>(x147/x148)));

	if (t16 != 1244105769702982456LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x158 = UINT32_MAX;
	int64_t x159 = -1LL;
	volatile uint32_t t17 = 7065U;

	t17 = (x157%(x158>>(x159/x160)));

	if (t17 != 9812U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x169 = -1;
	int8_t x170 = INT8_MAX;
	int64_t x172 = -1LL;
	volatile int32_t t18 = 1;

	t18 = (x169%(x170>>(x171/x172)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x193 = 99U;
	int32_t x194 = 27;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t19 = -125168490;

	t19 = (x193%(x194>>(x195/x196)));

	if (t19 != 18) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x201 = UINT8_MAX;
	int8_t x202 = INT8_MAX;
	volatile int32_t x204 = -1;
	static volatile int32_t t20 = 416790;

	t20 = (x201%(x202>>(x203/x204)));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MAX;
	static int8_t x215 = INT8_MIN;
	uint8_t x216 = UINT8_MAX;
	int32_t t21 = 140687337;

	t21 = (x213%(x214>>(x215/x216)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x221 = 1182048230870846542LL;
	int8_t x223 = -17;
	int8_t x224 = INT8_MIN;
	static volatile int64_t t22 = 609831145028042LL;

	t22 = (x221%(x222>>(x223/x224)));

	if (t22 != 15LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x234 = INT32_MAX;
	uint32_t x235 = 110953730U;
	int32_t t23 = 12;

	t23 = (x233%(x234>>(x235/x236)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x265 = INT16_MAX;
	int64_t x267 = -1LL;
	uint8_t x268 = UINT8_MAX;

	t24 = (x265%(x266>>(x267/x268)));

	if (t24 != 32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x293 = UINT16_MAX;
	uint64_t x294 = 4524214LLU;
	volatile int16_t x295 = 13;
	int64_t x296 = INT64_MIN;
	static uint64_t t25 = 3107440449938498LLU;

	t25 = (x293%(x294>>(x295/x296)));

	if (t25 != 65535LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x301 = UINT16_MAX;
	uint8_t x302 = 1U;
	uint16_t x303 = 11U;

	t26 = (x301%(x302>>(x303/x304)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x309 = -1;
	uint16_t x310 = 26U;
	volatile int8_t x312 = INT8_MAX;
	volatile int32_t t27 = 204553640;

	t27 = (x309%(x310>>(x311/x312)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x313 = INT32_MAX;
	uint32_t x315 = UINT32_MAX;
	static uint64_t x316 = 253905034680272963LLU;

	t28 = (x313%(x314>>(x315/x316)));

	if (t28 != 2147483647LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x325 = -4;
	uint8_t x326 = UINT8_MAX;
	uint8_t x327 = UINT8_MAX;
	static uint32_t x328 = 478U;
	volatile int32_t t29 = 287859269;

	t29 = (x325%(x326>>(x327/x328)));

	if (t29 != -4) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x329 = UINT16_MAX;
	uint8_t x330 = 119U;
	uint32_t x331 = 2U;
	int32_t x332 = 1018;
	int32_t t30 = 0;

	t30 = (x329%(x330>>(x331/x332)));

	if (t30 != 85) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x333 = -1;
	uint64_t x334 = 10480LLU;
	int8_t x335 = 0;
	int8_t x336 = INT8_MIN;

	t31 = (x333%(x334>>(x335/x336)));

	if (t31 != 2815LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x345 = 5192U;
	uint64_t x346 = 497597LLU;
	int16_t x347 = -1;
	uint8_t x348 = 121U;
	volatile uint64_t t32 = 63954979392740339LLU;

	t32 = (x345%(x346>>(x347/x348)));

	if (t32 != 5192LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x349 = UINT8_MAX;
	volatile uint8_t x350 = 2U;
	volatile uint64_t x351 = 4297LLU;
	int32_t x352 = INT32_MIN;
	volatile int32_t t33 = -907985;

	t33 = (x349%(x350>>(x351/x352)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x354 = 4U;
	uint16_t x355 = 6U;
	static int64_t x356 = INT64_MAX;
	volatile uint32_t t34 = 29873U;

	t34 = (x353%(x354>>(x355/x356)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x421 = 1;
	uint16_t x422 = UINT16_MAX;
	static uint8_t x423 = UINT8_MAX;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t35 = -63763;

	t35 = (x421%(x422>>(x423/x424)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x437 = UINT16_MAX;
	static uint32_t x440 = 249803891U;
	volatile uint64_t t36 = 24LLU;

	t36 = (x437%(x438>>(x439/x440)));

	if (t36 != 65535LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x445 = INT64_MIN;
	uint16_t x446 = 29U;
	uint32_t x447 = 312U;
	volatile int64_t x448 = 2451708237LL;
	volatile int64_t t37 = 1684673LL;

	t37 = (x445%(x446>>(x447/x448)));

	if (t37 != -12LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x449 = -62649235LL;
	volatile int16_t x450 = INT16_MAX;
	static uint8_t x451 = 13U;
	uint64_t x452 = 3LLU;
	int64_t t38 = 3258LL;

	t38 = (x449%(x450>>(x451/x452)));

	if (t38 != -800LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x481 = 5774150354232LLU;
	int16_t x483 = -1;
	uint64_t t39 = 180536966LLU;

	t39 = (x481%(x482>>(x483/x484)));

	if (t39 != 5774150354232LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x493 = INT8_MAX;
	static int16_t x494 = 32;
	int64_t x495 = -1LL;
	int8_t x496 = -1;

	t40 = (x493%(x494>>(x495/x496)));

	if (t40 != 15) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x521 = 1782398;
	uint64_t x522 = 37737862497019939LLU;
	volatile int16_t x523 = -3;
	volatile int32_t x524 = -2734677;

	t41 = (x521%(x522>>(x523/x524)));

	if (t41 != 1782398LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x537 = INT64_MIN;
	uint32_t x538 = 443210146U;
	int32_t x539 = -42;
	int8_t x540 = INT8_MIN;
	static int64_t t42 = -5034880820699553LL;

	t42 = (x537%(x538>>(x539/x540)));

	if (t42 != -72338128LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x546 = UINT32_MAX;
	volatile int64_t x547 = 1LL;

	t43 = (x545%(x546>>(x547/x548)));

	if (t43 != 46532073U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x557 = INT32_MIN;
	volatile uint16_t x558 = 5047U;
	int16_t x559 = 296;
	uint16_t x560 = 1714U;
	static int32_t t44 = 1041952;

	t44 = (x557%(x558>>(x559/x560)));

	if (t44 != -289) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x569 = 714174823U;
	static int32_t x570 = 14;
	static int8_t x571 = INT8_MAX;
	uint64_t x572 = UINT64_MAX;
	volatile uint32_t t45 = 862092U;

	t45 = (x569%(x570>>(x571/x572)));

	if (t45 != 5U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x573 = 410U;
	uint32_t x574 = 194627752U;
	uint8_t x575 = 0U;
	int64_t x576 = -6705LL;
	uint32_t t46 = 20U;

	t46 = (x573%(x574>>(x575/x576)));

	if (t46 != 410U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x585 = 317511855504LLU;
	uint64_t x586 = UINT64_MAX;
	int64_t x587 = -1LL;
	static volatile int32_t x588 = -1;
	volatile uint64_t t47 = 6030410406384721LLU;

	t47 = (x585%(x586>>(x587/x588)));

	if (t47 != 317511855504LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x613 = INT16_MIN;
	int32_t x614 = 13794700;
	int32_t x615 = -1;
	static int32_t x616 = INT32_MIN;

	t48 = (x613%(x614>>(x615/x616)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x645 = INT8_MIN;
	volatile uint16_t x646 = UINT16_MAX;
	volatile int64_t x647 = -1LL;
	int64_t x648 = INT64_MAX;
	volatile int32_t t49 = 62862;

	t49 = (x645%(x646>>(x647/x648)));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x657 = INT32_MAX;
	volatile int16_t x659 = INT16_MIN;
	uint16_t x660 = UINT16_MAX;
	int32_t t50 = 161692;

	t50 = (x657%(x658>>(x659/x660)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x665 = -1;
	static uint32_t x666 = 1254506U;
	int64_t x668 = INT64_MAX;

	t51 = (x665%(x666>>(x667/x668)));

	if (t51 != 793257U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x669 = UINT32_MAX;
	int8_t x671 = -1;
	uint32_t t52 = 42772779U;

	t52 = (x669%(x670>>(x671/x672)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x693 = INT64_MAX;
	uint64_t x694 = 15700369094512316LLU;
	volatile int16_t x695 = -6;
	int32_t x696 = INT32_MIN;
	volatile uint64_t t53 = 242640478LLU;

	t53 = (x693%(x694>>(x695/x696)));

	if (t53 != 7255378376046315LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x719 = 51376294;
	uint32_t t54 = 63055U;

	t54 = (x717%(x718>>(x719/x720)));

	if (t54 != 65535U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x729 = INT32_MIN;
	uint8_t x731 = 61U;
	static int64_t x732 = INT64_MIN;

	t55 = (x729%(x730>>(x731/x732)));

	if (t55 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x745 = UINT8_MAX;
	uint64_t x746 = 1147657298199395LLU;
	int16_t x747 = -2;
	uint16_t x748 = 3886U;
	static uint64_t t56 = 1205LLU;

	t56 = (x745%(x746>>(x747/x748)));

	if (t56 != 255LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x773 = 16334418028LLU;
	static int32_t x775 = INT32_MAX;
	static volatile uint64_t t57 = 1450700177311134LLU;

	t57 = (x773%(x774>>(x775/x776)));

	if (t57 != 13LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x797 = -1;
	static uint64_t x798 = UINT64_MAX;
	static volatile uint16_t x800 = UINT16_MAX;
	uint64_t t58 = 3784894263375866LLU;

	t58 = (x797%(x798>>(x799/x800)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x813 = INT16_MIN;
	static uint64_t x814 = 2621238963488LLU;
	volatile uint64_t t59 = 7196875013497LLU;

	t59 = (x813%(x814>>(x815/x816)));

	if (t59 != 294713578816LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x821 = INT32_MAX;
	int64_t x823 = -1LL;
	int64_t x824 = -1LL;

	t60 = (x821%(x822>>(x823/x824)));

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x830 = 51;
	int16_t x831 = -1;
	volatile int16_t x832 = INT16_MIN;
	int32_t t61 = 0;

	t61 = (x829%(x830>>(x831/x832)));

	if (t61 != -26) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x853 = -1;
	int16_t x855 = -1;
	uint64_t t62 = 1518119129009304LLU;

	t62 = (x853%(x854>>(x855/x856)));

	if (t62 != 3614962367735LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x861 = 1U;
	uint8_t x863 = 0U;
	int64_t x864 = INT64_MIN;
	int32_t t63 = 479;

	t63 = (x861%(x862>>(x863/x864)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x873 = UINT32_MAX;
	volatile uint16_t x874 = 11266U;
	static int8_t x875 = INT8_MIN;
	int16_t x876 = -2160;
	volatile uint32_t t64 = 54964U;

	t64 = (x873%(x874>>(x875/x876)));

	if (t64 != 7583U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x929 = -11LL;
	static int16_t x930 = 319;
	int16_t x931 = 2;
	static int64_t x932 = INT64_MIN;
	int64_t t65 = -1320163835LL;

	t65 = (x929%(x930>>(x931/x932)));

	if (t65 != -11LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x937 = INT8_MIN;
	static uint16_t x938 = UINT16_MAX;
	int64_t x939 = 17LL;
	uint32_t x940 = UINT32_MAX;
	volatile int32_t t66 = 16;

	t66 = (x937%(x938>>(x939/x940)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x941 = -1;
	uint32_t x942 = 530444913U;
	uint32_t x943 = 14218U;
	volatile int32_t x944 = INT32_MIN;
	static volatile uint32_t t67 = 297903442U;

	t67 = (x941%(x942>>(x943/x944)));

	if (t67 != 51407991U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x949 = UINT8_MAX;
	uint64_t x950 = UINT64_MAX;
	static int8_t x951 = 0;
	int16_t x952 = -1;
	volatile uint64_t t68 = 93881579261852LLU;

	t68 = (x949%(x950>>(x951/x952)));

	if (t68 != 255LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x953 = UINT8_MAX;
	uint8_t x954 = 110U;
	int32_t x955 = INT32_MAX;
	int32_t x956 = INT32_MAX;

	t69 = (x953%(x954>>(x955/x956)));

	if (t69 != 35) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x981 = 9507505U;
	uint64_t x982 = 39444135LLU;
	uint16_t x983 = UINT16_MAX;
	int64_t x984 = INT64_MAX;
	static uint64_t t70 = 22LLU;

	t70 = (x981%(x982>>(x983/x984)));

	if (t70 != 9507505LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x1005 = -1;
	static int32_t x1006 = INT32_MAX;
	int16_t x1008 = -358;

	t71 = (x1005%(x1006>>(x1007/x1008)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x1021 = 35U;
	int32_t x1022 = INT32_MAX;
	uint64_t x1023 = 24992992838LLU;
	static volatile int64_t x1024 = INT64_MAX;
	volatile int32_t t72 = 44570;

	t72 = (x1021%(x1022>>(x1023/x1024)));

	if (t72 != 35) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1026 = 514650941LLU;
	volatile int64_t x1027 = 180773LL;
	static int32_t x1028 = -4253164;

	t73 = (x1025%(x1026>>(x1027/x1028)));

	if (t73 != 246452410LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1043 = UINT16_MAX;
	int32_t x1044 = INT32_MIN;
	static volatile int32_t t74 = 563;

	t74 = (x1041%(x1042>>(x1043/x1044)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1057 = INT16_MIN;
	int64_t x1058 = INT64_MAX;
	int64_t x1060 = INT64_MAX;
	int64_t t75 = -2087LL;

	t75 = (x1057%(x1058>>(x1059/x1060)));

	if (t75 != -32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1062 = INT16_MAX;
	volatile uint64_t x1063 = 27013772900LLU;
	volatile int64_t t76 = -144566101425LL;

	t76 = (x1061%(x1062>>(x1063/x1064)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x1069 = -16130973LL;
	volatile uint8_t x1070 = UINT8_MAX;
	static volatile int8_t x1072 = INT8_MIN;
	int64_t t77 = 1319781LL;

	t77 = (x1069%(x1070>>(x1071/x1072)));

	if (t77 != -183LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x1078 = INT8_MAX;
	int32_t t78 = 6269780;

	t78 = (x1077%(x1078>>(x1079/x1080)));

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1081 = 48;
	int32_t x1082 = INT32_MAX;
	static uint64_t x1083 = UINT64_MAX;
	static int8_t x1084 = -1;
	volatile int32_t t79 = -172948;

	t79 = (x1081%(x1082>>(x1083/x1084)));

	if (t79 != 48) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1113 = 30;
	int16_t x1114 = INT16_MAX;
	int16_t x1115 = 201;
	uint32_t x1116 = UINT32_MAX;
	int32_t t80 = -1;

	t80 = (x1113%(x1114>>(x1115/x1116)));

	if (t80 != 30) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x1138 = 471U;
	volatile uint16_t x1139 = 313U;
	uint16_t x1140 = 3036U;
	uint32_t t81 = 523U;

	t81 = (x1137%(x1138>>(x1139/x1140)));

	if (t81 != 14U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1141 = -1LL;
	static int32_t x1142 = 715;
	static int64_t x1143 = -1LL;
	int16_t x1144 = 1541;

	t82 = (x1141%(x1142>>(x1143/x1144)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x1149 = INT16_MAX;
	uint32_t x1150 = UINT32_MAX;
	static int8_t x1151 = INT8_MAX;
	int16_t x1152 = 26;

	t83 = (x1149%(x1150>>(x1151/x1152)));

	if (t83 != 32767U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1153 = -3609;
	static int16_t x1154 = 224;
	int8_t x1155 = -1;
	int64_t x1156 = INT64_MIN;
	volatile int32_t t84 = 4;

	t84 = (x1153%(x1154>>(x1155/x1156)));

	if (t84 != -25) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x1165 = 0;
	int16_t x1166 = INT16_MAX;
	uint64_t x1167 = 98317LLU;
	volatile uint16_t x1168 = UINT16_MAX;
	static int32_t t85 = -2435286;

	t85 = (x1165%(x1166>>(x1167/x1168)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1173 = 35U;
	int8_t x1174 = 45;
	static int32_t x1176 = INT32_MIN;
	volatile int32_t t86 = -3897906;

	t86 = (x1173%(x1174>>(x1175/x1176)));

	if (t86 != 35) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1181 = INT16_MAX;
	int64_t x1182 = INT64_MAX;
	int8_t x1183 = 0;
	int32_t x1184 = INT32_MAX;

	t87 = (x1181%(x1182>>(x1183/x1184)));

	if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x1201 = INT8_MIN;
	int16_t x1202 = INT16_MAX;
	uint16_t x1203 = 1U;
	int64_t x1204 = -130144435892599693LL;
	volatile int32_t t88 = -2326176;

	t88 = (x1201%(x1202>>(x1203/x1204)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1229 = 1U;
	uint16_t x1230 = 10578U;
	volatile uint8_t x1231 = 71U;

	t89 = (x1229%(x1230>>(x1231/x1232)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x1265 = UINT64_MAX;
	static volatile int32_t x1266 = INT32_MAX;
	uint32_t x1267 = 3U;
	int8_t x1268 = -10;
	volatile uint64_t t90 = 382394677823781LLU;

	t90 = (x1265%(x1266>>(x1267/x1268)));

	if (t90 != 3LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x1281 = -1LL;
	uint32_t x1282 = 15U;
	int8_t x1283 = -1;

	t91 = (x1281%(x1282>>(x1283/x1284)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1301 = 546385365486LL;
	static int16_t x1302 = 218;
	int32_t x1304 = INT32_MIN;
	static int64_t t92 = 1LL;

	t92 = (x1301%(x1302>>(x1303/x1304)));

	if (t92 != 11LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x1325 = 4U;
	int8_t x1326 = 1;
	static int8_t x1327 = INT8_MIN;
	volatile uint8_t x1328 = UINT8_MAX;
	int32_t t93 = 8503637;

	t93 = (x1325%(x1326>>(x1327/x1328)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1357 = -1;
	volatile uint16_t x1358 = UINT16_MAX;
	int16_t x1359 = 5;
	uint64_t x1360 = UINT64_MAX;
	int32_t t94 = 7745;

	t94 = (x1357%(x1358>>(x1359/x1360)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1369 = INT16_MIN;
	volatile int8_t x1370 = INT8_MAX;
	volatile uint64_t x1371 = UINT64_MAX;
	volatile int16_t x1372 = INT16_MIN;
	volatile int32_t t95 = 14;

	t95 = (x1369%(x1370>>(x1371/x1372)));

	if (t95 != -8) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1389 = -5;
	volatile int16_t x1390 = INT16_MAX;
	uint16_t x1391 = 10U;
	int8_t x1392 = INT8_MIN;
	volatile int32_t t96 = 250;

	t96 = (x1389%(x1390>>(x1391/x1392)));

	if (t96 != -5) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1409 = 174U;
	uint32_t x1410 = 266U;
	static int8_t x1411 = -1;
	uint32_t t97 = 965U;

	t97 = (x1409%(x1410>>(x1411/x1412)));

	if (t97 != 174U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x1413 = UINT8_MAX;
	int8_t x1414 = INT8_MAX;
	volatile uint8_t x1415 = 42U;
	volatile int32_t t98 = 242753254;

	t98 = (x1413%(x1414>>(x1415/x1416)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x1421 = INT32_MAX;
	uint8_t x1422 = 1U;
	int32_t x1423 = 289;
	int32_t x1424 = INT32_MAX;
	volatile int32_t t99 = -420043;

	t99 = (x1421%(x1422>>(x1423/x1424)));

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

