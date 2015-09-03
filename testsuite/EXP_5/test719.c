#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x39 = INT8_MIN;
int16_t x40 = 5420;
int16_t x52 = -4;
uint8_t x53 = 31U;
int64_t x55 = INT64_MIN;
int64_t x59 = -3388671LL;
static int64_t x114 = 704913316946LL;
static int8_t x116 = INT8_MIN;
static uint32_t t6 = 12U;
volatile uint64_t t7 = 873299502074738314LLU;
volatile uint16_t x142 = UINT16_MAX;
uint8_t x145 = 82U;
volatile int64_t t10 = 130318304213089108LL;
volatile int8_t x205 = -61;
int64_t x206 = INT64_MIN;
int32_t x210 = -259315;
volatile uint32_t x261 = 2761414U;
int32_t t20 = -260132;
int32_t x284 = INT32_MIN;
uint16_t x305 = 1U;
int16_t x307 = INT16_MIN;
int64_t x313 = 3345649652360683LL;
int64_t t30 = 0LL;
int16_t x449 = 3;
static int8_t x450 = 1;
uint8_t x452 = 1U;
static int64_t x454 = INT64_MIN;
int16_t x456 = -1;
int64_t t35 = -125043889680LL;
int16_t x507 = -1;
uint64_t t36 = 29807LLU;
static volatile int64_t t37 = -3915561213952388559LL;
uint16_t x621 = UINT16_MAX;
int32_t x623 = INT32_MIN;
int64_t x634 = -43099731464149743LL;
int16_t x637 = INT16_MIN;
uint16_t x638 = UINT16_MAX;
uint8_t x640 = 3U;
static int16_t x645 = INT16_MIN;
uint32_t x662 = UINT32_MAX;
uint32_t x664 = 19252U;
int16_t x678 = INT16_MAX;
static volatile int32_t x679 = 161568830;
volatile int64_t t50 = 23092961LL;
int32_t x709 = INT32_MIN;
int16_t x712 = -1;
volatile int32_t t53 = 67768;
int16_t x758 = INT16_MIN;
uint64_t x780 = 3LLU;
static int32_t x832 = -1;
uint64_t t62 = 10LLU;
volatile int64_t t64 = 1292413347943819340LL;
static int32_t x872 = -103;
int32_t x894 = 4180;
static int8_t x898 = INT8_MIN;
volatile uint32_t t71 = 0U;
volatile int64_t x951 = INT64_MIN;
int16_t x952 = -1;
uint64_t x1026 = 20206LLU;
uint64_t t74 = 235420136154797LLU;
static volatile int8_t x1048 = -14;
uint32_t x1114 = 77644898U;
int32_t x1118 = INT32_MIN;
static uint64_t x1131 = 236880752LLU;
volatile uint64_t t83 = 11450434659308LLU;
int8_t x1160 = -1;
int32_t x1203 = INT32_MIN;
static int8_t x1209 = 3;
uint16_t x1279 = 2169U;
int8_t x1301 = INT8_MIN;
volatile uint64_t t91 = 1991602332LLU;
int32_t x1325 = -1;
int64_t x1333 = -6390LL;
uint16_t x1342 = 255U;
static int16_t x1362 = -15;
uint64_t x1364 = 3925LLU;
static int8_t x1400 = -1;
static uint64_t t98 = 70LLU;


