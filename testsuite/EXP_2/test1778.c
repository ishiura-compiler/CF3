#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x38 = 0;
int32_t t2 = -2;
uint16_t x59 = 0U;
static uint64_t x64 = UINT64_MAX;
static uint32_t x69 = 781700152U;
volatile int32_t t7 = 4826754;
static volatile uint64_t x110 = 42245LLU;
static volatile uint64_t x123 = UINT64_MAX;
int32_t t10 = -298273039;
volatile int64_t x177 = 5274181100912458LL;
int32_t t12 = 20804463;
int8_t x202 = INT8_MIN;
int64_t x258 = 8LL;
int64_t x260 = 325196829537026429LL;
int16_t x269 = INT16_MAX;
static uint64_t x271 = 4117535480LLU;
uint16_t x326 = 28U;
int32_t x327 = INT32_MIN;
uint16_t x329 = 175U;
volatile uint8_t x330 = 0U;
int8_t x332 = INT8_MIN;
int32_t t20 = -52;
static uint8_t x392 = UINT8_MAX;
volatile int32_t t22 = 380526;
volatile int32_t x401 = 937;
volatile int32_t t23 = 156808;
uint16_t x422 = 1329U;
static int32_t t24 = 446189;
uint8_t x454 = 1U;
int8_t x533 = 16;
uint16_t x542 = 0U;
static uint64_t x543 = 7762171938056967LLU;
static uint16_t x544 = 121U;
volatile int32_t t30 = 221;
int16_t x564 = INT16_MIN;
static uint8_t x577 = 1U;
volatile int32_t t32 = -6470;
volatile int32_t t33 = -15519;
uint8_t x617 = 12U;
static int16_t x618 = INT16_MIN;
volatile int32_t t36 = 7;
volatile int16_t x645 = INT16_MAX;
static int8_t x647 = INT8_MIN;
int8_t x659 = INT8_MAX;
static volatile int32_t t38 = 123;
volatile uint64_t x669 = UINT64_MAX;
volatile uint16_t x693 = 814U;
uint32_t x729 = 684789400U;
static volatile uint16_t x731 = 1U;
int8_t x732 = INT8_MIN;
int32_t t42 = 64677535;
static int32_t x869 = 493880;
volatile int32_t t47 = 260428555;
static volatile int32_t x971 = 0;
volatile uint64_t x973 = 3761988LLU;
uint32_t x975 = 4U;
uint32_t x987 = 116883U;
static uint16_t x1038 = 0U;
volatile uint16_t x1039 = UINT16_MAX;
int16_t x1069 = INT16_MAX;
int64_t x1078 = INT64_MIN;
uint64_t x1079 = 316484LLU;
uint8_t x1081 = 1U;
volatile uint32_t x1117 = UINT32_MAX;
int32_t t59 = -40558;
uint16_t x1175 = UINT16_MAX;
int32_t t61 = 5822670;
int16_t x1209 = INT16_MAX;
static uint8_t x1210 = 2U;
uint64_t x1211 = UINT64_MAX;
int16_t x1233 = INT16_MAX;
uint64_t x1234 = 1LLU;
uint32_t x1235 = 5102917U;
int32_t x1236 = INT32_MIN;
int8_t x1295 = INT8_MAX;
volatile int8_t x1313 = INT8_MAX;
uint16_t x1315 = UINT16_MAX;
volatile int32_t t67 = -216;
static int8_t x1357 = 0;
static int64_t x1358 = INT64_MIN;
int64_t x1360 = -1LL;
volatile uint32_t x1373 = UINT32_MAX;
int32_t t70 = -32912;
uint64_t x1385 = 31262871847LLU;
int8_t x1396 = -46;
volatile int32_t t73 = 797;
int32_t t75 = -1077924;
static uint64_t x1477 = 65001504259414LLU;
uint64_t x1489 = 102LLU;
uint8_t x1491 = 123U;
uint32_t x1499 = 266242U;
static int64_t x1520 = -1LL;
static volatile int32_t x1527 = 177;
int8_t x1529 = 42;
static volatile int32_t t81 = 4;
volatile int32_t t82 = -1;
int16_t x1672 = INT16_MIN;
int64_t x1732 = INT64_MAX;
volatile uint64_t x1790 = 5695322LLU;
int32_t x1830 = INT32_MIN;
uint8_t x1831 = UINT8_MAX;
int32_t t91 = -129;
static int16_t x1920 = INT16_MAX;
int32_t t92 = 14182984;
uint8_t x1954 = 5U;
volatile int64_t x1959 = INT64_MAX;
volatile int32_t t97 = -31240;
static int32_t t99 = 2305077;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile int8_t x2 = 8;
	int32_t x3 = INT32_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 1;

	t0 = ((x1>>(x2&x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = UINT32_MAX;
	static uint8_t x10 = UINT8_MAX;
	static uint16_t x11 = 29U;
	int16_t x12 = INT16_MIN;
	int32_t t1 = 79808;

	t1 = ((x9>>(x10&x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x37 = INT64_MAX;
	int32_t x39 = INT32_MIN;
	int32_t x40 = -282380921;

	t2 = ((x37>>(x38&x39))<=x40);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x57 = 19;
	uint32_t x58 = UINT32_MAX;
	int64_t x60 = INT64_MIN;
	int32_t t3 = 1112;

	t3 = ((x57>>(x58&x59))<=x60);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x61 = 4;
	uint8_t x62 = 31U;
	int16_t x63 = -28;
	volatile int32_t t4 = -3990546;

	t4 = ((x61>>(x62&x63))<=x64);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x65 = 2U;
	static volatile int8_t x66 = 0;
	int8_t x67 = INT8_MIN;
	volatile int8_t x68 = INT8_MIN;
	int32_t t5 = -3316;

	t5 = ((x65>>(x66&x67))<=x68);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x70 = INT64_MIN;
	uint8_t x71 = 53U;
	int32_t x72 = -1;
	static volatile int32_t t6 = 8104803;

	t6 = ((x69>>(x70&x71))<=x72);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x97 = 15419LL;
	uint64_t x98 = 25LLU;
	int64_t x99 = -17106626LL;
	int16_t x100 = 345;

	t7 = ((x97>>(x98&x99))<=x100);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int8_t x102 = -1;
	int8_t x103 = 0;
	int16_t x104 = INT16_MIN;
	volatile int32_t t8 = -14117321;

	t8 = ((x101>>(x102&x103))<=x104);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x109 = 11081031U;
	volatile int64_t x111 = INT64_MIN;
	uint16_t x112 = 13676U;
	int32_t t9 = -1;

	t9 = ((x109>>(x110&x111))<=x112);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x121 = INT64_MAX;
	uint8_t x122 = 1U;
	uint16_t x124 = UINT16_MAX;

	t10 = ((x121>>(x122&x123))<=x124);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x145 = 9;
	int32_t x146 = INT32_MIN;
	volatile uint16_t x147 = UINT16_MAX;
	int16_t x148 = 25;
	volatile int32_t t11 = -126648421;

	t11 = ((x145>>(x146&x147))<=x148);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x178 = INT16_MAX;
	volatile uint16_t x179 = 0U;
	static int32_t x180 = INT32_MIN;

	t12 = ((x177>>(x178&x179))<=x180);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x193 = 48U;
	int64_t x194 = INT64_MIN;
	int64_t x195 = INT64_MAX;
	uint16_t x196 = 85U;
	static int32_t t13 = 72;

	t13 = ((x193>>(x194&x195))<=x196);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x203 = INT8_MAX;
	int16_t x204 = -109;
	volatile int32_t t14 = -55769408;

	t14 = ((x201>>(x202&x203))<=x204);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x205 = UINT8_MAX;
	uint8_t x206 = 2U;
	volatile int64_t x207 = INT64_MIN;
	int16_t x208 = -14;
	volatile int32_t t15 = -175364;

	t15 = ((x205>>(x206&x207))<=x208);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x217 = 1448U;
	volatile int16_t x218 = 0;
	int16_t x219 = -1;
	int8_t x220 = INT8_MIN;
	volatile int32_t t16 = 2;

	t16 = ((x217>>(x218&x219))<=x220);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x257 = 23LLU;
	int64_t x259 = INT64_MIN;
	int32_t t17 = 844448;

	t17 = ((x257>>(x258&x259))<=x260);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x270 = 0;
	static int64_t x272 = 171724LL;
	int32_t t18 = 560;

	t18 = ((x269>>(x270&x271))<=x272);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x325 = 15064044727LL;
	static volatile int64_t x328 = INT64_MAX;
	volatile int32_t t19 = 3;

	t19 = ((x325>>(x326&x327))<=x328);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x331 = UINT64_MAX;

	t20 = ((x329>>(x330&x331))<=x332);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x385 = INT16_MAX;
	int16_t x386 = -9164;
	uint8_t x387 = 1U;
	int64_t x388 = INT64_MIN;
	volatile int32_t t21 = -122779751;

	t21 = ((x385>>(x386&x387))<=x388);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x389 = 4281;
	static int32_t x390 = INT32_MIN;
	uint8_t x391 = 11U;

	t22 = ((x389>>(x390&x391))<=x392);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x402 = 4359U;
	uint8_t x403 = 0U;
	uint64_t x404 = 235747LLU;

	t23 = ((x401>>(x402&x403))<=x404);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x421 = UINT8_MAX;
	uint16_t x423 = 0U;
	int32_t x424 = INT32_MIN;

	t24 = ((x421>>(x422&x423))<=x424);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x445 = INT8_MAX;
	uint16_t x446 = 11300U;
	int64_t x447 = 1LL;
	static uint8_t x448 = 14U;
	static int32_t t25 = 3855;

	t25 = ((x445>>(x446&x447))<=x448);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x453 = 278U;
	uint8_t x455 = 34U;
	int32_t x456 = 1;
	int32_t t26 = -1317061;

	t26 = ((x453>>(x454&x455))<=x456);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x501 = INT64_MAX;
	static uint32_t x502 = 31U;
	static int32_t x503 = -1501404;
	int64_t x504 = -1LL;
	int32_t t27 = 2;

	t27 = ((x501>>(x502&x503))<=x504);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x525 = 1;
	uint16_t x526 = 1833U;
	volatile int16_t x527 = INT16_MIN;
	static uint32_t x528 = 1500424U;
	volatile int32_t t28 = -34;

	t28 = ((x525>>(x526&x527))<=x528);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x534 = 18179U;
	int32_t x535 = INT32_MIN;
	int16_t x536 = INT16_MIN;
	static int32_t t29 = 3;

	t29 = ((x533>>(x534&x535))<=x536);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x541 = 693U;

	t30 = ((x541>>(x542&x543))<=x544);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x561 = 7U;
	int64_t x562 = INT64_MAX;
	int8_t x563 = 12;
	volatile int32_t t31 = -16072374;

	t31 = ((x561>>(x562&x563))<=x564);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x578 = INT16_MIN;
	int8_t x579 = 1;
	int64_t x580 = INT64_MAX;

	t32 = ((x577>>(x578&x579))<=x580);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x593 = UINT32_MAX;
	volatile int16_t x594 = 5;
	int8_t x595 = INT8_MAX;
	int8_t x596 = INT8_MAX;

	t33 = ((x593>>(x594&x595))<=x596);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x597 = 7;
	static uint8_t x598 = 62U;
	int16_t x599 = INT16_MIN;
	int32_t x600 = INT32_MIN;
	int32_t t34 = -718774349;

	t34 = ((x597>>(x598&x599))<=x600);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x619 = 829U;
	static uint16_t x620 = 411U;
	volatile int32_t t35 = -13981;

	t35 = ((x617>>(x618&x619))<=x620);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x625 = UINT8_MAX;
	uint64_t x626 = 642695LLU;
	static int64_t x627 = INT64_MIN;
	static int64_t x628 = 161089LL;

	t36 = ((x625>>(x626&x627))<=x628);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x646 = 20;
	volatile int16_t x648 = -1;
	int32_t t37 = 1;

	t37 = ((x645>>(x646&x647))<=x648);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x657 = 7;
	static int16_t x658 = INT16_MIN;
	uint32_t x660 = 2881U;

	t38 = ((x657>>(x658&x659))<=x660);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x670 = 27;
	int16_t x671 = INT16_MIN;
	int64_t x672 = INT64_MIN;
	static volatile int32_t t39 = -9;

	t39 = ((x669>>(x670&x671))<=x672);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x694 = INT32_MIN;
	uint64_t x695 = 27197LLU;
	volatile int8_t x696 = -1;
	static volatile int32_t t40 = 59761;

	t40 = ((x693>>(x694&x695))<=x696);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x697 = 329U;
	static uint32_t x698 = 865534U;
	volatile uint32_t x699 = 1U;
	uint32_t x700 = UINT32_MAX;
	volatile int32_t t41 = -3901;

	t41 = ((x697>>(x698&x699))<=x700);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x730 = 44LL;

	t42 = ((x729>>(x730&x731))<=x732);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x773 = INT8_MAX;
	uint16_t x774 = 505U;
	int64_t x775 = INT64_MIN;
	uint64_t x776 = 14721722595431LLU;
	volatile int32_t t43 = 356344;

	t43 = ((x773>>(x774&x775))<=x776);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x857 = 3U;
	int8_t x858 = 16;
	int16_t x859 = INT16_MIN;
	int32_t x860 = INT32_MAX;
	volatile int32_t t44 = 422;

	t44 = ((x857>>(x858&x859))<=x860);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x870 = -13053;
	static uint16_t x871 = 9U;
	volatile int16_t x872 = -1;
	int32_t t45 = -790;

	t45 = ((x869>>(x870&x871))<=x872);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x873 = 77940;
	int8_t x874 = INT8_MAX;
	volatile uint8_t x875 = 4U;
	int32_t x876 = INT32_MIN;
	volatile int32_t t46 = -29;

	t46 = ((x873>>(x874&x875))<=x876);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x885 = 230541;
	uint32_t x886 = 183U;
	int16_t x887 = INT16_MIN;
	int64_t x888 = INT64_MIN;

	t47 = ((x885>>(x886&x887))<=x888);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x901 = INT8_MAX;
	int64_t x902 = 2883264LL;
	volatile int32_t x903 = INT32_MIN;
	uint8_t x904 = UINT8_MAX;
	volatile int32_t t48 = -48591;

	t48 = ((x901>>(x902&x903))<=x904);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x937 = 20789U;
	uint8_t x938 = UINT8_MAX;
	int64_t x939 = INT64_MIN;
	uint64_t x940 = UINT64_MAX;
	volatile int32_t t49 = 20334946;

	t49 = ((x937>>(x938&x939))<=x940);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x969 = 7362;
	int8_t x970 = -1;
	volatile int8_t x972 = INT8_MIN;
	int32_t t50 = 9752727;

	t50 = ((x969>>(x970&x971))<=x972);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x974 = INT32_MAX;
	volatile int8_t x976 = 1;
	int32_t t51 = -13213006;

	t51 = ((x973>>(x974&x975))<=x976);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x985 = 234700991042LLU;
	static int8_t x986 = INT8_MAX;
	int16_t x988 = INT16_MIN;
	static int32_t t52 = 13768821;

	t52 = ((x985>>(x986&x987))<=x988);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1025 = UINT32_MAX;
	static int32_t x1026 = INT32_MIN;
	static uint16_t x1027 = 7687U;
	int32_t x1028 = -1;
	static int32_t t53 = -10546;

	t53 = ((x1025>>(x1026&x1027))<=x1028);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1037 = UINT64_MAX;
	int64_t x1040 = INT64_MAX;
	volatile int32_t t54 = -13929002;

	t54 = ((x1037>>(x1038&x1039))<=x1040);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x1070 = 3U;
	static int64_t x1071 = -31976812256202LL;
	int32_t x1072 = -1;
	int32_t t55 = 50766;

	t55 = ((x1069>>(x1070&x1071))<=x1072);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1077 = 1107228949682494003LLU;
	volatile int8_t x1080 = 0;
	int32_t t56 = 128986;

	t56 = ((x1077>>(x1078&x1079))<=x1080);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x1082 = INT64_MIN;
	uint8_t x1083 = 8U;
	uint16_t x1084 = UINT16_MAX;
	volatile int32_t t57 = 3685;

	t57 = ((x1081>>(x1082&x1083))<=x1084);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1118 = UINT16_MAX;
	static int8_t x1119 = 19;
	static int16_t x1120 = INT16_MIN;
	volatile int32_t t58 = -130993793;

	t58 = ((x1117>>(x1118&x1119))<=x1120);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1129 = 0U;
	int64_t x1130 = INT64_MIN;
	static uint8_t x1131 = 40U;
	int32_t x1132 = 275567647;

	t59 = ((x1129>>(x1130&x1131))<=x1132);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1173 = 414U;
	uint64_t x1174 = 14LLU;
	int16_t x1176 = INT16_MIN;
	int32_t t60 = 0;

	t60 = ((x1173>>(x1174&x1175))<=x1176);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x1201 = 2U;
	int32_t x1202 = 1;
	uint8_t x1203 = 42U;
	int64_t x1204 = -202LL;

	t61 = ((x1201>>(x1202&x1203))<=x1204);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x1212 = 8;
	volatile int32_t t62 = 0;

	t62 = ((x1209>>(x1210&x1211))<=x1212);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1213 = INT32_MAX;
	uint8_t x1214 = 51U;
	static int16_t x1215 = INT16_MIN;
	volatile uint32_t x1216 = 498227582U;
	int32_t t63 = 2;

	t63 = ((x1213>>(x1214&x1215))<=x1216);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t t64 = -250;

	t64 = ((x1233>>(x1234&x1235))<=x1236);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1257 = 3478U;
	int64_t x1258 = 43564410LL;
	volatile uint32_t x1259 = 0U;
	static int8_t x1260 = -1;
	int32_t t65 = 31819221;

	t65 = ((x1257>>(x1258&x1259))<=x1260);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x1293 = 23U;
	static int8_t x1294 = 26;
	volatile int32_t x1296 = 317264;
	volatile int32_t t66 = 204629;

	t66 = ((x1293>>(x1294&x1295))<=x1296);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1314 = INT32_MIN;
	uint64_t x1316 = 1086962LLU;

	t67 = ((x1313>>(x1314&x1315))<=x1316);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1325 = INT16_MAX;
	int8_t x1326 = 30;
	int32_t x1327 = INT32_MIN;
	volatile uint64_t x1328 = 7104LLU;
	volatile int32_t t68 = -38053;

	t68 = ((x1325>>(x1326&x1327))<=x1328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1359 = 62U;
	int32_t t69 = 1173;

	t69 = ((x1357>>(x1358&x1359))<=x1360);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1374 = -1;
	int16_t x1375 = 12;
	int16_t x1376 = INT16_MAX;

	t70 = ((x1373>>(x1374&x1375))<=x1376);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1386 = 3U;
	int8_t x1387 = INT8_MIN;
	int8_t x1388 = -1;
	int32_t t71 = 933582;

	t71 = ((x1385>>(x1386&x1387))<=x1388);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1393 = UINT64_MAX;
	int8_t x1394 = 0;
	volatile int64_t x1395 = -5824LL;
	static int32_t t72 = 19963263;

	t72 = ((x1393>>(x1394&x1395))<=x1396);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x1409 = 284U;
	volatile int16_t x1410 = 114;
	uint8_t x1411 = 1U;
	int8_t x1412 = INT8_MIN;

	t73 = ((x1409>>(x1410&x1411))<=x1412);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1441 = UINT16_MAX;
	uint16_t x1442 = UINT16_MAX;
	int32_t x1443 = INT32_MIN;
	int32_t x1444 = INT32_MIN;
	int32_t t74 = -1519384;

	t74 = ((x1441>>(x1442&x1443))<=x1444);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x1469 = INT8_MAX;
	volatile int32_t x1470 = INT32_MAX;
	static volatile uint8_t x1471 = 0U;
	int8_t x1472 = -6;

	t75 = ((x1469>>(x1470&x1471))<=x1472);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x1478 = 17LL;
	int64_t x1479 = -1LL;
	static uint8_t x1480 = 3U;
	int32_t t76 = 168683147;

	t76 = ((x1477>>(x1478&x1479))<=x1480);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1490 = 2U;
	static uint64_t x1492 = 40824597LLU;
	volatile int32_t t77 = -87;

	t77 = ((x1489>>(x1490&x1491))<=x1492);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x1497 = 1;
	uint8_t x1498 = 41U;
	int8_t x1500 = 1;
	int32_t t78 = -11459;

	t78 = ((x1497>>(x1498&x1499))<=x1500);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x1517 = 126U;
	volatile int64_t x1518 = 1LL;
	uint32_t x1519 = UINT32_MAX;
	int32_t t79 = -25197;

	t79 = ((x1517>>(x1518&x1519))<=x1520);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1525 = 2964U;
	int32_t x1526 = INT32_MIN;
	uint32_t x1528 = 1043857002U;
	volatile int32_t t80 = -774291109;

	t80 = ((x1525>>(x1526&x1527))<=x1528);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1530 = INT16_MAX;
	int64_t x1531 = INT64_MIN;
	static int64_t x1532 = INT64_MIN;

	t81 = ((x1529>>(x1530&x1531))<=x1532);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x1553 = INT64_MAX;
	int32_t x1554 = 12;
	int32_t x1555 = -1;
	volatile uint32_t x1556 = 3832473U;

	t82 = ((x1553>>(x1554&x1555))<=x1556);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1561 = 18901381441LLU;
	volatile int64_t x1562 = INT64_MIN;
	uint8_t x1563 = 21U;
	volatile int64_t x1564 = INT64_MIN;
	int32_t t83 = 1;

	t83 = ((x1561>>(x1562&x1563))<=x1564);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x1661 = 4U;
	static volatile int8_t x1662 = INT8_MIN;
	static uint8_t x1663 = 126U;
	uint32_t x1664 = 882502180U;
	volatile int32_t t84 = 20835025;

	t84 = ((x1661>>(x1662&x1663))<=x1664);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1669 = 7437034998715906LLU;
	int64_t x1670 = INT64_MAX;
	int64_t x1671 = INT64_MIN;
	static volatile int32_t t85 = 97389;

	t85 = ((x1669>>(x1670&x1671))<=x1672);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1697 = 2028;
	int64_t x1698 = INT64_MIN;
	int32_t x1699 = INT32_MAX;
	static int16_t x1700 = -1;
	int32_t t86 = -175582494;

	t86 = ((x1697>>(x1698&x1699))<=x1700);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x1729 = UINT64_MAX;
	int8_t x1730 = 12;
	volatile uint8_t x1731 = 94U;
	int32_t t87 = 5088155;

	t87 = ((x1729>>(x1730&x1731))<=x1732);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x1733 = 17U;
	volatile int64_t x1734 = 19777LL;
	uint8_t x1735 = 4U;
	static volatile int32_t x1736 = INT32_MIN;
	volatile int32_t t88 = 32640;

	t88 = ((x1733>>(x1734&x1735))<=x1736);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1789 = UINT8_MAX;
	int64_t x1791 = INT64_MIN;
	static volatile uint32_t x1792 = 18U;
	int32_t t89 = 7;

	t89 = ((x1789>>(x1790&x1791))<=x1792);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1805 = UINT64_MAX;
	uint16_t x1806 = 2U;
	uint16_t x1807 = 2U;
	int32_t x1808 = INT32_MAX;
	volatile int32_t t90 = -12940691;

	t90 = ((x1805>>(x1806&x1807))<=x1808);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1829 = INT32_MAX;
	volatile int64_t x1832 = INT64_MAX;

	t91 = ((x1829>>(x1830&x1831))<=x1832);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1917 = UINT32_MAX;
	static volatile uint64_t x1918 = 4500339151759032LLU;
	static uint16_t x1919 = 1U;

	t92 = ((x1917>>(x1918&x1919))<=x1920);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x1953 = 6LL;
	uint8_t x1955 = UINT8_MAX;
	uint64_t x1956 = UINT64_MAX;
	int32_t t93 = -1961;

	t93 = ((x1953>>(x1954&x1955))<=x1956);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1957 = INT32_MAX;
	volatile int64_t x1958 = INT64_MIN;
	static int16_t x1960 = INT16_MIN;
	volatile int32_t t94 = -80932387;

	t94 = ((x1957>>(x1958&x1959))<=x1960);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x1965 = INT8_MAX;
	int16_t x1966 = INT16_MAX;
	int32_t x1967 = INT32_MIN;
	static volatile uint8_t x1968 = 13U;
	static int32_t t95 = 1007196;

	t95 = ((x1965>>(x1966&x1967))<=x1968);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x1985 = INT64_MAX;
	uint16_t x1986 = 2U;
	volatile int16_t x1987 = 0;
	static int32_t x1988 = -1;
	static volatile int32_t t96 = 119121;

	t96 = ((x1985>>(x1986&x1987))<=x1988);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2041 = INT16_MAX;
	static uint8_t x2042 = 15U;
	int8_t x2043 = INT8_MIN;
	int8_t x2044 = INT8_MIN;

	t97 = ((x2041>>(x2042&x2043))<=x2044);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x2069 = INT64_MAX;
	int8_t x2070 = 0;
	uint64_t x2071 = 54740LLU;
	uint64_t x2072 = 10814LLU;
	int32_t t98 = 16;

	t98 = ((x2069>>(x2070&x2071))<=x2072);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2073 = 40834251121806LLU;
	uint32_t x2074 = 0U;
	int32_t x2075 = INT32_MAX;
	int32_t x2076 = INT32_MIN;

	t99 = ((x2073>>(x2074&x2075))<=x2076);

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

