#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 378U;
uint16_t x11 = 2U;
int32_t x17 = INT32_MIN;
uint16_t x34 = 25514U;
int64_t x35 = INT64_MIN;
int64_t t4 = -6711288320019LL;
int32_t x37 = INT32_MIN;
static volatile int16_t x42 = INT16_MIN;
volatile uint64_t t7 = 3238LLU;
volatile int16_t x68 = INT16_MIN;
static volatile int32_t x71 = -1;
static int32_t t10 = -355;
volatile uint64_t t11 = 24490608227045LLU;
uint64_t x82 = UINT64_MAX;
int16_t x83 = INT16_MAX;
int32_t t13 = -4443;
int32_t x97 = INT32_MAX;
uint32_t x98 = 17U;
static int32_t x100 = -7;
int64_t t15 = 22786163LL;
volatile int16_t x111 = INT16_MIN;
static uint64_t x112 = 9976205LLU;
int64_t x126 = INT64_MIN;
static volatile int64_t t19 = INT64_MIN;
int8_t x148 = INT8_MIN;
volatile int64_t t21 = INT64_MIN;
int16_t x151 = -243;
static uint64_t t22 = 4678165LLU;
volatile int64_t x157 = 17185889486262370LL;
int64_t x160 = 86033496LL;
int16_t x162 = 16342;
static uint32_t x168 = UINT32_MAX;
static volatile int64_t x173 = -1LL;
int8_t x174 = INT8_MIN;
int64_t x175 = -1LL;
int8_t x177 = 1;
volatile int32_t t27 = -526103;
int64_t x181 = INT64_MAX;
volatile uint16_t x182 = 5208U;
int8_t x189 = 1;
volatile uint16_t x214 = 992U;
uint8_t x221 = 63U;
int64_t x237 = -5600830381026603LL;
static uint16_t x241 = 0U;
int32_t x244 = -14855;
uint16_t x250 = 92U;
static volatile int64_t x264 = INT64_MAX;
volatile uint32_t x265 = 31520426U;
int16_t x267 = -1;
int8_t x272 = -1;
static uint16_t x302 = 23723U;
int16_t x319 = 6474;
static int16_t x320 = INT16_MIN;
volatile int64_t x328 = -1LL;
uint64_t t50 = 2332592130115715LLU;
int64_t x330 = INT64_MIN;
volatile int16_t x334 = -1;
int8_t x354 = INT8_MIN;
static int32_t x368 = -111253;
int16_t x369 = -1;
int64_t x381 = -1LL;
static uint32_t x382 = 8108U;
static uint64_t x384 = 1799509163107LLU;
static uint32_t x394 = 179791U;
int16_t x397 = -1210;
int16_t x411 = 1;
static uint16_t x415 = UINT16_MAX;
int8_t x416 = 8;
static volatile int64_t t64 = -15952172106230LL;
uint16_t x425 = 11938U;
int16_t x431 = -1;
int8_t x439 = 0;
volatile uint64_t x440 = 311500782462LLU;
uint64_t x454 = UINT64_MAX;
static int16_t x456 = INT16_MIN;
uint8_t x459 = 4U;
int32_t x478 = -1;
int16_t x480 = INT16_MAX;
uint16_t x482 = UINT16_MAX;
int8_t x483 = 13;
uint8_t x484 = 65U;
volatile uint64_t t74 = 397748997120LLU;
uint64_t t75 = 152601164887LLU;
int64_t x495 = 13923756792676044LL;
int16_t x496 = -1;
int8_t x507 = INT8_MAX;
volatile uint32_t x508 = 2852U;
int16_t x511 = INT16_MAX;
int64_t t79 = 356548LL;
uint16_t x529 = 11390U;
uint16_t x537 = 3U;
int16_t x549 = INT16_MIN;
uint32_t x561 = 54018U;
int32_t t89 = -149147;
int16_t x575 = INT16_MIN;
int64_t x576 = -159758LL;
int16_t x582 = INT16_MIN;
uint8_t x583 = 9U;
uint32_t x602 = 269U;
volatile int64_t x605 = -1LL;
static uint8_t x608 = UINT8_MAX;
static volatile uint64_t x611 = UINT64_MAX;
static int16_t x612 = 34;


