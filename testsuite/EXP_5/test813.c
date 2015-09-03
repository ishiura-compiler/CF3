#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x7 = -1;
int32_t t0 = -1059669669;
uint64_t x21 = 787892959822517894LLU;
int8_t x22 = 2;
volatile int16_t x24 = -1;
static uint32_t x42 = UINT32_MAX;
int64_t x44 = 167354540798392931LL;
int8_t x50 = INT8_MAX;
volatile int16_t x51 = -1;
static int32_t t6 = -141671;
volatile uint64_t x69 = 2790224LLU;
volatile int8_t x82 = -1;
volatile uint64_t t8 = 5LLU;
volatile uint16_t x92 = UINT16_MAX;
uint32_t x105 = UINT32_MAX;
volatile int32_t t12 = -22380495;
uint8_t x194 = 0U;
uint64_t t15 = 754694825111821LLU;
volatile int8_t x206 = INT8_MAX;
int32_t t16 = -91600571;
uint64_t x213 = 6LLU;
static uint8_t x251 = UINT8_MAX;
static uint64_t t20 = UINT64_MAX;
int32_t x265 = 17352;
uint32_t x268 = UINT32_MAX;
volatile int32_t t21 = -18039;
uint16_t x293 = 86U;
int64_t x295 = INT64_MIN;
uint32_t x297 = 129U;
volatile int32_t t26 = 5479;
volatile int32_t x434 = INT32_MAX;
uint64_t x437 = 1918741LLU;
volatile uint8_t x448 = 12U;
int8_t x475 = INT8_MIN;
uint32_t x507 = UINT32_MAX;
int64_t x517 = 125617430605960LL;
uint16_t x565 = 1249U;
volatile int8_t x581 = 5;
int8_t x596 = 1;
static uint8_t x597 = 9U;
uint32_t x619 = 6575274U;
uint8_t x653 = UINT8_MAX;
uint8_t x655 = 26U;
static int16_t x675 = INT16_MIN;
volatile int32_t x678 = -1008339;
int32_t x680 = 1;
volatile int8_t x685 = INT8_MAX;
uint8_t x693 = UINT8_MAX;
static int32_t x708 = 265549;
static int8_t x724 = -1;
int32_t x726 = INT32_MIN;
int32_t x728 = 157344132;
int16_t x742 = INT16_MIN;
volatile int8_t x750 = -1;
volatile int32_t t50 = -43;
volatile int32_t t51 = 236;
int32_t x790 = INT32_MAX;
int8_t x791 = -48;
volatile int16_t x792 = -3;
uint16_t x805 = 1U;
static int8_t x817 = 1;
uint32_t x822 = UINT32_MAX;
uint32_t x823 = UINT32_MAX;
int8_t x826 = INT8_MIN;
static int16_t x872 = -1;
int32_t t59 = -17;
static uint8_t x916 = 2U;
uint32_t x941 = 1U;
uint16_t x962 = 8U;
static int16_t x976 = -1;
int8_t x985 = INT8_MAX;
int64_t x986 = 236LL;
int16_t x988 = INT16_MIN;
volatile int32_t t67 = 1400261;
int8_t x1023 = -1;
int32_t x1026 = 4;
static volatile int32_t t72 = -758207178;
uint16_t x1054 = 22397U;
volatile int32_t x1056 = INT32_MIN;
int64_t x1070 = -119LL;
static uint64_t x1084 = 7400499528LLU;
volatile int32_t x1099 = -2;
int16_t x1102 = INT16_MAX;
volatile int32_t t78 = 3601;
static int32_t x1138 = -1;
volatile int32_t x1140 = -1;
volatile uint64_t t79 = 904796267996653485LLU;
int32_t x1143 = 688;
uint64_t t81 = 14447845782151LLU;
int64_t x1241 = 15051768415LL;
int64_t t87 = 57021LL;
int16_t x1255 = -1;
int32_t t90 = INT32_MAX;
uint64_t t91 = 13678529274960776LLU;
uint64_t x1301 = 205019753210599LLU;
int16_t x1303 = -1;
uint64_t t93 = 91755846986LLU;
uint8_t x1322 = UINT8_MAX;
static int32_t x1323 = INT32_MIN;
volatile int32_t t95 = -2160;
uint32_t x1345 = 52789561U;
volatile uint32_t t96 = 5U;
int64_t x1349 = INT64_MAX;
static int32_t x1357 = INT32_MAX;


