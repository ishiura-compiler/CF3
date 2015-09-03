#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
int64_t t0 = -1225730LL;
volatile int8_t x21 = -14;
static int8_t x28 = INT8_MIN;
int64_t x32 = INT64_MAX;
int32_t x33 = INT32_MIN;
int64_t x42 = INT64_MAX;
uint8_t x53 = UINT8_MAX;
int8_t x59 = 0;
uint32_t t10 = 11U;
static uint64_t x62 = 29480289203LLU;
uint8_t x66 = 0U;
static volatile uint8_t x67 = UINT8_MAX;
uint64_t x73 = 134807LLU;
uint64_t x75 = 5233415499918LLU;
int32_t x76 = -1;
volatile uint64_t t13 = 431074LLU;
int16_t x79 = -1;
uint16_t x80 = UINT16_MAX;
int32_t x87 = -923088574;
uint16_t x88 = 1944U;
static int16_t x90 = INT16_MIN;
volatile uint64_t x92 = 1410330247291080627LLU;
int8_t x102 = INT8_MIN;
uint64_t x106 = UINT64_MAX;
int32_t x108 = -1;
volatile int8_t x115 = INT8_MAX;
volatile uint8_t x122 = 13U;
static int8_t x124 = INT8_MAX;
int32_t x130 = -1;
uint32_t x133 = 1U;
static volatile uint64_t x152 = UINT64_MAX;
int8_t x154 = -23;
uint32_t t27 = 5028U;
uint64_t x158 = 146507156786LLU;
uint64_t t30 = 62250259LLU;
int16_t x172 = INT16_MIN;
volatile uint32_t x189 = 3U;
int8_t x198 = -2;
uint8_t x209 = UINT8_MAX;
int32_t x210 = -129;
int8_t x231 = INT8_MAX;
int32_t x237 = 1;
int64_t x248 = -1LL;
volatile int8_t x257 = -7;
uint16_t x260 = 1U;
int16_t x281 = INT16_MAX;
int8_t x284 = INT8_MAX;
int32_t t50 = -23301;
volatile int16_t x301 = -465;
int64_t x309 = -1LL;
int32_t x310 = -1;
int64_t x329 = -1LL;
uint32_t x331 = UINT32_MAX;
uint16_t x335 = 192U;
int64_t x339 = 263686670840958LL;
static uint64_t x341 = UINT64_MAX;
int16_t x349 = 26;
volatile int32_t x352 = -58718008;
volatile int32_t t62 = -176453915;
uint16_t x367 = 5U;
static uint64_t t64 = 13LLU;
uint64_t x369 = 48LLU;
volatile int8_t x390 = -1;
static uint16_t x393 = UINT16_MAX;
int64_t t69 = 12058LL;
static int64_t x412 = INT64_MIN;
int32_t t71 = 15350;
static volatile uint16_t x423 = 6U;
int16_t x424 = INT16_MIN;
uint64_t t75 = 16503LLU;
uint32_t x447 = 851809U;
volatile int32_t x452 = INT32_MAX;
int32_t x460 = INT32_MIN;
volatile uint64_t t80 = 6LLU;
int16_t x474 = -1;
int16_t x475 = INT16_MIN;
uint64_t t82 = 1381059148LLU;
volatile int32_t x477 = 10496;
volatile int16_t x481 = INT16_MIN;
int16_t x487 = 493;
static int8_t x488 = 3;
int32_t t85 = 10016;
volatile uint64_t t86 = 343290639LLU;
uint64_t x497 = 19055689LLU;
volatile uint64_t t89 = 7LLU;
static uint16_t x514 = UINT16_MAX;
volatile uint64_t t91 = 23010LLU;
volatile int32_t x525 = -1;
int32_t x528 = 1;
int16_t x549 = INT16_MIN;
volatile int32_t t98 = -1477446;
int64_t x556 = -1LL;


