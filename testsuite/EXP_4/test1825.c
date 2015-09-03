#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
int8_t x10 = -6;
int8_t x13 = INT8_MAX;
static int16_t x20 = 667;
int8_t x21 = INT8_MIN;
int64_t x26 = -1LL;
volatile int32_t t6 = -1;
int64_t x61 = INT64_MIN;
uint8_t x84 = UINT8_MAX;
volatile uint64_t t9 = 2647LLU;
uint64_t x98 = 60685773806188949LLU;
uint64_t t11 = 0LLU;
int16_t x102 = INT16_MAX;
static int64_t t12 = -117001LL;
static int64_t x112 = INT64_MAX;
int32_t x121 = -1;
volatile int64_t t17 = -66545001LL;
volatile int16_t x137 = -59;
volatile int64_t x138 = 74561509850826110LL;
int8_t x141 = INT8_MIN;
static uint8_t x143 = 63U;
static int16_t x145 = INT16_MIN;
volatile int64_t t23 = 124078LL;
int8_t x181 = INT8_MIN;
int16_t x185 = -1;
int8_t x193 = INT8_MIN;
int8_t x201 = -1;
uint16_t x204 = 1U;
int32_t x212 = 83338236;
int16_t x216 = 348;
int16_t x226 = -1;
int32_t x228 = -1;
uint64_t x243 = UINT64_MAX;
int8_t x244 = 13;
static volatile int8_t x257 = INT8_MIN;
int16_t x258 = -1;
volatile int32_t x260 = INT32_MIN;
static uint64_t x270 = UINT64_MAX;
int64_t x271 = 491LL;
int8_t x274 = INT8_MAX;
int16_t x275 = 5;
volatile uint32_t t36 = 0U;
int32_t x279 = INT32_MIN;
int8_t x280 = -1;
static int32_t x298 = -1;
static int8_t x316 = -2;
int32_t x318 = -90;
uint32_t x319 = 1855957901U;
static int16_t x330 = 157;
volatile int32_t x355 = INT32_MAX;
int32_t x356 = INT32_MAX;
static uint8_t x374 = UINT8_MAX;
static int64_t x376 = -1LL;
static volatile int64_t t50 = -1068908812022763481LL;
volatile uint16_t x392 = UINT16_MAX;
int64_t x418 = INT64_MIN;
volatile int64_t x420 = -1LL;
int64_t t54 = 34331434774385LL;
uint32_t x434 = UINT32_MAX;
uint16_t x437 = 17739U;
int32_t x441 = INT32_MAX;
uint32_t x443 = 1017173862U;
static int32_t x451 = 532003;
static int16_t x455 = INT16_MIN;
int32_t x465 = -1;
static int64_t x467 = INT64_MAX;
volatile int64_t t63 = -4477042LL;
static uint16_t x483 = UINT16_MAX;
static volatile int64_t t64 = 158LL;
volatile int64_t t65 = 8611157902443LL;
int8_t x495 = INT8_MAX;
static uint16_t x497 = UINT16_MAX;
volatile int16_t x500 = -378;
int32_t x545 = INT32_MIN;
volatile uint64_t t69 = 960LLU;
int64_t x567 = -1LL;
static int64_t x568 = 108LL;
uint32_t x573 = UINT32_MAX;
static int32_t x577 = INT32_MIN;
volatile int16_t x593 = -1;
uint32_t x596 = 491U;
int32_t x599 = -1;
uint64_t x603 = UINT64_MAX;
uint64_t t77 = 7956574752546995LLU;
volatile int8_t x620 = -1;
uint64_t t78 = 701188157628032LLU;
int16_t x631 = INT16_MAX;
uint64_t t79 = 25LLU;
int8_t x645 = INT8_MIN;
int8_t x646 = -55;
volatile uint64_t t82 = 50287032238063LLU;
int64_t t84 = -2190214192109488LL;
static uint16_t x698 = 15U;
int16_t x700 = 1;
volatile int64_t t85 = -61LL;
static int16_t x703 = INT16_MIN;
static uint8_t x705 = 6U;
int32_t x708 = INT32_MIN;
static uint8_t x709 = 92U;
static uint64_t x713 = 29247255874LLU;
static uint32_t x725 = 34790484U;
int16_t x733 = INT16_MAX;
int8_t x735 = -1;
volatile int16_t x736 = 3;
int16_t x747 = -1;
int8_t x753 = -1;
uint8_t x762 = 18U;
int64_t t95 = 4233590632205LL;
int32_t x789 = INT32_MAX;
int8_t x790 = 1;
static int16_t x793 = INT16_MAX;
uint32_t x794 = UINT32_MAX;
volatile uint64_t t98 = 8313509403283264656LLU;
uint16_t x817 = 15U;


