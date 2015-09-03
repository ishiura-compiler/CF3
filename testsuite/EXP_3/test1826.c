#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
volatile uint32_t x3 = 430001414U;
uint64_t t0 = 451161405203993767LLU;
uint32_t x17 = 21968893U;
uint64_t x19 = 1LLU;
int64_t x56 = INT64_MAX;
int64_t x61 = -4487595683639630733LL;
int64_t x64 = -2208178LL;
static int8_t x89 = INT8_MIN;
volatile uint32_t x133 = UINT32_MAX;
uint8_t x139 = 9U;
int32_t t12 = -1031845;
volatile uint16_t x176 = 1U;
int64_t x189 = 328065295022LL;
uint8_t x202 = 28U;
volatile int64_t t19 = -611266185415LL;
uint8_t x207 = 1U;
static volatile uint16_t x219 = 0U;
static int32_t t22 = -72022;
uint8_t x252 = 1U;
static volatile int64_t t24 = -3455LL;
volatile uint16_t x275 = 14U;
volatile int32_t t27 = -440047583;
volatile int16_t x335 = INT16_MIN;
static volatile int8_t x341 = 4;
static uint8_t x354 = UINT8_MAX;
int8_t x358 = 1;
volatile uint16_t x395 = 4266U;
uint64_t x398 = 606713171183305LLU;
static int32_t t37 = 396838;
int32_t x439 = INT32_MIN;
uint32_t x453 = UINT32_MAX;
int8_t x455 = 1;
volatile int64_t x493 = -1LL;
int8_t x496 = INT8_MIN;
uint16_t x516 = 5U;
uint64_t t44 = 112LLU;
uint32_t x593 = 10U;
uint8_t x623 = 0U;
uint32_t x624 = 594507U;
volatile uint32_t x642 = 389444267U;
volatile uint16_t x646 = UINT16_MAX;
volatile int8_t x648 = INT8_MAX;
volatile int64_t t53 = 402172242147LL;
int32_t x667 = -1;
uint16_t x668 = 2U;
static int8_t x675 = -1;
int16_t x695 = -820;
volatile uint64_t t56 = 11179LLU;
static int8_t x704 = 0;
volatile int32_t t58 = -2459675;
volatile int32_t x742 = 826184;
volatile int64_t t59 = 26LL;
int64_t x753 = INT64_MAX;
int8_t x761 = INT8_MIN;
volatile uint32_t x764 = 27U;
uint8_t x775 = 0U;
int64_t x776 = INT64_MIN;
int16_t x799 = INT16_MAX;
volatile int8_t x826 = 25;
volatile int32_t x848 = INT32_MAX;
uint64_t t66 = 1023469419960776068LLU;
static int16_t x875 = -1;
static int32_t x878 = -10;
int8_t x886 = INT8_MAX;
int16_t x897 = INT16_MAX;
static uint8_t x905 = 47U;
int64_t x937 = INT64_MIN;
static int8_t x954 = 0;
uint32_t x979 = UINT32_MAX;
int8_t x985 = 4;
uint64_t x1002 = 300598930960LLU;
uint8_t x1003 = 2U;
int32_t x1029 = 78573863;
uint16_t x1065 = UINT16_MAX;
volatile int8_t x1075 = 0;
uint64_t x1076 = 1062LLU;
uint16_t x1090 = UINT16_MAX;
volatile int8_t x1091 = INT8_MAX;
static int32_t t84 = 2569725;
volatile int64_t x1104 = INT64_MAX;
int32_t t85 = 502287257;
int32_t x1106 = INT32_MAX;
static int64_t x1111 = INT64_MIN;
int8_t x1207 = -18;
static volatile int32_t x1236 = INT32_MIN;
int64_t t92 = -13339621LL;
int32_t x1258 = 1;
volatile int16_t x1259 = -19;
int32_t x1309 = 26414;
static volatile int64_t t97 = 245737LL;
static int64_t x1328 = INT64_MIN;
int64_t t98 = 14740LL;
uint8_t x1339 = 14U;