void f0(void) {
	int8_t x1 = -1;
	int64_t x2 = 14185LL;
	volatile uint16_t x3 = 1U;

	t0 = ((x1*x2)&(x3-x4));

	if (t0 != 129LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 21132;
	static uint16_t x6 = 26031U;
	static int8_t x7 = INT8_MIN;
	int64_t x8 = -1LL;
	static volatile int64_t t1 = 463581297LL;

	t1 = ((x5*x6)&(x7-x8));

	if (t1 != 550087040LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x22 = 4U;
	uint16_t x23 = UINT16_MAX;
	static volatile int8_t x24 = -25;
	uint32_t t2 = 1241U;

	t2 = ((x21*x22)&(x23-x24));

	if (t2 != 65544U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x25 = 42U;
	int8_t x26 = INT8_MAX;
	static volatile uint8_t x27 = UINT8_MAX;
	volatile int32_t t3 = 9;

	t3 = ((x25*x26)&(x27-x28));

	if (t3 != 86) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = 8158;
	uint8_t x30 = 57U;
	volatile int32_t x31 = -1;
	int64_t t4 = 121LL;

	t4 = ((x29*x30)&(x31-x32));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x34 = 686646561985740878LLU;
	volatile uint16_t x35 = 15U;
	uint32_t x36 = 103U;
	uint64_t t5 = 19171567636725999LLU;

	t5 = ((x33*x34)&(x35-x36));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -1;
	int16_t x38 = INT16_MIN;
	volatile int32_t x39 = -479034;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t6 = 150244;

	t6 = ((x37*x38)&(x39-x40));

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = 1;
	int16_t x43 = -64;
	int8_t x44 = INT8_MIN;
	volatile int64_t t7 = 140LL;

	t7 = ((x41*x42)&(x43-x44));

	if (t7 != 64LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -1;
	uint64_t x46 = 11262809LLU;
	int64_t x47 = -1LL;
	uint8_t x48 = 63U;
	static volatile uint64_t t8 = 843620079LLU;

	t8 = ((x45*x46)&(x47-x48));

	if (t8 != 18446744073698288768LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x54 = INT8_MIN;
	uint32_t x55 = UINT32_MAX;
	uint16_t x56 = UINT16_MAX;
	volatile uint32_t t9 = 447U;

	t9 = ((x53*x54)&(x55-x56));

	if (t9 != 4294901760U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = -1;
	uint32_t x58 = 3U;
	int8_t x60 = INT8_MIN;

	t10 = ((x57*x58)&(x59-x60));

	if (t10 != 128U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x61 = 1U;
	int64_t x63 = 304029LL;
	volatile uint16_t x64 = 3U;
	static uint64_t t11 = 23558697632LLU;

	t11 = ((x61*x62)&(x63-x64));

	if (t11 != 33682LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x65 = 20;
	uint16_t x68 = UINT16_MAX;
	int32_t t12 = 94;

	t12 = ((x65*x66)&(x67-x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x74 = 15U;

	t13 = ((x73*x74)&(x75-x76));

	if (t13 != 1970313LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x77 = 28357706240048LLU;
	int64_t x78 = 1094922297332503640LL;
	uint64_t t14 = 17883371005130683LLU;

	t14 = ((x77*x78)&(x79-x80));

	if (t14 != 9710093058711420928LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = 25;
	static int32_t t15 = -1;

	t15 = ((x85*x86)&(x87-x88));

	if (t15 != -923631616) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x89 = -1;
	volatile int8_t x91 = -1;
	static volatile uint64_t t16 = 2082523940762430LLU;

	t16 = ((x89*x90)&(x91-x92));

	if (t16 != 32768LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x101 = 291348LLU;
	uint16_t x103 = 1095U;
	int32_t x104 = -1650276;
	uint64_t t17 = 11952772591LLU;

	t17 = ((x101*x102)&(x103-x104));

	if (t17 != 12800LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x105 = INT32_MAX;
	static int64_t x107 = INT64_MIN;
	uint64_t t18 = 792999068599LLU;

	t18 = ((x105*x106)&(x107-x108));

	if (t18 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = INT16_MIN;
	uint32_t x110 = 117U;
	volatile uint64_t x111 = UINT64_MAX;
	int32_t x112 = INT32_MAX;
	uint64_t t19 = 9540758LLU;

	t19 = ((x109*x110)&(x111-x112));

	if (t19 != 2147483648LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = -2424LL;
	volatile int32_t x114 = -572716332;
	uint8_t x116 = 2U;
	volatile int64_t t20 = 152143LL;

	t20 = ((x113*x114)&(x115-x116));

	if (t20 != 32LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = 48478170;
	int64_t x123 = -6587816602057LL;
	static int64_t t21 = -1927774352964417983LL;

	t21 = ((x121*x122)&(x123-x124));

	if (t21 != 629150736LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x125 = -1LL;
	int16_t x126 = INT16_MAX;
	int32_t x127 = 99992;
	uint16_t x128 = UINT16_MAX;
	int64_t t22 = -53354811150129LL;

	t22 = ((x125*x126)&(x127-x128));

	if (t22 != 32769LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x129 = INT16_MIN;
	int16_t x131 = -4362;
	static volatile uint64_t x132 = 17456065269895LLU;
	uint64_t t23 = 3789LLU;

	t23 = ((x129*x130)&(x131-x132));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x134 = 1U;
	volatile int16_t x135 = INT16_MIN;
	static int8_t x136 = -3;
	uint32_t t24 = 61299U;

	t24 = ((x133*x134)&(x135-x136));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = INT8_MIN;
	uint64_t x138 = UINT64_MAX;
	int8_t x139 = INT8_MIN;
	static int16_t x140 = INT16_MAX;
	volatile uint64_t t25 = 24574029LLU;

	t25 = ((x137*x138)&(x139-x140));

	if (t25 != 128LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = INT16_MIN;
	volatile int16_t x150 = INT16_MAX;
	uint8_t x151 = UINT8_MAX;
	static volatile uint64_t t26 = 499LLU;

	t26 = ((x149*x150)&(x151-x152));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = 11;
	uint32_t x155 = UINT32_MAX;
	static int8_t x156 = INT8_MIN;

	t27 = ((x153*x154)&(x155-x156));

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x157 = INT16_MIN;
	uint16_t x159 = UINT16_MAX;
	static uint8_t x160 = 5U;
	volatile uint64_t t28 = 534415000414776456LLU;

	t28 = ((x157*x158)&(x159-x160));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x161 = 10034LL;
	int64_t x162 = 41392LL;
	static volatile int64_t x163 = -1LL;
	volatile int8_t x164 = 0;
	int64_t t29 = 42446438653206LL;

	t29 = ((x161*x162)&(x163-x164));

	if (t29 != 415327328LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x165 = UINT32_MAX;
	uint16_t x166 = UINT16_MAX;
	uint64_t x167 = UINT64_MAX;
	static volatile int16_t x168 = -470;

	t30 = ((x165*x166)&(x167-x168));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = INT32_MAX;
	static int16_t x170 = -1;
	volatile uint8_t x171 = 52U;
	volatile int32_t t31 = -980765526;

	t31 = ((x169*x170)&(x171-x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x173 = 45U;
	int8_t x174 = INT8_MAX;
	volatile uint64_t x175 = 10648684493657407LLU;
	uint64_t x176 = 580719832408612682LLU;
	uint64_t t32 = 220704LLU;

	t32 = ((x173*x174)&(x175-x176));

	if (t32 != 5201LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x181 = 3521634683649630286LL;
	uint64_t x182 = 1249281342328487LLU;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MIN;
	uint64_t t33 = 527LLU;

	t33 = ((x181*x182)&(x183-x184));

	if (t33 != 22144LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x190 = 8U;
	static volatile uint32_t x191 = 10450221U;
	int32_t x192 = INT32_MIN;
	uint32_t t34 = 452U;

	t34 = ((x189*x190)&(x191-x192));

	if (t34 != 8U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x197 = UINT64_MAX;
	static int8_t x199 = 11;
	volatile int8_t x200 = INT8_MIN;
	volatile uint64_t t35 = 224LLU;

	t35 = ((x197*x198)&(x199-x200));

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x211 = -5LL;
	int16_t x212 = INT16_MIN;
	volatile int64_t t36 = 0LL;

	t36 = ((x209*x210)&(x211-x212));

	if (t36 != 32641LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x221 = 288258765351182LLU;
	uint32_t x222 = 798913U;
	int16_t x223 = INT16_MAX;
	uint32_t x224 = 358564746U;
	volatile uint64_t t37 = 1507LLU;

	t37 = ((x221*x222)&(x223-x224));

	if (t37 != 1216417796LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x229 = -1628969LL;
	uint16_t x230 = UINT16_MAX;
	int16_t x232 = INT16_MIN;
	static int64_t t38 = -6204080533605LL;

	t38 = ((x229*x230)&(x231-x232));

	if (t38 != 32809LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = 3;
	int8_t x235 = -2;
	volatile int16_t x236 = 14366;
	int32_t t39 = -425;

	t39 = ((x233*x234)&(x235-x236));

	if (t39 != -98304) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x238 = -1LL;
	int32_t x239 = 0;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t40 = -956024672084317031LL;

	t40 = ((x237*x238)&(x239-x240));

	if (t40 != -65535LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x245 = 10;
	uint8_t x246 = 13U;
	uint64_t x247 = 1LLU;
	uint64_t t41 = 64730035181LLU;

	t41 = ((x245*x246)&(x247-x248));

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x249 = 0U;
	uint16_t x250 = 4016U;
	int32_t x251 = -1;
	int32_t x252 = 3444;
	static int32_t t42 = 14935;

	t42 = ((x249*x250)&(x251-x252));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x253 = 0U;
	int16_t x254 = -1;
	int8_t x255 = -31;
	static volatile uint64_t x256 = 17385549330684LLU;
	uint64_t t43 = 346563450102220LLU;

	t43 = ((x253*x254)&(x255-x256));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x258 = UINT64_MAX;
	volatile int64_t x259 = INT64_MAX;
	volatile uint64_t t44 = 7948544849LLU;

	t44 = ((x257*x258)&(x259-x260));

	if (t44 != 6LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x261 = INT32_MIN;
	int64_t x262 = -198041LL;
	int8_t x263 = INT8_MIN;
	int16_t x264 = -1;
	volatile int64_t t45 = 26361533764LL;

	t45 = ((x261*x262)&(x263-x264));

	if (t45 != 425289809133568LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x265 = -1LL;
	static uint32_t x266 = 1719631U;
	uint16_t x267 = 15586U;
	static uint64_t x268 = 23990575650936LLU;
	volatile uint64_t t46 = 31866646753349LLU;

	t46 = ((x265*x266)&(x267-x268));

	if (t46 != 18446720083133775904LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x269 = -29;
	int16_t x270 = INT16_MIN;
	static int8_t x271 = INT8_MIN;
	volatile int32_t x272 = -1;
	int32_t t47 = -54896340;

	t47 = ((x269*x270)&(x271-x272));

	if (t47 != 950272) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x277 = -1;
	int8_t x278 = INT8_MAX;
	volatile int32_t x279 = -1;
	int64_t x280 = INT64_MIN;
	volatile int64_t t48 = 7824696LL;

	t48 = ((x277*x278)&(x279-x280));

	if (t48 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x282 = UINT64_MAX;
	static volatile int8_t x283 = -1;
	static volatile uint64_t t49 = 191LLU;

	t49 = ((x281*x282)&(x283-x284));

	if (t49 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x285 = 1709U;
	volatile int16_t x286 = INT16_MIN;
	int32_t x287 = -1;
	int16_t x288 = INT16_MIN;

	t50 = ((x285*x286)&(x287-x288));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x289 = INT16_MAX;
	int64_t x290 = 18LL;
	int8_t x291 = -1;
	int8_t x292 = -1;
	int64_t t51 = 85022717786787LL;

	t51 = ((x289*x290)&(x291-x292));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x297 = 1U;
	static volatile int32_t x298 = -1;
	static volatile uint32_t x299 = UINT32_MAX;
	volatile int64_t x300 = -76211690019LL;
	int64_t t52 = 45LL;

	t52 = ((x297*x298)&(x299-x300));

	if (t52 != 80506657314LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x302 = 94;
	int64_t x303 = -1LL;
	volatile uint64_t x304 = UINT64_MAX;
	uint64_t t53 = 116LLU;

	t53 = ((x301*x302)&(x303-x304));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x311 = 8663U;
	int8_t x312 = -1;
	int64_t t54 = -118532LL;

	t54 = ((x309*x310)&(x311-x312));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = -1;
	int32_t x319 = 77853425;
	int8_t x320 = -3;
	volatile int32_t t55 = 103127290;

	t55 = ((x317*x318)&(x319-x320));

	if (t55 != 77791232) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x321 = -49824357;
	uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t56 = 16940867843LLU;

	t56 = ((x321*x322)&(x323-x324));

	if (t56 != 16896LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x330 = UINT32_MAX;
	uint16_t x332 = 6753U;
	int64_t t57 = 129774LL;

	t57 = ((x329*x330)&(x331-x332));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x333 = UINT64_MAX;
	uint8_t x334 = UINT8_MAX;
	uint8_t x336 = 0U;
	volatile uint64_t t58 = 25115967185482LLU;

	t58 = ((x333*x334)&(x335-x336));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x337 = 144LLU;
	int64_t x338 = -29280081464LL;
	int64_t x340 = -1LL;
	uint64_t t59 = 25670989697778LLU;

	t59 = ((x337*x338)&(x339-x340));

	if (t59 != 259494509051904LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x342 = INT32_MIN;
	int32_t x343 = 12;
	int16_t x344 = -2;
	static uint64_t t60 = 114LLU;

	t60 = ((x341*x342)&(x343-x344));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	volatile uint64_t t61 = 112425481955734LLU;

	t61 = ((x349*x350)&(x351-x352));

	if (t61 != 58717990LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x357 = 0U;
	uint8_t x358 = UINT8_MAX;
	static int16_t x359 = -1;
	int8_t x360 = -62;

	t62 = ((x357*x358)&(x359-x360));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x361 = 10U;
	int32_t x362 = -4193;
	uint32_t x363 = UINT32_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t63 = 342471556042891LLU;

	t63 = ((x361*x362)&(x363-x364));

	if (t63 != 4294967296LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x365 = INT32_MAX;
	volatile int16_t x366 = -1;
	uint64_t x368 = 42087280LLU;

	t64 = ((x365*x366)&(x367-x368));

	if (t64 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	static volatile uint64_t t65 = 65156LLU;

	t65 = ((x369*x370)&(x371-x372));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x373 = 129716760986745171LL;
	int8_t x374 = 1;
	int64_t x375 = -1179515310LL;
	int32_t x376 = INT32_MIN;
	volatile int64_t t66 = -63203304930866LL;

	t66 = ((x373*x374)&(x375-x376));

	if (t66 != 805437522LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x377 = -1LL;
	static int64_t x378 = 24LL;
	volatile uint32_t x379 = 36024U;
	static int32_t x380 = 27323254;
	int64_t t67 = -4319441104855LL;

	t67 = ((x377*x378)&(x379-x380));

	if (t67 != 4267680064LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x389 = INT32_MAX;
	int8_t x391 = INT8_MAX;
	uint64_t x392 = UINT64_MAX;
	static volatile uint64_t t68 = 2LLU;

	t68 = ((x389*x390)&(x391-x392));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x394 = 103U;
	volatile int64_t x395 = 741049LL;
	volatile uint16_t x396 = 73U;

	t69 = ((x393*x394)&(x395-x396));

	if (t69 != 151056LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x409 = UINT64_MAX;
	int32_t x410 = 1;
	volatile int64_t x411 = -1LL;
	volatile uint64_t t70 = 280260268LLU;

	t70 = ((x409*x410)&(x411-x412));

	if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x417 = INT16_MAX;
	static int16_t x418 = INT16_MAX;
	volatile int32_t x419 = -1;
	int32_t x420 = INT32_MIN;

	t71 = ((x417*x418)&(x419-x420));

	if (t71 != 1073676289) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x421 = 28948263LLU;
	static volatile int64_t x422 = -612417206884LL;
	static volatile uint64_t t72 = 3831455937404699102LLU;

	t72 = ((x421*x422)&(x423-x424));

	if (t72 != 4LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x425 = 26U;
	uint32_t x426 = UINT32_MAX;
	int64_t x427 = 17LL;
	int32_t x428 = -193;
	volatile int64_t t73 = -1971613LL;

	t73 = ((x425*x426)&(x427-x428));

	if (t73 != 194LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x433 = 146797115U;
	int32_t x434 = 29873342;
	volatile int64_t x435 = 940LL;
	static uint64_t x436 = 0LLU;
	volatile uint64_t t74 = 240297062996195LLU;

	t74 = ((x433*x434)&(x435-x436));

	if (t74 != 904LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x441 = 63U;
	int16_t x442 = INT16_MAX;
	volatile uint64_t x443 = 536619045LLU;
	int64_t x444 = -1016948858LL;

	t75 = ((x441*x442)&(x443-x444));

	if (t75 != 1642625LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x445 = UINT16_MAX;
	uint32_t x446 = 1005798667U;
	uint16_t x448 = 12U;
	uint32_t t76 = 42139U;

	t76 = ((x445*x446)&(x447-x448));

	if (t76 != 309845U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x449 = -1;
	int32_t x450 = INT32_MAX;
	static int32_t x451 = 121324104;
	static int32_t t77 = -3;

	t77 = ((x449*x450)&(x451-x452));

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x457 = UINT64_MAX;
	uint32_t x458 = UINT32_MAX;
	int16_t x459 = -115;
	volatile uint64_t t78 = 1395396156LLU;

	t78 = ((x457*x458)&(x459-x460));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x461 = INT64_MAX;
	uint8_t x462 = 1U;
	uint64_t x463 = 3LLU;
	int8_t x464 = INT8_MIN;
	static uint64_t t79 = 57083LLU;

	t79 = ((x461*x462)&(x463-x464));

	if (t79 != 131LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x465 = 227857LLU;
	volatile uint16_t x466 = UINT16_MAX;
	static int8_t x467 = INT8_MIN;
	uint8_t x468 = UINT8_MAX;

	t80 = ((x465*x466)&(x467-x468));

	if (t80 != 14932608129LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x469 = 6617LL;
	uint32_t x470 = 5U;
	static int8_t x471 = -5;
	static int64_t x472 = INT64_MIN;
	volatile int64_t t81 = -3741812LL;

	t81 = ((x469*x470)&(x471-x472));

	if (t81 != 33081LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x473 = -1021;
	static uint64_t x476 = 66000958218171937LLU;

	t82 = ((x473*x474)&(x475-x476));

	if (t82 != 477LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x478 = 0U;
	static uint8_t x479 = 1U;
	volatile uint8_t x480 = UINT8_MAX;
	volatile int32_t t83 = 2346892;

	t83 = ((x477*x478)&(x479-x480));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x482 = UINT64_MAX;
	volatile uint64_t x483 = UINT64_MAX;
	static int32_t x484 = INT32_MAX;
	volatile uint64_t t84 = 160LLU;

	t84 = ((x481*x482)&(x483-x484));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x485 = 13599U;
	static int32_t x486 = -1;

	t85 = ((x485*x486)&(x487-x488));

	if (t85 != 224) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x493 = 4892367260392004673LLU;
	int8_t x494 = INT8_MAX;
	int32_t x495 = -2;
	uint32_t x496 = 347736U;

	t86 = ((x493*x494)&(x495-x496));

	if (t86 != 4209147942LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x498 = UINT32_MAX;
	volatile int8_t x499 = INT8_MAX;
	int8_t x500 = INT8_MIN;
	volatile uint64_t t87 = 3LLU;

	t87 = ((x497*x498)&(x499-x500));

	if (t87 != 183LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x505 = -1;
	volatile int64_t x506 = -1LL;
	int8_t x507 = -1;
	int32_t x508 = 25;
	int64_t t88 = 2680263LL;

	t88 = ((x505*x506)&(x507-x508));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x509 = UINT8_MAX;
	uint64_t x510 = 27229640554481LLU;
	static volatile int32_t x511 = INT32_MAX;
	volatile int16_t x512 = 0;

	t89 = ((x509*x510)&(x511-x512));

	if (t89 != 678066447LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x513 = 0U;
	int8_t x515 = -5;
	volatile int8_t x516 = -1;
	int32_t t90 = -14;

	t90 = ((x513*x514)&(x515-x516));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x517 = 6;
	int8_t x518 = INT8_MAX;
	volatile uint64_t x519 = UINT64_MAX;
	static int16_t x520 = 5;

	t91 = ((x517*x518)&(x519-x520));

	if (t91 != 762LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x526 = 0U;
	uint8_t x527 = 14U;
	uint32_t t92 = 284U;

	t92 = ((x525*x526)&(x527-x528));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x529 = 8LLU;
	uint64_t x530 = 18LLU;
	int16_t x531 = -1;
	int32_t x532 = INT32_MIN;
	volatile uint64_t t93 = 1671922181LLU;

	t93 = ((x529*x530)&(x531-x532));

	if (t93 != 144LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x533 = 319567582349420456LLU;
	volatile uint64_t x534 = 2030406LLU;
	volatile int32_t x535 = INT32_MIN;
	static volatile int32_t x536 = INT32_MIN;
	volatile uint64_t t94 = 2182778LLU;

	t94 = ((x533*x534)&(x535-x536));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x537 = INT16_MIN;
	int16_t x538 = INT16_MAX;
	static int8_t x539 = -1;
	int8_t x540 = -8;
	static int32_t t95 = 161707405;

	t95 = ((x537*x538)&(x539-x540));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x541 = 0U;
	int16_t x542 = INT16_MIN;
	volatile int32_t x543 = 3;
	int64_t x544 = 1LL;
	int64_t t96 = -14730411667074LL;

	t96 = ((x541*x542)&(x543-x544));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x545 = 2U;
	volatile uint32_t x546 = 5U;
	int32_t x547 = INT32_MIN;
	volatile int8_t x548 = -1;
	volatile uint32_t t97 = 69U;

	t97 = ((x545*x546)&(x547-x548));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x550 = 49;
	uint16_t x551 = 3U;
	int8_t x552 = 0;

	t98 = ((x549*x550)&(x551-x552));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x553 = -1LL;
	int32_t x554 = 2646124;
	int64_t x555 = INT64_MIN;
	int64_t t99 = INT64_MIN;

	t99 = ((x553*x554)&(x555-x556));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