void f0(void) {
	uint16_t x5 = 33U;
	static int16_t x6 = -9761;
	uint8_t x8 = 0U;

	t0 = (x5>>((x6%x7)&x8));

	if (t0 != 33) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = 1966;
	int32_t x10 = INT32_MIN;
	static int64_t x11 = 1LL;
	volatile int32_t x12 = -1;
	static int32_t t1 = 419732;

	t1 = (x9>>((x10%x11)&x12));

	if (t1 != 1966) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x23 = INT64_MIN;
	volatile uint64_t t2 = 1385783000275483356LLU;

	t2 = (x21>>((x22%x23)&x24));

	if (t2 != 196973239955629473LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x33 = INT32_MAX;
	static int32_t x34 = 1;
	volatile int32_t x35 = INT32_MAX;
	static int16_t x36 = 1;
	static volatile int32_t t3 = 190619146;

	t3 = (x33>>((x34%x35)&x36));

	if (t3 != 1073741823) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x41 = UINT64_MAX;
	static uint32_t x43 = 21U;
	volatile uint64_t t4 = 8113747870LLU;

	t4 = (x41>>((x42%x43)&x44));

	if (t4 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int32_t x52 = INT32_MIN;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = (x49>>((x50%x51)&x52));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x57 = 63;
	int8_t x58 = INT8_MAX;
	int8_t x59 = 13;
	volatile uint16_t x60 = 6251U;

	t6 = (x57>>((x58%x59)&x60));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x70 = 1U;
	static volatile int8_t x71 = 56;
	static uint32_t x72 = 0U;
	static uint64_t t7 = 1668937LLU;

	t7 = (x69>>((x70%x71)&x72));

	if (t7 != 2790224LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x81 = 973441836814LLU;
	int8_t x83 = -1;
	int8_t x84 = INT8_MIN;

	t8 = (x81>>((x82%x83)&x84));

	if (t8 != 973441836814LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x89 = 113U;
	static uint32_t x90 = 6U;
	static int8_t x91 = INT8_MAX;
	int32_t t9 = 91;

	t9 = (x89>>((x90%x91)&x92));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x106 = 29U;
	static uint32_t x107 = UINT32_MAX;
	uint64_t x108 = 21615996806486LLU;
	volatile uint32_t t10 = 72493618U;

	t10 = (x105>>((x106%x107)&x108));

	if (t10 != 4095U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x122 = INT64_MAX;
	volatile int16_t x123 = -1;
	int16_t x124 = INT16_MAX;
	static int32_t t11 = 446546;

	t11 = (x121>>((x122%x123)&x124));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x137 = 3093U;
	volatile int32_t x138 = INT32_MAX;
	int32_t x139 = -1;
	uint64_t x140 = 24751657086420674LLU;

	t12 = (x137>>((x138%x139)&x140));

	if (t12 != 3093) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x153 = 199243001U;
	int32_t x154 = INT32_MAX;
	static int8_t x155 = -1;
	static int8_t x156 = -1;
	uint32_t t13 = 610815U;

	t13 = (x153>>((x154%x155)&x156));

	if (t13 != 199243001U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x165 = 4603912471744508818LLU;
	uint16_t x166 = 19993U;
	int16_t x167 = -1;
	int64_t x168 = -235369362723116237LL;
	static volatile uint64_t t14 = 109770413475936LLU;

	t14 = (x165>>((x166%x167)&x168));

	if (t14 != 4603912471744508818LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x193 = 3214223089LLU;
	volatile uint64_t x195 = 824358221705178877LLU;
	uint8_t x196 = 10U;

	t15 = (x193>>((x194%x195)&x196));

	if (t15 != 3214223089LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x205 = 112;
	int16_t x207 = -1;
	int64_t x208 = INT64_MIN;

	t16 = (x205>>((x206%x207)&x208));

	if (t16 != 112) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x214 = 0;
	uint64_t x215 = 6LLU;
	static uint16_t x216 = 2U;
	uint64_t t17 = 126716154LLU;

	t17 = (x213>>((x214%x215)&x216));

	if (t17 != 6LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x221 = INT64_MAX;
	int32_t x222 = INT32_MIN;
	int64_t x223 = 1058644715975276761LL;
	uint16_t x224 = UINT16_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x221>>((x222%x223)&x224));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x241 = 48U;
	uint16_t x242 = UINT16_MAX;
	int16_t x243 = INT16_MAX;
	int64_t x244 = -1LL;
	uint32_t t19 = 768658025U;

	t19 = (x241>>((x242%x243)&x244));

	if (t19 != 24U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x249 = UINT64_MAX;
	uint32_t x250 = UINT32_MAX;
	static int16_t x252 = INT16_MIN;

	t20 = (x249>>((x250%x251)&x252));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x266 = INT64_MAX;
	int32_t x267 = INT32_MAX;

	t21 = (x265>>((x266%x267)&x268));

	if (t21 != 8676) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x285 = UINT8_MAX;
	int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	uint16_t x288 = 2867U;
	volatile int32_t t22 = 14054330;

	t22 = (x285>>((x286%x287)&x288));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x294 = 13U;
	uint8_t x296 = 13U;
	int32_t t23 = 6;

	t23 = (x293>>((x294%x295)&x296));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x298 = 666652995LL;
	uint32_t x299 = 124U;
	int32_t x300 = INT32_MIN;
	uint32_t t24 = 154715U;

	t24 = (x297>>((x298%x299)&x300));

	if (t24 != 129U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x333 = 825753772297416LL;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MIN;
	static uint8_t x336 = 18U;
	volatile int64_t t25 = 5431173297553LL;

	t25 = (x333>>((x334%x335)&x336));

	if (t25 != 3150000657LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x397 = 1999318;
	volatile uint32_t x398 = 1318459U;
	volatile int8_t x399 = 4;
	static int8_t x400 = 1;

	t26 = (x397>>((x398%x399)&x400));

	if (t26 != 999659) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x433 = 267U;
	static int32_t x435 = 1;
	uint16_t x436 = 3U;
	volatile int32_t t27 = 9;

	t27 = (x433>>((x434%x435)&x436));

	if (t27 != 267) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x438 = 1;
	int32_t x439 = INT32_MAX;
	volatile uint64_t x440 = 98678021375806729LLU;
	uint64_t t28 = 64160184089LLU;

	t28 = (x437>>((x438%x439)&x440));

	if (t28 != 959370LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x445 = 6;
	static uint64_t x446 = 355831LLU;
	uint16_t x447 = 5679U;
	static volatile int32_t t29 = 3142077;

	t29 = (x445>>((x446%x447)&x448));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x449 = INT64_MAX;
	int32_t x450 = INT32_MIN;
	int16_t x451 = -4;
	int32_t x452 = INT32_MAX;
	static volatile int64_t t30 = INT64_MAX;

	t30 = (x449>>((x450%x451)&x452));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x473 = INT8_MAX;
	int64_t x474 = 0LL;
	int8_t x476 = INT8_MIN;
	volatile int32_t t31 = -237939;

	t31 = (x473>>((x474%x475)&x476));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x505 = INT8_MAX;
	uint8_t x506 = 3U;
	volatile int8_t x508 = INT8_MIN;
	volatile int32_t t32 = 1;

	t32 = (x505>>((x506%x507)&x508));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x518 = 59U;
	uint32_t x519 = UINT32_MAX;
	uint32_t x520 = UINT32_MAX;
	volatile int64_t t33 = -41952631LL;

	t33 = (x517>>((x518%x519)&x520));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x521 = UINT8_MAX;
	int64_t x522 = -1LL;
	volatile int32_t x523 = INT32_MIN;
	uint16_t x524 = 1U;
	volatile int32_t t34 = 196028025;

	t34 = (x521>>((x522%x523)&x524));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x549 = 3;
	volatile uint32_t x550 = UINT32_MAX;
	int8_t x551 = INT8_MAX;
	uint16_t x552 = 1206U;
	volatile int32_t t35 = 357963;

	t35 = (x549>>((x550%x551)&x552));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x566 = -229230967;
	int32_t x567 = -1;
	uint64_t x568 = UINT64_MAX;
	int32_t t36 = -17;

	t36 = (x565>>((x566%x567)&x568));

	if (t36 != 1249) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x582 = 1;
	static uint8_t x583 = UINT8_MAX;
	int64_t x584 = INT64_MIN;
	volatile int32_t t37 = -13;

	t37 = (x581>>((x582%x583)&x584));

	if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x593 = INT16_MAX;
	uint8_t x594 = 1U;
	static int8_t x595 = INT8_MIN;
	volatile int32_t t38 = -2678241;

	t38 = (x593>>((x594%x595)&x596));

	if (t38 != 16383) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x598 = 52U;
	volatile int16_t x599 = INT16_MIN;
	int16_t x600 = 591;
	static volatile int32_t t39 = 4672;

	t39 = (x597>>((x598%x599)&x600));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x617 = 55LLU;
	volatile int32_t x618 = INT32_MIN;
	int32_t x620 = INT32_MIN;
	uint64_t t40 = 1LLU;

	t40 = (x617>>((x618%x619)&x620));

	if (t40 != 55LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x654 = 10235984141247LLU;
	int64_t x656 = -1LL;
	int32_t t41 = -110;

	t41 = (x653>>((x654%x655)&x656));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x673 = INT64_MAX;
	int32_t x674 = INT32_MIN;
	static uint64_t x676 = UINT64_MAX;
	int64_t t42 = INT64_MAX;

	t42 = (x673>>((x674%x675)&x676));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x677 = 1U;
	static int16_t x679 = INT16_MAX;
	int32_t t43 = 11;

	t43 = (x677>>((x678%x679)&x680));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x686 = INT16_MAX;
	volatile int64_t x687 = INT64_MAX;
	int64_t x688 = INT64_MIN;
	int32_t t44 = 4053830;

	t44 = (x685>>((x686%x687)&x688));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x694 = UINT64_MAX;
	uint8_t x695 = UINT8_MAX;
	int8_t x696 = 0;
	int32_t t45 = -1449130;

	t45 = (x693>>((x694%x695)&x696));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x705 = 1002786;
	static uint16_t x706 = 29U;
	int8_t x707 = 15;
	int32_t t46 = 19;

	t46 = (x705>>((x706%x707)&x708));

	if (t46 != 244) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x721 = 1U;
	int64_t x722 = INT64_MAX;
	int16_t x723 = -1;
	volatile int32_t t47 = 361587119;

	t47 = (x721>>((x722%x723)&x724));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x725 = 17;
	int64_t x727 = -1LL;
	int32_t t48 = -16584;

	t48 = (x725>>((x726%x727)&x728));

	if (t48 != 17) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x741 = 78843U;
	int8_t x743 = INT8_MIN;
	int8_t x744 = 4;
	uint32_t t49 = 442U;

	t49 = (x741>>((x742%x743)&x744));

	if (t49 != 78843U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x749 = 0U;
	uint64_t x751 = UINT64_MAX;
	int8_t x752 = INT8_MAX;

	t50 = (x749>>((x750%x751)&x752));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x781 = UINT16_MAX;
	volatile uint32_t x782 = UINT32_MAX;
	uint64_t x783 = 24014752006LLU;
	int8_t x784 = 1;

	t51 = (x781>>((x782%x783)&x784));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x789 = 15U;
	static volatile int32_t t52 = 0;

	t52 = (x789>>((x790%x791)&x792));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x801 = 2;
	uint16_t x802 = 1383U;
	static int8_t x803 = -1;
	volatile int32_t x804 = INT32_MIN;
	volatile int32_t t53 = 60;

	t53 = (x801>>((x802%x803)&x804));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x806 = 28LLU;
	static volatile int16_t x807 = 4628;
	int64_t x808 = -34117143487423LL;
	int32_t t54 = -251551;

	t54 = (x805>>((x806%x807)&x808));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x818 = -1;
	volatile uint32_t x819 = UINT32_MAX;
	volatile int8_t x820 = -50;
	volatile int32_t t55 = 423207623;

	t55 = (x817>>((x818%x819)&x820));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x821 = 842U;
	static uint16_t x824 = UINT16_MAX;
	volatile uint32_t t56 = 59084904U;

	t56 = (x821>>((x822%x823)&x824));

	if (t56 != 842U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x825 = 2331515LLU;
	uint32_t x827 = UINT32_MAX;
	static volatile int64_t x828 = INT64_MIN;
	volatile uint64_t t57 = 3LLU;

	t57 = (x825>>((x826%x827)&x828));

	if (t57 != 2331515LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x869 = UINT64_MAX;
	int16_t x870 = 28;
	static uint32_t x871 = 17558U;
	uint64_t t58 = 139252LLU;

	t58 = (x869>>((x870%x871)&x872));

	if (t58 != 68719476735LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x877 = 12U;
	static int32_t x878 = INT32_MIN;
	int64_t x879 = -1LL;
	volatile int8_t x880 = -1;

	t59 = (x877>>((x878%x879)&x880));

	if (t59 != 12) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x885 = INT32_MAX;
	static uint16_t x886 = 3U;
	int16_t x887 = 310;
	volatile int8_t x888 = INT8_MAX;
	volatile int32_t t60 = 970469328;

	t60 = (x885>>((x886%x887)&x888));

	if (t60 != 268435455) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x913 = UINT8_MAX;
	int8_t x914 = INT8_MIN;
	uint8_t x915 = 2U;
	int32_t t61 = 1540;

	t61 = (x913>>((x914%x915)&x916));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x917 = UINT64_MAX;
	int32_t x918 = -1;
	int16_t x919 = -1;
	uint64_t x920 = UINT64_MAX;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (x917>>((x918%x919)&x920));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x937 = INT64_MAX;
	uint64_t x938 = UINT64_MAX;
	int16_t x939 = INT16_MAX;
	uint16_t x940 = 21U;
	volatile int64_t t63 = 4954879893145LL;

	t63 = (x937>>((x938%x939)&x940));

	if (t63 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x942 = -1;
	static int32_t x943 = -1;
	int64_t x944 = -9328928827665LL;
	uint32_t t64 = 2858743U;

	t64 = (x941>>((x942%x943)&x944));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x961 = 165U;
	int16_t x963 = 61;
	uint8_t x964 = UINT8_MAX;
	static volatile uint32_t t65 = 7579U;

	t65 = (x961>>((x962%x963)&x964));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x973 = 22643531LLU;
	static int8_t x974 = 3;
	int64_t x975 = INT64_MIN;
	uint64_t t66 = 3610LLU;

	t66 = (x973>>((x974%x975)&x976));

	if (t66 != 2830441LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x987 = 31U;

	t67 = (x985>>((x986%x987)&x988));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x1005 = INT8_MAX;
	static uint16_t x1006 = 0U;
	int64_t x1007 = 308503851LL;
	static int8_t x1008 = INT8_MIN;
	int32_t t68 = 4380972;

	t68 = (x1005>>((x1006%x1007)&x1008));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1021 = 2;
	int32_t x1022 = -3;
	static uint32_t x1024 = 34149U;
	static int32_t t69 = -25;

	t69 = (x1021>>((x1022%x1023)&x1024));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1025 = INT8_MAX;
	volatile int64_t x1027 = -1LL;
	int32_t x1028 = INT32_MIN;
	volatile int32_t t70 = -7625099;

	t70 = (x1025>>((x1026%x1027)&x1028));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1037 = UINT32_MAX;
	static int8_t x1038 = 0;
	volatile uint32_t x1039 = 31U;
	static int8_t x1040 = -1;
	uint32_t t71 = UINT32_MAX;

	t71 = (x1037>>((x1038%x1039)&x1040));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x1049 = UINT16_MAX;
	uint64_t x1050 = 1085LLU;
	int64_t x1051 = INT64_MIN;
	static int16_t x1052 = INT16_MIN;

	t72 = (x1049>>((x1050%x1051)&x1052));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x1053 = 1734LL;
	int64_t x1055 = INT64_MIN;
	int64_t t73 = -100576LL;

	t73 = (x1053>>((x1054%x1055)&x1056));

	if (t73 != 1734LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1069 = 1LLU;
	int64_t x1071 = -31160874LL;
	static uint8_t x1072 = 5U;
	volatile uint64_t t74 = 1613LLU;

	t74 = (x1069>>((x1070%x1071)&x1072));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1081 = 1;
	uint32_t x1082 = 2U;
	static uint8_t x1083 = UINT8_MAX;
	volatile int32_t t75 = 69;

	t75 = (x1081>>((x1082%x1083)&x1084));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x1093 = 364148801300LLU;
	int32_t x1094 = -1;
	int32_t x1095 = -1;
	int8_t x1096 = INT8_MIN;
	volatile uint64_t t76 = 24183042LLU;

	t76 = (x1093>>((x1094%x1095)&x1096));

	if (t76 != 364148801300LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1097 = UINT16_MAX;
	int16_t x1098 = 641;
	int16_t x1100 = -1;
	int32_t t77 = 8932734;

	t77 = (x1097>>((x1098%x1099)&x1100));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x1101 = 124U;
	static uint16_t x1103 = UINT16_MAX;
	int8_t x1104 = 6;

	t78 = (x1101>>((x1102%x1103)&x1104));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1137 = 119974438210399689LLU;
	int8_t x1139 = -1;

	t79 = (x1137>>((x1138%x1139)&x1140));

	if (t79 != 119974438210399689LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1141 = 350;
	int8_t x1142 = 2;
	volatile uint16_t x1144 = UINT16_MAX;
	volatile int32_t t80 = -1;

	t80 = (x1141>>((x1142%x1143)&x1144));

	if (t80 != 87) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1149 = 126LLU;
	uint16_t x1150 = 844U;
	int64_t x1151 = INT64_MAX;
	int8_t x1152 = 56;

	t81 = (x1149>>((x1150%x1151)&x1152));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1165 = 1U;
	static int16_t x1166 = -15;
	static int16_t x1167 = 1;
	int8_t x1168 = INT8_MIN;
	uint32_t t82 = 52339U;

	t82 = (x1165>>((x1166%x1167)&x1168));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x1209 = INT8_MAX;
	int32_t x1210 = 104846823;
	static uint8_t x1211 = 1U;
	static uint16_t x1212 = 3U;
	volatile int32_t t83 = -1;

	t83 = (x1209>>((x1210%x1211)&x1212));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x1213 = INT32_MAX;
	int32_t x1214 = INT32_MIN;
	int8_t x1215 = INT8_MIN;
	static int16_t x1216 = -228;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x1213>>((x1214%x1215)&x1216));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1233 = 6;
	volatile uint32_t x1234 = UINT32_MAX;
	static uint64_t x1235 = 4LLU;
	int32_t x1236 = INT32_MIN;
	volatile int32_t t85 = -135123868;

	t85 = (x1233>>((x1234%x1235)&x1236));

	if (t85 != 6) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x1237 = UINT16_MAX;
	uint64_t x1238 = UINT64_MAX;
	int16_t x1239 = INT16_MAX;
	uint8_t x1240 = UINT8_MAX;
	volatile int32_t t86 = 3165051;

	t86 = (x1237>>((x1238%x1239)&x1240));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x1242 = 9U;
	static int64_t x1243 = 8072LL;
	int8_t x1244 = INT8_MAX;

	t87 = (x1241>>((x1242%x1243)&x1244));

	if (t87 != 29397985LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1249 = INT64_MAX;
	int32_t x1250 = INT32_MIN;
	static int32_t x1251 = INT32_MIN;
	volatile int64_t x1252 = INT64_MAX;
	int64_t t88 = INT64_MAX;

	t88 = (x1249>>((x1250%x1251)&x1252));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x1253 = 70413770;
	static int64_t x1254 = -1LL;
	uint16_t x1256 = UINT16_MAX;
	int32_t t89 = -163565867;

	t89 = (x1253>>((x1254%x1255)&x1256));

	if (t89 != 70413770) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1265 = INT32_MAX;
	uint16_t x1266 = 18847U;
	static uint64_t x1267 = 52LLU;
	volatile int16_t x1268 = INT16_MIN;

	t90 = (x1265>>((x1266%x1267)&x1268));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x1273 = 546864LLU;
	int32_t x1274 = INT32_MIN;
	int64_t x1275 = -7146740011482LL;
	uint16_t x1276 = UINT16_MAX;

	t91 = (x1273>>((x1274%x1275)&x1276));

	if (t91 != 546864LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1281 = 3U;
	int8_t x1282 = 28;
	int8_t x1283 = INT8_MIN;
	uint64_t x1284 = 104102843520606462LLU;
	volatile uint32_t t92 = 95597U;

	t92 = (x1281>>((x1282%x1283)&x1284));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x1302 = UINT16_MAX;
	int64_t x1304 = -90714240427010LL;

	t93 = (x1301>>((x1302%x1303)&x1304));

	if (t93 != 205019753210599LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x1317 = 794;
	int32_t x1318 = 13;
	int64_t x1319 = -1LL;
	int64_t x1320 = -155893610933423837LL;
	int32_t t94 = 2216531;

	t94 = (x1317>>((x1318%x1319)&x1320));

	if (t94 != 794) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x1321 = 7;
	int8_t x1324 = 1;

	t95 = (x1321>>((x1322%x1323)&x1324));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1346 = 0LL;
	uint16_t x1347 = 8U;
	int64_t x1348 = INT64_MIN;

	t96 = (x1345>>((x1346%x1347)&x1348));

	if (t96 != 52789561U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1350 = -1LL;
	int16_t x1351 = -1;
	uint16_t x1352 = 205U;
	static volatile int64_t t97 = INT64_MAX;

	t97 = (x1349>>((x1350%x1351)&x1352));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1358 = INT64_MAX;
	volatile int8_t x1359 = 56;
	uint32_t x1360 = 2U;
	static int32_t t98 = 229773;

	t98 = (x1357>>((x1358%x1359)&x1360));

	if (t98 != 536870911) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x1365 = INT32_MAX;
	static int16_t x1366 = INT16_MAX;
	uint8_t x1367 = UINT8_MAX;
	uint16_t x1368 = 30U;
	int32_t t99 = -132531014;

	t99 = (x1365>>((x1366%x1367)&x1368));

	if (t99 != 1) { NG(); } else { ; }
	
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

