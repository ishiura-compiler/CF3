#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 1;
int64_t x9 = INT64_MIN;
int16_t x10 = -1;
static int32_t x12 = -1;
int16_t x19 = INT16_MAX;
static uint64_t x20 = 254LLU;
static int16_t x21 = 3;
uint8_t x40 = 0U;
int32_t t7 = -6;
int32_t x50 = -1;
int16_t x56 = INT16_MAX;
volatile int32_t t9 = 2528;
volatile int16_t x66 = INT16_MAX;
int64_t x68 = INT64_MAX;
int64_t x81 = 0LL;
int8_t x104 = -1;
int8_t x109 = -1;
volatile int16_t x117 = INT16_MIN;
int64_t x126 = INT64_MIN;
int32_t t23 = 23429930;
volatile uint8_t x133 = 27U;
volatile int16_t x136 = INT16_MIN;
int64_t x144 = INT64_MAX;
int8_t x146 = INT8_MIN;
static int8_t x157 = -3;
static int16_t x159 = INT16_MAX;
static uint8_t x167 = UINT8_MAX;
volatile int64_t x172 = 7LL;
uint8_t x177 = 3U;
uint8_t x180 = 2U;
int32_t x185 = -43647;
int64_t x187 = -1LL;
volatile int8_t x190 = -50;
static uint64_t x200 = 912858403881813414LLU;
volatile int32_t t37 = -41014;
volatile uint64_t x209 = 527LLU;
volatile uint64_t t39 = 8105932164LLU;
int32_t x222 = 21;
int32_t t42 = -272109;
static int16_t x236 = INT16_MIN;
volatile int32_t t46 = -8;
int32_t x254 = 39;
static int16_t x264 = INT16_MIN;
uint16_t x266 = 6U;
volatile uint64_t x278 = UINT64_MAX;
int32_t t53 = -244833;
uint32_t x293 = UINT32_MAX;
int64_t x305 = 485423680183LL;
int64_t t57 = -6099428307LL;
int64_t x310 = INT64_MIN;
int8_t x312 = 5;
static int8_t x349 = INT8_MIN;
static uint8_t x351 = 112U;
int16_t x354 = INT16_MIN;
int32_t t65 = -15075;
volatile int16_t x371 = -1;
static int64_t x373 = -1LL;
volatile uint32_t x376 = UINT32_MAX;
int32_t x381 = 0;
volatile uint32_t x386 = 3U;
int8_t x388 = INT8_MIN;
volatile uint8_t x397 = 6U;
int8_t x407 = -1;
uint32_t t74 = 3597U;
volatile uint8_t x409 = 10U;
int8_t x420 = INT8_MIN;
volatile uint16_t x424 = 56U;
static uint32_t x427 = 14141787U;
volatile uint32_t t78 = 468U;
int64_t x432 = 148319LL;
volatile int64_t t79 = -2603123LL;
static int8_t x445 = INT8_MAX;
int8_t x452 = INT8_MIN;
volatile int64_t t82 = -4167568LL;
int32_t t83 = -1;
volatile int64_t t84 = -6994042081135LL;
uint8_t x466 = 71U;
volatile int32_t x467 = 17;
int64_t x472 = -1LL;
uint8_t x475 = UINT8_MAX;
static uint32_t x476 = UINT32_MAX;
static uint8_t x479 = 57U;
uint8_t x480 = UINT8_MAX;
static int64_t x493 = INT64_MIN;
int32_t x518 = INT32_MIN;
volatile int32_t t95 = 0;
static uint32_t x538 = 90U;


