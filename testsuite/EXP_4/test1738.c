#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = 1;
uint32_t x4 = 199353U;
int8_t x15 = INT8_MIN;
int32_t x16 = INT32_MIN;
int32_t t2 = -180571930;
volatile int64_t x20 = INT64_MIN;
int64_t x22 = INT64_MAX;
volatile int32_t x47 = -1;
uint64_t x62 = 111591263016LLU;
uint64_t x68 = 468830208805378145LLU;
static int64_t x74 = INT64_MAX;
uint64_t x76 = UINT64_MAX;
int64_t x80 = INT64_MAX;
int32_t t15 = 100214339;
uint32_t x81 = UINT32_MAX;
static volatile int32_t t17 = 1;
int8_t x102 = 0;
int32_t t21 = -317;
int32_t x113 = 20194987;
int32_t x116 = INT32_MIN;
volatile int32_t t22 = -4453752;
volatile int32_t x118 = -1;
static volatile int16_t x130 = INT16_MAX;
static int32_t x136 = INT32_MAX;
uint32_t x157 = UINT32_MAX;
int64_t x158 = -55229110293100LL;
static int32_t x164 = INT32_MIN;
int64_t x165 = 23089211533LL;
uint64_t x168 = 31885831LLU;
int64_t x174 = 159LL;
uint16_t x185 = 1488U;
volatile int16_t x188 = -1;
uint8_t x198 = UINT8_MAX;
int16_t x200 = -8515;
int8_t x220 = -1;
int64_t x226 = INT64_MIN;
volatile int32_t t39 = -16;
volatile int32_t x233 = 1;
volatile int32_t x234 = INT32_MIN;
int32_t t41 = -401218833;
static volatile uint64_t x244 = UINT64_MAX;
volatile int8_t x252 = INT8_MAX;
int32_t t47 = 28728;
volatile int8_t x274 = INT8_MIN;
volatile uint16_t x278 = 3U;
int8_t x289 = INT8_MIN;
int8_t x314 = -1;
static int32_t t56 = 599;
volatile int16_t x317 = 0;
uint8_t x330 = UINT8_MAX;
uint8_t x332 = UINT8_MAX;
uint16_t x336 = 51U;
uint8_t x340 = UINT8_MAX;
int64_t x342 = -61783739672842645LL;
volatile int32_t t61 = -2991;
volatile int64_t x347 = 4600681202LL;
static int8_t x365 = 11;
volatile int32_t x366 = INT32_MAX;
uint8_t x368 = 58U;
static volatile int32_t x377 = 869;
static uint32_t x383 = 1U;
int32_t x388 = -1;
static int32_t x399 = -108960;
int8_t x400 = INT8_MIN;
int8_t x410 = INT8_MAX;
int8_t x415 = -2;
uint64_t x417 = UINT64_MAX;
static int64_t x426 = INT64_MIN;
volatile int32_t x435 = INT32_MIN;
int32_t x436 = INT32_MIN;
static int32_t x442 = 2897577;
int64_t x444 = 6302744369LL;
uint64_t x450 = UINT64_MAX;
static uint16_t x451 = UINT16_MAX;
int16_t x490 = -2088;
static volatile int8_t x493 = INT8_MAX;
int8_t x496 = 1;
int32_t x509 = INT32_MIN;
static uint16_t x510 = 3U;
int64_t x512 = INT64_MIN;
static int8_t x524 = -1;
int32_t t94 = -45634284;
int64_t x531 = -1LL;
uint16_t x539 = UINT16_MAX;
static int32_t t98 = 13;
int64_t x547 = INT64_MIN;
static volatile int32_t t99 = 1159;


