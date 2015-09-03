#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x9 = 48145254246453LLU;
int32_t x35 = INT32_MIN;
uint32_t t2 = 671080U;
int16_t x71 = INT16_MAX;
static int16_t x76 = INT16_MIN;
uint8_t x96 = UINT8_MAX;
uint32_t x125 = UINT32_MAX;
int8_t x134 = -1;
uint64_t x135 = 2885LLU;
volatile int64_t t8 = -323346698679LL;
uint8_t x157 = 3U;
static uint32_t x158 = UINT32_MAX;
int32_t x160 = -671160045;
volatile uint64_t t11 = 1533406779629809639LLU;
volatile uint16_t x222 = 17254U;
int64_t x229 = -1LL;
int8_t x231 = INT8_MIN;
int32_t x247 = -6;
uint64_t x262 = 12524972482013620LLU;
uint8_t x263 = 1U;
int64_t x264 = INT64_MIN;
int32_t x265 = INT32_MIN;
int64_t t19 = 2457280LL;
int32_t t21 = 93086;
uint8_t x334 = UINT8_MAX;
int8_t x359 = INT8_MAX;
uint32_t x379 = 1222742U;
int8_t x380 = -1;
int64_t t27 = 715841566106LL;
static int32_t x405 = -1;
int32_t x407 = -1;
uint16_t x413 = UINT16_MAX;
uint64_t x414 = UINT64_MAX;
volatile int64_t x415 = 26732333865LL;
volatile int16_t x425 = INT16_MIN;
static volatile uint64_t x429 = UINT64_MAX;
static volatile uint64_t x430 = UINT64_MAX;
int8_t x443 = 1;
static volatile int8_t x467 = -31;
int16_t x473 = INT16_MAX;
volatile int64_t x476 = INT64_MIN;
static uint32_t x501 = 840U;
volatile uint64_t x505 = UINT64_MAX;
int64_t x506 = -13876107735452LL;
static int32_t x508 = 17;
volatile int64_t x518 = INT64_MAX;
volatile uint64_t x521 = 1600LLU;
uint32_t x551 = UINT32_MAX;
int32_t x561 = -1;
uint64_t x565 = 319035LLU;
static int8_t x574 = INT8_MAX;
uint32_t t47 = 4U;
int8_t x606 = 0;
int64_t x650 = -1LL;
uint8_t x651 = 2U;
volatile uint64_t x678 = 2388785378392LLU;
int16_t x681 = -10;
static int64_t t54 = 517LL;
static int64_t t57 = 385108LL;
int16_t x796 = -1;
volatile int32_t x837 = 129;
int32_t t61 = 1;
int32_t x855 = -1;
volatile int8_t x856 = INT8_MIN;
uint32_t t62 = 27212606U;
uint64_t x862 = 13482499107083705LLU;
int16_t x865 = INT16_MAX;
int8_t x882 = INT8_MIN;
volatile int8_t x886 = INT8_MIN;
static uint8_t x888 = 8U;
volatile int64_t x904 = INT64_MIN;
uint32_t t71 = 133U;
uint32_t x909 = 10U;
volatile uint64_t x910 = 151875003730558408LLU;
int16_t x912 = -1;
volatile int32_t x913 = INT32_MIN;
int16_t x915 = INT16_MIN;
int8_t x957 = INT8_MIN;
int16_t x978 = INT16_MIN;
int32_t t77 = 1;
uint64_t t80 = 8784631572898415540LLU;
static int64_t x1065 = -1LL;
int64_t t82 = -6626019440249LL;
uint16_t x1073 = UINT16_MAX;
int8_t x1074 = INT8_MAX;
int16_t x1079 = -1;
int32_t x1085 = INT32_MIN;
volatile uint64_t t87 = 2737768186166904LLU;
uint64_t x1114 = 1962171967LLU;
int8_t x1115 = INT8_MIN;
static uint16_t x1129 = 2U;
uint64_t x1138 = UINT64_MAX;
uint8_t x1139 = 1U;
uint16_t x1140 = 6079U;
uint64_t t92 = 600944LLU;
static int8_t x1161 = INT8_MIN;
static int32_t x1167 = -1;
int8_t x1177 = -1;
int16_t x1180 = INT16_MIN;
int64_t x1189 = 0LL;
uint16_t x1190 = UINT16_MAX;
int32_t x1211 = INT32_MIN;


