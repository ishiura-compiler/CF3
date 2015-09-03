#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x20 = -1;
static uint32_t x21 = 4327U;
static int8_t x24 = -1;
uint64_t t5 = 49LLU;
uint32_t x30 = 6940U;
volatile uint32_t x34 = 137915954U;
static int32_t x40 = 17816;
int32_t x43 = -4963044;
uint8_t x59 = 2U;
int64_t x60 = INT64_MIN;
static int8_t x65 = -1;
static uint64_t t16 = 649752238LLU;
int16_t x78 = -1;
volatile int32_t t18 = -7454065;
static int32_t x89 = 125448;
uint64_t t20 = 191089737226368LLU;
uint16_t x118 = 498U;
int32_t t25 = 31782;
int32_t x124 = INT32_MIN;
uint8_t x132 = 9U;
volatile uint64_t t29 = 327095398925453LLU;
uint32_t x142 = UINT32_MAX;
uint32_t x145 = 6227168U;
static volatile int8_t x147 = 1;
int64_t t31 = 162420558LL;
static volatile int64_t t33 = -68542177268441575LL;
int16_t x159 = -6547;
volatile uint32_t t34 = 11U;
volatile int32_t x168 = 213;
static volatile int64_t t40 = 865821539468384LL;
static int8_t x199 = -1;
volatile uint64_t t41 = 103953436LLU;
uint32_t t43 = 3170373U;
uint64_t x209 = 13LLU;
int16_t x211 = -1;
static uint64_t t44 = 63808103143LLU;
static uint8_t x219 = UINT8_MAX;
uint64_t t46 = 0LLU;
int8_t x228 = INT8_MIN;
volatile int32_t t47 = -18314749;
uint8_t x254 = 85U;
static int64_t x263 = 146471361561181LL;
uint32_t x270 = 752U;
uint16_t x272 = UINT16_MAX;
static volatile uint64_t t54 = 992564003151405146LLU;
int64_t x280 = 31609239LL;
int8_t x290 = -1;
int8_t x295 = -1;
uint32_t t59 = 130306176U;
static int8_t x298 = -3;
static volatile uint64_t t60 = 3987LLU;
int8_t x305 = 1;
volatile uint64_t x306 = UINT64_MAX;
int8_t x307 = -1;
uint32_t x313 = 34174356U;
int64_t x316 = INT64_MIN;
static int8_t x322 = INT8_MIN;
uint32_t x323 = 12U;
static uint32_t t65 = 93506U;
uint8_t x328 = 2U;
volatile int16_t x331 = 0;
volatile int64_t t67 = -239131602750637909LL;
static volatile int32_t x335 = -1;
static uint16_t x354 = 1U;
uint8_t x369 = 1U;
volatile uint32_t x371 = 3U;
volatile uint64_t t76 = 488791226320700823LLU;
volatile int8_t x373 = INT8_MIN;
uint16_t x383 = 1U;
uint32_t t79 = 649484U;
int32_t x400 = INT32_MIN;
int32_t x413 = -314934;
static int32_t x418 = INT32_MAX;
static uint32_t t86 = 5U;
volatile uint8_t x423 = 2U;
int64_t t87 = -52492LL;
uint16_t x427 = 5U;
uint32_t t88 = 531914U;
uint16_t x435 = 29U;
static int8_t x443 = INT8_MIN;
int32_t t90 = -433886;
static uint32_t x445 = UINT32_MAX;
int16_t x446 = INT16_MIN;
static int16_t x452 = INT16_MIN;
volatile int8_t x455 = -7;
volatile int64_t x460 = INT64_MIN;
int64_t t94 = -1663278892271729465LL;
uint32_t x468 = 15969222U;
volatile uint16_t x471 = 3721U;
volatile uint64_t t99 = 0LLU;


