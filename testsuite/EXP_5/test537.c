#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x11 = -1918;
int8_t x21 = INT8_MIN;
int8_t x24 = INT8_MIN;
volatile int32_t x65 = 48;
static volatile int64_t x69 = INT64_MAX;
int64_t x78 = INT64_MAX;
uint16_t x105 = UINT16_MAX;
uint64_t t9 = 30483236LLU;
static int32_t x114 = -24737081;
int16_t x115 = INT16_MAX;
volatile int64_t x116 = -1LL;
int64_t t11 = -26058244558LL;
uint32_t x153 = 8570252U;
int8_t x155 = INT8_MIN;
volatile uint32_t t14 = 218769U;
volatile int64_t x203 = 181LL;
volatile int64_t t18 = 29791791306523111LL;
volatile uint8_t x205 = UINT8_MAX;
uint32_t x233 = 131416194U;
uint32_t x240 = 141U;
static volatile int64_t x242 = 11419952LL;
int64_t x285 = INT64_MAX;
static int8_t x293 = INT8_MIN;
static uint8_t x303 = 49U;
int16_t x304 = -1;
uint16_t x305 = 4707U;
static int32_t x307 = 4903384;
static uint8_t x312 = 1U;
volatile uint64_t x329 = UINT64_MAX;
volatile uint32_t t35 = 916U;
volatile uint8_t x389 = 28U;
uint64_t x390 = 334041714843LLU;
int16_t x393 = -1;
volatile int64_t x426 = 61396390647038764LL;
uint64_t t41 = 1504738LLU;
int16_t x449 = INT16_MAX;
static int16_t x457 = -50;
int64_t x477 = -1LL;
int64_t t45 = -1852521786LL;
static int32_t x501 = 425994;
uint64_t x502 = UINT64_MAX;
static int16_t x504 = INT16_MIN;
int16_t x516 = INT16_MIN;
int64_t x525 = INT64_MAX;
int8_t x528 = INT8_MIN;
static volatile uint32_t x534 = 16615113U;
volatile int8_t x541 = INT8_MIN;
volatile uint64_t t56 = 15138193775LLU;
volatile int32_t t57 = -537066884;
uint64_t x559 = 8355253549LLU;
volatile uint64_t t58 = 1LLU;
int8_t x579 = INT8_MIN;
static volatile uint32_t t60 = 144205177U;
static volatile int32_t t61 = -1;
uint8_t x591 = 60U;
volatile uint8_t x592 = 3U;
uint32_t x604 = 466U;
static int8_t x605 = INT8_MIN;
int8_t x608 = INT8_MIN;
int64_t x610 = INT64_MIN;
int16_t x614 = -3329;
static int64_t t66 = 5771496091LL;
int64_t x630 = -7535LL;
int8_t x631 = INT8_MIN;
static uint64_t x642 = UINT64_MAX;
static volatile int64_t x675 = INT64_MIN;
int32_t x680 = -1;
static volatile uint32_t t71 = 3320490U;
int16_t x723 = 1982;
static volatile uint64_t t72 = 489LLU;
uint64_t x727 = 220LLU;
int64_t x752 = -1LL;
volatile int16_t x762 = INT16_MIN;
int8_t x787 = 18;
int32_t x825 = 484;
static volatile uint8_t x830 = 35U;
volatile int32_t x867 = 115;
int8_t x881 = -1;
volatile int32_t x899 = -1;
uint64_t x929 = UINT64_MAX;
int32_t x930 = INT32_MIN;
int32_t x952 = -2;
int32_t x956 = -1;
int8_t x962 = -1;
static uint8_t x1010 = UINT8_MAX;
volatile uint16_t x1036 = UINT16_MAX;


