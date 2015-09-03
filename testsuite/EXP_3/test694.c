#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -4;
int16_t x7 = INT16_MIN;
volatile uint64_t x11 = 1424179566LLU;
static uint64_t t2 = 752557LLU;
int16_t x20 = -2;
static uint64_t x30 = UINT64_MAX;
int8_t x31 = INT8_MIN;
volatile uint16_t x33 = UINT16_MAX;
int8_t x34 = INT8_MAX;
int32_t t6 = 656227909;
int64_t t8 = 2499557855350LL;
int64_t x59 = INT64_MIN;
volatile int64_t t9 = 7781LL;
volatile int32_t x75 = 1;
uint64_t t11 = 1510639LLU;
uint64_t t12 = 3544LLU;
static volatile int8_t x96 = INT8_MIN;
int64_t t13 = -501448281750LL;
int8_t x109 = -1;
static volatile uint64_t t14 = 2523769815545350LLU;
static uint64_t t15 = 16722190074921LLU;
uint64_t x121 = UINT64_MAX;
int8_t x123 = -1;
uint8_t x137 = 46U;
int8_t x150 = -1;
int64_t x157 = -8025438200LL;
volatile uint32_t x177 = UINT32_MAX;
int64_t x178 = 64111LL;
volatile uint64_t x187 = 221944400LLU;
int32_t x213 = -3;
int64_t x214 = INT64_MIN;
static volatile uint32_t t33 = 34110051U;
volatile int8_t x281 = -1;
volatile uint64_t t35 = 3772412923424125LLU;
uint8_t x293 = UINT8_MAX;
volatile int16_t x299 = INT16_MIN;
int32_t x300 = 770541091;
uint64_t t37 = 453LLU;
int16_t x302 = -1;
int32_t x305 = INT32_MIN;
int16_t x306 = -1;
int8_t x311 = -1;
uint64_t x314 = UINT64_MAX;
int32_t x329 = -1;
static uint32_t x332 = 63U;
volatile int64_t t43 = -92597LL;
int32_t x341 = 26587937;
volatile int32_t x344 = -3094510;
int16_t x345 = -1;
uint64_t x346 = 12938LLU;
int32_t x348 = INT32_MAX;
static uint64_t t47 = 3994LLU;
uint32_t x351 = 7U;
int32_t x352 = INT32_MIN;
volatile int64_t t49 = -6372195482375762LL;
volatile uint16_t x379 = UINT16_MAX;
volatile uint64_t x392 = UINT64_MAX;
volatile int64_t t55 = -53846489831LL;
int64_t x431 = -58300LL;
uint64_t x438 = 526178818625LLU;
int64_t x442 = 36559169LL;
static int16_t x444 = 10578;
int8_t x445 = -30;
int8_t x454 = -1;
uint64_t x457 = 35107610117LLU;
static int32_t x476 = -6024;
volatile int64_t t65 = -6LL;
static uint64_t x481 = 26167881LLU;
int32_t x483 = 2430;
volatile int16_t x485 = 3;
int64_t x487 = -1LL;
int16_t x489 = 0;
int16_t x498 = INT16_MIN;
int8_t x504 = INT8_MAX;
int16_t x514 = -1;
uint64_t x517 = 4124894LLU;
int8_t x530 = INT8_MIN;
int64_t x531 = -1LL;
uint16_t x537 = 0U;
static volatile uint32_t x542 = 5U;
uint64_t t76 = 5594167303LLU;
static int16_t x550 = INT16_MIN;
int64_t x551 = INT64_MAX;
volatile int64_t t77 = -15836407LL;
volatile uint8_t x557 = UINT8_MAX;
uint16_t x562 = UINT16_MAX;
int32_t x578 = 4031;
static uint32_t x579 = 12552003U;
int8_t x580 = INT8_MAX;
uint16_t x589 = UINT16_MAX;
uint64_t x591 = UINT64_MAX;
static volatile uint64_t t83 = 5LLU;
int8_t x598 = 10;
int32_t x604 = INT32_MIN;
static volatile uint32_t t85 = 7U;
volatile int8_t x620 = INT8_MIN;
static uint64_t x630 = UINT64_MAX;
volatile int64_t x635 = INT64_MIN;
int16_t x643 = 7244;
volatile int64_t t96 = 496LL;
int64_t t99 = -22353906394LL;


