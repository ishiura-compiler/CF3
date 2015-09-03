#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = -1;
volatile int8_t x7 = INT8_MIN;
volatile uint16_t x22 = UINT16_MAX;
uint32_t x23 = UINT32_MAX;
volatile uint32_t t4 = 11U;
uint32_t x32 = UINT32_MAX;
int64_t t5 = 2LL;
volatile int8_t x35 = 1;
static uint32_t x47 = UINT32_MAX;
uint32_t t7 = 25273882U;
int16_t x50 = INT16_MAX;
volatile int64_t t8 = -13387112467874876LL;
static int32_t x57 = INT32_MIN;
int32_t x63 = INT32_MIN;
volatile uint8_t x65 = UINT8_MAX;
uint64_t x70 = 20997393893LLU;
int16_t x71 = INT16_MAX;
uint8_t x87 = 7U;
volatile int32_t t15 = -280;
uint32_t x89 = UINT32_MAX;
int64_t x92 = 22936695484LL;
volatile uint64_t x100 = 30937429268859LLU;
static uint8_t x102 = UINT8_MAX;
int8_t x108 = INT8_MIN;
volatile int32_t x112 = INT32_MAX;
uint32_t x120 = 4008488U;
static int64_t x121 = -35549333324373842LL;
uint16_t x124 = 30U;
volatile int16_t x129 = INT16_MIN;
static int32_t x133 = INT32_MIN;
static volatile int32_t x134 = INT32_MIN;
volatile uint64_t x140 = 809181LLU;
int64_t t27 = -67184167812LL;
static uint16_t x153 = 501U;
int64_t x159 = -1LL;
int8_t x168 = 1;
uint64_t t32 = 562774896614642770LLU;
static int64_t x169 = INT64_MAX;
static int64_t x170 = -1LL;
uint64_t x178 = 3LLU;
static uint32_t x189 = 10U;
uint16_t x194 = 1U;
uint32_t x199 = UINT32_MAX;
static int8_t x212 = INT8_MIN;
int32_t x222 = INT32_MIN;
volatile int32_t t43 = -61;
int32_t x236 = -1;
int8_t x242 = -29;
volatile int32_t x244 = INT32_MAX;
uint32_t x253 = UINT32_MAX;
static volatile uint32_t x254 = UINT32_MAX;
int16_t x256 = -1;
int16_t x261 = INT16_MIN;
int32_t x263 = -1;
int8_t x272 = 9;
uint8_t x275 = 5U;
int32_t x276 = -359;
int32_t x287 = -1;
static uint16_t x289 = 12806U;
uint8_t x291 = UINT8_MAX;
volatile int16_t x301 = 1595;
volatile uint32_t x302 = 51U;
int64_t x303 = INT64_MIN;
volatile uint64_t t60 = 1748044792512LLU;
uint32_t x313 = UINT32_MAX;
volatile uint8_t x322 = 62U;
int32_t x324 = INT32_MIN;
int32_t x328 = 331518;
uint64_t t63 = 1680946254876LLU;
int16_t x329 = 2;
int16_t x334 = INT16_MAX;
int16_t x335 = INT16_MAX;
volatile int32_t t65 = -579;
int64_t x340 = 6749543326LL;
volatile int8_t x349 = -11;
volatile uint16_t x352 = UINT16_MAX;
volatile uint64_t t69 = 0LLU;
int8_t x356 = INT8_MIN;
static uint8_t x363 = 1U;
uint64_t t72 = 20550LLU;
int16_t x366 = INT16_MIN;
static int64_t x369 = -226923293644LL;
uint64_t x374 = 1331LLU;
uint32_t x376 = UINT32_MAX;
uint64_t t75 = 1801855755038409LLU;
int16_t x377 = INT16_MAX;
volatile uint32_t x379 = 127244U;
int64_t x382 = INT64_MIN;
static int64_t x387 = INT64_MIN;
volatile uint64_t t79 = 12LLU;
static uint8_t x398 = UINT8_MAX;
int8_t x401 = 6;
int32_t x404 = INT32_MAX;
int32_t x405 = INT32_MAX;
int32_t x408 = INT32_MIN;
volatile int64_t t82 = -3805824LL;
int32_t x416 = INT32_MIN;
static volatile uint8_t x418 = 1U;
static volatile uint32_t x419 = 1704U;
uint16_t x420 = UINT16_MAX;
int64_t x421 = -13689930LL;
static uint32_t x429 = UINT32_MAX;
uint16_t x432 = 3835U;
volatile int64_t x438 = -1LL;
int8_t x440 = INT8_MAX;
int64_t x443 = 293LL;
volatile int8_t x445 = INT8_MIN;
static int8_t x454 = 8;
static uint16_t x455 = UINT16_MAX;
static int8_t x456 = INT8_MIN;
uint8_t x460 = 4U;
volatile int32_t x461 = INT32_MIN;
static int8_t x463 = -1;
uint16_t x467 = 10U;
int16_t x473 = INT16_MAX;
int16_t x476 = -1;
volatile int16_t x477 = 1;
int16_t x486 = -1;
int8_t x488 = INT8_MIN;


