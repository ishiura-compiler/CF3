#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x9 = 1U;
uint16_t x12 = 3U;
int16_t x41 = INT16_MIN;
int32_t x43 = INT32_MIN;
uint16_t x44 = UINT16_MAX;
static int32_t t1 = 5;
uint16_t x55 = 28908U;
static uint64_t x57 = 1LLU;
volatile uint8_t x58 = 10U;
uint32_t t4 = 0U;
uint8_t x154 = 2U;
uint8_t x253 = UINT8_MAX;
int16_t x256 = INT16_MIN;
uint64_t t12 = 442LLU;
static int16_t x380 = INT16_MIN;
int32_t x427 = INT32_MIN;
uint8_t x461 = 27U;
uint16_t x481 = 2433U;
uint8_t x484 = 1U;
int8_t x513 = INT8_MIN;
int32_t t27 = 0;
int8_t x524 = 14;
int64_t x525 = INT64_MAX;
static int8_t x559 = -2;
uint16_t x577 = 52U;
int32_t t32 = 3252471;
uint8_t x607 = 1U;
volatile uint64_t x618 = 171332809022700LLU;
uint64_t t36 = 330378469LLU;
uint8_t x697 = UINT8_MAX;
uint16_t x698 = 5127U;
uint64_t x699 = UINT64_MAX;
int64_t t38 = 8435993955LL;
int32_t x760 = INT32_MAX;
volatile uint32_t x765 = 241U;
volatile uint64_t x786 = 7355927573761856926LLU;
uint8_t x797 = 86U;
static int8_t x800 = 3;
volatile int16_t x804 = -4459;
static volatile int64_t t43 = 27378287232LL;
uint32_t x857 = 1U;
int16_t x860 = 459;
int32_t x861 = INT32_MAX;
int8_t x871 = INT8_MAX;
static int16_t x931 = 28;
volatile uint32_t x932 = 5273382U;
int16_t x1009 = INT16_MIN;
int8_t x1014 = 6;
uint16_t x1159 = 447U;
int16_t x1160 = INT16_MIN;
volatile uint8_t x1201 = UINT8_MAX;
int64_t x1203 = -1736559113261999318LL;
uint64_t x1215 = 416LLU;
uint64_t x1217 = UINT64_MAX;
uint32_t x1218 = 509112U;
volatile int8_t x1220 = 0;
static uint32_t x1266 = 17488466U;
int16_t x1277 = -1;
uint32_t x1278 = 107291U;
uint8_t x1330 = UINT8_MAX;
volatile int32_t x1348 = INT32_MIN;
volatile int32_t t64 = 218391125;
uint16_t x1363 = UINT16_MAX;
uint64_t x1374 = UINT64_MAX;
volatile uint8_t x1400 = 51U;
uint8_t x1419 = 23U;
volatile uint64_t t68 = 23622769LLU;
int8_t x1444 = 0;
static uint64_t x1445 = UINT64_MAX;
uint64_t x1450 = UINT64_MAX;
uint8_t x1452 = 2U;
int32_t x1486 = 14841657;
uint8_t x1560 = 7U;
static volatile int32_t x1568 = INT32_MAX;
volatile uint8_t x1649 = 1U;
uint32_t x1650 = 874U;
uint8_t x1654 = 69U;
int64_t x1661 = 2679LL;
uint16_t x1663 = 1U;
volatile int16_t x1795 = -1;
int32_t x1796 = 0;
static int32_t x1841 = -14;
int16_t x1843 = 36;
uint16_t x1908 = 2U;
volatile uint64_t t90 = 240LLU;
int16_t x1961 = INT16_MIN;
volatile uint64_t t96 = 1781202484136374512LLU;
int64_t x2021 = 10388728277LL;
int32_t x2022 = 17738;
volatile uint8_t x2024 = 27U;
int64_t x2040 = INT64_MIN;