void f0(void) {
	static uint64_t x11 = 1952518157731LLU;
	int64_t x12 = INT64_MAX;
	uint64_t t0 = 68348955710LLU;

	t0 = (x9%(x10&(x11&x12)));

	if (t0 != 755504877848LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x14 = INT8_MIN;
	int32_t x15 = -1;
	uint64_t x16 = 1959LLU;
	uint64_t t1 = 687544098948599LLU;

	t1 = (x13%(x14&(x15&x16)));

	if (t1 != 127LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = 3;
	uint16_t x19 = UINT16_MAX;
	volatile int64_t t2 = 23151LL;

	t2 = (x17%(x18&(x19&x20)));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x22 = INT8_MIN;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = INT64_MIN;
	uint64_t t3 = 104LLU;

	t3 = (x21%(x22&(x23&x24)));

	if (t3 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	volatile uint16_t x27 = UINT16_MAX;
	static int8_t x28 = INT8_MIN;
	volatile int64_t t4 = -964842LL;

	t4 = (x25%(x26&(x27&x28)));

	if (t4 != -512LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = -1;
	static int32_t x42 = -1;
	int16_t x43 = -1;
	uint8_t x44 = UINT8_MAX;
	int32_t t5 = 7925;

	t5 = (x41%(x42&(x43&x44)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x57 = -1;
	int8_t x58 = -5;
	static int8_t x59 = INT8_MIN;
	int32_t x60 = -32388;

	t6 = (x57%(x58&(x59&x60)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x62 = -637439048991565597LL;
	int64_t x63 = -335342317983143LL;
	int16_t x64 = -1;
	volatile int64_t t7 = 7087075336LL;

	t7 = (x61%(x62&(x63&x64)));

	if (t7 != -295029878254760846LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x77 = 2150006667LLU;
	uint8_t x78 = UINT8_MAX;
	int64_t x79 = -2105253LL;
	uint16_t x80 = UINT16_MAX;
	uint64_t t8 = 27234531343537037LLU;

	t8 = (x77%(x78&(x79&x80)));

	if (t8 != 81LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x81 = 7LLU;
	uint64_t x82 = 1361078651039037413LLU;
	int8_t x83 = 6;

	t9 = (x81%(x82&(x83&x84)));

	if (t9 != 3LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x93 = 49;
	volatile int32_t x94 = 271022;
	uint64_t x95 = 26537865LLU;
	volatile int8_t x96 = INT8_MIN;
	static volatile uint64_t t10 = 6154LLU;

	t10 = (x93%(x94&(x95&x96)));

	if (t10 != 49LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x97 = 571700013138564LLU;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = -6759695LL;

	t11 = (x97%(x98&(x99&x100)));

	if (t11 != 64LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x101 = INT64_MIN;
	static uint8_t x103 = UINT8_MAX;
	uint16_t x104 = UINT16_MAX;

	t12 = (x101%(x102&(x103&x104)));

	if (t12 != -128LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x105 = 467254033LL;
	uint32_t x106 = 153029626U;
	int8_t x107 = INT8_MIN;
	int32_t x108 = 1424889;
	volatile int64_t t13 = 125873610185LL;

	t13 = (x105%(x106&(x107&x108)));

	if (t13 != 1257489LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x109 = 393;
	int16_t x110 = INT16_MAX;
	static uint32_t x111 = 2077771516U;
	static volatile int64_t t14 = -27864LL;

	t14 = (x109%(x110&(x111&x112)));

	if (t14 != 393LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x122 = 34311894;
	int32_t x123 = -49;
	int16_t x124 = -2;
	volatile int32_t t15 = -15777;

	t15 = (x121%(x122&(x123&x124)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x125 = -1;
	volatile uint32_t x126 = 8319871U;
	int8_t x127 = INT8_MAX;
	static uint64_t x128 = 33549322209809600LLU;
	volatile uint64_t t16 = 349404LLU;

	t16 = (x125%(x126&(x127&x128)));

	if (t16 != 63LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x129 = 5775796U;
	int8_t x130 = INT8_MIN;
	int16_t x131 = -26;
	int64_t x132 = INT64_MAX;

	t17 = (x129%(x130&(x131&x132)));

	if (t17 != 5775796LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x139 = INT16_MAX;
	int64_t x140 = 8LL;
	volatile int64_t t18 = -1743413386LL;

	t18 = (x137%(x138&(x139&x140)));

	if (t18 != -3LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x142 = 1;
	int32_t x144 = -1;
	volatile int32_t t19 = 169;

	t19 = (x141%(x142&(x143&x144)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;
	int32_t x148 = -14;
	int32_t t20 = -30103;

	t20 = (x145%(x146&(x147&x148)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x149 = 29U;
	int64_t x150 = -51286377600959LL;
	int16_t x151 = -1;
	static int64_t x152 = -1LL;
	volatile int64_t t21 = 7221LL;

	t21 = (x149%(x150&(x151&x152)));

	if (t21 != 29LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x157 = INT64_MIN;
	static int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	static int64_t t22 = 3104017241036797177LL;

	t22 = (x157%(x158&(x159&x160)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x165 = 3U;
	volatile int64_t x166 = -107729LL;
	int64_t x167 = INT64_MAX;
	static int32_t x168 = -1;

	t23 = (x165%(x166&(x167&x168)));

	if (t23 != 3LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MAX;
	int32_t x184 = INT32_MIN;
	static volatile int64_t t24 = 2597328315230173LL;

	t24 = (x181%(x182&(x183&x184)));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x186 = 42U;
	static int64_t x187 = -1LL;
	static uint32_t x188 = UINT32_MAX;
	int64_t t25 = -6634075245945LL;

	t25 = (x185%(x186&(x187&x188)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x194 = -912;
	uint32_t x195 = 126U;
	static uint8_t x196 = 49U;
	volatile uint32_t t26 = 6308529U;

	t26 = (x193%(x194&(x195&x196)));

	if (t26 != 32U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x202 = INT64_MAX;
	int32_t x203 = -1;
	int64_t t27 = -13792164895630LL;

	t27 = (x201%(x202&(x203&x204)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x210 = 6680502U;
	int8_t x211 = INT8_MAX;
	volatile uint32_t t28 = 26190U;

	t28 = (x209%(x210&(x211&x212)));

	if (t28 != 24U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x213 = INT32_MAX;
	int32_t x214 = -319746;
	uint32_t x215 = UINT32_MAX;
	uint32_t t29 = 827U;

	t29 = (x213%(x214&(x215&x216)));

	if (t29 != 51U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x225 = -1;
	volatile int64_t x227 = -1LL;
	volatile int64_t t30 = 1LL;

	t30 = (x225%(x226&(x227&x228)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x237 = 1341408759U;
	int64_t x238 = -1LL;
	static int32_t x239 = 363;
	static int8_t x240 = INT8_MIN;
	int64_t t31 = 2098047143404107LL;

	t31 = (x237%(x238&(x239&x240)));

	if (t31 != 247LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x241 = INT8_MAX;
	int64_t x242 = INT64_MAX;
	uint64_t t32 = 31168784321853LLU;

	t32 = (x241%(x242&(x243&x244)));

	if (t32 != 10LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x245 = 1689U;
	int64_t x246 = INT64_MAX;
	uint64_t x247 = 308019341846508LLU;
	uint8_t x248 = UINT8_MAX;
	static volatile uint64_t t33 = 36219984LLU;

	t33 = (x245%(x246&(x247&x248)));

	if (t33 != 37LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x259 = -10;
	volatile int32_t t34 = 2787;

	t34 = (x257%(x258&(x259&x260)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x269 = 1346749LLU;
	uint16_t x272 = 34U;
	uint64_t t35 = 14619267496LLU;

	t35 = (x269%(x270&(x271&x272)));

	if (t35 != 9LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x273 = 2U;
	uint16_t x276 = 1233U;

	t36 = (x273%(x274&(x275&x276)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x277 = INT16_MIN;
	int16_t x278 = -3;
	static int32_t t37 = 12511882;

	t37 = (x277%(x278&(x279&x280)));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x285 = -230;
	volatile int32_t x286 = -2;
	static uint64_t x287 = UINT64_MAX;
	int64_t x288 = INT64_MIN;
	volatile uint64_t t38 = 167742LLU;

	t38 = (x285%(x286&(x287&x288)));

	if (t38 != 9223372036854775578LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x293 = 5LL;
	int16_t x294 = -1;
	int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MIN;
	int64_t t39 = 98057291LL;

	t39 = (x293%(x294&(x295&x296)));

	if (t39 != 5LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x297 = INT16_MAX;
	static volatile int8_t x299 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	static volatile int32_t t40 = 508094;

	t40 = (x297%(x298&(x299&x300)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x305 = 43U;
	static volatile int16_t x306 = -1;
	volatile uint8_t x307 = UINT8_MAX;
	int16_t x308 = -1;
	int32_t t41 = 556715444;

	t41 = (x305%(x306&(x307&x308)));

	if (t41 != 43) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x309 = 156U;
	int32_t x310 = 894048786;
	static volatile uint16_t x311 = UINT16_MAX;
	int8_t x312 = -1;
	static uint32_t t42 = 0U;

	t42 = (x309%(x310&(x311&x312)));

	if (t42 != 156U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x313 = UINT16_MAX;
	static uint64_t x314 = 4462046695388183909LLU;
	int64_t x315 = -113478568LL;
	static uint64_t t43 = 58404385657282361LLU;

	t43 = (x313%(x314&(x315&x316)));

	if (t43 != 65535LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x317 = 30444U;
	static int8_t x320 = INT8_MIN;
	static volatile uint32_t t44 = 35793290U;

	t44 = (x317%(x318&(x319&x320)));

	if (t44 != 30444U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x321 = 15U;
	volatile int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MAX;
	volatile int32_t x324 = -412;
	int32_t t45 = -206;

	t45 = (x321%(x322&(x323&x324)));

	if (t45 != 15) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x329 = -745580;
	int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MAX;
	static volatile int32_t t46 = -1;

	t46 = (x329%(x330&(x331&x332)));

	if (t46 != -108) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x345 = 72131;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	int16_t x348 = -1;
	uint64_t t47 = 21106107053534090LLU;

	t47 = (x345%(x346&(x347&x348)));

	if (t47 != 72131LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x353 = 1388U;
	static uint64_t x354 = 2911LLU;
	volatile uint64_t t48 = 54669539302483LLU;

	t48 = (x353%(x354&(x355&x356)));

	if (t48 != 1388LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x365 = 2;
	uint64_t x366 = UINT64_MAX;
	static uint8_t x367 = 1U;
	volatile int16_t x368 = INT16_MAX;
	uint64_t t49 = 295025754741213LLU;

	t49 = (x365%(x366&(x367&x368)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x373 = 0U;
	int16_t x375 = -1;

	t50 = (x373%(x374&(x375&x376)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x389 = 26U;
	static volatile int8_t x390 = -1;
	volatile uint64_t x391 = UINT64_MAX;
	uint64_t t51 = 98782987883643866LLU;

	t51 = (x389%(x390&(x391&x392)));

	if (t51 != 26LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x401 = 70U;
	int64_t x402 = 122905301549979LL;
	uint8_t x403 = UINT8_MAX;
	volatile int32_t x404 = -1;
	int64_t t52 = -26106LL;

	t52 = (x401%(x402&(x403&x404)));

	if (t52 != 70LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MAX;
	static int16_t x415 = -20;
	static volatile int64_t x416 = -266894380362782352LL;
	volatile int64_t t53 = -1LL;

	t53 = (x413%(x414&(x415&x416)));

	if (t53 != -32LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x417 = INT64_MIN;
	static int32_t x419 = INT32_MIN;

	t54 = (x417%(x418&(x419&x420)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x421 = INT64_MAX;
	static int64_t x422 = 379256980584382019LL;
	volatile int64_t x423 = -1LL;
	int8_t x424 = -1;
	static volatile int64_t t55 = -3LL;

	t55 = (x421%(x422&(x423&x424)));

	if (t55 != 121204502829607351LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x433 = 1;
	static int16_t x435 = -3082;
	static int64_t x436 = 47768504011241058LL;
	volatile int64_t t56 = 256303LL;

	t56 = (x433%(x434&(x435&x436)));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x438 = INT16_MAX;
	uint16_t x439 = UINT16_MAX;
	int16_t x440 = -1;
	volatile int32_t t57 = 851;

	t57 = (x437%(x438&(x439&x440)));

	if (t57 != 17739) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x442 = INT32_MAX;
	static int16_t x444 = INT16_MAX;
	static volatile uint32_t t58 = 8U;

	t58 = (x441%(x442&(x443&x444)));

	if (t58 != 4753U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x449 = 118U;
	volatile int8_t x450 = -1;
	static int16_t x452 = INT16_MIN;
	int32_t t59 = -6;

	t59 = (x449%(x450&(x451&x452)));

	if (t59 != 118) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x453 = -1;
	volatile int32_t x454 = -1;
	int32_t x456 = -1;
	volatile int32_t t60 = 28;

	t60 = (x453%(x454&(x455&x456)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x466 = 2061579U;
	int32_t x468 = -30358;
	static int64_t t61 = -7781465479904LL;

	t61 = (x465%(x466&(x467&x468)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x473 = 2U;
	volatile int8_t x474 = -22;
	volatile int16_t x475 = INT16_MIN;
	int8_t x476 = INT8_MIN;
	uint32_t t62 = 126580052U;

	t62 = (x473%(x474&(x475&x476)));

	if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x477 = 2U;
	int64_t x478 = -1LL;
	static volatile uint32_t x479 = 4011787U;
	uint8_t x480 = 1U;

	t63 = (x477%(x478&(x479&x480)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x481 = -1;
	volatile uint16_t x482 = 3826U;
	int64_t x484 = -1LL;

	t64 = (x481%(x482&(x483&x484)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x485 = INT32_MIN;
	int64_t x486 = INT64_MAX;
	static int8_t x487 = INT8_MAX;
	static int8_t x488 = -1;

	t65 = (x485%(x486&(x487&x488)));

	if (t65 != -8LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x493 = -1;
	static int8_t x494 = -1;
	uint16_t x496 = 2571U;
	volatile int32_t t66 = -377969379;

	t66 = (x493%(x494&(x495&x496)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x498 = -1;
	int16_t x499 = -2226;
	volatile int32_t t67 = 8144920;

	t67 = (x497%(x498&(x499&x500)));

	if (t67 != 1685) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x509 = 1U;
	static int64_t x510 = -1LL;
	int32_t x511 = INT32_MAX;
	uint16_t x512 = 2U;
	volatile int64_t t68 = -384905762787682LL;

	t68 = (x509%(x510&(x511&x512)));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x546 = 3832167788966008LLU;
	static volatile uint32_t x547 = UINT32_MAX;
	volatile int32_t x548 = -8927;

	t69 = (x545%(x546&(x547&x548)));

	if (t69 != 37854944LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x565 = INT8_MIN;
	uint8_t x566 = UINT8_MAX;
	int64_t t70 = 50145415LL;

	t70 = (x565%(x566&(x567&x568)));

	if (t70 != -20LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x569 = INT64_MIN;
	volatile int64_t x570 = INT64_MAX;
	int64_t x571 = INT64_MAX;
	volatile int8_t x572 = -1;
	volatile int64_t t71 = -23LL;

	t71 = (x569%(x570&(x571&x572)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x574 = INT16_MIN;
	volatile uint32_t x575 = UINT32_MAX;
	int32_t x576 = INT32_MIN;
	static volatile uint32_t t72 = 702034U;

	t72 = (x573%(x574&(x575&x576)));

	if (t72 != 2147483647U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x578 = -1;
	int8_t x579 = -1;
	int64_t x580 = INT64_MIN;
	volatile int64_t t73 = 493323701LL;

	t73 = (x577%(x578&(x579&x580)));

	if (t73 != -2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x581 = INT16_MIN;
	uint8_t x582 = 7U;
	int16_t x583 = -1;
	uint32_t x584 = 21U;
	volatile uint32_t t74 = 976167U;

	t74 = (x581%(x582&(x583&x584)));

	if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x594 = UINT64_MAX;
	int16_t x595 = -1102;
	uint64_t t75 = 69873452LLU;

	t75 = (x593%(x594&(x595&x596)));

	if (t75 != 301LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x597 = INT16_MAX;
	static uint64_t x598 = 176LLU;
	uint32_t x600 = 57754U;
	volatile uint64_t t76 = 544938246132116214LLU;

	t76 = (x597%(x598&(x599&x600)));

	if (t76 != 79LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x601 = INT8_MAX;
	int16_t x602 = INT16_MIN;
	volatile uint32_t x604 = 1595329U;

	t77 = (x601%(x602&(x603&x604)));

	if (t77 != 127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x617 = 188394551LLU;
	uint32_t x618 = 4U;
	uint8_t x619 = UINT8_MAX;

	t78 = (x617%(x618&(x619&x620)));

	if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x629 = INT16_MIN;
	uint64_t x630 = 2246252929697158LLU;
	int32_t x632 = -23;

	t79 = (x629%(x630&(x631&x632)));

	if (t79 != 10752LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x637 = INT32_MIN;
	volatile int16_t x638 = -1749;
	static volatile uint32_t x639 = UINT32_MAX;
	static uint16_t x640 = UINT16_MAX;
	volatile uint32_t t80 = 1U;

	t80 = (x637%(x638&(x639&x640)));

	if (t80 != 30506U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x647 = -1451;
	int32_t x648 = INT32_MIN;
	int32_t t81 = -118;

	t81 = (x645%(x646&(x647&x648)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x653 = -43375290;
	static uint64_t x654 = 833820420316552LLU;
	volatile uint32_t x655 = 5932U;
	int8_t x656 = -1;

	t82 = (x653%(x654&(x655&x656)));

	if (t82 != 4526LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x661 = INT64_MAX;
	int16_t x662 = INT16_MIN;
	static int16_t x663 = -48;
	int64_t x664 = -83740604LL;
	static volatile int64_t t83 = -435LL;

	t83 = (x661%(x662&(x663&x664)));

	if (t83 != 82313215LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x693 = -1;
	int16_t x694 = -1;
	int64_t x695 = 107522839356977LL;
	static int32_t x696 = INT32_MIN;

	t84 = (x693%(x694&(x695&x696)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x697 = UINT8_MAX;
	volatile int64_t x699 = -1LL;

	t85 = (x697%(x698&(x699&x700)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x701 = 872738U;
	int64_t x702 = INT64_MIN;
	int16_t x704 = INT16_MIN;
	static volatile int64_t t86 = -818328361698982LL;

	t86 = (x701%(x702&(x703&x704)));

	if (t86 != 872738LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x706 = INT8_MIN;
	volatile int32_t x707 = -1;
	static int32_t t87 = -35657358;

	t87 = (x705%(x706&(x707&x708)));

	if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x710 = 413;
	static uint8_t x711 = 14U;
	volatile int64_t x712 = -1LL;
	int64_t t88 = -25610LL;

	t88 = (x709%(x710&(x711&x712)));

	if (t88 != 8LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x714 = 2425618439864LLU;
	static int16_t x715 = INT16_MIN;
	int8_t x716 = -1;
	volatile uint64_t t89 = 8045372619341403LLU;

	t89 = (x713%(x714&(x715&x716)));

	if (t89 != 29247255874LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x726 = -107;
	volatile int16_t x727 = 7;
	uint8_t x728 = UINT8_MAX;
	uint32_t t90 = 1718491559U;

	t90 = (x725%(x726&(x727&x728)));

	if (t90 != 4U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x734 = UINT32_MAX;
	volatile uint32_t t91 = 4U;

	t91 = (x733%(x734&(x735&x736)));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x745 = INT64_MAX;
	volatile int32_t x746 = -1;
	volatile uint8_t x748 = 13U;
	int64_t t92 = 6LL;

	t92 = (x745%(x746&(x747&x748)));

	if (t92 != 7LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x754 = -1;
	int32_t x755 = -161657;
	volatile int64_t x756 = INT64_MIN;
	int64_t t93 = -1656291989852LL;

	t93 = (x753%(x754&(x755&x756)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x757 = -1;
	int8_t x758 = -1;
	static int8_t x759 = -1;
	volatile int16_t x760 = INT16_MIN;
	volatile int32_t t94 = 35;

	t94 = (x757%(x758&(x759&x760)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x761 = INT64_MIN;
	static int16_t x763 = -47;
	int16_t x764 = -1;

	t95 = (x761%(x762&(x763&x764)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x791 = 19U;
	int8_t x792 = 33;
	volatile int32_t t96 = 33;

	t96 = (x789%(x790&(x791&x792)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x795 = 3562;
	int16_t x796 = -1;
	static volatile uint32_t t97 = 2900590U;

	t97 = (x793%(x794&(x795&x796)));

	if (t97 != 709U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x797 = INT16_MIN;
	static int8_t x798 = -1;
	uint64_t x799 = UINT64_MAX;
	volatile int32_t x800 = INT32_MIN;

	t98 = (x797%(x798&(x799&x800)));

	if (t98 != 2147450880LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x818 = 282969;
	volatile int64_t x819 = -1LL;
	volatile uint8_t x820 = 62U;
	int64_t t99 = 409908863379517LL;

	t99 = (x817%(x818&(x819&x820)));

	if (t99 != 15LL) { NG(); } else { ; }
	
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