void f0(void) {
	static uint32_t x6 = 63400719U;
	volatile int64_t x8 = INT64_MAX;
	volatile int64_t t0 = -573536195683251607LL;

	t0 = ((x5+(x6+x7))/x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x9 = 2U;
	uint16_t x10 = UINT16_MAX;
	uint32_t x11 = UINT32_MAX;
	int32_t x12 = -1;
	uint32_t t1 = 515U;

	t1 = ((x9+(x10+x11))/x12);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MIN;
	static int64_t x14 = -1LL;
	uint8_t x15 = 1U;
	int8_t x16 = -1;
	int64_t t2 = 891158855LL;

	t2 = ((x13+(x14+x15))/x16);

	if (t2 != 32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	uint64_t x18 = 1722070707651LLU;
	uint64_t x19 = 835685LLU;
	uint64_t x20 = 132622LLU;
	static volatile uint64_t t3 = 3794454LLU;

	t3 = ((x17+(x18+x19))/x20);

	if (t3 != 13017195LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	int8_t x24 = -3;

	t4 = ((x21+(x22+x23))/x24);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x29 = INT64_MAX;
	uint8_t x30 = UINT8_MAX;
	int32_t x31 = INT32_MIN;

	t5 = ((x29+(x30+x31))/x32);

	if (t5 != 2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = -1;
	uint32_t x34 = 105446U;
	int64_t x36 = -114440864001LL;
	int64_t t6 = -59312960523LL;

	t6 = ((x33+(x34+x35))/x36);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x45 = INT16_MIN;
	volatile int32_t x46 = -1;
	int16_t x48 = INT16_MIN;

	t7 = ((x45+(x46+x47))/x48);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x49 = 0U;
	int8_t x51 = -4;
	int64_t x52 = INT64_MIN;

	t8 = ((x49+(x50+x51))/x52);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x58 = 406065245U;
	uint64_t x59 = 156440LLU;
	volatile uint64_t x60 = 2041920398556109426LLU;
	volatile uint64_t t9 = 445139LLU;

	t9 = ((x57+(x58+x59))/x60);

	if (t9 != 9LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x61 = 0;
	uint16_t x62 = UINT16_MAX;
	uint32_t x64 = 135846U;
	static volatile uint32_t t10 = 238U;

	t10 = ((x61+(x62+x63))/x64);

	if (t10 != 15808U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x66 = -1;
	uint32_t x67 = 25205288U;
	uint8_t x68 = 45U;
	uint32_t t11 = 616746310U;

	t11 = ((x65+(x66+x67))/x68);

	if (t11 != 560123U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x69 = 578;
	int16_t x72 = INT16_MAX;
	volatile uint64_t t12 = 132LLU;

	t12 = ((x69+(x70+x71))/x72);

	if (t12 != 640810LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MAX;
	int32_t x76 = -1;
	volatile int32_t t13 = 452;

	t13 = ((x73+(x74+x75))/x76);

	if (t13 != 2147451009) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x77 = UINT32_MAX;
	static int32_t x78 = 22065;
	uint16_t x79 = 1909U;
	int64_t x80 = INT64_MIN;
	volatile int64_t t14 = -562189633LL;

	t14 = ((x77+(x78+x79))/x80);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x85 = 874;
	volatile uint8_t x86 = UINT8_MAX;
	uint16_t x88 = UINT16_MAX;

	t15 = ((x85+(x86+x87))/x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x90 = 5;
	int8_t x91 = 6;
	volatile int64_t t16 = 15004335941LL;

	t16 = ((x89+(x90+x91))/x92);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = -1;
	int16_t x98 = INT16_MIN;
	int16_t x99 = -2257;
	volatile uint64_t t17 = 8766245465497LLU;

	t17 = ((x97+(x98+x99))/x100);

	if (t17 != 596259LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x101 = INT32_MIN;
	static int32_t x103 = 3;
	static volatile uint32_t x104 = 35147223U;
	volatile uint32_t t18 = 840U;

	t18 = ((x101+(x102+x103))/x104);

	if (t18 != 61U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x106 = INT32_MIN;
	volatile int8_t x107 = 1;
	volatile int32_t t19 = -29114958;

	t19 = ((x105+(x106+x107))/x108);

	if (t19 != 16776704) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = 12;
	static volatile int16_t x110 = INT16_MIN;
	volatile int16_t x111 = 392;
	static volatile int32_t t20 = -33248468;

	t20 = ((x109+(x110+x111))/x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = UINT64_MAX;
	int16_t x114 = INT16_MAX;
	uint64_t x115 = 38889188545378LLU;
	int8_t x116 = -21;
	volatile uint64_t t21 = 1359292LLU;

	t21 = ((x113+(x114+x115))/x116);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x118 = -1;
	uint8_t x119 = UINT8_MAX;
	uint64_t t22 = 104933723181314294LLU;

	t22 = ((x117+(x118+x119))/x120);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x122 = -1LL;
	uint8_t x123 = 4U;
	static int64_t t23 = -2LL;

	t23 = ((x121+(x122+x123))/x124);

	if (t23 != -1184977777479127LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x130 = INT16_MAX;
	int8_t x131 = INT8_MIN;
	static int16_t x132 = -1;
	volatile int32_t t24 = 104;

	t24 = ((x129+(x130+x131))/x132);

	if (t24 != 129) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x135 = 1317950U;
	int16_t x136 = INT16_MAX;
	volatile uint32_t t25 = 10329U;

	t25 = ((x133+(x134+x135))/x136);

	if (t25 != 40U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x137 = INT8_MIN;
	static int8_t x138 = 1;
	int64_t x139 = -1LL;
	volatile uint64_t t26 = 28634998482LLU;

	t26 = ((x137+(x138+x139))/x140);

	if (t26 != 22796808221781LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x141 = INT8_MIN;
	volatile uint16_t x142 = 198U;
	volatile int8_t x143 = INT8_MAX;
	static volatile int64_t x144 = INT64_MIN;

	t27 = ((x141+(x142+x143))/x144);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x145 = INT8_MAX;
	volatile int8_t x146 = -1;
	int32_t x147 = -1;
	int16_t x148 = -4116;
	volatile int32_t t28 = -55010;

	t28 = ((x145+(x146+x147))/x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = 10;
	int8_t x150 = INT8_MAX;
	uint8_t x151 = 13U;
	volatile uint16_t x152 = 66U;
	int32_t t29 = -488618260;

	t29 = ((x149+(x150+x151))/x152);

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x154 = UINT64_MAX;
	static int64_t x155 = -1LL;
	static int16_t x156 = -2;
	volatile uint64_t t30 = 28919875950947804LLU;

	t30 = ((x153+(x154+x155))/x156);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = 2;
	uint16_t x158 = 27474U;
	volatile int16_t x160 = INT16_MIN;
	volatile int64_t t31 = -1095396456968034831LL;

	t31 = ((x157+(x158+x159))/x160);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x165 = -1;
	uint16_t x166 = 49U;
	uint64_t x167 = 6897LLU;

	t32 = ((x165+(x166+x167))/x168);

	if (t32 != 6945LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x171 = INT8_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile int64_t t33 = 125417009246LL;

	t33 = ((x169+(x170+x171))/x172);

	if (t33 != 2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x177 = UINT32_MAX;
	int32_t x179 = INT32_MIN;
	int64_t x180 = 40990LL;
	volatile uint64_t t34 = 980178043LLU;

	t34 = ((x177+(x178+x179))/x180);

	if (t34 != 52390LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x190 = UINT64_MAX;
	static volatile uint64_t x191 = 7772114LLU;
	volatile uint64_t x192 = 638LLU;
	uint64_t t35 = 8554756855849061381LLU;

	t35 = ((x189+(x190+x191))/x192);

	if (t35 != 12182LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = -2;
	volatile uint64_t x195 = 35981LLU;
	static int16_t x196 = 1352;
	uint64_t t36 = 7295785832779472LLU;

	t36 = ((x193+(x194+x195))/x196);

	if (t36 != 26LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x197 = 64812815LLU;
	static uint16_t x198 = 6864U;
	int32_t x200 = 863456;
	uint64_t t37 = 25LLU;

	t37 = ((x197+(x198+x199))/x200);

	if (t37 != 75LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = INT8_MIN;
	volatile uint32_t x202 = 0U;
	volatile uint8_t x203 = 20U;
	uint64_t x204 = 94896406LLU;
	uint64_t t38 = 902022654547856217LLU;

	t38 = ((x201+(x202+x203))/x204);

	if (t38 != 45LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = 0;
	static int16_t x206 = INT16_MIN;
	static int8_t x207 = INT8_MIN;
	static int16_t x208 = -11556;
	static volatile int32_t t39 = -37;

	t39 = ((x205+(x206+x207))/x208);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x209 = INT32_MIN;
	int64_t x210 = -1LL;
	static int32_t x211 = INT32_MIN;
	int64_t t40 = -3161553LL;

	t40 = ((x209+(x210+x211))/x212);

	if (t40 != 33554432LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x217 = INT64_MIN;
	uint64_t x218 = UINT64_MAX;
	int16_t x219 = 0;
	int32_t x220 = INT32_MIN;
	uint64_t t41 = 1613138526LLU;

	t41 = ((x217+(x218+x219))/x220);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = INT8_MIN;
	int32_t x223 = 104761141;
	int64_t x224 = -1LL;
	int64_t t42 = 5LL;

	t42 = ((x221+(x222+x223))/x224);

	if (t42 != 2042722635LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x225 = 2914U;
	static int8_t x226 = INT8_MIN;
	static volatile int8_t x227 = -56;
	int8_t x228 = INT8_MAX;

	t43 = ((x225+(x226+x227))/x228);

	if (t43 != 21) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x229 = INT8_MAX;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MAX;
	int8_t x232 = 1;
	static int64_t t44 = 15062102LL;

	t44 = ((x229+(x230+x231))/x232);

	if (t44 != 9223372034707292286LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x233 = 1419U;
	int32_t x234 = -724613;
	int64_t x235 = INT64_MAX;
	volatile int64_t t45 = 17062643742714LL;

	t45 = ((x233+(x234+x235))/x236);

	if (t45 != -9223372036854052613LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x237 = UINT32_MAX;
	uint64_t x238 = UINT64_MAX;
	uint8_t x239 = 6U;
	uint8_t x240 = 5U;
	uint64_t t46 = 173LLU;

	t46 = ((x237+(x238+x239))/x240);

	if (t46 != 858993460LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x241 = UINT64_MAX;
	volatile int8_t x243 = INT8_MIN;
	volatile uint64_t t47 = 3680726260577221LLU;

	t47 = ((x241+(x242+x243))/x244);

	if (t47 != 8589934595LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x245 = INT8_MAX;
	uint8_t x246 = UINT8_MAX;
	int16_t x247 = INT16_MIN;
	static int64_t x248 = 13142237288LL;
	volatile int64_t t48 = -1LL;

	t48 = ((x245+(x246+x247))/x248);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x249 = INT16_MIN;
	static int8_t x250 = -1;
	static int32_t x251 = 82;
	static int8_t x252 = -1;
	int32_t t49 = 60;

	t49 = ((x249+(x250+x251))/x252);

	if (t49 != 32687) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x255 = -1;
	uint32_t t50 = 457432674U;

	t50 = ((x253+(x254+x255))/x256);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x257 = 4;
	int32_t x258 = INT32_MIN;
	uint32_t x259 = 5U;
	int32_t x260 = INT32_MAX;
	uint32_t t51 = 3U;

	t51 = ((x257+(x258+x259))/x260);

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x262 = -216886414727099948LL;
	int8_t x264 = 1;
	static volatile int64_t t52 = 11987LL;

	t52 = ((x261+(x262+x263))/x264);

	if (t52 != -216886414727132717LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x265 = INT64_MIN;
	static volatile int64_t x266 = -149289181LL;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = INT64_MIN;
	uint64_t t53 = 301352034211772282LLU;

	t53 = ((x265+(x266+x267))/x268);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x269 = -11;
	volatile int32_t x270 = -1;
	volatile uint8_t x271 = 75U;
	int32_t t54 = 24;

	t54 = ((x269+(x270+x271))/x272);

	if (t54 != 7) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x273 = INT8_MIN;
	uint8_t x274 = UINT8_MAX;
	static int32_t t55 = 102178845;

	t55 = ((x273+(x274+x275))/x276);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x281 = 16863U;
	uint32_t x282 = UINT32_MAX;
	int16_t x283 = -1;
	volatile int16_t x284 = -744;
	volatile uint32_t t56 = 7574U;

	t56 = ((x281+(x282+x283))/x284);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x285 = INT32_MIN;
	static uint32_t x286 = UINT32_MAX;
	static int8_t x288 = -1;
	uint32_t t57 = 18440473U;

	t57 = ((x285+(x286+x287))/x288);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x290 = 23;
	int64_t x292 = -800LL;
	volatile int64_t t58 = 69696888279825LL;

	t58 = ((x289+(x290+x291))/x292);

	if (t58 != -16LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x304 = 5;
	static int64_t t59 = 2528987LL;

	t59 = ((x301+(x302+x303))/x304);

	if (t59 != -1844674407370954832LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x305 = -5267797272LL;
	static uint64_t x306 = 76312541968LLU;
	volatile int16_t x307 = -1;
	volatile int8_t x308 = -1;

	t60 = ((x305+(x306+x307))/x308);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x314 = 714572554U;
	uint32_t x315 = UINT32_MAX;
	static volatile uint64_t x316 = 58LLU;
	uint64_t t61 = 24786929799249LLU;

	t61 = ((x313+(x314+x315))/x316);

	if (t61 != 12320216LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x321 = 1U;
	int64_t x323 = 1239388720802LL;
	static volatile int64_t t62 = 136299150969LL;

	t62 = ((x321+(x322+x323))/x324);

	if (t62 != -577LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x325 = 1U;
	volatile uint64_t x326 = UINT64_MAX;
	int32_t x327 = -1;

	t63 = ((x325+(x326+x327))/x328);

	if (t63 != 55643265444740LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x330 = UINT64_MAX;
	uint8_t x331 = 2U;
	uint8_t x332 = 12U;
	uint64_t t64 = 31218LLU;

	t64 = ((x329+(x330+x331))/x332);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x333 = INT16_MIN;
	int16_t x336 = -1;

	t65 = ((x333+(x334+x335))/x336);

	if (t65 != -32766) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = -1;
	int32_t x338 = -812771;
	uint16_t x339 = 9U;
	volatile int64_t t66 = 1LL;

	t66 = ((x337+(x338+x339))/x340);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x341 = 59366152927751098LL;
	uint32_t x342 = 92217U;
	uint8_t x343 = 16U;
	int64_t x344 = INT64_MIN;
	int64_t t67 = -32036975230634178LL;

	t67 = ((x341+(x342+x343))/x344);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = INT64_MAX;
	volatile int16_t x346 = -1;
	uint16_t x347 = 0U;
	uint8_t x348 = 6U;
	volatile int64_t t68 = 65287880788310LL;

	t68 = ((x345+(x346+x347))/x348);

	if (t68 != 1537228672809129301LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x350 = 6LLU;
	int64_t x351 = 2047LL;

	t69 = ((x349+(x350+x351))/x352);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x353 = 262900706853LLU;
	int32_t x354 = -1;
	int8_t x355 = INT8_MAX;
	volatile uint64_t t70 = 48147644482LLU;

	t70 = ((x353+(x354+x355))/x356);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x357 = INT8_MAX;
	uint32_t x358 = 30336216U;
	uint16_t x359 = 25U;
	static int16_t x360 = -1;
	static volatile uint32_t t71 = 2U;

	t71 = ((x357+(x358+x359))/x360);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = 8U;
	uint64_t x364 = 109577953LLU;

	t72 = ((x361+(x362+x363))/x364);

	if (t72 != 84171786242LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x365 = 1;
	int16_t x367 = -1;
	uint16_t x368 = 5U;
	int32_t t73 = 1111;

	t73 = ((x365+(x366+x367))/x368);

	if (t73 != -6553) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x370 = 0U;
	uint32_t x371 = 9U;
	static volatile int32_t x372 = 592;
	volatile int64_t t74 = 54517424866049316LL;

	t74 = ((x369+(x370+x371))/x372);

	if (t74 != -383316374LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x373 = INT64_MIN;
	uint64_t x375 = 132683924248LLU;

	t75 = ((x373+(x374+x375))/x376);

	if (t75 != 2147483679LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x378 = 0;
	static int8_t x380 = INT8_MIN;
	volatile uint32_t t76 = 2240U;

	t76 = ((x377+(x378+x379))/x380);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x381 = 1;
	uint32_t x383 = 766811U;
	int16_t x384 = 5;
	volatile int64_t t77 = 47656397968096453LL;

	t77 = ((x381+(x382+x383))/x384);

	if (t77 != -1844674407370801799LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x385 = 29U;
	static uint32_t x386 = UINT32_MAX;
	uint64_t x388 = UINT64_MAX;
	static uint64_t t78 = 572991547760005270LLU;

	t78 = ((x385+(x386+x387))/x388);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x393 = INT16_MIN;
	uint64_t x394 = UINT64_MAX;
	uint16_t x395 = 925U;
	int16_t x396 = INT16_MAX;

	t79 = ((x393+(x394+x395))/x396);

	if (t79 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x397 = 55475453409946LLU;
	static int8_t x399 = 61;
	int32_t x400 = -1;
	uint64_t t80 = 3101341929851504LLU;

	t80 = ((x397+(x398+x399))/x400);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x402 = 3U;
	volatile uint32_t x403 = 72849U;
	volatile uint32_t t81 = 187131U;

	t81 = ((x401+(x402+x403))/x404);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x406 = -1LL;
	static int16_t x407 = INT16_MAX;

	t82 = ((x405+(x406+x407))/x408);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x413 = INT8_MAX;
	uint8_t x414 = UINT8_MAX;
	static volatile uint64_t x415 = 5372388687LLU;
	static volatile uint64_t t83 = 4939938LLU;

	t83 = ((x413+(x414+x415))/x416);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x417 = INT32_MIN;
	volatile uint32_t t84 = 1348094382U;

	t84 = ((x417+(x418+x419))/x420);

	if (t84 != 32768U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MAX;
	int32_t x424 = INT32_MIN;
	int64_t t85 = 50LL;

	t85 = ((x421+(x422+x423))/x424);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x425 = UINT64_MAX;
	uint8_t x426 = 9U;
	volatile int8_t x427 = 13;
	int64_t x428 = 166LL;
	volatile uint64_t t86 = 34406743191762663LLU;

	t86 = ((x425+(x426+x427))/x428);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x430 = 56;
	int8_t x431 = -11;
	volatile uint32_t t87 = 1004739081U;

	t87 = ((x429+(x430+x431))/x432);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x433 = -1;
	uint16_t x434 = UINT16_MAX;
	uint8_t x435 = UINT8_MAX;
	int32_t x436 = INT32_MIN;
	int32_t t88 = 239;

	t88 = ((x433+(x434+x435))/x436);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x437 = -1;
	int64_t x439 = -1LL;
	int64_t t89 = 92966LL;

	t89 = ((x437+(x438+x439))/x440);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x441 = 0U;
	uint16_t x442 = 0U;
	uint8_t x444 = 3U;
	volatile int64_t t90 = -35621417221858LL;

	t90 = ((x441+(x442+x443))/x444);

	if (t90 != 97LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x446 = -1LL;
	uint16_t x447 = 789U;
	int32_t x448 = -35318;
	int64_t t91 = -2LL;

	t91 = ((x445+(x446+x447))/x448);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x449 = -1LL;
	volatile uint8_t x450 = 115U;
	int8_t x451 = INT8_MAX;
	int8_t x452 = -58;
	int64_t t92 = 726643LL;

	t92 = ((x449+(x450+x451))/x452);

	if (t92 != -4LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x453 = UINT32_MAX;
	volatile uint32_t t93 = 152250U;

	t93 = ((x453+(x454+x455))/x456);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x457 = INT32_MIN;
	int32_t x458 = 242325;
	volatile int8_t x459 = INT8_MIN;
	volatile int32_t t94 = -519;

	t94 = ((x457+(x458+x459))/x460);

	if (t94 != -536810362) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x462 = 52252851LLU;
	static volatile uint64_t x464 = 392LLU;
	volatile uint64_t t95 = 13270899946325312LLU;

	t95 = ((x461+(x462+x463))/x464);

	if (t95 != 47058020590852859LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x465 = INT8_MIN;
	int8_t x466 = -1;
	int8_t x468 = -1;
	volatile int32_t t96 = -1416;

	t96 = ((x465+(x466+x467))/x468);

	if (t96 != 119) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x474 = 1;
	uint8_t x475 = UINT8_MAX;
	volatile int32_t t97 = -2;

	t97 = ((x473+(x474+x475))/x476);

	if (t97 != -33023) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x478 = 0;
	volatile int8_t x479 = -1;
	int32_t x480 = INT32_MIN;
	volatile int32_t t98 = -48883781;

	t98 = ((x477+(x478+x479))/x480);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x485 = -1LL;
	uint8_t x487 = 54U;
	volatile int64_t t99 = 52491256378074262LL;

	t99 = ((x485+(x486+x487))/x488);

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