void f0(void) {
	int16_t x9 = INT16_MAX;
	static int32_t x10 = INT32_MAX;
	int8_t x12 = -7;
	int32_t t0 = 16174;

	t0 = (x9/((x10/x11)*x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x22 = INT32_MAX;
	uint16_t x23 = UINT16_MAX;
	int32_t t1 = 1999;

	t1 = (x21/((x22/x23)*x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x53 = -28;
	int32_t x54 = INT32_MIN;
	volatile uint64_t x55 = 10201416909151LLU;
	static int64_t x56 = INT64_MAX;
	uint64_t t2 = 6402LLU;

	t2 = (x53/((x54/x55)*x56));

	if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x61 = 111U;
	int8_t x62 = -1;
	uint32_t x63 = 869U;
	int16_t x64 = INT16_MIN;
	uint32_t t3 = 7978U;

	t3 = (x61/((x62/x63)*x64));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x66 = -1;
	static volatile uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MIN;
	volatile uint32_t t4 = 69U;

	t4 = (x65/((x66/x67)*x68));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x70 = INT16_MAX;
	static uint16_t x71 = 356U;
	uint16_t x72 = 2771U;
	int64_t t5 = -310482688LL;

	t5 = (x69/((x70/x71)*x72));

	if (t5 != 36179734348197LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x77 = 16615870U;
	int16_t x79 = -218;
	volatile int8_t x80 = -1;
	volatile int64_t t6 = -536570218187LL;

	t6 = (x77/((x78/x79)*x80));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x97 = 5U;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = -1LL;
	int16_t x100 = INT16_MIN;
	int64_t t7 = 1167655014LL;

	t7 = (x97/((x98/x99)*x100));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x106 = -1;
	static volatile int8_t x107 = -1;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t8 = -1551;

	t8 = (x105/((x106/x107)*x108));

	if (t8 != -511) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x109 = -1;
	static int16_t x110 = -1;
	volatile uint64_t x111 = UINT64_MAX;
	int32_t x112 = INT32_MIN;

	t9 = (x109/((x110/x111)*x112));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x113 = 5U;
	static int64_t t10 = -214196287928LL;

	t10 = (x113/((x114/x115)*x116));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x117 = -1LL;
	int8_t x118 = INT8_MIN;
	static int16_t x119 = -1;
	int8_t x120 = INT8_MAX;

	t11 = (x117/((x118/x119)*x120));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = 8472;
	uint8_t x123 = 51U;
	int16_t x124 = INT16_MAX;
	static volatile int64_t t12 = 46LL;

	t12 = (x121/((x122/x123)*x124));

	if (t12 != -1695684137996LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x141 = -1;
	int64_t x142 = 1245429488228128435LL;
	static int8_t x143 = -7;
	static uint16_t x144 = 1U;
	int64_t t13 = 931LL;

	t13 = (x141/((x142/x143)*x144));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x154 = INT16_MAX;
	int16_t x156 = INT16_MIN;

	t14 = (x153/((x154/x155)*x156));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x173 = 0U;
	static int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	volatile int64_t x176 = -150208874LL;
	volatile int64_t t15 = 59LL;

	t15 = (x173/((x174/x175)*x176));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MIN;
	int64_t x187 = -1LL;
	uint32_t x188 = UINT32_MAX;
	int64_t t16 = 0LL;

	t16 = (x185/((x186/x187)*x188));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x197 = -1;
	static int64_t x198 = -12802734736564LL;
	volatile int8_t x199 = -1;
	int8_t x200 = -3;
	volatile int64_t t17 = -32421290413LL;

	t17 = (x197/((x198/x199)*x200));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x201 = 77U;
	int32_t x202 = INT32_MAX;
	static volatile int16_t x204 = -1;

	t18 = (x201/((x202/x203)*x204));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x206 = -1;
	uint64_t x207 = UINT64_MAX;
	int32_t x208 = -1;
	volatile uint64_t t19 = 39946LLU;

	t19 = (x205/((x206/x207)*x208));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x213 = UINT8_MAX;
	uint64_t x214 = UINT64_MAX;
	static int8_t x215 = INT8_MIN;
	uint8_t x216 = UINT8_MAX;
	uint64_t t20 = 16151LLU;

	t20 = (x213/((x214/x215)*x216));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x234 = INT64_MIN;
	int8_t x235 = -3;
	int64_t x236 = -1LL;
	int64_t t21 = 64813662617176LL;

	t21 = (x233/((x234/x235)*x236));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x237 = 2202146LLU;
	int64_t x238 = INT64_MAX;
	static uint32_t x239 = 884544335U;
	volatile uint64_t t22 = 2681451344LLU;

	t22 = (x237/((x238/x239)*x240));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x241 = INT16_MAX;
	static uint16_t x243 = 116U;
	volatile uint8_t x244 = 93U;
	int64_t t23 = -1074367495882234LL;

	t23 = (x241/((x242/x243)*x244));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x286 = UINT16_MAX;
	int8_t x287 = 1;
	volatile int32_t x288 = 694;
	int64_t t24 = -26903090288691LL;

	t24 = (x285/((x286/x287)*x288));

	if (t24 != 202794864368LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x289 = INT16_MAX;
	static int64_t x290 = INT64_MIN;
	int16_t x291 = INT16_MAX;
	static volatile uint64_t x292 = 1521598191324227313LLU;
	volatile uint64_t t25 = 94LLU;

	t25 = (x289/((x290/x291)*x292));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x294 = INT16_MIN;
	static volatile int16_t x295 = 107;
	uint32_t x296 = 83537873U;
	volatile uint32_t t26 = 88118229U;

	t26 = (x293/((x294/x295)*x296));

	if (t26 != 20U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x297 = 4U;
	int64_t x298 = INT64_MAX;
	uint8_t x299 = UINT8_MAX;
	int32_t x300 = -1;
	int64_t t27 = 11076LL;

	t27 = (x297/((x298/x299)*x300));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x301 = -1;
	static volatile int8_t x302 = INT8_MAX;
	static int32_t t28 = -559967753;

	t28 = (x301/((x302/x303)*x304));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x306 = INT32_MIN;
	static uint32_t x308 = 55U;
	static uint32_t t29 = 36U;

	t29 = (x305/((x306/x307)*x308));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x309 = -150525761428LL;
	uint64_t x310 = 1393920287561293901LLU;
	uint64_t x311 = 139018155139LLU;
	uint64_t t30 = 20468LLU;

	t30 = (x309/((x310/x311)*x312));

	if (t30 != 1839726814994LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x330 = INT64_MAX;
	static int32_t x331 = INT32_MAX;
	int16_t x332 = 34;
	volatile uint64_t t31 = 358393LLU;

	t31 = (x329/((x330/x331)*x332));

	if (t31 != 126322567LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x333 = INT8_MIN;
	int64_t x334 = -92084603476037236LL;
	int64_t x335 = -1248791369LL;
	uint32_t x336 = UINT32_MAX;
	volatile int64_t t32 = -27LL;

	t32 = (x333/((x334/x335)*x336));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x337 = 69614306;
	static int16_t x338 = 44;
	static int16_t x339 = -1;
	int64_t x340 = -1LL;
	int64_t t33 = 29357097LL;

	t33 = (x337/((x338/x339)*x340));

	if (t33 != 1582143LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x353 = 1;
	uint32_t x354 = 241933U;
	static int16_t x355 = INT16_MAX;
	uint16_t x356 = UINT16_MAX;
	volatile uint32_t t34 = 0U;

	t34 = (x353/((x354/x355)*x356));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x361 = 19U;
	static uint32_t x362 = UINT32_MAX;
	int32_t x363 = INT32_MIN;
	static volatile int16_t x364 = INT16_MIN;

	t35 = (x361/((x362/x363)*x364));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x369 = UINT8_MAX;
	volatile int16_t x370 = INT16_MIN;
	int32_t x371 = -1;
	static volatile uint16_t x372 = 789U;
	int32_t t36 = -10;

	t36 = (x369/((x370/x371)*x372));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x377 = 27U;
	int16_t x378 = INT16_MIN;
	volatile uint16_t x379 = 8U;
	static int16_t x380 = -1;
	int32_t t37 = 107461024;

	t37 = (x377/((x378/x379)*x380));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x391 = 10317U;
	volatile int16_t x392 = INT16_MIN;
	volatile uint64_t t38 = 38332LLU;

	t38 = (x389/((x390/x391)*x392));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x394 = 63U;
	int64_t x395 = -1LL;
	int16_t x396 = -1;
	int64_t t39 = 2484351405098883LL;

	t39 = (x393/((x394/x395)*x396));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x417 = 3586;
	int64_t x418 = 12848756341495515LL;
	uint32_t x419 = UINT32_MAX;
	static int32_t x420 = -1;
	int64_t t40 = 93620427312LL;

	t40 = (x417/((x418/x419)*x420));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x425 = -415419196;
	volatile uint16_t x427 = 216U;
	uint64_t x428 = 179LLU;

	t41 = (x425/((x426/x427)*x428));

	if (t41 != 362LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x450 = 22U;
	static volatile int64_t x451 = -1LL;
	volatile uint16_t x452 = 32U;
	int64_t t42 = -26LL;

	t42 = (x449/((x450/x451)*x452));

	if (t42 != -46LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x458 = UINT16_MAX;
	static int16_t x459 = 839;
	uint8_t x460 = 54U;
	int32_t t43 = 840198257;

	t43 = (x457/((x458/x459)*x460));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x461 = -2589;
	static volatile int32_t x462 = -15;
	int8_t x463 = -1;
	uint16_t x464 = 7655U;
	volatile int32_t t44 = 53;

	t44 = (x461/((x462/x463)*x464));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x478 = -4523;
	volatile int32_t x479 = -1;
	int8_t x480 = -1;

	t45 = (x477/((x478/x479)*x480));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x481 = INT32_MIN;
	static int64_t x482 = INT64_MAX;
	static uint64_t x483 = 21825924LLU;
	static int32_t x484 = 3;
	volatile uint64_t t46 = 198063028825691704LLU;

	t46 = (x481/((x482/x483)*x484));

	if (t46 != 14550615LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x497 = -1;
	volatile uint16_t x498 = 16471U;
	uint16_t x499 = 926U;
	uint16_t x500 = 4764U;
	static volatile int32_t t47 = -39624926;

	t47 = (x497/((x498/x499)*x500));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x503 = -9;
	volatile uint64_t t48 = 81578986475379LLU;

	t48 = (x501/((x502/x503)*x504));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x505 = -2;
	volatile int64_t x506 = INT64_MIN;
	uint8_t x507 = 8U;
	volatile int8_t x508 = -5;
	int64_t t49 = 3964428045130086LL;

	t49 = (x505/((x506/x507)*x508));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x513 = -1000397;
	volatile uint8_t x514 = 21U;
	static int8_t x515 = 11;
	int32_t t50 = 6803841;

	t50 = (x513/((x514/x515)*x516));

	if (t50 != 30) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x517 = INT8_MIN;
	volatile uint64_t x518 = UINT64_MAX;
	int64_t x519 = -27925LL;
	int16_t x520 = -1;
	static volatile uint64_t t51 = 6046828427395918LLU;

	t51 = (x517/((x518/x519)*x520));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x521 = 22U;
	int32_t x522 = INT32_MAX;
	static int32_t x523 = -1;
	uint8_t x524 = 1U;
	int32_t t52 = -156080779;

	t52 = (x521/((x522/x523)*x524));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x526 = 33;
	volatile int32_t x527 = 1;
	static int64_t t53 = 1523LL;

	t53 = (x525/((x526/x527)*x528));

	if (t53 != -2183563455694785LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x533 = 5581;
	uint64_t x535 = 2323223LLU;
	static volatile int64_t x536 = -1LL;
	uint64_t t54 = 1233916110LLU;

	t54 = (x533/((x534/x535)*x536));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x542 = UINT16_MAX;
	int16_t x543 = INT16_MIN;
	int16_t x544 = -63;
	int32_t t55 = -7937283;

	t55 = (x541/((x542/x543)*x544));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x549 = 1878088055201LLU;
	volatile int16_t x550 = INT16_MIN;
	uint64_t x551 = 643939852680627LLU;
	static volatile int32_t x552 = INT32_MIN;

	t56 = (x549/((x550/x551)*x552));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x553 = INT32_MAX;
	volatile int32_t x554 = 15703;
	int16_t x555 = 1687;
	int16_t x556 = -1;

	t57 = (x553/((x554/x555)*x556));

	if (t57 != -238609294) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x557 = -651454;
	int64_t x558 = INT64_MIN;
	volatile uint8_t x560 = 78U;

	t58 = (x557/((x558/x559)*x560));

	if (t58 != 214237270LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x573 = -1;
	volatile int64_t x574 = INT64_MIN;
	int32_t x575 = INT32_MIN;
	int64_t x576 = -1LL;
	int64_t t59 = -1425LL;

	t59 = (x573/((x574/x575)*x576));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x577 = -1;
	static volatile uint32_t x578 = UINT32_MAX;
	uint8_t x580 = 31U;

	t60 = (x577/((x578/x579)*x580));

	if (t60 != 138547332U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x585 = 40U;
	static uint16_t x586 = UINT16_MAX;
	int8_t x587 = INT8_MIN;
	static int32_t x588 = 27;

	t61 = (x585/((x586/x587)*x588));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x589 = 11U;
	static volatile uint16_t x590 = UINT16_MAX;
	uint32_t t62 = 11998263U;

	t62 = (x589/((x590/x591)*x592));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x601 = UINT8_MAX;
	int8_t x602 = INT8_MIN;
	uint64_t x603 = 433457073483123LLU;
	uint64_t t63 = 345788225256LLU;

	t63 = (x601/((x602/x603)*x604));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x606 = INT16_MIN;
	static int64_t x607 = 1LL;
	volatile int64_t t64 = -160714785LL;

	t64 = (x605/((x606/x607)*x608));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x609 = 6U;
	static uint16_t x611 = UINT16_MAX;
	volatile uint8_t x612 = 3U;
	volatile int64_t t65 = 777680572LL;

	t65 = (x609/((x610/x611)*x612));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x613 = -1LL;
	static int8_t x615 = INT8_MIN;
	uint16_t x616 = UINT16_MAX;

	t66 = (x613/((x614/x615)*x616));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x629 = INT32_MIN;
	static uint16_t x632 = UINT16_MAX;
	volatile int64_t t67 = 1893058360308LL;

	t67 = (x629/((x630/x631)*x632));

	if (t67 != -564LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x641 = 113U;
	int64_t x643 = INT64_MIN;
	int64_t x644 = 3872808052817557LL;
	uint64_t t68 = 38469188763878992LLU;

	t68 = (x641/((x642/x643)*x644));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x673 = 3U;
	static int64_t x674 = INT64_MIN;
	static int16_t x676 = -2423;
	volatile int64_t t69 = 80705129620947LL;

	t69 = (x673/((x674/x675)*x676));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x677 = 4;
	int32_t x678 = INT32_MAX;
	volatile uint16_t x679 = 1U;
	volatile int32_t t70 = 3;

	t70 = (x677/((x678/x679)*x680));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x705 = UINT8_MAX;
	volatile uint32_t x706 = UINT32_MAX;
	static uint8_t x707 = 16U;
	int16_t x708 = INT16_MIN;

	t71 = (x705/((x706/x707)*x708));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x721 = -5754;
	static uint64_t x722 = 5744384093657308LLU;
	uint16_t x724 = 28U;

	t72 = (x721/((x722/x723)*x724));

	if (t72 != 227311LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x725 = 0U;
	volatile int16_t x726 = -3;
	int16_t x728 = 254;
	static volatile uint64_t t73 = 4260691836605578161LLU;

	t73 = (x725/((x726/x727)*x728));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x741 = INT32_MAX;
	int32_t x742 = -1;
	static int16_t x743 = -1;
	int16_t x744 = INT16_MIN;
	static volatile int32_t t74 = -14552375;

	t74 = (x741/((x742/x743)*x744));

	if (t74 != -65535) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x749 = INT8_MAX;
	int32_t x750 = 131301325;
	volatile uint8_t x751 = 102U;
	volatile int64_t t75 = 13993759605888LL;

	t75 = (x749/((x750/x751)*x752));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x761 = 0;
	static volatile uint16_t x763 = 15097U;
	uint64_t x764 = 10062LLU;
	uint64_t t76 = 2811699863LLU;

	t76 = (x761/((x762/x763)*x764));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x769 = 51;
	int16_t x770 = INT16_MIN;
	uint16_t x771 = 1U;
	int8_t x772 = INT8_MIN;
	int32_t t77 = 283;

	t77 = (x769/((x770/x771)*x772));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x777 = INT8_MIN;
	uint64_t x778 = UINT64_MAX;
	volatile int32_t x779 = INT32_MIN;
	static int8_t x780 = INT8_MIN;
	static volatile uint64_t t78 = 49604926282678LLU;

	t78 = (x777/((x778/x779)*x780));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x785 = -1;
	static int8_t x786 = INT8_MIN;
	static int32_t x788 = 4419602;
	int32_t t79 = 0;

	t79 = (x785/((x786/x787)*x788));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x789 = 6U;
	volatile int32_t x790 = -89288474;
	volatile uint64_t x791 = 23972LLU;
	int64_t x792 = INT64_MAX;
	volatile uint64_t t80 = 1661LLU;

	t80 = (x789/((x790/x791)*x792));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x817 = 12U;
	int16_t x818 = -11;
	int16_t x819 = -8;
	int16_t x820 = -1;
	int32_t t81 = -80149381;

	t81 = (x817/((x818/x819)*x820));

	if (t81 != -12) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x826 = INT16_MIN;
	int8_t x827 = INT8_MAX;
	uint32_t x828 = UINT32_MAX;
	volatile uint32_t t82 = 6U;

	t82 = (x825/((x826/x827)*x828));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x829 = -3420506;
	int8_t x831 = -26;
	int16_t x832 = -1;
	int32_t t83 = -69;

	t83 = (x829/((x830/x831)*x832));

	if (t83 != -3420506) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x837 = INT32_MAX;
	int16_t x838 = INT16_MIN;
	int16_t x839 = INT16_MAX;
	int16_t x840 = -22;
	static int32_t t84 = 108;

	t84 = (x837/((x838/x839)*x840));

	if (t84 != 97612893) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x857 = INT8_MAX;
	static volatile uint16_t x858 = 166U;
	volatile int16_t x859 = -1;
	volatile int8_t x860 = INT8_MIN;
	volatile int32_t t85 = -861906136;

	t85 = (x857/((x858/x859)*x860));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x865 = INT8_MIN;
	volatile uint64_t x866 = UINT64_MAX;
	static uint64_t x868 = UINT64_MAX;
	volatile uint64_t t86 = 525540761LLU;

	t86 = (x865/((x866/x867)*x868));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x877 = INT8_MAX;
	int32_t x878 = -393829;
	int64_t x879 = 50329LL;
	static volatile int16_t x880 = INT16_MIN;
	static int64_t t87 = -60833311169168171LL;

	t87 = (x877/((x878/x879)*x880));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x882 = -1;
	volatile uint64_t x883 = 29497839804LLU;
	volatile int64_t x884 = -1LL;
	uint64_t t88 = 113666852873LLU;

	t88 = (x881/((x882/x883)*x884));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x897 = INT16_MIN;
	uint64_t x898 = UINT64_MAX;
	volatile int8_t x900 = INT8_MIN;
	static uint64_t t89 = 424LLU;

	t89 = (x897/((x898/x899)*x900));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x917 = 28433U;
	static int32_t x918 = 1461517;
	static int8_t x919 = INT8_MAX;
	static int8_t x920 = INT8_MAX;
	static volatile int32_t t90 = -202771;

	t90 = (x917/((x918/x919)*x920));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x931 = INT8_MAX;
	static uint8_t x932 = 5U;
	uint64_t t91 = 42219036LLU;

	t91 = (x929/((x930/x931)*x932));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x949 = 911U;
	int32_t x950 = 315929;
	volatile int32_t x951 = -1;
	int32_t t92 = 1;

	t92 = (x949/((x950/x951)*x952));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x953 = INT8_MAX;
	int16_t x954 = -1;
	uint64_t x955 = 7985952253580383LLU;
	volatile uint64_t t93 = 2065LLU;

	t93 = (x953/((x954/x955)*x956));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x961 = 1U;
	uint32_t x963 = UINT32_MAX;
	int8_t x964 = 6;
	uint32_t t94 = 73894736U;

	t94 = (x961/((x962/x963)*x964));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x977 = -1;
	int64_t x978 = 5LL;
	static volatile int8_t x979 = -1;
	int8_t x980 = INT8_MIN;
	volatile int64_t t95 = 2387245322LL;

	t95 = (x977/((x978/x979)*x980));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1005 = INT64_MIN;
	uint16_t x1006 = UINT16_MAX;
	static uint64_t x1007 = 78LLU;
	int16_t x1008 = INT16_MAX;
	uint64_t t96 = 2849073440766LLU;

	t96 = (x1005/((x1006/x1007)*x1008));

	if (t96 != 335099484413LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x1009 = -1LL;
	int8_t x1011 = INT8_MAX;
	volatile int32_t x1012 = -1;
	volatile int64_t t97 = 8100LL;

	t97 = (x1009/((x1010/x1011)*x1012));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x1025 = INT8_MIN;
	static uint64_t x1026 = UINT64_MAX;
	volatile int8_t x1027 = INT8_MIN;
	int32_t x1028 = 25;
	static uint64_t t98 = 7815559958018839LLU;

	t98 = (x1025/((x1026/x1027)*x1028));

	if (t98 != 737869762948382059LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1033 = -8;
	uint64_t x1034 = 478029433355LLU;
	uint8_t x1035 = UINT8_MAX;
	uint64_t t99 = 4390405594LLU;

	t99 = (x1033/((x1034/x1035)*x1036));

	if (t99 != 150152LLU) { NG(); } else { ; }
	
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

