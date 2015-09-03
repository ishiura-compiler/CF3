#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -427190937071LL;
uint8_t x39 = UINT8_MAX;
int32_t t1 = -226359065;
int64_t x76 = INT64_MAX;
int8_t x92 = -1;
volatile int64_t x102 = INT64_MAX;
int64_t x103 = INT64_MAX;
uint32_t x109 = 213884U;
uint64_t x110 = 49919709614563LLU;
int32_t x111 = -1;
uint32_t t7 = 3926377U;
volatile uint32_t t8 = 453U;
uint32_t x137 = UINT32_MAX;
uint32_t t9 = UINT32_MAX;
static int32_t x147 = INT32_MIN;
int16_t x148 = INT16_MAX;
uint64_t x164 = UINT64_MAX;
static int16_t x173 = INT16_MIN;
static volatile int8_t x175 = -1;
uint8_t x194 = 2U;
volatile uint32_t t14 = 101U;
volatile uint32_t x202 = 59730991U;
uint16_t x204 = UINT16_MAX;
volatile uint64_t t17 = 284386474558791767LLU;
int32_t x221 = INT32_MAX;
int16_t x224 = -3;
int8_t x243 = INT8_MIN;
volatile int32_t t19 = -7;
int8_t x246 = INT8_MAX;
int32_t t20 = 30500;
int8_t x257 = -7;
int32_t x259 = -2848955;
uint64_t t23 = 2133763958LLU;
uint16_t x313 = UINT16_MAX;
int32_t x315 = -1;
int32_t t26 = -33515;
volatile int64_t t27 = -7285355500LL;
static volatile int32_t x329 = INT32_MIN;
volatile int32_t x398 = INT32_MAX;
volatile int32_t t32 = 639;
uint8_t x435 = 1U;
static uint32_t x436 = 179321U;
int16_t x459 = INT16_MAX;
volatile int8_t x476 = -1;
int32_t t35 = 124684192;
volatile uint64_t x494 = 9367715476LLU;
int32_t t38 = INT32_MIN;
int8_t x527 = INT8_MAX;
int64_t x538 = INT64_MIN;
uint32_t x540 = UINT32_MAX;
static uint64_t x593 = 719435852856458449LLU;
uint8_t x596 = UINT8_MAX;
int16_t x675 = INT16_MIN;
uint8_t x703 = 9U;
int64_t x705 = INT64_MAX;
volatile int32_t x707 = INT32_MAX;
volatile int64_t t53 = INT64_MAX;
volatile int32_t t55 = -12005;
int32_t x762 = INT32_MIN;
volatile int64_t x790 = INT64_MIN;
int32_t t60 = -15;
uint16_t x813 = UINT16_MAX;
int16_t x815 = INT16_MAX;
int8_t x881 = INT8_MIN;
int64_t x887 = 193LL;
volatile uint32_t x894 = 3861U;
static int32_t x914 = -1;
uint8_t x915 = UINT8_MAX;
int64_t x916 = -435416475289LL;
static int16_t x946 = -1;
int8_t x952 = -1;
int32_t t72 = -7178377;
int64_t x971 = INT64_MAX;
uint64_t x992 = 1876382957571828973LLU;
uint16_t x1055 = 133U;
int32_t x1068 = -1;
volatile int64_t x1100 = -362705LL;
uint32_t x1113 = 3204705U;
int64_t x1114 = 203LL;
volatile uint32_t t81 = 137286348U;
volatile int64_t t82 = 166LL;
int32_t x1132 = INT32_MAX;
static int16_t x1138 = 5;
volatile int32_t x1201 = INT32_MAX;
volatile int32_t x1202 = INT32_MIN;
int16_t x1212 = INT16_MAX;
int16_t x1254 = INT16_MIN;
volatile int32_t t90 = 88827435;
static volatile int16_t x1300 = 9;
int32_t x1356 = -1;
volatile int32_t t95 = -92;
volatile uint32_t x1410 = 634U;
volatile int16_t x1411 = INT16_MAX;
volatile uint64_t t96 = 1837425976868LLU;
uint16_t x1458 = 14U;
int16_t x1460 = INT16_MAX;
uint8_t x1474 = 14U;
uint8_t x1476 = 11U;