void f0(void) {
	uint16_t x10 = 274U;
	uint16_t x11 = UINT16_MAX;
	volatile uint32_t t0 = 898U;

	t0 = (x9*(x10<<(x11&x12)));

	if (t0 != 2192U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x42 = UINT16_MAX;

	t1 = (x41*(x42<<(x43&x44)));

	if (t1 != -2147450880) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x53 = -1;
	int32_t x54 = 137510778;
	volatile int16_t x56 = INT16_MIN;
	static int32_t t2 = -183776202;

	t2 = (x53*(x54<<(x55&x56)));

	if (t2 != -137510778) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x59 = 16940707687211520LLU;
	volatile int8_t x60 = INT8_MAX;
	static volatile uint64_t t3 = 1096497439LLU;

	t3 = (x57*(x58<<(x59&x60)));

	if (t3 != 10LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x97 = UINT32_MAX;
	int8_t x98 = 0;
	volatile int32_t x99 = INT32_MIN;
	static uint64_t x100 = 100373LLU;

	t4 = (x97*(x98<<(x99&x100)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x113 = INT32_MAX;
	volatile uint32_t x114 = 1U;
	uint8_t x115 = 2U;
	volatile int32_t x116 = INT32_MIN;
	uint32_t t5 = 3U;

	t5 = (x113*(x114<<(x115&x116)));

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x125 = INT8_MIN;
	volatile uint32_t x126 = UINT32_MAX;
	int64_t x127 = INT64_MIN;
	static volatile int32_t x128 = INT32_MAX;
	uint32_t t6 = 2492U;

	t6 = (x125*(x126<<(x127&x128)));

	if (t6 != 128U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x153 = 109244U;
	volatile uint32_t x155 = 2U;
	int16_t x156 = INT16_MIN;
	volatile uint32_t t7 = 3767U;

	t7 = (x153*(x154<<(x155&x156)));

	if (t7 != 218488U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x213 = 3U;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = INT16_MIN;
	int16_t x216 = 13797;
	uint32_t t8 = 4789U;

	t8 = (x213*(x214<<(x215&x216)));

	if (t8 != 4294967293U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x245 = 13771U;
	uint8_t x246 = 78U;
	int32_t x247 = 1725;
	int8_t x248 = 0;
	int32_t t9 = 417988;

	t9 = (x245*(x246<<(x247&x248)));

	if (t9 != 1074138) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x254 = UINT8_MAX;
	volatile uint8_t x255 = 3U;
	volatile int32_t t10 = -1607636;

	t10 = (x253*(x254<<(x255&x256)));

	if (t10 != 65025) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x261 = INT8_MAX;
	uint64_t x262 = 2425994LLU;
	int32_t x263 = 181054;
	int8_t x264 = 4;
	uint64_t t11 = 621455889332LLU;

	t11 = (x261*(x262<<(x263&x264)));

	if (t11 != 4929619808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x317 = UINT64_MAX;
	volatile uint8_t x318 = 52U;
	int16_t x319 = 12;
	int32_t x320 = INT32_MIN;

	t12 = (x317*(x318<<(x319&x320)));

	if (t12 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x325 = 1457U;
	uint32_t x326 = 358603473U;
	uint8_t x327 = 6U;
	uint8_t x328 = 47U;
	uint32_t t13 = 6783410U;

	t13 = (x325*(x326<<(x327&x328)));

	if (t13 != 2736250944U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x341 = 393018837;
	uint32_t x342 = 4883U;
	int64_t x343 = INT64_MIN;
	uint16_t x344 = UINT16_MAX;
	volatile uint32_t t14 = 502649U;

	t14 = (x341*(x342<<(x343&x344)));

	if (t14 != 3555567055U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x373 = UINT64_MAX;
	int16_t x374 = INT16_MAX;
	uint16_t x375 = 1U;
	int64_t x376 = 44470568834426LL;
	static uint64_t t15 = 298671584917LLU;

	t15 = (x373*(x374<<(x375&x376)));

	if (t15 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x377 = 1659;
	int8_t x378 = 41;
	volatile int16_t x379 = 8;
	volatile int32_t t16 = 3625;

	t16 = (x377*(x378<<(x379&x380)));

	if (t16 != 68019) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x381 = -1968;
	int16_t x382 = INT16_MAX;
	static int64_t x383 = INT64_MIN;
	int64_t x384 = INT64_MAX;
	int32_t t17 = -764;

	t17 = (x381*(x382<<(x383&x384)));

	if (t17 != -64485456) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x385 = INT16_MAX;
	int64_t x386 = 2LL;
	int32_t x387 = 52;
	static uint32_t x388 = 31854933U;
	volatile int64_t t18 = 889922440743LL;

	t18 = (x385*(x386<<(x387&x388)));

	if (t18 != 68717379584LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x389 = -43386064991250LL;
	volatile uint32_t x390 = 17U;
	uint32_t x391 = 8U;
	static volatile int32_t x392 = 3275299;
	volatile int64_t t19 = 324307LL;

	t19 = (x389*(x390<<(x391&x392)));

	if (t19 != -737563104851250LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x425 = 16;
	uint16_t x426 = UINT16_MAX;
	uint32_t x428 = 3276223U;
	int32_t t20 = 87754333;

	t20 = (x425*(x426<<(x427&x428)));

	if (t20 != 1048560) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x429 = -1;
	int16_t x430 = INT16_MAX;
	volatile int64_t x431 = 249386210461LL;
	int64_t x432 = INT64_MIN;
	volatile int32_t t21 = -134;

	t21 = (x429*(x430<<(x431&x432)));

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x433 = UINT16_MAX;
	static int8_t x434 = INT8_MAX;
	int64_t x435 = 1937672915658LL;
	int64_t x436 = INT64_MIN;
	int32_t t22 = 41;

	t22 = (x433*(x434<<(x435&x436)));

	if (t22 != 8322945) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x462 = UINT16_MAX;
	volatile uint8_t x463 = 13U;
	static uint16_t x464 = 2056U;
	volatile int32_t t23 = 34856;

	t23 = (x461*(x462<<(x463&x464)));

	if (t23 != 452977920) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x473 = UINT32_MAX;
	uint32_t x474 = 59259U;
	int8_t x475 = INT8_MIN;
	volatile int8_t x476 = INT8_MAX;
	static volatile uint32_t t24 = 65677396U;

	t24 = (x473*(x474<<(x475&x476)));

	if (t24 != 4294908037U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x482 = 124289U;
	volatile int64_t x483 = -1LL;
	static volatile uint32_t t25 = 3482153U;

	t25 = (x481*(x482<<(x483&x484)));

	if (t25 != 604790274U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x493 = INT8_MAX;
	uint16_t x494 = UINT16_MAX;
	uint8_t x495 = 1U;
	static uint16_t x496 = UINT16_MAX;
	volatile int32_t t26 = 62;

	t26 = (x493*(x494<<(x495&x496)));

	if (t26 != 16645890) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x514 = 103;
	int32_t x515 = 3077;
	uint64_t x516 = 935835186098LLU;

	t27 = (x513*(x514<<(x515&x516)));

	if (t27 != -13184) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x521 = 31U;
	int16_t x522 = 9;
	int64_t x523 = INT64_MAX;
	volatile int32_t t28 = -154196;

	t28 = (x521*(x522<<(x523&x524)));

	if (t28 != 4571136) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x526 = 3848LLU;
	static int64_t x527 = -8588LL;
	static uint32_t x528 = 1U;
	uint64_t t29 = 1LLU;

	t29 = (x525*(x526<<(x527&x528)));

	if (t29 != 18446744073709547768LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x557 = UINT64_MAX;
	int8_t x558 = INT8_MAX;
	volatile uint16_t x560 = 10U;
	uint64_t t30 = 6116577324194263597LLU;

	t30 = (x557*(x558<<(x559&x560)));

	if (t30 != 18446744073709421568LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x578 = UINT16_MAX;
	volatile uint16_t x579 = 33U;
	int32_t x580 = 12;
	volatile int32_t t31 = -8516218;

	t31 = (x577*(x578<<(x579&x580)));

	if (t31 != 3407820) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x581 = -1;
	volatile int8_t x582 = 44;
	int32_t x583 = 98;
	int8_t x584 = INT8_MIN;

	t32 = (x581*(x582<<(x583&x584)));

	if (t32 != -44) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x585 = 12U;
	volatile int32_t x586 = 2430628;
	uint32_t x587 = 375U;
	static int64_t x588 = INT64_MIN;
	volatile int32_t t33 = -499144;

	t33 = (x585*(x586<<(x587&x588)));

	if (t33 != 29167536) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x605 = -1;
	int8_t x606 = 1;
	uint8_t x608 = 4U;
	static int32_t t34 = 13408;

	t34 = (x605*(x606<<(x607&x608)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x617 = -1;
	int8_t x619 = 22;
	uint32_t x620 = 220U;
	uint64_t t35 = 3LLU;

	t35 = (x617*(x618<<(x619&x620)));

	if (t35 != 4811969183308840960LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x625 = UINT32_MAX;
	uint64_t x626 = 13797939316784LLU;
	int16_t x627 = INT16_MIN;
	uint32_t x628 = 16745U;

	t36 = (x625*(x626<<(x627&x628)));

	if (t36 != 10756139226844788688LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x700 = 5U;
	volatile int32_t t37 = 26874;

	t37 = (x697*(x698<<(x699&x700)));

	if (t37 != 41836320) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x729 = -1;
	volatile int64_t x730 = 57085137LL;
	int16_t x731 = -1;
	static uint16_t x732 = 1U;

	t38 = (x729*(x730<<(x731&x732)));

	if (t38 != -114170274LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x757 = INT32_MAX;
	uint64_t x758 = UINT64_MAX;
	int8_t x759 = 0;
	uint64_t t39 = 29862081714636318LLU;

	t39 = (x757*(x758<<(x759&x760)));

	if (t39 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x766 = 475271LLU;
	volatile int32_t x767 = INT32_MIN;
	uint64_t x768 = 399873620LLU;
	volatile uint64_t t40 = 2018535525379LLU;

	t40 = (x765*(x766<<(x767&x768)));

	if (t40 != 114540311LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x785 = -1LL;
	int64_t x787 = INT64_MAX;
	uint8_t x788 = 1U;
	volatile uint64_t t41 = 5931144065240734718LLU;

	t41 = (x785*(x786<<(x787&x788)));

	if (t41 != 3734888926185837764LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x798 = INT16_MAX;
	int32_t x799 = 1865911;
	static int32_t t42 = -30430;

	t42 = (x797*(x798<<(x799&x800)));

	if (t42 != 22543696) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x801 = 8071383LL;
	static int8_t x802 = 0;
	volatile uint8_t x803 = 21U;

	t43 = (x801*(x802<<(x803&x804)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x858 = 32536U;
	volatile int32_t x859 = INT32_MIN;
	volatile uint32_t t44 = 5835352U;

	t44 = (x857*(x858<<(x859&x860)));

	if (t44 != 32536U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x862 = 1LLU;
	uint32_t x863 = 537281350U;
	int32_t x864 = INT32_MIN;
	uint64_t t45 = 4261873942LLU;

	t45 = (x861*(x862<<(x863&x864)));

	if (t45 != 2147483647LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x869 = INT32_MIN;
	uint64_t x870 = 1214336677768LLU;
	uint16_t x872 = 0U;
	volatile uint64_t t46 = 227478312297439LLU;

	t46 = (x869*(x870<<(x871&x872)));

	if (t46 != 11669499793331191808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x929 = 29U;
	uint8_t x930 = UINT8_MAX;
	volatile uint32_t t47 = 103177830U;

	t47 = (x929*(x930<<(x931&x932)));

	if (t47 != 118320U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x1010 = 1U;
	uint64_t x1011 = 2LLU;
	int32_t x1012 = -1;
	volatile int32_t t48 = -815405070;

	t48 = (x1009*(x1010<<(x1011&x1012)));

	if (t48 != -131072) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x1013 = INT8_MIN;
	int32_t x1015 = INT32_MIN;
	static uint32_t x1016 = 2555249U;
	static int32_t t49 = -7711;

	t49 = (x1013*(x1014<<(x1015&x1016)));

	if (t49 != -768) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x1021 = -17;
	uint16_t x1022 = 2U;
	int32_t x1023 = 54191;
	int32_t x1024 = 1;
	static int32_t t50 = -1813439;

	t50 = (x1021*(x1022<<(x1023&x1024)));

	if (t50 != -68) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x1029 = 8717672276002LLU;
	volatile int8_t x1030 = 1;
	int8_t x1031 = 3;
	int8_t x1032 = INT8_MIN;
	volatile uint64_t t51 = 34577266638789680LLU;

	t51 = (x1029*(x1030<<(x1031&x1032)));

	if (t51 != 8717672276002LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1053 = 50026;
	uint64_t x1054 = 5947590095LLU;
	volatile int8_t x1055 = INT8_MAX;
	int64_t x1056 = -12676240267876LL;
	uint64_t t52 = 33083489552LLU;

	t52 = (x1053*(x1054<<(x1055&x1056)));

	if (t52 != 12758013072329670656LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x1145 = -1633;
	uint64_t x1146 = 1094LLU;
	int32_t x1147 = -7568069;
	uint8_t x1148 = UINT8_MAX;
	volatile uint64_t t53 = 7770196632211414019LLU;

	t53 = (x1145*(x1146<<(x1147&x1148)));

	if (t53 != 14987979559889010688LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1157 = INT8_MIN;
	uint64_t x1158 = 14381208845968LLU;
	static uint64_t t54 = 4LLU;

	t54 = (x1157*(x1158<<(x1159&x1160)));

	if (t54 != 18444903278977267712LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1181 = INT16_MIN;
	uint64_t x1182 = 4455093340685445LLU;
	uint8_t x1183 = 12U;
	volatile int32_t x1184 = -1;
	uint64_t t55 = 3341528886LLU;

	t55 = (x1181*(x1182<<(x1183&x1184)));

	if (t55 != 17149678638434615296LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1197 = -1LL;
	static uint64_t x1198 = 1751434093018LLU;
	int8_t x1199 = 0;
	uint32_t x1200 = UINT32_MAX;
	uint64_t t56 = 131LLU;

	t56 = (x1197*(x1198<<(x1199&x1200)));

	if (t56 != 18446742322275458598LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1202 = 318415186113LLU;
	uint32_t x1204 = 110U;
	uint64_t t57 = 236097097042960996LLU;

	t57 = (x1201*(x1202<<(x1203&x1204)));

	if (t57 != 9971246651928477696LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1213 = INT32_MIN;
	uint8_t x1214 = 1U;
	int16_t x1216 = INT16_MIN;
	int32_t t58 = INT32_MIN;

	t58 = (x1213*(x1214<<(x1215&x1216)));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1219 = 1U;
	volatile uint64_t t59 = 848613703493414013LLU;

	t59 = (x1217*(x1218<<(x1219&x1220)));

	if (t59 != 18446744073709042504LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x1265 = INT16_MIN;
	static int32_t x1267 = 3;
	static int32_t x1268 = -400951814;
	uint32_t t60 = 1888U;

	t60 = (x1265*(x1266<<(x1267&x1268)));

	if (t60 != 1264320512U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x1279 = 24U;
	static volatile int64_t x1280 = -1LL;
	uint32_t t61 = 168937U;

	t61 = (x1277*(x1278<<(x1279&x1280)));

	if (t61 != 3841982464U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x1309 = 810091LLU;
	volatile uint64_t x1310 = UINT64_MAX;
	static volatile uint32_t x1311 = UINT32_MAX;
	volatile int64_t x1312 = INT64_MIN;
	uint64_t t62 = 2773LLU;

	t62 = (x1309*(x1310<<(x1311&x1312)));

	if (t62 != 18446744073708741525LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1329 = -36;
	static uint16_t x1331 = 0U;
	int16_t x1332 = INT16_MIN;
	volatile int32_t t63 = -1571769;

	t63 = (x1329*(x1330<<(x1331&x1332)));

	if (t63 != -9180) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x1345 = UINT16_MAX;
	uint8_t x1346 = UINT8_MAX;
	volatile int16_t x1347 = 15399;

	t64 = (x1345*(x1346<<(x1347&x1348)));

	if (t64 != 16711425) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1361 = 51U;
	uint64_t x1362 = 64559676625432962LLU;
	static int32_t x1364 = 4;
	volatile uint64_t t65 = 28703945774577029LLU;

	t65 = (x1361*(x1362<<(x1363&x1364)));

	if (t65 != 15787207978934193760LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x1373 = INT16_MAX;
	static volatile int8_t x1375 = -1;
	volatile uint16_t x1376 = 1U;
	volatile uint64_t t66 = 7532115202013LLU;

	t66 = (x1373*(x1374<<(x1375&x1376)));

	if (t66 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x1397 = INT16_MAX;
	uint8_t x1398 = UINT8_MAX;
	int16_t x1399 = INT16_MIN;
	static volatile int32_t t67 = -7;

	t67 = (x1397*(x1398<<(x1399&x1400)));

	if (t67 != 8355585) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1417 = 2129545936056LLU;
	static uint64_t x1418 = 287349LLU;
	static int8_t x1420 = 1;

	t68 = (x1417*(x1418<<(x1419&x1420)));

	if (t68 != 1223845790359511088LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1441 = -1;
	static int64_t x1442 = INT64_MAX;
	int64_t x1443 = -1LL;
	volatile int64_t t69 = -3LL;

	t69 = (x1441*(x1442<<(x1443&x1444)));

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1446 = 14U;
	int8_t x1447 = INT8_MIN;
	int8_t x1448 = 18;
	uint64_t t70 = 777007LLU;

	t70 = (x1445*(x1446<<(x1447&x1448)));

	if (t70 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1449 = 51818LLU;
	int64_t x1451 = INT64_MAX;
	volatile uint64_t t71 = 4LLU;

	t71 = (x1449*(x1450<<(x1451&x1452)));

	if (t71 != 18446744073709344344LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x1485 = -2;
	volatile int32_t x1487 = 763;
	int64_t x1488 = INT64_MIN;
	static volatile int32_t t72 = -1812037;

	t72 = (x1485*(x1486<<(x1487&x1488)));

	if (t72 != -29683314) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1509 = -1LL;
	uint8_t x1510 = 0U;
	int32_t x1511 = INT32_MIN;
	volatile int16_t x1512 = 24;
	int64_t t73 = -151LL;

	t73 = (x1509*(x1510<<(x1511&x1512)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x1557 = INT32_MAX;
	uint32_t x1558 = UINT32_MAX;
	static int32_t x1559 = -1735885;
	uint32_t t74 = 5732503U;

	t74 = (x1557*(x1558<<(x1559&x1560)));

	if (t74 != 8U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x1565 = UINT16_MAX;
	int8_t x1566 = 22;
	int16_t x1567 = 0;
	static volatile int32_t t75 = -4;

	t75 = (x1565*(x1566<<(x1567&x1568)));

	if (t75 != 1441770) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1629 = 3020U;
	uint64_t x1630 = UINT64_MAX;
	uint64_t x1631 = 19589181LLU;
	static volatile int8_t x1632 = INT8_MAX;
	static volatile uint64_t t76 = 182LLU;

	t76 = (x1629*(x1630<<(x1631&x1632)));

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x1645 = INT8_MIN;
	int16_t x1646 = INT16_MAX;
	static int64_t x1647 = -6128323155287LL;
	static volatile int8_t x1648 = 3;
	int32_t t77 = 11805330;

	t77 = (x1645*(x1646<<(x1647&x1648)));

	if (t77 != -8388352) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x1651 = 1729699383U;
	uint16_t x1652 = 7U;
	volatile uint32_t t78 = 992870U;

	t78 = (x1649*(x1650<<(x1651&x1652)));

	if (t78 != 111872U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1653 = UINT16_MAX;
	int16_t x1655 = 1;
	uint32_t x1656 = 0U;
	static int32_t t79 = 184486;

	t79 = (x1653*(x1654<<(x1655&x1656)));

	if (t79 != 4521915) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1662 = INT8_MAX;
	int64_t x1664 = INT64_MAX;
	static volatile int64_t t80 = -1774LL;

	t80 = (x1661*(x1662<<(x1663&x1664)));

	if (t80 != 680466LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1673 = UINT32_MAX;
	uint8_t x1674 = 6U;
	static int16_t x1675 = INT16_MIN;
	int8_t x1676 = 48;
	volatile uint32_t t81 = 9531U;

	t81 = (x1673*(x1674<<(x1675&x1676)));

	if (t81 != 4294967290U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1685 = INT16_MIN;
	volatile int16_t x1686 = INT16_MAX;
	int8_t x1687 = INT8_MIN;
	uint16_t x1688 = 22U;
	volatile int32_t t82 = -1776;

	t82 = (x1685*(x1686<<(x1687&x1688)));

	if (t82 != -1073709056) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1713 = INT8_MIN;
	int8_t x1714 = INT8_MAX;
	uint16_t x1715 = 11U;
	volatile int8_t x1716 = INT8_MIN;
	volatile int32_t t83 = -26014;

	t83 = (x1713*(x1714<<(x1715&x1716)));

	if (t83 != -16256) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1737 = -1;
	volatile uint16_t x1738 = 1369U;
	int64_t x1739 = INT64_MIN;
	volatile uint16_t x1740 = 7532U;
	volatile int32_t t84 = 93;

	t84 = (x1737*(x1738<<(x1739&x1740)));

	if (t84 != -1369) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1777 = -17;
	int8_t x1778 = 13;
	uint8_t x1779 = 45U;
	int16_t x1780 = INT16_MIN;
	static int32_t t85 = -22;

	t85 = (x1777*(x1778<<(x1779&x1780)));

	if (t85 != -221) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x1793 = -1;
	int64_t x1794 = INT64_MAX;
	int64_t t86 = 776030024LL;

	t86 = (x1793*(x1794<<(x1795&x1796)));

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x1842 = UINT64_MAX;
	static uint16_t x1844 = 1468U;
	static volatile uint64_t t87 = 16LLU;

	t87 = (x1841*(x1842<<(x1843&x1844)));

	if (t87 != 962072674304LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1853 = 129580017U;
	volatile uint32_t x1854 = UINT32_MAX;
	int64_t x1855 = INT64_MIN;
	uint8_t x1856 = UINT8_MAX;
	uint32_t t88 = 154814U;

	t88 = (x1853*(x1854<<(x1855&x1856)));

	if (t88 != 4165387279U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1885 = INT16_MIN;
	uint16_t x1886 = 22U;
	static uint32_t x1887 = 12U;
	volatile int8_t x1888 = INT8_MIN;
	volatile int32_t t89 = 17194;

	t89 = (x1885*(x1886<<(x1887&x1888)));

	if (t89 != -720896) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x1905 = -700516LL;
	static uint64_t x1906 = 224LLU;
	int16_t x1907 = -1;

	t90 = (x1905*(x1906<<(x1907&x1908)));

	if (t90 != 18446744073081889280LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1913 = INT16_MIN;
	volatile uint8_t x1914 = 11U;
	volatile int64_t x1915 = INT64_MIN;
	int32_t x1916 = 164;
	int32_t t91 = 1043521;

	t91 = (x1913*(x1914<<(x1915&x1916)));

	if (t91 != -360448) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x1925 = -1;
	uint32_t x1926 = 6128U;
	volatile uint32_t x1927 = 5851U;
	uint16_t x1928 = 3U;
	uint32_t t92 = 632U;

	t92 = (x1925*(x1926<<(x1927&x1928)));

	if (t92 != 4294918272U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x1937 = INT16_MIN;
	int16_t x1938 = INT16_MAX;
	uint16_t x1939 = 111U;
	int32_t x1940 = INT32_MIN;
	volatile int32_t t93 = -26272540;

	t93 = (x1937*(x1938<<(x1939&x1940)));

	if (t93 != -1073709056) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1962 = UINT64_MAX;
	int64_t x1963 = INT64_MIN;
	int8_t x1964 = 3;
	uint64_t t94 = 31550174549LLU;

	t94 = (x1961*(x1962<<(x1963&x1964)));

	if (t94 != 32768LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x1969 = 3205898008LL;
	uint64_t x1970 = UINT64_MAX;
	volatile uint64_t x1971 = 780001620870LLU;
	int32_t x1972 = 81;
	volatile uint64_t t95 = 2129963728975948759LLU;

	t95 = (x1969*(x1970<<(x1971&x1972)));

	if (t95 != 18446744070503653608LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2017 = UINT8_MAX;
	static volatile uint64_t x2018 = 29185LLU;
	volatile int8_t x2019 = 7;
	int16_t x2020 = INT16_MIN;

	t96 = (x2017*(x2018<<(x2019&x2020)));

	if (t96 != 7442175LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x2023 = INT32_MIN;
	int64_t t97 = 6617LL;

	t97 = (x2021*(x2022<<(x2023&x2024)));

	if (t97 != 184275262177426LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x2037 = 4;
	uint8_t x2038 = 12U;
	uint64_t x2039 = 1772581669074540LLU;
	static int32_t t98 = -33121;

	t98 = (x2037*(x2038<<(x2039&x2040)));

	if (t98 != 48) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2085 = 24015258U;
	int32_t x2086 = 1155074;
	uint64_t x2087 = 1634810794LLU;
	int8_t x2088 = 4;
	uint32_t t99 = 11866U;

	t99 = (x2085*(x2086<<(x2087&x2088)));

	if (t99 != 2501321524U) { NG(); } else { ; }
	
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

