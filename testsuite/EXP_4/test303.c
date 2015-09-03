#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MIN;
uint8_t x15 = UINT8_MAX;
volatile uint32_t t2 = 133992U;
static int16_t x18 = -48;
int32_t t3 = -62066113;
volatile int16_t x27 = -14;
static uint16_t x33 = UINT16_MAX;
static uint32_t x35 = 63U;
int16_t x44 = INT16_MAX;
uint8_t x47 = 3U;
volatile int64_t x74 = 90559LL;
int32_t x84 = -1;
volatile int32_t t14 = 14561;
int16_t x97 = INT16_MAX;
volatile uint32_t t22 = 18U;
int16_t x129 = -1;
static int32_t t24 = -215;
int16_t x145 = INT16_MIN;
static volatile uint64_t t25 = 100337074363882LLU;
volatile uint64_t t27 = 42996168206583LLU;
int32_t x171 = 1363500;
uint32_t x181 = 0U;
int32_t x182 = INT32_MIN;
uint16_t x188 = 19U;
volatile uint64_t t32 = 9936LLU;
int16_t x200 = 680;
static int32_t x215 = -37;
static int16_t x216 = 1;
int32_t x228 = -39041;
static int32_t x229 = 84012304;
int8_t x232 = INT8_MIN;
static uint8_t x243 = 9U;
int8_t x251 = -9;
uint32_t x252 = UINT32_MAX;
volatile int64_t x257 = -1LL;
int32_t t42 = -1048647;
int64_t t44 = 1475437130LL;
volatile uint64_t x277 = 14693498LLU;
int16_t x285 = 183;
uint32_t x287 = 214919985U;
int64_t t47 = 1LL;
volatile int16_t x299 = INT16_MAX;
int64_t x310 = -48890556281423LL;
volatile uint8_t x312 = 9U;
int8_t x323 = 6;
static int32_t x324 = INT32_MAX;
uint64_t x327 = 31712LLU;
static uint32_t x330 = UINT32_MAX;
static volatile int64_t t53 = 4119899LL;
static int32_t x340 = INT32_MAX;
int32_t x343 = 15573;
int32_t x345 = 13845;
int64_t x349 = -108549471871186LL;
volatile int64_t t57 = 1234167614986LL;
int16_t x359 = INT16_MIN;
static int64_t t58 = -115570498466LL;
int32_t x367 = 3779;
volatile int8_t x371 = -1;
uint64_t t61 = 6286596328553682LLU;
uint8_t x373 = 10U;
volatile uint16_t x376 = 21U;
static int16_t x378 = -79;
int16_t x391 = -2;
static int64_t x396 = -1LL;
static uint64_t t67 = 1793710093LLU;
int32_t x405 = -1;
static uint16_t x413 = 3U;
int32_t x414 = -4;
volatile int64_t t69 = 80487320503086LL;
uint16_t x417 = 851U;
uint32_t x419 = 1084871U;
int16_t x422 = -1;
int8_t x423 = INT8_MAX;
volatile uint32_t x431 = 12742U;
int16_t x433 = INT16_MAX;
int8_t x436 = -1;
volatile uint64_t t73 = 712525996167157LLU;
volatile int32_t t74 = 7;
int16_t x448 = INT16_MAX;
int16_t x454 = 3;
static int64_t x458 = -526806353LL;
int64_t t77 = -29842171620785390LL;
volatile int32_t t78 = 275342;
uint32_t t79 = 99689U;
static volatile int32_t t80 = 3;
static volatile uint32_t x485 = 61U;
int8_t x486 = INT8_MAX;
uint32_t x489 = 51200701U;
int8_t x491 = -1;
static int8_t x514 = INT8_MAX;
int32_t x530 = INT32_MIN;
int8_t x533 = 59;
volatile int64_t x537 = INT64_MAX;
volatile uint8_t x545 = 19U;
int16_t x547 = -1;
static uint64_t x548 = 985349605300LLU;
volatile uint8_t x549 = UINT8_MAX;
uint8_t x568 = 103U;
uint64_t x591 = 293200767803LLU;
uint32_t x595 = 63U;
uint32_t x602 = UINT32_MAX;
int16_t x609 = -1;
uint64_t x610 = 2433245261165559297LLU;
int16_t x613 = 0;
static int8_t x615 = -2;
int64_t x627 = 4396765392117051LL;


