#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
static uint32_t t0 = 39831U;
static volatile int64_t x10 = INT64_MIN;
volatile uint8_t x11 = 28U;
uint64_t x22 = 37LLU;
uint64_t t3 = 65698857LLU;
int64_t x33 = INT64_MIN;
volatile uint64_t x41 = 1683LLU;
int8_t x50 = 18;
int32_t t7 = -12780;
static volatile uint32_t t9 = 0U;
static uint64_t x71 = 56392794LLU;
int16_t x78 = INT16_MIN;
static int16_t x84 = -1;
volatile uint64_t x98 = 3813218LLU;
volatile uint64_t t16 = 65213161899344LLU;
uint32_t x101 = 103019026U;
int64_t x108 = INT64_MAX;
int64_t x109 = 152214LL;
static int32_t x119 = INT32_MIN;
int32_t x123 = INT32_MIN;
uint16_t x124 = UINT16_MAX;
volatile int64_t t21 = 237471605159051378LL;
int32_t x127 = 61;
int32_t t22 = -5391251;
int64_t x139 = INT64_MIN;
int32_t x156 = -1;
static uint32_t t25 = 61U;
int64_t x162 = 1LL;
int64_t x173 = INT64_MIN;
uint16_t x176 = 68U;
int8_t x184 = INT8_MAX;
int32_t x189 = INT32_MIN;
int64_t x191 = INT64_MIN;
uint8_t x197 = 10U;
uint16_t x200 = 1467U;
static int64_t x201 = -1LL;
volatile int64_t t32 = 5342309555LL;
int16_t x219 = INT16_MIN;
volatile uint32_t t40 = 96351205U;
int8_t x289 = 49;
int32_t x297 = 9045399;
int64_t x298 = INT64_MIN;
int8_t x300 = INT8_MIN;
uint32_t x301 = UINT32_MAX;
uint8_t x311 = 6U;
int64_t x338 = INT64_MAX;
int32_t x410 = 55102466;
volatile int8_t x411 = -1;
int32_t x425 = -70893;
int8_t x430 = 0;
int16_t x432 = INT16_MIN;
int32_t x443 = -49;
int16_t x464 = INT16_MAX;
int16_t x466 = -425;
static volatile uint32_t t61 = 1U;
static uint32_t x479 = UINT32_MAX;
volatile int64_t x480 = INT64_MAX;
uint32_t t62 = 191U;
volatile int32_t t63 = 57;
int8_t x490 = INT8_MAX;
uint64_t t65 = 128960LLU;
int32_t x505 = 1782;
int64_t x507 = INT64_MIN;
int32_t t66 = -566103;
volatile int64_t x511 = INT64_MIN;
int8_t x527 = INT8_MIN;
static int64_t x528 = 3LL;
uint16_t x530 = 14211U;
uint32_t x534 = UINT32_MAX;
volatile uint32_t t72 = 1637202067U;
int32_t x549 = INT32_MIN;
volatile uint16_t x550 = 3U;
volatile int16_t x595 = INT16_MIN;
int16_t x603 = -12;
volatile int64_t x604 = INT64_MAX;
volatile uint64_t x610 = 48677153754LLU;
static uint64_t t78 = 6922433163148693LLU;
int32_t x622 = 7883;
volatile int32_t x623 = INT32_MIN;
volatile uint32_t x626 = 2613U;
int64_t t82 = -879425192LL;
uint32_t t84 = 11U;
static int64_t x654 = -9LL;
int32_t x669 = INT32_MIN;
int16_t x688 = -1;
static int8_t x694 = INT8_MIN;
volatile int8_t x703 = INT8_MIN;
int64_t x723 = -171540496LL;
uint64_t t97 = 9366189206482128LLU;
volatile int8_t x735 = INT8_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint32_t x2 = 30952U;
	int32_t x3 = INT32_MIN;

	t0 = (x1&(x2%(x3<=x4)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x9 = 675858U;
	uint64_t x12 = 181537873269252402LLU;
	volatile int64_t t1 = -2062197764629LL;

	t1 = (x9&(x10%(x11<=x12)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = 10595;
	int16_t x18 = INT16_MIN;
	static int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MIN;
	volatile int32_t t2 = 948022;

	t2 = (x17&(x18%(x19<=x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = 200;
	int16_t x23 = -1;
	int8_t x24 = 1;

	t3 = (x21&(x22%(x23<=x24)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x34 = 0;
	volatile uint8_t x35 = UINT8_MAX;
	uint64_t x36 = 98671LLU;
	volatile int64_t t4 = -66441699416LL;

	t4 = (x33&(x34%(x35<=x36)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x42 = -5676512;
	uint64_t x43 = 33399151LLU;
	volatile int32_t x44 = INT32_MAX;
	uint64_t t5 = 3LLU;

	t5 = (x41&(x42%(x43<=x44)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = INT8_MAX;
	volatile int64_t x46 = 838850613539LL;
	static uint8_t x47 = 9U;
	volatile uint64_t x48 = UINT64_MAX;
	volatile int64_t t6 = -2254965115308907LL;

	t6 = (x45&(x46%(x47<=x48)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = 60U;
	uint8_t x51 = 11U;
	uint8_t x52 = 119U;

	t7 = (x49&(x50%(x51<=x52)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x57 = -1;
	uint8_t x58 = 36U;
	int16_t x59 = INT16_MIN;
	static int64_t x60 = 1099765LL;
	static volatile int32_t t8 = -104921;

	t8 = (x57&(x58%(x59<=x60)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MIN;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = INT64_MIN;
	static uint16_t x64 = 154U;

	t9 = (x61&(x62%(x63<=x64)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = -55;
	int16_t x70 = INT16_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t10 = 14400214;

	t10 = (x69&(x70%(x71<=x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	int64_t x75 = INT64_MIN;
	int16_t x76 = INT16_MIN;
	int32_t t11 = -2;

	t11 = (x73&(x74%(x75<=x76)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = INT64_MIN;
	static int16_t x79 = INT16_MAX;
	static uint16_t x80 = UINT16_MAX;
	int64_t t12 = -886199LL;

	t12 = (x77&(x78%(x79<=x80)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = INT8_MAX;
	volatile uint8_t x82 = 25U;
	int16_t x83 = -9;
	int32_t t13 = 3226;

	t13 = (x81&(x82%(x83<=x84)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x85 = 19;
	int16_t x86 = INT16_MIN;
	volatile int16_t x87 = INT16_MIN;
	volatile int16_t x88 = INT16_MIN;
	int32_t t14 = 18;

	t14 = (x85&(x86%(x87<=x88)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x89 = 3U;
	uint64_t x90 = 127034112652981348LLU;
	static int8_t x91 = INT8_MAX;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t15 = 1526385685LLU;

	t15 = (x89&(x90%(x91<=x92)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = INT64_MAX;
	int8_t x99 = -1;
	volatile int8_t x100 = INT8_MAX;

	t16 = (x97&(x98%(x99<=x100)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x102 = 15;
	int64_t x103 = -1LL;
	static int8_t x104 = 26;
	static volatile uint32_t t17 = 7013075U;

	t17 = (x101&(x102%(x103<=x104)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = INT16_MAX;
	int32_t x106 = INT32_MAX;
	uint32_t x107 = UINT32_MAX;
	static volatile int32_t t18 = -653;

	t18 = (x105&(x106%(x107<=x108)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x110 = INT32_MAX;
	int32_t x111 = INT32_MAX;
	uint32_t x112 = UINT32_MAX;
	int64_t t19 = -1LL;

	t19 = (x109&(x110%(x111<=x112)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x117 = -1;
	static volatile uint64_t x118 = 7731365796LLU;
	static volatile int32_t x120 = -1;
	static uint64_t t20 = 265036556LLU;

	t20 = (x117&(x118%(x119<=x120)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MAX;
	int64_t x122 = INT64_MAX;

	t21 = (x121&(x122%(x123<=x124)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x125 = 10U;
	int32_t x126 = -268407870;
	uint8_t x128 = UINT8_MAX;

	t22 = (x125&(x126%(x127<=x128)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x137 = -1LL;
	int64_t x138 = -1479839945LL;
	int8_t x140 = INT8_MIN;
	int64_t t23 = -12518LL;

	t23 = (x137&(x138%(x139<=x140)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x145 = INT8_MIN;
	static uint32_t x146 = 46U;
	int32_t x147 = -1;
	uint8_t x148 = UINT8_MAX;
	uint32_t t24 = 182568U;

	t24 = (x145&(x146%(x147<=x148)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x153 = INT16_MIN;
	uint32_t x154 = 1451664715U;
	volatile int64_t x155 = -3798109342834889038LL;

	t25 = (x153&(x154%(x155<=x156)));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x161 = INT8_MIN;
	static uint8_t x163 = 27U;
	int64_t x164 = INT64_MAX;
	static volatile int64_t t26 = -42419727757LL;

	t26 = (x161&(x162%(x163<=x164)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x174 = 0U;
	uint8_t x175 = 1U;
	int64_t t27 = 677108981LL;

	t27 = (x173&(x174%(x175<=x176)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x181 = -1LL;
	static uint8_t x182 = 2U;
	volatile int16_t x183 = -1;
	volatile int64_t t28 = 4498LL;

	t28 = (x181&(x182%(x183<=x184)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x190 = INT32_MAX;
	int16_t x192 = INT16_MAX;
	volatile int32_t t29 = -681;

	t29 = (x189&(x190%(x191<=x192)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x193 = -1;
	uint64_t x194 = 2LLU;
	volatile int16_t x195 = INT16_MIN;
	int32_t x196 = -1;
	uint64_t t30 = 1281180LLU;

	t30 = (x193&(x194%(x195<=x196)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x198 = UINT32_MAX;
	int8_t x199 = 0;
	static volatile uint32_t t31 = 120U;

	t31 = (x197&(x198%(x199<=x200)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x202 = INT64_MIN;
	volatile uint8_t x203 = 1U;
	volatile uint64_t x204 = UINT64_MAX;

	t32 = (x201&(x202%(x203<=x204)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x205 = -276729102479369LL;
	static uint8_t x206 = 2U;
	uint16_t x207 = 1183U;
	int16_t x208 = INT16_MAX;
	volatile int64_t t33 = 239115298411700092LL;

	t33 = (x205&(x206%(x207<=x208)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x217 = INT16_MAX;
	uint64_t x218 = 6487436066LLU;
	static int8_t x220 = -1;
	volatile uint64_t t34 = 549344LLU;

	t34 = (x217&(x218%(x219<=x220)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x225 = 95769LLU;
	int8_t x226 = 41;
	int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MAX;
	uint64_t t35 = 327223235489069LLU;

	t35 = (x225&(x226%(x227<=x228)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x241 = 0U;
	int64_t x242 = -1LL;
	static int64_t x243 = INT64_MIN;
	volatile int64_t x244 = -1LL;
	volatile int64_t t36 = -62155172428059841LL;

	t36 = (x241&(x242%(x243<=x244)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x245 = 700569950979LLU;
	uint16_t x246 = 2172U;
	volatile int8_t x247 = INT8_MIN;
	static int64_t x248 = -1LL;
	volatile uint64_t t37 = 793019324LLU;

	t37 = (x245&(x246%(x247<=x248)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x253 = UINT64_MAX;
	int8_t x254 = -1;
	int16_t x255 = -5947;
	uint8_t x256 = UINT8_MAX;
	uint64_t t38 = 16301LLU;

	t38 = (x253&(x254%(x255<=x256)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x261 = INT32_MAX;
	int64_t x262 = INT64_MIN;
	static volatile int8_t x263 = INT8_MIN;
	uint16_t x264 = 7U;
	volatile int64_t t39 = -1506370174505LL;

	t39 = (x261&(x262%(x263<=x264)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x277 = 65207740U;
	uint32_t x278 = 4011U;
	static int16_t x279 = INT16_MIN;
	volatile int8_t x280 = INT8_MIN;

	t40 = (x277&(x278%(x279<=x280)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x281 = 0U;
	int16_t x282 = -1;
	int64_t x283 = -2966LL;
	static uint16_t x284 = 100U;
	uint32_t t41 = 42505U;

	t41 = (x281&(x282%(x283<=x284)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x290 = -2;
	int32_t x291 = INT32_MIN;
	int8_t x292 = 20;
	static int32_t t42 = -5;

	t42 = (x289&(x290%(x291<=x292)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x299 = 11824U;
	int64_t t43 = -1539264838LL;

	t43 = (x297&(x298%(x299<=x300)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x302 = 903499424628684LL;
	uint32_t x303 = 135607385U;
	volatile int32_t x304 = INT32_MIN;
	volatile int64_t t44 = -2LL;

	t44 = (x301&(x302%(x303<=x304)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x309 = INT32_MAX;
	int16_t x310 = -1;
	uint64_t x312 = 6192652LLU;
	volatile int32_t t45 = -230173366;

	t45 = (x309&(x310%(x311<=x312)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x337 = 122018122726333LLU;
	static int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MAX;
	static uint64_t t46 = 4LLU;

	t46 = (x337&(x338%(x339<=x340)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x345 = 2951491845LLU;
	static uint64_t x346 = 1766300115210855975LLU;
	static uint32_t x347 = 2012U;
	int8_t x348 = -1;
	volatile uint64_t t47 = 19879637335254681LLU;

	t47 = (x345&(x346%(x347<=x348)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x349 = INT64_MAX;
	static int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	uint8_t x352 = UINT8_MAX;
	volatile int64_t t48 = 2LL;

	t48 = (x349&(x350%(x351<=x352)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x353 = UINT8_MAX;
	uint16_t x354 = UINT16_MAX;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MAX;
	static volatile int32_t t49 = 13062;

	t49 = (x353&(x354%(x355<=x356)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x357 = INT64_MAX;
	uint16_t x358 = 27479U;
	uint32_t x359 = 433878781U;
	volatile uint32_t x360 = UINT32_MAX;
	static int64_t t50 = -3737173838458120159LL;

	t50 = (x357&(x358%(x359<=x360)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x385 = 86545276002885LL;
	uint32_t x386 = 1U;
	uint16_t x387 = 964U;
	int16_t x388 = INT16_MAX;
	volatile int64_t t51 = 2651929229LL;

	t51 = (x385&(x386%(x387<=x388)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x409 = 4U;
	int32_t x412 = INT32_MAX;
	int32_t t52 = 10656299;

	t52 = (x409&(x410%(x411<=x412)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x426 = INT32_MIN;
	int64_t x427 = INT64_MIN;
	uint16_t x428 = 438U;
	volatile int32_t t53 = 448299413;

	t53 = (x425&(x426%(x427<=x428)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x429 = -13;
	volatile uint32_t x431 = 1619U;
	volatile int32_t t54 = 348307894;

	t54 = (x429&(x430%(x431<=x432)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x441 = INT32_MAX;
	volatile uint16_t x442 = 6U;
	uint16_t x444 = 46U;
	int32_t t55 = -27747;

	t55 = (x441&(x442%(x443<=x444)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x445 = -1;
	static uint16_t x446 = 1016U;
	int32_t x447 = INT32_MIN;
	int32_t x448 = INT32_MIN;
	volatile int32_t t56 = 0;

	t56 = (x445&(x446%(x447<=x448)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x453 = INT8_MIN;
	uint8_t x454 = UINT8_MAX;
	int64_t x455 = -110908405708LL;
	static int8_t x456 = -1;
	int32_t t57 = -30;

	t57 = (x453&(x454%(x455<=x456)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x457 = -1;
	uint64_t x458 = 5459351758168965805LLU;
	int64_t x459 = -51015202045431LL;
	uint16_t x460 = 23921U;
	volatile uint64_t t58 = 393306741975639673LLU;

	t58 = (x457&(x458%(x459<=x460)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x461 = -2;
	int8_t x462 = INT8_MAX;
	static uint16_t x463 = 7489U;
	int32_t t59 = 16462;

	t59 = (x461&(x462%(x463<=x464)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x465 = 1706154249U;
	int8_t x467 = 0;
	static uint8_t x468 = UINT8_MAX;
	volatile uint32_t t60 = 31U;

	t60 = (x465&(x466%(x467<=x468)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x469 = INT32_MAX;
	uint32_t x470 = 25U;
	static uint32_t x471 = 1360393704U;
	int32_t x472 = -1;

	t61 = (x469&(x470%(x471<=x472)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x477 = 186081171U;
	uint8_t x478 = 92U;

	t62 = (x477&(x478%(x479<=x480)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x481 = UINT16_MAX;
	uint16_t x482 = 469U;
	int32_t x483 = -44187;
	volatile int8_t x484 = -1;

	t63 = (x481&(x482%(x483<=x484)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x489 = 1;
	volatile int64_t x491 = INT64_MIN;
	int8_t x492 = -5;
	volatile int32_t t64 = -5801;

	t64 = (x489&(x490%(x491<=x492)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x497 = 665165LLU;
	int8_t x498 = INT8_MAX;
	int64_t x499 = INT64_MIN;
	static int8_t x500 = -1;

	t65 = (x497&(x498%(x499<=x500)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x506 = -55;
	static int16_t x508 = 1439;

	t66 = (x505&(x506%(x507<=x508)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x509 = INT64_MAX;
	int32_t x510 = -1;
	static int16_t x512 = INT16_MIN;
	int64_t t67 = 8130103649102046LL;

	t67 = (x509&(x510%(x511<=x512)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x513 = 2U;
	int64_t x514 = INT64_MIN;
	int64_t x515 = -1LL;
	uint16_t x516 = 5U;
	int64_t t68 = 239LL;

	t68 = (x513&(x514%(x515<=x516)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x521 = INT64_MAX;
	static int64_t x522 = INT64_MIN;
	static int32_t x523 = INT32_MIN;
	volatile int64_t x524 = -1LL;
	int64_t t69 = -403329LL;

	t69 = (x521&(x522%(x523<=x524)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x525 = 8616130U;
	static int64_t x526 = INT64_MIN;
	static volatile int64_t t70 = -2588238185584736LL;

	t70 = (x525&(x526%(x527<=x528)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x529 = -323880;
	int32_t x531 = INT32_MIN;
	int16_t x532 = -11290;
	volatile int32_t t71 = 311;

	t71 = (x529&(x530%(x531<=x532)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x533 = 55145356U;
	int64_t x535 = INT64_MIN;
	uint32_t x536 = 3U;

	t72 = (x533&(x534%(x535<=x536)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x551 = INT64_MIN;
	static uint8_t x552 = UINT8_MAX;
	int32_t t73 = 3312;

	t73 = (x549&(x550%(x551<=x552)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x573 = UINT16_MAX;
	volatile uint16_t x574 = 13101U;
	int64_t x575 = -1LL;
	volatile int16_t x576 = -1;
	int32_t t74 = -123;

	t74 = (x573&(x574%(x575<=x576)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x593 = 1033418;
	int16_t x594 = INT16_MIN;
	int16_t x596 = -1;
	volatile int32_t t75 = 66;

	t75 = (x593&(x594%(x595<=x596)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x597 = -390905122134705LL;
	int64_t x598 = 96201810747LL;
	static uint64_t x599 = 16LLU;
	volatile int32_t x600 = -1686;
	int64_t t76 = 49LL;

	t76 = (x597&(x598%(x599<=x600)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x601 = -1;
	int8_t x602 = INT8_MIN;
	int32_t t77 = 32756;

	t77 = (x601&(x602%(x603<=x604)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x609 = 3661627733180942LLU;
	uint16_t x611 = 12628U;
	int16_t x612 = INT16_MAX;

	t78 = (x609&(x610%(x611<=x612)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x617 = -1LL;
	volatile uint16_t x618 = 0U;
	uint32_t x619 = 574035U;
	static int64_t x620 = INT64_MAX;
	volatile int64_t t79 = 7034157LL;

	t79 = (x617&(x618%(x619<=x620)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x621 = INT8_MIN;
	int32_t x624 = -11665259;
	int32_t t80 = -3932276;

	t80 = (x621&(x622%(x623<=x624)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x625 = INT32_MAX;
	int32_t x627 = INT32_MIN;
	static int8_t x628 = INT8_MIN;
	static volatile uint32_t t81 = 0U;

	t81 = (x625&(x626%(x627<=x628)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x633 = 35531808LL;
	static int64_t x634 = -1LL;
	volatile uint32_t x635 = 48982871U;
	static int32_t x636 = -1;

	t82 = (x633&(x634%(x635<=x636)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x637 = -1;
	uint16_t x638 = 3U;
	volatile int32_t x639 = -1;
	static int32_t x640 = -1;
	int32_t t83 = -38363;

	t83 = (x637&(x638%(x639<=x640)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x641 = 19952U;
	static int32_t x642 = -1;
	int64_t x643 = INT64_MIN;
	volatile int64_t x644 = 19LL;

	t84 = (x641&(x642%(x643<=x644)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x645 = UINT64_MAX;
	volatile uint64_t x646 = 579223759312LLU;
	static int16_t x647 = INT16_MIN;
	static volatile int8_t x648 = INT8_MAX;
	uint64_t t85 = 30LLU;

	t85 = (x645&(x646%(x647<=x648)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x649 = INT32_MIN;
	int16_t x650 = INT16_MIN;
	volatile int8_t x651 = -1;
	uint16_t x652 = UINT16_MAX;
	static int32_t t86 = -2060771;

	t86 = (x649&(x650%(x651<=x652)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x653 = INT16_MAX;
	int64_t x655 = -664250953LL;
	int64_t x656 = -1LL;
	static int64_t t87 = -306156485368380116LL;

	t87 = (x653&(x654%(x655<=x656)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x657 = 52U;
	int32_t x658 = -2141274;
	int16_t x659 = INT16_MIN;
	int16_t x660 = -1;
	volatile int32_t t88 = -21;

	t88 = (x657&(x658%(x659<=x660)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x670 = 42180;
	int16_t x671 = -1;
	uint8_t x672 = 3U;
	static int32_t t89 = 62240177;

	t89 = (x669&(x670%(x671<=x672)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x681 = -30;
	static uint64_t x682 = 2086045006874040602LLU;
	static int32_t x683 = INT32_MIN;
	static int16_t x684 = INT16_MIN;
	uint64_t t90 = 3548655LLU;

	t90 = (x681&(x682%(x683<=x684)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x685 = 8911;
	volatile int64_t x686 = INT64_MAX;
	uint32_t x687 = UINT32_MAX;
	int64_t t91 = -25945614715992LL;

	t91 = (x685&(x686%(x687<=x688)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x693 = INT32_MIN;
	uint32_t x695 = 15U;
	int32_t x696 = -51;
	static volatile int32_t t92 = -1;

	t92 = (x693&(x694%(x695<=x696)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x697 = 3U;
	int64_t x698 = 13433290619376LL;
	int8_t x699 = -23;
	static int8_t x700 = INT8_MAX;
	volatile int64_t t93 = 1084LL;

	t93 = (x697&(x698%(x699<=x700)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x701 = 19257U;
	int64_t x702 = INT64_MIN;
	int32_t x704 = 1;
	int64_t t94 = 8LL;

	t94 = (x701&(x702%(x703<=x704)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x705 = INT64_MAX;
	int32_t x706 = 331;
	static int32_t x707 = -1;
	int64_t x708 = -1LL;
	static volatile int64_t t95 = -1238LL;

	t95 = (x705&(x706%(x707<=x708)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x709 = 640150090;
	int32_t x710 = 153304;
	uint32_t x711 = 45224041U;
	static uint32_t x712 = 394091879U;
	static volatile int32_t t96 = 423248;

	t96 = (x709&(x710%(x711<=x712)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x721 = 1141631354946LLU;
	int32_t x722 = INT32_MAX;
	volatile int8_t x724 = INT8_MIN;

	t97 = (x721&(x722%(x723<=x724)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x725 = -1LL;
	static int8_t x726 = 0;
	uint32_t x727 = 6139996U;
	int8_t x728 = INT8_MIN;
	volatile int64_t t98 = -15011LL;

	t98 = (x725&(x726%(x727<=x728)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x733 = INT32_MIN;
	int64_t x734 = INT64_MAX;
	static int16_t x736 = INT16_MAX;
	volatile int64_t t99 = 23LL;

	t99 = (x733&(x734%(x735<=x736)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