void f0(void) {
	static uint8_t x37 = 11U;
	uint32_t x38 = 740913U;
	uint32_t t0 = 2U;

	t0 = (x37/((x38%x39)/x40));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x49 = INT32_MAX;
	volatile uint16_t x50 = UINT16_MAX;
	static int32_t x51 = INT32_MIN;
	volatile int32_t t1 = 1;

	t1 = (x49/((x50%x51)/x52));

	if (t1 != -131080) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x54 = 2017351LLU;
	volatile uint8_t x56 = UINT8_MAX;
	volatile uint64_t t2 = 96159302203LLU;

	t2 = (x53/((x54%x55)/x56));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x57 = 14U;
	int64_t x58 = INT64_MIN;
	static volatile int16_t x60 = INT16_MIN;
	volatile int64_t t3 = -1447083700LL;

	t3 = (x57/((x58%x59)/x60));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x69 = UINT64_MAX;
	uint64_t x70 = 14LLU;
	uint64_t x71 = UINT64_MAX;
	volatile int8_t x72 = 1;
	volatile uint64_t t4 = 106079083617LLU;

	t4 = (x69/((x70%x71)/x72));

	if (t4 != 1317624576693539401LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x113 = -7;
	int64_t x115 = -6597036LL;
	volatile int64_t t5 = 984LL;

	t5 = (x113/((x114%x115)/x116));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x117 = 25352U;
	int8_t x118 = -1;
	volatile uint16_t x119 = 116U;
	volatile uint32_t x120 = 2050U;

	t6 = (x117/((x118%x119)/x120));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x129 = 838LLU;
	int16_t x130 = -1;
	int16_t x131 = 367;
	int32_t x132 = -1;

	t7 = (x129/((x130%x131)/x132));

	if (t7 != 838LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x137 = INT16_MAX;
	volatile int8_t x138 = -1;
	uint16_t x139 = 28U;
	int64_t x140 = -1LL;
	int64_t t8 = -1946300873260LL;

	t8 = (x137/((x138%x139)/x140));

	if (t8 != 32767LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x141 = 26190871511960LLU;
	int64_t x143 = -331653337458LL;
	int16_t x144 = INT16_MIN;
	uint64_t t9 = 3036494435547LLU;

	t9 = (x141/((x142%x143)/x144));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x146 = INT16_MIN;
	int64_t x147 = -1625547LL;
	int8_t x148 = INT8_MIN;

	t10 = (x145/((x146%x147)/x148));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x165 = INT32_MIN;
	volatile uint16_t x166 = 3U;
	int32_t x167 = -15;
	uint8_t x168 = 3U;
	volatile int32_t t11 = INT32_MIN;

	t11 = (x165/((x166%x167)/x168));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x181 = 6915U;
	int16_t x182 = INT16_MIN;
	static int64_t x183 = INT64_MIN;
	uint8_t x184 = 16U;
	static volatile int64_t t12 = -2040675LL;

	t12 = (x181/((x182%x183)/x184));

	if (t12 != -3LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x207 = UINT8_MAX;
	static volatile int16_t x208 = -1;
	volatile int64_t t13 = -13717839LL;

	t13 = (x205/((x206%x207)/x208));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x209 = -1LL;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = INT8_MAX;
	volatile int64_t t14 = -223155454008629055LL;

	t14 = (x209/((x210%x211)/x212));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x213 = -1LL;
	int16_t x214 = INT16_MIN;
	uint16_t x215 = UINT16_MAX;
	volatile uint8_t x216 = 6U;
	volatile int64_t t15 = -14284171032455086LL;

	t15 = (x213/((x214%x215)/x216));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x217 = INT8_MAX;
	static int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MAX;
	int32_t x220 = -1;
	int32_t t16 = -2;

	t16 = (x217/((x218%x219)/x220));

	if (t16 != 15) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x225 = 8;
	int16_t x226 = INT16_MIN;
	static uint16_t x227 = UINT16_MAX;
	static int64_t x228 = -1LL;
	static int64_t t17 = 411653616751698LL;

	t17 = (x225/((x226%x227)/x228));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x257 = UINT8_MAX;
	uint64_t x258 = 232578659004LLU;
	uint32_t x259 = 388079464U;
	uint64_t x260 = 947489LLU;
	uint64_t t18 = 1219294452LLU;

	t18 = (x257/((x258%x259)/x260));

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x262 = 391170246;
	static volatile int64_t x263 = INT64_MIN;
	int16_t x264 = INT16_MIN;
	static volatile int64_t t19 = 26506294LL;

	t19 = (x261/((x262%x263)/x264));

	if (t19 != -231LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x265 = 78U;
	volatile int16_t x266 = INT16_MAX;
	static int32_t x267 = INT32_MIN;
	uint16_t x268 = 1643U;

	t20 = (x265/((x266%x267)/x268));

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x281 = UINT8_MAX;
	static int8_t x282 = -28;
	static uint64_t x283 = UINT64_MAX;
	volatile uint64_t t21 = 3830958968455527LLU;

	t21 = (x281/((x282%x283)/x284));

	if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x293 = 0U;
	static int64_t x294 = 11961LL;
	uint32_t x295 = 4774U;
	static int8_t x296 = INT8_MIN;
	static volatile int64_t t22 = 10003371834514LL;

	t22 = (x293/((x294%x295)/x296));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x306 = 16297379150058508LLU;
	int16_t x308 = INT16_MAX;
	volatile uint64_t t23 = 9207025858575985996LLU;

	t23 = (x305/((x306%x307)/x308));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x314 = 162966U;
	int8_t x315 = INT8_MIN;
	static int16_t x316 = 2;
	static volatile int64_t t24 = -4513726513977686578LL;

	t24 = (x313/((x314%x315)/x316));

	if (t24 != 41059480534LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x321 = 7U;
	volatile int16_t x322 = INT16_MIN;
	volatile uint32_t x323 = 430U;
	int8_t x324 = 5;
	uint32_t t25 = 481225639U;

	t25 = (x321/((x322%x323)/x324));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x373 = INT32_MIN;
	volatile int16_t x374 = -1;
	static volatile int16_t x375 = 117;
	static uint64_t x376 = 6168LLU;
	uint64_t t26 = 8200436274926496LLU;

	t26 = (x373/((x374%x375)/x376));

	if (t26 != 6167LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x405 = 116190079U;
	static uint8_t x406 = 8U;
	static volatile int16_t x407 = INT16_MIN;
	int32_t x408 = -1;
	uint32_t t27 = 856U;

	t27 = (x405/((x406%x407)/x408));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x417 = 2;
	uint64_t x418 = 5188462LLU;
	static volatile int32_t x419 = -302;
	static uint32_t x420 = 186793U;
	static volatile uint64_t t28 = 4546LLU;

	t28 = (x417/((x418%x419)/x420));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x433 = -1LL;
	int16_t x434 = -1;
	int32_t x435 = INT32_MAX;
	static uint64_t x436 = 123235628860570324LLU;
	uint64_t t29 = 2LLU;

	t29 = (x433/((x434%x435)/x436));

	if (t29 != 123803651501406386LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x441 = -2024374065208LL;
	int8_t x442 = INT8_MIN;
	static uint32_t x443 = 893660U;
	static volatile uint8_t x444 = UINT8_MAX;

	t30 = (x441/((x442%x443)/x444));

	if (t30 != -13961200449LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x445 = 1U;
	int16_t x446 = INT16_MIN;
	static uint32_t x447 = UINT32_MAX;
	int8_t x448 = 58;
	uint32_t t31 = 57U;

	t31 = (x445/((x446%x447)/x448));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x451 = UINT16_MAX;
	int32_t t32 = -7428;

	t32 = (x449/((x450%x451)/x452));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x453 = INT32_MIN;
	uint16_t x455 = 13U;
	static int64_t t33 = 4LL;

	t33 = (x453/((x454%x455)/x456));

	if (t33 != -268435456LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x469 = 633;
	int8_t x470 = INT8_MIN;
	volatile int16_t x471 = -147;
	int16_t x472 = -1;
	volatile int32_t t34 = 55659482;

	t34 = (x469/((x470%x471)/x472));

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x481 = 4599006042LL;
	int16_t x482 = INT16_MIN;
	volatile int64_t x483 = INT64_MIN;
	int64_t x484 = -31LL;

	t35 = (x481/((x482%x483)/x484));

	if (t35 != 4350999LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x505 = 39129U;
	uint64_t x506 = 540448998354LLU;
	static int8_t x508 = INT8_MAX;

	t36 = (x505/((x506%x507)/x508));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x533 = 110843U;
	volatile int32_t x534 = -25918;
	int64_t x535 = INT64_MAX;
	int8_t x536 = INT8_MAX;

	t37 = (x533/((x534%x535)/x536));

	if (t37 != -543LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x565 = -1;
	static int8_t x566 = -1;
	uint16_t x567 = UINT16_MAX;
	uint32_t x568 = UINT32_MAX;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = (x565/((x566%x567)/x568));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x573 = INT8_MAX;
	int16_t x574 = 360;
	int16_t x575 = INT16_MIN;
	static uint8_t x576 = 47U;
	volatile int32_t t39 = 1;

	t39 = (x573/((x574%x575)/x576));

	if (t39 != 18) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x585 = 7290U;
	volatile int32_t x586 = -1;
	int64_t x587 = 44269LL;
	int16_t x588 = -1;
	volatile int64_t t40 = 12173LL;

	t40 = (x585/((x586%x587)/x588));

	if (t40 != 7290LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x597 = 1;
	uint64_t x598 = 4649142445564428192LLU;
	int32_t x599 = INT32_MAX;
	int8_t x600 = 1;
	volatile uint64_t t41 = 1034790214031LLU;

	t41 = (x597/((x598%x599)/x600));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x601 = UINT64_MAX;
	static int16_t x602 = -26;
	static int16_t x603 = INT16_MIN;
	int16_t x604 = -1;
	volatile uint64_t t42 = 13145495722LLU;

	t42 = (x601/((x602%x603)/x604));

	if (t42 != 709490156681136600LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x622 = INT16_MAX;
	volatile uint8_t x624 = 3U;
	int32_t t43 = 714274;

	t43 = (x621/((x622%x623)/x624));

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x633 = 501;
	uint32_t x635 = 98691U;
	static volatile uint16_t x636 = 10U;
	int64_t t44 = -21080LL;

	t44 = (x633/((x634%x635)/x636));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x639 = 62464LLU;
	uint64_t t45 = 2322LLU;

	t45 = (x637/((x638%x639)/x640));

	if (t45 != 18032007892189167LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x646 = 144LL;
	uint16_t x647 = 5864U;
	int64_t x648 = -1LL;
	volatile int64_t t46 = 1868343329LL;

	t46 = (x645/((x646%x647)/x648));

	if (t46 != 227LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x649 = -1;
	volatile int32_t x650 = INT32_MAX;
	uint64_t x651 = 7286481855210209LLU;
	uint32_t x652 = 789U;
	uint64_t t47 = 173113792687607545LLU;

	t47 = (x649/((x650%x651)/x652));

	if (t47 != 6777458446740LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x653 = INT32_MIN;
	uint16_t x654 = 24063U;
	static uint64_t x655 = 194131222LLU;
	uint8_t x656 = 21U;
	volatile uint64_t t48 = 43513601417LLU;

	t48 = (x653/((x654%x655)/x656));

	if (t48 != 16110693512281282LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x661 = INT64_MIN;
	static int32_t x663 = 127483;
	int64_t t49 = 13959971LL;

	t49 = (x661/((x662%x663)/x664));

	if (t49 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x677 = INT64_MAX;
	volatile uint16_t x680 = 212U;

	t50 = (x677/((x678%x679)/x680));

	if (t50 != 59892026213342700LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x685 = -1;
	volatile int32_t x686 = INT32_MIN;
	uint8_t x687 = 17U;
	uint32_t x688 = 321579840U;
	uint32_t t51 = 8U;

	t51 = (x685/((x686%x687)/x688));

	if (t51 != 330382099U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x693 = INT8_MIN;
	int8_t x694 = INT8_MIN;
	static volatile uint16_t x695 = UINT16_MAX;
	static volatile uint64_t x696 = 359969364790519LLU;
	uint64_t t52 = 8259935LLU;

	t52 = (x693/((x694%x695)/x696));

	if (t52 != 359971588910323LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x710 = -30;
	uint16_t x711 = 2014U;

	t53 = (x709/((x710%x711)/x712));

	if (t53 != -71582788) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x757 = INT16_MIN;
	volatile int32_t x759 = INT32_MAX;
	int8_t x760 = INT8_MAX;
	static int32_t t54 = -450;

	t54 = (x757/((x758%x759)/x760));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x765 = 32651627U;
	int8_t x766 = -1;
	uint16_t x767 = 88U;
	int16_t x768 = -1;
	uint32_t t55 = 371U;

	t55 = (x765/((x766%x767)/x768));

	if (t55 != 32651627U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x773 = -3421470;
	static int8_t x774 = INT8_MIN;
	volatile int32_t x775 = INT32_MIN;
	static int16_t x776 = -1;
	int32_t t56 = 636;

	t56 = (x773/((x774%x775)/x776));

	if (t56 != -26730) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x777 = 26849U;
	uint8_t x778 = UINT8_MAX;
	int32_t x779 = 10042;
	volatile uint64_t t57 = 253180040306338191LLU;

	t57 = (x777/((x778%x779)/x780));

	if (t57 != 315LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x793 = -1;
	int16_t x794 = INT16_MIN;
	int32_t x795 = 109311500;
	int8_t x796 = -1;
	int32_t t58 = 1;

	t58 = (x793/((x794%x795)/x796));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x797 = 31U;
	uint32_t x798 = UINT32_MAX;
	volatile int64_t x799 = INT64_MIN;
	volatile int8_t x800 = INT8_MIN;
	int64_t t59 = 225866LL;

	t59 = (x797/((x798%x799)/x800));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x813 = -1;
	volatile int32_t x814 = -964754671;
	int8_t x815 = INT8_MAX;
	static uint32_t x816 = 407565989U;
	uint32_t t60 = 8046U;

	t60 = (x813/((x814%x815)/x816));

	if (t60 != 429496729U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x829 = INT32_MIN;
	int8_t x830 = INT8_MIN;
	volatile int64_t x831 = INT64_MIN;
	static volatile int64_t t61 = 3LL;

	t61 = (x829/((x830%x831)/x832));

	if (t61 != -16777216LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x833 = -1;
	int64_t x834 = INT64_MIN;
	static uint8_t x835 = UINT8_MAX;
	static uint64_t x836 = 48944739LLU;

	t62 = (x833/((x834%x835)/x836));

	if (t62 != 48944739LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x841 = 4U;
	int32_t x842 = INT32_MIN;
	static volatile uint64_t x843 = UINT64_MAX;
	int16_t x844 = 160;
	uint64_t t63 = 30LLU;

	t63 = (x841/((x842%x843)/x844));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x857 = 14849695LL;
	uint16_t x858 = 21233U;
	int16_t x859 = -510;
	int8_t x860 = INT8_MIN;

	t64 = (x857/((x858%x859)/x860));

	if (t64 != -7424847LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x861 = -1LL;
	int32_t x862 = -1;
	volatile int16_t x863 = INT16_MIN;
	uint32_t x864 = 614U;
	static int64_t t65 = -80562LL;

	t65 = (x861/((x862%x863)/x864));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x869 = INT64_MIN;
	uint8_t x870 = UINT8_MAX;
	int16_t x871 = INT16_MIN;
	static volatile int64_t t66 = -3505569331986159LL;

	t66 = (x869/((x870%x871)/x872));

	if (t66 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x881 = 63596816;
	int64_t x882 = INT64_MIN;
	int64_t x883 = -18320754023340LL;
	uint32_t x884 = 47548U;
	int64_t t67 = -8471LL;

	t67 = (x881/((x882%x883)/x884));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x893 = INT16_MAX;
	static int32_t x895 = INT32_MIN;
	static int8_t x896 = -1;
	int32_t t68 = -92;

	t68 = (x893/((x894%x895)/x896));

	if (t68 != -7) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x897 = UINT32_MAX;
	volatile int32_t x899 = INT32_MIN;
	int64_t x900 = -1LL;
	volatile int64_t t69 = -33328959LL;

	t69 = (x897/((x898%x899)/x900));

	if (t69 != 33554431LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x913 = -1LL;
	int32_t x914 = INT32_MIN;
	static uint8_t x915 = UINT8_MAX;
	int16_t x916 = -1;
	static volatile int64_t t70 = -14131163501LL;

	t70 = (x913/((x914%x915)/x916));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x917 = 15U;
	int32_t x918 = INT32_MIN;
	int8_t x919 = INT8_MAX;
	volatile uint32_t x920 = 82501U;

	t71 = (x917/((x918%x919)/x920));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x949 = -90647602;
	static int32_t x950 = 3;
	volatile int64_t t72 = -532LL;

	t72 = (x949/((x950%x951)/x952));

	if (t72 != 30215867LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x973 = 0LLU;
	uint64_t x974 = 25920121695611049LLU;
	uint64_t x975 = UINT64_MAX;
	uint64_t x976 = 210LLU;
	volatile uint64_t t73 = 390LLU;

	t73 = (x973/((x974%x975)/x976));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1025 = 3;
	volatile int16_t x1027 = -1;
	int8_t x1028 = INT8_MAX;

	t74 = (x1025/((x1026%x1027)/x1028));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1037 = INT32_MIN;
	int16_t x1038 = -324;
	int64_t x1039 = INT64_MAX;
	static uint8_t x1040 = 80U;
	static int64_t t75 = 0LL;

	t75 = (x1037/((x1038%x1039)/x1040));

	if (t75 != 536870912LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1041 = -1;
	int8_t x1042 = INT8_MIN;
	int64_t x1043 = INT64_MIN;
	int8_t x1044 = -1;
	int64_t t76 = 8073LL;

	t76 = (x1041/((x1042%x1043)/x1044));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x1045 = 5846617LLU;
	int32_t x1046 = INT32_MAX;
	int16_t x1047 = INT16_MIN;
	uint64_t t77 = 573378462629151LLU;

	t77 = (x1045/((x1046%x1047)/x1048));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1069 = -1;
	static int16_t x1070 = -1;
	int16_t x1071 = INT16_MIN;
	volatile int32_t x1072 = -1;
	volatile int32_t t78 = 47;

	t78 = (x1069/((x1070%x1071)/x1072));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1101 = -1;
	uint64_t x1102 = 16108220980LLU;
	uint32_t x1103 = 24743U;
	static uint32_t x1104 = 29U;
	static volatile uint64_t t79 = 965945243LLU;

	t79 = (x1101/((x1102%x1103)/x1104));

	if (t79 != 64051194700380387LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1113 = INT64_MIN;
	volatile int32_t x1115 = -1;
	int64_t x1116 = -1LL;
	static int64_t t80 = 976632LL;

	t80 = (x1113/((x1114%x1115)/x1116));

	if (t80 != 118789157748LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x1117 = 1356LL;
	uint16_t x1119 = 32044U;
	static int16_t x1120 = -1;
	int64_t t81 = 55585597752873811LL;

	t81 = (x1117/((x1118%x1119)/x1120));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1121 = 14415122112646LL;
	uint8_t x1122 = 118U;
	int64_t x1123 = INT64_MIN;
	volatile int16_t x1124 = -93;
	static int64_t t82 = -4181212LL;

	t82 = (x1121/((x1122%x1123)/x1124));

	if (t82 != -14415122112646LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x1129 = 168986U;
	int64_t x1130 = 90891419537828385LL;
	int8_t x1132 = INT8_MAX;

	t83 = (x1129/((x1130%x1131)/x1132));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x1149 = INT16_MIN;
	static volatile int64_t x1150 = 108956583914540006LL;
	volatile int16_t x1151 = -446;
	static int8_t x1152 = INT8_MAX;
	static volatile int64_t t84 = 46953023LL;

	t84 = (x1149/((x1150%x1151)/x1152));

	if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1157 = 0U;
	int16_t x1158 = INT16_MAX;
	int64_t x1159 = 48620150468046366LL;
	int64_t t85 = 1LL;

	t85 = (x1157/((x1158%x1159)/x1160));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x1201 = 524565024;
	volatile int64_t x1202 = -3431678442574440LL;
	uint32_t x1204 = 761U;
	volatile int64_t t86 = -57217969846812LL;

	t86 = (x1201/((x1202%x1203)/x1204));

	if (t86 != -232LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1210 = UINT32_MAX;
	uint16_t x1211 = 25430U;
	int16_t x1212 = 2859;
	volatile uint32_t t87 = 7146261U;

	t87 = (x1209/((x1210%x1211)/x1212));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1217 = INT32_MIN;
	volatile uint8_t x1218 = 3U;
	uint16_t x1219 = 61U;
	uint16_t x1220 = 1U;
	static volatile int32_t t88 = -228;

	t88 = (x1217/((x1218%x1219)/x1220));

	if (t88 != -715827882) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1273 = UINT64_MAX;
	int8_t x1274 = -1;
	int16_t x1275 = 243;
	static volatile uint32_t x1276 = UINT32_MAX;
	static uint64_t t89 = UINT64_MAX;

	t89 = (x1273/((x1274%x1275)/x1276));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1277 = INT8_MAX;
	volatile int8_t x1278 = -3;
	int64_t x1280 = -1LL;
	int64_t t90 = 1830150620219LL;

	t90 = (x1277/((x1278%x1279)/x1280));

	if (t90 != 42LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x1302 = UINT64_MAX;
	int8_t x1303 = INT8_MIN;
	uint8_t x1304 = 55U;

	t91 = (x1301/((x1302%x1303)/x1304));

	if (t91 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1313 = -1LL;
	static int32_t x1314 = -455187365;
	uint32_t x1315 = 26614403U;
	int64_t x1316 = -161LL;
	static volatile int64_t t92 = 3630LL;

	t92 = (x1313/((x1314%x1315)/x1316));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x1326 = INT16_MIN;
	uint32_t x1327 = UINT32_MAX;
	int16_t x1328 = 206;
	uint32_t t93 = 35074U;

	t93 = (x1325/((x1326%x1327)/x1328));

	if (t93 != 206U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1334 = INT64_MIN;
	volatile int64_t x1335 = INT64_MAX;
	uint64_t x1336 = UINT64_MAX;
	uint64_t t94 = 1LLU;

	t94 = (x1333/((x1334%x1335)/x1336));

	if (t94 != 18446744073709545226LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1341 = -1;
	int16_t x1343 = 787;
	int16_t x1344 = 14;
	static volatile int32_t t95 = 3359340;

	t95 = (x1341/((x1342%x1343)/x1344));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1361 = 75756793535LLU;
	volatile int16_t x1363 = INT16_MIN;
	uint64_t t96 = 2781473469136142LLU;

	t96 = (x1361/((x1362%x1363)/x1364));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x1397 = 7588955U;
	int64_t x1398 = -22325270LL;
	int16_t x1399 = INT16_MAX;
	static volatile int64_t t97 = -18533080621623556LL;

	t97 = (x1397/((x1398%x1399)/x1400));

	if (t97 != 693LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1425 = -6;
	volatile int32_t x1426 = INT32_MIN;
	volatile int64_t x1427 = INT64_MAX;
	uint64_t x1428 = 8051LLU;

	t98 = (x1425/((x1426%x1427)/x1428));

	if (t98 != 8051LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x1429 = UINT8_MAX;
	int16_t x1430 = -1;
	static int16_t x1431 = -189;
	int16_t x1432 = -1;
	volatile int32_t t99 = 2;

	t99 = (x1429/((x1430%x1431)/x1432));

	if (t99 != 255) { NG(); } else { ; }
	
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