void f0(void) {
	volatile uint8_t x13 = UINT8_MAX;
	volatile int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MIN;
	int64_t x16 = -1LL;

	t0 = (x13/((x14<=x15)&x16));

	if (t0 != 255LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x37 = INT16_MIN;
	static int16_t x38 = 1;
	int16_t x40 = INT16_MAX;

	t1 = (x37/((x38<=x39)&x40));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x69 = 3U;
	static int32_t x70 = -2361;
	static uint16_t x71 = 50U;
	int8_t x72 = 41;
	static volatile uint32_t t2 = 239161745U;

	t2 = (x69/((x70<=x71)&x72));

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x73 = -24867301;
	uint8_t x74 = 0U;
	uint8_t x75 = UINT8_MAX;
	int64_t t3 = 2767055LL;

	t3 = (x73/((x74<=x75)&x76));

	if (t3 != -24867301LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x89 = INT64_MIN;
	static volatile int32_t x90 = INT32_MIN;
	int8_t x91 = INT8_MIN;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x89/((x90<=x91)&x92));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x101 = -1;
	volatile int64_t x104 = -1LL;
	int64_t t5 = 7301965052LL;

	t5 = (x101/((x102<=x103)&x104));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x105 = INT64_MIN;
	static int64_t x106 = -1LL;
	uint16_t x107 = UINT16_MAX;
	static int8_t x108 = -1;
	static int64_t t6 = INT64_MIN;

	t6 = (x105/((x106<=x107)&x108));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x112 = 89U;

	t7 = (x109/((x110<=x111)&x112));

	if (t7 != 213884U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x121 = 412U;
	static int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MAX;
	static volatile uint16_t x124 = 2047U;

	t8 = (x121/((x122<=x123)&x124));

	if (t8 != 412U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MIN;
	int16_t x140 = -1;

	t9 = (x137/((x138<=x139)&x140));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x145 = 158U;
	uint32_t x146 = 159000886U;
	volatile int32_t t10 = 23396;

	t10 = (x145/((x146<=x147)&x148));

	if (t10 != 158) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x153 = INT32_MIN;
	static int16_t x154 = INT16_MIN;
	volatile int64_t x155 = -1LL;
	uint32_t x156 = 549269U;
	static uint32_t t11 = 571596U;

	t11 = (x153/((x154<=x155)&x156));

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x161 = 14203796304384188LLU;
	static uint64_t x162 = 579422797LLU;
	int8_t x163 = INT8_MIN;
	uint64_t t12 = 142LLU;

	t12 = (x161/((x162<=x163)&x164));

	if (t12 != 14203796304384188LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x174 = INT64_MIN;
	int64_t x176 = -1LL;
	volatile int64_t t13 = 4642LL;

	t13 = (x173/((x174<=x175)&x176));

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x193 = 2331U;
	uint8_t x195 = 59U;
	static int16_t x196 = -199;

	t14 = (x193/((x194<=x195)&x196));

	if (t14 != 2331U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x197 = INT64_MAX;
	static int8_t x198 = INT8_MAX;
	uint32_t x199 = UINT32_MAX;
	static int64_t x200 = -1272400276431LL;
	int64_t t15 = INT64_MAX;

	t15 = (x197/((x198<=x199)&x200));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x201 = UINT16_MAX;
	uint32_t x203 = UINT32_MAX;
	int32_t t16 = -4469;

	t16 = (x201/((x202<=x203)&x204));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x217 = 4U;
	int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	static uint64_t x220 = 179529730245LLU;

	t17 = (x217/((x218<=x219)&x220));

	if (t17 != 4LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x222 = UINT16_MAX;
	uint32_t x223 = UINT32_MAX;
	volatile int32_t t18 = INT32_MAX;

	t18 = (x221/((x222<=x223)&x224));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x241 = INT8_MIN;
	int16_t x242 = -3537;
	volatile int16_t x244 = INT16_MAX;

	t19 = (x241/((x242<=x243)&x244));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x245 = -4;
	int64_t x247 = 202179560LL;
	int8_t x248 = -1;

	t20 = (x245/((x246<=x247)&x248));

	if (t20 != -4) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x258 = 1480311U;
	int16_t x260 = INT16_MAX;
	volatile int32_t t21 = -1353872;

	t21 = (x257/((x258<=x259)&x260));

	if (t21 != -7) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x277 = -60;
	int64_t x278 = INT64_MIN;
	int16_t x279 = INT16_MAX;
	int32_t x280 = -3;
	int32_t t22 = 6673604;

	t22 = (x277/((x278<=x279)&x280));

	if (t22 != -60) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x293 = 131688U;
	int64_t x294 = INT64_MIN;
	uint16_t x295 = 44U;
	uint64_t x296 = 1403149803LLU;

	t23 = (x293/((x294<=x295)&x296));

	if (t23 != 131688LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = 0;
	uint64_t x303 = 1211691499822LLU;
	int32_t x304 = -24139;
	int32_t t24 = -254;

	t24 = (x301/((x302<=x303)&x304));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x305 = INT8_MAX;
	uint16_t x306 = UINT16_MAX;
	uint32_t x307 = UINT32_MAX;
	uint32_t x308 = UINT32_MAX;
	volatile uint32_t t25 = 256538U;

	t25 = (x305/((x306<=x307)&x308));

	if (t25 != 127U) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x314 = -6968;
	int8_t x316 = -1;

	t26 = (x313/((x314<=x315)&x316));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x317 = INT8_MIN;
	int32_t x318 = -1;
	volatile int16_t x319 = INT16_MAX;
	static volatile int64_t x320 = -1LL;

	t27 = (x317/((x318<=x319)&x320));

	if (t27 != -128LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x330 = INT16_MIN;
	static uint64_t x331 = UINT64_MAX;
	static volatile int64_t x332 = -1LL;
	volatile int64_t t28 = -8637843988160691LL;

	t28 = (x329/((x330<=x331)&x332));

	if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x349 = -1;
	volatile uint8_t x350 = UINT8_MAX;
	int16_t x351 = INT16_MAX;
	volatile int64_t x352 = -1LL;
	int64_t t29 = 12991331228290LL;

	t29 = (x349/((x350<=x351)&x352));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x385 = 652;
	volatile int32_t x386 = -1;
	static volatile uint32_t x387 = UINT32_MAX;
	int16_t x388 = INT16_MAX;
	static volatile int32_t t30 = -405;

	t30 = (x385/((x386<=x387)&x388));

	if (t30 != 652) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x397 = 111369429U;
	int32_t x399 = INT32_MAX;
	int64_t x400 = INT64_MAX;
	int64_t t31 = 605027089506615298LL;

	t31 = (x397/((x398<=x399)&x400));

	if (t31 != 111369429LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x401 = -6;
	static int16_t x402 = INT16_MIN;
	static int16_t x403 = INT16_MIN;
	volatile uint16_t x404 = 5911U;

	t32 = (x401/((x402<=x403)&x404));

	if (t32 != -6) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x433 = 4U;
	int8_t x434 = INT8_MIN;
	uint32_t t33 = 1369201117U;

	t33 = (x433/((x434<=x435)&x436));

	if (t33 != 4U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x457 = INT32_MIN;
	int32_t x458 = INT32_MIN;
	uint8_t x460 = UINT8_MAX;
	int32_t t34 = INT32_MIN;

	t34 = (x457/((x458<=x459)&x460));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x473 = INT8_MIN;
	volatile int8_t x474 = INT8_MIN;
	static int16_t x475 = INT16_MAX;

	t35 = (x473/((x474<=x475)&x476));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x489 = 24U;
	uint8_t x490 = 98U;
	static volatile uint16_t x491 = UINT16_MAX;
	int32_t x492 = 77;
	volatile uint32_t t36 = 15U;

	t36 = (x489/((x490<=x491)&x492));

	if (t36 != 24U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x493 = 31;
	int16_t x495 = INT16_MIN;
	volatile int64_t x496 = -1LL;
	int64_t t37 = 337557335LL;

	t37 = (x493/((x494<=x495)&x496));

	if (t37 != 31LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x501 = INT32_MIN;
	int8_t x502 = INT8_MIN;
	int8_t x503 = -1;
	uint16_t x504 = 13U;

	t38 = (x501/((x502<=x503)&x504));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x505 = INT32_MIN;
	static int32_t x506 = -1;
	int32_t x507 = -1;
	int16_t x508 = -1533;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x505/((x506<=x507)&x508));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x513 = INT64_MIN;
	static uint32_t x514 = 327436799U;
	volatile int16_t x515 = -1;
	int32_t x516 = 11265;
	static int64_t t40 = INT64_MIN;

	t40 = (x513/((x514<=x515)&x516));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x525 = INT64_MIN;
	int16_t x526 = -1104;
	volatile int8_t x528 = INT8_MAX;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x525/((x526<=x527)&x528));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x537 = UINT8_MAX;
	static volatile int16_t x539 = 37;
	uint32_t t42 = 3797763U;

	t42 = (x537/((x538<=x539)&x540));

	if (t42 != 255U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x545 = -942261029;
	int32_t x546 = 22;
	int8_t x547 = INT8_MAX;
	uint64_t x548 = UINT64_MAX;
	uint64_t t43 = 1021790223LLU;

	t43 = (x545/((x546<=x547)&x548));

	if (t43 != 18446744072767290587LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x549 = UINT64_MAX;
	int32_t x550 = INT32_MIN;
	int32_t x551 = -1;
	static uint32_t x552 = 4931U;
	static volatile uint64_t t44 = UINT64_MAX;

	t44 = (x549/((x550<=x551)&x552));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x553 = 4LLU;
	static int8_t x554 = INT8_MIN;
	static uint8_t x555 = 76U;
	uint64_t x556 = 570734076289LLU;
	volatile uint64_t t45 = 332057786673028607LLU;

	t45 = (x553/((x554<=x555)&x556));

	if (t45 != 4LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x594 = 6094LLU;
	static volatile int16_t x595 = INT16_MIN;
	uint64_t t46 = 41484LLU;

	t46 = (x593/((x594<=x595)&x596));

	if (t46 != 719435852856458449LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x605 = INT64_MIN;
	int8_t x606 = INT8_MAX;
	uint16_t x607 = 7215U;
	static int64_t x608 = -505LL;
	int64_t t47 = INT64_MIN;

	t47 = (x605/((x606<=x607)&x608));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x613 = -1;
	volatile int16_t x614 = -1;
	int32_t x615 = 113955031;
	int16_t x616 = INT16_MAX;
	static int32_t t48 = 0;

	t48 = (x613/((x614<=x615)&x616));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x641 = -1;
	static int16_t x642 = INT16_MIN;
	volatile int64_t x643 = INT64_MAX;
	uint16_t x644 = UINT16_MAX;
	int32_t t49 = 0;

	t49 = (x641/((x642<=x643)&x644));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x673 = 95808418749491LLU;
	uint32_t x674 = 201527U;
	int64_t x676 = -1LL;
	volatile uint64_t t50 = 138300444488LLU;

	t50 = (x673/((x674<=x675)&x676));

	if (t50 != 95808418749491LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x693 = -1;
	int8_t x694 = INT8_MIN;
	uint16_t x695 = 20624U;
	int16_t x696 = -1;
	int32_t t51 = 7373;

	t51 = (x693/((x694<=x695)&x696));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x701 = -1;
	int8_t x702 = INT8_MIN;
	static uint64_t x704 = UINT64_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = (x701/((x702<=x703)&x704));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x706 = INT64_MIN;
	uint16_t x708 = 8297U;

	t53 = (x705/((x706<=x707)&x708));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x729 = 3LLU;
	int16_t x730 = -33;
	static uint8_t x731 = 127U;
	int8_t x732 = 15;
	volatile uint64_t t54 = 6LLU;

	t54 = (x729/((x730<=x731)&x732));

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x733 = 0U;
	int64_t x734 = INT64_MAX;
	volatile int64_t x735 = INT64_MAX;
	static int32_t x736 = -1;

	t55 = (x733/((x734<=x735)&x736));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x737 = 220U;
	static uint8_t x738 = 42U;
	uint32_t x739 = UINT32_MAX;
	uint16_t x740 = UINT16_MAX;
	uint32_t t56 = 43U;

	t56 = (x737/((x738<=x739)&x740));

	if (t56 != 220U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x761 = 882;
	volatile int16_t x763 = INT16_MAX;
	volatile uint32_t x764 = 1U;
	uint32_t t57 = 50396933U;

	t57 = (x761/((x762<=x763)&x764));

	if (t57 != 882U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x777 = -1;
	static int32_t x778 = -1;
	uint64_t x779 = UINT64_MAX;
	static int8_t x780 = INT8_MAX;
	int32_t t58 = 0;

	t58 = (x777/((x778<=x779)&x780));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x789 = -11;
	static uint16_t x791 = 7412U;
	int32_t x792 = INT32_MAX;
	static int32_t t59 = -1;

	t59 = (x789/((x790<=x791)&x792));

	if (t59 != -11) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x793 = 10;
	int16_t x794 = -1;
	static int8_t x795 = 0;
	static uint16_t x796 = 5U;

	t60 = (x793/((x794<=x795)&x796));

	if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x805 = 13U;
	static volatile uint16_t x806 = 54U;
	int64_t x807 = INT64_MAX;
	int16_t x808 = INT16_MAX;
	volatile int32_t t61 = 0;

	t61 = (x805/((x806<=x807)&x808));

	if (t61 != 13) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x814 = INT16_MIN;
	int64_t x816 = 1LL;
	volatile int64_t t62 = 313679515198743703LL;

	t62 = (x813/((x814<=x815)&x816));

	if (t62 != 65535LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x817 = 35;
	int8_t x818 = INT8_MIN;
	static int64_t x819 = 2235082436867291LL;
	int16_t x820 = -1;
	int32_t t63 = -201148;

	t63 = (x817/((x818<=x819)&x820));

	if (t63 != 35) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x882 = 0U;
	int16_t x883 = INT16_MAX;
	static int8_t x884 = -1;
	static int32_t t64 = 142121328;

	t64 = (x881/((x882<=x883)&x884));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x885 = UINT8_MAX;
	uint8_t x886 = 8U;
	int32_t x888 = 11927;
	volatile int32_t t65 = 3065760;

	t65 = (x885/((x886<=x887)&x888));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x893 = -34;
	int16_t x895 = -1;
	int32_t x896 = 413771;
	volatile int32_t t66 = -33450;

	t66 = (x893/((x894<=x895)&x896));

	if (t66 != -34) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x897 = -1;
	int32_t x898 = INT32_MIN;
	uint64_t x899 = UINT64_MAX;
	int32_t x900 = -17403671;
	volatile int32_t t67 = -24;

	t67 = (x897/((x898<=x899)&x900));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x913 = INT64_MIN;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x913/((x914<=x915)&x916));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x925 = 788491687LLU;
	volatile int8_t x926 = INT8_MAX;
	static int16_t x927 = 477;
	int32_t x928 = -1;
	static uint64_t t69 = 67796914902367LLU;

	t69 = (x925/((x926<=x927)&x928));

	if (t69 != 788491687LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x941 = 21;
	static int16_t x942 = -365;
	uint8_t x943 = 16U;
	uint8_t x944 = UINT8_MAX;
	int32_t t70 = 13115;

	t70 = (x941/((x942<=x943)&x944));

	if (t70 != 21) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x945 = UINT8_MAX;
	static int64_t x947 = 25566697708LL;
	int64_t x948 = -1LL;
	volatile int64_t t71 = 9LL;

	t71 = (x945/((x946<=x947)&x948));

	if (t71 != 255LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x949 = 35;
	static int8_t x950 = -1;
	int64_t x951 = -1LL;

	t72 = (x949/((x950<=x951)&x952));

	if (t72 != 35) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x969 = 6134283LLU;
	int64_t x970 = -2316094LL;
	int16_t x972 = INT16_MAX;
	uint64_t t73 = 646337933215081LLU;

	t73 = (x969/((x970<=x971)&x972));

	if (t73 != 6134283LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x989 = 30428041LLU;
	int16_t x990 = 0;
	uint64_t x991 = 1395325141483LLU;
	volatile uint64_t t74 = 471089235LLU;

	t74 = (x989/((x990<=x991)&x992));

	if (t74 != 30428041LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1005 = INT8_MIN;
	int16_t x1006 = INT16_MIN;
	volatile int64_t x1007 = -1LL;
	int64_t x1008 = -1LL;
	volatile int64_t t75 = -13905LL;

	t75 = (x1005/((x1006<=x1007)&x1008));

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1029 = -1;
	int64_t x1030 = INT64_MIN;
	int32_t x1031 = INT32_MAX;
	volatile uint64_t x1032 = UINT64_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = (x1029/((x1030<=x1031)&x1032));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1037 = UINT8_MAX;
	int32_t x1038 = -113454275;
	static int16_t x1039 = 2;
	uint64_t x1040 = UINT64_MAX;
	static volatile uint64_t t77 = 423LLU;

	t77 = (x1037/((x1038<=x1039)&x1040));

	if (t77 != 255LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x1053 = 63;
	static uint8_t x1054 = 1U;
	static uint64_t x1056 = UINT64_MAX;
	uint64_t t78 = 1886351474253LLU;

	t78 = (x1053/((x1054<=x1055)&x1056));

	if (t78 != 63LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x1065 = 875732U;
	int64_t x1066 = INT64_MIN;
	static volatile int16_t x1067 = INT16_MAX;
	volatile uint32_t t79 = 48064U;

	t79 = (x1065/((x1066<=x1067)&x1068));

	if (t79 != 875732U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1097 = 11690;
	volatile int8_t x1098 = INT8_MIN;
	int64_t x1099 = -1LL;
	int64_t t80 = 468343LL;

	t80 = (x1097/((x1098<=x1099)&x1100));

	if (t80 != 11690LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x1115 = 24803497;
	int16_t x1116 = INT16_MAX;

	t81 = (x1113/((x1114<=x1115)&x1116));

	if (t81 != 3204705U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x1117 = 149021054507888018LL;
	int64_t x1118 = -8422479860201LL;
	uint8_t x1119 = 7U;
	int16_t x1120 = -11;

	t82 = (x1117/((x1118<=x1119)&x1120));

	if (t82 != 149021054507888018LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x1129 = 23730U;
	int32_t x1130 = 188;
	volatile int32_t x1131 = INT32_MAX;
	int32_t t83 = 84667693;

	t83 = (x1129/((x1130<=x1131)&x1132));

	if (t83 != 23730) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1133 = INT16_MAX;
	static int64_t x1134 = INT64_MIN;
	int16_t x1135 = -1;
	static int32_t x1136 = -1;
	volatile int32_t t84 = 79;

	t84 = (x1133/((x1134<=x1135)&x1136));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x1137 = 89U;
	volatile uint16_t x1139 = 7276U;
	int32_t x1140 = -1;
	static volatile int32_t t85 = 407749;

	t85 = (x1137/((x1138<=x1139)&x1140));

	if (t85 != 89) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x1161 = INT64_MIN;
	static int8_t x1162 = -1;
	int16_t x1163 = -1;
	volatile uint8_t x1164 = UINT8_MAX;
	volatile int64_t t86 = INT64_MIN;

	t86 = (x1161/((x1162<=x1163)&x1164));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1203 = 2U;
	int64_t x1204 = -1LL;
	int64_t t87 = -21566LL;

	t87 = (x1201/((x1202<=x1203)&x1204));

	if (t87 != 2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1209 = INT8_MIN;
	int32_t x1210 = -1;
	uint16_t x1211 = 2U;
	static int32_t t88 = 53662878;

	t88 = (x1209/((x1210<=x1211)&x1212));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1253 = INT16_MAX;
	static int16_t x1255 = INT16_MIN;
	volatile uint32_t x1256 = UINT32_MAX;
	volatile uint32_t t89 = 237613U;

	t89 = (x1253/((x1254<=x1255)&x1256));

	if (t89 != 32767U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1265 = INT8_MIN;
	static uint16_t x1266 = UINT16_MAX;
	uint64_t x1267 = 491967526300337286LLU;
	int8_t x1268 = 5;

	t90 = (x1265/((x1266<=x1267)&x1268));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1297 = INT16_MIN;
	volatile int16_t x1298 = INT16_MIN;
	int8_t x1299 = 0;
	volatile int32_t t91 = 31;

	t91 = (x1297/((x1298<=x1299)&x1300));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x1309 = INT16_MIN;
	static volatile int16_t x1310 = -44;
	uint16_t x1311 = UINT16_MAX;
	uint8_t x1312 = 19U;
	volatile int32_t t92 = 4;

	t92 = (x1309/((x1310<=x1311)&x1312));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1325 = INT8_MIN;
	uint16_t x1326 = 22U;
	volatile uint16_t x1327 = UINT16_MAX;
	volatile uint64_t x1328 = 2465111439LLU;
	uint64_t t93 = 5928593LLU;

	t93 = (x1325/((x1326<=x1327)&x1328));

	if (t93 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1349 = 0;
	int8_t x1350 = INT8_MIN;
	uint8_t x1351 = 3U;
	int8_t x1352 = -51;
	volatile int32_t t94 = 1;

	t94 = (x1349/((x1350<=x1351)&x1352));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1353 = -1;
	static int64_t x1354 = -1LL;
	static volatile int8_t x1355 = 27;

	t95 = (x1353/((x1354<=x1355)&x1356));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1409 = 2024211LLU;
	volatile uint8_t x1412 = UINT8_MAX;

	t96 = (x1409/((x1410<=x1411)&x1412));

	if (t96 != 2024211LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x1437 = INT16_MAX;
	uint32_t x1438 = 56381U;
	static volatile int32_t x1439 = INT32_MAX;
	int32_t x1440 = 1;
	static int32_t t97 = -484698;

	t97 = (x1437/((x1438<=x1439)&x1440));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1457 = 47U;
	uint32_t x1459 = UINT32_MAX;
	volatile int32_t t98 = 46095;

	t98 = (x1457/((x1458<=x1459)&x1460));

	if (t98 != 47) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1473 = UINT64_MAX;
	int64_t x1475 = 52036LL;
	uint64_t t99 = UINT64_MAX;

	t99 = (x1473/((x1474<=x1475)&x1476));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

