#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = 3225;
uint8_t x10 = UINT8_MAX;
volatile int32_t x27 = INT32_MAX;
volatile uint8_t x30 = 2U;
uint8_t x69 = UINT8_MAX;
int8_t x72 = INT8_MAX;
uint16_t x110 = 14U;
static int8_t x118 = 54;
uint16_t x149 = UINT16_MAX;
volatile uint16_t x156 = 6U;
int32_t x190 = -1;
int8_t x208 = INT8_MAX;
int64_t x214 = -61916LL;
uint64_t x229 = 2062594360LLU;
volatile int8_t x232 = -1;
uint8_t x258 = 2U;
int8_t x260 = -28;
uint32_t t21 = 315U;
int64_t x263 = INT64_MAX;
int8_t x281 = 1;
volatile int32_t x330 = INT32_MIN;
volatile int64_t t26 = -1995879775LL;
static int32_t x362 = -86339;
volatile int8_t x363 = INT8_MIN;
int32_t x400 = 0;
uint64_t t29 = 5LLU;
uint64_t x485 = 4049873LLU;
int8_t x502 = INT8_MIN;
int32_t x504 = -1;
static uint16_t x514 = 3966U;
volatile int64_t x533 = INT64_MAX;
int8_t x552 = INT8_MIN;
int32_t t37 = -2821;
int64_t x583 = -1LL;
volatile uint16_t x634 = 16U;
int32_t t44 = 380078248;
int32_t t45 = 160965;
int8_t x712 = -1;
int16_t x722 = 390;
uint64_t x761 = 0LLU;
uint64_t t48 = 433112836LLU;
int16_t x768 = INT16_MAX;
int16_t x841 = 0;
uint8_t x842 = 18U;
volatile int32_t t53 = 852046;
int16_t x910 = INT16_MAX;
uint64_t x934 = UINT64_MAX;
int64_t x959 = INT64_MIN;
volatile uint32_t x997 = UINT32_MAX;
volatile uint32_t t62 = UINT32_MAX;
static uint8_t x1049 = 5U;
static int32_t x1051 = -1;
volatile int8_t x1052 = -1;
int32_t t64 = 79;
int8_t x1089 = INT8_MAX;
int64_t x1090 = -117968452300657707LL;
int32_t x1114 = INT32_MAX;
uint16_t x1128 = 3U;
uint8_t x1173 = 5U;
volatile int8_t x1267 = INT8_MIN;
uint8_t x1269 = 5U;
uint16_t x1274 = 15U;
int16_t x1374 = INT16_MAX;
int32_t x1414 = INT32_MIN;
int32_t x1424 = INT32_MIN;
volatile int32_t t83 = -1365443;
uint16_t x1522 = UINT16_MAX;
uint64_t x1557 = UINT64_MAX;
volatile uint8_t x1561 = UINT8_MAX;
volatile int16_t x1566 = INT16_MIN;
int64_t x1628 = INT64_MAX;
static int32_t t93 = 6305;
volatile uint64_t t94 = UINT64_MAX;
int16_t x1683 = INT16_MAX;
volatile int32_t x1705 = 55024;
int16_t x1722 = INT16_MAX;


