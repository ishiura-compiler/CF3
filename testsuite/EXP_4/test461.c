#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 108269;
volatile uint32_t t3 = 305U;
volatile int8_t x38 = INT8_MIN;
static int16_t x39 = INT16_MIN;
volatile uint64_t t5 = 76005LLU;
static volatile uint32_t x67 = 981367438U;
static uint64_t x68 = UINT64_MAX;
int32_t t7 = -209676;
uint8_t x82 = UINT8_MAX;
volatile int32_t t10 = 28;
int64_t t11 = -26421LL;
uint64_t t12 = 36793220LLU;
volatile int64_t x188 = -20LL;
uint64_t x201 = 913889LLU;
uint64_t x202 = UINT64_MAX;
volatile uint64_t t17 = 109453LLU;
static int64_t x209 = 134LL;
volatile int64_t t19 = -1641964281231LL;
int32_t x220 = -551094;
uint64_t x221 = 411859LLU;
int8_t x223 = INT8_MIN;
static uint64_t x227 = 19228536707891LLU;
static volatile int8_t x234 = INT8_MIN;
uint32_t x248 = 92U;
int8_t x256 = -26;
uint32_t x281 = UINT32_MAX;
volatile int64_t x282 = INT64_MIN;
volatile uint32_t x283 = UINT32_MAX;
volatile int32_t x284 = 37063845;
uint8_t x290 = 5U;
static int16_t x292 = INT16_MIN;
volatile int16_t x295 = 56;
volatile uint64_t x300 = UINT64_MAX;
uint64_t x308 = 1862094995363142642LLU;
volatile uint64_t t33 = 68703207559867LLU;
int8_t x324 = INT8_MIN;
int32_t x344 = -1;
uint16_t x362 = 7458U;
volatile int16_t x366 = -571;
volatile int16_t x368 = INT16_MAX;
static int8_t x389 = 15;
static volatile int16_t x391 = -36;
volatile uint64_t x406 = 55068419447LLU;
static volatile int32_t t47 = -170138695;
int8_t x450 = INT8_MAX;
uint8_t x451 = 53U;
volatile int32_t t49 = 82473;
uint16_t x466 = 1573U;
volatile int8_t x474 = INT8_MIN;
uint32_t x476 = 227U;
int8_t x492 = INT8_MIN;
int32_t t52 = 552666228;
int32_t x495 = -147241;
int16_t x499 = -1;
int32_t x500 = -1;
int32_t t54 = 16266;
int8_t x506 = -1;
uint32_t x508 = UINT32_MAX;
static volatile uint32_t x529 = 2935U;
int8_t x532 = INT8_MIN;
int32_t x540 = -1;
uint64_t t58 = 11411545978402LLU;
int16_t x542 = INT16_MAX;
uint64_t x543 = 9219945008398LLU;
int16_t x559 = INT16_MIN;
volatile uint64_t t60 = 768302427279433479LLU;
static int32_t t62 = -22;
uint32_t t63 = 34542U;
int8_t x594 = INT8_MIN;
int64_t t65 = -4LL;
int16_t x611 = INT16_MAX;
uint16_t x612 = UINT16_MAX;
uint16_t x632 = 95U;
uint32_t x637 = UINT32_MAX;
volatile int16_t x638 = INT16_MAX;
static uint32_t x639 = UINT32_MAX;
int64_t x656 = -1LL;
volatile int32_t t72 = 0;
static uint32_t x662 = 95714929U;
int32_t x672 = INT32_MIN;
volatile int64_t t75 = 54LL;
volatile int16_t x687 = -1;
int32_t t76 = -128836878;
volatile uint16_t x701 = UINT16_MAX;
static int32_t x729 = 39;
static int16_t x730 = INT16_MIN;
int64_t x750 = 10LL;
uint64_t x757 = 290353770LLU;
int16_t x759 = 3144;
int8_t x766 = INT8_MAX;
uint32_t t88 = 592765412U;
int32_t x804 = -285847;
int64_t x805 = 2078152325LL;
uint64_t t91 = 384LLU;
int16_t x817 = 24;
volatile int32_t t92 = 194;
static uint32_t x842 = 424431U;
static volatile int32_t t95 = -16102;
int8_t x864 = -1;
int64_t t96 = 113LL;
volatile uint64_t x865 = 63745498605430LLU;
int16_t x868 = INT16_MIN;
volatile uint32_t x873 = UINT32_MAX;


