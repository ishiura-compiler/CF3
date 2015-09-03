#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -118303;
int16_t x17 = -1;
int16_t x18 = INT16_MIN;
uint64_t x19 = 2LLU;
volatile int8_t x36 = -1;
static int16_t x42 = 118;
int64_t x43 = INT64_MIN;
volatile int32_t t6 = 9;
int8_t x46 = INT8_MIN;
uint8_t x48 = UINT8_MAX;
volatile int32_t t7 = 20247;
int8_t x53 = 44;
int16_t x54 = INT16_MIN;
static uint64_t x57 = 3076248304128481LLU;
int8_t x59 = -14;
volatile int16_t x62 = -1;
int32_t t11 = 249598;
int8_t x73 = 45;
int16_t x76 = INT16_MIN;
int32_t x83 = -203;
uint32_t x84 = 1729622U;
volatile int32_t t16 = 11;
uint32_t x88 = 1897U;
uint32_t x101 = UINT32_MAX;
volatile uint8_t x104 = 75U;
volatile uint16_t x109 = 1U;
uint32_t x114 = UINT32_MAX;
uint16_t x116 = 5844U;
int32_t t23 = -58347083;
static volatile int32_t t24 = 290091739;
uint8_t x131 = 1U;
static volatile int32_t t26 = -864070;
int8_t x133 = INT8_MIN;
int8_t x135 = INT8_MIN;
int32_t x143 = INT32_MIN;
int16_t x148 = INT16_MIN;
int16_t x157 = -1;
int8_t x159 = -55;
int16_t x187 = INT16_MIN;
int16_t x192 = -1;
volatile int8_t x195 = INT8_MIN;
uint64_t x204 = UINT64_MAX;
int32_t t40 = 12397696;
int64_t x210 = -1449564739230725LL;
volatile uint16_t x213 = UINT16_MAX;
int8_t x214 = -1;
uint64_t x216 = 104986284LLU;
static volatile int32_t t42 = 1;
uint16_t x230 = 0U;
static int64_t x235 = INT64_MIN;
volatile int32_t x236 = INT32_MAX;
volatile int32_t t44 = -87275;
static uint8_t x241 = 23U;
static int64_t x255 = INT64_MIN;
volatile int32_t t48 = 1;
volatile int64_t x260 = -1LL;
int32_t t50 = -30059970;
static int64_t x266 = 6407584872328205LL;
int32_t x267 = -1;
static uint8_t x273 = UINT8_MAX;
static int64_t x275 = 134627LL;
int32_t x277 = 3631921;
static int32_t x280 = 1105;
static uint8_t x283 = UINT8_MAX;
int16_t x289 = INT16_MIN;
uint8_t x292 = 1U;
int16_t x307 = -1;
uint16_t x319 = UINT16_MAX;
volatile int32_t t64 = -117154555;
volatile uint64_t x322 = 155950284657LLU;
int64_t x330 = -1LL;
volatile int32_t t66 = 7563;
volatile int32_t x333 = -1;
static int32_t x342 = -27;
int32_t x344 = INT32_MAX;
uint64_t x350 = UINT64_MAX;
int64_t x351 = INT64_MIN;
uint32_t x368 = 14U;
int32_t t73 = 163;
int32_t x372 = -1;
int16_t x375 = INT16_MAX;
int32_t x376 = INT32_MAX;
volatile int32_t t75 = 7302926;
static volatile int8_t x378 = -12;
static uint64_t x379 = UINT64_MAX;
int64_t x382 = INT64_MIN;
int8_t x383 = INT8_MIN;
uint64_t x384 = 97LLU;
int32_t t77 = -1;
static int16_t x392 = INT16_MIN;
static volatile int32_t x401 = -370646;
int32_t x402 = -1;
volatile int32_t x404 = 580233137;
uint32_t x406 = UINT32_MAX;
int16_t x407 = -262;
int32_t t82 = 9;
int64_t x426 = 5752406LL;
volatile int32_t t83 = 863027;
volatile int32_t t84 = 6;
volatile int32_t t85 = 1027;
static volatile int64_t x438 = 7419950869666LL;
int16_t x446 = INT16_MIN;
int32_t t88 = 2956;
int32_t x449 = 341599;
volatile int8_t x459 = INT8_MAX;
uint32_t x460 = 749U;
static int8_t x461 = INT8_MAX;
volatile uint64_t x462 = 217770212577LLU;
int16_t x465 = -1;
int8_t x466 = INT8_MIN;
int32_t t92 = 1020335801;
uint16_t x471 = 3U;
int8_t x478 = INT8_MIN;
volatile int32_t x482 = -1;
volatile int16_t x484 = 1;
volatile uint32_t x491 = UINT32_MAX;
int32_t t97 = -1;
int16_t x496 = INT16_MIN;
static int16_t x497 = -1;
uint32_t x498 = 721425557U;


