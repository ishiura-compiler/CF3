#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
volatile int8_t x24 = INT8_MAX;
int64_t t3 = -31LL;
volatile int32_t x51 = INT32_MAX;
uint8_t x58 = 0U;
int32_t t6 = 1438;
volatile int8_t x73 = 3;
uint8_t x75 = 9U;
int64_t x99 = 0LL;
static volatile uint64_t x117 = 41679843686015924LLU;
static uint8_t x143 = 1U;
int32_t x144 = INT32_MIN;
uint64_t x145 = UINT64_MAX;
volatile uint64_t t12 = 3047377LLU;
volatile uint8_t x157 = UINT8_MAX;
int16_t x220 = -1;
uint64_t x233 = 2LLU;
static uint16_t x234 = UINT16_MAX;
volatile int32_t x238 = INT32_MIN;
uint32_t t17 = 7744U;
int64_t t18 = 68LL;
static uint16_t x259 = 698U;
uint16_t x309 = 9298U;
int64_t t21 = 37794476685870LL;
int64_t x350 = -8822LL;
static int32_t x367 = -11;
int32_t t23 = -224;
volatile int16_t x382 = -2537;
uint8_t x385 = 83U;
volatile int8_t x387 = -1;
int16_t x394 = INT16_MIN;
uint64_t x449 = 2631802LLU;
int16_t x452 = INT16_MIN;
volatile uint32_t x462 = UINT32_MAX;
uint16_t x463 = 47U;
uint32_t x465 = 5854969U;
volatile uint32_t t31 = 55U;
volatile uint32_t x482 = 52851U;
int32_t x486 = -1018;
int8_t x515 = -1;
volatile uint64_t t39 = 6206604569LLU;
int32_t x526 = INT32_MIN;
volatile int16_t x527 = INT16_MAX;
int16_t x537 = INT16_MIN;
uint32_t x538 = 566U;
int16_t x578 = INT16_MIN;
int8_t x579 = 53;
static uint16_t x643 = UINT16_MAX;
static int32_t t46 = 5;
int16_t x685 = -234;
volatile uint8_t x689 = UINT8_MAX;
volatile uint32_t x690 = 3U;
int32_t t50 = 951179;
volatile uint64_t x737 = 3138620LLU;
static uint32_t x763 = 311653U;
int32_t t56 = 22967085;
int8_t x785 = 3;
int32_t x787 = 233;
int32_t t57 = -152;
uint16_t x804 = 75U;
int64_t x808 = 1874116835455LL;
int64_t x885 = INT64_MAX;
volatile int8_t x922 = -3;
static int8_t x945 = -1;
uint16_t x947 = UINT16_MAX;
int16_t x965 = INT16_MIN;
int16_t x966 = INT16_MIN;
volatile uint32_t t69 = 13U;
int8_t x1000 = -1;
volatile int8_t x1003 = -2;
volatile uint16_t x1010 = 402U;
uint64_t x1024 = UINT64_MAX;
uint64_t x1029 = 8LLU;
static uint32_t x1031 = UINT32_MAX;
volatile int16_t x1046 = -2403;
volatile uint16_t x1055 = 51U;
static volatile int64_t x1060 = 36724385LL;
uint32_t x1085 = 107252720U;
volatile uint32_t t79 = 29509673U;
uint64_t x1110 = 45766197LLU;
uint64_t x1112 = 8639646102700516687LLU;
int16_t x1122 = INT16_MIN;
uint32_t t83 = 1U;
int32_t x1131 = 5315;
int64_t x1136 = INT64_MIN;
int64_t x1137 = 512648LL;
int64_t x1222 = INT64_MIN;
int8_t x1239 = INT8_MIN;
volatile int64_t x1240 = INT64_MIN;
uint64_t t89 = 1032982LLU;
uint64_t x1273 = UINT64_MAX;
volatile uint64_t t90 = 23522604580LLU;
volatile int16_t x1294 = INT16_MIN;
int32_t t94 = 1671364;
volatile uint32_t x1329 = UINT32_MAX;
int32_t t97 = 5155;
volatile int8_t x1362 = INT8_MIN;
int64_t x1364 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint32_t x2 = UINT32_MAX;
	static uint16_t x4 = UINT16_MAX;
	volatile uint32_t t0 = 188047297U;

	t0 = ((x1-x2)<<(x3/x4));

	if (t0 != 2147483649U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x21 = -1;
	int32_t x22 = INT32_MIN;
	int8_t x23 = 2;
	volatile int32_t t1 = INT32_MAX;

	t1 = ((x21-x22)<<(x23/x24));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x29 = 38U;
	uint16_t x30 = 0U;
	int16_t x31 = 288;
	int64_t x32 = INT64_MIN;
	volatile int32_t t2 = 1;

	t2 = ((x29-x30)<<(x31/x32));

	if (t2 != 38) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = 26;
	int64_t x34 = -1LL;
	volatile int8_t x35 = -1;
	int64_t x36 = INT64_MAX;

	t3 = ((x33-x34)<<(x35/x36));

	if (t3 != 27LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x41 = INT8_MIN;
	uint32_t x42 = UINT32_MAX;
	static uint16_t x43 = 5U;
	static int8_t x44 = 17;
	volatile uint32_t t4 = 21944768U;

	t4 = ((x41-x42)<<(x43/x44));

	if (t4 != 4294967169U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x49 = UINT64_MAX;
	uint32_t x50 = 154U;
	static int32_t x52 = INT32_MAX;
	uint64_t t5 = 13273790270784LLU;

	t5 = ((x49-x50)<<(x51/x52));

	if (t5 != 18446744073709551306LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x57 = 43U;
	int32_t x59 = -1;
	int16_t x60 = INT16_MAX;

	t6 = ((x57-x58)<<(x59/x60));

	if (t6 != 43) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x74 = 24600336828LLU;
	int64_t x76 = INT64_MIN;
	uint64_t t7 = 9860819273683LLU;

	t7 = ((x73-x74)<<(x75/x76));

	if (t7 != 18446744049109214791LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x97 = 1348;
	static int16_t x98 = -13;
	static uint64_t x100 = UINT64_MAX;
	volatile int32_t t8 = -139148;

	t8 = ((x97-x98)<<(x99/x100));

	if (t8 != 1361) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x118 = INT16_MIN;
	volatile int16_t x119 = -1;
	int64_t x120 = -1LL;
	volatile uint64_t t9 = 111687104474818559LLU;

	t9 = ((x117-x118)<<(x119/x120));

	if (t9 != 83359687372097384LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x129 = 19955616759779344LL;
	static int8_t x130 = INT8_MAX;
	int8_t x131 = -1;
	uint16_t x132 = 5732U;
	volatile int64_t t10 = -800LL;

	t10 = ((x129-x130)<<(x131/x132));

	if (t10 != 19955616759779217LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x141 = 39557895953LLU;
	volatile int64_t x142 = -224918287586791LL;
	static uint64_t t11 = 68395582710LLU;

	t11 = ((x141-x142)<<(x143/x144));

	if (t11 != 224957845482744LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x146 = -1LL;
	int8_t x147 = INT8_MIN;
	static int64_t x148 = -5LL;

	t12 = ((x145-x146)<<(x147/x148));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x149 = 5049;
	volatile int8_t x150 = INT8_MAX;
	volatile uint16_t x151 = 2U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t13 = 738586494;

	t13 = ((x149-x150)<<(x151/x152));

	if (t13 != 4922) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x158 = -1LL;
	uint32_t x159 = 0U;
	uint32_t x160 = 83924319U;
	volatile int64_t t14 = 0LL;

	t14 = ((x157-x158)<<(x159/x160));

	if (t14 != 256LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x217 = 12524U;
	static volatile int16_t x218 = 5065;
	int32_t x219 = -1;
	volatile int32_t t15 = 451498;

	t15 = ((x217-x218)<<(x219/x220));

	if (t15 != 14918) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x235 = INT32_MIN;
	int64_t x236 = 1445530086774412LL;
	uint64_t t16 = 54LLU;

	t16 = ((x233-x234)<<(x235/x236));

	if (t16 != 18446744073709486083LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x237 = UINT32_MAX;
	int8_t x239 = -1;
	static int64_t x240 = INT64_MAX;

	t17 = ((x237-x238)<<(x239/x240));

	if (t17 != 2147483647U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MIN;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -31561;

	t18 = ((x249-x250)<<(x251/x252));

	if (t18 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x257 = UINT16_MAX;
	int16_t x258 = -1;
	static int64_t x260 = INT64_MIN;
	int32_t t19 = -1;

	t19 = ((x257-x258)<<(x259/x260));

	if (t19 != 65536) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x310 = INT8_MIN;
	static int16_t x311 = INT16_MIN;
	volatile int64_t x312 = INT64_MAX;
	int32_t t20 = 84817;

	t20 = ((x309-x310)<<(x311/x312));

	if (t20 != 9426) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x337 = 50U;
	volatile int64_t x338 = -1LL;
	uint32_t x339 = 1977953U;
	int32_t x340 = 192781;

	t21 = ((x337-x338)<<(x339/x340));

	if (t21 != 52224LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x349 = UINT64_MAX;
	uint8_t x351 = 1U;
	int32_t x352 = INT32_MAX;
	uint64_t t22 = 306394867640LLU;

	t22 = ((x349-x350)<<(x351/x352));

	if (t22 != 8821LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x365 = INT32_MAX;
	static uint8_t x366 = UINT8_MAX;
	uint8_t x368 = UINT8_MAX;

	t23 = ((x365-x366)<<(x367/x368));

	if (t23 != 2147483392) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x381 = 91533U;
	int16_t x383 = 18;
	int8_t x384 = INT8_MIN;
	volatile uint32_t t24 = 234U;

	t24 = ((x381-x382)<<(x383/x384));

	if (t24 != 94070U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x386 = -20;
	volatile int32_t x388 = -445035;
	int32_t t25 = 220;

	t25 = ((x385-x386)<<(x387/x388));

	if (t25 != 103) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x389 = UINT32_MAX;
	int64_t x390 = -1LL;
	int16_t x391 = -15;
	static int8_t x392 = INT8_MAX;
	volatile int64_t t26 = 53555545164086304LL;

	t26 = ((x389-x390)<<(x391/x392));

	if (t26 != 4294967296LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x393 = 235966U;
	uint8_t x395 = 117U;
	volatile uint16_t x396 = UINT16_MAX;
	uint32_t t27 = 1U;

	t27 = ((x393-x394)<<(x395/x396));

	if (t27 != 268734U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x409 = INT64_MIN;
	int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MAX;
	volatile int64_t x412 = INT64_MIN;
	volatile int64_t t28 = 61577219666643LL;

	t28 = ((x409-x410)<<(x411/x412));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x450 = 52U;
	static volatile int16_t x451 = INT16_MAX;
	volatile uint64_t t29 = 178LLU;

	t29 = ((x449-x450)<<(x451/x452));

	if (t29 != 2631750LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x461 = INT16_MIN;
	uint8_t x464 = UINT8_MAX;
	volatile uint32_t t30 = 288U;

	t30 = ((x461-x462)<<(x463/x464));

	if (t30 != 4294934529U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x466 = 227U;
	int8_t x467 = -1;
	int8_t x468 = INT8_MAX;

	t31 = ((x465-x466)<<(x467/x468));

	if (t31 != 5854742U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x473 = 55U;
	static uint8_t x474 = 51U;
	int16_t x475 = INT16_MAX;
	int32_t x476 = 100851033;
	volatile int32_t t32 = -1;

	t32 = ((x473-x474)<<(x475/x476));

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x477 = INT32_MAX;
	static volatile int8_t x478 = 1;
	volatile int16_t x479 = 0;
	int8_t x480 = 1;
	volatile int32_t t33 = -426860;

	t33 = ((x477-x478)<<(x479/x480));

	if (t33 != 2147483646) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x481 = UINT8_MAX;
	volatile int64_t x483 = -1143LL;
	volatile int8_t x484 = INT8_MIN;
	static uint32_t t34 = 9077U;

	t34 = ((x481-x482)<<(x483/x484));

	if (t34 != 4281502720U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x485 = -1;
	int64_t x487 = -1LL;
	int32_t x488 = INT32_MIN;
	volatile int32_t t35 = 16357;

	t35 = ((x485-x486)<<(x487/x488));

	if (t35 != 1017) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x497 = INT16_MIN;
	static int16_t x498 = INT16_MIN;
	uint16_t x499 = 2U;
	uint64_t x500 = 4020737LLU;
	static int32_t t36 = 12231;

	t36 = ((x497-x498)<<(x499/x500));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x513 = UINT64_MAX;
	static int64_t x514 = INT64_MIN;
	uint16_t x516 = UINT16_MAX;
	volatile uint64_t t37 = 229LLU;

	t37 = ((x513-x514)<<(x515/x516));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x517 = UINT32_MAX;
	int8_t x518 = -1;
	int16_t x519 = INT16_MAX;
	int64_t x520 = INT64_MIN;
	uint32_t t38 = 107123U;

	t38 = ((x517-x518)<<(x519/x520));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x521 = 27;
	volatile uint64_t x522 = 5630049LLU;
	int8_t x523 = INT8_MAX;
	uint64_t x524 = UINT64_MAX;

	t39 = ((x521-x522)<<(x523/x524));

	if (t39 != 18446744073703921594LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x525 = INT32_MIN;
	int64_t x528 = INT64_MIN;
	static volatile int32_t t40 = -15019;

	t40 = ((x525-x526)<<(x527/x528));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x539 = INT8_MIN;
	static int16_t x540 = INT16_MIN;
	volatile uint32_t t41 = 1428U;

	t41 = ((x537-x538)<<(x539/x540));

	if (t41 != 4294933962U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x549 = 11;
	uint32_t x550 = UINT32_MAX;
	uint64_t x551 = UINT64_MAX;
	int8_t x552 = INT8_MIN;
	uint32_t t42 = 8128676U;

	t42 = ((x549-x550)<<(x551/x552));

	if (t42 != 24U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x577 = INT8_MIN;
	int8_t x580 = INT8_MIN;
	int32_t t43 = 2;

	t43 = ((x577-x578)<<(x579/x580));

	if (t43 != 32640) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x589 = INT16_MIN;
	static volatile int16_t x590 = INT16_MIN;
	uint32_t x591 = 1U;
	volatile int32_t x592 = INT32_MIN;
	int32_t t44 = 46526738;

	t44 = ((x589-x590)<<(x591/x592));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x641 = 1932061810LLU;
	static int64_t x642 = INT64_MAX;
	int32_t x644 = INT32_MIN;
	volatile uint64_t t45 = 109762LLU;

	t45 = ((x641-x642)<<(x643/x644));

	if (t45 != 9223372038786837619LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x669 = 7;
	volatile int16_t x670 = 1;
	volatile int8_t x671 = INT8_MAX;
	static uint32_t x672 = UINT32_MAX;

	t46 = ((x669-x670)<<(x671/x672));

	if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x686 = 528210U;
	uint32_t x687 = 18111U;
	int32_t x688 = -1;
	static volatile uint32_t t47 = 16316U;

	t47 = ((x685-x686)<<(x687/x688));

	if (t47 != 4294438852U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x691 = INT8_MIN;
	uint64_t x692 = UINT64_MAX;
	uint32_t t48 = 445343U;

	t48 = ((x689-x690)<<(x691/x692));

	if (t48 != 252U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x709 = -1;
	int64_t x710 = -128602695LL;
	volatile int64_t x711 = -1LL;
	uint64_t x712 = UINT64_MAX;
	int64_t t49 = -2326172558647995381LL;

	t49 = ((x709-x710)<<(x711/x712));

	if (t49 != 257205388LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x717 = UINT8_MAX;
	int8_t x718 = -1;
	static int16_t x719 = 5549;
	volatile int16_t x720 = INT16_MIN;

	t50 = ((x717-x718)<<(x719/x720));

	if (t50 != 256) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x725 = 3152547LLU;
	static uint16_t x726 = 0U;
	uint64_t x727 = 78076834LLU;
	uint64_t x728 = 331359651LLU;
	uint64_t t51 = 15121378889838LLU;

	t51 = ((x725-x726)<<(x727/x728));

	if (t51 != 3152547LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x729 = -1;
	static int8_t x730 = -2;
	uint16_t x731 = 1U;
	uint32_t x732 = 542U;
	int32_t t52 = 5;

	t52 = ((x729-x730)<<(x731/x732));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x733 = -1;
	int64_t x734 = -589LL;
	static int8_t x735 = INT8_MIN;
	static volatile int64_t x736 = -1801279407213782LL;
	int64_t t53 = -14917LL;

	t53 = ((x733-x734)<<(x735/x736));

	if (t53 != 588LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x738 = 1;
	uint16_t x739 = UINT16_MAX;
	static int64_t x740 = INT64_MAX;
	uint64_t t54 = 12231LLU;

	t54 = ((x737-x738)<<(x739/x740));

	if (t54 != 3138619LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x749 = 10LLU;
	int32_t x750 = INT32_MIN;
	int32_t x751 = -1;
	int8_t x752 = INT8_MIN;
	uint64_t t55 = 6722955975574LLU;

	t55 = ((x749-x750)<<(x751/x752));

	if (t55 != 2147483658LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x761 = 11U;
	int16_t x762 = INT16_MIN;
	static int32_t x764 = -1;

	t56 = ((x761-x762)<<(x763/x764));

	if (t56 != 32779) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x786 = -1;
	int32_t x788 = -48524132;

	t57 = ((x785-x786)<<(x787/x788));

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x801 = UINT8_MAX;
	volatile int8_t x802 = INT8_MIN;
	int16_t x803 = -1;
	volatile int32_t t58 = 0;

	t58 = ((x801-x802)<<(x803/x804));

	if (t58 != 383) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x805 = 0U;
	int16_t x806 = INT16_MAX;
	volatile uint32_t x807 = 7148990U;
	uint32_t t59 = 255U;

	t59 = ((x805-x806)<<(x807/x808));

	if (t59 != 4294934529U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x837 = UINT8_MAX;
	volatile int16_t x838 = INT16_MIN;
	static uint8_t x839 = 43U;
	static int32_t x840 = -71;
	volatile int32_t t60 = -37278;

	t60 = ((x837-x838)<<(x839/x840));

	if (t60 != 33023) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x841 = 21LLU;
	int16_t x842 = -1;
	uint8_t x843 = 6U;
	int8_t x844 = INT8_MIN;
	uint64_t t61 = 87398985LLU;

	t61 = ((x841-x842)<<(x843/x844));

	if (t61 != 22LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x845 = 5738530262LL;
	int32_t x846 = INT32_MIN;
	static uint8_t x847 = 12U;
	int16_t x848 = -21;
	int64_t t62 = -63714917086784LL;

	t62 = ((x845-x846)<<(x847/x848));

	if (t62 != 7886013910LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x877 = 14005LLU;
	int8_t x878 = INT8_MAX;
	int16_t x879 = INT16_MIN;
	int64_t x880 = INT64_MAX;
	uint64_t t63 = 2312950332LLU;

	t63 = ((x877-x878)<<(x879/x880));

	if (t63 != 13878LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x886 = 4U;
	static int64_t x887 = -1LL;
	uint8_t x888 = 64U;
	int64_t t64 = 12495883532464359LL;

	t64 = ((x885-x886)<<(x887/x888));

	if (t64 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x921 = INT8_MAX;
	static int8_t x923 = 1;
	int32_t x924 = -85;
	volatile int32_t t65 = -457958760;

	t65 = ((x921-x922)<<(x923/x924));

	if (t65 != 130) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x925 = 920501U;
	volatile uint64_t x926 = UINT64_MAX;
	uint8_t x927 = 7U;
	uint8_t x928 = 19U;
	volatile uint64_t t66 = 2547177145LLU;

	t66 = ((x925-x926)<<(x927/x928));

	if (t66 != 920502LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x946 = -7;
	volatile int64_t x948 = INT64_MIN;
	int32_t t67 = 56;

	t67 = ((x945-x946)<<(x947/x948));

	if (t67 != 6) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x967 = INT8_MIN;
	static int16_t x968 = INT16_MIN;
	volatile int32_t t68 = -17065702;

	t68 = ((x965-x966)<<(x967/x968));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x985 = 1717U;
	volatile uint8_t x986 = 64U;
	volatile int16_t x987 = -1;
	int8_t x988 = INT8_MIN;

	t69 = ((x985-x986)<<(x987/x988));

	if (t69 != 1653U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x997 = 269U;
	static int32_t x998 = 7;
	static volatile uint32_t x999 = 120330U;
	int32_t t70 = -66791738;

	t70 = ((x997-x998)<<(x999/x1000));

	if (t70 != 262) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x1001 = UINT8_MAX;
	uint64_t x1002 = UINT64_MAX;
	int32_t x1004 = INT32_MIN;
	volatile uint64_t t71 = 1070381449203013LLU;

	t71 = ((x1001-x1002)<<(x1003/x1004));

	if (t71 != 256LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1005 = UINT16_MAX;
	int32_t x1006 = -1;
	int8_t x1007 = -1;
	static int64_t x1008 = -1LL;
	volatile int32_t t72 = -1;

	t72 = ((x1005-x1006)<<(x1007/x1008));

	if (t72 != 131072) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x1009 = INT64_MAX;
	static uint16_t x1011 = UINT16_MAX;
	int32_t x1012 = INT32_MAX;
	int64_t t73 = -495348099144LL;

	t73 = ((x1009-x1010)<<(x1011/x1012));

	if (t73 != 9223372036854775405LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x1021 = 8672894U;
	volatile uint32_t x1022 = UINT32_MAX;
	uint32_t x1023 = 112U;
	volatile uint32_t t74 = 1739654U;

	t74 = ((x1021-x1022)<<(x1023/x1024));

	if (t74 != 8672895U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1030 = 54470413U;
	int8_t x1032 = -1;
	volatile uint64_t t75 = 227876LLU;

	t75 = ((x1029-x1030)<<(x1031/x1032));

	if (t75 != 18446744073600610806LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x1045 = -1;
	int16_t x1047 = -26;
	static int16_t x1048 = INT16_MIN;
	int32_t t76 = -51;

	t76 = ((x1045-x1046)<<(x1047/x1048));

	if (t76 != 2402) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1053 = 1;
	int64_t x1054 = -1LL;
	int8_t x1056 = INT8_MIN;
	int64_t t77 = 0LL;

	t77 = ((x1053-x1054)<<(x1055/x1056));

	if (t77 != 2LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x1057 = 59953U;
	uint64_t x1058 = 14LLU;
	static int32_t x1059 = -1;
	uint64_t t78 = 172LLU;

	t78 = ((x1057-x1058)<<(x1059/x1060));

	if (t78 != 59939LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1086 = 8383U;
	uint16_t x1087 = 9U;
	int64_t x1088 = 20061253489346LL;

	t79 = ((x1085-x1086)<<(x1087/x1088));

	if (t79 != 107244337U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x1101 = -12371;
	int64_t x1102 = -243143012190LL;
	uint16_t x1103 = 8869U;
	uint64_t x1104 = UINT64_MAX;
	volatile int64_t t80 = -79780LL;

	t80 = ((x1101-x1102)<<(x1103/x1104));

	if (t80 != 243142999819LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x1105 = 106109881258024LL;
	int8_t x1106 = INT8_MIN;
	volatile uint16_t x1107 = 13U;
	volatile int64_t x1108 = -21109324LL;
	volatile int64_t t81 = -347250153245LL;

	t81 = ((x1105-x1106)<<(x1107/x1108));

	if (t81 != 106109881258152LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1109 = -1LL;
	int16_t x1111 = -4;
	uint64_t t82 = 1342338300962590LLU;

	t82 = ((x1109-x1110)<<(x1111/x1112));

	if (t82 != 18446744073526486824LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x1121 = UINT32_MAX;
	int64_t x1123 = -1LL;
	static int64_t x1124 = INT64_MAX;

	t83 = ((x1121-x1122)<<(x1123/x1124));

	if (t83 != 32767U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x1129 = 12199;
	int8_t x1130 = INT8_MAX;
	uint16_t x1132 = UINT16_MAX;
	static int32_t t84 = -34119;

	t84 = ((x1129-x1130)<<(x1131/x1132));

	if (t84 != 12072) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1133 = UINT32_MAX;
	static int16_t x1134 = INT16_MIN;
	int8_t x1135 = -6;
	volatile uint32_t t85 = 1U;

	t85 = ((x1133-x1134)<<(x1135/x1136));

	if (t85 != 32767U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1138 = INT16_MIN;
	int32_t x1139 = INT32_MAX;
	int32_t x1140 = INT32_MAX;
	int64_t t86 = 1LL;

	t86 = ((x1137-x1138)<<(x1139/x1140));

	if (t86 != 1090832LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x1169 = INT8_MAX;
	int32_t x1170 = -1;
	volatile int16_t x1171 = -14;
	volatile int8_t x1172 = INT8_MIN;
	int32_t t87 = 492;

	t87 = ((x1169-x1170)<<(x1171/x1172));

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x1221 = INT16_MIN;
	int32_t x1223 = 1190095;
	int32_t x1224 = INT32_MIN;
	volatile int64_t t88 = -5094284946953408LL;

	t88 = ((x1221-x1222)<<(x1223/x1224));

	if (t88 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1237 = UINT64_MAX;
	static uint8_t x1238 = 7U;

	t89 = ((x1237-x1238)<<(x1239/x1240));

	if (t89 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1274 = 2;
	uint8_t x1275 = 13U;
	uint8_t x1276 = 15U;

	t90 = ((x1273-x1274)<<(x1275/x1276));

	if (t90 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x1289 = UINT64_MAX;
	volatile int16_t x1290 = -3;
	static volatile int8_t x1291 = 0;
	int32_t x1292 = INT32_MIN;
	volatile uint64_t t91 = 248679855LLU;

	t91 = ((x1289-x1290)<<(x1291/x1292));

	if (t91 != 2LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1293 = -43;
	int32_t x1295 = -1;
	volatile int32_t x1296 = -1;
	int32_t t92 = -1406;

	t92 = ((x1293-x1294)<<(x1295/x1296));

	if (t92 != 65450) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x1309 = 10686;
	static volatile uint64_t x1310 = 98226891545LLU;
	int8_t x1311 = INT8_MAX;
	int32_t x1312 = INT32_MIN;
	uint64_t t93 = 115256333LLU;

	t93 = ((x1309-x1310)<<(x1311/x1312));

	if (t93 != 18446743975482670757LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1321 = INT8_MIN;
	volatile int32_t x1322 = -97234475;
	int8_t x1323 = INT8_MIN;
	volatile int64_t x1324 = INT64_MIN;

	t94 = ((x1321-x1322)<<(x1323/x1324));

	if (t94 != 97234347) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1330 = -2;
	static volatile int64_t x1331 = -12LL;
	static int8_t x1332 = INT8_MIN;
	uint32_t t95 = 73819110U;

	t95 = ((x1329-x1330)<<(x1331/x1332));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1349 = -1;
	uint32_t x1350 = UINT32_MAX;
	uint64_t x1351 = 6660001861535639LLU;
	int16_t x1352 = -1;
	volatile uint32_t t96 = 86788611U;

	t96 = ((x1349-x1350)<<(x1351/x1352));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1357 = INT16_MIN;
	int32_t x1358 = INT32_MIN;
	int8_t x1359 = INT8_MAX;
	uint16_t x1360 = UINT16_MAX;

	t97 = ((x1357-x1358)<<(x1359/x1360));

	if (t97 != 2147450880) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1361 = 527884074953LLU;
	static uint8_t x1363 = UINT8_MAX;
	volatile uint64_t t98 = 706LLU;

	t98 = ((x1361-x1362)<<(x1363/x1364));

	if (t98 != 527884075081LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x1385 = 1674LLU;
	volatile int8_t x1386 = -1;
	volatile uint32_t x1387 = 1989U;
	static int32_t x1388 = INT32_MIN;
	static uint64_t t99 = 926399582691LLU;

	t99 = ((x1385-x1386)<<(x1387/x1388));

	if (t99 != 1675LLU) { NG(); } else { ; }
	
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