void f0(void) {
	static int16_t x1 = -3;
	int16_t x3 = INT16_MAX;
	uint32_t x4 = 16U;
	uint32_t t0 = 21381U;

	t0 = ((x1-x2)%(x3%x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 0;
	int16_t x6 = -1;
	int64_t x8 = INT64_MIN;
	int64_t t1 = -2586183436104LL;

	t1 = ((x5-x6)%(x7%x8));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -24860LL;
	int32_t x10 = -5;
	static volatile int32_t x12 = -1;

	t2 = ((x9-x10)%(x11%x12));

	if (t2 != 422816059LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	uint32_t x18 = UINT32_MAX;
	int64_t x19 = -1LL;
	volatile int64_t t3 = -5LL;

	t3 = ((x17-x18)%(x19%x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = INT16_MAX;
	uint64_t x26 = 7686735602LLU;
	int64_t x27 = INT64_MIN;
	static volatile uint16_t x28 = UINT16_MAX;
	volatile uint64_t t4 = 1039LLU;

	t4 = ((x25-x26)%(x27%x28));

	if (t4 != 18446744066022848781LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = -814369;
	uint8_t x32 = UINT8_MAX;
	uint64_t t5 = 27796LLU;

	t5 = ((x29-x30)%(x31%x32));

	if (t5 != 18446744073708737248LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x35 = -93;
	int16_t x36 = INT16_MIN;

	t6 = ((x33-x34)%(x35%x36));

	if (t6 != 29) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 20U;
	int32_t x38 = -1;
	uint32_t x39 = 8U;
	int8_t x40 = INT8_MAX;
	volatile uint32_t t7 = 6U;

	t7 = ((x37-x38)%(x39%x40));

	if (t7 != 5U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	volatile int64_t x46 = INT64_MIN;
	static uint32_t x47 = UINT32_MAX;
	int8_t x48 = INT8_MIN;

	t8 = ((x45-x46)%(x47%x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x57 = 3801U;
	volatile int8_t x58 = INT8_MAX;
	uint8_t x60 = UINT8_MAX;

	t9 = ((x57-x58)%(x59%x60));

	if (t9 != 90LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x61 = 2787;
	uint16_t x62 = 253U;
	static int8_t x63 = -1;
	volatile int32_t x64 = INT32_MAX;
	int32_t t10 = -2020016;

	t10 = ((x61-x62)%(x63%x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x73 = UINT32_MAX;
	volatile uint64_t x74 = 6885044LLU;
	static volatile uint16_t x76 = UINT16_MAX;

	t11 = ((x73-x74)%(x75%x76));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x89 = 180LLU;
	int64_t x90 = 68317686834708218LL;
	static int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MIN;

	t12 = ((x89-x90)%(x91%x92));

	if (t12 != 18378426386874843578LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x93 = -1;
	uint8_t x94 = 85U;
	int64_t x95 = 8921891797816295LL;

	t13 = ((x93-x94)%(x95%x96));

	if (t13 != -86LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x110 = -15896;
	static int16_t x111 = INT16_MAX;
	uint64_t x112 = 10341409886760614LLU;

	t14 = ((x109-x110)%(x111%x112));

	if (t14 != 15895LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x113 = 7925541247LLU;
	int64_t x114 = INT64_MIN;
	volatile uint8_t x115 = UINT8_MAX;
	static volatile int64_t x116 = -112617LL;

	t15 = ((x113-x114)%(x115%x116));

	if (t15 != 105LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x122 = UINT16_MAX;
	int16_t x124 = -751;
	static volatile uint64_t t16 = 132556053858LLU;

	t16 = ((x121-x122)%(x123%x124));

	if (t16 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x125 = 14197433316945LLU;
	int64_t x126 = INT64_MAX;
	static volatile int16_t x127 = INT16_MAX;
	int32_t x128 = -47;
	uint64_t t17 = 30459206888782LLU;

	t17 = ((x125-x126)%(x127%x128));

	if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x138 = 11872359;
	uint16_t x139 = 1112U;
	static int8_t x140 = INT8_MIN;
	static int32_t t18 = 0;

	t18 = ((x137-x138)%(x139%x140));

	if (t18 != -57) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x145 = 13702103196311343LLU;
	int16_t x146 = INT16_MIN;
	static uint16_t x147 = UINT16_MAX;
	int8_t x148 = INT8_MIN;
	volatile uint64_t t19 = 991334700616363LLU;

	t19 = ((x145-x146)%(x147%x148));

	if (t19 != 29LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x149 = 3U;
	volatile uint32_t x151 = 1869U;
	uint8_t x152 = 113U;
	uint32_t t20 = 112U;

	t20 = ((x149-x150)%(x151%x152));

	if (t20 != 4U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x153 = 439U;
	uint16_t x154 = 756U;
	int64_t x155 = INT64_MAX;
	volatile uint8_t x156 = 3U;
	volatile int64_t t21 = 24034953305LL;

	t21 = ((x153-x154)%(x155%x156));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x158 = 0;
	int8_t x159 = INT8_MAX;
	int64_t x160 = INT64_MIN;
	int64_t t22 = -30739182LL;

	t22 = ((x157-x158)%(x159%x160));

	if (t22 != -98LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x169 = INT8_MIN;
	int8_t x170 = 1;
	uint8_t x171 = 23U;
	int64_t x172 = INT64_MIN;
	static volatile int64_t t23 = -48957655LL;

	t23 = ((x169-x170)%(x171%x172));

	if (t23 != -14LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x173 = INT16_MIN;
	volatile int16_t x174 = INT16_MIN;
	int64_t x175 = 324540478386LL;
	uint8_t x176 = 22U;
	int64_t t24 = -492307609LL;

	t24 = ((x173-x174)%(x175%x176));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x179 = INT64_MAX;
	int32_t x180 = INT32_MAX;
	volatile int64_t t25 = -1LL;

	t25 = ((x177-x178)%(x179%x180));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x185 = 3;
	int64_t x186 = INT64_MAX;
	int64_t x188 = -1LL;
	volatile uint64_t t26 = 187009928548360LLU;

	t26 = ((x185-x186)%(x187%x188));

	if (t26 != 84948612LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x197 = 4U;
	int8_t x198 = -1;
	uint16_t x199 = UINT16_MAX;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t27 = -112;

	t27 = ((x197-x198)%(x199%x200));

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x205 = UINT16_MAX;
	uint8_t x206 = UINT8_MAX;
	uint64_t x207 = UINT64_MAX;
	volatile int16_t x208 = 4;
	volatile uint64_t t28 = 21309103831568709LLU;

	t28 = ((x205-x206)%(x207%x208));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x215 = 1LL;
	uint64_t x216 = UINT64_MAX;
	uint64_t t29 = 240LLU;

	t29 = ((x213-x214)%(x215%x216));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x229 = -1;
	int64_t x230 = -1LL;
	int64_t x231 = INT64_MAX;
	static int8_t x232 = -31;
	static volatile int64_t t30 = -701LL;

	t30 = ((x229-x230)%(x231%x232));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x241 = 128635577717165LL;
	volatile int64_t x242 = -1LL;
	int32_t x243 = INT32_MAX;
	volatile uint32_t x244 = 139480959U;
	int64_t t31 = -125316377432038543LL;

	t31 = ((x241-x242)%(x243%x244));

	if (t31 != 18183458LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x257 = -1;
	int16_t x258 = -1;
	int64_t x259 = -3LL;
	volatile int64_t x260 = INT64_MIN;
	static volatile int64_t t32 = -268573LL;

	t32 = ((x257-x258)%(x259%x260));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x273 = 571647030U;
	volatile int8_t x274 = INT8_MAX;
	int16_t x275 = -173;
	volatile int32_t x276 = INT32_MAX;

	t33 = ((x273-x274)%(x275%x276));

	if (t33 != 571646903U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x282 = -58174;
	int8_t x283 = -6;
	static volatile int32_t x284 = -3305;
	int32_t t34 = 1372;

	t34 = ((x281-x282)%(x283%x284));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x285 = INT16_MAX;
	uint64_t x286 = 2062018354359LLU;
	static uint32_t x287 = 48U;
	volatile int32_t x288 = INT32_MAX;

	t35 = ((x285-x286)%(x287%x288));

	if (t35 != 8LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x294 = UINT32_MAX;
	volatile uint64_t x295 = 4681160LLU;
	int32_t x296 = INT32_MIN;
	uint64_t t36 = 156829LLU;

	t36 = ((x293-x294)%(x295%x296));

	if (t36 != 256LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x297 = 35482217276LLU;
	int16_t x298 = INT16_MIN;

	t37 = ((x297-x298)%(x299%x300));

	if (t37 != 35482250044LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x301 = 55U;
	static int32_t x303 = INT32_MAX;
	uint32_t x304 = 2445948U;
	uint32_t t38 = 1U;

	t38 = ((x301-x302)%(x303%x304));

	if (t38 != 56U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = INT64_MAX;
	volatile int64_t t39 = -194LL;

	t39 = ((x305-x306)%(x307%x308));

	if (t39 != -32767LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x309 = -12;
	uint16_t x310 = 952U;
	int16_t x312 = INT16_MIN;
	int32_t t40 = -2;

	t40 = ((x309-x310)%(x311%x312));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x313 = UINT64_MAX;
	static uint8_t x315 = UINT8_MAX;
	int64_t x316 = 8745350485023LL;
	volatile uint64_t t41 = 214562470264057LLU;

	t41 = ((x313-x314)%(x315%x316));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x325 = -1;
	uint32_t x326 = 0U;
	uint32_t x327 = 4687U;
	int8_t x328 = -1;
	static uint32_t t42 = 11777748U;

	t42 = ((x325-x326)%(x327%x328));

	if (t42 != 2036U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MIN;

	t43 = ((x329-x330)%(x331%x332));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x333 = -204866976LL;
	static volatile uint32_t x334 = 3669542U;
	volatile int16_t x335 = -17;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t44 = 1138417LLU;

	t44 = ((x333-x334)%(x335%x336));

	if (t44 != 18446744073501015098LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x337 = UINT8_MAX;
	int64_t x338 = -2281LL;
	uint32_t x339 = 70763558U;
	int64_t x340 = INT64_MIN;
	volatile int64_t t45 = -39LL;

	t45 = ((x337-x338)%(x339%x340));

	if (t45 != 2536LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x342 = 158;
	static int64_t x343 = INT64_MIN;
	int64_t t46 = 100076530LL;

	t46 = ((x341-x342)%(x343%x344));

	if (t46 != 2899635LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x347 = INT64_MIN;

	t47 = ((x345-x346)%(x347%x348));

	if (t47 != 18446744073709538677LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x349 = UINT64_MAX;
	int32_t x350 = INT32_MAX;
	uint64_t t48 = 489500709275LLU;

	t48 = ((x349-x350)%(x351%x352));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x357 = 349U;
	volatile int64_t x358 = -1LL;
	int32_t x359 = INT32_MAX;
	int64_t x360 = INT64_MIN;

	t49 = ((x357-x358)%(x359%x360));

	if (t49 != 350LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x365 = 37;
	int64_t x366 = -1LL;
	int32_t x367 = INT32_MIN;
	int8_t x368 = INT8_MAX;
	int64_t t50 = 28650LL;

	t50 = ((x365-x366)%(x367%x368));

	if (t50 != 6LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x377 = 1;
	uint16_t x378 = 7U;
	uint32_t x380 = 22114U;
	uint32_t t51 = 271741U;

	t51 = ((x377-x378)%(x379%x380));

	if (t51 != 8765U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x385 = 4757054231775LLU;
	uint32_t x386 = 21753365U;
	int32_t x387 = INT32_MAX;
	volatile uint64_t x388 = 3594936349614LLU;
	volatile uint64_t t52 = 2055915277074993611LLU;

	t52 = ((x385-x386)%(x387%x388));

	if (t52 != 356200305LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x389 = 13064U;
	int8_t x390 = -1;
	int16_t x391 = INT16_MIN;
	volatile uint64_t t53 = 5234170343717761LLU;

	t53 = ((x389-x390)%(x391%x392));

	if (t53 != 13065LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x401 = -19;
	uint32_t x402 = UINT32_MAX;
	uint32_t x403 = 1093U;
	int16_t x404 = INT16_MIN;
	uint32_t t54 = 53023U;

	t54 = ((x401-x402)%(x403%x404));

	if (t54 != 825U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x413 = -1;
	int8_t x414 = INT8_MAX;
	int64_t x415 = 1209738893269401LL;
	static uint32_t x416 = UINT32_MAX;

	t55 = ((x413-x414)%(x415%x416));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x429 = 2U;
	static int8_t x430 = -1;
	uint8_t x432 = UINT8_MAX;
	volatile int64_t t56 = 0LL;

	t56 = ((x429-x430)%(x431%x432));

	if (t56 != 3LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x437 = -1LL;
	static int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MIN;
	volatile uint64_t t57 = 359LLU;

	t57 = ((x437-x438)%(x439%x440));

	if (t57 != 18446743547530732990LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x441 = INT32_MIN;
	volatile uint32_t x443 = 249U;
	volatile int64_t t58 = 842518LL;

	t58 = ((x441-x442)%(x443%x444));

	if (t58 != -73LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x446 = 22502982LLU;
	int16_t x447 = -6;
	volatile int8_t x448 = INT8_MIN;
	uint64_t t59 = 31LLU;

	t59 = ((x445-x446)%(x447%x448));

	if (t59 != 18446744073687048604LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x449 = INT16_MIN;
	int8_t x450 = -1;
	uint32_t x451 = UINT32_MAX;
	volatile int64_t x452 = INT64_MIN;
	volatile int64_t t60 = 3178356LL;

	t60 = ((x449-x450)%(x451%x452));

	if (t60 != -32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x453 = 6154U;
	int8_t x455 = INT8_MAX;
	int8_t x456 = -25;
	volatile int32_t t61 = -9773;

	t61 = ((x453-x454)%(x455%x456));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x458 = -449;
	int64_t x459 = INT64_MAX;
	volatile uint8_t x460 = 2U;
	uint64_t t62 = 3110137177352479LLU;

	t62 = ((x457-x458)%(x459%x460));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x461 = -1LL;
	int8_t x462 = -1;
	int16_t x463 = -1;
	static int16_t x464 = INT16_MIN;
	volatile int64_t t63 = -2886195170600448LL;

	t63 = ((x461-x462)%(x463%x464));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x465 = INT32_MIN;
	int64_t x466 = INT64_MIN;
	int8_t x467 = INT8_MAX;
	int32_t x468 = INT32_MIN;
	volatile int64_t t64 = -91197LL;

	t64 = ((x465-x466)%(x467%x468));

	if (t64 != 120LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x473 = INT8_MIN;
	int64_t x474 = INT64_MIN;
	int16_t x475 = INT16_MIN;

	t65 = ((x473-x474)%(x475%x476));

	if (t65 != 2528LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x482 = 9;
	int64_t x484 = INT64_MIN;
	uint64_t t66 = 119167LLU;

	t66 = ((x481-x482)%(x483%x484));

	if (t66 != 1632LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x486 = 7U;
	uint16_t x488 = 1511U;
	volatile int64_t t67 = -3LL;

	t67 = ((x485-x486)%(x487%x488));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x490 = -13;
	static volatile int64_t x491 = -175LL;
	uint8_t x492 = 31U;
	static volatile int64_t t68 = -70248LL;

	t68 = ((x489-x490)%(x491%x492));

	if (t68 != 13LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x497 = 2;
	int64_t x499 = -1LL;
	int8_t x500 = INT8_MIN;
	int64_t t69 = -10827419615521LL;

	t69 = ((x497-x498)%(x499%x500));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x501 = 10901;
	volatile uint32_t x502 = UINT32_MAX;
	volatile int32_t x503 = 1;
	volatile uint32_t t70 = 1124U;

	t70 = ((x501-x502)%(x503%x504));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x513 = 44U;
	static int64_t x515 = INT64_MAX;
	static int8_t x516 = INT8_MIN;
	static volatile int64_t t71 = 541321LL;

	t71 = ((x513-x514)%(x515%x516));

	if (t71 != 45LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x518 = -6LL;
	int16_t x519 = INT16_MAX;
	uint32_t x520 = UINT32_MAX;
	volatile uint64_t t72 = 1LLU;

	t72 = ((x517-x518)%(x519%x520));

	if (t72 != 29025LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x525 = 3381303407300119857LLU;
	int8_t x526 = INT8_MIN;
	uint8_t x527 = 7U;
	static int8_t x528 = INT8_MIN;
	volatile uint64_t t73 = 1562141162033189LLU;

	t73 = ((x525-x526)%(x527%x528));

	if (t73 != 5LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x529 = UINT8_MAX;
	static int16_t x532 = 109;
	static volatile int64_t t74 = -3333210428160342LL;

	t74 = ((x529-x530)%(x531%x532));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x538 = -1;
	int32_t x539 = -2159951;
	int8_t x540 = INT8_MAX;
	volatile int32_t t75 = 6;

	t75 = ((x537-x538)%(x539%x540));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x541 = 3102372308LLU;
	uint16_t x543 = UINT16_MAX;
	volatile int64_t x544 = INT64_MIN;

	t76 = ((x541-x542)%(x543%x544));

	if (t76 != 10938LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x549 = -102103614LL;
	int16_t x552 = INT16_MAX;

	t77 = ((x549-x550)%(x551%x552));

	if (t77 != -3LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x553 = INT16_MAX;
	int16_t x554 = -1;
	volatile uint64_t x555 = 29LLU;
	static int16_t x556 = -1712;
	static uint64_t t78 = 2081769683669LLU;

	t78 = ((x553-x554)%(x555%x556));

	if (t78 != 27LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x558 = UINT32_MAX;
	static int16_t x559 = INT16_MIN;
	int32_t x560 = 314;
	uint32_t t79 = 24836U;

	t79 = ((x557-x558)%(x559%x560));

	if (t79 != 256U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x561 = 4536263481LLU;
	static volatile uint32_t x563 = 10799357U;
	uint64_t x564 = 13LLU;
	volatile uint64_t t80 = 31493172547LLU;

	t80 = ((x561-x562)%(x563%x564));

	if (t80 != 6LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x569 = -2226445134874776LL;
	int8_t x570 = -1;
	uint16_t x571 = 13625U;
	int32_t x572 = INT32_MIN;
	int64_t t81 = 184728403703LL;

	t81 = ((x569-x570)%(x571%x572));

	if (t81 != -7025LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x577 = -1;
	static volatile uint32_t t82 = 85429U;

	t82 = ((x577-x578)%(x579%x580));

	if (t82 != 49U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x590 = 294U;
	int16_t x592 = INT16_MIN;

	t83 = ((x589-x590)%(x591%x592));

	if (t83 != 32474LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x597 = 28885LLU;
	static uint8_t x599 = 2U;
	static int8_t x600 = INT8_MIN;
	uint64_t t84 = 198719LLU;

	t84 = ((x597-x598)%(x599%x600));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x601 = -1;
	uint32_t x602 = 133U;
	uint8_t x603 = UINT8_MAX;

	t85 = ((x601-x602)%(x603%x604));

	if (t85 != 122U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x605 = UINT16_MAX;
	volatile int32_t x606 = 488;
	int8_t x607 = INT8_MIN;
	int16_t x608 = INT16_MIN;
	static volatile int32_t t86 = 6943059;

	t86 = ((x605-x606)%(x607%x608));

	if (t86 != 23) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x609 = INT32_MAX;
	volatile int64_t x610 = -1LL;
	int8_t x611 = -8;
	static int32_t x612 = INT32_MAX;
	static volatile int64_t t87 = -16524294LL;

	t87 = ((x609-x610)%(x611%x612));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x617 = UINT16_MAX;
	static int16_t x618 = INT16_MIN;
	volatile int32_t x619 = INT32_MAX;
	static volatile int32_t t88 = -479;

	t88 = ((x617-x618)%(x619%x620));

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x621 = 0;
	int16_t x622 = 2;
	static int64_t x623 = 75LL;
	uint64_t x624 = UINT64_MAX;
	uint64_t t89 = 5LLU;

	t89 = ((x621-x622)%(x623%x624));

	if (t89 != 14LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x629 = INT64_MAX;
	int32_t x631 = -101694;
	int64_t x632 = INT64_MIN;
	volatile uint64_t t90 = 17763LLU;

	t90 = ((x629-x630)%(x631%x632));

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x633 = 436063LLU;
	volatile uint64_t x634 = UINT64_MAX;
	static uint64_t x636 = 216922500LLU;
	uint64_t t91 = 108494271914616614LLU;

	t91 = ((x633-x634)%(x635%x636));

	if (t91 != 436064LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x637 = -1218771806584153015LL;
	volatile int16_t x638 = INT16_MAX;
	uint8_t x639 = 38U;
	int8_t x640 = INT8_MAX;
	int64_t t92 = 683906LL;

	t92 = ((x637-x638)%(x639%x640));

	if (t92 != -30LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x641 = -1;
	int32_t x642 = INT32_MIN;
	static uint32_t x644 = 1783400U;
	static volatile uint32_t t93 = 47123U;

	t93 = ((x641-x642)%(x643%x644));

	if (t93 != 7091U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x645 = INT32_MIN;
	static int16_t x646 = INT16_MIN;
	static int16_t x647 = INT16_MIN;
	static uint16_t x648 = 1490U;
	static int32_t t94 = 7127691;

	t94 = ((x645-x646)%(x647%x648));

	if (t94 != -1126) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x649 = INT16_MIN;
	static int16_t x650 = INT16_MAX;
	uint8_t x651 = 12U;
	int16_t x652 = 15459;
	volatile int32_t t95 = 17193;

	t95 = ((x649-x650)%(x651%x652));

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x657 = -6112147036675586LL;
	int32_t x658 = -808136503;
	uint16_t x659 = 32U;
	int64_t x660 = -82LL;

	t96 = ((x657-x658)%(x659%x660));

	if (t96 != -11LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x661 = -11067959;
	static int16_t x662 = -1;
	int8_t x663 = -1;
	int64_t x664 = 1555LL;
	volatile int64_t t97 = -2848962757LL;

	t97 = ((x661-x662)%(x663%x664));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x665 = UINT16_MAX;
	static int64_t x666 = -1LL;
	volatile int32_t x667 = -348660304;
	uint32_t x668 = 436U;
	int64_t t98 = 4203057262015068719LL;

	t98 = ((x665-x666)%(x667%x668));

	if (t98 != 16LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x669 = INT16_MAX;
	volatile int8_t x670 = -1;
	int64_t x671 = 1781LL;
	int64_t x672 = INT64_MIN;

	t99 = ((x669-x670)%(x671%x672));

	if (t99 != 710LL) { NG(); } else { ; }
	
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