void f0(void) {
	static uint32_t x1 = 134U;
	int64_t x2 = INT64_MIN;
	static volatile int32_t t0 = 3;

	t0 = (x1<(x2/(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	int64_t x10 = INT64_MAX;
	uint8_t x11 = 105U;
	int32_t x12 = 5664;
	int32_t t1 = -1;

	t1 = (x9<(x10/(x11&x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MIN;

	t2 = (x13<(x14/(x15&x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = 0;
	uint64_t x19 = UINT64_MAX;
	volatile int32_t t3 = -5561142;

	t3 = (x17<(x18/(x19&x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int32_t x23 = INT32_MAX;
	uint16_t x24 = 62U;
	static volatile int32_t t4 = -2;

	t4 = (x21<(x22/(x23&x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -1;
	volatile int8_t x34 = 0;
	uint64_t x35 = 109118523LLU;
	int32_t x36 = INT32_MAX;
	int32_t t5 = 1;

	t5 = (x33<(x34/(x35&x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = UINT16_MAX;
	int8_t x38 = -1;
	static uint64_t x39 = 6669LLU;
	int64_t x40 = 777LL;
	int32_t t6 = 3;

	t6 = (x37<(x38/(x39&x40)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = -3;
	static int32_t x43 = INT32_MIN;
	int16_t x44 = -4;
	volatile int32_t t7 = 958;

	t7 = (x41<(x42/(x43&x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 1062072U;
	static int16_t x46 = INT16_MIN;
	int32_t x48 = -15;
	int32_t t8 = -1005;

	t8 = (x45<(x46/(x47&x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x53 = 0;
	int32_t x54 = -1;
	volatile int32_t x55 = INT32_MAX;
	uint16_t x56 = UINT16_MAX;
	static volatile int32_t t9 = 2;

	t9 = (x53<(x54/(x55&x56)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 21U;
	uint32_t x58 = UINT32_MAX;
	int8_t x59 = INT8_MAX;
	static uint64_t x60 = 2173079282210957LLU;
	static int32_t t10 = 11;

	t10 = (x57<(x58/(x59&x60)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MAX;
	uint32_t x63 = UINT32_MAX;
	volatile int16_t x64 = INT16_MIN;
	static volatile int32_t t11 = -1447606;

	t11 = (x61<(x62/(x63&x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MIN;
	uint8_t x66 = 3U;
	static int8_t x67 = 1;
	int32_t t12 = 5;

	t12 = (x65<(x66/(x67&x68)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x69 = INT16_MIN;
	int8_t x70 = -1;
	uint64_t x71 = 51794500450LLU;
	static uint32_t x72 = 3416U;
	volatile int32_t t13 = 363725551;

	t13 = (x69<(x70/(x71&x72)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x73 = UINT16_MAX;
	uint32_t x75 = UINT32_MAX;
	int32_t t14 = 0;

	t14 = (x73<(x74/(x75&x76)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x77 = UINT8_MAX;
	volatile int8_t x78 = 6;
	uint16_t x79 = 91U;

	t15 = (x77<(x78/(x79&x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x82 = 0;
	int8_t x83 = -1;
	volatile int8_t x84 = -1;
	int32_t t16 = 9893666;

	t16 = (x81<(x82/(x83&x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = UINT16_MAX;
	int16_t x86 = INT16_MIN;
	int16_t x87 = -1;
	int32_t x88 = INT32_MAX;

	t17 = (x85<(x86/(x87&x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile int64_t x90 = INT64_MIN;
	uint64_t x91 = 19616501986152LLU;
	uint8_t x92 = UINT8_MAX;
	int32_t t18 = 384;

	t18 = (x89<(x90/(x91&x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x97 = 1204;
	int32_t x98 = 648686716;
	int64_t x99 = 3768977775723LL;
	volatile int16_t x100 = INT16_MIN;
	int32_t t19 = 994;

	t19 = (x97<(x98/(x99&x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = -1;
	uint8_t x103 = UINT8_MAX;
	int32_t x104 = INT32_MAX;
	volatile int32_t t20 = 0;

	t20 = (x101<(x102/(x103&x104)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = 242463703252196407LL;
	volatile int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MIN;

	t21 = (x105<(x106/(x107&x108)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x114 = 0U;
	uint64_t x115 = UINT64_MAX;

	t22 = (x113<(x114/(x115&x116)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x117 = INT32_MAX;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t x120 = INT32_MIN;
	int32_t t23 = 741419282;

	t23 = (x117<(x118/(x119&x120)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x121 = INT8_MAX;
	int8_t x122 = INT8_MAX;
	static volatile int16_t x123 = -1;
	int16_t x124 = 6867;
	volatile int32_t t24 = 0;

	t24 = (x121<(x122/(x123&x124)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x125 = -4812;
	static int32_t x126 = INT32_MAX;
	int64_t x127 = 76776819874563LL;
	static int16_t x128 = INT16_MIN;
	volatile int32_t t25 = 278120513;

	t25 = (x125<(x126/(x127&x128)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = -2;
	uint16_t x131 = 3U;
	int64_t x132 = 1LL;
	static int32_t t26 = 242982804;

	t26 = (x129<(x130/(x131&x132)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x133 = UINT16_MAX;
	volatile int32_t x134 = INT32_MAX;
	static uint64_t x135 = 389602227017192408LLU;
	volatile int32_t t27 = 62468647;

	t27 = (x133<(x134/(x135&x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x137 = INT16_MIN;
	int16_t x138 = -1;
	static uint16_t x139 = 9104U;
	uint64_t x140 = 21361481172872378LLU;
	int32_t t28 = 492649496;

	t28 = (x137<(x138/(x139&x140)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x153 = UINT8_MAX;
	uint8_t x154 = 2U;
	uint32_t x155 = 742704331U;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t29 = 0;

	t29 = (x153<(x154/(x155&x156)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x159 = 9034U;
	int8_t x160 = -1;
	int32_t t30 = 0;

	t30 = (x157<(x158/(x159&x160)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x161 = INT64_MAX;
	volatile uint16_t x162 = 2063U;
	int16_t x163 = INT16_MIN;
	static int32_t t31 = 41;

	t31 = (x161<(x162/(x163&x164)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x166 = -3;
	int16_t x167 = -155;
	volatile int32_t t32 = 12727426;

	t32 = (x165<(x166/(x167&x168)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = -1LL;
	int32_t x175 = INT32_MAX;
	volatile int16_t x176 = 3293;
	volatile int32_t t33 = -156300;

	t33 = (x173<(x174/(x175&x176)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x186 = INT16_MIN;
	static int32_t x187 = 32760;
	volatile int32_t t34 = 7194172;

	t34 = (x185<(x186/(x187&x188)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x193 = INT16_MIN;
	static int32_t x194 = INT32_MAX;
	static int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t35 = 329950848;

	t35 = (x193<(x194/(x195&x196)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x197 = INT16_MIN;
	uint32_t x199 = 13999U;
	int32_t t36 = -686296;

	t36 = (x197<(x198/(x199&x200)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x217 = -1;
	uint16_t x218 = 974U;
	uint16_t x219 = 21U;
	volatile int32_t t37 = 2050928;

	t37 = (x217<(x218/(x219&x220)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x221 = INT16_MAX;
	int64_t x222 = 135997LL;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t38 = 0;

	t38 = (x221<(x222/(x223&x224)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x225 = -1;
	static uint64_t x227 = 14757723527150131LLU;
	static int64_t x228 = INT64_MAX;

	t39 = (x225<(x226/(x227&x228)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MAX;
	volatile uint32_t x231 = 144U;
	int64_t x232 = INT64_MAX;
	int32_t t40 = -7877;

	t40 = (x229<(x230/(x231&x232)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x235 = -5;
	uint64_t x236 = 2033912627LLU;

	t41 = (x233<(x234/(x235&x236)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x237 = INT16_MIN;
	static int32_t x238 = -1;
	uint32_t x239 = 18852349U;
	int64_t x240 = -1LL;
	static int32_t t42 = 1;

	t42 = (x237<(x238/(x239&x240)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x241 = INT32_MAX;
	uint8_t x242 = 13U;
	volatile int16_t x243 = -1005;
	int32_t t43 = -232549;

	t43 = (x241<(x242/(x243&x244)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x245 = INT8_MAX;
	static volatile int32_t x246 = -1;
	uint64_t x247 = 62245756LLU;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t44 = -68;

	t44 = (x245<(x246/(x247&x248)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x249 = INT64_MIN;
	static int8_t x250 = -45;
	int64_t x251 = -7335LL;
	int32_t t45 = 29538;

	t45 = (x249<(x250/(x251&x252)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x253 = 6U;
	uint32_t x254 = 91360350U;
	static uint8_t x255 = 24U;
	volatile uint16_t x256 = UINT16_MAX;
	volatile int32_t t46 = -363;

	t46 = (x253<(x254/(x255&x256)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x257 = UINT32_MAX;
	uint8_t x258 = 2U;
	static int16_t x259 = INT16_MIN;
	uint32_t x260 = UINT32_MAX;

	t47 = (x257<(x258/(x259&x260)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x265 = 43U;
	static int16_t x266 = 41;
	static int16_t x267 = INT16_MAX;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t48 = -2071;

	t48 = (x265<(x266/(x267&x268)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x269 = -33;
	int8_t x270 = INT8_MIN;
	static int32_t x271 = -13;
	uint32_t x272 = 8162199U;
	static int32_t t49 = 322795;

	t49 = (x269<(x270/(x271&x272)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x273 = -1;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = 794665LL;
	int32_t t50 = -248437;

	t50 = (x273<(x274/(x275&x276)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x277 = -1118990020816348LL;
	static int16_t x279 = 246;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t51 = -17079071;

	t51 = (x277<(x278/(x279&x280)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x281 = -12193;
	uint16_t x282 = 326U;
	uint8_t x283 = 10U;
	int16_t x284 = -6374;
	static volatile int32_t t52 = 39;

	t52 = (x281<(x282/(x283&x284)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x285 = INT16_MIN;
	uint64_t x286 = UINT64_MAX;
	volatile int64_t x287 = INT64_MIN;
	int8_t x288 = -1;
	int32_t t53 = 0;

	t53 = (x285<(x286/(x287&x288)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x290 = INT32_MIN;
	int8_t x291 = 7;
	static volatile uint16_t x292 = UINT16_MAX;
	volatile int32_t t54 = 9;

	t54 = (x289<(x290/(x291&x292)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x305 = -61207201146LL;
	uint16_t x306 = 1966U;
	int64_t x307 = 557190554LL;
	volatile int32_t x308 = -1;
	int32_t t55 = 61;

	t55 = (x305<(x306/(x307&x308)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x313 = INT32_MIN;
	uint32_t x315 = 173853U;
	uint8_t x316 = 65U;

	t56 = (x313<(x314/(x315&x316)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x318 = 1461LLU;
	static int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MAX;
	static int32_t t57 = 1827624;

	t57 = (x317<(x318/(x319&x320)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x329 = INT16_MIN;
	uint64_t x331 = 29745916018LLU;
	int32_t t58 = -149;

	t58 = (x329<(x330/(x331&x332)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x333 = INT8_MAX;
	int32_t x334 = -6078194;
	uint64_t x335 = UINT64_MAX;
	volatile int32_t t59 = -349968233;

	t59 = (x333<(x334/(x335&x336)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	static int32_t t60 = 1;

	t60 = (x337<(x338/(x339&x340)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x341 = -1;
	int32_t x343 = 84533954;
	volatile int32_t x344 = INT32_MAX;

	t61 = (x341<(x342/(x343&x344)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x345 = UINT32_MAX;
	uint8_t x346 = 0U;
	int64_t x348 = -5609967024LL;
	int32_t t62 = -881720228;

	t62 = (x345<(x346/(x347&x348)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x349 = INT32_MIN;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MIN;
	int32_t x352 = -30;
	volatile int32_t t63 = 17020270;

	t63 = (x349<(x350/(x351&x352)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x353 = 113U;
	int8_t x354 = INT8_MIN;
	int8_t x355 = -1;
	volatile int64_t x356 = 35788279673967LL;
	int32_t t64 = 1;

	t64 = (x353<(x354/(x355&x356)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x357 = -59;
	static int8_t x358 = 0;
	uint32_t x359 = UINT32_MAX;
	static int16_t x360 = INT16_MAX;
	int32_t t65 = -2;

	t65 = (x357<(x358/(x359&x360)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x367 = -200;
	int32_t t66 = -387399;

	t66 = (x365<(x366/(x367&x368)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MAX;
	int16_t x380 = 244;
	volatile int32_t t67 = 1707;

	t67 = (x377<(x378/(x379&x380)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x381 = -1;
	int16_t x382 = 251;
	volatile uint8_t x384 = UINT8_MAX;
	int32_t t68 = -481299180;

	t68 = (x381<(x382/(x383&x384)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x385 = 20282524U;
	static volatile int64_t x386 = -4429LL;
	uint8_t x387 = 125U;
	volatile int32_t t69 = -9370511;

	t69 = (x385<(x386/(x387&x388)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x393 = UINT8_MAX;
	int8_t x394 = -1;
	int32_t x395 = 1101061;
	volatile int16_t x396 = INT16_MIN;
	volatile int32_t t70 = 109064761;

	t70 = (x393<(x394/(x395&x396)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x397 = -823843617;
	volatile int32_t x398 = 523140;
	int32_t t71 = 270;

	t71 = (x397<(x398/(x399&x400)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x401 = UINT16_MAX;
	int16_t x402 = INT16_MIN;
	int8_t x403 = INT8_MIN;
	uint64_t x404 = UINT64_MAX;
	static int32_t t72 = -251;

	t72 = (x401<(x402/(x403&x404)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x409 = -1;
	uint32_t x411 = UINT32_MAX;
	uint64_t x412 = 7739819599301LLU;
	int32_t t73 = -192767;

	t73 = (x409<(x410/(x411&x412)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x413 = -217101024LL;
	uint64_t x414 = 914023LLU;
	int8_t x416 = -34;
	int32_t t74 = 6;

	t74 = (x413<(x414/(x415&x416)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x418 = 917303702163LLU;
	int64_t x419 = INT64_MIN;
	static int16_t x420 = INT16_MIN;
	int32_t t75 = 1;

	t75 = (x417<(x418/(x419&x420)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x421 = UINT32_MAX;
	volatile int64_t x422 = INT64_MIN;
	uint8_t x423 = 4U;
	uint64_t x424 = UINT64_MAX;
	static int32_t t76 = -3193;

	t76 = (x421<(x422/(x423&x424)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x425 = 229976U;
	uint16_t x427 = 591U;
	static uint16_t x428 = 252U;
	static volatile int32_t t77 = 18472449;

	t77 = (x425<(x426/(x427&x428)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x429 = 17U;
	int32_t x430 = INT32_MIN;
	int32_t x431 = INT32_MIN;
	int8_t x432 = -1;
	volatile int32_t t78 = -2;

	t78 = (x429<(x430/(x431&x432)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x433 = 990287LLU;
	int64_t x434 = 28LL;
	int32_t t79 = -593915556;

	t79 = (x433<(x434/(x435&x436)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x437 = -2101145LL;
	int64_t x438 = INT64_MAX;
	int64_t x439 = INT64_MIN;
	int8_t x440 = INT8_MIN;
	int32_t t80 = -7123082;

	t80 = (x437<(x438/(x439&x440)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x441 = UINT16_MAX;
	volatile int32_t x443 = INT32_MIN;
	volatile int32_t t81 = -676358793;

	t81 = (x441<(x442/(x443&x444)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x449 = 5U;
	static int8_t x452 = 3;
	volatile int32_t t82 = -12192440;

	t82 = (x449<(x450/(x451&x452)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x457 = -1;
	int8_t x458 = INT8_MAX;
	int64_t x459 = INT64_MAX;
	int16_t x460 = INT16_MIN;
	int32_t t83 = 741551;

	t83 = (x457<(x458/(x459&x460)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x461 = INT16_MIN;
	static volatile uint64_t x462 = 3176948283LLU;
	volatile int16_t x463 = INT16_MIN;
	static int32_t x464 = INT32_MAX;
	volatile int32_t t84 = 2944311;

	t84 = (x461<(x462/(x463&x464)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x465 = UINT8_MAX;
	static volatile int64_t x466 = -1LL;
	uint32_t x467 = 618954221U;
	static int64_t x468 = -1LL;
	int32_t t85 = -58470904;

	t85 = (x465<(x466/(x467&x468)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x485 = -4;
	static volatile uint64_t x486 = UINT64_MAX;
	static int8_t x487 = -2;
	volatile int16_t x488 = -1;
	volatile int32_t t86 = 92;

	t86 = (x485<(x486/(x487&x488)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x489 = 60U;
	int64_t x491 = 89LL;
	int64_t x492 = -1LL;
	volatile int32_t t87 = -5454;

	t87 = (x489<(x490/(x491&x492)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x494 = -1;
	int8_t x495 = -1;
	volatile int32_t t88 = -7800;

	t88 = (x493<(x494/(x495&x496)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x497 = 43779LLU;
	static int64_t x498 = INT64_MIN;
	int8_t x499 = 1;
	int8_t x500 = -23;
	volatile int32_t t89 = -52;

	t89 = (x497<(x498/(x499&x500)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x505 = INT8_MIN;
	static uint64_t x506 = UINT64_MAX;
	static int64_t x507 = -16607367100LL;
	volatile int16_t x508 = 13663;
	static volatile int32_t t90 = -201564643;

	t90 = (x505<(x506/(x507&x508)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x511 = INT8_MIN;
	int32_t t91 = 437;

	t91 = (x509<(x510/(x511&x512)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x513 = -1;
	static int16_t x514 = INT16_MAX;
	static volatile int32_t x515 = 749976;
	uint32_t x516 = 7333376U;
	int32_t t92 = -223;

	t92 = (x513<(x514/(x515&x516)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x517 = -1;
	uint64_t x518 = 167443073532780LLU;
	static volatile int64_t x519 = INT64_MAX;
	static int32_t x520 = INT32_MIN;
	volatile int32_t t93 = -1693;

	t93 = (x517<(x518/(x519&x520)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x521 = 3612611325765878LLU;
	static volatile int8_t x522 = -28;
	uint16_t x523 = UINT16_MAX;

	t94 = (x521<(x522/(x523&x524)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x529 = 7U;
	static int32_t x530 = INT32_MAX;
	uint16_t x532 = UINT16_MAX;
	int32_t t95 = 818525;

	t95 = (x529<(x530/(x531&x532)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x533 = UINT32_MAX;
	uint64_t x534 = 3170634316392243562LLU;
	int16_t x535 = -1;
	uint32_t x536 = 5672U;
	int32_t t96 = 1;

	t96 = (x533<(x534/(x535&x536)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x537 = 3649U;
	volatile int8_t x538 = 3;
	uint16_t x540 = 43U;
	volatile int32_t t97 = -17;

	t97 = (x537<(x538/(x539&x540)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x541 = INT8_MAX;
	uint64_t x542 = 3707LLU;
	static uint64_t x543 = 57021533026340748LLU;
	int32_t x544 = INT32_MIN;

	t98 = (x541<(x542/(x543&x544)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x545 = 1041658451LLU;
	int64_t x546 = -34257994974LL;
	int64_t x548 = -1LL;

	t99 = (x545<(x546/(x547&x548)));

	if (t99 != 0) { NG(); } else { ; }
	
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

