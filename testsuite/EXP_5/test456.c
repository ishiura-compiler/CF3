#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = 258402LL;
uint16_t x8 = 1U;
static int16_t x10 = -1;
uint32_t x15 = UINT32_MAX;
volatile int32_t t4 = INT32_MAX;
uint16_t x37 = 14636U;
uint32_t x38 = 28744U;
static int16_t x39 = INT16_MAX;
int32_t t6 = 64963;
static uint32_t x43 = 15838U;
static uint64_t x63 = UINT64_MAX;
static volatile uint32_t x74 = 1U;
int64_t x76 = -25LL;
static int16_t x78 = -1;
int8_t x79 = 1;
uint32_t x82 = UINT32_MAX;
uint8_t x83 = 26U;
volatile int32_t t15 = 16233;
volatile uint32_t x101 = UINT32_MAX;
int32_t x108 = -1;
int8_t x126 = -1;
int64_t x127 = -18223082186959046LL;
int32_t x130 = -1;
uint8_t x140 = 0U;
static int64_t x152 = -40488363947LL;
volatile uint64_t x177 = 7020728732172LLU;
static volatile int64_t x180 = INT64_MIN;
uint16_t x199 = UINT16_MAX;
volatile uint64_t x202 = 6109873728156254879LLU;
static int64_t x203 = 15LL;
volatile int16_t x206 = INT16_MIN;
static int16_t x218 = INT16_MIN;
int8_t x246 = 1;
int8_t x255 = INT8_MIN;
uint64_t x265 = UINT64_MAX;
int64_t x267 = -1LL;
int32_t x281 = -27542;
int16_t x290 = INT16_MIN;
static volatile int64_t x292 = -3553013731024574LL;
static volatile int32_t t47 = 2810;
int8_t x294 = -1;
int32_t x306 = INT32_MIN;
int64_t x308 = -1LL;
uint32_t x321 = 417U;
uint32_t t52 = 180U;
int64_t x330 = -1LL;
uint64_t x336 = UINT64_MAX;
volatile int16_t x348 = INT16_MIN;
static int32_t x351 = INT32_MIN;
int16_t x358 = INT16_MIN;
uint16_t x367 = 0U;
static volatile int32_t t61 = 26;
static int32_t x373 = 16120765;
int32_t x379 = -1;
int64_t x398 = 16055272990LL;
int16_t x405 = -3812;
volatile int32_t t68 = -10;
static uint32_t x409 = 547903854U;
volatile int8_t x426 = -1;
int64_t x429 = 1373388108LL;
volatile int64_t t74 = 1LL;
int32_t x443 = INT32_MIN;
int8_t x445 = 1;
static int8_t x456 = INT8_MIN;
volatile uint32_t x465 = 460U;
static uint32_t x466 = 2U;
int32_t x467 = INT32_MIN;
uint64_t x468 = 173773640LLU;
int64_t x471 = -2LL;
int16_t x485 = -1;
int32_t t86 = -1;
static int32_t x510 = -4811;
volatile uint64_t x512 = UINT64_MAX;
volatile uint64_t t88 = 172592LLU;
int8_t x522 = 26;
int64_t x528 = -1LL;
int8_t x533 = -1;
volatile int64_t x536 = -4600870762472918755LL;
static volatile uint64_t t94 = 26348698395655LLU;
uint16_t x555 = 4U;
uint32_t x558 = UINT32_MAX;
int8_t x559 = 38;
volatile int32_t t98 = 1186;