void f0(void) {
	int16_t x11 = -9;
	int16_t x12 = INT16_MAX;
	volatile int32_t t0 = 14;

	t0 = (x9<<(x10%(x11|x12)));

	if (t0 != 3225) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x17 = UINT64_MAX;
	int32_t x18 = 162;
	int32_t x19 = -1;
	int8_t x20 = -2;
	uint64_t t1 = UINT64_MAX;

	t1 = (x17<<(x18%(x19|x20)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x25 = 0LL;
	int32_t x26 = INT32_MIN;
	static int32_t x28 = INT32_MIN;
	int64_t t2 = -15476782847795882LL;

	t2 = (x25<<(x26%(x27|x28)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x29 = 15;
	volatile int16_t x31 = -1;
	int8_t x32 = INT8_MAX;
	int32_t t3 = -353957;

	t3 = (x29<<(x30%(x31|x32)));

	if (t3 != 15) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x49 = UINT64_MAX;
	uint16_t x50 = 1U;
	static uint64_t x51 = UINT64_MAX;
	int64_t x52 = -655LL;
	volatile uint64_t t4 = 506450057544LLU;

	t4 = (x49<<(x50%(x51|x52)));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x70 = INT8_MAX;
	int64_t x71 = -1LL;
	int32_t t5 = 249018528;

	t5 = (x69<<(x70%(x71|x72)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x73 = 20U;
	static uint16_t x74 = 10U;
	uint64_t x75 = 18441507144381404LLU;
	int64_t x76 = INT64_MIN;
	volatile int32_t t6 = -82869;

	t6 = (x73<<(x74%(x75|x76)));

	if (t6 != 20480) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x77 = INT64_MAX;
	int8_t x78 = -1;
	int32_t x79 = 1254;
	int16_t x80 = -1;
	static volatile int64_t t7 = INT64_MAX;

	t7 = (x77<<(x78%(x79|x80)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x86 = 21;
	int64_t x87 = INT64_MAX;
	volatile int32_t x88 = 1;
	uint32_t t8 = 2U;

	t8 = (x85<<(x86%(x87|x88)));

	if (t8 != 4292870144U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x101 = 139058315LL;
	int8_t x102 = -2;
	int64_t x103 = INT64_MAX;
	int64_t x104 = INT64_MIN;
	volatile int64_t t9 = 3240375685LL;

	t9 = (x101<<(x102%(x103|x104)));

	if (t9 != 139058315LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x109 = 1U;
	int16_t x111 = -1;
	uint32_t x112 = UINT32_MAX;
	int32_t t10 = 255;

	t10 = (x109<<(x110%(x111|x112)));

	if (t10 != 16384) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x117 = UINT64_MAX;
	static int64_t x119 = INT64_MIN;
	int64_t x120 = -222523LL;
	static uint64_t t11 = 365629LLU;

	t11 = (x117<<(x118%(x119|x120)));

	if (t11 != 18428729675200069632LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	static int16_t x152 = INT16_MIN;
	static volatile int32_t t12 = -52;

	t12 = (x149<<(x150%(x151|x152)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x153 = 0;
	int16_t x154 = INT16_MAX;
	int8_t x155 = -3;
	int32_t t13 = 308;

	t13 = (x153<<(x154%(x155|x156)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x161 = 724633496;
	static uint8_t x162 = 0U;
	volatile int32_t x163 = 4790;
	int64_t x164 = INT64_MIN;
	int32_t t14 = -6;

	t14 = (x161<<(x162%(x163|x164)));

	if (t14 != 724633496) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x189 = 0;
	int16_t x191 = INT16_MIN;
	volatile int8_t x192 = -1;
	int32_t t15 = -823105963;

	t15 = (x189<<(x190%(x191|x192)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x205 = INT16_MAX;
	int64_t x206 = -1LL;
	uint64_t x207 = UINT64_MAX;
	static volatile int32_t t16 = -500100;

	t16 = (x205<<(x206%(x207|x208)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x213 = 699340U;
	int16_t x215 = -1;
	int64_t x216 = -61LL;
	uint32_t t17 = 274U;

	t17 = (x213<<(x214%(x215|x216)));

	if (t17 != 699340U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x230 = 3U;
	uint32_t x231 = UINT32_MAX;
	volatile uint64_t t18 = 8748LLU;

	t18 = (x229<<(x230%(x231|x232)));

	if (t18 != 16500754880LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x233 = 3U;
	int16_t x234 = 5;
	static int32_t x235 = -1;
	int8_t x236 = 4;
	int32_t t19 = 41089;

	t19 = (x233<<(x234%(x235|x236)));

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x237 = 57508099341LL;
	volatile int16_t x238 = INT16_MIN;
	uint8_t x239 = 39U;
	int16_t x240 = -1;
	volatile int64_t t20 = 357614668858885862LL;

	t20 = (x237<<(x238%(x239|x240)));

	if (t20 != 57508099341LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x257 = 0U;
	int8_t x259 = 3;

	t21 = (x257<<(x258%(x259|x260)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x261 = 420U;
	int16_t x262 = -1;
	int64_t x264 = INT64_MIN;
	static volatile int32_t t22 = 67513093;

	t22 = (x261<<(x262%(x263|x264)));

	if (t22 != 420) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x282 = UINT32_MAX;
	volatile int32_t x283 = -1;
	uint16_t x284 = 4U;
	int32_t t23 = 3508;

	t23 = (x281<<(x282%(x283|x284)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x293 = 43547494U;
	uint8_t x294 = 1U;
	volatile int8_t x295 = -11;
	static int64_t x296 = -1LL;
	volatile uint32_t t24 = 3U;

	t24 = (x293<<(x294%(x295|x296)));

	if (t24 != 43547494U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x309 = 2;
	uint16_t x310 = 16055U;
	int16_t x311 = INT16_MIN;
	int8_t x312 = -1;
	static int32_t t25 = 443854768;

	t25 = (x309<<(x310%(x311|x312)));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x329 = 306443391385530511LL;
	int8_t x331 = -5;
	uint8_t x332 = UINT8_MAX;

	t26 = (x329<<(x330%(x331|x332)));

	if (t26 != 306443391385530511LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x361 = INT64_MAX;
	int32_t x364 = INT32_MAX;
	int64_t t27 = INT64_MAX;

	t27 = (x361<<(x362%(x363|x364)));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x393 = UINT64_MAX;
	static int16_t x394 = INT16_MIN;
	static int8_t x395 = -1;
	int8_t x396 = INT8_MIN;
	uint64_t t28 = UINT64_MAX;

	t28 = (x393<<(x394%(x395|x396)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int64_t x398 = 18LL;
	int8_t x399 = INT8_MIN;

	t29 = (x397<<(x398%(x399|x400)));

	if (t29 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x429 = 2760101841445006LLU;
	static int8_t x430 = -7;
	static int32_t x431 = INT32_MAX;
	int32_t x432 = INT32_MIN;
	volatile uint64_t t30 = 722104868LLU;

	t30 = (x429<<(x430%(x431|x432)));

	if (t30 != 2760101841445006LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x486 = -20466604435203461LL;
	int16_t x487 = -13;
	static int64_t x488 = -1LL;
	uint64_t t31 = 179532328846704953LLU;

	t31 = (x485<<(x486%(x487|x488)));

	if (t31 != 4049873LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x489 = 6462933;
	uint32_t x490 = UINT32_MAX;
	int32_t x491 = INT32_MAX;
	int8_t x492 = -1;
	int32_t t32 = 1038188;

	t32 = (x489<<(x490%(x491|x492)));

	if (t32 != 6462933) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x501 = 2U;
	int16_t x503 = -1;
	int32_t t33 = -22;

	t33 = (x501<<(x502%(x503|x504)));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x513 = 24915414594LL;
	volatile int64_t x515 = INT64_MAX;
	int64_t x516 = -1LL;
	volatile int64_t t34 = 275112LL;

	t34 = (x513<<(x514%(x515|x516)));

	if (t34 != 24915414594LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x534 = 0U;
	int64_t x535 = INT64_MAX;
	uint64_t x536 = UINT64_MAX;
	int64_t t35 = INT64_MAX;

	t35 = (x533<<(x534%(x535|x536)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x541 = UINT16_MAX;
	int8_t x542 = 4;
	static int64_t x543 = 0LL;
	static uint8_t x544 = 7U;
	int32_t t36 = -8684032;

	t36 = (x541<<(x542%(x543|x544)));

	if (t36 != 1048560) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x549 = 181U;
	volatile int64_t x550 = 594148437439409675LL;
	int8_t x551 = INT8_MIN;

	t37 = (x549<<(x550%(x551|x552)));

	if (t37 != 370688) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x569 = 30U;
	int8_t x570 = -1;
	static int32_t x571 = INT32_MIN;
	volatile int32_t x572 = INT32_MAX;
	int32_t t38 = -280518;

	t38 = (x569<<(x570%(x571|x572)));

	if (t38 != 30) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x581 = INT16_MAX;
	volatile int64_t x582 = 9937088708LL;
	static volatile int16_t x584 = INT16_MAX;
	volatile int32_t t39 = -13;

	t39 = (x581<<(x582%(x583|x584)));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x633 = 5858;
	int32_t x635 = INT32_MIN;
	int8_t x636 = INT8_MIN;
	volatile int32_t t40 = 10738;

	t40 = (x633<<(x634%(x635|x636)));

	if (t40 != 383909888) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x653 = 1U;
	int32_t x654 = INT32_MAX;
	uint8_t x655 = 1U;
	static int16_t x656 = INT16_MIN;
	volatile int32_t t41 = -2696;

	t41 = (x653<<(x654%(x655|x656)));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x657 = INT8_MAX;
	volatile int64_t x658 = 44LL;
	int32_t x659 = -1;
	int32_t x660 = -1;
	volatile int32_t t42 = -29;

	t42 = (x657<<(x658%(x659|x660)));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x681 = UINT16_MAX;
	int16_t x682 = -276;
	volatile int32_t x683 = INT32_MAX;
	int32_t x684 = INT32_MIN;
	int32_t t43 = -128512324;

	t43 = (x681<<(x682%(x683|x684)));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x697 = 13;
	static volatile uint64_t x698 = UINT64_MAX;
	uint8_t x699 = 0U;
	int32_t x700 = INT32_MAX;

	t44 = (x697<<(x698%(x699|x700)));

	if (t44 != 104) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x701 = INT16_MAX;
	static int64_t x702 = -1LL;
	int64_t x703 = -1LL;
	int32_t x704 = INT32_MAX;

	t45 = (x701<<(x702%(x703|x704)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x709 = 22U;
	uint8_t x710 = 3U;
	static uint16_t x711 = 12127U;
	int32_t t46 = -1111523;

	t46 = (x709<<(x710%(x711|x712)));

	if (t46 != 22) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x721 = 45242U;
	int8_t x723 = -1;
	int64_t x724 = -6851LL;
	uint32_t t47 = 1461978537U;

	t47 = (x721<<(x722%(x723|x724)));

	if (t47 != 45242U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x762 = 23;
	uint16_t x763 = UINT16_MAX;
	int8_t x764 = 27;

	t48 = (x761<<(x762%(x763|x764)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x765 = 904854356U;
	int64_t x766 = INT64_MIN;
	static int16_t x767 = -1;
	static volatile uint32_t t49 = 55516784U;

	t49 = (x765<<(x766%(x767|x768)));

	if (t49 != 904854356U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x777 = 85U;
	int32_t x778 = -1;
	int64_t x779 = -1LL;
	uint8_t x780 = UINT8_MAX;
	static int32_t t50 = 911897003;

	t50 = (x777<<(x778%(x779|x780)));

	if (t50 != 85) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x785 = INT8_MAX;
	int64_t x786 = INT64_MIN;
	int16_t x787 = -1;
	static int8_t x788 = INT8_MIN;
	int32_t t51 = 672;

	t51 = (x785<<(x786%(x787|x788)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x843 = 8072821U;
	volatile uint64_t x844 = 73LLU;
	static int32_t t52 = -403;

	t52 = (x841<<(x842%(x843|x844)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x845 = 1639U;
	static uint32_t x846 = 4310U;
	int16_t x847 = -1;
	int64_t x848 = INT64_MAX;

	t53 = (x845<<(x846%(x847|x848)));

	if (t53 != 1639) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x885 = UINT64_MAX;
	int16_t x886 = -2834;
	int32_t x887 = -1;
	static volatile uint16_t x888 = UINT16_MAX;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (x885<<(x886%(x887|x888)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x901 = 123LL;
	int16_t x902 = INT16_MIN;
	int32_t x903 = -1;
	int32_t x904 = INT32_MAX;
	volatile int64_t t55 = 1175326419389LL;

	t55 = (x901<<(x902%(x903|x904)));

	if (t55 != 123LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x909 = 0U;
	int16_t x911 = INT16_MIN;
	static int16_t x912 = -1;
	int32_t t56 = 92;

	t56 = (x909<<(x910%(x911|x912)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x933 = 1489;
	int8_t x935 = -4;
	int16_t x936 = INT16_MIN;
	volatile int32_t t57 = -124;

	t57 = (x933<<(x934%(x935|x936)));

	if (t57 != 11912) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x957 = UINT64_MAX;
	int16_t x958 = 5;
	int64_t x960 = 1LL;
	static volatile uint64_t t58 = 3545288007LLU;

	t58 = (x957<<(x958%(x959|x960)));

	if (t58 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x961 = INT64_MAX;
	volatile int8_t x962 = INT8_MIN;
	static int64_t x963 = INT64_MAX;
	int64_t x964 = INT64_MIN;
	static volatile int64_t t59 = INT64_MAX;

	t59 = (x961<<(x962%(x963|x964)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x969 = 1U;
	static uint8_t x970 = 6U;
	int32_t x971 = INT32_MIN;
	int8_t x972 = -19;
	static int32_t t60 = -314043;

	t60 = (x969<<(x970%(x971|x972)));

	if (t60 != 64) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x985 = 20465027987101LLU;
	static int16_t x986 = 1;
	uint64_t x987 = UINT64_MAX;
	volatile int64_t x988 = -5984328LL;
	static volatile uint64_t t61 = 1336581650199427LLU;

	t61 = (x985<<(x986%(x987|x988)));

	if (t61 != 40930055974202LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x998 = 0;
	uint32_t x999 = 3139U;
	int64_t x1000 = INT64_MIN;

	t62 = (x997<<(x998%(x999|x1000)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x1021 = 36844760775165162LLU;
	uint64_t x1022 = UINT64_MAX;
	int64_t x1023 = -1LL;
	volatile int64_t x1024 = INT64_MIN;
	volatile uint64_t t63 = 0LLU;

	t63 = (x1021<<(x1022%(x1023|x1024)));

	if (t63 != 36844760775165162LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1050 = 210U;

	t64 = (x1049<<(x1050%(x1051|x1052)));

	if (t64 != 5) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1061 = 42U;
	volatile int8_t x1062 = 0;
	uint64_t x1063 = 29540582369469LLU;
	static int32_t x1064 = -1;
	static volatile int32_t t65 = 0;

	t65 = (x1061<<(x1062%(x1063|x1064)));

	if (t65 != 42) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1069 = 116LLU;
	int64_t x1070 = INT64_MIN;
	int32_t x1071 = INT32_MIN;
	static int32_t x1072 = INT32_MAX;
	volatile uint64_t t66 = 12546784304LLU;

	t66 = (x1069<<(x1070%(x1071|x1072)));

	if (t66 != 116LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1091 = 28LL;
	int8_t x1092 = -1;
	int32_t t67 = -3150;

	t67 = (x1089<<(x1090%(x1091|x1092)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1113 = 0U;
	static int8_t x1115 = -1;
	int64_t x1116 = INT64_MAX;
	volatile int32_t t68 = -1;

	t68 = (x1113<<(x1114%(x1115|x1116)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1125 = 1902U;
	uint64_t x1126 = 2513135047217689681LLU;
	uint32_t x1127 = 0U;
	volatile uint32_t t69 = 35U;

	t69 = (x1125<<(x1126%(x1127|x1128)));

	if (t69 != 3804U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x1165 = 6U;
	volatile int16_t x1166 = -3877;
	static volatile int16_t x1167 = -1;
	int16_t x1168 = -578;
	volatile int32_t t70 = -3186688;

	t70 = (x1165<<(x1166%(x1167|x1168)));

	if (t70 != 6) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1174 = UINT8_MAX;
	volatile int8_t x1175 = -1;
	int32_t x1176 = INT32_MAX;
	int32_t t71 = -2779744;

	t71 = (x1173<<(x1174%(x1175|x1176)));

	if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1229 = INT16_MAX;
	volatile int32_t x1230 = 169321;
	int16_t x1231 = -1;
	volatile int8_t x1232 = INT8_MIN;
	volatile int32_t t72 = -475268;

	t72 = (x1229<<(x1230%(x1231|x1232)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1245 = 88099LLU;
	uint16_t x1246 = 29528U;
	uint16_t x1247 = UINT16_MAX;
	volatile int8_t x1248 = -1;
	uint64_t t73 = 9151408001881LLU;

	t73 = (x1245<<(x1246%(x1247|x1248)));

	if (t73 != 88099LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1265 = 1;
	int16_t x1266 = INT16_MIN;
	static uint8_t x1268 = UINT8_MAX;
	int32_t t74 = -227312;

	t74 = (x1265<<(x1266%(x1267|x1268)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1270 = UINT16_MAX;
	int64_t x1271 = -15LL;
	uint8_t x1272 = 4U;
	int32_t t75 = -202087535;

	t75 = (x1269<<(x1270%(x1271|x1272)));

	if (t75 != 1280) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1273 = 2U;
	int16_t x1275 = INT16_MIN;
	int32_t x1276 = INT32_MIN;
	volatile int32_t t76 = -1336572;

	t76 = (x1273<<(x1274%(x1275|x1276)));

	if (t76 != 65536) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1301 = INT8_MAX;
	volatile int64_t x1302 = INT64_MAX;
	static int16_t x1303 = INT16_MAX;
	static uint16_t x1304 = 13U;
	static volatile int32_t t77 = 126169632;

	t77 = (x1301<<(x1302%(x1303|x1304)));

	if (t77 != 16256) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1325 = 0U;
	uint16_t x1326 = UINT16_MAX;
	uint16_t x1327 = 1U;
	static int16_t x1328 = -1;
	int32_t t78 = -123715;

	t78 = (x1325<<(x1326%(x1327|x1328)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x1373 = 584575407U;
	static int16_t x1375 = -5;
	uint16_t x1376 = UINT16_MAX;
	uint32_t t79 = 917899U;

	t79 = (x1373<<(x1374%(x1375|x1376)));

	if (t79 != 584575407U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x1405 = 2;
	int64_t x1406 = INT64_MIN;
	uint16_t x1407 = UINT16_MAX;
	int8_t x1408 = INT8_MIN;
	int32_t t80 = -13;

	t80 = (x1405<<(x1406%(x1407|x1408)));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x1413 = 9U;
	uint32_t x1415 = 186U;
	int64_t x1416 = -1LL;
	volatile uint32_t t81 = 473789U;

	t81 = (x1413<<(x1414%(x1415|x1416)));

	if (t81 != 9U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x1421 = 1756121U;
	int32_t x1422 = -1;
	volatile int8_t x1423 = -1;
	uint32_t t82 = 1959813343U;

	t82 = (x1421<<(x1422%(x1423|x1424)));

	if (t82 != 1756121U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1473 = 47U;
	uint32_t x1474 = UINT32_MAX;
	uint8_t x1475 = 2U;
	static int8_t x1476 = INT8_MAX;

	t83 = (x1473<<(x1474%(x1475|x1476)));

	if (t83 != 1540096) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x1521 = UINT64_MAX;
	int64_t x1523 = INT64_MAX;
	int32_t x1524 = -1;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x1521<<(x1522%(x1523|x1524)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x1537 = INT64_MAX;
	uint64_t x1538 = UINT64_MAX;
	static int8_t x1539 = INT8_MIN;
	int32_t x1540 = -1;
	int64_t t85 = INT64_MAX;

	t85 = (x1537<<(x1538%(x1539|x1540)));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x1545 = 494;
	int32_t x1546 = -1;
	static int64_t x1547 = 687LL;
	int32_t x1548 = -140;
	volatile int32_t t86 = -3098;

	t86 = (x1545<<(x1546%(x1547|x1548)));

	if (t86 != 494) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1558 = 1U;
	int8_t x1559 = INT8_MIN;
	static int16_t x1560 = 25;
	uint64_t t87 = 10822LLU;

	t87 = (x1557<<(x1558%(x1559|x1560)));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x1562 = INT16_MAX;
	static volatile int8_t x1563 = INT8_MIN;
	int64_t x1564 = -1LL;
	static volatile int32_t t88 = -10224;

	t88 = (x1561<<(x1562%(x1563|x1564)));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x1565 = 25668LLU;
	static int8_t x1567 = 0;
	volatile int8_t x1568 = INT8_MIN;
	static volatile uint64_t t89 = 230978375LLU;

	t89 = (x1565<<(x1566%(x1567|x1568)));

	if (t89 != 25668LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1597 = UINT32_MAX;
	uint32_t x1598 = UINT32_MAX;
	uint16_t x1599 = 1U;
	static uint8_t x1600 = UINT8_MAX;
	uint32_t t90 = UINT32_MAX;

	t90 = (x1597<<(x1598%(x1599|x1600)));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1625 = 27849935U;
	static volatile int8_t x1626 = 3;
	uint64_t x1627 = UINT64_MAX;
	volatile uint32_t t91 = 118231U;

	t91 = (x1625<<(x1626%(x1627|x1628)));

	if (t91 != 222799480U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x1641 = 2U;
	volatile uint16_t x1642 = UINT16_MAX;
	uint16_t x1643 = UINT16_MAX;
	uint64_t x1644 = 2159LLU;
	static int32_t t92 = -2;

	t92 = (x1641<<(x1642%(x1643|x1644)));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x1645 = INT16_MAX;
	int16_t x1646 = INT16_MIN;
	int16_t x1647 = -1;
	int16_t x1648 = INT16_MIN;

	t93 = (x1645<<(x1646%(x1647|x1648)));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x1649 = UINT64_MAX;
	volatile int32_t x1650 = 552381178;
	uint8_t x1651 = 5U;
	static int32_t x1652 = -1;

	t94 = (x1649<<(x1650%(x1651|x1652)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1681 = 223303842074638LL;
	volatile int8_t x1682 = -1;
	int8_t x1684 = INT8_MIN;
	volatile int64_t t95 = -3508LL;

	t95 = (x1681<<(x1682%(x1683|x1684)));

	if (t95 != 223303842074638LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x1693 = 51694088U;
	int8_t x1694 = INT8_MIN;
	static uint16_t x1695 = UINT16_MAX;
	volatile int16_t x1696 = -65;
	volatile uint32_t t96 = 65469055U;

	t96 = (x1693<<(x1694%(x1695|x1696)));

	if (t96 != 51694088U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1706 = 13U;
	uint64_t x1707 = 5748840LLU;
	int16_t x1708 = -1;
	volatile int32_t t97 = 3501;

	t97 = (x1705<<(x1706%(x1707|x1708)));

	if (t97 != 450756608) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1709 = 298831969LLU;
	static int32_t x1710 = INT32_MIN;
	volatile int16_t x1711 = INT16_MIN;
	volatile int64_t x1712 = INT64_MIN;
	uint64_t t98 = 29860053491LLU;

	t98 = (x1709<<(x1710%(x1711|x1712)));

	if (t98 != 298831969LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1721 = 162U;
	static uint32_t x1723 = 7U;
	volatile int64_t x1724 = -1LL;
	int32_t t99 = 115474709;

	t99 = (x1721<<(x1722%(x1723|x1724)));

	if (t99 != 162) { NG(); } else { ; }
	
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