void f0(void) {
	uint32_t x9 = 25111U;
	static uint32_t x10 = 21714455U;
	int16_t x11 = 111;
	int16_t x12 = INT16_MAX;
	volatile int32_t t0 = -727328674;

	t0 = (x9<((x10|x11)*x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x13 = INT32_MIN;
	int64_t x14 = -3023307134965LL;
	uint64_t x15 = 192329489790LLU;
	uint8_t x16 = 38U;

	t1 = (x13<((x14|x15)*x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x20 = -1;
	volatile int32_t t2 = -2219330;

	t2 = (x17<((x18|x19)*x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = 12;
	volatile uint64_t x22 = UINT64_MAX;
	int64_t x23 = -1LL;
	int16_t x24 = INT16_MIN;
	volatile int32_t t3 = 3;

	t3 = (x21<((x22|x23)*x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = INT8_MIN;
	static int8_t x34 = -4;
	uint32_t x35 = 116593618U;
	static volatile int32_t t4 = -9219951;

	t4 = (x33<((x34|x35)*x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = 0LL;
	static int8_t x38 = -1;
	uint8_t x39 = 0U;
	volatile int8_t x40 = -1;
	int32_t t5 = 15;

	t5 = (x37<((x38|x39)*x40));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x41 = 2;
	static int8_t x44 = -1;

	t6 = (x41<((x42|x43)*x44));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int16_t x47 = 2;

	t7 = (x45<((x46|x47)*x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = UINT64_MAX;
	uint16_t x50 = 57U;
	int16_t x51 = 195;
	int64_t x52 = -1LL;
	volatile int32_t t8 = -3771855;

	t8 = (x49<((x50|x51)*x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x55 = 70177459U;
	volatile uint32_t x56 = 3U;
	int32_t t9 = 972;

	t9 = (x53<((x54|x55)*x56));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x58 = 211604536337033LLU;
	int32_t x60 = -119967051;
	volatile int32_t t10 = -6758;

	t10 = (x57<((x58|x59)*x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = INT32_MIN;
	static int32_t x63 = INT32_MAX;
	uint8_t x64 = UINT8_MAX;

	t11 = (x61<((x62|x63)*x64));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = 1922;
	uint8_t x66 = 7U;
	static volatile uint32_t x67 = 0U;
	uint16_t x68 = 0U;
	volatile int32_t t12 = 5013549;

	t12 = (x65<((x66|x67)*x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = INT64_MIN;
	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = 2LLU;
	int32_t x72 = INT32_MAX;
	int32_t t13 = 8335530;

	t13 = (x69<((x70|x71)*x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x74 = 10U;
	int8_t x75 = INT8_MAX;
	int32_t t14 = -1728;

	t14 = (x73<((x74|x75)*x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 2085180026105729LLU;
	static uint64_t x78 = 250131124563LLU;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t15 = 21;

	t15 = (x77<((x78|x79)*x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x81 = -47;
	volatile int64_t x82 = INT64_MIN;

	t16 = (x81<((x82|x83)*x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = -1;
	int32_t x86 = INT32_MIN;
	uint64_t x87 = UINT64_MAX;
	volatile int32_t t17 = -30769;

	t17 = (x85<((x86|x87)*x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = 300822;
	int8_t x94 = INT8_MAX;
	int16_t x95 = -1;
	uint64_t x96 = 3954LLU;
	int32_t t18 = -549256578;

	t18 = (x93<((x94|x95)*x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = -6939;
	int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MIN;
	volatile int32_t x100 = INT32_MIN;
	static int32_t t19 = 155670;

	t19 = (x97<((x98|x99)*x100));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x102 = UINT8_MAX;
	int32_t x103 = -1;
	volatile int32_t t20 = -3;

	t20 = (x101<((x102|x103)*x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x105 = -1LL;
	int64_t x106 = INT64_MAX;
	uint64_t x107 = UINT64_MAX;
	static volatile int16_t x108 = -7;
	int32_t t21 = -114043;

	t21 = (x105<((x106|x107)*x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	int32_t x112 = -1;
	int32_t t22 = -16390718;

	t22 = (x109<((x110|x111)*x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = -1;
	int8_t x115 = INT8_MIN;

	t23 = (x113<((x114|x115)*x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = 1U;
	static int16_t x118 = -12;
	uint16_t x119 = 39U;
	int8_t x120 = INT8_MIN;

	t24 = (x117<((x118|x119)*x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 31U;
	volatile uint64_t x122 = UINT64_MAX;
	int8_t x123 = 7;
	int64_t x124 = -3332822763483154LL;
	volatile int32_t t25 = -7;

	t25 = (x121<((x122|x123)*x124));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = -1229LL;
	volatile int64_t x130 = -1LL;
	uint16_t x132 = 5670U;

	t26 = (x129<((x130|x131)*x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x134 = -1;
	static int64_t x136 = -67LL;
	int32_t t27 = 1543301;

	t27 = (x133<((x134|x135)*x136));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -3552;
	uint64_t x138 = 3LLU;
	int32_t x139 = INT32_MIN;
	static int64_t x140 = -1LL;
	static volatile int32_t t28 = 847;

	t28 = (x137<((x138|x139)*x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = INT32_MAX;
	int64_t x142 = INT64_MIN;
	int32_t x144 = 690373;
	volatile int32_t t29 = 4043516;

	t29 = (x141<((x142|x143)*x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = INT8_MIN;
	uint64_t x146 = 226LLU;
	volatile int16_t x147 = 47;
	int32_t t30 = 3644;

	t30 = (x145<((x146|x147)*x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = -1;
	uint16_t x154 = 29U;
	uint16_t x155 = UINT16_MAX;
	uint32_t x156 = 394669418U;
	int32_t t31 = -1;

	t31 = (x153<((x154|x155)*x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x158 = 1U;
	static int8_t x160 = INT8_MIN;
	int32_t t32 = -357536;

	t32 = (x157<((x158|x159)*x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = INT16_MAX;
	int64_t x162 = INT64_MIN;
	int16_t x163 = -22;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t33 = 412129;

	t33 = (x161<((x162|x163)*x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x165 = -3;
	uint8_t x166 = UINT8_MAX;
	static int8_t x167 = -1;
	int64_t x168 = 3034597845618LL;
	int32_t t34 = 23135;

	t34 = (x165<((x166|x167)*x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = INT32_MIN;
	uint16_t x174 = 11U;
	uint64_t x175 = 3515796545318LLU;
	int32_t x176 = -23;
	volatile int32_t t35 = 75717;

	t35 = (x173<((x174|x175)*x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x181 = INT16_MIN;
	uint64_t x182 = 78866303780LLU;
	static int8_t x183 = -1;
	uint32_t x184 = 27944U;
	volatile int32_t t36 = 18839014;

	t36 = (x181<((x182|x183)*x184));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x185 = UINT64_MAX;
	volatile int16_t x186 = -1;
	int8_t x188 = -1;
	int32_t t37 = 48;

	t37 = (x185<((x186|x187)*x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x190 = -24;
	int32_t x191 = -913;
	int32_t t38 = -167746;

	t38 = (x189<((x190|x191)*x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x193 = INT8_MIN;
	static int32_t x194 = INT32_MIN;
	volatile int64_t x196 = 19175LL;
	volatile int32_t t39 = 0;

	t39 = (x193<((x194|x195)*x196));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x201 = 31LL;
	uint8_t x202 = 0U;
	uint64_t x203 = UINT64_MAX;

	t40 = (x201<((x202|x203)*x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = -1;
	volatile uint32_t x211 = 216467U;
	static uint8_t x212 = UINT8_MAX;
	int32_t t41 = -23553568;

	t41 = (x209<((x210|x211)*x212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x215 = INT64_MIN;

	t42 = (x213<((x214|x215)*x216));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x229 = 1825LLU;
	int32_t x231 = -1;
	int8_t x232 = INT8_MAX;
	volatile int32_t t43 = 6;

	t43 = (x229<((x230|x231)*x232));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x233 = INT8_MIN;
	static int16_t x234 = INT16_MIN;

	t44 = (x233<((x234|x235)*x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x242 = INT8_MIN;
	uint8_t x243 = UINT8_MAX;
	int64_t x244 = -27148302LL;
	int32_t t45 = -83;

	t45 = (x241<((x242|x243)*x244));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x245 = INT8_MAX;
	volatile int16_t x246 = -1420;
	uint16_t x247 = 186U;
	uint32_t x248 = 9087360U;
	int32_t t46 = 767;

	t46 = (x245<((x246|x247)*x248));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x249 = INT64_MAX;
	static volatile uint8_t x250 = 38U;
	volatile int64_t x251 = INT64_MAX;
	static volatile int64_t x252 = -1LL;
	volatile int32_t t47 = 1;

	t47 = (x249<((x250|x251)*x252));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x253 = 11U;
	static int16_t x254 = INT16_MAX;
	int8_t x256 = -1;

	t48 = (x253<((x254|x255)*x256));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x257 = 25U;
	static int32_t x258 = INT32_MIN;
	uint16_t x259 = 3530U;
	volatile int32_t t49 = -162236872;

	t49 = (x257<((x258|x259)*x260));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x261 = 9U;
	static int32_t x262 = -67;
	uint64_t x263 = 227629LLU;
	int32_t x264 = INT32_MIN;

	t50 = (x261<((x262|x263)*x264));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x265 = 37U;
	int64_t x268 = -573282311915395524LL;
	volatile int32_t t51 = -1;

	t51 = (x265<((x266|x267)*x268));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x269 = 442U;
	volatile uint32_t x270 = UINT32_MAX;
	int32_t x271 = -1;
	uint32_t x272 = 456U;
	int32_t t52 = -310900;

	t52 = (x269<((x270|x271)*x272));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x274 = INT32_MIN;
	static int8_t x276 = INT8_MAX;
	volatile int32_t t53 = 19933;

	t53 = (x273<((x274|x275)*x276));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x278 = INT32_MIN;
	int8_t x279 = -25;
	static volatile int32_t t54 = 276254;

	t54 = (x277<((x278|x279)*x280));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x281 = 3613206U;
	volatile int32_t x282 = -1879;
	uint32_t x284 = 13U;
	volatile int32_t t55 = -1;

	t55 = (x281<((x282|x283)*x284));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = 128042;
	int8_t x286 = -6;
	int8_t x287 = -1;
	int8_t x288 = 10;
	volatile int32_t t56 = 28086;

	t56 = (x285<((x286|x287)*x288));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x290 = INT32_MIN;
	uint64_t x291 = UINT64_MAX;
	volatile int32_t t57 = -42254;

	t57 = (x289<((x290|x291)*x292));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	static int16_t x295 = -863;
	int16_t x296 = -5669;
	int32_t t58 = 2271604;

	t58 = (x293<((x294|x295)*x296));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x297 = 2;
	static int8_t x298 = INT8_MIN;
	uint64_t x299 = 1925639768176886LLU;
	int8_t x300 = INT8_MIN;
	volatile int32_t t59 = -55248978;

	t59 = (x297<((x298|x299)*x300));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x301 = 337227;
	int64_t x302 = INT64_MAX;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t60 = 228;

	t60 = (x301<((x302|x303)*x304));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x305 = -1LL;
	int8_t x306 = -1;
	uint8_t x308 = 12U;
	int32_t t61 = -25;

	t61 = (x305<((x306|x307)*x308));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x309 = INT8_MAX;
	volatile int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t62 = 1919803;

	t62 = (x309<((x310|x311)*x312));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x313 = -1LL;
	int16_t x314 = INT16_MAX;
	volatile uint16_t x315 = 522U;
	static int64_t x316 = -1LL;
	int32_t t63 = 116839;

	t63 = (x313<((x314|x315)*x316));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x317 = 23547U;
	int32_t x318 = -1;
	static uint16_t x320 = UINT16_MAX;

	t64 = (x317<((x318|x319)*x320));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x321 = UINT16_MAX;
	volatile uint16_t x323 = 4U;
	uint64_t x324 = 131633771LLU;
	volatile int32_t t65 = 197;

	t65 = (x321<((x322|x323)*x324));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x329 = 94648760899228LLU;
	int32_t x331 = 17464;
	static int16_t x332 = INT16_MAX;

	t66 = (x329<((x330|x331)*x332));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x334 = -796;
	volatile int16_t x335 = 5;
	uint8_t x336 = 45U;
	volatile int32_t t67 = 367674330;

	t67 = (x333<((x334|x335)*x336));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x337 = INT64_MAX;
	uint64_t x338 = UINT64_MAX;
	int64_t x339 = INT64_MAX;
	int32_t x340 = 25597;
	volatile int32_t t68 = 179992;

	t68 = (x337<((x338|x339)*x340));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int16_t x343 = -1;
	static int32_t t69 = 11909;

	t69 = (x341<((x342|x343)*x344));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x345 = 635670616LLU;
	volatile int32_t x346 = INT32_MIN;
	static volatile int32_t x347 = INT32_MAX;
	int64_t x348 = -478690173152786595LL;
	static int32_t t70 = -269977;

	t70 = (x345<((x346|x347)*x348));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x349 = 4156717U;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t71 = -59770;

	t71 = (x349<((x350|x351)*x352));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x361 = INT16_MIN;
	int32_t x362 = -12;
	int32_t x363 = 12435;
	int16_t x364 = -1;
	int32_t t72 = 173235;

	t72 = (x361<((x362|x363)*x364));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x365 = 3645063U;
	volatile int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MAX;

	t73 = (x365<((x366|x367)*x368));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x369 = 105437719598LL;
	int8_t x370 = INT8_MIN;
	int16_t x371 = INT16_MAX;
	static volatile int32_t t74 = 264367189;

	t74 = (x369<((x370|x371)*x372));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x373 = 11U;
	volatile uint32_t x374 = 8085054U;

	t75 = (x373<((x374|x375)*x376));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x377 = INT64_MIN;
	int8_t x380 = INT8_MIN;
	int32_t t76 = -71895;

	t76 = (x377<((x378|x379)*x380));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x381 = -44;

	t77 = (x381<((x382|x383)*x384));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x385 = 23;
	uint64_t x386 = UINT64_MAX;
	volatile uint8_t x387 = UINT8_MAX;
	int64_t x388 = -13754426033LL;
	int32_t t78 = 359539942;

	t78 = (x385<((x386|x387)*x388));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x389 = UINT64_MAX;
	uint16_t x390 = 7087U;
	uint16_t x391 = UINT16_MAX;
	int32_t t79 = -48783551;

	t79 = (x389<((x390|x391)*x392));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x393 = 106U;
	uint64_t x394 = UINT64_MAX;
	uint8_t x395 = UINT8_MAX;
	static int16_t x396 = INT16_MAX;
	volatile int32_t t80 = 4531;

	t80 = (x393<((x394|x395)*x396));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x403 = -1;
	int32_t t81 = 3338;

	t81 = (x401<((x402|x403)*x404));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x405 = UINT8_MAX;
	static uint16_t x408 = 27U;

	t82 = (x405<((x406|x407)*x408));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x425 = 41015LLU;
	int64_t x427 = -1LL;
	int16_t x428 = -1;

	t83 = (x425<((x426|x427)*x428));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x429 = 44U;
	int8_t x430 = INT8_MIN;
	int16_t x431 = 203;
	uint8_t x432 = 0U;

	t84 = (x429<((x430|x431)*x432));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x433 = INT16_MIN;
	uint16_t x434 = UINT16_MAX;
	uint32_t x435 = 73U;
	static int8_t x436 = -1;

	t85 = (x433<((x434|x435)*x436));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x437 = -1479;
	int8_t x439 = INT8_MIN;
	uint8_t x440 = UINT8_MAX;
	int32_t t86 = -18;

	t86 = (x437<((x438|x439)*x440));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x441 = -2;
	int64_t x442 = INT64_MIN;
	static uint64_t x443 = UINT64_MAX;
	int32_t x444 = INT32_MIN;
	volatile int32_t t87 = 0;

	t87 = (x441<((x442|x443)*x444));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x445 = 1165540249773229LL;
	static uint32_t x447 = UINT32_MAX;
	uint16_t x448 = UINT16_MAX;

	t88 = (x445<((x446|x447)*x448));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x450 = INT64_MIN;
	uint64_t x451 = 55124092094925LLU;
	int16_t x452 = INT16_MIN;
	int32_t t89 = 126;

	t89 = (x449<((x450|x451)*x452));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = -1;
	volatile int32_t t90 = -52886;

	t90 = (x457<((x458|x459)*x460));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x463 = INT16_MIN;
	volatile int32_t x464 = -1;
	int32_t t91 = -7094;

	t91 = (x461<((x462|x463)*x464));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x467 = 200725151LLU;
	static uint32_t x468 = 10929U;

	t92 = (x465<((x466|x467)*x468));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x469 = 113U;
	int16_t x470 = -1;
	uint16_t x472 = 5U;
	static volatile int32_t t93 = -284;

	t93 = (x469<((x470|x471)*x472));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x477 = -1;
	uint64_t x479 = 583745022991098355LLU;
	int16_t x480 = INT16_MIN;
	static volatile int32_t t94 = 6281;

	t94 = (x477<((x478|x479)*x480));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x481 = INT8_MIN;
	int64_t x483 = 281743LL;
	static int32_t t95 = 462;

	t95 = (x481<((x482|x483)*x484));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x485 = 2;
	static int16_t x486 = 105;
	int8_t x487 = INT8_MAX;
	volatile int32_t x488 = 15545;
	int32_t t96 = -5125;

	t96 = (x485<((x486|x487)*x488));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x489 = 9517U;
	int16_t x490 = -1;
	static int64_t x492 = -1839393929LL;

	t97 = (x489<((x490|x491)*x492));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x493 = INT64_MIN;
	static uint16_t x494 = 401U;
	uint8_t x495 = UINT8_MAX;
	volatile int32_t t98 = -1159162;

	t98 = (x493<((x494|x495)*x496));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x499 = -1LL;
	int32_t x500 = -1;
	static volatile int32_t t99 = 41281;

	t99 = (x497<((x498|x499)*x500));

	if (t99 != 1) { NG(); } else { ; }
	
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