void f0(void) {
	int64_t x1 = 581843800LL;
	uint8_t x2 = 1U;
	static volatile int32_t x4 = INT32_MIN;
	volatile int64_t t0 = -19417828426400295LL;

	t0 = (x1-(x2<(x3*x4)));

	if (t0 != 581843800LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MAX;
	volatile uint8_t x7 = 10U;
	volatile int16_t x8 = 1;
	int32_t t1 = -877344191;

	t1 = (x5-(x6<(x7*x8)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x11 = 83U;
	volatile int64_t t2 = INT64_MIN;

	t2 = (x9-(x10<(x11*x12)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int64_t x14 = -1LL;
	volatile uint16_t x15 = UINT16_MAX;
	static int64_t x16 = 904051LL;
	static volatile int32_t t3 = 66369589;

	t3 = (x13-(x14<(x15*x16)));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 677910660LLU;
	static int64_t x18 = INT64_MIN;
	static uint64_t t4 = 537010741870575LLU;

	t4 = (x17-(x18<(x19*x20)));

	if (t4 != 677910660LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	volatile uint32_t x23 = 178U;
	volatile int32_t x24 = -1;
	static int32_t t5 = -1008736;

	t5 = (x21-(x22<(x23*x24)));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 88LLU;
	uint32_t x30 = 122084742U;
	int16_t x31 = -325;
	volatile int16_t x32 = -1;
	volatile uint64_t t6 = 605229927040858LLU;

	t6 = (x29-(x30<(x31*x32)));

	if (t6 != 88LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = INT8_MAX;
	uint16_t x38 = 39U;
	uint16_t x39 = 8010U;

	t7 = (x37-(x38<(x39*x40)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x49 = -15;
	static volatile int64_t x51 = -2309099LL;
	int8_t x52 = 9;
	volatile int32_t t8 = -1330;

	t8 = (x49-(x50<(x51*x52)));

	if (t8 != -15) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MAX;
	uint32_t x54 = 52143061U;
	uint32_t x55 = UINT32_MAX;

	t9 = (x53-(x54<(x55*x56)));

	if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 37U;
	uint64_t x58 = 1228693526059835LLU;
	volatile int64_t x59 = -1LL;
	int64_t x60 = INT64_MAX;
	volatile int32_t t10 = -1508;

	t10 = (x57-(x58<(x59*x60)));

	if (t10 != 36) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = INT64_MAX;
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	static int32_t x64 = -10727;
	volatile int64_t t11 = 12435167759537LL;

	t11 = (x61-(x62<(x63*x64)));

	if (t11 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x65 = 29833812314550LL;
	uint16_t x67 = 0U;
	volatile int64_t t12 = 478LL;

	t12 = (x65-(x66<(x67*x68)));

	if (t12 != 29833812314550LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = 9;
	static volatile int8_t x70 = INT8_MAX;
	int32_t x71 = -1;
	volatile int8_t x72 = -7;
	int32_t t13 = 1843;

	t13 = (x69-(x70<(x71*x72)));

	if (t13 != 9) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x77 = UINT64_MAX;
	int64_t x78 = -1LL;
	int64_t x79 = -1LL;
	uint32_t x80 = 77U;
	static uint64_t t14 = UINT64_MAX;

	t14 = (x77-(x78<(x79*x80)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MAX;
	uint8_t x84 = 0U;
	int64_t t15 = -46566387861438811LL;

	t15 = (x81-(x82<(x83*x84)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = 9U;
	uint16_t x90 = 6153U;
	int16_t x91 = INT16_MIN;
	static volatile uint16_t x92 = 15U;
	int32_t t16 = 5262915;

	t16 = (x89-(x90<(x91*x92)));

	if (t16 != 9) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x93 = 0U;
	uint8_t x94 = 22U;
	int16_t x95 = -1;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t17 = 202969597;

	t17 = (x93-(x94<(x95*x96)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = 603U;
	int16_t x102 = 1;
	int8_t x103 = INT8_MAX;
	uint32_t t18 = 733503U;

	t18 = (x101-(x102<(x103*x104)));

	if (t18 != 603U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = 6198956LL;
	uint16_t x106 = 1U;
	int16_t x107 = INT16_MIN;
	volatile int16_t x108 = -632;
	int64_t t19 = -1496360LL;

	t19 = (x105-(x106<(x107*x108)));

	if (t19 != 6198955LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x110 = UINT8_MAX;
	static int16_t x111 = INT16_MIN;
	volatile int8_t x112 = -5;
	volatile int32_t t20 = -291371681;

	t20 = (x109-(x110<(x111*x112)));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x118 = 87;
	static uint64_t x119 = 54006130LLU;
	static volatile int8_t x120 = 30;
	static int32_t t21 = 78536;

	t21 = (x117-(x118<(x119*x120)));

	if (t21 != -32769) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x125 = INT16_MAX;
	uint64_t x127 = 2623490094011LLU;
	int16_t x128 = INT16_MIN;
	int32_t t22 = -32014;

	t22 = (x125-(x126<(x127*x128)));

	if (t22 != 32766) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = INT16_MIN;
	static int16_t x130 = -1;
	volatile int32_t x131 = INT32_MIN;
	uint32_t x132 = 227512U;

	t23 = (x129-(x130<(x131*x132)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x134 = 122U;
	uint8_t x135 = UINT8_MAX;
	volatile int32_t t24 = -735068752;

	t24 = (x133-(x134<(x135*x136)));

	if (t24 != 27) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = INT16_MAX;
	int16_t x142 = INT16_MIN;
	int32_t x143 = -1;
	static volatile int32_t t25 = 11104;

	t25 = (x141-(x142<(x143*x144)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x145 = INT16_MAX;
	uint8_t x147 = UINT8_MAX;
	uint16_t x148 = 15U;
	static int32_t t26 = 367;

	t26 = (x145-(x146<(x147*x148)));

	if (t26 != 32766) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x153 = 16044;
	static int32_t x154 = -1;
	static int64_t x155 = -1LL;
	uint64_t x156 = UINT64_MAX;
	static volatile int32_t t27 = 39;

	t27 = (x153-(x154<(x155*x156)));

	if (t27 != 16044) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x158 = INT8_MIN;
	int64_t x160 = -1LL;
	static int32_t t28 = -443571;

	t28 = (x157-(x158<(x159*x160)));

	if (t28 != -3) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x165 = 1246U;
	static uint16_t x166 = UINT16_MAX;
	int64_t x168 = -1LL;
	volatile int32_t t29 = -7543294;

	t29 = (x165-(x166<(x167*x168)));

	if (t29 != 1246) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = -28;
	int8_t x171 = INT8_MIN;
	volatile int32_t t30 = -177684293;

	t30 = (x169-(x170<(x171*x172)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x173 = 4347099920384308LLU;
	static uint64_t x174 = UINT64_MAX;
	static volatile int16_t x175 = -1;
	int8_t x176 = -1;
	uint64_t t31 = 775LLU;

	t31 = (x173-(x174<(x175*x176)));

	if (t31 != 4347099920384308LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x178 = UINT16_MAX;
	uint16_t x179 = 103U;
	volatile int32_t t32 = -3694631;

	t32 = (x177-(x178<(x179*x180)));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x181 = UINT8_MAX;
	int32_t x182 = 26;
	int32_t x183 = -1;
	uint16_t x184 = UINT16_MAX;
	int32_t t33 = 1817;

	t33 = (x181-(x182<(x183*x184)));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x186 = 109;
	uint64_t x188 = 1875458192033078781LLU;
	volatile int32_t t34 = 62;

	t34 = (x185-(x186<(x187*x188)));

	if (t34 != -43648) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = -1;
	int8_t x191 = -1;
	uint64_t x192 = 250177445775789LLU;
	volatile int32_t t35 = -5810587;

	t35 = (x189-(x190<(x191*x192)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x197 = INT64_MIN;
	uint64_t x198 = UINT64_MAX;
	volatile int16_t x199 = -1;
	volatile int64_t t36 = INT64_MIN;

	t36 = (x197-(x198<(x199*x200)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = 422;
	uint32_t x202 = 232471726U;
	static volatile uint64_t x203 = 32839644706LLU;
	volatile uint64_t x204 = 13398229LLU;

	t37 = (x201-(x202<(x203*x204)));

	if (t37 != 421) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x205 = INT8_MIN;
	static volatile uint8_t x206 = 2U;
	volatile int16_t x207 = INT16_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t38 = 9;

	t38 = (x205-(x206<(x207*x208)));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x210 = INT32_MIN;
	int16_t x211 = INT16_MIN;
	static uint16_t x212 = 8155U;

	t39 = (x209-(x210<(x211*x212)));

	if (t39 != 526LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MIN;
	uint16_t x219 = UINT16_MAX;
	volatile int8_t x220 = -1;
	static int32_t t40 = -23070;

	t40 = (x217-(x218<(x219*x220)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x221 = 7U;
	uint8_t x223 = 0U;
	volatile int64_t x224 = INT64_MIN;
	static volatile int32_t t41 = -400;

	t41 = (x221-(x222<(x223*x224)));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = -1;
	int32_t x227 = INT32_MIN;
	volatile int8_t x228 = 1;

	t42 = (x225-(x226<(x227*x228)));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x229 = UINT8_MAX;
	int16_t x230 = -1;
	int64_t x231 = -7768LL;
	static uint16_t x232 = UINT16_MAX;
	volatile int32_t t43 = 2;

	t43 = (x229-(x230<(x231*x232)));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x233 = 6;
	uint16_t x234 = UINT16_MAX;
	static volatile uint8_t x235 = UINT8_MAX;
	volatile int32_t t44 = 939;

	t44 = (x233-(x234<(x235*x236)));

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x237 = INT32_MAX;
	int64_t x238 = 5659LL;
	static uint8_t x239 = 1U;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t45 = -207702345;

	t45 = (x237-(x238<(x239*x240)));

	if (t45 != 2147483646) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x245 = 666U;
	uint16_t x246 = UINT16_MAX;
	volatile int32_t x247 = -1;
	uint16_t x248 = 19U;

	t46 = (x245-(x246<(x247*x248)));

	if (t46 != 666) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x249 = INT8_MIN;
	volatile int64_t x250 = -1LL;
	uint8_t x251 = 3U;
	uint8_t x252 = UINT8_MAX;
	static int32_t t47 = 821688;

	t47 = (x249-(x250<(x251*x252)));

	if (t47 != -129) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x253 = -1LL;
	uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MAX;
	int64_t t48 = -141728LL;

	t48 = (x253-(x254<(x255*x256)));

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x257 = INT8_MAX;
	int64_t x258 = -87LL;
	static uint32_t x259 = 0U;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t49 = -97;

	t49 = (x257-(x258<(x259*x260)));

	if (t49 != 126) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x261 = -430;
	uint64_t x262 = 2312LLU;
	int8_t x263 = -1;
	int32_t t50 = 27;

	t50 = (x261-(x262<(x263*x264)));

	if (t50 != -431) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x265 = 3337U;
	int64_t x267 = 239981998LL;
	int8_t x268 = 56;
	volatile int32_t t51 = 1;

	t51 = (x265-(x266<(x267*x268)));

	if (t51 != 3336) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x269 = 3U;
	int8_t x270 = INT8_MIN;
	int32_t x271 = -1;
	volatile int32_t x272 = -1;
	volatile int32_t t52 = 4;

	t52 = (x269-(x270<(x271*x272)));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x277 = 1;
	uint64_t x279 = 1639041019LLU;
	volatile int8_t x280 = -31;

	t53 = (x277-(x278<(x279*x280)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x281 = -998426LL;
	int8_t x282 = INT8_MIN;
	uint32_t x283 = 5334U;
	uint32_t x284 = UINT32_MAX;
	int64_t t54 = 5704LL;

	t54 = (x281-(x282<(x283*x284)));

	if (t54 != -998426LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x285 = INT8_MAX;
	int32_t x286 = -1;
	int32_t x287 = INT32_MIN;
	static int8_t x288 = 1;
	int32_t t55 = -30149;

	t55 = (x285-(x286<(x287*x288)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x294 = INT16_MIN;
	int16_t x295 = 2;
	static uint16_t x296 = 0U;
	volatile uint32_t t56 = 0U;

	t56 = (x293-(x294<(x295*x296)));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x306 = -1LL;
	uint32_t x307 = 21626837U;
	volatile int16_t x308 = -1;

	t57 = (x305-(x306<(x307*x308)));

	if (t57 != 485423680182LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = -5;
	uint64_t x311 = 2137316299314918LLU;
	int32_t t58 = 14988;

	t58 = (x309-(x310<(x311*x312)));

	if (t58 != -5) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x313 = 107435656013773LLU;
	int32_t x314 = -1;
	static uint16_t x315 = 1U;
	int32_t x316 = -45;
	uint64_t t59 = 0LLU;

	t59 = (x313-(x314<(x315*x316)));

	if (t59 != 107435656013773LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x317 = 1U;
	int64_t x318 = INT64_MIN;
	static uint16_t x319 = UINT16_MAX;
	uint64_t x320 = 1032009633LLU;
	int32_t t60 = 107;

	t60 = (x317-(x318<(x319*x320)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x325 = INT8_MIN;
	volatile int8_t x326 = -1;
	uint32_t x327 = 13U;
	volatile int64_t x328 = -2179268404785553LL;
	volatile int32_t t61 = 592;

	t61 = (x325-(x326<(x327*x328)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x341 = 2U;
	int32_t x342 = INT32_MAX;
	uint32_t x343 = 1158U;
	uint32_t x344 = 4925U;
	int32_t t62 = -136;

	t62 = (x341-(x342<(x343*x344)));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x350 = 115U;
	static uint64_t x352 = 11LLU;
	volatile int32_t t63 = -10432053;

	t63 = (x349-(x350<(x351*x352)));

	if (t63 != -129) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x353 = 48498LLU;
	int16_t x355 = -6;
	volatile int32_t x356 = -1;
	uint64_t t64 = 11325847LLU;

	t64 = (x353-(x354<(x355*x356)));

	if (t64 != 48497LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x361 = 346U;
	volatile int64_t x362 = -1529587908LL;
	static int16_t x363 = 5;
	volatile int8_t x364 = 57;

	t65 = (x361-(x362<(x363*x364)));

	if (t65 != 345) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x369 = 0;
	int16_t x370 = -207;
	int8_t x372 = INT8_MIN;
	int32_t t66 = 6675;

	t66 = (x369-(x370<(x371*x372)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x374 = INT64_MIN;
	static int16_t x375 = 61;
	volatile int64_t t67 = 6299046365328373LL;

	t67 = (x373-(x374<(x375*x376)));

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x377 = 840;
	int32_t x378 = INT32_MIN;
	uint8_t x379 = 1U;
	uint32_t x380 = 86189142U;
	volatile int32_t t68 = 91979;

	t68 = (x377-(x378<(x379*x380)));

	if (t68 != 840) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x382 = -1;
	volatile uint32_t x383 = 66U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t69 = 846648389;

	t69 = (x381-(x382<(x383*x384)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x385 = UINT8_MAX;
	int8_t x387 = 2;
	int32_t t70 = 3369901;

	t70 = (x385-(x386<(x387*x388)));

	if (t70 != 254) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x393 = -20;
	int32_t x394 = INT32_MIN;
	volatile int32_t x395 = -1;
	uint16_t x396 = 22U;
	int32_t t71 = -221421231;

	t71 = (x393-(x394<(x395*x396)));

	if (t71 != -21) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x398 = 2281U;
	int16_t x399 = INT16_MIN;
	volatile int8_t x400 = 0;
	int32_t t72 = -151554097;

	t72 = (x397-(x398<(x399*x400)));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x401 = 921;
	int64_t x402 = -1786998LL;
	uint64_t x403 = 3872777LLU;
	int32_t x404 = -3;
	int32_t t73 = 1;

	t73 = (x401-(x402<(x403*x404)));

	if (t73 != 921) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x405 = 205363U;
	int16_t x406 = INT16_MAX;
	int8_t x408 = INT8_MAX;

	t74 = (x405-(x406<(x407*x408)));

	if (t74 != 205363U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x410 = INT16_MAX;
	volatile uint64_t x411 = 172LLU;
	int32_t x412 = -10664;
	volatile int32_t t75 = 247;

	t75 = (x409-(x410<(x411*x412)));

	if (t75 != 9) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x417 = INT16_MIN;
	uint16_t x418 = 31685U;
	int16_t x419 = INT16_MIN;
	int32_t t76 = 8;

	t76 = (x417-(x418<(x419*x420)));

	if (t76 != -32769) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x421 = INT64_MAX;
	int16_t x422 = -122;
	static uint16_t x423 = 430U;
	volatile int64_t t77 = -3413793632510213224LL;

	t77 = (x421-(x422<(x423*x424)));

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x425 = 5U;
	int64_t x426 = INT64_MIN;
	int8_t x428 = INT8_MIN;

	t78 = (x425-(x426<(x427*x428)));

	if (t78 != 4U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x429 = -1LL;
	volatile int8_t x430 = INT8_MIN;
	static int32_t x431 = 112556;

	t79 = (x429-(x430<(x431*x432)));

	if (t79 != -2LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x441 = 1482762015LL;
	int8_t x442 = INT8_MIN;
	volatile int32_t x443 = -1;
	static int64_t x444 = -1LL;
	int64_t t80 = -26137684LL;

	t80 = (x441-(x442<(x443*x444)));

	if (t80 != 1482762014LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x446 = -1207LL;
	uint64_t x447 = UINT64_MAX;
	int32_t x448 = 127380854;
	volatile int32_t t81 = -211926;

	t81 = (x445-(x446<(x447*x448)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x449 = -346563819558477324LL;
	volatile uint16_t x450 = UINT16_MAX;
	volatile int8_t x451 = INT8_MIN;

	t82 = (x449-(x450<(x451*x452)));

	if (t82 != -346563819558477324LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x453 = INT16_MIN;
	uint16_t x454 = UINT16_MAX;
	int8_t x455 = -1;
	int16_t x456 = INT16_MAX;

	t83 = (x453-(x454<(x455*x456)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x457 = -1LL;
	volatile int64_t x458 = 590134646995166948LL;
	uint8_t x459 = 15U;
	volatile int8_t x460 = INT8_MAX;

	t84 = (x457-(x458<(x459*x460)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x461 = -30537;
	volatile int32_t x462 = INT32_MAX;
	uint8_t x463 = 1U;
	int32_t x464 = -55453656;
	volatile int32_t t85 = 5448379;

	t85 = (x461-(x462<(x463*x464)));

	if (t85 != -30537) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x465 = INT64_MAX;
	uint16_t x468 = 25760U;
	int64_t t86 = 1068910048104LL;

	t86 = (x465-(x466<(x467*x468)));

	if (t86 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x469 = 2;
	static int8_t x470 = INT8_MIN;
	int16_t x471 = INT16_MIN;
	static volatile int32_t t87 = -2520;

	t87 = (x469-(x470<(x471*x472)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x473 = 14327;
	int16_t x474 = -1;
	int32_t t88 = 4043929;

	t88 = (x473-(x474<(x475*x476)));

	if (t88 != 14327) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x477 = INT8_MIN;
	static int64_t x478 = INT64_MIN;
	int32_t t89 = 36;

	t89 = (x477-(x478<(x479*x480)));

	if (t89 != -129) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x481 = INT32_MAX;
	int8_t x482 = 5;
	static uint8_t x483 = 102U;
	static int16_t x484 = -1;
	volatile int32_t t90 = INT32_MAX;

	t90 = (x481-(x482<(x483*x484)));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x489 = -1LL;
	uint16_t x490 = 142U;
	static uint16_t x491 = UINT16_MAX;
	static int8_t x492 = -37;
	volatile int64_t t91 = -1833LL;

	t91 = (x489-(x490<(x491*x492)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x494 = INT16_MIN;
	uint32_t x495 = 11875779U;
	int32_t x496 = -1;
	int64_t t92 = INT64_MIN;

	t92 = (x493-(x494<(x495*x496)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x509 = INT16_MAX;
	static int8_t x510 = INT8_MAX;
	volatile int16_t x511 = INT16_MIN;
	int16_t x512 = -1;
	volatile int32_t t93 = -799561;

	t93 = (x509-(x510<(x511*x512)));

	if (t93 != 32766) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x513 = 200902330LLU;
	uint8_t x514 = UINT8_MAX;
	uint8_t x515 = UINT8_MAX;
	uint32_t x516 = UINT32_MAX;
	uint64_t t94 = 42LLU;

	t94 = (x513-(x514<(x515*x516)));

	if (t94 != 200902329LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x517 = INT16_MAX;
	int8_t x519 = -1;
	uint64_t x520 = UINT64_MAX;

	t95 = (x517-(x518<(x519*x520)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x521 = 3U;
	int64_t x522 = INT64_MAX;
	volatile uint32_t x523 = 575539U;
	volatile int32_t x524 = INT32_MAX;
	int32_t t96 = 26;

	t96 = (x521-(x522<(x523*x524)));

	if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x525 = 546659670LL;
	int8_t x526 = INT8_MIN;
	int32_t x527 = 20;
	uint64_t x528 = 56LLU;
	volatile int64_t t97 = -28397950851LL;

	t97 = (x525-(x526<(x527*x528)));

	if (t97 != 546659670LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x537 = INT64_MIN;
	static int8_t x539 = -1;
	int64_t x540 = -1LL;
	int64_t t98 = INT64_MIN;

	t98 = (x537-(x538<(x539*x540)));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x541 = 18147024LLU;
	static int32_t x542 = 13701987;
	uint32_t x543 = UINT32_MAX;
	int64_t x544 = -13726108LL;
	uint64_t t99 = 5609532309343976216LLU;

	t99 = (x541-(x542<(x543*x544)));

	if (t99 != 18147024LLU) { NG(); } else { ; }
	
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