void f0(void) {
	uint64_t x1 = 858104187LLU;
	int64_t x4 = INT64_MIN;

	t0 = ((x1&x2)<<(x3&x4));

	if (t0 != 858104064LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x18 = 136779270179LLU;
	volatile int64_t x20 = INT64_MAX;
	uint64_t t1 = 1LLU;

	t1 = ((x17&x18)<<(x19&x20));

	if (t1 != 1835074LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = INT64_MIN;
	uint8_t x22 = 11U;
	int32_t x23 = INT32_MIN;
	static uint32_t x24 = 3U;
	volatile int64_t t2 = -4321165098876891LL;

	t2 = ((x21&x22)<<(x23&x24));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x53 = 559919836624300124LLU;
	volatile uint16_t x54 = UINT16_MAX;
	int64_t x55 = INT64_MIN;
	volatile uint64_t t3 = 1030666423355701LLU;

	t3 = ((x53&x54)<<(x55&x56));

	if (t3 != 43100LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x62 = UINT16_MAX;
	static uint16_t x63 = 0U;
	volatile int64_t t4 = 7022472185LL;

	t4 = ((x61&x62)<<(x63&x64));

	if (t4 != 25715LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x69 = UINT8_MAX;
	int16_t x70 = INT16_MIN;
	volatile uint16_t x71 = 192U;
	uint32_t x72 = 48257053U;
	volatile int32_t t5 = 0;

	t5 = ((x69&x70)<<(x71&x72));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x90 = UINT16_MAX;
	volatile int32_t x91 = INT32_MAX;
	int64_t x92 = INT64_MIN;
	int32_t t6 = 265593382;

	t6 = ((x89&x90)<<(x91&x92));

	if (t6 != 65408) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x105 = 16771U;
	int64_t x106 = INT64_MIN;
	uint32_t x107 = 6U;
	uint64_t x108 = 639760901LLU;
	static int64_t t7 = -719LL;

	t7 = ((x105&x106)<<(x107&x108));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x109 = 10;
	volatile int64_t x110 = INT64_MAX;
	int16_t x111 = -1;
	volatile int16_t x112 = 0;
	volatile int64_t t8 = -11LL;

	t8 = ((x109&x110)<<(x111&x112));

	if (t8 != 10LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x125 = INT8_MIN;
	static volatile int16_t x126 = INT16_MAX;
	uint32_t x127 = 3U;
	uint8_t x128 = 3U;
	int32_t t9 = 7;

	t9 = ((x125&x126)<<(x127&x128));

	if (t9 != 261120) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x134 = 27197540325182LLU;
	volatile int16_t x135 = INT16_MAX;
	int16_t x136 = INT16_MIN;
	volatile uint64_t t10 = 2168486318127658644LLU;

	t10 = ((x133&x134)<<(x135&x136));

	if (t10 != 1807406910LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x138 = -1LL;
	static volatile int8_t x140 = INT8_MIN;
	static int64_t t11 = 64LL;

	t11 = ((x137&x138)<<(x139&x140));

	if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x153 = 292U;
	int8_t x154 = -29;
	int8_t x155 = INT8_MAX;
	int32_t x156 = INT32_MIN;

	t12 = ((x153&x154)<<(x155&x156));

	if (t12 != 288) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x157 = INT64_MIN;
	volatile uint8_t x158 = UINT8_MAX;
	uint8_t x159 = 4U;
	uint32_t x160 = UINT32_MAX;
	volatile int64_t t13 = -1023LL;

	t13 = ((x157&x158)<<(x159&x160));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x161 = 33LLU;
	static int32_t x162 = -1;
	uint8_t x163 = 105U;
	int64_t x164 = INT64_MIN;
	static volatile uint64_t t14 = 100328476229LLU;

	t14 = ((x161&x162)<<(x163&x164));

	if (t14 != 33LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x165 = 7U;
	volatile int8_t x166 = INT8_MIN;
	volatile int16_t x167 = -1;
	uint32_t x168 = 2U;
	volatile int32_t t15 = -48847;

	t15 = ((x165&x166)<<(x167&x168));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x174 = 6763505246LLU;
	static volatile uint32_t x175 = 12U;
	volatile uint64_t t16 = 645207LLU;

	t16 = ((x173&x174)<<(x175&x176));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x185 = UINT64_MAX;
	int16_t x186 = INT16_MIN;
	static int32_t x187 = 38;
	int16_t x188 = INT16_MAX;
	static volatile uint64_t t17 = 4186836LLU;

	t17 = ((x185&x186)<<(x187&x188));

	if (t17 != 18437736874454810624LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x190 = INT32_MIN;
	static int8_t x191 = 5;
	uint8_t x192 = 2U;
	int64_t t18 = 386154LL;

	t18 = ((x189&x190)<<(x191&x192));

	if (t18 != 326417514496LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x201 = -19428970LL;
	int64_t x203 = INT64_MIN;
	uint8_t x204 = UINT8_MAX;

	t19 = ((x201&x202)<<(x203&x204));

	if (t19 != 20LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x205 = 50U;
	int64_t x206 = 743101LL;
	int32_t x208 = -1;
	int64_t t20 = -45374749244359123LL;

	t20 = ((x205&x206)<<(x207&x208));

	if (t20 != 96LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MAX;
	int16_t x220 = -1;
	volatile int64_t t21 = 51392227701LL;

	t21 = ((x217&x218)<<(x219&x220));

	if (t21 != 32767LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x241 = 160;
	int8_t x242 = INT8_MIN;
	uint8_t x243 = 2U;
	int32_t x244 = INT32_MAX;

	t22 = ((x241&x242)<<(x243&x244));

	if (t22 != 512) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x249 = -1;
	int8_t x250 = INT8_MAX;
	static int64_t x251 = -1LL;
	int32_t t23 = -282;

	t23 = ((x249&x250)<<(x251&x252));

	if (t23 != 254) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x257 = 46;
	static int64_t x258 = -1LL;
	uint16_t x259 = 329U;
	volatile int16_t x260 = 1;

	t24 = ((x257&x258)<<(x259&x260));

	if (t24 != 92LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x273 = UINT16_MAX;
	static volatile int32_t x274 = 980699;
	volatile uint32_t x276 = 37189U;
	volatile int32_t t25 = -2;

	t25 = ((x273&x274)<<(x275&x276));

	if (t25 != 1011120) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x281 = 877122912;
	int16_t x282 = INT16_MIN;
	static uint16_t x283 = 2U;
	int16_t x284 = 1197;
	volatile int32_t t26 = -102730;

	t26 = ((x281&x282)<<(x283&x284));

	if (t26 != 877101056) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x285 = 350U;
	int8_t x286 = -10;
	int32_t x287 = INT32_MIN;
	int64_t x288 = 876092621LL;

	t27 = ((x285&x286)<<(x287&x288));

	if (t27 != 342) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x297 = 63321LLU;
	int64_t x298 = -344330974372363950LL;
	int64_t x299 = -1LL;
	uint8_t x300 = 3U;
	volatile uint64_t t28 = 42LLU;

	t28 = ((x297&x298)<<(x299&x300));

	if (t28 != 2688LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x333 = INT32_MIN;
	int8_t x334 = 9;
	uint8_t x336 = 2U;
	int32_t t29 = 1018475;

	t29 = ((x333&x334)<<(x335&x336));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x342 = INT32_MAX;
	volatile int8_t x343 = INT8_MAX;
	static int64_t x344 = INT64_MIN;
	int32_t t30 = 410913959;

	t30 = ((x341&x342)<<(x343&x344));

	if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x353 = INT16_MIN;
	int32_t x355 = INT32_MIN;
	volatile uint8_t x356 = 2U;
	volatile int32_t t31 = -502195693;

	t31 = ((x353&x354)<<(x355&x356));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x357 = INT32_MIN;
	static int8_t x359 = 3;
	volatile uint64_t x360 = 6107295967LLU;
	static volatile int32_t t32 = -497082;

	t32 = ((x357&x358)<<(x359&x360));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x361 = -1;
	static uint8_t x362 = 26U;
	static int32_t x363 = INT32_MAX;
	volatile int32_t x364 = INT32_MIN;
	volatile int32_t t33 = -93799665;

	t33 = ((x361&x362)<<(x363&x364));

	if (t33 != 26) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x377 = 41U;
	int16_t x378 = 3051;
	uint32_t x379 = 200979U;
	int64_t x380 = INT64_MIN;
	int32_t t34 = -3;

	t34 = ((x377&x378)<<(x379&x380));

	if (t34 != 41) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x393 = 31;
	volatile int64_t x394 = INT64_MIN;
	int8_t x396 = INT8_MAX;
	volatile int64_t t35 = -14110680LL;

	t35 = ((x393&x394)<<(x395&x396));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x397 = 51U;
	volatile int64_t x399 = INT64_MIN;
	volatile uint8_t x400 = UINT8_MAX;
	volatile uint64_t t36 = 1LLU;

	t36 = ((x397&x398)<<(x399&x400));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x401 = INT32_MIN;
	int16_t x402 = INT16_MAX;
	int16_t x403 = INT16_MIN;
	volatile int8_t x404 = 0;

	t37 = ((x401&x402)<<(x403&x404));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x405 = 13561U;
	uint32_t x406 = 6U;
	uint16_t x407 = 245U;
	volatile int32_t x408 = INT32_MIN;
	static uint32_t t38 = 1U;

	t38 = ((x405&x406)<<(x407&x408));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x437 = 2246;
	uint64_t x438 = UINT64_MAX;
	int16_t x440 = INT16_MAX;
	uint64_t t39 = 901454LLU;

	t39 = ((x437&x438)<<(x439&x440));

	if (t39 != 2246LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x454 = 3;
	int16_t x456 = -480;
	uint32_t t40 = 595614U;

	t40 = ((x453&x454)<<(x455&x456));

	if (t40 != 3U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x457 = -1;
	uint16_t x458 = 18922U;
	static int64_t x459 = INT64_MIN;
	int16_t x460 = 134;
	volatile int32_t t41 = -9697961;

	t41 = ((x457&x458)<<(x459&x460));

	if (t41 != 18922) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x494 = 1;
	int16_t x495 = 87;
	int64_t t42 = 212804831522LL;

	t42 = ((x493&x494)<<(x495&x496));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x513 = INT16_MIN;
	uint32_t x514 = 50403U;
	int64_t x515 = -1LL;
	volatile uint32_t t43 = 49864U;

	t43 = ((x513&x514)<<(x515&x516));

	if (t43 != 1048576U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x521 = INT8_MIN;
	uint64_t x522 = 13439LLU;
	uint16_t x523 = 1U;
	int8_t x524 = INT8_MIN;

	t44 = ((x521&x522)<<(x523&x524));

	if (t44 != 13312LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x541 = INT8_MAX;
	static uint64_t x542 = UINT64_MAX;
	static int8_t x543 = INT8_MIN;
	volatile uint8_t x544 = 3U;
	static uint64_t t45 = 3365LLU;

	t45 = ((x541&x542)<<(x543&x544));

	if (t45 != 127LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x549 = 9512282LLU;
	int8_t x550 = -1;
	int32_t x551 = 2;
	static int64_t x552 = -1LL;
	uint64_t t46 = 1592LLU;

	t46 = ((x549&x550)<<(x551&x552));

	if (t46 != 38049128LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x557 = INT16_MAX;
	uint32_t x558 = 45761578U;
	uint64_t x559 = 426473143765553LLU;
	int64_t x560 = INT64_MIN;
	uint32_t t47 = 12492U;

	t47 = ((x557&x558)<<(x559&x560));

	if (t47 != 17450U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x573 = INT8_MIN;
	uint64_t x574 = UINT64_MAX;
	int8_t x575 = INT8_MAX;
	static int8_t x576 = INT8_MIN;
	static uint64_t t48 = 1733637425165LLU;

	t48 = ((x573&x574)<<(x575&x576));

	if (t48 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x594 = INT32_MAX;
	uint32_t x595 = 6092U;
	int32_t x596 = INT32_MIN;
	uint32_t t49 = 2006162U;

	t49 = ((x593&x594)<<(x595&x596));

	if (t49 != 10U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x621 = INT32_MIN;
	volatile uint8_t x622 = 9U;
	static volatile int32_t t50 = 0;

	t50 = ((x621&x622)<<(x623&x624));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x629 = -1;
	int16_t x630 = 3;
	int32_t x631 = 0;
	uint64_t x632 = 1318LLU;
	static int32_t t51 = -913;

	t51 = ((x629&x630)<<(x631&x632));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x641 = INT32_MAX;
	int32_t x643 = -1;
	int8_t x644 = 25;
	static uint32_t t52 = 57U;

	t52 = ((x641&x642)<<(x643&x644));

	if (t52 != 1442840576U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x645 = -1LL;
	int16_t x647 = INT16_MIN;

	t53 = ((x645&x646)<<(x647&x648));

	if (t53 != 65535LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x665 = INT32_MAX;
	static int8_t x666 = INT8_MAX;
	static int32_t t54 = -24;

	t54 = ((x665&x666)<<(x667&x668));

	if (t54 != 508) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x673 = 5;
	int32_t x674 = INT32_MIN;
	int32_t x676 = 11;
	int32_t t55 = -256435728;

	t55 = ((x673&x674)<<(x675&x676));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x693 = 399474U;
	uint64_t x694 = UINT64_MAX;
	uint8_t x696 = 0U;

	t56 = ((x693&x694)<<(x695&x696));

	if (t56 != 399474LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x697 = INT32_MAX;
	int32_t x698 = INT32_MIN;
	int64_t x699 = -36783251274478634LL;
	int16_t x700 = 30;
	int32_t t57 = 3761;

	t57 = ((x697&x698)<<(x699&x700));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x701 = 0;
	static uint8_t x702 = 1U;
	int8_t x703 = 8;

	t58 = ((x701&x702)<<(x703&x704));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x741 = -6544612LL;
	volatile int16_t x743 = 4267;
	static int16_t x744 = 9;

	t59 = ((x741&x742)<<(x743&x744));

	if (t59 != 403050496LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x754 = 0;
	volatile int32_t x755 = INT32_MIN;
	int8_t x756 = INT8_MAX;
	static int64_t t60 = -243LL;

	t60 = ((x753&x754)<<(x755&x756));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x762 = INT8_MAX;
	int32_t x763 = -1;
	int32_t t61 = -54512;

	t61 = ((x761&x762)<<(x763&x764));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x773 = 1;
	int32_t x774 = -1;
	int32_t t62 = 37918;

	t62 = ((x773&x774)<<(x775&x776));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x797 = INT64_MAX;
	static volatile int32_t x798 = INT32_MIN;
	int64_t x800 = INT64_MIN;
	volatile int64_t t63 = 551935LL;

	t63 = ((x797&x798)<<(x799&x800));

	if (t63 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x825 = 403U;
	uint32_t x827 = UINT32_MAX;
	uint8_t x828 = 2U;
	int32_t t64 = 31038817;

	t64 = ((x825&x826)<<(x827&x828));

	if (t64 != 68) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x845 = 733558211LLU;
	volatile int16_t x846 = -1;
	uint64_t x847 = 21LLU;
	volatile uint64_t t65 = 8320464807933535LLU;

	t65 = ((x845&x846)<<(x847&x848));

	if (t65 != 1538383069315072LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x853 = UINT64_MAX;
	uint8_t x854 = 18U;
	uint32_t x855 = 24898U;
	int16_t x856 = INT16_MIN;

	t66 = ((x853&x854)<<(x855&x856));

	if (t66 != 18LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x873 = 3;
	int16_t x874 = INT16_MIN;
	uint64_t x876 = 31LLU;
	volatile int32_t t67 = 469;

	t67 = ((x873&x874)<<(x875&x876));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x877 = 1035212U;
	static int16_t x879 = INT16_MAX;
	int8_t x880 = 2;
	volatile uint32_t t68 = 68204115U;

	t68 = ((x877&x878)<<(x879&x880));

	if (t68 != 4140816U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x885 = INT32_MIN;
	uint64_t x887 = UINT64_MAX;
	uint16_t x888 = 1U;
	static volatile int32_t t69 = 2257198;

	t69 = ((x885&x886)<<(x887&x888));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x898 = UINT32_MAX;
	volatile uint8_t x899 = 16U;
	uint16_t x900 = 2135U;
	volatile uint32_t t70 = 243U;

	t70 = ((x897&x898)<<(x899&x900));

	if (t70 != 2147418112U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x906 = INT64_MIN;
	static volatile uint16_t x907 = 14U;
	volatile uint16_t x908 = UINT16_MAX;
	int64_t t71 = 5789441273LL;

	t71 = ((x905&x906)<<(x907&x908));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x913 = INT64_MIN;
	static uint8_t x914 = UINT8_MAX;
	int8_t x915 = INT8_MAX;
	static int64_t x916 = INT64_MIN;
	volatile int64_t t72 = 383128LL;

	t72 = ((x913&x914)<<(x915&x916));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x938 = INT64_MAX;
	static int8_t x939 = 1;
	int8_t x940 = 5;
	volatile int64_t t73 = -837180401LL;

	t73 = ((x937&x938)<<(x939&x940));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x953 = 0;
	uint8_t x955 = 1U;
	static volatile int8_t x956 = 0;
	volatile int32_t t74 = -1024185;

	t74 = ((x953&x954)<<(x955&x956));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x977 = 309771531099874834LLU;
	int16_t x978 = -1;
	uint8_t x980 = 3U;
	uint64_t t75 = 586LLU;

	t75 = ((x977&x978)<<(x979&x980));

	if (t75 != 2478172248798998672LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x986 = 29U;
	volatile int64_t x987 = -165825LL;
	static uint8_t x988 = 29U;
	uint32_t t76 = 16881U;

	t76 = ((x985&x986)<<(x987&x988));

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x997 = 1;
	int8_t x998 = -62;
	int32_t x999 = INT32_MIN;
	volatile int8_t x1000 = 1;
	int32_t t77 = -114245228;

	t77 = ((x997&x998)<<(x999&x1000));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1001 = INT16_MIN;
	uint8_t x1004 = UINT8_MAX;
	uint64_t t78 = 0LLU;

	t78 = ((x1001&x1002)<<(x1003&x1004));

	if (t78 != 1202395676672LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x1025 = 9U;
	volatile int16_t x1026 = 3912;
	int32_t x1027 = 127477;
	volatile int32_t x1028 = INT32_MIN;
	volatile uint32_t t79 = 5U;

	t79 = ((x1025&x1026)<<(x1027&x1028));

	if (t79 != 8U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x1030 = INT64_MIN;
	int8_t x1031 = 44;
	int8_t x1032 = INT8_MIN;
	int64_t t80 = -11966LL;

	t80 = ((x1029&x1030)<<(x1031&x1032));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x1049 = 6LLU;
	int64_t x1050 = INT64_MAX;
	static int64_t x1051 = 767584501LL;
	int32_t x1052 = INT32_MIN;
	volatile uint64_t t81 = 1060393834796120694LLU;

	t81 = ((x1049&x1050)<<(x1051&x1052));

	if (t81 != 6LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x1066 = INT32_MIN;
	volatile uint32_t x1067 = 2345U;
	static int8_t x1068 = 1;
	int32_t t82 = -560012;

	t82 = ((x1065&x1066)<<(x1067&x1068));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x1073 = UINT8_MAX;
	int8_t x1074 = INT8_MIN;
	volatile int32_t t83 = 54673162;

	t83 = ((x1073&x1074)<<(x1075&x1076));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x1089 = INT32_MIN;
	static int32_t x1092 = INT32_MIN;

	t84 = ((x1089&x1090)<<(x1091&x1092));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1101 = INT16_MIN;
	volatile uint8_t x1102 = UINT8_MAX;
	volatile uint16_t x1103 = 2U;

	t85 = ((x1101&x1102)<<(x1103&x1104));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x1105 = UINT64_MAX;
	volatile uint8_t x1107 = 1U;
	int8_t x1108 = INT8_MAX;
	static uint64_t t86 = 212724258356LLU;

	t86 = ((x1105&x1106)<<(x1107&x1108));

	if (t86 != 4294967294LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x1109 = -1;
	uint32_t x1110 = 2444006U;
	uint64_t x1112 = 25469237699LLU;
	uint32_t t87 = 27U;

	t87 = ((x1109&x1110)<<(x1111&x1112));

	if (t87 != 2444006U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1113 = INT32_MAX;
	uint64_t x1114 = 36732417018034LLU;
	uint32_t x1115 = 46118U;
	uint16_t x1116 = 2907U;
	volatile uint64_t t88 = 29492307208LLU;

	t88 = ((x1113&x1114)<<(x1115&x1116));

	if (t88 != 7426810568LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x1161 = 25258226LLU;
	int64_t x1162 = INT64_MIN;
	int16_t x1163 = INT16_MIN;
	static volatile int8_t x1164 = 47;
	volatile uint64_t t89 = 34722LLU;

	t89 = ((x1161&x1162)<<(x1163&x1164));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1177 = -3;
	uint8_t x1178 = 120U;
	static uint32_t x1179 = 16U;
	volatile int64_t x1180 = 1LL;
	volatile int32_t t90 = 65398;

	t90 = ((x1177&x1178)<<(x1179&x1180));

	if (t90 != 120) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1205 = -1;
	static uint64_t x1206 = UINT64_MAX;
	uint16_t x1208 = 22U;
	volatile uint64_t t91 = 3336556792LLU;

	t91 = ((x1205&x1206)<<(x1207&x1208));

	if (t91 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x1233 = UINT32_MAX;
	static int64_t x1234 = -1LL;
	int8_t x1235 = INT8_MAX;

	t92 = ((x1233&x1234)<<(x1235&x1236));

	if (t92 != 4294967295LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1245 = -14;
	int8_t x1246 = INT8_MAX;
	int8_t x1247 = 2;
	int16_t x1248 = INT16_MAX;
	static int32_t t93 = -30;

	t93 = ((x1245&x1246)<<(x1247&x1248));

	if (t93 != 456) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x1253 = 56U;
	uint32_t x1254 = 2U;
	int64_t x1255 = -196120119612021745LL;
	uint8_t x1256 = UINT8_MAX;
	uint32_t t94 = 61808461U;

	t94 = ((x1253&x1254)<<(x1255&x1256));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1257 = INT32_MIN;
	uint16_t x1260 = 2U;
	volatile int32_t t95 = 708190846;

	t95 = ((x1257&x1258)<<(x1259&x1260));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1310 = 21328132LL;
	uint8_t x1311 = 4U;
	uint32_t x1312 = 127733U;
	int64_t t96 = 353717167LL;

	t96 = ((x1309&x1310)<<(x1311&x1312));

	if (t96 != 397376LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1317 = 7302782272780902LL;
	int64_t x1318 = -1LL;
	uint8_t x1319 = 13U;
	uint64_t x1320 = 9535906LLU;

	t97 = ((x1317&x1318)<<(x1319&x1320));

	if (t97 != 7302782272780902LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1325 = INT64_MIN;
	uint16_t x1326 = 12U;
	volatile int32_t x1327 = INT32_MAX;

	t98 = ((x1325&x1326)<<(x1327&x1328));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1337 = 27LLU;
	static int64_t x1338 = INT64_MIN;
	int16_t x1340 = INT16_MIN;
	uint64_t t99 = 997619546394LLU;

	t99 = ((x1337&x1338)<<(x1339&x1340));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