void f0(void) {
	static uint64_t x1 = 33907930158672820LLU;
	static int64_t x2 = 394432740841LL;
	uint64_t x4 = 1824258LLU;
	volatile uint64_t t0 = 68274527053LLU;

	t0 = (x1<<(x2<=(x3*x4)));

	if (t0 != 33907930158672820LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 1U;
	uint32_t x6 = 15387318U;
	int16_t x7 = INT16_MIN;
	uint16_t x8 = 0U;
	volatile uint32_t t1 = 28429U;

	t1 = (x5<<(x6<=(x7*x8)));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	uint32_t x10 = 301U;
	int8_t x11 = INT8_MIN;
	volatile int32_t x12 = -33158;
	volatile int32_t t2 = 7946;

	t2 = (x9<<(x10<=(x11*x12)));

	if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 22U;
	volatile uint16_t x18 = UINT16_MAX;
	volatile int32_t x19 = 0;
	int64_t x20 = -1LL;

	t3 = (x17<<(x18<=(x19*x20)));

	if (t3 != 22U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x37 = 458U;
	uint32_t x40 = 3904U;
	uint32_t t4 = 6U;

	t4 = (x37<<(x38<=(x39*x40)));

	if (t4 != 458U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = UINT64_MAX;
	int32_t x42 = 228337;
	uint16_t x43 = UINT16_MAX;
	static uint64_t x44 = UINT64_MAX;

	t5 = (x41<<(x42<=(x43*x44)));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x65 = 0U;
	int64_t x66 = INT64_MIN;
	static int32_t t6 = 7;

	t6 = (x65<<(x66<=(x67*x68)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x77 = 354;
	uint16_t x78 = 4364U;
	static volatile int16_t x79 = INT16_MIN;
	static uint64_t x80 = 1284504LLU;

	t7 = (x77<<(x78<=(x79*x80)));

	if (t7 != 708) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x81 = 12U;
	uint64_t x83 = UINT64_MAX;
	static uint32_t x84 = UINT32_MAX;
	int32_t t8 = -4;

	t8 = (x81<<(x82<=(x83*x84)));

	if (t8 != 24) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x137 = 4640U;
	uint64_t x138 = 25538175LLU;
	uint32_t x139 = 88335U;
	volatile int32_t x140 = INT32_MIN;
	volatile uint32_t t9 = 15271U;

	t9 = (x137<<(x138<=(x139*x140)));

	if (t9 != 9280U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x153 = 62U;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MIN;
	static volatile int16_t x156 = INT16_MAX;

	t10 = (x153<<(x154<=(x155*x156)));

	if (t10 != 62) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x157 = 1LL;
	static int32_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -1;

	t11 = (x157<<(x158<=(x159*x160)));

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x161 = 17LLU;
	int8_t x162 = INT8_MAX;
	uint64_t x163 = UINT64_MAX;
	static volatile int16_t x164 = INT16_MIN;

	t12 = (x161<<(x162<=(x163*x164)));

	if (t12 != 34LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x169 = 53;
	static int64_t x170 = INT64_MIN;
	volatile int8_t x171 = 0;
	volatile int16_t x172 = -1;
	volatile int32_t t13 = 56;

	t13 = (x169<<(x170<=(x171*x172)));

	if (t13 != 106) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x181 = 1148113LLU;
	int16_t x182 = -1;
	volatile int64_t x183 = -1LL;
	int8_t x184 = 6;
	static uint64_t t14 = 50147393LLU;

	t14 = (x181<<(x182<=(x183*x184)));

	if (t14 != 1148113LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x185 = 1;
	uint32_t x186 = 2998949U;
	int64_t x187 = -1LL;
	volatile int32_t t15 = -1;

	t15 = (x185<<(x186<=(x187*x188)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x197 = 0U;
	static int16_t x198 = -1885;
	uint64_t x199 = 379513626898695840LLU;
	static volatile int8_t x200 = INT8_MIN;
	volatile int32_t t16 = -8130;

	t16 = (x197<<(x198<=(x199*x200)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x203 = INT8_MIN;
	uint32_t x204 = 53U;

	t17 = (x201<<(x202<=(x203*x204)));

	if (t17 != 913889LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x205 = 8U;
	volatile int8_t x206 = -1;
	uint8_t x207 = 45U;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t18 = 20919283;

	t18 = (x205<<(x206<=(x207*x208)));

	if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x210 = INT16_MAX;
	int16_t x211 = 58;
	int8_t x212 = -1;

	t19 = (x209<<(x210<=(x211*x212)));

	if (t19 != 134LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x213 = 438LL;
	static volatile int64_t x214 = -1LL;
	uint32_t x215 = UINT32_MAX;
	static int16_t x216 = INT16_MIN;
	int64_t t20 = 18LL;

	t20 = (x213<<(x214<=(x215*x216)));

	if (t20 != 876LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x217 = 7;
	int64_t x218 = -1LL;
	int64_t x219 = -1LL;
	volatile int32_t t21 = -142087;

	t21 = (x217<<(x218<=(x219*x220)));

	if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x222 = 5017U;
	uint8_t x224 = UINT8_MAX;
	uint64_t t22 = 3702113277798604802LLU;

	t22 = (x221<<(x222<=(x223*x224)));

	if (t22 != 411859LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x225 = 53U;
	static int8_t x226 = INT8_MAX;
	volatile int32_t x228 = -1;
	volatile int32_t t23 = 3;

	t23 = (x225<<(x226<=(x227*x228)));

	if (t23 != 106) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x233 = 10549124491232403LL;
	volatile uint32_t x235 = 59990997U;
	uint64_t x236 = 1LLU;
	int64_t t24 = 30887337894731LL;

	t24 = (x233<<(x234<=(x235*x236)));

	if (t24 != 10549124491232403LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x245 = 4LL;
	int32_t x246 = -26273;
	static int8_t x247 = 3;
	int64_t t25 = 6446882LL;

	t25 = (x245<<(x246<=(x247*x248)));

	if (t25 != 4LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x249 = 6;
	int8_t x250 = INT8_MAX;
	static int8_t x251 = 4;
	int8_t x252 = INT8_MIN;
	volatile int32_t t26 = 128198;

	t26 = (x249<<(x250<=(x251*x252)));

	if (t26 != 6) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x253 = 16LL;
	static volatile uint32_t x254 = 21071803U;
	uint8_t x255 = UINT8_MAX;
	int64_t t27 = 27258025302LL;

	t27 = (x253<<(x254<=(x255*x256)));

	if (t27 != 32LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x257 = INT8_MAX;
	int64_t x258 = 102LL;
	static int8_t x259 = INT8_MIN;
	volatile int8_t x260 = 8;
	volatile int32_t t28 = 693;

	t28 = (x257<<(x258<=(x259*x260)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t t29 = 3407836U;

	t29 = (x281<<(x282<=(x283*x284)));

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x289 = 2975U;
	int16_t x291 = INT16_MIN;
	volatile int32_t t30 = 185857;

	t30 = (x289<<(x290<=(x291*x292)));

	if (t30 != 5950) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x293 = 3630U;
	int64_t x294 = -1LL;
	int8_t x296 = INT8_MIN;
	volatile uint32_t t31 = 581195754U;

	t31 = (x293<<(x294<=(x295*x296)));

	if (t31 != 3630U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x297 = 1U;
	int64_t x298 = INT64_MIN;
	uint16_t x299 = 459U;
	volatile int32_t t32 = 24133;

	t32 = (x297<<(x298<=(x299*x300)));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x305 = 7164999715104LLU;
	uint32_t x306 = 275U;
	int64_t x307 = 1613LL;

	t33 = (x305<<(x306<=(x307*x308)));

	if (t33 != 14329999430208LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x317 = 6617054118LLU;
	int16_t x318 = INT16_MIN;
	static volatile uint32_t x319 = 13719488U;
	int8_t x320 = 31;
	volatile uint64_t t34 = 476452LLU;

	t34 = (x317<<(x318<=(x319*x320)));

	if (t34 != 6617054118LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x321 = 11U;
	static int8_t x322 = 15;
	int8_t x323 = -8;
	int32_t t35 = 33;

	t35 = (x321<<(x322<=(x323*x324)));

	if (t35 != 22) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x325 = 48724;
	volatile uint16_t x326 = 861U;
	int8_t x327 = 4;
	uint8_t x328 = UINT8_MAX;
	int32_t t36 = 19709;

	t36 = (x325<<(x326<=(x327*x328)));

	if (t36 != 97448) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x337 = 818U;
	int32_t x338 = 25;
	int8_t x339 = INT8_MAX;
	int16_t x340 = INT16_MAX;
	uint32_t t37 = 38403U;

	t37 = (x337<<(x338<=(x339*x340)));

	if (t37 != 1636U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x341 = 5806829LLU;
	uint16_t x342 = UINT16_MAX;
	int16_t x343 = -1;
	volatile uint64_t t38 = 4999539788920LLU;

	t38 = (x341<<(x342<=(x343*x344)));

	if (t38 != 5806829LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x345 = 99659529U;
	uint32_t x346 = 15409865U;
	int32_t x347 = INT32_MIN;
	volatile int64_t x348 = -1LL;
	uint32_t t39 = 678154752U;

	t39 = (x345<<(x346<=(x347*x348)));

	if (t39 != 199319058U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x357 = INT8_MAX;
	int16_t x358 = INT16_MIN;
	volatile int8_t x359 = 7;
	int16_t x360 = -1;
	volatile int32_t t40 = 134529494;

	t40 = (x357<<(x358<=(x359*x360)));

	if (t40 != 254) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x361 = 46905U;
	static int32_t x363 = -1;
	static uint32_t x364 = 13064U;
	volatile uint32_t t41 = 145500U;

	t41 = (x361<<(x362<=(x363*x364)));

	if (t41 != 93810U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x365 = INT16_MAX;
	uint16_t x367 = UINT16_MAX;
	static int32_t t42 = 28368836;

	t42 = (x365<<(x366<=(x367*x368)));

	if (t42 != 65534) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x390 = 2194174;
	int64_t x392 = 6887624207LL;
	static volatile int32_t t43 = 198777494;

	t43 = (x389<<(x390<=(x391*x392)));

	if (t43 != 15) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x405 = 14698713325621588LLU;
	static volatile int32_t x407 = 1;
	static int16_t x408 = INT16_MIN;
	volatile uint64_t t44 = 4237LLU;

	t44 = (x405<<(x406<=(x407*x408)));

	if (t44 != 29397426651243176LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x409 = 54754U;
	int64_t x410 = INT64_MIN;
	uint16_t x411 = 13528U;
	int16_t x412 = INT16_MIN;
	uint32_t t45 = 27U;

	t45 = (x409<<(x410<=(x411*x412)));

	if (t45 != 109508U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x425 = UINT64_MAX;
	static volatile int8_t x426 = -1;
	uint32_t x427 = UINT32_MAX;
	static int16_t x428 = -1;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x425<<(x426<=(x427*x428)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x429 = INT8_MAX;
	uint8_t x430 = UINT8_MAX;
	int32_t x431 = -1;
	volatile int8_t x432 = INT8_MAX;

	t47 = (x429<<(x430<=(x431*x432)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x449 = 8U;
	uint8_t x452 = UINT8_MAX;
	int32_t t48 = 8861;

	t48 = (x449<<(x450<=(x451*x452)));

	if (t48 != 16) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x453 = 7;
	int32_t x454 = INT32_MIN;
	static uint32_t x455 = 7U;
	static int64_t x456 = 16242713733LL;

	t49 = (x453<<(x454<=(x455*x456)));

	if (t49 != 14) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x465 = 35444431;
	static uint32_t x467 = 8U;
	uint16_t x468 = 1U;
	int32_t t50 = -186601;

	t50 = (x465<<(x466<=(x467*x468)));

	if (t50 != 35444431) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x473 = 2;
	volatile int8_t x475 = INT8_MIN;
	volatile int32_t t51 = -1;

	t51 = (x473<<(x474<=(x475*x476)));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x489 = 22;
	static uint16_t x490 = 162U;
	int16_t x491 = 1103;

	t52 = (x489<<(x490<=(x491*x492)));

	if (t52 != 22) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x493 = 2;
	static volatile uint32_t x494 = 102909838U;
	uint32_t x496 = UINT32_MAX;
	volatile int32_t t53 = 501;

	t53 = (x493<<(x494<=(x495*x496)));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x497 = INT8_MAX;
	volatile uint16_t x498 = 379U;

	t54 = (x497<<(x498<=(x499*x500)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x505 = 69U;
	uint64_t x507 = 26122547545719LLU;
	volatile int32_t t55 = 14;

	t55 = (x505<<(x506<=(x507*x508)));

	if (t55 != 69) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x525 = 1;
	volatile int64_t x526 = -1LL;
	int8_t x527 = INT8_MIN;
	uint8_t x528 = 127U;
	volatile int32_t t56 = 234395;

	t56 = (x525<<(x526<=(x527*x528)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x530 = 11093248U;
	static volatile int8_t x531 = INT8_MAX;
	volatile uint32_t t57 = 1611041933U;

	t57 = (x529<<(x530<=(x531*x532)));

	if (t57 != 5870U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x537 = 369485707733852LLU;
	static int32_t x538 = 883704;
	int32_t x539 = -64539;

	t58 = (x537<<(x538<=(x539*x540)));

	if (t58 != 369485707733852LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x541 = INT16_MAX;
	int64_t x544 = INT64_MIN;
	static int32_t t59 = 56056;

	t59 = (x541<<(x542<=(x543*x544)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x557 = 5477LLU;
	int16_t x558 = INT16_MIN;
	int16_t x560 = INT16_MIN;

	t60 = (x557<<(x558<=(x559*x560)));

	if (t60 != 10954LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x565 = UINT16_MAX;
	int16_t x566 = INT16_MIN;
	static uint16_t x567 = 49U;
	volatile uint8_t x568 = 75U;
	volatile int32_t t61 = 849839006;

	t61 = (x565<<(x566<=(x567*x568)));

	if (t61 != 131070) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x573 = 3U;
	uint16_t x574 = UINT16_MAX;
	volatile uint64_t x575 = 66984351LLU;
	uint64_t x576 = UINT64_MAX;

	t62 = (x573<<(x574<=(x575*x576)));

	if (t62 != 6) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x585 = 0U;
	int16_t x586 = INT16_MIN;
	volatile int16_t x587 = -4;
	int8_t x588 = INT8_MIN;

	t63 = (x585<<(x586<=(x587*x588)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x589 = 5;
	uint16_t x590 = 450U;
	volatile uint64_t x591 = UINT64_MAX;
	static uint8_t x592 = UINT8_MAX;
	volatile int32_t t64 = 254000;

	t64 = (x589<<(x590<=(x591*x592)));

	if (t64 != 10) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x593 = 1917531057608LL;
	volatile int64_t x595 = -1LL;
	static uint64_t x596 = 31120627783LLU;

	t65 = (x593<<(x594<=(x595*x596)));

	if (t65 != 1917531057608LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x605 = 14654962LLU;
	int64_t x606 = 0LL;
	int64_t x607 = -1LL;
	static int64_t x608 = 85157LL;
	volatile uint64_t t66 = 33185051044LLU;

	t66 = (x605<<(x606<=(x607*x608)));

	if (t66 != 14654962LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x609 = 34U;
	int64_t x610 = 4071721494643147824LL;
	volatile int32_t t67 = -2000;

	t67 = (x609<<(x610<=(x611*x612)));

	if (t67 != 34) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x625 = 644528234247LL;
	int32_t x626 = -1;
	int8_t x627 = -1;
	static uint16_t x628 = 50U;
	volatile int64_t t68 = 222226890LL;

	t68 = (x625<<(x626<=(x627*x628)));

	if (t68 != 644528234247LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x629 = 417571LLU;
	int64_t x630 = INT64_MAX;
	static int16_t x631 = INT16_MIN;
	static uint64_t t69 = 64370026972LLU;

	t69 = (x629<<(x630<=(x631*x632)));

	if (t69 != 417571LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x633 = UINT32_MAX;
	uint32_t x634 = 15474U;
	int8_t x635 = INT8_MIN;
	uint16_t x636 = UINT16_MAX;
	uint32_t t70 = 17U;

	t70 = (x633<<(x634<=(x635*x636)));

	if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x640 = -62;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = (x637<<(x638<=(x639*x640)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x653 = 13333;
	uint64_t x654 = 15168031787063669LLU;
	uint32_t x655 = 1209953U;

	t72 = (x653<<(x654<=(x655*x656)));

	if (t72 != 26666) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x661 = 4U;
	volatile uint8_t x663 = 2U;
	static int8_t x664 = 1;
	static volatile int32_t t73 = 9;

	t73 = (x661<<(x662<=(x663*x664)));

	if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x669 = INT8_MAX;
	static int16_t x670 = 408;
	int8_t x671 = 1;
	int32_t t74 = -366;

	t74 = (x669<<(x670<=(x671*x672)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x681 = 21LL;
	int32_t x682 = -1;
	uint64_t x683 = 1752776LLU;
	int16_t x684 = -1;

	t75 = (x681<<(x682<=(x683*x684)));

	if (t75 != 21LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x685 = INT8_MAX;
	int16_t x686 = INT16_MAX;
	volatile int16_t x688 = INT16_MAX;

	t76 = (x685<<(x686<=(x687*x688)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x689 = 15237U;
	int32_t x690 = -1;
	int8_t x691 = INT8_MIN;
	int32_t x692 = -1;
	volatile int32_t t77 = 154717;

	t77 = (x689<<(x690<=(x691*x692)));

	if (t77 != 30474) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x702 = INT8_MIN;
	int16_t x703 = INT16_MAX;
	static uint64_t x704 = UINT64_MAX;
	volatile int32_t t78 = -3;

	t78 = (x701<<(x702<=(x703*x704)));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x705 = UINT16_MAX;
	int16_t x706 = INT16_MAX;
	int64_t x707 = 7836266LL;
	int16_t x708 = -1;
	int32_t t79 = 14;

	t79 = (x705<<(x706<=(x707*x708)));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x709 = 52;
	static int16_t x710 = -275;
	volatile int8_t x711 = INT8_MIN;
	int16_t x712 = INT16_MIN;
	int32_t t80 = 9207913;

	t80 = (x709<<(x710<=(x711*x712)));

	if (t80 != 104) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x731 = 461514755LLU;
	uint64_t x732 = 1427LLU;
	int32_t t81 = 1343847;

	t81 = (x729<<(x730<=(x731*x732)));

	if (t81 != 39) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x737 = 4U;
	int32_t x738 = -662472686;
	int8_t x739 = INT8_MAX;
	int16_t x740 = 41;
	static volatile uint32_t t82 = 1781U;

	t82 = (x737<<(x738<=(x739*x740)));

	if (t82 != 8U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x741 = UINT32_MAX;
	uint8_t x742 = 0U;
	int8_t x743 = INT8_MIN;
	volatile uint8_t x744 = 3U;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x741<<(x742<=(x743*x744)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x749 = 1U;
	static int64_t x751 = -1129LL;
	uint16_t x752 = 225U;
	volatile int32_t t84 = 59465540;

	t84 = (x749<<(x750<=(x751*x752)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x758 = 94970;
	volatile int16_t x760 = 3;
	static volatile uint64_t t85 = 24872635682604LLU;

	t85 = (x757<<(x758<=(x759*x760)));

	if (t85 != 290353770LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x765 = 919993643788653LL;
	static uint32_t x767 = 10U;
	static int8_t x768 = INT8_MAX;
	int64_t t86 = 7565598420078LL;

	t86 = (x765<<(x766<=(x767*x768)));

	if (t86 != 1839987287577306LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x777 = 0U;
	uint32_t x778 = UINT32_MAX;
	int8_t x779 = INT8_MAX;
	static volatile int16_t x780 = -5;
	volatile int32_t t87 = -388813471;

	t87 = (x777<<(x778<=(x779*x780)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x793 = 20U;
	volatile int16_t x794 = -37;
	static int8_t x795 = -1;
	static uint32_t x796 = 11780273U;

	t88 = (x793<<(x794<=(x795*x796)));

	if (t88 != 20U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x801 = 8345909076860LL;
	static uint16_t x802 = 362U;
	uint16_t x803 = 23U;
	volatile int64_t t89 = 295361LL;

	t89 = (x801<<(x802<=(x803*x804)));

	if (t89 != 8345909076860LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x806 = UINT8_MAX;
	uint16_t x807 = UINT16_MAX;
	static volatile uint64_t x808 = 920421LLU;
	volatile int64_t t90 = 2607504493670982898LL;

	t90 = (x805<<(x806<=(x807*x808)));

	if (t90 != 4156304650LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x809 = UINT64_MAX;
	volatile uint64_t x810 = 2375114737976918889LLU;
	volatile int8_t x811 = INT8_MAX;
	int64_t x812 = -1LL;

	t91 = (x809<<(x810<=(x811*x812)));

	if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x818 = -1LL;
	uint16_t x819 = 3704U;
	int8_t x820 = -1;

	t92 = (x817<<(x818<=(x819*x820)));

	if (t92 != 24) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x841 = 72070;
	int8_t x843 = INT8_MIN;
	static int16_t x844 = 3159;
	int32_t t93 = 20653;

	t93 = (x841<<(x842<=(x843*x844)));

	if (t93 != 144140) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x845 = 104U;
	static volatile int16_t x846 = 9;
	int32_t x847 = 44696;
	int8_t x848 = 0;
	static volatile int32_t t94 = 1359;

	t94 = (x845<<(x846<=(x847*x848)));

	if (t94 != 104) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x857 = 36;
	int16_t x858 = INT16_MIN;
	int8_t x859 = INT8_MIN;
	uint64_t x860 = 496763470420262LLU;

	t95 = (x857<<(x858<=(x859*x860)));

	if (t95 != 36) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x861 = 1427165256048851044LL;
	static uint8_t x862 = 1U;
	volatile int32_t x863 = INT32_MAX;

	t96 = (x861<<(x862<=(x863*x864)));

	if (t96 != 1427165256048851044LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x866 = -1LL;
	uint16_t x867 = 20345U;
	uint64_t t97 = 4556063LLU;

	t97 = (x865<<(x866<=(x867*x868)));

	if (t97 != 63745498605430LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x874 = INT16_MAX;
	int16_t x875 = INT16_MIN;
	static volatile uint32_t x876 = 15U;
	volatile uint32_t t98 = 3839U;

	t98 = (x873<<(x874<=(x875*x876)));

	if (t98 != 4294967294U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x877 = 418280265698LLU;
	uint8_t x878 = 63U;
	int32_t x879 = INT32_MAX;
	int64_t x880 = -171469433LL;
	volatile uint64_t t99 = 34436796805086346LLU;

	t99 = (x877<<(x878<=(x879*x880)));

	if (t99 != 418280265698LLU) { NG(); } else { ; }
	
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

