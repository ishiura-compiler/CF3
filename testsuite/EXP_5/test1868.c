#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -1LL;
int32_t x3 = -7;
volatile uint8_t x9 = 61U;
uint64_t x11 = 9319292267136156LLU;
uint64_t x14 = UINT64_MAX;
int32_t t2 = -869480;
uint16_t x22 = 3095U;
int16_t x24 = INT16_MAX;
volatile uint32_t x33 = UINT32_MAX;
volatile int32_t t7 = 19943;
volatile uint16_t x43 = 10U;
int32_t x46 = 10028593;
int32_t x47 = -15491;
volatile int32_t t10 = 450338;
int16_t x50 = -304;
uint32_t x51 = UINT32_MAX;
int32_t x52 = INT32_MAX;
int32_t x57 = -1;
volatile int32_t t14 = 1209;
static int32_t x69 = INT32_MAX;
int16_t x74 = INT16_MAX;
int16_t x79 = INT16_MIN;
int32_t t22 = 6536;
int32_t x106 = -1;
int8_t x107 = INT8_MIN;
volatile int16_t x108 = INT16_MAX;
int32_t t23 = -9879;
volatile int32_t t27 = 365751;
volatile int8_t x127 = INT8_MIN;
volatile int32_t t28 = 433306;
volatile uint8_t x131 = UINT8_MAX;
int64_t x132 = -6578460546087610LL;
int8_t x140 = 25;
volatile int16_t x142 = -1;
int64_t x153 = INT64_MIN;
int8_t x157 = INT8_MIN;
uint32_t x176 = UINT32_MAX;
int32_t x180 = -721;
static uint16_t x185 = UINT16_MAX;
int64_t x201 = INT64_MAX;
static int16_t x202 = INT16_MAX;
uint8_t x203 = 1U;
uint64_t x207 = 14160775451LLU;
uint8_t x213 = UINT8_MAX;
static volatile int64_t x215 = INT64_MAX;
uint16_t x216 = 1U;
int32_t t45 = -6;
int64_t x217 = INT64_MIN;
static int32_t t46 = 1022046462;
int16_t x224 = INT16_MIN;
int32_t t47 = 359897474;
int64_t x230 = INT64_MIN;
volatile int32_t x239 = INT32_MIN;
volatile int16_t x242 = 16;
int8_t x243 = -1;
uint32_t x244 = UINT32_MAX;
static volatile uint16_t x247 = 14U;
static volatile int32_t t53 = 444;
uint64_t x262 = 87LLU;
int8_t x263 = INT8_MIN;
uint8_t x272 = UINT8_MAX;
static uint16_t x275 = UINT16_MAX;
int64_t x276 = 11872LL;
volatile uint8_t x281 = 13U;
static int32_t t60 = -1;
static int32_t t61 = -855;
static int64_t x298 = -1LL;
volatile int8_t x304 = -1;
int32_t x305 = INT32_MIN;
static int64_t x308 = -26LL;
int64_t x309 = 2813LL;
int16_t x310 = -9282;
int64_t x317 = -1LL;
volatile int32_t t69 = -435965896;
int64_t x321 = -1LL;
int64_t x323 = -1LL;
static int32_t t72 = 583050;
int32_t t73 = 741785;
volatile int32_t t75 = -1564;
int16_t x346 = INT16_MIN;
uint32_t x354 = UINT32_MAX;
uint32_t x362 = 535558806U;
static int16_t x363 = INT16_MIN;
volatile int32_t t83 = -2296490;
int16_t x381 = INT16_MAX;
int32_t t87 = 297287;
static int16_t x404 = -1;
int16_t x405 = -899;
int8_t x409 = 24;
int8_t x410 = INT8_MAX;
static volatile uint64_t x426 = 227707441LLU;
int32_t t95 = 10551383;
int64_t x439 = -1LL;
uint8_t x443 = 2U;
static int16_t x444 = 3013;
static int16_t x450 = INT16_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -224;

	t0 = (x1<((x2|x3)+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = 1;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t1 = 0;

	t1 = (x9<((x10|x11)+x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x15 = 7;
	uint8_t x16 = UINT8_MAX;

	t2 = (x13<((x14|x15)+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 49;
	uint16_t x18 = 64U;
	uint8_t x19 = 14U;
	int16_t x20 = INT16_MAX;
	volatile int32_t t3 = 564914035;

	t3 = (x17<((x18|x19)+x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MIN;
	static volatile int32_t x23 = INT32_MIN;
	volatile int32_t t4 = -124758;

	t4 = (x21<((x22|x23)+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	uint8_t x26 = 119U;
	static int64_t x27 = 34018060959370465LL;
	uint64_t x28 = 13041104LLU;
	static int32_t t5 = -1051;

	t5 = (x25<((x26|x27)+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 5U;
	uint32_t x30 = UINT32_MAX;
	static uint8_t x31 = 52U;
	int64_t x32 = INT64_MIN;
	int32_t t6 = -11242;

	t6 = (x29<((x30|x31)+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x34 = UINT64_MAX;
	volatile int32_t x35 = INT32_MAX;
	int32_t x36 = INT32_MIN;

	t7 = (x33<((x34|x35)+x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 22241LL;
	uint64_t x38 = 64930592815LLU;
	static volatile uint64_t x39 = UINT64_MAX;
	static int64_t x40 = INT64_MAX;
	int32_t t8 = 1874210;

	t8 = (x37<((x38|x39)+x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	int16_t x42 = -2;
	volatile int16_t x44 = INT16_MAX;
	volatile int32_t t9 = 267;

	t9 = (x41<((x42|x43)+x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	static int8_t x48 = INT8_MIN;

	t10 = (x45<((x46|x47)+x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 5U;
	int32_t t11 = -64903;

	t11 = (x49<((x50|x51)+x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = INT8_MIN;
	int8_t x54 = INT8_MIN;
	int8_t x55 = -2;
	uint64_t x56 = 188819165040LLU;
	static int32_t t12 = -590460;

	t12 = (x53<((x54|x55)+x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x58 = 16U;
	uint8_t x59 = UINT8_MAX;
	uint32_t x60 = 1365U;
	int32_t t13 = 27301938;

	t13 = (x57<((x58|x59)+x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 1;
	volatile int32_t x62 = INT32_MAX;
	volatile int8_t x63 = INT8_MIN;
	volatile int64_t x64 = INT64_MAX;

	t14 = (x61<((x62|x63)+x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = INT32_MIN;
	int16_t x71 = 1;
	uint32_t x72 = 6124607U;
	volatile int32_t t15 = 394255039;

	t15 = (x69<((x70|x71)+x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = 1;
	static int64_t x75 = INT64_MIN;
	int32_t x76 = INT32_MAX;
	int32_t t16 = -4087;

	t16 = (x73<((x74|x75)+x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 851617809U;
	int16_t x78 = INT16_MIN;
	int32_t x80 = -2491;
	volatile int32_t t17 = -58563479;

	t17 = (x77<((x78|x79)+x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 17818U;
	static uint64_t x86 = UINT64_MAX;
	int32_t x87 = -17;
	static uint64_t x88 = UINT64_MAX;
	volatile int32_t t18 = 36852;

	t18 = (x85<((x86|x87)+x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = INT8_MIN;
	uint8_t x90 = UINT8_MAX;
	static uint8_t x91 = 121U;
	uint32_t x92 = 211U;
	static int32_t t19 = -13848;

	t19 = (x89<((x90|x91)+x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1LL;
	uint64_t x94 = 3LLU;
	int64_t x95 = -1LL;
	uint32_t x96 = UINT32_MAX;
	int32_t t20 = -6133373;

	t20 = (x93<((x94|x95)+x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x97 = INT16_MAX;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = INT64_MIN;
	uint8_t x100 = 0U;
	static volatile int32_t t21 = -3210604;

	t21 = (x97<((x98|x99)+x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x101 = -19230046;
	volatile int8_t x102 = 7;
	static int8_t x103 = 2;
	static volatile int16_t x104 = 1;

	t22 = (x101<((x102|x103)+x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = UINT8_MAX;

	t23 = (x105<((x106|x107)+x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = UINT32_MAX;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = INT8_MAX;
	uint64_t x112 = 37407289LLU;
	volatile int32_t t24 = 7;

	t24 = (x109<((x110|x111)+x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 76U;
	uint16_t x114 = 539U;
	int32_t x115 = -1;
	int16_t x116 = 0;
	int32_t t25 = -1;

	t25 = (x113<((x114|x115)+x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = 512799LL;
	int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	uint32_t x120 = 1951U;
	volatile int32_t t26 = 504587;

	t26 = (x117<((x118|x119)+x120));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = UINT8_MAX;
	int8_t x122 = -1;
	static volatile uint32_t x123 = 24478U;
	int32_t x124 = -1;

	t27 = (x121<((x122|x123)+x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MIN;
	static volatile int32_t x126 = -1;
	int8_t x128 = -1;

	t28 = (x125<((x126|x127)+x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	int16_t x130 = -1;
	volatile int32_t t29 = 799425002;

	t29 = (x129<((x130|x131)+x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	volatile uint16_t x139 = UINT16_MAX;
	static volatile int32_t t30 = 22689114;

	t30 = (x137<((x138|x139)+x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = UINT16_MAX;
	int8_t x143 = INT8_MAX;
	int8_t x144 = -2;
	int32_t t31 = -74035;

	t31 = (x141<((x142|x143)+x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MAX;
	int64_t x146 = 1LL;
	static int8_t x147 = -1;
	int64_t x148 = 49LL;
	volatile int32_t t32 = -24;

	t32 = (x145<((x146|x147)+x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = 65;
	static int8_t x150 = -15;
	int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MAX;
	static volatile int32_t t33 = -15483;

	t33 = (x149<((x150|x151)+x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x154 = 1U;
	static int16_t x155 = 646;
	static int64_t x156 = 1800012070038742LL;
	int32_t t34 = 617;

	t34 = (x153<((x154|x155)+x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x158 = 1;
	int64_t x159 = -1LL;
	volatile int32_t x160 = INT32_MIN;
	int32_t t35 = 22;

	t35 = (x157<((x158|x159)+x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -1;
	static volatile uint64_t x166 = 1LLU;
	volatile uint8_t x167 = 2U;
	volatile int8_t x168 = -1;
	volatile int32_t t36 = 505867;

	t36 = (x165<((x166|x167)+x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = 454;
	static uint8_t x170 = 0U;
	static int64_t x171 = INT64_MAX;
	int32_t x172 = -1;
	int32_t t37 = 0;

	t37 = (x169<((x170|x171)+x172));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = 4U;
	int8_t x174 = 0;
	int8_t x175 = -1;
	int32_t t38 = 3;

	t38 = (x173<((x174|x175)+x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = 1363105514U;
	static int8_t x178 = INT8_MIN;
	uint64_t x179 = 94646285486568435LLU;
	int32_t t39 = 0;

	t39 = (x177<((x178|x179)+x180));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x181 = 1;
	int16_t x182 = INT16_MIN;
	volatile int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MAX;
	static volatile int32_t t40 = 0;

	t40 = (x181<((x182|x183)+x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	uint64_t x188 = UINT64_MAX;
	int32_t t41 = 209358163;

	t41 = (x185<((x186|x187)+x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x204 = -1LL;
	static volatile int32_t t42 = -7185;

	t42 = (x201<((x202|x203)+x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = -1319;
	int64_t x206 = 20707783979198293LL;
	int64_t x208 = INT64_MAX;
	volatile int32_t t43 = -24;

	t43 = (x205<((x206|x207)+x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x209 = -1;
	int8_t x210 = -25;
	static int32_t x211 = 748;
	int64_t x212 = -1LL;
	int32_t t44 = 1;

	t44 = (x209<((x210|x211)+x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x214 = INT32_MIN;

	t45 = (x213<((x214|x215)+x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x218 = -1;
	int16_t x219 = -1;
	int16_t x220 = INT16_MAX;

	t46 = (x217<((x218|x219)+x220));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x221 = 31U;
	int8_t x222 = INT8_MIN;
	int64_t x223 = -1LL;

	t47 = (x221<((x222|x223)+x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = INT64_MIN;
	static volatile uint32_t x231 = 13087158U;
	uint32_t x232 = 8279238U;
	volatile int32_t t48 = 4;

	t48 = (x229<((x230|x231)+x232));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MIN;
	uint64_t x234 = UINT64_MAX;
	volatile int32_t x235 = INT32_MAX;
	static uint8_t x236 = 47U;
	volatile int32_t t49 = 8464;

	t49 = (x233<((x234|x235)+x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x237 = 55U;
	uint8_t x238 = 10U;
	volatile uint16_t x240 = 0U;
	int32_t t50 = -16162831;

	t50 = (x237<((x238|x239)+x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = INT32_MIN;
	volatile int32_t t51 = -1;

	t51 = (x241<((x242|x243)+x244));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x245 = 13;
	int8_t x246 = -1;
	int8_t x248 = 3;
	int32_t t52 = -450;

	t52 = (x245<((x246|x247)+x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x249 = INT64_MIN;
	int32_t x250 = 1924433;
	uint64_t x251 = 11341241281LLU;
	static uint64_t x252 = 4737992836028614LLU;

	t53 = (x249<((x250|x251)+x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = -1;
	volatile int32_t x254 = INT32_MAX;
	static int16_t x255 = -17;
	int8_t x256 = INT8_MIN;
	int32_t t54 = 57;

	t54 = (x253<((x254|x255)+x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x261 = 25806U;
	uint16_t x264 = 141U;
	volatile int32_t t55 = 12669389;

	t55 = (x261<((x262|x263)+x264));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = UINT64_MAX;
	int64_t x266 = -3LL;
	int8_t x267 = -4;
	volatile int64_t x268 = -1LL;
	volatile int32_t t56 = -596091197;

	t56 = (x265<((x266|x267)+x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = -1;
	int8_t x271 = INT8_MIN;
	volatile int32_t t57 = -1026;

	t57 = (x269<((x270|x271)+x272));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x273 = 15U;
	volatile int8_t x274 = -1;
	volatile int32_t t58 = 24;

	t58 = (x273<((x274|x275)+x276));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = INT8_MAX;
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MAX;
	static uint64_t x280 = UINT64_MAX;
	int32_t t59 = -2;

	t59 = (x277<((x278|x279)+x280));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x282 = INT64_MIN;
	int8_t x283 = -1;
	uint8_t x284 = 23U;

	t60 = (x281<((x282|x283)+x284));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = INT8_MAX;
	int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MIN;
	int8_t x288 = -1;

	t61 = (x285<((x286|x287)+x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x289 = -518243802939454795LL;
	static int8_t x290 = -1;
	uint16_t x291 = 1563U;
	volatile uint8_t x292 = 8U;
	static int32_t t62 = -14906038;

	t62 = (x289<((x290|x291)+x292));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x293 = INT32_MAX;
	volatile int32_t x294 = INT32_MIN;
	int64_t x295 = -3369LL;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t63 = -1;

	t63 = (x293<((x294|x295)+x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MIN;
	int8_t x299 = -1;
	static uint16_t x300 = UINT16_MAX;
	volatile int32_t t64 = 67388;

	t64 = (x297<((x298|x299)+x300));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x301 = UINT16_MAX;
	volatile uint32_t x302 = 256U;
	int16_t x303 = -1;
	int32_t t65 = -25;

	t65 = (x301<((x302|x303)+x304));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x306 = 6336126U;
	int8_t x307 = -1;
	volatile int32_t t66 = -2801840;

	t66 = (x305<((x306|x307)+x308));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x311 = INT64_MIN;
	uint8_t x312 = UINT8_MAX;
	int32_t t67 = -4677;

	t67 = (x309<((x310|x311)+x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x313 = 1U;
	int16_t x314 = INT16_MAX;
	uint64_t x315 = 22391LLU;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t68 = 28;

	t68 = (x313<((x314|x315)+x316));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x318 = INT16_MAX;
	volatile uint64_t x319 = 1939791814LLU;
	int64_t x320 = INT64_MAX;

	t69 = (x317<((x318|x319)+x320));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x322 = 283LLU;
	int32_t x324 = INT32_MIN;
	int32_t t70 = 24;

	t70 = (x321<((x322|x323)+x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = -1;
	uint16_t x326 = 8654U;
	volatile int32_t x327 = -1;
	uint8_t x328 = 29U;
	volatile int32_t t71 = -1656894;

	t71 = (x325<((x326|x327)+x328));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x329 = UINT16_MAX;
	uint16_t x330 = 1666U;
	uint64_t x331 = 3157047279757316LLU;
	uint16_t x332 = 31356U;

	t72 = (x329<((x330|x331)+x332));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x333 = 1;
	volatile int64_t x334 = INT64_MIN;
	static int16_t x335 = -1;
	int32_t x336 = INT32_MIN;

	t73 = (x333<((x334|x335)+x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = 125U;
	uint8_t x338 = 2U;
	int8_t x339 = INT8_MIN;
	uint8_t x340 = 20U;
	int32_t t74 = 55;

	t74 = (x337<((x338|x339)+x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x341 = INT64_MIN;
	static int16_t x342 = INT16_MAX;
	volatile int64_t x343 = 0LL;
	int64_t x344 = INT64_MIN;

	t75 = (x341<((x342|x343)+x344));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x345 = INT64_MAX;
	int16_t x347 = 2770;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t76 = -7715;

	t76 = (x345<((x346|x347)+x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x353 = INT8_MAX;
	volatile uint8_t x355 = 29U;
	int8_t x356 = INT8_MAX;
	volatile int32_t t77 = 2007707;

	t77 = (x353<((x354|x355)+x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = 14035;
	int8_t x358 = INT8_MIN;
	volatile int16_t x359 = 16122;
	volatile uint8_t x360 = 6U;
	volatile int32_t t78 = -660;

	t78 = (x357<((x358|x359)+x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = INT16_MAX;
	int32_t x364 = INT32_MIN;
	static int32_t t79 = 39140617;

	t79 = (x361<((x362|x363)+x364));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x365 = -1;
	int8_t x366 = INT8_MAX;
	int32_t x367 = -1;
	static int64_t x368 = INT64_MAX;
	volatile int32_t t80 = -6;

	t80 = (x365<((x366|x367)+x368));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x369 = 6704163511402441273LLU;
	int16_t x370 = INT16_MIN;
	static int64_t x371 = INT64_MIN;
	static uint32_t x372 = UINT32_MAX;
	int32_t t81 = 18675193;

	t81 = (x369<((x370|x371)+x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x373 = 6U;
	static int32_t x374 = INT32_MIN;
	int32_t x375 = -642153363;
	int8_t x376 = INT8_MIN;
	volatile int32_t t82 = 23907;

	t82 = (x373<((x374|x375)+x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = UINT64_MAX;
	volatile uint32_t x378 = 318U;
	volatile int64_t x379 = -1LL;
	int32_t x380 = 1366;

	t83 = (x377<((x378|x379)+x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x382 = -892;
	uint16_t x383 = 9394U;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t84 = -6549431;

	t84 = (x381<((x382|x383)+x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x385 = 0U;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = 6U;
	int16_t x388 = INT16_MAX;
	volatile int32_t t85 = 6219;

	t85 = (x385<((x386|x387)+x388));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x393 = INT64_MIN;
	int32_t x394 = -1;
	uint8_t x395 = 24U;
	volatile uint64_t x396 = 24LLU;
	volatile int32_t t86 = 90033;

	t86 = (x393<((x394|x395)+x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = -1;
	uint16_t x398 = UINT16_MAX;
	static uint16_t x399 = 6U;
	static uint32_t x400 = 1408U;

	t87 = (x397<((x398|x399)+x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = INT8_MIN;
	static volatile uint64_t x402 = UINT64_MAX;
	static volatile uint64_t x403 = 36LLU;
	volatile int32_t t88 = 31458171;

	t88 = (x401<((x402|x403)+x404));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x406 = -1LL;
	int16_t x407 = INT16_MIN;
	static uint16_t x408 = UINT16_MAX;
	int32_t t89 = -2;

	t89 = (x405<((x406|x407)+x408));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x411 = INT64_MAX;
	volatile uint64_t x412 = 924LLU;
	static int32_t t90 = 1;

	t90 = (x409<((x410|x411)+x412));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = 1404363121LL;
	int32_t x414 = INT32_MAX;
	uint16_t x415 = 134U;
	uint32_t x416 = 92U;
	volatile int32_t t91 = 63631847;

	t91 = (x413<((x414|x415)+x416));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x417 = 6893030U;
	int16_t x418 = -1;
	static uint8_t x419 = 23U;
	int8_t x420 = INT8_MAX;
	static int32_t t92 = -20187;

	t92 = (x417<((x418|x419)+x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x421 = INT8_MIN;
	int32_t x422 = -1;
	int32_t x423 = -575358;
	static int64_t x424 = -11036299673337908LL;
	volatile int32_t t93 = -5065204;

	t93 = (x421<((x422|x423)+x424));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x425 = 1U;
	int64_t x427 = INT64_MIN;
	uint16_t x428 = 1U;
	int32_t t94 = -50928;

	t94 = (x425<((x426|x427)+x428));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x433 = INT64_MIN;
	int16_t x434 = 1;
	uint64_t x435 = UINT64_MAX;
	static int16_t x436 = INT16_MAX;

	t95 = (x433<((x434|x435)+x436));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x437 = INT64_MIN;
	static int32_t x438 = INT32_MAX;
	static uint64_t x440 = 556534443396LLU;
	volatile int32_t t96 = 423510;

	t96 = (x437<((x438|x439)+x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = INT64_MIN;
	int8_t x442 = -32;
	volatile int32_t t97 = -16675441;

	t97 = (x441<((x442|x443)+x444));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x445 = 19U;
	int8_t x446 = INT8_MIN;
	int32_t x447 = -1;
	volatile uint64_t x448 = 0LLU;
	int32_t t98 = 177;

	t98 = (x445<((x446|x447)+x448));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x449 = 49762U;
	static int32_t x451 = INT32_MIN;
	uint16_t x452 = UINT16_MAX;
	int32_t t99 = 12;

	t99 = (x449<((x450|x451)+x452));

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