void f0(void) {
	int16_t x10 = INT16_MIN;
	volatile uint64_t x11 = 1602LLU;
	static int16_t x12 = 71;
	volatile uint64_t t0 = 37565583LLU;

	t0 = ((x9*x10)<<(x11/x12));

	if (t0 != 16655148562681692160LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x33 = -1;
	volatile uint32_t x34 = UINT32_MAX;
	int32_t x36 = INT32_MIN;
	volatile uint32_t t1 = 61573719U;

	t1 = ((x33*x34)<<(x35/x36));

	if (t1 != 2U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x57 = UINT16_MAX;
	uint32_t x58 = 355794U;
	int16_t x59 = 3177;
	int64_t x60 = INT64_MIN;

	t2 = ((x57*x58)<<(x59/x60));

	if (t2 != 1842123310U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = 1788;
	int32_t x72 = INT32_MIN;
	int32_t t3 = 32203;

	t3 = ((x69*x70)<<(x71/x72));

	if (t3 != 117176580) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x73 = UINT8_MAX;
	static uint64_t x74 = 48860530775117LLU;
	static int32_t x75 = -1;
	uint64_t t4 = 4670823637237532007LLU;

	t4 = ((x73*x74)<<(x75/x76));

	if (t4 != 12459435347654835LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x93 = -1LL;
	int64_t x94 = -61686LL;
	int32_t x95 = -15;
	volatile int64_t t5 = 187555154LL;

	t5 = ((x93*x94)<<(x95/x96));

	if (t5 != 61686LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x126 = -1;
	int8_t x127 = INT8_MAX;
	volatile int32_t x128 = INT32_MIN;
	static volatile uint32_t t6 = 6933U;

	t6 = ((x125*x126)<<(x127/x128));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x129 = 1347310257784LLU;
	uint32_t x130 = 45339284U;
	static volatile uint32_t x131 = 322132U;
	int16_t x132 = -1;
	volatile uint64_t t7 = 540108LLU;

	t7 = ((x129*x130)<<(x131/x132));

	if (t7 != 5745850192653331808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x133 = -1LL;
	uint64_t x136 = 3822422LLU;

	t8 = ((x133*x134)<<(x135/x136));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x153 = UINT8_MAX;
	static uint8_t x154 = 36U;
	volatile uint64_t x155 = UINT64_MAX;
	static int16_t x156 = INT16_MIN;
	volatile int32_t t9 = -4;

	t9 = ((x153*x154)<<(x155/x156));

	if (t9 != 18360) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x159 = -1;
	static volatile uint32_t t10 = 256398702U;

	t10 = ((x157*x158)<<(x159/x160));

	if (t10 != 4294967293U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x161 = UINT8_MAX;
	uint64_t x162 = 55470193LLU;
	int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MIN;

	t11 = ((x161*x162)<<(x163/x164));

	if (t11 != 28289798430LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x165 = INT64_MIN;
	static uint64_t x166 = UINT64_MAX;
	uint8_t x167 = 2U;
	uint32_t x168 = 201512092U;
	volatile uint64_t t12 = 800409251LLU;

	t12 = ((x165*x166)<<(x167/x168));

	if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x221 = 19591U;
	int16_t x223 = -1;
	static uint8_t x224 = UINT8_MAX;
	volatile int32_t t13 = -118435;

	t13 = ((x221*x222)<<(x223/x224));

	if (t13 != 338023114) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x230 = -1;
	static int32_t x232 = INT32_MIN;
	int64_t t14 = -1LL;

	t14 = ((x229*x230)<<(x231/x232));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x245 = 1685926208LLU;
	static volatile int16_t x246 = INT16_MIN;
	volatile uint16_t x248 = 1580U;
	volatile uint64_t t15 = 3858LLU;

	t15 = ((x245*x246)<<(x247/x248));

	if (t15 != 18446688829279567872LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x261 = INT16_MIN;
	volatile uint64_t t16 = 6563130437903562LLU;

	t16 = ((x261*x262)<<(x263/x264));

	if (t16 != 13856815404697387008LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x266 = -1LL;
	static int32_t x267 = 481;
	int16_t x268 = 13587;
	volatile int64_t t17 = -26LL;

	t17 = ((x265*x266)<<(x267/x268));

	if (t17 != 2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x269 = INT8_MIN;
	volatile int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MIN;
	static int32_t t18 = 211301566;

	t18 = ((x269*x270)<<(x271/x272));

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x297 = -1LL;
	int8_t x298 = -1;
	uint16_t x299 = 15U;
	int64_t x300 = INT64_MAX;

	t19 = ((x297*x298)<<(x299/x300));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x301 = 1763840U;
	volatile uint32_t x302 = 3U;
	static uint32_t x303 = 63309U;
	int16_t x304 = INT16_MIN;
	volatile uint32_t t20 = 128974191U;

	t20 = ((x301*x302)<<(x303/x304));

	if (t20 != 5291520U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x305 = 0U;
	int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MIN;
	volatile uint64_t x308 = UINT64_MAX;

	t21 = ((x305*x306)<<(x307/x308));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x333 = 12369944772LLU;
	uint8_t x335 = UINT8_MAX;
	int16_t x336 = 716;
	uint64_t t22 = 94845012016338LLU;

	t22 = ((x333*x334)<<(x335/x336));

	if (t22 != 3154335916860LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x337 = INT16_MIN;
	static int16_t x338 = INT16_MIN;
	int8_t x339 = -1;
	static volatile int8_t x340 = 9;
	int32_t t23 = 256035373;

	t23 = ((x337*x338)<<(x339/x340));

	if (t23 != 1073741824) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x353 = 4117445U;
	static uint16_t x354 = 13U;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = -18;
	uint32_t t24 = 642473U;

	t24 = ((x353*x354)<<(x355/x356));

	if (t24 != 107053570U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x357 = -1;
	uint32_t x358 = 2845067U;
	int16_t x360 = INT16_MAX;
	volatile uint32_t t25 = 1U;

	t25 = ((x357*x358)<<(x359/x360));

	if (t25 != 4292122229U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x377 = INT8_MAX;
	static int16_t x378 = 3811;
	int32_t t26 = -1098063;

	t26 = ((x377*x378)<<(x379/x380));

	if (t26 != 483997) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x389 = -1LL;
	int16_t x390 = 0;
	volatile int32_t x391 = -197531;
	int16_t x392 = INT16_MIN;

	t27 = ((x389*x390)<<(x391/x392));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x406 = -1;
	static uint16_t x408 = UINT16_MAX;
	volatile int32_t t28 = -130115;

	t28 = ((x405*x406)<<(x407/x408));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x416 = 3038062976251LLU;
	volatile uint64_t t29 = 922LLU;

	t29 = ((x413*x414)<<(x415/x416));

	if (t29 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x421 = -48;
	static uint64_t x422 = 237653368LLU;
	volatile uint16_t x423 = 3905U;
	static int16_t x424 = 540;
	volatile uint64_t t30 = 976LLU;

	t30 = ((x421*x422)<<(x423/x424));

	if (t30 != 18446742613567258624LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x426 = 983U;
	uint16_t x427 = 10413U;
	volatile int64_t x428 = INT64_MAX;
	volatile uint32_t t31 = 3291U;

	t31 = ((x425*x426)<<(x427/x428));

	if (t31 != 4262756352U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x431 = 932U;
	int64_t x432 = INT64_MIN;
	volatile uint64_t t32 = 24LLU;

	t32 = ((x429*x430)<<(x431/x432));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x441 = -1LL;
	int16_t x442 = 0;
	uint64_t x444 = 9173768926423384LLU;
	int64_t t33 = -19694LL;

	t33 = ((x441*x442)<<(x443/x444));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x445 = 3476616716988877LLU;
	uint64_t x446 = UINT64_MAX;
	int8_t x447 = -1;
	static int32_t x448 = INT32_MAX;
	volatile uint64_t t34 = 1945454LLU;

	t34 = ((x445*x446)<<(x447/x448));

	if (t34 != 18443267456992562739LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x465 = UINT16_MAX;
	int64_t x466 = 456866LL;
	int16_t x468 = INT16_MIN;
	int64_t t35 = -694362875LL;

	t35 = ((x465*x466)<<(x467/x468));

	if (t35 != 29940713310LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x474 = 48;
	uint64_t x475 = UINT64_MAX;
	static int32_t t36 = -5622710;

	t36 = ((x473*x474)<<(x475/x476));

	if (t36 != 3145632) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x485 = INT8_MAX;
	int16_t x486 = 14858;
	uint8_t x487 = UINT8_MAX;
	uint32_t x488 = 20136246U;
	int32_t t37 = -40377015;

	t37 = ((x485*x486)<<(x487/x488));

	if (t37 != 1886966) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x502 = INT32_MAX;
	uint64_t x503 = 86479LLU;
	int8_t x504 = INT8_MIN;
	uint32_t t38 = 589554371U;

	t38 = ((x501*x502)<<(x503/x504));

	if (t38 != 4294966456U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x507 = -1;
	uint64_t t39 = 361484924449LLU;

	t39 = ((x505*x506)<<(x507/x508));

	if (t39 != 13876107735452LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x517 = UINT64_MAX;
	uint64_t x519 = 0LLU;
	uint32_t x520 = 561875145U;
	uint64_t t40 = 20961464LLU;

	t40 = ((x517*x518)<<(x519/x520));

	if (t40 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x522 = INT16_MAX;
	static volatile int64_t x523 = INT64_MAX;
	int64_t x524 = INT64_MIN;
	uint64_t t41 = 1896901732778647141LLU;

	t41 = ((x521*x522)<<(x523/x524));

	if (t41 != 52427200LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x549 = 1U;
	uint32_t x550 = 140U;
	int8_t x552 = INT8_MIN;
	volatile uint32_t t42 = 3535335U;

	t42 = ((x549*x550)<<(x551/x552));

	if (t42 != 280U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x562 = -1;
	int8_t x563 = INT8_MIN;
	int16_t x564 = INT16_MAX;
	int32_t t43 = 7;

	t43 = ((x561*x562)<<(x563/x564));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x566 = -1;
	volatile int8_t x567 = -1;
	int32_t x568 = 11497;
	static uint64_t t44 = 899386106196174LLU;

	t44 = ((x565*x566)<<(x567/x568));

	if (t44 != 18446744073709232581LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x573 = 104U;
	volatile uint16_t x575 = 0U;
	uint64_t x576 = UINT64_MAX;
	int32_t t45 = -28021619;

	t45 = ((x573*x574)<<(x575/x576));

	if (t45 != 13208) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x585 = 15U;
	static int64_t x586 = 1518LL;
	volatile uint32_t x587 = 73576960U;
	int8_t x588 = INT8_MIN;
	volatile int64_t t46 = 1629787212772775743LL;

	t46 = ((x585*x586)<<(x587/x588));

	if (t46 != 22770LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x589 = INT8_MIN;
	uint32_t x590 = 1564446084U;
	uint64_t x591 = UINT64_MAX;
	volatile int64_t x592 = INT64_MIN;

	t47 = ((x589*x590)<<(x591/x592));

	if (t47 != 3228728320U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x605 = 5;
	int16_t x607 = -3296;
	static int32_t x608 = -118;
	int32_t t48 = 385783708;

	t48 = ((x605*x606)<<(x607/x608));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x649 = 0;
	int8_t x652 = INT8_MIN;
	int64_t t49 = -1LL;

	t49 = ((x649*x650)<<(x651/x652));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x669 = UINT32_MAX;
	volatile int16_t x670 = INT16_MIN;
	volatile uint32_t x671 = UINT32_MAX;
	uint64_t x672 = UINT64_MAX;
	volatile uint32_t t50 = 5833628U;

	t50 = ((x669*x670)<<(x671/x672));

	if (t50 != 32768U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x677 = INT64_MAX;
	static uint64_t x679 = 50841150770998LLU;
	int64_t x680 = -1LL;
	volatile uint64_t t51 = 16021760711742052LLU;

	t51 = ((x677*x678)<<(x679/x680));

	if (t51 != 18446741684924173224LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x682 = UINT64_MAX;
	int32_t x683 = INT32_MIN;
	uint32_t x684 = UINT32_MAX;
	uint64_t t52 = 952884LLU;

	t52 = ((x681*x682)<<(x683/x684));

	if (t52 != 10LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x685 = UINT32_MAX;
	static volatile int16_t x686 = INT16_MIN;
	int8_t x687 = INT8_MAX;
	static int16_t x688 = INT16_MAX;
	volatile uint32_t t53 = 1011499176U;

	t53 = ((x685*x686)<<(x687/x688));

	if (t53 != 32768U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x745 = 1399381672712994202LL;
	int8_t x746 = 3;
	uint32_t x747 = 17318U;
	uint32_t x748 = UINT32_MAX;

	t54 = ((x745*x746)<<(x747/x748));

	if (t54 != 4198145018138982606LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x749 = INT8_MAX;
	volatile int8_t x750 = INT8_MAX;
	volatile int8_t x751 = -1;
	int32_t x752 = -1;
	int32_t t55 = 3965032;

	t55 = ((x749*x750)<<(x751/x752));

	if (t55 != 32258) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x773 = 332U;
	uint16_t x774 = 2976U;
	volatile int32_t x775 = -1;
	volatile int16_t x776 = INT16_MIN;
	volatile uint32_t t56 = 15092U;

	t56 = ((x773*x774)<<(x775/x776));

	if (t56 != 988032U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x785 = -1LL;
	int64_t x786 = -1LL;
	int16_t x787 = 1;
	uint32_t x788 = 45708U;

	t57 = ((x785*x786)<<(x787/x788));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x793 = INT16_MAX;
	volatile uint64_t x794 = UINT64_MAX;
	uint32_t x795 = 1118371U;
	volatile uint64_t t58 = 3397827846982LLU;

	t58 = ((x793*x794)<<(x795/x796));

	if (t58 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x838 = INT16_MAX;
	uint16_t x839 = 7U;
	uint64_t x840 = 69LLU;
	volatile int32_t t59 = -137890;

	t59 = ((x837*x838)<<(x839/x840));

	if (t59 != 4226943) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x845 = INT16_MIN;
	int32_t x846 = -1;
	int8_t x847 = INT8_MIN;
	int64_t x848 = 61910LL;
	int32_t t60 = -17;

	t60 = ((x845*x846)<<(x847/x848));

	if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x849 = INT16_MIN;
	int16_t x850 = INT16_MIN;
	volatile int64_t x851 = 25842504LL;
	int64_t x852 = INT64_MIN;

	t61 = ((x849*x850)<<(x851/x852));

	if (t61 != 1073741824) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x853 = 1500827U;
	static int32_t x854 = -1;

	t62 = ((x853*x854)<<(x855/x856));

	if (t62 != 4293466469U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x857 = 1;
	volatile int32_t x858 = INT32_MAX;
	int64_t x859 = -1LL;
	int32_t x860 = INT32_MAX;
	int32_t t63 = INT32_MAX;

	t63 = ((x857*x858)<<(x859/x860));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x861 = 350U;
	static int64_t x863 = -1LL;
	int8_t x864 = -1;
	volatile uint64_t t64 = 68068LLU;

	t64 = ((x861*x862)<<(x863/x864));

	if (t64 != 9437749374958593500LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x866 = 751;
	static volatile int64_t x867 = 1320450756LL;
	int32_t x868 = INT32_MIN;
	volatile int32_t t65 = -1185690;

	t65 = ((x865*x866)<<(x867/x868));

	if (t65 != 24608017) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x881 = 236476LLU;
	int32_t x883 = -1;
	uint8_t x884 = 2U;
	volatile uint64_t t66 = 16547774773362121LLU;

	t66 = ((x881*x882)<<(x883/x884));

	if (t66 != 18446744073679282688LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x885 = INT8_MIN;
	volatile int64_t x887 = 124LL;
	volatile int32_t t67 = 1;

	t67 = ((x885*x886)<<(x887/x888));

	if (t67 != 536870912) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x893 = UINT64_MAX;
	uint8_t x894 = 51U;
	uint32_t x895 = 14U;
	uint32_t x896 = 1324238U;
	uint64_t t68 = 2907LLU;

	t68 = ((x893*x894)<<(x895/x896));

	if (t68 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x897 = -95823011LL;
	volatile int32_t x898 = INT32_MIN;
	int64_t x899 = -1LL;
	int16_t x900 = INT16_MIN;
	volatile int64_t t69 = -574239863090LL;

	t69 = ((x897*x898)<<(x899/x900));

	if (t69 != 205778349224624128LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x901 = 35304622LLU;
	static uint8_t x902 = UINT8_MAX;
	int64_t x903 = INT64_MIN;
	volatile uint64_t t70 = 65676940LLU;

	t70 = ((x901*x902)<<(x903/x904));

	if (t70 != 18005357220LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x905 = -2;
	uint32_t x906 = 18U;
	uint8_t x907 = UINT8_MAX;
	int32_t x908 = INT32_MAX;

	t71 = ((x905*x906)<<(x907/x908));

	if (t71 != 4294967260U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x911 = -1LL;
	volatile uint64_t t72 = 5776408LLU;

	t72 = ((x909*x910)<<(x911/x912));

	if (t72 != 3037500074611168160LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x914 = -1LL;
	volatile int32_t x916 = -2681;
	volatile int64_t t73 = -572523680793387380LL;

	t73 = ((x913*x914)<<(x915/x916));

	if (t73 != 8796093022208LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x917 = 6;
	volatile uint32_t x918 = 208U;
	static volatile int8_t x919 = 63;
	uint64_t x920 = UINT64_MAX;
	volatile uint32_t t74 = 120U;

	t74 = ((x917*x918)<<(x919/x920));

	if (t74 != 1248U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x958 = INT16_MIN;
	int8_t x959 = INT8_MIN;
	int32_t x960 = INT32_MIN;
	volatile int32_t t75 = 12;

	t75 = ((x957*x958)<<(x959/x960));

	if (t75 != 4194304) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x977 = UINT32_MAX;
	static volatile int8_t x979 = -1;
	int8_t x980 = -1;
	uint32_t t76 = 2U;

	t76 = ((x977*x978)<<(x979/x980));

	if (t76 != 65536U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x981 = -1;
	static volatile int16_t x982 = INT16_MIN;
	int64_t x983 = -1LL;
	volatile uint32_t x984 = 182U;

	t77 = ((x981*x982)<<(x983/x984));

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x985 = UINT64_MAX;
	int16_t x986 = INT16_MIN;
	int16_t x987 = INT16_MIN;
	volatile uint64_t x988 = UINT64_MAX;
	volatile uint64_t t78 = 587727065660721LLU;

	t78 = ((x985*x986)<<(x987/x988));

	if (t78 != 32768LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1009 = 0;
	uint64_t x1010 = 960333443321665317LLU;
	int16_t x1011 = -1;
	static uint32_t x1012 = 116251504U;
	uint64_t t79 = 110219809364215992LLU;

	t79 = ((x1009*x1010)<<(x1011/x1012));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1029 = 14450LLU;
	int8_t x1030 = INT8_MIN;
	int8_t x1031 = 59;
	volatile int32_t x1032 = INT32_MAX;

	t80 = ((x1029*x1030)<<(x1031/x1032));

	if (t80 != 18446744073707702016LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1033 = 25U;
	int16_t x1034 = 1126;
	int8_t x1035 = INT8_MAX;
	volatile int32_t x1036 = INT32_MIN;
	uint32_t t81 = 38053736U;

	t81 = ((x1033*x1034)<<(x1035/x1036));

	if (t81 != 28150U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1066 = INT32_MIN;
	uint8_t x1067 = 57U;
	int64_t x1068 = 597693882845605LL;

	t82 = ((x1065*x1066)<<(x1067/x1068));

	if (t82 != 2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1075 = -1;
	static int64_t x1076 = INT64_MIN;
	volatile int32_t t83 = -81897413;

	t83 = ((x1073*x1074)<<(x1075/x1076));

	if (t83 != 8322945) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1077 = 194;
	uint64_t x1078 = 5543812286LLU;
	uint8_t x1080 = 12U;
	uint64_t t84 = 21770286LLU;

	t84 = ((x1077*x1078)<<(x1079/x1080));

	if (t84 != 1075499583484LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x1086 = 5LLU;
	uint64_t x1087 = 860098LLU;
	volatile int64_t x1088 = INT64_MIN;
	volatile uint64_t t85 = 81688419976574LLU;

	t85 = ((x1085*x1086)<<(x1087/x1088));

	if (t85 != 18446744062972133376LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1105 = INT16_MIN;
	static int16_t x1106 = -3804;
	static uint16_t x1107 = 1U;
	uint64_t x1108 = UINT64_MAX;
	volatile int32_t t86 = -3027821;

	t86 = ((x1105*x1106)<<(x1107/x1108));

	if (t86 != 124649472) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x1109 = INT32_MIN;
	static uint64_t x1110 = 2040025LLU;
	int8_t x1111 = 13;
	int16_t x1112 = INT16_MIN;

	t87 = ((x1109*x1110)<<(x1111/x1112));

	if (t87 != 18442363153380540416LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1113 = INT16_MAX;
	static uint16_t x1116 = UINT16_MAX;
	volatile uint64_t t88 = 1488895493066924840LLU;

	t88 = ((x1113*x1114)<<(x1115/x1116));

	if (t88 != 64294488842689LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x1125 = INT8_MIN;
	static uint64_t x1126 = UINT64_MAX;
	static int16_t x1127 = INT16_MAX;
	uint64_t x1128 = 3452362LLU;
	volatile uint64_t t89 = 310206LLU;

	t89 = ((x1125*x1126)<<(x1127/x1128));

	if (t89 != 128LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1130 = 4611861LLU;
	uint32_t x1131 = UINT32_MAX;
	int32_t x1132 = INT32_MAX;
	volatile uint64_t t90 = 3LLU;

	t90 = ((x1129*x1130)<<(x1131/x1132));

	if (t90 != 36894888LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1133 = 527176LL;
	volatile int16_t x1134 = 8;
	static int8_t x1135 = INT8_MIN;
	int16_t x1136 = 1484;
	volatile int64_t t91 = -53804779757680677LL;

	t91 = ((x1133*x1134)<<(x1135/x1136));

	if (t91 != 4217408LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x1137 = 25LLU;

	t92 = ((x1137*x1138)<<(x1139/x1140));

	if (t92 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1162 = 0;
	int16_t x1163 = -85;
	int32_t x1164 = INT32_MAX;
	int32_t t93 = -29001328;

	t93 = ((x1161*x1162)<<(x1163/x1164));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1165 = INT16_MIN;
	int8_t x1166 = -1;
	int64_t x1168 = -48LL;
	volatile int32_t t94 = -355050234;

	t94 = ((x1165*x1166)<<(x1167/x1168));

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1178 = INT16_MIN;
	int16_t x1179 = INT16_MIN;
	int32_t t95 = -9367055;

	t95 = ((x1177*x1178)<<(x1179/x1180));

	if (t95 != 65536) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1191 = 3972U;
	uint32_t x1192 = 972527626U;
	volatile int64_t t96 = -2024LL;

	t96 = ((x1189*x1190)<<(x1191/x1192));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x1201 = 2U;
	volatile int8_t x1202 = 0;
	int8_t x1203 = -1;
	int32_t x1204 = 440578799;
	volatile int32_t t97 = -4970;

	t97 = ((x1201*x1202)<<(x1203/x1204));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1209 = UINT32_MAX;
	uint64_t x1210 = 216148445LLU;
	static int64_t x1212 = INT64_MIN;
	uint64_t t98 = 49335LLU;

	t98 = ((x1209*x1210)<<(x1211/x1212));

	if (t98 != 928350502140106275LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1217 = -1LL;
	int32_t x1218 = -1;
	static int16_t x1219 = INT16_MIN;
	int32_t x1220 = INT32_MIN;
	static int64_t t99 = -1LL;

	t99 = ((x1217*x1218)<<(x1219/x1220));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