void f0(void) {
	volatile int8_t x1 = 22;
	int32_t x2 = 2486;
	static uint8_t x3 = 4U;
	uint32_t x4 = 26106046U;
	uint32_t t0 = 186268808U;

	t0 = (x1/(x2&(x3-x4)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 7841;
	uint8_t x7 = 2U;
	static int32_t x8 = -8092314;
	static volatile int32_t t1 = 215390100;

	t1 = (x5/(x6&(x7-x8)));

	if (t1 != -316551) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 1U;
	volatile uint32_t x14 = UINT32_MAX;
	volatile int16_t x16 = -31;

	t2 = (x13/(x14&(x15-x16)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	volatile int8_t x19 = INT8_MAX;
	static uint8_t x20 = 3U;

	t3 = (x17/(x18&(x19-x20)));

	if (t3 != -26843545) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -469167950796764LL;
	int32_t x26 = INT32_MAX;
	int32_t x28 = 0;
	volatile int64_t t4 = -267627264710850LL;

	t4 = (x25/(x26&(x27-x28)));

	if (t4 != -218473LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x34 = INT8_MAX;
	static int32_t x36 = -1;
	uint32_t t5 = 257086226U;

	t5 = (x33/(x34&(x35-x36)));

	if (t5 != 1023U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = 1U;
	int32_t x38 = INT32_MAX;
	volatile int8_t x39 = 0;
	volatile int8_t x40 = 8;
	int32_t t6 = -8;

	t6 = (x37/(x38&(x39-x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = 56072LLU;
	uint64_t x42 = 9193LLU;
	int16_t x43 = 497;
	uint64_t t7 = 1004847809578227LLU;

	t7 = (x41/(x42&(x43-x44)));

	if (t7 != 116LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x45 = 7U;
	static uint16_t x46 = 3463U;
	volatile int16_t x48 = -5132;
	static volatile int32_t t8 = -78285072;

	t8 = (x45/(x46&(x47-x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = INT8_MIN;
	static int32_t x58 = -1;
	volatile uint8_t x59 = 6U;
	static int64_t x60 = -1LL;
	int64_t t9 = 1105LL;

	t9 = (x57/(x58&(x59-x60)));

	if (t9 != -18LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = -1;
	int64_t x62 = -1LL;
	static int8_t x63 = INT8_MAX;
	volatile uint64_t x64 = 4544791965653215551LLU;
	volatile uint64_t t10 = 16193950525LLU;

	t10 = (x61/(x62&(x63-x64)));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x73 = -1;
	uint8_t x75 = 0U;
	uint16_t x76 = 3U;
	int64_t t11 = -55149LL;

	t11 = (x73/(x74&(x75-x76)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = 10;
	volatile uint32_t x78 = 1485445435U;
	uint64_t x79 = 85907804552013480LLU;
	int32_t x80 = INT32_MAX;
	volatile uint64_t t12 = 420790915390209LLU;

	t12 = (x77/(x78&(x79-x80)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x81 = 33LLU;
	int32_t x82 = INT32_MAX;
	volatile int8_t x83 = INT8_MIN;
	uint64_t t13 = 1589LLU;

	t13 = (x81/(x82&(x83-x84)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x85 = INT8_MIN;
	volatile uint8_t x86 = 72U;
	static volatile uint8_t x87 = UINT8_MAX;
	volatile int8_t x88 = INT8_MIN;

	t14 = (x85/(x86&(x87-x88)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x89 = 6U;
	int8_t x90 = INT8_MAX;
	static volatile int32_t x91 = 91373;
	uint64_t x92 = 276349494434169LLU;
	volatile uint64_t t15 = 163393310749052LLU;

	t15 = (x89/(x90&(x91-x92)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x93 = UINT32_MAX;
	volatile uint32_t x94 = 96081088U;
	static volatile int32_t x95 = 36659;
	static volatile int16_t x96 = -1991;
	volatile uint32_t t16 = 5U;

	t16 = (x93/(x94&(x95-x96)));

	if (t16 != 808540U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x98 = -1;
	uint16_t x99 = 926U;
	int8_t x100 = INT8_MIN;
	volatile int32_t t17 = 5;

	t17 = (x97/(x98&(x99-x100)));

	if (t17 != 31) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x101 = INT32_MIN;
	static int32_t x102 = -1;
	uint64_t x103 = 60982879LLU;
	int64_t x104 = INT64_MIN;
	static uint64_t t18 = 237348LLU;

	t18 = (x101/(x102&(x103-x104)));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = -11;
	int8_t x110 = INT8_MIN;
	int8_t x111 = 23;
	uint16_t x112 = 39U;
	int32_t t19 = -13175;

	t19 = (x109/(x110&(x111-x112)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x117 = 37398423U;
	int16_t x118 = -1;
	volatile int64_t x119 = INT64_MIN;
	int16_t x120 = -27;
	volatile int64_t t20 = -79299385LL;

	t20 = (x117/(x118&(x119-x120)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x121 = UINT8_MAX;
	volatile uint32_t x122 = UINT32_MAX;
	int8_t x123 = -1;
	int32_t x124 = INT32_MAX;
	volatile uint32_t t21 = 3501U;

	t21 = (x121/(x122&(x123-x124)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = -1;
	int8_t x126 = INT8_MIN;
	uint32_t x127 = 94022818U;
	uint32_t x128 = 14U;

	t22 = (x125/(x126&(x127-x128)));

	if (t22 != 45U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x130 = 75U;
	int16_t x131 = -1;
	uint64_t x132 = 136268903982LLU;
	static uint64_t t23 = 127867003992LLU;

	t23 = (x129/(x130&(x131-x132)));

	if (t23 != 283796062672454640LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x141 = 5;
	int8_t x142 = 1;
	uint16_t x143 = 915U;
	volatile uint8_t x144 = 4U;

	t24 = (x141/(x142&(x143-x144)));

	if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x146 = 19U;
	uint64_t x147 = UINT64_MAX;
	int32_t x148 = INT32_MIN;

	t25 = (x145/(x146&(x147-x148)));

	if (t25 != 970881267037343097LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x149 = INT64_MIN;
	volatile uint32_t x150 = 58445098U;
	volatile uint32_t x151 = 7U;
	volatile uint64_t x152 = UINT64_MAX;
	volatile uint64_t t26 = 471932330759210553LLU;

	t26 = (x149/(x150&(x151-x152)));

	if (t26 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x153 = INT32_MIN;
	int16_t x154 = -1;
	int64_t x155 = -38LL;
	uint64_t x156 = UINT64_MAX;

	t27 = (x153/(x154&(x155-x156)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x157 = -1;
	uint32_t x158 = UINT32_MAX;
	uint8_t x159 = UINT8_MAX;
	uint64_t x160 = 99201195094512LLU;
	static volatile uint64_t t28 = 1351970428LLU;

	t28 = (x157/(x158&(x159-x160)));

	if (t28 != 4658846648LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x165 = 480766951347727LLU;
	volatile int8_t x166 = INT8_MIN;
	uint64_t x167 = UINT64_MAX;
	static int16_t x168 = 1;
	uint64_t t29 = 8535931LLU;

	t29 = (x165/(x166&(x167-x168)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x169 = INT64_MIN;
	static uint32_t x170 = 1871317228U;
	int64_t x172 = INT64_MAX;
	volatile int64_t t30 = -1151951847LL;

	t30 = (x169/(x170&(x171-x172)));

	if (t30 != -4408877646680103LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x183 = INT64_MIN;
	volatile uint64_t x184 = 496843921430358800LLU;
	static volatile uint64_t t31 = 23806571083LLU;

	t31 = (x181/(x182&(x183-x184)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x185 = 939LLU;
	uint8_t x186 = UINT8_MAX;
	int16_t x187 = INT16_MAX;

	t32 = (x185/(x186&(x187-x188)));

	if (t32 != 3LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x189 = INT8_MIN;
	static int8_t x190 = INT8_MAX;
	static int8_t x191 = -1;
	static int32_t x192 = 160582;
	volatile int32_t t33 = 0;

	t33 = (x189/(x190&(x191-x192)));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x198 = 2762U;
	static uint32_t x199 = 3137U;
	uint32_t t34 = 76595505U;

	t34 = (x197/(x198&(x199-x200)));

	if (t34 != 1966560U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x209 = INT32_MAX;
	static int32_t x210 = INT32_MIN;
	int64_t x211 = -1215LL;
	int32_t x212 = INT32_MAX;
	int64_t t35 = -190486340936LL;

	t35 = (x209/(x210&(x211-x212)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x213 = INT32_MIN;
	int64_t x214 = -1LL;
	volatile int64_t t36 = 98472027LL;

	t36 = (x213/(x214&(x215-x216)));

	if (t36 != 56512727LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x225 = -36;
	static int8_t x226 = -36;
	volatile uint64_t x227 = 2235711555400LLU;
	static volatile uint64_t t37 = 10537180216LLU;

	t37 = (x225/(x226&(x227-x228)));

	if (t37 != 8250949LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x230 = -18;
	uint16_t x231 = UINT16_MAX;
	static int32_t t38 = 7743064;

	t38 = (x229/(x230&(x231-x232)));

	if (t38 != 1279) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x241 = INT64_MAX;
	volatile int8_t x242 = 14;
	static uint32_t x244 = 6U;
	volatile int64_t t39 = 63965LL;

	t39 = (x241/(x242&(x243-x244)));

	if (t39 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x249 = INT8_MIN;
	int32_t x250 = -467;
	volatile uint32_t t40 = 120U;

	t40 = (x249/(x250&(x251-x252)));

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x258 = -12;
	int64_t x259 = -345132352103LL;
	static uint32_t x260 = 46197U;
	int64_t t41 = 3209750410867LL;

	t41 = (x257/(x258&(x259-x260)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x265 = -51130;
	int8_t x266 = INT8_MIN;
	static int16_t x267 = INT16_MIN;
	int8_t x268 = INT8_MIN;

	t42 = (x265/(x266&(x267-x268)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	static uint64_t x272 = UINT64_MAX;
	uint64_t t43 = 23528LLU;

	t43 = (x269/(x270&(x271-x272)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x273 = 851084U;
	int8_t x274 = -19;
	int16_t x275 = INT16_MIN;
	static volatile int64_t x276 = 3219539599LL;

	t44 = (x273/(x274&(x275-x276)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x278 = -1LL;
	volatile uint64_t x279 = 476336384LLU;
	uint8_t x280 = 8U;
	volatile uint64_t t45 = 1565820157792933LLU;

	t45 = (x277/(x278&(x279-x280)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x281 = 35U;
	uint16_t x282 = 4476U;
	static int32_t x283 = -1;
	volatile int32_t x284 = INT32_MIN;
	volatile int32_t t46 = 437496445;

	t46 = (x281/(x282&(x283-x284)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x286 = INT8_MIN;
	int64_t x288 = INT64_MAX;

	t47 = (x285/(x286&(x287-x288)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x297 = INT8_MIN;
	int8_t x298 = -24;
	volatile uint64_t x300 = 1LLU;
	volatile uint64_t t48 = 259478213LLU;

	t48 = (x297/(x298&(x299-x300)));

	if (t48 != 563362572492962LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x309 = 1;
	int32_t x311 = INT32_MAX;
	volatile int64_t t49 = 24838508135358377LL;

	t49 = (x309/(x310&(x311-x312)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x317 = 548;
	int8_t x318 = INT8_MAX;
	volatile uint8_t x319 = 1U;
	int16_t x320 = 168;
	volatile int32_t t50 = 2724625;

	t50 = (x317/(x318&(x319-x320)));

	if (t50 != 6) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x321 = UINT32_MAX;
	static int16_t x322 = -1;
	static volatile uint32_t t51 = 44289064U;

	t51 = (x321/(x322&(x323-x324)));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x325 = INT64_MIN;
	static uint64_t x326 = UINT64_MAX;
	static uint32_t x328 = UINT32_MAX;
	volatile uint64_t t52 = 534839036418LLU;

	t52 = (x325/(x326&(x327-x328)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x329 = 6U;
	static int64_t x331 = 19215309879251LL;
	int64_t x332 = INT64_MAX;

	t53 = (x329/(x330&(x331-x332)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x337 = INT64_MIN;
	volatile int16_t x338 = -12993;
	volatile uint64_t x339 = UINT64_MAX;
	uint64_t t54 = 467741LLU;

	t54 = (x337/(x338&(x339-x340)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x341 = 12U;
	int8_t x342 = INT8_MAX;
	int16_t x344 = 1;
	int32_t t55 = -2660290;

	t55 = (x341/(x342&(x343-x344)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x346 = INT32_MAX;
	int16_t x347 = -1;
	static uint64_t x348 = 19752617764219465LLU;
	volatile uint64_t t56 = 661423516LLU;

	t56 = (x345/(x346&(x347-x348)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x350 = 16392U;
	uint32_t x351 = UINT32_MAX;
	volatile uint32_t x352 = 3520929U;

	t57 = (x349/(x350&(x351-x352)));

	if (t57 != -6622100528LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x357 = INT16_MIN;
	int64_t x358 = INT64_MIN;
	volatile int8_t x360 = -3;

	t58 = (x357/(x358&(x359-x360)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x361 = 420U;
	int8_t x362 = 5;
	volatile int32_t x363 = INT32_MAX;
	static uint32_t x364 = 211397451U;
	uint32_t t59 = 371U;

	t59 = (x361/(x362&(x363-x364)));

	if (t59 != 105U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x365 = UINT32_MAX;
	volatile int32_t x366 = 802746791;
	int8_t x368 = INT8_MIN;
	volatile uint32_t t60 = 253573040U;

	t60 = (x365/(x366&(x367-x368)));

	if (t60 != 16582885U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x369 = 32237LLU;
	uint32_t x370 = 1707340231U;
	uint16_t x372 = 11505U;

	t61 = (x369/(x370&(x371-x372)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x374 = -1LL;
	static uint8_t x375 = 0U;
	static volatile int64_t t62 = 2LL;

	t62 = (x373/(x374&(x375-x376)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x377 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	static int16_t x380 = INT16_MIN;
	volatile int64_t t63 = -387351049LL;

	t63 = (x377/(x378&(x379-x380)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x381 = 8LLU;
	uint8_t x382 = UINT8_MAX;
	int16_t x383 = 422;
	int8_t x384 = INT8_MAX;
	static uint64_t t64 = 27981114704LLU;

	t64 = (x381/(x382&(x383-x384)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	int32_t x392 = 151039;
	volatile int32_t t65 = 125120;

	t65 = (x389/(x390&(x391-x392)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x393 = -1008;
	int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MIN;
	int64_t t66 = -91699320LL;

	t66 = (x393/(x394&(x395-x396)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x401 = 2;
	uint64_t x402 = 125117LLU;
	volatile int8_t x403 = INT8_MIN;
	uint64_t x404 = 12803184381958LLU;

	t67 = (x401/(x402&(x403-x404)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x406 = UINT8_MAX;
	uint8_t x407 = UINT8_MAX;
	static volatile int64_t x408 = 115173061271LL;
	static int64_t t68 = -104525753439626LL;

	t68 = (x405/(x406&(x407-x408)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x415 = -1LL;
	static uint16_t x416 = 1997U;

	t69 = (x413/(x414&(x415-x416)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x418 = INT16_MIN;
	uint32_t x420 = 212402U;
	volatile uint32_t t70 = 4565U;

	t70 = (x417/(x418&(x419-x420)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x421 = -40;
	volatile uint16_t x424 = UINT16_MAX;
	int32_t t71 = 410751;

	t71 = (x421/(x422&(x423-x424)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x429 = 1802874272178443LLU;
	uint8_t x430 = 59U;
	static uint64_t x432 = 16874061612LLU;
	volatile uint64_t t72 = 691866161526LLU;

	t72 = (x429/(x430&(x431-x432)));

	if (t72 != 69341318160709LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x434 = INT8_MIN;
	uint64_t x435 = 268408984562582394LLU;

	t73 = (x433/(x434&(x435-x436)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x441 = INT8_MIN;
	static int32_t x442 = 8597068;
	volatile int8_t x443 = INT8_MIN;
	static int32_t x444 = INT32_MIN;

	t74 = (x441/(x442&(x443-x444)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x445 = -1;
	volatile int32_t x446 = INT32_MIN;
	static int64_t x447 = -1LL;
	static volatile int64_t t75 = -60LL;

	t75 = (x445/(x446&(x447-x448)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x453 = -6;
	uint8_t x455 = 25U;
	volatile uint16_t x456 = UINT16_MAX;
	volatile int32_t t76 = -1120693;

	t76 = (x453/(x454&(x455-x456)));

	if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x457 = -201LL;
	static uint8_t x459 = UINT8_MAX;
	int32_t x460 = 2;

	t77 = (x457/(x458&(x459-x460)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x461 = 242U;
	int8_t x462 = INT8_MIN;
	static int16_t x463 = -892;
	static int16_t x464 = INT16_MAX;

	t78 = (x461/(x462&(x463-x464)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x473 = UINT32_MAX;
	int16_t x474 = INT16_MAX;
	int32_t x475 = -880092;
	uint16_t x476 = 6U;

	t79 = (x473/(x474&(x475-x476)));

	if (t79 != 926038U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x481 = INT32_MAX;
	static int32_t x482 = -1;
	int32_t x483 = -1962;
	volatile int8_t x484 = INT8_MIN;

	t80 = (x481/(x482&(x483-x484)));

	if (t80 != -1170928) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x487 = UINT32_MAX;
	int16_t x488 = INT16_MIN;
	uint32_t t81 = 253U;

	t81 = (x485/(x486&(x487-x488)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x490 = INT16_MIN;
	uint8_t x492 = UINT8_MAX;
	volatile uint32_t t82 = 248U;

	t82 = (x489/(x490&(x491-x492)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x513 = INT64_MIN;
	int8_t x515 = INT8_MIN;
	static uint8_t x516 = UINT8_MAX;
	int64_t t83 = INT64_MIN;

	t83 = (x513/(x514&(x515-x516)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x529 = 10186530792LL;
	uint8_t x531 = 0U;
	uint8_t x532 = 23U;
	volatile int64_t t84 = 1246575862421263318LL;

	t84 = (x529/(x530&(x531-x532)));

	if (t84 != -4LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x534 = 30508U;
	int16_t x535 = INT16_MAX;
	static uint16_t x536 = 22587U;
	volatile int32_t t85 = 0;

	t85 = (x533/(x534&(x535-x536)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x538 = INT32_MAX;
	int32_t x539 = 15662371;
	static int64_t x540 = 7466176LL;
	int64_t t86 = -72304433489050LL;

	t86 = (x537/(x538&(x539-x540)));

	if (t86 != 1125323645527LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x546 = -1;
	volatile uint64_t t87 = 185885316058191LLU;

	t87 = (x545/(x546&(x547-x548)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x550 = 53783588U;
	static volatile int64_t x551 = 27688LL;
	volatile int8_t x552 = -1;
	volatile int64_t t88 = 1131853LL;

	t88 = (x549/(x550&(x551-x552)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x553 = -1;
	volatile int8_t x554 = INT8_MIN;
	int16_t x555 = INT16_MAX;
	volatile int16_t x556 = -1;
	static volatile int32_t t89 = -1854;

	t89 = (x553/(x554&(x555-x556)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x565 = 89U;
	int8_t x566 = 5;
	volatile uint64_t x567 = 1133460654548LLU;
	uint64_t t90 = 80822LLU;

	t90 = (x565/(x566&(x567-x568)));

	if (t90 != 17LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x573 = INT64_MIN;
	int8_t x574 = INT8_MIN;
	uint32_t x575 = UINT32_MAX;
	int16_t x576 = INT16_MAX;
	volatile int64_t t91 = 1826024331713LL;

	t91 = (x573/(x574&(x575-x576)));

	if (t91 != -2147500032LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x589 = INT16_MIN;
	int16_t x590 = 2822;
	uint8_t x592 = 17U;
	uint64_t t92 = 2165681915LLU;

	t92 = (x589/(x590&(x591-x592)));

	if (t92 != 6546041190102739LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x593 = INT64_MIN;
	static uint64_t x594 = UINT64_MAX;
	uint16_t x596 = 0U;
	uint64_t t93 = 575031810LLU;

	t93 = (x593/(x594&(x595-x596)));

	if (t93 != 146402730743726600LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x601 = 2458845U;
	uint16_t x603 = 1312U;
	int8_t x604 = -1;
	uint32_t t94 = 33051U;

	t94 = (x601/(x602&(x603-x604)));

	if (t94 != 1872U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x605 = 8;
	volatile uint8_t x606 = UINT8_MAX;
	int8_t x607 = INT8_MAX;
	volatile int16_t x608 = -1257;
	int32_t t95 = -48;

	t95 = (x605/(x606&(x607-x608)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x611 = 46U;
	static uint32_t x612 = UINT32_MAX;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x609/(x610&(x611-x612)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x614 = 13U;
	uint32_t x616 = 77641U;
	volatile uint32_t t97 = 64368086U;

	t97 = (x613/(x614&(x615-x616)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x621 = INT32_MIN;
	volatile int16_t x622 = -1;
	int16_t x623 = INT16_MAX;
	int16_t x624 = -3915;
	volatile int32_t t98 = -1326;

	t98 = (x621/(x622&(x623-x624)));

	if (t98 != -58543) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x625 = INT8_MIN;
	int64_t x626 = 6826495610885057LL;
	int8_t x628 = -22;
	volatile int64_t t99 = -5856431707855LL;

	t99 = (x625/(x626&(x627-x628)));

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

