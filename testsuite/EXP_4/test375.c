#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x11 = INT16_MIN;
int8_t x12 = INT8_MIN;
uint64_t x13 = 1LLU;
static volatile uint64_t t2 = 61799754236604528LLU;
uint8_t x36 = 7U;
static volatile int64_t t7 = -1LL;
int64_t x68 = 18928233LL;
static int16_t x70 = INT16_MIN;
uint64_t x72 = 2399185611675LLU;
volatile uint64_t t9 = 4354391580501LLU;
uint64_t t10 = 1970655522088661367LLU;
volatile int32_t x82 = 2841;
int64_t t12 = -128926838396990LL;
volatile int64_t x96 = -1LL;
static int16_t x106 = INT16_MIN;
static int8_t x110 = INT8_MIN;
volatile int64_t t15 = 8007867LL;
static volatile int8_t x123 = -8;
int16_t x124 = -1;
uint16_t x126 = UINT16_MAX;
uint32_t x130 = 434U;
volatile uint32_t t18 = 55623U;
static uint8_t x135 = 1U;
int32_t t19 = -3371;
uint64_t x137 = 160940510928LLU;
uint32_t x152 = 245U;
volatile int64_t x160 = -1LL;
uint16_t x166 = UINT16_MAX;
uint64_t x168 = 3660LLU;
uint32_t x177 = UINT32_MAX;
static int8_t x178 = -27;
int8_t x182 = INT8_MAX;
volatile int16_t x183 = INT16_MAX;
uint64_t x184 = UINT64_MAX;
uint8_t x215 = 0U;
uint64_t t32 = 78859583262664LLU;
volatile uint64_t t33 = 51962384447LLU;
int16_t x241 = INT16_MIN;
static int32_t t34 = -49615;
int8_t x251 = -11;
int64_t x252 = -1277LL;
uint16_t x257 = 0U;
uint64_t t38 = 360072613871136LLU;
uint64_t x279 = 4148626LLU;
uint16_t x280 = 24U;
static uint64_t x287 = UINT64_MAX;
int16_t x288 = INT16_MIN;
uint8_t x294 = 1U;
int16_t x296 = -1;
int8_t x304 = INT8_MIN;
static volatile uint64_t t43 = 1578665LLU;
uint8_t x329 = 0U;
static int16_t x334 = -42;
uint32_t x336 = 15172023U;
volatile int64_t t48 = -1059270030827176221LL;
int64_t x355 = -1LL;
int16_t x359 = -1;
int32_t x369 = INT32_MIN;
volatile uint32_t t51 = 15367U;
uint32_t x373 = 0U;
int32_t x377 = -457;
uint32_t x391 = 61486U;
static uint32_t x392 = 4U;
uint64_t t55 = 644233563413LLU;
static int8_t x393 = INT8_MIN;
uint32_t x396 = 16U;
uint64_t x414 = 1308391LLU;
volatile uint64_t t59 = 59751LLU;
static int16_t x418 = INT16_MIN;
volatile int16_t x432 = INT16_MIN;
int64_t x459 = -22487514LL;
int64_t x460 = 1LL;
volatile int8_t x461 = INT8_MIN;
volatile uint8_t x467 = 2U;
uint64_t x473 = 23600582701LLU;
static uint32_t x476 = 22U;
int64_t x481 = -450LL;
uint64_t t69 = 354LLU;
volatile int64_t x490 = -1LL;
uint16_t x492 = UINT16_MAX;
volatile int16_t x495 = -6;
volatile int8_t x502 = INT8_MIN;
volatile int64_t t72 = 9268428892798LL;
uint16_t x511 = UINT16_MAX;
int8_t x517 = -1;
volatile int8_t x522 = INT8_MIN;
int32_t x549 = INT32_MAX;
volatile uint16_t x550 = 2U;
int8_t x551 = INT8_MIN;
volatile int8_t x562 = INT8_MAX;
uint16_t x563 = 501U;
static uint64_t x564 = UINT64_MAX;
volatile uint64_t t80 = 3878931590386LLU;
volatile uint64_t x571 = 8184LLU;
uint16_t x573 = UINT16_MAX;
volatile int32_t t83 = 1;
volatile int16_t x593 = INT16_MAX;
volatile int64_t x596 = 24075798445LL;
volatile int64_t t84 = 20024508LL;
volatile int16_t x597 = -1;
int8_t x599 = INT8_MAX;
volatile uint8_t x600 = UINT8_MAX;
volatile uint32_t x603 = UINT32_MAX;
int32_t x606 = -103867;
uint32_t x607 = 1602655200U;
uint32_t t87 = 160949501U;
uint64_t x616 = 742799LLU;
int8_t x633 = -2;
int8_t x635 = INT8_MAX;
int8_t x636 = INT8_MAX;
volatile uint32_t x643 = 3168U;
volatile uint64_t t92 = 33672002239600365LLU;
uint32_t x655 = 3U;
uint64_t x713 = UINT64_MAX;
uint64_t t99 = 58933789590LLU;