void f0(void) {
	uint32_t x5 = 2U;
	uint16_t x6 = 3730U;
	uint8_t x7 = 3U;
	volatile uint16_t x8 = UINT16_MAX;
	static uint32_t t0 = 11295890U;

	t0 = (x5*(x6^(x7/x8)));

	if (t0 != 7460U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -5;
	int16_t x10 = 0;
	int32_t x11 = -10136122;
	int64_t x12 = INT64_MIN;
	static int64_t t1 = -6773872308837457LL;

	t1 = (x9*(x10^(x11/x12)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	uint32_t x14 = UINT32_MAX;
	uint16_t x15 = UINT16_MAX;
	static volatile uint32_t x16 = 2857U;
	static uint32_t t2 = 1041499415U;

	t2 = (x13*(x14^(x15/x16)));

	if (t2 != 23U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	int32_t x18 = INT32_MIN;
	uint64_t x19 = 7LLU;
	uint64_t t3 = 157LLU;

	t3 = (x17*(x18^(x19/x20)));

	if (t3 != 13835058057429647360LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MAX;
	volatile int16_t x23 = 289;
	uint32_t t4 = 2268U;

	t4 = (x21*(x22^(x23/x24)));

	if (t4 != 4154426336U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MAX;
	static uint64_t x26 = 1523768912061630074LLU;
	uint64_t x27 = 128219682LLU;
	volatile int64_t x28 = INT64_MIN;

	t5 = (x25*(x26^(x27/x28)));

	if (t5 != 9051211094731503238LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int8_t x31 = INT8_MIN;
	static int16_t x32 = -295;
	volatile uint32_t t6 = 1640U;

	t6 = (x29*(x30^(x31/x32)));

	if (t6 != 4067557376U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MIN;
	uint16_t x35 = 248U;
	static uint16_t x36 = 125U;
	volatile uint32_t t7 = 13458672U;

	t7 = (x33*(x34^(x35/x36)));

	if (t7 != 3370549248U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	int32_t x38 = INT32_MAX;
	int8_t x39 = -3;
	static volatile int32_t t8 = -9950;

	t8 = (x37*(x38^(x39/x40)));

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = INT8_MAX;
	volatile uint16_t x42 = 737U;
	static volatile int16_t x44 = INT16_MAX;
	static volatile int32_t t9 = 3;

	t9 = (x41*(x42^(x43/x44)));

	if (t9 != -80264) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	volatile uint64_t x46 = 451588691LLU;
	volatile int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t10 = 4355950LLU;

	t10 = (x45*(x46^(x47/x48)));

	if (t10 != 9223372036403187117LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = INT8_MIN;
	int32_t x54 = -27;
	int8_t x55 = -7;
	static int32_t x56 = INT32_MIN;
	int32_t t11 = -15619;

	t11 = (x53*(x54^(x55/x56)));

	if (t11 != 3456) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 1;
	volatile int32_t x58 = 42;
	static volatile int64_t t12 = 60025593333610150LL;

	t12 = (x57*(x58^(x59/x60)));

	if (t12 != 42LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = 2;
	int8_t x62 = 0;
	static volatile int8_t x63 = INT8_MIN;
	static uint32_t x64 = 1U;
	uint32_t t13 = 57261U;

	t13 = (x61*(x62^(x63/x64)));

	if (t13 != 4294967040U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x66 = 17U;
	static int16_t x67 = INT16_MIN;
	uint32_t x68 = 11541U;
	volatile uint32_t t14 = 441754205U;

	t14 = (x65*(x66^(x67/x68)));

	if (t14 != 4294595168U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = 37;
	int8_t x70 = 4;
	volatile int8_t x71 = INT8_MIN;
	uint64_t x72 = UINT64_MAX;
	static volatile uint64_t t15 = 168552675997655LLU;

	t15 = (x69*(x70^(x71/x72)));

	if (t15 != 148LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = -4326089;
	volatile uint64_t x74 = 2LLU;
	static int16_t x75 = -350;
	int16_t x76 = INT16_MIN;

	t16 = (x73*(x74^(x75/x76)));

	if (t16 != 18446744073700899438LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x77 = INT16_MIN;
	uint32_t x79 = 7001U;
	static volatile uint16_t x80 = UINT16_MAX;
	volatile uint32_t t17 = 3U;

	t17 = (x77*(x78^(x79/x80)));

	if (t17 != 32768U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = -1;
	int32_t x86 = INT32_MAX;
	static uint16_t x87 = 23251U;
	uint8_t x88 = UINT8_MAX;

	t18 = (x85*(x86^(x87/x88)));

	if (t18 != -2147483556) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x90 = UINT32_MAX;
	int16_t x91 = INT16_MIN;
	int16_t x92 = -1;
	uint32_t t19 = 27855646U;

	t19 = (x89*(x90^(x91/x92)));

	if (t19 != 184161784U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	int16_t x94 = -22;
	uint64_t x95 = UINT64_MAX;
	volatile uint32_t x96 = 1887013U;

	t20 = (x93*(x94^(x95/x96)));

	if (t20 != 1251280855742976LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = -1;
	uint32_t x98 = 15829697U;
	int32_t x99 = INT32_MAX;
	int32_t x100 = INT32_MAX;
	uint32_t t21 = 597U;

	t21 = (x97*(x98^(x99/x100)));

	if (t21 != 4279137600U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x101 = 241016978618919LLU;
	uint8_t x102 = 1U;
	static uint64_t x103 = 4842908842LLU;
	static volatile int32_t x104 = -16897;
	static uint64_t t22 = 25480880599496479LLU;

	t22 = (x101*(x102^(x103/x104)));

	if (t22 != 241016978618919LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x105 = UINT32_MAX;
	static int64_t x106 = INT64_MIN;
	uint64_t x107 = UINT64_MAX;
	uint8_t x108 = UINT8_MAX;
	volatile uint64_t t23 = 338291LLU;

	t23 = (x105*(x106^(x107/x108)));

	if (t23 != 9223372036837932799LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 4U;
	int64_t x110 = -1LL;
	volatile int32_t x111 = -1;
	int32_t x112 = INT32_MAX;
	int64_t t24 = -7409759LL;

	t24 = (x109*(x110^(x111/x112)));

	if (t24 != -4LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x117 = 9U;
	int16_t x119 = INT16_MAX;
	volatile int16_t x120 = 3;

	t25 = (x117*(x118^(x119/x120)));

	if (t25 != 99864) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MIN;
	static volatile int16_t x122 = -55;
	volatile uint8_t x123 = 0U;
	static int32_t t26 = 22;

	t26 = (x121*(x122^(x123/x124)));

	if (t26 != 1802240) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x125 = 2U;
	int8_t x126 = -1;
	int64_t x127 = -14490LL;
	uint8_t x128 = UINT8_MAX;
	volatile int64_t t27 = 25022LL;

	t27 = (x125*(x126^(x127/x128)));

	if (t27 != 110LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 1;
	static int16_t x130 = -5;
	int8_t x131 = -18;
	volatile int32_t t28 = -8966267;

	t28 = (x129*(x130^(x131/x132)));

	if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 31859U;
	int16_t x134 = INT16_MIN;
	static int8_t x135 = INT8_MAX;
	static uint64_t x136 = 1LLU;

	t29 = (x133*(x134^(x135/x136)));

	if (t29 != 18446744072669641997LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -987;
	int8_t x143 = -4;
	uint16_t x144 = UINT16_MAX;
	static uint32_t t30 = 7U;

	t30 = (x141*(x142^(x143/x144)));

	if (t30 != 987U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x146 = -1;
	int64_t x148 = -3154335823850162063LL;

	t31 = (x145*(x146^(x147/x148)));

	if (t31 != -6227168LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = -1;
	volatile int16_t x150 = 503;
	int32_t x151 = INT32_MIN;
	volatile int32_t x152 = -258069;
	static int32_t t32 = -252229;

	t32 = (x149*(x150^(x151/x152)));

	if (t32 != -8566) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = 0;
	int8_t x154 = INT8_MIN;
	static int64_t x155 = -28067715258667266LL;
	uint8_t x156 = 10U;

	t33 = (x153*(x154^(x155/x156)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = 5U;
	static int16_t x158 = INT16_MIN;
	static uint32_t x160 = UINT32_MAX;

	t34 = (x157*(x158^(x159/x160)));

	if (t34 != 4294803456U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x165 = 62;
	uint32_t x166 = UINT32_MAX;
	int64_t x167 = 400268861LL;
	int64_t t35 = 131393566158600156LL;

	t35 = (x165*(x166^(x167/x168)));

	if (t35 != 266171462138LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x169 = UINT64_MAX;
	volatile int16_t x170 = -1;
	volatile int64_t x171 = -1LL;
	volatile uint16_t x172 = 444U;
	volatile uint64_t t36 = 6360LLU;

	t36 = (x169*(x170^(x171/x172)));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x173 = INT32_MAX;
	int32_t x174 = -1;
	int8_t x175 = -15;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t37 = 5410U;

	t37 = (x173*(x174^(x175/x176)));

	if (t37 != 2147483649U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = -2;
	uint16_t x182 = 3U;
	static int32_t x183 = 129;
	int64_t x184 = -1LL;
	int64_t t38 = -7176262618378LL;

	t38 = (x181*(x182^(x183/x184)));

	if (t38 != 264LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = -1LL;
	int8_t x190 = -1;
	volatile int16_t x191 = INT16_MIN;
	int16_t x192 = -1;
	int64_t t39 = 10822772746511LL;

	t39 = (x189*(x190^(x191/x192)));

	if (t39 != 32769LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = -122038417;
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	static int64_t x196 = -1LL;

	t40 = (x193*(x194^(x195/x196)));

	if (t40 != 262071505980456960LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x197 = 2199U;
	volatile uint32_t x198 = UINT32_MAX;
	uint64_t x200 = 322275155LLU;

	t41 = (x197*(x198^(x199/x200)));

	if (t41 != 129136283371593LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x201 = -1;
	static volatile int16_t x202 = -1;
	int8_t x203 = 20;
	int32_t x204 = INT32_MIN;
	int32_t t42 = -103734;

	t42 = (x201*(x202^(x203/x204)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x205 = 2514U;
	int16_t x206 = -60;
	uint8_t x207 = 1U;
	int16_t x208 = 2152;

	t43 = (x205*(x206^(x207/x208)));

	if (t43 != 4294816456U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x210 = -4228576LL;
	int16_t x212 = -1;

	t44 = (x209*(x210^(x211/x212)));

	if (t44 != 18446744073654580141LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x217 = INT16_MIN;
	static uint16_t x218 = 511U;
	int32_t x220 = INT32_MAX;
	int32_t t45 = -12341;

	t45 = (x217*(x218^(x219/x220)));

	if (t45 != -16744448) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = -1;
	uint64_t x222 = 32228LLU;
	int32_t x223 = INT32_MIN;
	static uint8_t x224 = 7U;

	t46 = (x221*(x222^(x223/x224)));

	if (t46 != 306796918LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x225 = -200044;
	volatile uint16_t x226 = 19U;
	volatile int32_t x227 = -1;

	t47 = (x225*(x226^(x227/x228)));

	if (t47 != -3800836) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = INT16_MAX;
	int16_t x234 = -7;
	int8_t x235 = INT8_MIN;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t48 = 167;

	t48 = (x233*(x234^(x235/x236)));

	if (t48 != -229369) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x237 = 145U;
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MIN;
	static uint32_t x240 = 94966364U;
	volatile int64_t t49 = -23510523295298185LL;

	t49 = (x237*(x238^(x239/x240)));

	if (t49 != -14082755865090LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = INT16_MIN;
	uint8_t x242 = 57U;
	int8_t x243 = 38;
	static int32_t x244 = 4116492;
	volatile int32_t t50 = -338849848;

	t50 = (x241*(x242^(x243/x244)));

	if (t50 != -1867776) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = INT16_MIN;
	uint64_t x250 = 1LLU;
	int64_t x251 = INT64_MAX;
	int32_t x252 = 335;
	static uint64_t t51 = 595LLU;

	t51 = (x249*(x250^(x251/x252)));

	if (t51 != 1707012138164224000LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = INT16_MIN;
	volatile uint16_t x255 = 15U;
	int8_t x256 = INT8_MAX;
	static volatile int32_t t52 = -7;

	t52 = (x253*(x254^(x255/x256)));

	if (t52 != -2785280) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x261 = 28U;
	uint16_t x262 = 557U;
	uint16_t x264 = UINT16_MAX;
	int64_t t53 = 6555078600774915LL;

	t53 = (x261*(x262^(x263/x264)));

	if (t53 != 62580257040LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x269 = 15;
	uint64_t x271 = 5925251464372560LLU;

	t54 = (x269*(x270^(x271/x272)));

	if (t54 != 1356203133090LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = INT32_MIN;
	int16_t x279 = -1;
	volatile int64_t t55 = -1LL;

	t55 = (x277*(x278^(x279/x280)));

	if (t55 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x281 = -1;
	int8_t x282 = INT8_MIN;
	int8_t x283 = -1;
	volatile uint16_t x284 = 1U;
	int32_t t56 = -46;

	t56 = (x281*(x282^(x283/x284)));

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x285 = -1;
	int32_t x286 = INT32_MAX;
	static int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MIN;
	static int64_t t57 = 59LL;

	t57 = (x285*(x286^(x287/x288)));

	if (t57 != -2147483646LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x289 = -1;
	int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	volatile int64_t t58 = -3082485785173253LL;

	t58 = (x289*(x290^(x291/x292)));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x293 = -1;
	int32_t x294 = -1;
	uint32_t x296 = 262739832U;

	t59 = (x293*(x294^(x295/x296)));

	if (t59 != 17U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x297 = 3008LLU;
	int16_t x299 = INT16_MIN;
	static int32_t x300 = 112199;

	t60 = (x297*(x298^(x299/x300)));

	if (t60 != 18446744073709542592LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x301 = -1LL;
	int16_t x302 = -42;
	int32_t x303 = -6748069;
	static uint16_t x304 = 12U;
	int64_t t61 = 1283827554642LL;

	t61 = (x301*(x302^(x303/x304)));

	if (t61 != -562315LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x308 = 3;
	static uint64_t t62 = UINT64_MAX;

	t62 = (x305*(x306^(x307/x308)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x309 = 85U;
	volatile int8_t x310 = -19;
	int8_t x311 = 1;
	int32_t x312 = -1;
	int32_t t63 = -33200894;

	t63 = (x309*(x310^(x311/x312)));

	if (t63 != 1530) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x314 = -1;
	uint64_t x315 = UINT64_MAX;
	volatile uint64_t t64 = 24630979282139398LLU;

	t64 = (x313*(x314^(x315/x316)));

	if (t64 != 18446744073641202904LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x321 = -2;
	int32_t x324 = INT32_MAX;

	t65 = (x321*(x322^(x323/x324)));

	if (t65 != 256U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x325 = UINT32_MAX;
	static uint8_t x326 = UINT8_MAX;
	volatile int64_t x327 = -1LL;
	volatile int64_t t66 = 21429059LL;

	t66 = (x325*(x326^(x327/x328)));

	if (t66 != 1095216660225LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x329 = -6712035;
	volatile int64_t x330 = -23526068061LL;
	int16_t x332 = -1624;

	t67 = (x329*(x330^(x331/x332)));

	if (t67 != 157907792237814135LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x333 = 307307661U;
	int32_t x334 = 3034632;
	int32_t x336 = -462067;
	uint32_t t68 = 489U;

	t68 = (x333*(x334^(x335/x336)));

	if (t68 != 3707902568U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x337 = -1;
	uint64_t x338 = 40768494LLU;
	static int64_t x339 = INT64_MIN;
	int8_t x340 = INT8_MAX;
	volatile uint64_t t69 = 1252578446LLU;

	t69 = (x337*(x338^(x339/x340)));

	if (t69 != 72624976704721775LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x341 = 56;
	int16_t x342 = -1;
	int64_t x343 = INT64_MIN;
	uint32_t x344 = 29191948U;
	static int64_t t70 = 3878204087543149LL;

	t70 = (x341*(x342^(x343/x344)));

	if (t70 != 17693537754368LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x345 = INT32_MIN;
	volatile uint64_t x346 = UINT64_MAX;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = INT8_MIN;
	volatile uint64_t t71 = 333126817683LLU;

	t71 = (x345*(x346^(x347/x348)));

	if (t71 != 18446742978492891136LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x349 = 6752319LLU;
	int16_t x350 = INT16_MIN;
	volatile uint32_t x351 = UINT32_MAX;
	int32_t x352 = 115284;
	uint64_t t72 = 20095341232391033LLU;

	t72 = (x349*(x350^(x351/x352)));

	if (t72 != 29000577054836793LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x353 = 0;
	int32_t x355 = INT32_MIN;
	uint8_t x356 = 6U;
	static volatile int32_t t73 = 30694;

	t73 = (x353*(x354^(x355/x356)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x357 = 836023U;
	uint64_t x358 = 2104219390423LLU;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = 6205;
	uint64_t t74 = 3306506LLU;

	t74 = (x357*(x358^(x359/x360)));

	if (t74 != 1759175234755492499LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x365 = 29U;
	int16_t x366 = INT16_MIN;
	uint32_t x367 = 47402U;
	uint16_t x368 = 170U;
	uint32_t t75 = 128206U;

	t75 = (x365*(x366^(x367/x368)));

	if (t75 != 4294025086U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x370 = 60LLU;
	int64_t x372 = INT64_MIN;

	t76 = (x369*(x370^(x371/x372)));

	if (t76 != 60LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x374 = 617258;
	static uint16_t x375 = 7U;
	static int64_t x376 = INT64_MIN;
	int64_t t77 = -40429LL;

	t77 = (x373*(x374^(x375/x376)));

	if (t77 != -79009024LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x381 = 106U;
	uint32_t x382 = 7628U;
	int16_t x384 = INT16_MAX;
	volatile uint32_t t78 = 2395234U;

	t78 = (x381*(x382^(x383/x384)));

	if (t78 != 808568U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	static int16_t x387 = INT16_MIN;
	uint32_t x388 = 162U;

	t79 = (x385*(x386^(x387/x388)));

	if (t79 != 26511931U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x389 = INT64_MAX;
	uint16_t x390 = 13U;
	uint64_t x391 = 37098410228189LLU;
	int8_t x392 = INT8_MIN;
	static volatile uint64_t t80 = 590LLU;

	t80 = (x389*(x390^(x391/x392)));

	if (t80 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x393 = 381393U;
	static int16_t x394 = INT16_MAX;
	int32_t x395 = -1;
	int8_t x396 = 1;
	static uint32_t t81 = 9367667U;

	t81 = (x393*(x394^(x395/x396)));

	if (t81 != 387416064U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x397 = 15;
	int8_t x398 = INT8_MAX;
	int64_t x399 = INT64_MIN;
	volatile int64_t t82 = -2LL;

	t82 = (x397*(x398^(x399/x400)));

	if (t82 != 64424511345LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x401 = UINT32_MAX;
	uint16_t x402 = 793U;
	volatile uint16_t x403 = 71U;
	int16_t x404 = -1;
	static uint32_t t83 = 8445288U;

	t83 = (x401*(x402^(x403/x404)));

	if (t83 != 864U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x409 = -18;
	int16_t x410 = INT16_MIN;
	volatile int8_t x411 = -1;
	volatile int32_t x412 = INT32_MAX;
	volatile int32_t t84 = 1;

	t84 = (x409*(x410^(x411/x412)));

	if (t84 != 589824) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x414 = 1110185680276149683LL;
	uint64_t x415 = 577312186560LLU;
	uint16_t x416 = UINT16_MAX;
	static uint64_t t85 = 17696091655121LLU;

	t85 = (x413*(x414^(x415/x416)));

	if (t85 != 4370143686909241056LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x417 = 65468073;
	volatile int16_t x419 = 0;
	uint32_t x420 = 1161769628U;

	t86 = (x417*(x418^(x419/x420)));

	if (t86 != 2082015575U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x421 = 263183206LL;
	uint16_t x422 = 2735U;
	volatile int8_t x424 = -1;

	t87 = (x421*(x422^(x423/x424)));

	if (t87 != -719806068410LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x425 = INT8_MAX;
	static uint32_t x426 = 145U;
	static uint32_t x428 = UINT32_MAX;

	t88 = (x425*(x426^(x427/x428)));

	if (t88 != 18415U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = -1;
	static uint32_t x434 = 77541286U;
	int64_t x436 = INT64_MAX;
	int64_t t89 = -8187595220LL;

	t89 = (x433*(x434^(x435/x436)));

	if (t89 != -77541286LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x441 = 77;
	int16_t x442 = 2302;
	static uint8_t x444 = 7U;

	t90 = (x441*(x442^(x443/x444)));

	if (t90 != -176176) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x447 = -2;
	int64_t x448 = -3681LL;
	int64_t t91 = -47541560738955650LL;

	t91 = (x445*(x446^(x447/x448)));

	if (t91 != -140737488322560LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x449 = INT16_MIN;
	volatile uint8_t x450 = 0U;
	static uint8_t x451 = 107U;
	volatile int32_t t92 = 4;

	t92 = (x449*(x450^(x451/x452)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x453 = 488U;
	uint8_t x454 = UINT8_MAX;
	int64_t x456 = INT64_MAX;
	static int64_t t93 = -24364723500LL;

	t93 = (x453*(x454^(x455/x456)));

	if (t93 != 124440LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x457 = -6;
	static int16_t x458 = INT16_MIN;
	volatile uint32_t x459 = UINT32_MAX;

	t94 = (x457*(x458^(x459/x460)));

	if (t94 != 196608LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x461 = 1006689411286308934LLU;
	int32_t x462 = 0;
	int64_t x463 = -1LL;
	int8_t x464 = 42;
	volatile uint64_t t95 = 6338950199159LLU;

	t95 = (x461*(x462^(x463/x464)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x465 = INT16_MIN;
	uint8_t x466 = 12U;
	volatile uint32_t x467 = 1U;
	uint32_t t96 = 759U;

	t96 = (x465*(x466^(x467/x468)));

	if (t96 != 4294574080U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x469 = -1LL;
	static uint16_t x470 = 463U;
	int16_t x472 = INT16_MIN;
	int64_t t97 = -96721145LL;

	t97 = (x469*(x470^(x471/x472)));

	if (t97 != -463LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x473 = -1;
	int32_t x474 = INT32_MIN;
	static int64_t x475 = 103146409527LL;
	int32_t x476 = INT32_MIN;
	int64_t t98 = 15020997428243376LL;

	t98 = (x473*(x474^(x475/x476)));

	if (t98 != -2147483600LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x477 = 445233366LLU;
	int16_t x478 = 2126;
	static uint32_t x479 = 400389U;
	int64_t x480 = -1LL;

	t99 = (x477*(x478^(x479/x480)));

	if (t99 != 18446566687838970190LLU) { NG(); } else { ; }
	
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