void f0(void) {
	volatile int16_t x1 = 6230;
	int16_t x2 = INT16_MIN;
	static int64_t x4 = INT64_MAX;
	static int32_t t0 = 2681692;

	t0 = (x1+((x2*x3)<=x4));

	if (t0 != 6231) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int16_t x6 = INT16_MIN;
	int32_t x7 = -1;
	volatile int32_t t1 = -132700;

	t1 = (x5+((x6*x7)<=x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x11 = INT16_MAX;
	int32_t x12 = -56889444;
	volatile int32_t t2 = -1;

	t2 = (x9+((x10*x11)<=x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	int8_t x16 = INT8_MIN;
	volatile int64_t t3 = 4468885LL;

	t3 = (x13+((x14*x15)<=x16));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	volatile uint64_t x22 = 177086LLU;
	volatile int16_t x23 = -1;
	volatile int32_t x24 = INT32_MIN;

	t4 = (x21+((x22*x23)<=x24));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MIN;
	volatile uint32_t x34 = 13U;
	int8_t x35 = -1;
	int16_t x36 = 53;
	volatile int32_t t5 = -1;

	t5 = (x33+((x34*x35)<=x36));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x40 = INT8_MAX;

	t6 = (x37+((x38*x39)<=x40));

	if (t6 != 14636) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = 5;
	uint16_t x42 = 1384U;
	int32_t x44 = 118;
	int32_t t7 = -69287;

	t7 = (x41+((x42*x43)<=x44));

	if (t7 != 5) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = INT8_MIN;
	static uint16_t x46 = 0U;
	int8_t x47 = 3;
	static volatile int32_t x48 = -1;
	volatile int32_t t8 = -1440;

	t8 = (x45+((x46*x47)<=x48));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x49 = 5999;
	int32_t x50 = -28;
	int32_t x51 = -1;
	static int32_t x52 = -1;
	volatile int32_t t9 = 2;

	t9 = (x49+((x50*x51)<=x52));

	if (t9 != 5999) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = 55823689482LL;
	uint8_t x62 = 3U;
	uint32_t x64 = 434205U;
	volatile int64_t t10 = -1140084512798LL;

	t10 = (x61+((x62*x63)<=x64));

	if (t10 != 55823689482LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x65 = INT32_MIN;
	int64_t x66 = -3477246420791019749LL;
	uint64_t x67 = 2518325470LLU;
	uint8_t x68 = 99U;
	static int32_t t11 = INT32_MIN;

	t11 = (x65+((x66*x67)<=x68));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x69 = UINT8_MAX;
	uint32_t x70 = 44460U;
	uint32_t x71 = UINT32_MAX;
	uint8_t x72 = 124U;
	int32_t t12 = 2752284;

	t12 = (x69+((x70*x71)<=x72));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x73 = -834;
	int16_t x75 = -39;
	static int32_t t13 = -14881;

	t13 = (x73+((x74*x75)<=x76));

	if (t13 != -834) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = UINT8_MAX;
	int32_t x80 = INT32_MAX;
	int32_t t14 = -664870;

	t14 = (x77+((x78*x79)<=x80));

	if (t14 != 256) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = 72U;
	static int64_t x84 = INT64_MAX;

	t15 = (x81+((x82*x83)<=x84));

	if (t15 != 73) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = 0;
	static uint32_t x90 = 67902297U;
	int8_t x91 = INT8_MIN;
	static int32_t x92 = INT32_MIN;
	static volatile int32_t t16 = -35;

	t16 = (x89+((x90*x91)<=x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x93 = INT8_MIN;
	int32_t x94 = -5452;
	static volatile uint64_t x95 = 5886533604LLU;
	uint32_t x96 = UINT32_MAX;
	volatile int32_t t17 = -16363;

	t17 = (x93+((x94*x95)<=x96));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x102 = -1LL;
	volatile int64_t x103 = -1LL;
	static int64_t x104 = 81LL;
	static volatile uint32_t t18 = 302622302U;

	t18 = (x101+((x102*x103)<=x104));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = -1;
	int32_t x107 = -1;
	int32_t t19 = -3;

	t19 = (x105+((x106*x107)<=x108));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x113 = UINT8_MAX;
	volatile uint8_t x114 = UINT8_MAX;
	static int8_t x115 = 1;
	int32_t x116 = INT32_MIN;
	volatile int32_t t20 = 58897913;

	t20 = (x113+((x114*x115)<=x116));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x122 = 81566382U;
	volatile int32_t x123 = INT32_MAX;
	volatile uint8_t x124 = 3U;
	volatile int64_t t21 = INT64_MIN;

	t21 = (x121+((x122*x123)<=x124));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x125 = INT64_MIN;
	uint16_t x128 = 0U;
	static volatile int64_t t22 = INT64_MIN;

	t22 = (x125+((x126*x127)<=x128));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x129 = -32;
	uint16_t x131 = UINT16_MAX;
	volatile int16_t x132 = INT16_MAX;
	static int32_t t23 = 3;

	t23 = (x129+((x130*x131)<=x132));

	if (t23 != -31) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = INT64_MIN;
	int8_t x134 = 9;
	int64_t x135 = -130177829106765159LL;
	int32_t x136 = INT32_MIN;
	int64_t t24 = -14699369001506116LL;

	t24 = (x133+((x134*x135)<=x136));

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = INT16_MAX;
	volatile int8_t x138 = 1;
	volatile int64_t x139 = INT64_MAX;
	int32_t t25 = -379453977;

	t25 = (x137+((x138*x139)<=x140));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = -1LL;
	int16_t x142 = -5636;
	volatile int16_t x143 = INT16_MAX;
	int8_t x144 = -1;
	int64_t t26 = -17320593975LL;

	t26 = (x141+((x142*x143)<=x144));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x145 = 16084938LLU;
	uint16_t x146 = UINT16_MAX;
	static int8_t x147 = INT8_MIN;
	uint64_t x148 = 832705LLU;
	static uint64_t t27 = 8640480147701819LLU;

	t27 = (x145+((x146*x147)<=x148));

	if (t27 != 16084938LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x149 = 56262;
	volatile int16_t x150 = INT16_MIN;
	volatile int16_t x151 = 134;
	volatile int32_t t28 = 38249;

	t28 = (x149+((x150*x151)<=x152));

	if (t28 != 56262) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = 2U;
	uint16_t x158 = 2714U;
	int16_t x159 = -6816;
	uint8_t x160 = 3U;
	static int32_t t29 = -139;

	t29 = (x157+((x158*x159)<=x160));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x161 = INT32_MIN;
	static volatile int8_t x162 = -1;
	static volatile uint32_t x163 = 24014236U;
	int16_t x164 = INT16_MIN;
	volatile int32_t t30 = 38795404;

	t30 = (x161+((x162*x163)<=x164));

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x169 = -1;
	int64_t x170 = INT64_MIN;
	volatile uint16_t x171 = 0U;
	int8_t x172 = 0;
	volatile int32_t t31 = -15827107;

	t31 = (x169+((x170*x171)<=x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x178 = INT8_MIN;
	volatile uint32_t x179 = 442U;
	volatile uint64_t t32 = 3450LLU;

	t32 = (x177+((x178*x179)<=x180));

	if (t32 != 7020728732172LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x197 = -19;
	static uint8_t x198 = UINT8_MAX;
	uint8_t x200 = UINT8_MAX;
	int32_t t33 = -146681;

	t33 = (x197+((x198*x199)<=x200));

	if (t33 != -19) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x201 = -1;
	int16_t x204 = 2059;
	volatile int32_t t34 = -951541;

	t34 = (x201+((x202*x203)<=x204));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x205 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	static uint64_t x208 = 4980152379576935924LLU;
	static volatile int32_t t35 = 24;

	t35 = (x205+((x206*x207)<=x208));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x217 = 47576U;
	uint8_t x219 = 84U;
	int8_t x220 = -4;
	uint32_t t36 = 0U;

	t36 = (x217+((x218*x219)<=x220));

	if (t36 != 47577U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x225 = 14;
	volatile int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MIN;
	int32_t x228 = -704;
	int32_t t37 = 29274;

	t37 = (x225+((x226*x227)<=x228));

	if (t37 != 14) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x229 = -1;
	volatile int16_t x230 = -1;
	volatile int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MIN;
	static int32_t t38 = -23;

	t38 = (x229+((x230*x231)<=x232));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x245 = 0;
	uint8_t x247 = UINT8_MAX;
	volatile int32_t x248 = 7;
	volatile int32_t t39 = 226866;

	t39 = (x245+((x246*x247)<=x248));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x253 = INT64_MIN;
	int16_t x254 = INT16_MIN;
	int8_t x256 = -13;
	int64_t t40 = INT64_MIN;

	t40 = (x253+((x254*x255)<=x256));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x257 = 1LLU;
	static volatile int8_t x258 = -1;
	static uint32_t x259 = 153076U;
	uint32_t x260 = UINT32_MAX;
	uint64_t t41 = 30338712LLU;

	t41 = (x257+((x258*x259)<=x260));

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x261 = INT8_MIN;
	volatile int16_t x262 = INT16_MIN;
	uint32_t x263 = 16U;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t42 = -28620814;

	t42 = (x261+((x262*x263)<=x264));

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x266 = 79;
	static uint32_t x268 = UINT32_MAX;
	uint64_t t43 = 3619578855116489442LLU;

	t43 = (x265+((x266*x267)<=x268));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x273 = -1;
	int8_t x274 = INT8_MAX;
	static volatile int64_t x275 = -1LL;
	volatile uint8_t x276 = UINT8_MAX;
	static volatile int32_t t44 = -2990;

	t44 = (x273+((x274*x275)<=x276));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x277 = -1LL;
	volatile uint8_t x278 = 0U;
	int8_t x279 = 3;
	int64_t x280 = 76090124447765LL;
	volatile int64_t t45 = -11643154988LL;

	t45 = (x277+((x278*x279)<=x280));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x282 = 33;
	volatile int16_t x283 = -1;
	int64_t x284 = 15792648531822LL;
	volatile int32_t t46 = -994611301;

	t46 = (x281+((x282*x283)<=x284));

	if (t46 != -27541) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x289 = INT8_MAX;
	static int8_t x291 = INT8_MAX;

	t47 = (x289+((x290*x291)<=x292));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x293 = INT16_MIN;
	int64_t x295 = -24LL;
	uint64_t x296 = 518335LLU;
	int32_t t48 = -10678527;

	t48 = (x293+((x294*x295)<=x296));

	if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x297 = 12125U;
	int64_t x298 = -1LL;
	volatile int16_t x299 = INT16_MIN;
	uint8_t x300 = 0U;
	uint32_t t49 = 2073157731U;

	t49 = (x297+((x298*x299)<=x300));

	if (t49 != 12125U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x301 = -774;
	int8_t x302 = -1;
	int16_t x303 = 5584;
	int32_t x304 = -1;
	volatile int32_t t50 = -3;

	t50 = (x301+((x302*x303)<=x304));

	if (t50 != -773) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x305 = INT8_MIN;
	static uint32_t x307 = UINT32_MAX;
	static int32_t t51 = -14017057;

	t51 = (x305+((x306*x307)<=x308));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x322 = 16701362LLU;
	volatile int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;

	t52 = (x321+((x322*x323)<=x324));

	if (t52 != 418U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x325 = 11997LL;
	static int8_t x326 = 3;
	int16_t x327 = -1;
	uint8_t x328 = 8U;
	int64_t t53 = -114LL;

	t53 = (x325+((x326*x327)<=x328));

	if (t53 != 11998LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x329 = -1;
	volatile int8_t x331 = INT8_MIN;
	volatile int16_t x332 = -1;
	static int32_t t54 = 30;

	t54 = (x329+((x330*x331)<=x332));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MAX;
	uint32_t x335 = 1U;
	int32_t t55 = 17;

	t55 = (x333+((x334*x335)<=x336));

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x337 = INT8_MAX;
	uint16_t x338 = 20987U;
	uint8_t x339 = UINT8_MAX;
	int64_t x340 = 3106417174685999382LL;
	int32_t t56 = -16923;

	t56 = (x337+((x338*x339)<=x340));

	if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x345 = 1;
	static int8_t x346 = -15;
	int8_t x347 = 1;
	volatile int32_t t57 = -3080;

	t57 = (x345+((x346*x347)<=x348));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x349 = 20170;
	int64_t x350 = 45LL;
	static uint16_t x352 = UINT16_MAX;
	static int32_t t58 = -1218;

	t58 = (x349+((x350*x351)<=x352));

	if (t58 != 20171) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MIN;
	int64_t x355 = 2011559653352013LL;
	int16_t x356 = -1;
	uint32_t t59 = 59338U;

	t59 = (x353+((x354*x355)<=x356));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x357 = INT8_MAX;
	uint8_t x359 = UINT8_MAX;
	uint16_t x360 = 21699U;
	int32_t t60 = 844;

	t60 = (x357+((x358*x359)<=x360));

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x365 = -142;
	static int8_t x366 = -11;
	int16_t x368 = -32;

	t61 = (x365+((x366*x367)<=x368));

	if (t61 != -142) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x374 = UINT8_MAX;
	static int8_t x375 = -1;
	static int8_t x376 = 58;
	volatile int32_t t62 = 1323;

	t62 = (x373+((x374*x375)<=x376));

	if (t62 != 16120766) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MAX;
	int64_t x380 = 0LL;
	int32_t t63 = 244177720;

	t63 = (x377+((x378*x379)<=x380));

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x381 = UINT32_MAX;
	static uint32_t x382 = 3466677U;
	uint32_t x383 = 7U;
	int32_t x384 = INT32_MIN;
	volatile uint32_t t64 = 158U;

	t64 = (x381+((x382*x383)<=x384));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x389 = INT64_MIN;
	int16_t x390 = -9193;
	static int16_t x391 = -8831;
	int64_t x392 = INT64_MIN;
	int64_t t65 = INT64_MIN;

	t65 = (x389+((x390*x391)<=x392));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x397 = 77131LLU;
	int16_t x399 = INT16_MAX;
	int8_t x400 = INT8_MIN;
	uint64_t t66 = 39LLU;

	t66 = (x397+((x398*x399)<=x400));

	if (t66 != 77131LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x401 = INT32_MIN;
	static int64_t x402 = 82291LL;
	int32_t x403 = INT32_MAX;
	uint8_t x404 = UINT8_MAX;
	int32_t t67 = INT32_MIN;

	t67 = (x401+((x402*x403)<=x404));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x406 = 2001240281707044LL;
	volatile uint8_t x407 = UINT8_MAX;
	static int64_t x408 = INT64_MAX;

	t68 = (x405+((x406*x407)<=x408));

	if (t68 != -3811) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x410 = INT8_MIN;
	uint64_t x411 = 58063872608LLU;
	uint32_t x412 = 44125U;
	volatile uint32_t t69 = 2168994U;

	t69 = (x409+((x410*x411)<=x412));

	if (t69 != 547903854U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x413 = INT32_MAX;
	int16_t x414 = INT16_MIN;
	static int16_t x415 = 0;
	static volatile int8_t x416 = -47;
	int32_t t70 = INT32_MAX;

	t70 = (x413+((x414*x415)<=x416));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x417 = 37254LL;
	int8_t x418 = INT8_MIN;
	uint8_t x419 = 8U;
	int8_t x420 = -43;
	static volatile int64_t t71 = 838LL;

	t71 = (x417+((x418*x419)<=x420));

	if (t71 != 37255LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x421 = 12835;
	uint8_t x422 = 25U;
	uint16_t x423 = 3236U;
	static uint32_t x424 = 47U;
	volatile int32_t t72 = 278770112;

	t72 = (x421+((x422*x423)<=x424));

	if (t72 != 12835) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x425 = -1;
	int8_t x427 = INT8_MAX;
	int32_t x428 = -1;
	volatile int32_t t73 = -258255;

	t73 = (x425+((x426*x427)<=x428));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x430 = 359U;
	uint32_t x431 = 18865U;
	uint16_t x432 = 12U;

	t74 = (x429+((x430*x431)<=x432));

	if (t74 != 1373388108LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x433 = 3;
	int8_t x434 = INT8_MAX;
	uint32_t x435 = 745U;
	static uint32_t x436 = UINT32_MAX;
	static volatile int32_t t75 = -1;

	t75 = (x433+((x434*x435)<=x436));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x437 = INT8_MIN;
	volatile uint64_t x438 = 1014608208229162LLU;
	int64_t x439 = INT64_MAX;
	static int8_t x440 = INT8_MIN;
	volatile int32_t t76 = -20088;

	t76 = (x437+((x438*x439)<=x440));

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x441 = 112LL;
	static uint32_t x442 = 181016933U;
	static uint8_t x444 = 8U;
	volatile int64_t t77 = -7856421843LL;

	t77 = (x441+((x442*x443)<=x444));

	if (t77 != 112LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x446 = -1;
	static int8_t x447 = INT8_MIN;
	int8_t x448 = 24;
	volatile int32_t t78 = 704;

	t78 = (x445+((x446*x447)<=x448));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x453 = -450480773;
	int16_t x454 = 0;
	uint16_t x455 = 3U;
	int32_t t79 = -4;

	t79 = (x453+((x454*x455)<=x456));

	if (t79 != -450480773) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t t80 = 43438064U;

	t80 = (x465+((x466*x467)<=x468));

	if (t80 != 461U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x469 = 2U;
	static volatile int32_t x470 = 6;
	int32_t x472 = -1;
	volatile int32_t t81 = 44046855;

	t81 = (x469+((x470*x471)<=x472));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x473 = INT8_MIN;
	uint8_t x474 = UINT8_MAX;
	int64_t x475 = -1LL;
	int8_t x476 = 1;
	volatile int32_t t82 = 410439;

	t82 = (x473+((x474*x475)<=x476));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x477 = INT64_MIN;
	uint64_t x478 = 1956350121745427825LLU;
	uint64_t x479 = 7227073799377LLU;
	int8_t x480 = -1;
	static int64_t t83 = 258854503650LL;

	t83 = (x477+((x478*x479)<=x480));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x486 = UINT32_MAX;
	static volatile int16_t x487 = 83;
	int64_t x488 = -1LL;
	volatile int32_t t84 = 15099971;

	t84 = (x485+((x486*x487)<=x488));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x489 = 999U;
	int32_t x490 = -1;
	int8_t x491 = INT8_MIN;
	int16_t x492 = 2449;
	uint32_t t85 = 40544U;

	t85 = (x489+((x490*x491)<=x492));

	if (t85 != 1000U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x505 = 30U;
	uint64_t x506 = 3298969LLU;
	static int8_t x507 = INT8_MIN;
	volatile int16_t x508 = 1;

	t86 = (x505+((x506*x507)<=x508));

	if (t86 != 30) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x509 = INT16_MIN;
	uint8_t x511 = UINT8_MAX;
	int32_t t87 = 645758379;

	t87 = (x509+((x510*x511)<=x512));

	if (t87 != -32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x513 = 202903216509521LLU;
	uint64_t x514 = UINT64_MAX;
	int32_t x515 = INT32_MAX;
	static int32_t x516 = 4631;

	t88 = (x513+((x514*x515)<=x516));

	if (t88 != 202903216509521LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x517 = 1234135LLU;
	static int8_t x518 = INT8_MIN;
	int16_t x519 = INT16_MIN;
	int32_t x520 = INT32_MIN;
	volatile uint64_t t89 = 1LLU;

	t89 = (x517+((x518*x519)<=x520));

	if (t89 != 1234135LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x521 = INT8_MAX;
	volatile uint8_t x523 = 0U;
	int16_t x524 = INT16_MIN;
	static int32_t t90 = -122921797;

	t90 = (x521+((x522*x523)<=x524));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x525 = 28925U;
	uint64_t x526 = UINT64_MAX;
	static int32_t x527 = INT32_MAX;
	uint32_t t91 = 314819U;

	t91 = (x525+((x526*x527)<=x528));

	if (t91 != 28926U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x529 = 1121627U;
	uint8_t x530 = UINT8_MAX;
	uint16_t x531 = UINT16_MAX;
	int16_t x532 = INT16_MIN;
	uint32_t t92 = 126U;

	t92 = (x529+((x530*x531)<=x532));

	if (t92 != 1121627U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x534 = 6246U;
	uint32_t x535 = UINT32_MAX;
	static int32_t t93 = 1;

	t93 = (x533+((x534*x535)<=x536));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x537 = 1901550322LLU;
	static int8_t x538 = INT8_MIN;
	static int8_t x539 = -1;
	uint32_t x540 = 88U;

	t94 = (x537+((x538*x539)<=x540));

	if (t94 != 1901550322LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x541 = -2;
	volatile int64_t x542 = INT64_MIN;
	uint64_t x543 = 72854305369893LLU;
	int8_t x544 = 1;
	volatile int32_t t95 = 43;

	t95 = (x541+((x542*x543)<=x544));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x545 = -1;
	int16_t x546 = -1;
	volatile int16_t x547 = INT16_MIN;
	int32_t x548 = INT32_MAX;
	volatile int32_t t96 = 1;

	t96 = (x545+((x546*x547)<=x548));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x553 = 1;
	uint8_t x554 = UINT8_MAX;
	int8_t x556 = 1;
	int32_t t97 = 114914457;

	t97 = (x553+((x554*x555)<=x556));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x557 = INT16_MIN;
	int16_t x560 = 0;

	t98 = (x557+((x558*x559)<=x560));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x561 = UINT32_MAX;
	static volatile uint8_t x562 = 1U;
	static uint64_t x563 = 68278LLU;
	int16_t x564 = 15565;
	static uint32_t t99 = UINT32_MAX;

	t99 = (x561+((x562*x563)<=x564));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