void f0(void) {
	volatile int32_t x1 = -63194808;
	volatile uint16_t x2 = 2U;
	uint8_t x3 = 60U;
	uint16_t x4 = 81U;
	int32_t t0 = 903609506;

	t0 = (x1&(x2*(x3*x4)));

	if (t0 != 8520) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int8_t x10 = -1;
	volatile int32_t t1 = -6615318;

	t1 = (x9&(x10*(x11*x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MAX;
	int16_t x15 = 17;
	uint32_t x16 = 387886U;

	t2 = (x13&(x14*(x15*x16)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = 396LLU;
	volatile uint32_t x26 = UINT32_MAX;
	uint64_t x27 = 15835320845071LLU;
	int16_t x28 = INT16_MIN;
	uint64_t t3 = 31LLU;

	t3 = (x25&(x26*(x27*x28)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x33 = 414;
	uint32_t x34 = 46568390U;
	int16_t x35 = -1;
	uint32_t t4 = 1U;

	t4 = (x33&(x34*(x35*x36)));

	if (t4 != 406U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x45 = -1;
	static int8_t x46 = 49;
	uint32_t x47 = 17809597U;
	static int8_t x48 = INT8_MAX;
	static volatile uint32_t t5 = 4348492U;

	t5 = (x45&(x46*(x47*x48)));

	if (t5 != 3454939731U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x53 = UINT32_MAX;
	static int64_t x54 = INT64_MAX;
	int8_t x55 = 3;
	uint64_t x56 = 1929739483670LLU;
	uint64_t t6 = 167LLU;

	t6 = (x53&(x54*(x55*x56)));

	if (t6 != 397463998LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x57 = 579438;
	volatile uint8_t x58 = UINT8_MAX;
	volatile uint8_t x59 = 0U;
	int64_t x60 = INT64_MIN;

	t7 = (x57&(x58*(x59*x60)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x65 = UINT64_MAX;
	int64_t x66 = 204LL;
	volatile int8_t x67 = INT8_MIN;
	uint64_t t8 = 1LLU;

	t8 = (x65&(x66*(x67*x68)));

	if (t8 != 18446743579455531520LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x69 = 80131538U;
	volatile int8_t x71 = -5;

	t9 = (x69&(x70*(x71*x72)));

	if (t9 != 67272704LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x73 = UINT16_MAX;
	volatile uint64_t x74 = UINT64_MAX;
	int16_t x75 = INT16_MAX;
	int16_t x76 = INT16_MAX;

	t10 = (x73&(x74*(x75*x76)));

	if (t10 != 65535LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x81 = INT64_MIN;
	int8_t x83 = -1;
	int16_t x84 = INT16_MIN;
	volatile int64_t t11 = -11191667471222LL;

	t11 = (x81&(x82*(x83*x84)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x90 = -3694LL;
	volatile int64_t x91 = 8LL;
	static int32_t x92 = INT32_MAX;

	t12 = (x89&(x90*(x91*x92)));

	if (t12 != 29552LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x93 = 187595581LLU;
	static int16_t x94 = -1;
	static uint32_t x95 = 6061U;
	uint64_t t13 = 329866LLU;

	t13 = (x93&(x94*(x95*x96)));

	if (t13 != 4909LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x105 = UINT32_MAX;
	volatile uint32_t x107 = 203555699U;
	int32_t x108 = INT32_MIN;
	uint32_t t14 = 255421947U;

	t14 = (x105&(x106*(x107*x108)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x109 = INT64_MIN;
	uint8_t x111 = 23U;
	int16_t x112 = -1;

	t15 = (x109&(x110*(x111*x112)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x121 = INT16_MIN;
	static int8_t x122 = INT8_MIN;
	static volatile int32_t t16 = 2395033;

	t16 = (x121&(x122*(x123*x124)));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x125 = INT64_MAX;
	static int64_t x127 = 444445475LL;
	uint32_t x128 = 926U;
	volatile int64_t t17 = -3282982978LL;

	t17 = (x125&(x126*(x127*x128)));

	if (t17 != 26971355873019750LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x129 = 2U;
	static int32_t x131 = 197;
	int16_t x132 = -1;

	t18 = (x129&(x130*(x131*x132)));

	if (t18 != 2U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x133 = 3;
	volatile int8_t x134 = INT8_MAX;
	int8_t x136 = INT8_MIN;

	t19 = (x133&(x134*(x135*x136)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x138 = -1;
	uint16_t x139 = UINT16_MAX;
	static int8_t x140 = 5;
	static uint64_t t20 = 23LLU;

	t20 = (x137&(x138*(x139*x140)));

	if (t20 != 160940228608LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x145 = UINT16_MAX;
	int8_t x146 = -1;
	volatile int16_t x147 = INT16_MAX;
	uint32_t x148 = UINT32_MAX;
	static uint32_t t21 = 80U;

	t21 = (x145&(x146*(x147*x148)));

	if (t21 != 32767U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x149 = -25807064;
	int8_t x150 = INT8_MIN;
	uint32_t x151 = 1U;
	volatile uint32_t t22 = 1831735U;

	t22 = (x149&(x150*(x151*x152)));

	if (t22 != 4269147392U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x157 = 4U;
	static uint32_t x158 = 674U;
	uint64_t x159 = 25LLU;
	volatile uint64_t t23 = 34869482166753074LLU;

	t23 = (x157&(x158*(x159*x160)));

	if (t23 != 4LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x165 = 15146U;
	static int8_t x167 = INT8_MIN;
	volatile uint64_t t24 = 371580183313LLU;

	t24 = (x165&(x166*(x167*x168)));

	if (t24 != 8704LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x169 = INT8_MAX;
	int8_t x170 = -49;
	static int8_t x171 = INT8_MAX;
	uint64_t x172 = 3739983257801LLU;
	volatile uint64_t t25 = 25562282899LLU;

	t25 = (x169&(x170*(x171*x172)));

	if (t25 != 121LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x173 = INT32_MIN;
	int16_t x174 = -1;
	int8_t x175 = -5;
	int32_t x176 = -1;
	static volatile int32_t t26 = INT32_MIN;

	t26 = (x173&(x174*(x175*x176)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x179 = 53374669LLU;
	uint32_t x180 = 894U;
	volatile uint64_t t27 = 10206456687LLU;

	t27 = (x177&(x178*(x179*x180)));

	if (t27 != 132428478LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x181 = 0;
	uint64_t t28 = 939209LLU;

	t28 = (x181&(x182*(x183*x184)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x205 = -80;
	static int16_t x206 = INT16_MAX;
	static int8_t x207 = 2;
	uint16_t x208 = 156U;
	int32_t t29 = -333295226;

	t29 = (x205&(x206*(x207*x208)));

	if (t29 != 10223232) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x213 = 17U;
	int32_t x214 = -1;
	int32_t x216 = -47571;
	int32_t t30 = -949;

	t30 = (x213&(x214*(x215*x216)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x221 = 2U;
	static uint32_t x222 = 61143828U;
	volatile int16_t x223 = INT16_MIN;
	static uint16_t x224 = UINT16_MAX;
	volatile uint32_t t31 = 40570U;

	t31 = (x221&(x222*(x223*x224)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MAX;
	volatile uint64_t x227 = UINT64_MAX;
	static int32_t x228 = 8763;

	t32 = (x225&(x226*(x227*x228)));

	if (t32 != 18446744073422414395LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x237 = -1LL;
	uint32_t x238 = 6373217U;
	uint64_t x239 = 5872LLU;
	int16_t x240 = INT16_MIN;

	t33 = (x237&(x238*(x239*x240)));

	if (t33 != 18445517779471171584LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x242 = 3511U;
	int8_t x243 = INT8_MAX;
	int8_t x244 = INT8_MAX;

	t34 = (x241&(x242*(x243*x244)));

	if (t34 != 56623104) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x249 = INT8_MAX;
	uint32_t x250 = 0U;
	volatile int64_t t35 = 11050360571797LL;

	t35 = (x249&(x250*(x251*x252)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x258 = UINT8_MAX;
	uint8_t x259 = 1U;
	volatile uint16_t x260 = UINT16_MAX;
	static int32_t t36 = 678873097;

	t36 = (x257&(x258*(x259*x260)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x261 = INT16_MIN;
	volatile int16_t x262 = 34;
	volatile uint32_t x263 = UINT32_MAX;
	int32_t x264 = -525681130;
	uint32_t t37 = 28834125U;

	t37 = (x261&(x262*(x263*x264)));

	if (t37 != 693272576U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x273 = 7241589LLU;
	int16_t x274 = -14306;
	int64_t x275 = -1LL;
	volatile int16_t x276 = -1;

	t38 = (x273&(x274*(x275*x276)));

	if (t38 != 7227412LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x277 = -1LL;
	volatile int64_t x278 = INT64_MIN;
	static uint64_t t39 = 5548796993571970417LLU;

	t39 = (x277&(x278*(x279*x280)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x285 = INT8_MIN;
	static uint16_t x286 = 15687U;
	uint64_t t40 = 124LLU;

	t40 = (x285&(x286*(x287*x288)));

	if (t40 != 514031616LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x293 = -6;
	int8_t x295 = -34;
	int32_t t41 = 61;

	t41 = (x293&(x294*(x295*x296)));

	if (t41 != 34) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x301 = -1;
	static int16_t x302 = -1;
	static volatile uint16_t x303 = UINT16_MAX;
	int32_t t42 = 193808915;

	t42 = (x301&(x302*(x303*x304)));

	if (t42 != 8388480) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = 931U;
	volatile uint64_t x307 = 38LLU;
	static int32_t x308 = 1157;

	t43 = (x305&(x306*(x307*x308)));

	if (t43 != 40932224LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x313 = -1;
	int64_t x314 = -1LL;
	static int64_t x315 = -553243211816949LL;
	static uint64_t x316 = 1414535715030272353LLU;
	uint64_t t44 = 6048068727839LLU;

	t44 = (x313&(x314*(x315*x316)));

	if (t44 != 2082326555504310485LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x330 = -1;
	volatile int8_t x331 = INT8_MIN;
	volatile int16_t x332 = -790;
	volatile int32_t t45 = -4635069;

	t45 = (x329&(x330*(x331*x332)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x333 = -16662351671LL;
	uint32_t x335 = UINT32_MAX;
	volatile int64_t t46 = 2021190845563409641LL;

	t46 = (x333&(x334*(x335*x336)));

	if (t46 != 81264640LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x341 = 6142;
	int64_t x342 = -1LL;
	int16_t x343 = INT16_MIN;
	volatile uint64_t x344 = UINT64_MAX;
	uint64_t t47 = 6LLU;

	t47 = (x341&(x342*(x343*x344)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x349 = 7U;
	int32_t x350 = INT32_MIN;
	int64_t x351 = -1LL;
	static int32_t x352 = INT32_MIN;

	t48 = (x349&(x350*(x351*x352)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x353 = 2U;
	int64_t x354 = INT64_MIN;
	int32_t x356 = -1;
	static volatile int64_t t49 = 2335671LL;

	t49 = (x353&(x354*(x355*x356)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = -1;
	static int16_t x360 = 13702;
	int64_t t50 = -663836353542366569LL;

	t50 = (x357&(x358*(x359*x360)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x370 = UINT8_MAX;
	uint32_t x371 = 2607807U;
	int16_t x372 = INT16_MIN;

	t51 = (x369&(x370*(x371*x372)));

	if (t51 != 2147483648U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x374 = INT16_MIN;
	int64_t x375 = -1LL;
	int8_t x376 = INT8_MIN;
	int64_t t52 = -1414LL;

	t52 = (x373&(x374*(x375*x376)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x378 = 1U;
	uint64_t x379 = UINT64_MAX;
	static int64_t x380 = 19LL;
	uint64_t t53 = 616LLU;

	t53 = (x377&(x378*(x379*x380)));

	if (t53 != 18446744073709551141LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x385 = 12U;
	int16_t x386 = -57;
	static int64_t x387 = -52547LL;
	uint16_t x388 = 3U;
	int64_t t54 = 0LL;

	t54 = (x385&(x386*(x387*x388)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x389 = 529797071130772LLU;
	int64_t x390 = -4LL;

	t55 = (x389&(x390*(x391*x392)));

	if (t55 != 529797070475264LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x394 = UINT32_MAX;
	uint16_t x395 = 1U;
	uint32_t t56 = 14271094U;

	t56 = (x393&(x394*(x395*x396)));

	if (t56 != 4294967168U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x401 = -1;
	static uint8_t x402 = UINT8_MAX;
	int32_t x403 = INT32_MAX;
	int64_t x404 = -1LL;
	volatile int64_t t57 = 2060889913LL;

	t57 = (x401&(x402*(x403*x404)));

	if (t57 != -547608329985LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x409 = 34U;
	int16_t x410 = INT16_MIN;
	static uint32_t x411 = 747U;
	volatile uint64_t x412 = 23092641LLU;
	uint64_t t58 = 210LLU;

	t58 = (x409&(x410*(x411*x412)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x413 = 822019596212987LLU;
	int16_t x415 = -355;
	static int8_t x416 = -1;

	t59 = (x413&(x414*(x415*x416)));

	if (t59 != 436683345LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x417 = INT8_MAX;
	int64_t x419 = INT64_MIN;
	volatile uint16_t x420 = 0U;
	volatile int64_t t60 = 5502303LL;

	t60 = (x417&(x418*(x419*x420)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x429 = INT32_MAX;
	uint32_t x430 = 3U;
	int16_t x431 = INT16_MIN;
	volatile uint32_t t61 = 528358717U;

	t61 = (x429&(x430*(x431*x432)));

	if (t61 != 1073741824U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x441 = INT32_MAX;
	volatile int32_t x442 = INT32_MAX;
	uint64_t x443 = UINT64_MAX;
	static int8_t x444 = 0;
	static volatile uint64_t t62 = 60522343LLU;

	t62 = (x441&(x442*(x443*x444)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x453 = UINT64_MAX;
	uint64_t x454 = 14561687966LLU;
	uint8_t x455 = 2U;
	uint64_t x456 = UINT64_MAX;
	volatile uint64_t t63 = 341625550LLU;

	t63 = (x453&(x454*(x455*x456)));

	if (t63 != 18446744044586175684LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x457 = INT64_MAX;
	volatile uint16_t x458 = 6U;
	int64_t t64 = -7959264925963252LL;

	t64 = (x457&(x458*(x459*x460)));

	if (t64 != 9223372036719850724LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x462 = UINT16_MAX;
	int64_t x463 = -1LL;
	uint32_t x464 = 6190900U;
	volatile int64_t t65 = 1936222306678139346LL;

	t65 = (x461&(x462*(x463*x464)));

	if (t65 != -405720631552LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x465 = 51290637U;
	volatile int32_t x466 = -174;
	int64_t x468 = -5547247LL;
	volatile int64_t t66 = 71533LL;

	t66 = (x465&(x466*(x467*x468)));

	if (t66 != 50339844LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x474 = INT32_MIN;
	volatile int8_t x475 = INT8_MAX;
	volatile uint64_t t67 = 1122696281LLU;

	t67 = (x473&(x474*(x475*x476)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x482 = UINT32_MAX;
	int8_t x483 = INT8_MIN;
	int64_t x484 = -1LL;
	int64_t t68 = 751981171617LL;

	t68 = (x481&(x482*(x483*x484)));

	if (t68 != 549755813376LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x485 = -1;
	static volatile int16_t x486 = INT16_MIN;
	static uint64_t x487 = UINT64_MAX;
	static volatile uint64_t x488 = 31LLU;

	t69 = (x485&(x486*(x487*x488)));

	if (t69 != 1015808LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x489 = -692;
	int64_t x491 = 6LL;
	volatile int64_t t70 = -291LL;

	t70 = (x489&(x490*(x491*x492)));

	if (t70 != -393212LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x493 = -1;
	static int8_t x494 = INT8_MIN;
	int64_t x496 = -3774LL;
	volatile int64_t t71 = -5267286464977322LL;

	t71 = (x493&(x494*(x495*x496)));

	if (t71 != -2898432LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x501 = 8U;
	volatile int64_t x503 = -1LL;
	static volatile int16_t x504 = INT16_MIN;

	t72 = (x501&(x502*(x503*x504)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x509 = INT32_MIN;
	uint8_t x510 = UINT8_MAX;
	int8_t x512 = INT8_MIN;
	int32_t t73 = INT32_MIN;

	t73 = (x509&(x510*(x511*x512)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x513 = -1;
	int64_t x514 = -1LL;
	int8_t x515 = INT8_MIN;
	int64_t x516 = 14633LL;
	volatile int64_t t74 = 102761LL;

	t74 = (x513&(x514*(x515*x516)));

	if (t74 != 1873024LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x518 = 24190315LLU;
	static int64_t x519 = INT64_MIN;
	uint64_t x520 = 3290061LLU;
	uint64_t t75 = 6996478329274LLU;

	t75 = (x517&(x518*(x519*x520)));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x521 = UINT16_MAX;
	volatile int8_t x523 = -1;
	int32_t x524 = -164038;
	volatile int32_t t76 = 3558533;

	t76 = (x521&(x522*(x523*x524)));

	if (t76 != 40192) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x533 = -1;
	uint16_t x534 = 1U;
	int8_t x535 = -1;
	volatile int16_t x536 = INT16_MAX;
	volatile int32_t t77 = 14356799;

	t77 = (x533&(x534*(x535*x536)));

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x552 = -1;
	static int32_t t78 = 187398281;

	t78 = (x549&(x550*(x551*x552)));

	if (t78 != 256) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x557 = UINT64_MAX;
	int64_t x558 = -1LL;
	uint16_t x559 = 2U;
	int32_t x560 = -1;
	static uint64_t t79 = 1LLU;

	t79 = (x557&(x558*(x559*x560)));

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x561 = 3U;

	t80 = (x561&(x562*(x563*x564)));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x565 = UINT8_MAX;
	static int8_t x566 = -1;
	uint64_t x567 = UINT64_MAX;
	uint8_t x568 = UINT8_MAX;
	uint64_t t81 = 515820506LLU;

	t81 = (x565&(x566*(x567*x568)));

	if (t81 != 255LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x569 = INT16_MIN;
	static int32_t x570 = -1;
	int16_t x572 = INT16_MIN;
	volatile uint64_t t82 = 15LLU;

	t82 = (x569&(x570*(x571*x572)));

	if (t82 != 268173312LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x574 = INT8_MAX;
	int16_t x575 = 0;
	volatile int8_t x576 = INT8_MIN;

	t83 = (x573&(x574*(x575*x576)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x594 = INT8_MAX;
	uint16_t x595 = 1U;

	t84 = (x593&(x594*(x595*x596)));

	if (t84 != 20179LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x598 = -14;
	static volatile int32_t t85 = -422;

	t85 = (x597&(x598*(x599*x600)));

	if (t85 != -453390) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x601 = -80138;
	static int8_t x602 = 1;
	int16_t x604 = -1;
	volatile uint32_t t86 = 459586U;

	t86 = (x601&(x602*(x603*x604)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x605 = -1;
	uint8_t x608 = 5U;

	t87 = (x605&(x606*(x607*x608)));

	if (t87 != 2479032544U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x613 = -1;
	int16_t x614 = -1;
	int16_t x615 = INT16_MIN;
	volatile uint64_t t88 = 52452LLU;

	t88 = (x613&(x614*(x615*x616)));

	if (t88 != 24340037632LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x621 = 2631U;
	static int8_t x622 = INT8_MIN;
	static volatile int8_t x623 = INT8_MIN;
	uint64_t x624 = UINT64_MAX;
	uint64_t t89 = 73379641040LLU;

	t89 = (x621&(x622*(x623*x624)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x634 = -10;
	static int32_t t90 = -90;

	t90 = (x633&(x634*(x635*x636)));

	if (t90 != -161290) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x637 = UINT32_MAX;
	int64_t x638 = -55LL;
	static int8_t x639 = 2;
	int32_t x640 = 50414;
	int64_t t91 = -22880521973303LL;

	t91 = (x637&(x638*(x639*x640)));

	if (t91 != 4289421756LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x641 = UINT64_MAX;
	volatile uint32_t x642 = 400578675U;
	volatile uint16_t x644 = UINT16_MAX;

	t92 = (x641&(x642*(x643*x644)));

	if (t92 != 383348960LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x645 = -1;
	volatile uint8_t x646 = 1U;
	static int64_t x647 = -1LL;
	static int64_t x648 = INT64_MAX;
	static volatile int64_t t93 = 250337804217732123LL;

	t93 = (x645&(x646*(x647*x648)));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x649 = 739363434;
	int8_t x650 = INT8_MIN;
	static uint8_t x651 = UINT8_MAX;
	volatile int8_t x652 = INT8_MIN;
	volatile int32_t t94 = 14;

	t94 = (x649&(x650*(x651*x652)));

	if (t94 != 1163264) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x653 = 2U;
	int64_t x654 = 324059232281LL;
	int16_t x656 = INT16_MAX;
	int64_t t95 = 184155756183032LL;

	t95 = (x653&(x654*(x655*x656)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x689 = INT64_MIN;
	int8_t x690 = 1;
	int8_t x691 = -14;
	volatile int8_t x692 = INT8_MIN;
	volatile int64_t t96 = 522844673479838902LL;

	t96 = (x689&(x690*(x691*x692)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x701 = INT8_MIN;
	volatile int32_t x702 = -1;
	int16_t x703 = INT16_MIN;
	int16_t x704 = INT16_MAX;
	int32_t t97 = 68;

	t97 = (x701&(x702*(x703*x704)));

	if (t97 != 1073709056) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x705 = -1;
	int64_t x706 = -2LL;
	int16_t x707 = -1620;
	static volatile uint16_t x708 = UINT16_MAX;
	int64_t t98 = 1684LL;

	t98 = (x705&(x706*(x707*x708)));

	if (t98 != 212333400LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x714 = 4;
	int8_t x715 = -63;
	int16_t x716 = 12;

	t99 = (x713&(x714*(x715*x716)));

	if (t99 != 18446744073709548592LLU) { NG(); } else { ; }
	
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