void f0(void) {
	static int16_t x6 = INT16_MIN;
	int32_t x7 = -1;
	int64_t x8 = -1LL;
	volatile int64_t t0 = -1908194406412LL;

	t0 = (x5-(x6&(x7*x8)));

	if (t0 != 378LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	uint16_t x10 = UINT16_MAX;
	int64_t x12 = -9787794420LL;
	static int64_t t1 = 40LL;

	t1 = (x9-(x10&(x11*x12)));

	if (t1 != -14361LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x18 = 194913LLU;
	uint8_t x19 = 0U;
	uint32_t x20 = 2386U;
	uint64_t t2 = 7313712211LLU;

	t2 = (x17-(x18&(x19*x20)));

	if (t2 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x25 = INT8_MIN;
	volatile int8_t x26 = -1;
	static int32_t x27 = -2;
	int8_t x28 = INT8_MIN;
	volatile int32_t t3 = 36419;

	t3 = (x25-(x26&(x27*x28)));

	if (t3 != -384) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x33 = UINT16_MAX;
	volatile int8_t x36 = 1;

	t4 = (x33-(x34&(x35*x36)));

	if (t4 != 65535LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x38 = INT8_MIN;
	uint64_t x39 = UINT64_MAX;
	static int8_t x40 = INT8_MAX;
	static uint64_t t5 = 159713113441402LLU;

	t5 = (x37-(x38&(x39*x40)));

	if (t5 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x41 = 6028439LLU;
	uint16_t x43 = 3U;
	static uint64_t x44 = 4021244528305323LLU;
	static uint64_t t6 = 3540235184697LLU;

	t6 = (x41-(x42&(x43*x44)));

	if (t6 != 18434680340130692247LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x53 = 4U;
	uint64_t x54 = 429975593782765LLU;
	static uint8_t x55 = UINT8_MAX;
	static int16_t x56 = INT16_MAX;

	t7 = (x53-(x54&(x55*x56)));

	if (t7 != 18446744073709089539LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x57 = -1;
	volatile int32_t x58 = INT32_MIN;
	int32_t x59 = INT32_MAX;
	int32_t x60 = 0;
	int32_t t8 = 1;

	t8 = (x57-(x58&(x59*x60)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x65 = -277;
	uint64_t x66 = UINT64_MAX;
	static uint8_t x67 = UINT8_MAX;
	static volatile uint64_t t9 = 9639LLU;

	t9 = (x65-(x66&(x67*x68)));

	if (t9 != 8355563LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = 1;
	int16_t x70 = -1126;
	static int16_t x72 = INT16_MIN;

	t10 = (x69-(x70&(x71*x72)));

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x77 = INT8_MIN;
	int32_t x78 = INT32_MIN;
	uint64_t x79 = 4821522069LLU;
	int64_t x80 = -2418086LL;

	t11 = (x77-(x78&(x79*x80)));

	if (t11 != 11658856228716416LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = INT8_MIN;
	volatile uint32_t x84 = 43U;
	volatile uint64_t t12 = 1395410614851701LLU;

	t12 = (x81-(x82&(x83*x84)));

	if (t12 != 18446744073708142507LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = -31;
	volatile int8_t x86 = -4;
	int16_t x87 = INT16_MIN;
	static int32_t x88 = 3;

	t13 = (x85-(x86&(x87*x88)));

	if (t13 != 98273) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x99 = 504241783379765251LLU;
	volatile uint64_t t14 = 1709597021993LLU;

	t14 = (x97-(x98&(x99*x100)));

	if (t14 != 2147483646LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x101 = 524U;
	volatile uint8_t x102 = 7U;
	static int64_t x103 = 44305LL;
	uint32_t x104 = UINT32_MAX;

	t15 = (x101-(x102&(x103*x104)));

	if (t15 != 517LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x109 = UINT16_MAX;
	int8_t x110 = -52;
	volatile uint64_t t16 = 5121LLU;

	t16 = (x109-(x110&(x111*x112)));

	if (t16 != 326900350975LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x113 = -661505999870823LL;
	volatile int32_t x114 = 1734;
	volatile uint16_t x115 = UINT16_MAX;
	uint8_t x116 = 51U;
	static int64_t t17 = 3265422808326LL;

	t17 = (x113-(x114&(x115*x116)));

	if (t17 != -661505999872555LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x121 = 13;
	int8_t x122 = INT8_MAX;
	int32_t x123 = -142840230;
	uint8_t x124 = 0U;
	volatile int32_t t18 = -1;

	t18 = (x121-(x122&(x123*x124)));

	if (t18 != 13) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x125 = INT64_MIN;
	static volatile int8_t x127 = -1;
	int8_t x128 = -42;

	t19 = (x125-(x126&(x127*x128)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x133 = 17545U;
	int64_t x134 = -1LL;
	uint64_t x135 = UINT64_MAX;
	static int32_t x136 = 90840202;
	uint64_t t20 = 68336360037LLU;

	t20 = (x133-(x134&(x135*x136)));

	if (t20 != 90857747LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x145 = INT64_MIN;
	int32_t x146 = INT32_MIN;
	volatile int16_t x147 = -2;

	t21 = (x145-(x146&(x147*x148)));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x149 = 6301U;
	uint64_t x150 = UINT64_MAX;
	volatile int8_t x152 = INT8_MAX;

	t22 = (x149-(x150&(x151*x152)));

	if (t22 != 37162LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	volatile uint64_t t23 = 1768491228922105LLU;

	t23 = (x157-(x158&(x159*x160)));

	if (t23 != 17185889572295866LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x161 = INT8_MIN;
	volatile int8_t x163 = INT8_MAX;
	int8_t x164 = INT8_MIN;
	volatile int32_t t24 = -4991063;

	t24 = (x161-(x162&(x163*x164)));

	if (t24 != -256) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x165 = -941792613LL;
	uint16_t x166 = UINT16_MAX;
	uint8_t x167 = UINT8_MAX;
	volatile int64_t t25 = -115927614694779LL;

	t25 = (x165-(x166&(x167*x168)));

	if (t25 != -941857894LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x176 = 2U;
	volatile int64_t t26 = -355LL;

	t26 = (x173-(x174&(x175*x176)));

	if (t26 != 127LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x178 = -1;
	uint8_t x179 = 24U;
	int16_t x180 = INT16_MAX;

	t27 = (x177-(x178&(x179*x180)));

	if (t27 != -786407) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x183 = 0;
	uint8_t x184 = 2U;
	volatile int64_t t28 = INT64_MAX;

	t28 = (x181-(x182&(x183*x184)));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x190 = -1;
	uint16_t x191 = UINT16_MAX;
	int16_t x192 = 13;
	static int32_t t29 = 14653;

	t29 = (x189-(x190&(x191*x192)));

	if (t29 != -851954) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x197 = INT32_MIN;
	static volatile int16_t x198 = 52;
	static int32_t x199 = INT32_MAX;
	volatile int8_t x200 = -1;
	int32_t t30 = INT32_MIN;

	t30 = (x197-(x198&(x199*x200)));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x213 = INT16_MAX;
	static volatile uint64_t x215 = UINT64_MAX;
	uint64_t x216 = UINT64_MAX;
	uint64_t t31 = 32105247362973LLU;

	t31 = (x213-(x214&(x215*x216)));

	if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x217 = 0;
	int16_t x218 = INT16_MIN;
	uint64_t x219 = UINT64_MAX;
	uint8_t x220 = 4U;
	volatile uint64_t t32 = 448010647975123147LLU;

	t32 = (x217-(x218&(x219*x220)));

	if (t32 != 32768LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x222 = -1LL;
	int32_t x223 = -1982;
	int32_t x224 = 713110;
	int64_t t33 = -78848313805LL;

	t33 = (x221-(x222&(x223*x224)));

	if (t33 != 1413384083LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x233 = -1LL;
	uint16_t x234 = UINT16_MAX;
	volatile uint8_t x235 = 23U;
	int16_t x236 = -1;
	int64_t t34 = -204071LL;

	t34 = (x233-(x234&(x235*x236)));

	if (t34 != -65514LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x238 = 450U;
	volatile uint16_t x239 = 2U;
	int64_t x240 = -6987727462443433LL;
	volatile int64_t t35 = -18340612449LL;

	t35 = (x237-(x238&(x239*x240)));

	if (t35 != -5600830381026733LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x242 = INT64_MIN;
	int32_t x243 = -22;
	volatile int64_t t36 = -1672526LL;

	t36 = (x241-(x242&(x243*x244)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x249 = UINT16_MAX;
	uint64_t x251 = 44174545379LLU;
	int8_t x252 = 30;
	volatile uint64_t t37 = 5348124616LLU;

	t37 = (x249-(x250&(x251*x252)));

	if (t37 != 65511LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x253 = INT8_MIN;
	uint8_t x254 = UINT8_MAX;
	static uint32_t x255 = 2957257U;
	int8_t x256 = INT8_MIN;
	volatile uint32_t t38 = 92477654U;

	t38 = (x253-(x254&(x255*x256)));

	if (t38 != 4294967040U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x261 = UINT8_MAX;
	static volatile uint8_t x262 = 13U;
	int64_t x263 = -1LL;
	static volatile int64_t t39 = 240988LL;

	t39 = (x261-(x262&(x263*x264)));

	if (t39 != 254LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x266 = 1308U;
	uint64_t x268 = 5151918690LLU;
	uint64_t t40 = 13647LLU;

	t40 = (x265-(x266&(x267*x268)));

	if (t40 != 31519118LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x269 = 4U;
	static volatile uint64_t x270 = 920908303902273416LLU;
	volatile int16_t x271 = INT16_MIN;
	volatile uint64_t t41 = 417890555LLU;

	t41 = (x269-(x270&(x271*x272)));

	if (t41 != 4LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = -6817934637LL;
	volatile int64_t x279 = INT64_MIN;
	uint8_t x280 = 1U;
	volatile int64_t t42 = 1LL;

	t42 = (x277-(x278&(x279*x280)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x289 = INT16_MIN;
	static volatile uint32_t x290 = 14356776U;
	volatile int64_t x291 = INT64_MAX;
	int8_t x292 = -1;
	volatile int64_t t43 = 4448937999LL;

	t43 = (x289-(x290&(x291*x292)));

	if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x293 = 55;
	volatile int16_t x294 = -1;
	static uint16_t x295 = UINT16_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t44 = 28809;

	t44 = (x293-(x294&(x295*x296)));

	if (t44 != 2147450935) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x297 = 0U;
	static int32_t x298 = 30949288;
	static int8_t x299 = INT8_MAX;
	volatile int8_t x300 = -14;
	volatile int32_t t45 = 2232553;

	t45 = (x297-(x298&(x299*x300)));

	if (t45 != -30947592) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x301 = 658253459LLU;
	int8_t x303 = -29;
	int64_t x304 = -985380LL;
	volatile uint64_t t46 = 9132224912LLU;

	t46 = (x301-(x302&(x303*x304)));

	if (t46 != 658251411LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x305 = 3U;
	static uint64_t x306 = 25097695784LLU;
	static int64_t x307 = -1LL;
	int8_t x308 = INT8_MIN;
	static uint64_t t47 = 5310305720504LLU;

	t47 = (x305-(x306&(x307*x308)));

	if (t47 != 3LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x317 = -1LL;
	int64_t x318 = -6073LL;
	int64_t t48 = 22225982982621LL;

	t48 = (x317-(x318&(x319*x320)));

	if (t48 != 212140031LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x321 = 430752529U;
	volatile int16_t x322 = -1;
	static int64_t x323 = -7471893682887LL;
	int16_t x324 = -1;
	int64_t t49 = 8LL;

	t49 = (x321-(x322&(x323*x324)));

	if (t49 != -7471462930358LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x325 = UINT64_MAX;
	static int32_t x326 = -1;
	int64_t x327 = INT64_MAX;

	t50 = (x325-(x326&(x327*x328)));

	if (t50 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x329 = -42411750030LL;
	int32_t x331 = -1;
	static int16_t x332 = 17;
	static int64_t t51 = 41LL;

	t51 = (x329-(x330&(x331*x332)));

	if (t51 != 9223371994443025778LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x333 = 107U;
	uint8_t x335 = 53U;
	int16_t x336 = -992;
	volatile int32_t t52 = 2773132;

	t52 = (x333-(x334&(x335*x336)));

	if (t52 != 52683) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x353 = 1;
	int16_t x355 = 3;
	volatile uint8_t x356 = 17U;
	int32_t t53 = 116227;

	t53 = (x353-(x354&(x355*x356)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x357 = -1LL;
	uint16_t x358 = 3121U;
	volatile uint16_t x359 = 2U;
	int32_t x360 = -360739602;
	static volatile int64_t t54 = 7698112227581LL;

	t54 = (x357-(x358&(x359*x360)));

	if (t54 != -2065LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MIN;
	volatile int32_t x367 = -1;
	int32_t t55 = 4740117;

	t55 = (x365-(x366&(x367*x368)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x370 = 1;
	static uint32_t x371 = UINT32_MAX;
	int8_t x372 = 2;
	uint32_t t56 = UINT32_MAX;

	t56 = (x369-(x370&(x371*x372)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x383 = INT64_MAX;
	volatile uint64_t t57 = 6805254582421386LLU;

	t57 = (x381-(x382&(x383*x384)));

	if (t57 != 18446744073709550707LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x385 = INT64_MAX;
	uint64_t x386 = UINT64_MAX;
	int64_t x387 = -1LL;
	static uint64_t x388 = 727006288507LLU;
	volatile uint64_t t58 = 126299571389LLU;

	t58 = (x385-(x386&(x387*x388)));

	if (t58 != 9223372763861064314LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x393 = 0U;
	uint16_t x395 = 27728U;
	int8_t x396 = INT8_MIN;
	volatile uint32_t t59 = 1589U;

	t59 = (x393-(x394&(x395*x396)));

	if (t59 != 4294928384U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x398 = 1;
	uint64_t x399 = 187221331LLU;
	int32_t x400 = INT32_MIN;
	volatile uint64_t t60 = 2380LLU;

	t60 = (x397-(x398&(x399*x400)));

	if (t60 != 18446744073709550406LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MIN;
	uint32_t x403 = 1789760U;
	static int32_t x404 = INT32_MIN;
	int64_t t61 = INT64_MIN;

	t61 = (x401-(x402&(x403*x404)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x405 = 5;
	int8_t x406 = INT8_MAX;
	uint32_t x407 = 273706U;
	int16_t x408 = 5861;
	static volatile uint32_t t62 = 3596U;

	t62 = (x405-(x406&(x407*x408)));

	if (t62 != 4294967283U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x409 = -1LL;
	int16_t x410 = 87;
	static volatile int32_t x412 = INT32_MIN;
	static volatile int64_t t63 = -1LL;

	t63 = (x409-(x410&(x411*x412)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x413 = -844267LL;
	int64_t x414 = INT64_MIN;

	t64 = (x413-(x414&(x415*x416)));

	if (t64 != -844267LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x421 = INT32_MAX;
	uint64_t x422 = 2775131119315635LLU;
	uint64_t x423 = UINT64_MAX;
	int8_t x424 = INT8_MIN;
	static uint64_t t65 = 104LLU;

	t65 = (x421-(x422&(x423*x424)));

	if (t65 != 2147483519LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x426 = 10168512366LL;
	static volatile uint32_t x427 = 2U;
	static uint32_t x428 = 7283U;
	int64_t t66 = -26999731900LL;

	t66 = (x425-(x426&(x427*x428)));

	if (t66 != 1596LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x429 = INT8_MAX;
	int16_t x430 = INT16_MAX;
	volatile uint32_t x432 = 131U;
	volatile uint32_t t67 = 304225U;

	t67 = (x429-(x430&(x431*x432)));

	if (t67 != 4294934786U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x437 = 0;
	int32_t x438 = INT32_MAX;
	volatile uint64_t t68 = 1182778064104177LLU;

	t68 = (x437-(x438&(x439*x440)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x445 = -1LL;
	int8_t x446 = INT8_MIN;
	static uint32_t x447 = 249U;
	static int32_t x448 = INT32_MIN;
	int64_t t69 = 7332606252LL;

	t69 = (x445-(x446&(x447*x448)));

	if (t69 != -2147483649LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x453 = 314U;
	uint32_t x455 = 226119U;
	uint64_t t70 = 999502824938617LLU;

	t70 = (x453-(x454&(x455*x456)));

	if (t70 != 18446744072529084730LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x457 = INT8_MAX;
	int16_t x458 = INT16_MIN;
	int8_t x460 = 0;
	volatile int32_t t71 = -6252;

	t71 = (x457-(x458&(x459*x460)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x477 = -1;
	static uint64_t x479 = UINT64_MAX;
	static volatile uint64_t t72 = 585983LLU;

	t72 = (x477-(x478&(x479*x480)));

	if (t72 != 32766LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x481 = INT8_MAX;
	int32_t t73 = -2;

	t73 = (x481-(x482&(x483*x484)));

	if (t73 != -718) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x485 = 147347827604LLU;
	static uint64_t x486 = UINT64_MAX;
	uint64_t x487 = 876342478LLU;
	int32_t x488 = -26385;

	t74 = (x485-(x486&(x487*x488)));

	if (t74 != 23269644109634LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x489 = -1;
	int64_t x490 = INT64_MIN;
	int16_t x491 = -43;
	static volatile uint64_t x492 = 47630108862717LLU;

	t75 = (x489-(x490&(x491*x492)));

	if (t75 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x493 = 282;
	static uint16_t x494 = 1U;
	volatile int64_t t76 = 668LL;

	t76 = (x493-(x494&(x495*x496)));

	if (t76 != 282LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x501 = 0U;
	static int8_t x502 = -7;
	volatile uint32_t x503 = 50270U;
	int8_t x504 = -1;
	volatile uint32_t t77 = 100357130U;

	t77 = (x501-(x502&(x503*x504)));

	if (t77 != 50272U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x505 = UINT64_MAX;
	static volatile uint8_t x506 = 22U;
	uint64_t t78 = 1039LLU;

	t78 = (x505-(x506&(x507*x508)));

	if (t78 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x509 = -3LL;
	int64_t x510 = INT64_MAX;
	volatile uint32_t x512 = 22U;

	t79 = (x509-(x510&(x511*x512)));

	if (t79 != -720877LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x513 = -1LL;
	static int64_t x514 = -1LL;
	uint32_t x515 = UINT32_MAX;
	uint32_t x516 = UINT32_MAX;
	volatile int64_t t80 = -1020645800457349179LL;

	t80 = (x513-(x514&(x515*x516)));

	if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x517 = INT32_MIN;
	int16_t x518 = INT16_MAX;
	uint16_t x519 = UINT16_MAX;
	uint64_t x520 = UINT64_MAX;
	uint64_t t81 = 9983346LLU;

	t81 = (x517-(x518&(x519*x520)));

	if (t81 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x521 = -1LL;
	uint64_t x522 = 0LLU;
	int16_t x523 = 181;
	static volatile int16_t x524 = -627;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x521-(x522&(x523*x524)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x530 = INT8_MIN;
	static int64_t x531 = -1LL;
	volatile uint64_t x532 = UINT64_MAX;
	volatile uint64_t t83 = 1LLU;

	t83 = (x529-(x530&(x531*x532)));

	if (t83 != 11390LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x538 = -5451;
	int16_t x539 = -1;
	static volatile int8_t x540 = -1;
	volatile int32_t t84 = -18;

	t84 = (x537-(x538&(x539*x540)));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x545 = UINT16_MAX;
	static uint8_t x546 = UINT8_MAX;
	volatile int16_t x547 = INT16_MAX;
	static int16_t x548 = INT16_MIN;
	static int32_t t85 = -1;

	t85 = (x545-(x546&(x547*x548)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x550 = INT64_MAX;
	static volatile int64_t x551 = 47279LL;
	uint16_t x552 = 1531U;
	static int64_t t86 = 328549LL;

	t86 = (x549-(x550&(x551*x552)));

	if (t86 != -72416917LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x557 = INT32_MIN;
	int64_t x558 = INT64_MAX;
	uint64_t x559 = UINT64_MAX;
	static int32_t x560 = -2;
	volatile uint64_t t87 = 8793499217LLU;

	t87 = (x557-(x558&(x559*x560)));

	if (t87 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x562 = 53U;
	int32_t x563 = 1560;
	uint16_t x564 = 120U;
	uint32_t t88 = 3U;

	t88 = (x561-(x562&(x563*x564)));

	if (t88 != 54018U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x565 = -1;
	static int32_t x566 = INT32_MIN;
	int16_t x567 = INT16_MAX;
	volatile int32_t x568 = 3324;

	t89 = (x565-(x566&(x567*x568)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x569 = INT64_MAX;
	volatile int16_t x570 = -1;
	static int16_t x571 = -1;
	int8_t x572 = -1;
	volatile int64_t t90 = -207208159209717527LL;

	t90 = (x569-(x570&(x571*x572)));

	if (t90 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x573 = -29;
	int8_t x574 = 61;
	static volatile int64_t t91 = -4778742042LL;

	t91 = (x573-(x574&(x575*x576)));

	if (t91 != -29LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x577 = 4;
	int32_t x578 = 714;
	uint64_t x579 = 9903LLU;
	int64_t x580 = INT64_MIN;
	uint64_t t92 = 1321994767LLU;

	t92 = (x577-(x578&(x579*x580)));

	if (t92 != 4LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x581 = INT32_MAX;
	volatile uint32_t x584 = UINT32_MAX;
	static uint32_t t93 = 38217522U;

	t93 = (x581-(x582&(x583*x584)));

	if (t93 != 2147516415U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x585 = INT16_MIN;
	volatile uint16_t x586 = 2U;
	static volatile int8_t x587 = -8;
	int32_t x588 = 1;
	static volatile int32_t t94 = 9;

	t94 = (x585-(x586&(x587*x588)));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x589 = INT16_MAX;
	int8_t x590 = INT8_MAX;
	int8_t x591 = -1;
	volatile int32_t x592 = -1;
	int32_t t95 = 257421851;

	t95 = (x589-(x590&(x591*x592)));

	if (t95 != 32766) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x597 = 1;
	uint32_t x598 = UINT32_MAX;
	int64_t x599 = 7914411659934LL;
	volatile int64_t x600 = 122374LL;
	int64_t t96 = -1LL;

	t96 = (x597-(x598&(x599*x600)));

	if (t96 != -3438244787LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x601 = UINT64_MAX;
	volatile int32_t x603 = -1;
	int16_t x604 = 43;
	uint64_t t97 = 20278LLU;

	t97 = (x601-(x602&(x603*x604)));

	if (t97 != 18446744073709551354LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x606 = 458788245685LL;
	volatile uint8_t x607 = UINT8_MAX;
	int64_t t98 = 3LL;

	t98 = (x605-(x606&(x607*x608)));

	if (t98 != -4098LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x609 = 155034322U;
	volatile uint64_t x610 = 2073857LLU;
	volatile uint64_t t99 = 7366723LLU;

	t99 = (x609-(x610&(x611*x612)));

	if (t99 != 152960466LLU) { NG(); } else { ; }
	
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

