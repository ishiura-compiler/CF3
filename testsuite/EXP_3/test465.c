#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = 468333289U;
int32_t x10 = INT32_MAX;
int8_t x16 = -1;
volatile uint64_t x27 = 10927557410591LLU;
uint64_t x28 = UINT64_MAX;
int32_t x37 = -1;
volatile int64_t x42 = -2666545539334243LL;
static volatile int32_t t8 = 1594;
int16_t x51 = -273;
static int32_t t12 = 13683;
uint64_t x69 = 18253160537900071LLU;
static int8_t x73 = -3;
volatile int32_t x81 = INT32_MIN;
int8_t x83 = 3;
int16_t x84 = -1;
static int64_t x86 = INT64_MAX;
int32_t t17 = -2492892;
uint8_t x91 = 1U;
int32_t x94 = -219;
uint32_t x99 = 113U;
int8_t x136 = INT8_MAX;
volatile int32_t t28 = -19749;
static uint32_t x138 = UINT32_MAX;
int16_t x143 = INT16_MIN;
static uint32_t x152 = 75367647U;
int32_t x153 = INT32_MIN;
volatile int32_t t32 = 45928364;
uint64_t x159 = 3767381LLU;
static int64_t x160 = -1LL;
volatile int32_t t33 = 1621;
static int16_t x161 = 164;
static int16_t x167 = 15283;
int16_t x179 = 923;
static int64_t x184 = -127562952495LL;
volatile int64_t x186 = INT64_MIN;
static uint32_t x187 = UINT32_MAX;
uint64_t x189 = 11131LLU;
volatile int8_t x192 = 5;
uint64_t x194 = 1001LLU;
int8_t x197 = INT8_MIN;
uint16_t x213 = 5U;
int8_t x214 = INT8_MAX;
volatile int32_t t44 = -10;
volatile int32_t t45 = 3353628;
int32_t t48 = 0;
static uint32_t x235 = 608644913U;
uint64_t x247 = 240606309744LLU;
volatile int64_t x272 = -1LL;
static int8_t x273 = INT8_MAX;
int16_t x279 = INT16_MIN;
int8_t x292 = INT8_MIN;
static int64_t x294 = INT64_MAX;
int16_t x295 = -7;
int32_t x304 = INT32_MAX;
static int16_t x311 = -1;
int8_t x313 = INT8_MIN;
uint8_t x314 = 1U;
volatile int16_t x318 = INT16_MAX;
int64_t x322 = -150906160LL;
static uint64_t x326 = UINT64_MAX;
int16_t x335 = 3;
volatile int64_t x337 = INT64_MIN;
int32_t t71 = 5342873;
uint16_t x347 = 16U;
uint16_t x349 = 1643U;
uint16_t x350 = UINT16_MAX;
int8_t x351 = INT8_MAX;
int32_t t73 = 480;
int16_t x360 = -4602;
int32_t t75 = 13;
static int16_t x376 = INT16_MIN;
static int32_t t78 = 17357;
int8_t x389 = -1;
int32_t x391 = -1;
int8_t x392 = INT8_MAX;
static int64_t x398 = 103370035485LL;
int32_t t84 = -177780;
int16_t x413 = -51;
volatile int32_t x414 = -1;
volatile uint32_t x418 = 15581474U;
int8_t x423 = INT8_MIN;
int8_t x443 = -1;
volatile int32_t t91 = -732136225;
int64_t x453 = INT64_MIN;
int8_t x456 = INT8_MAX;
static uint8_t x457 = UINT8_MAX;
int16_t x458 = 87;
int8_t x464 = INT8_MIN;
volatile uint32_t x472 = 2488U;
volatile int16_t x479 = -1;
static int8_t x485 = -1;
int16_t x491 = INT16_MAX;


void f0(void) {
	uint16_t x1 = 41U;
	uint64_t x2 = 31810658601673542LLU;
	uint16_t x3 = UINT16_MAX;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -1;

	t0 = ((x1<=x2)<=(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	volatile uint64_t x6 = 124954454472867049LLU;
	uint32_t x8 = 57937U;
	int32_t t1 = -32279;

	t1 = ((x5<=x6)<=(x7*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int64_t x11 = INT64_MAX;
	static uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = -2070;

	t2 = ((x9<=x10)<=(x11*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	volatile int32_t x14 = 27;
	volatile int8_t x15 = 3;
	static int32_t t3 = -3501769;

	t3 = ((x13<=x14)<=(x15*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	static uint8_t x22 = UINT8_MAX;
	uint64_t x23 = UINT64_MAX;
	static volatile uint16_t x24 = UINT16_MAX;
	volatile int32_t t4 = 8126208;

	t4 = ((x21<=x22)<=(x23*x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	int64_t x26 = INT64_MIN;
	static volatile int32_t t5 = -3472;

	t5 = ((x25<=x26)<=(x27*x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = -57228361934595290LL;
	volatile int64_t x34 = INT64_MIN;
	volatile int16_t x35 = 16;
	int64_t x36 = 0LL;
	static int32_t t6 = -8983;

	t6 = ((x33<=x34)<=(x35*x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x38 = INT64_MIN;
	uint32_t x39 = 3185U;
	int32_t x40 = INT32_MIN;
	volatile int32_t t7 = 132846743;

	t7 = ((x37<=x38)<=(x39*x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = 1;
	volatile int64_t x43 = -1LL;
	int32_t x44 = INT32_MIN;

	t8 = ((x41<=x42)<=(x43*x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 3729892171521LLU;
	uint32_t x50 = 1U;
	int32_t x52 = 91741;
	int32_t t9 = -15373;

	t9 = ((x49<=x50)<=(x51*x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	static volatile int16_t x54 = INT16_MAX;
	volatile int8_t x55 = 0;
	static uint32_t x56 = 7024U;
	int32_t t10 = -3;

	t10 = ((x53<=x54)<=(x55*x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = -1;
	static int64_t x58 = 991865764849LL;
	static uint32_t x59 = 6715146U;
	uint8_t x60 = UINT8_MAX;
	static int32_t t11 = -55;

	t11 = ((x57<=x58)<=(x59*x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MAX;
	int8_t x62 = -1;
	volatile int8_t x63 = INT8_MIN;
	uint32_t x64 = 73U;

	t12 = ((x61<=x62)<=(x63*x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x70 = -1948;
	int64_t x71 = 2333776154941LL;
	int8_t x72 = INT8_MAX;
	static int32_t t13 = -884372399;

	t13 = ((x69<=x70)<=(x71*x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x74 = UINT8_MAX;
	int16_t x75 = INT16_MAX;
	static volatile int64_t x76 = -1LL;
	int32_t t14 = -979361;

	t14 = ((x73<=x74)<=(x75*x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -12017432;
	int8_t x78 = -1;
	static int16_t x79 = -201;
	int8_t x80 = INT8_MIN;
	volatile int32_t t15 = -40835;

	t15 = ((x77<=x78)<=(x79*x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x82 = INT64_MIN;
	static int32_t t16 = -233;

	t16 = ((x81<=x82)<=(x83*x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = 9222;
	int8_t x87 = -6;
	static uint32_t x88 = 46U;

	t17 = ((x85<=x86)<=(x87*x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x89 = INT8_MIN;
	volatile uint8_t x90 = 1U;
	int16_t x92 = INT16_MAX;
	volatile int32_t t18 = -2451672;

	t18 = ((x89<=x90)<=(x91*x92));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 2561981404084483165LLU;
	volatile uint8_t x95 = 44U;
	uint64_t x96 = UINT64_MAX;
	int32_t t19 = -810339;

	t19 = ((x93<=x94)<=(x95*x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 4U;
	uint8_t x98 = 30U;
	int64_t x100 = 0LL;
	int32_t t20 = -506383;

	t20 = ((x97<=x98)<=(x99*x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = 3107;
	static int32_t x102 = -1;
	int8_t x103 = INT8_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t21 = 691;

	t21 = ((x101<=x102)<=(x103*x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MIN;
	static int64_t x106 = INT64_MIN;
	uint16_t x107 = 0U;
	uint16_t x108 = 1365U;
	int32_t t22 = -421;

	t22 = ((x105<=x106)<=(x107*x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	volatile uint64_t x110 = 199807769488024LLU;
	int8_t x111 = -1;
	static uint64_t x112 = UINT64_MAX;
	int32_t t23 = -350166153;

	t23 = ((x109<=x110)<=(x111*x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x117 = 64;
	volatile int64_t x118 = INT64_MIN;
	int32_t x119 = -1;
	int64_t x120 = -2492524985794LL;
	int32_t t24 = 126;

	t24 = ((x117<=x118)<=(x119*x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x121 = UINT16_MAX;
	int32_t x122 = -1;
	int16_t x123 = INT16_MIN;
	volatile int16_t x124 = 1405;
	int32_t t25 = -675337;

	t25 = ((x121<=x122)<=(x123*x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x125 = INT64_MAX;
	int16_t x126 = INT16_MAX;
	uint8_t x127 = 42U;
	static int8_t x128 = 1;
	volatile int32_t t26 = -2;

	t26 = ((x125<=x126)<=(x127*x128));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x129 = 2166U;
	static int64_t x130 = -434380LL;
	static int16_t x131 = 6152;
	uint16_t x132 = UINT16_MAX;
	int32_t t27 = -1;

	t27 = ((x129<=x130)<=(x131*x132));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x133 = INT8_MIN;
	int8_t x134 = 0;
	uint32_t x135 = 93390U;

	t28 = ((x133<=x134)<=(x135*x136));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = 1335LLU;
	uint64_t x139 = 1707LLU;
	int32_t x140 = INT32_MIN;
	static volatile int32_t t29 = -2;

	t29 = ((x137<=x138)<=(x139*x140));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = 0;
	static uint8_t x142 = 6U;
	static int32_t x144 = -359;
	volatile int32_t t30 = 173;

	t30 = ((x141<=x142)<=(x143*x144));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = -1;
	uint64_t x150 = UINT64_MAX;
	uint32_t x151 = UINT32_MAX;
	volatile int32_t t31 = 879118945;

	t31 = ((x149<=x150)<=(x151*x152));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x154 = INT64_MAX;
	volatile uint8_t x155 = 1U;
	volatile int8_t x156 = -1;

	t32 = ((x153<=x154)<=(x155*x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = UINT64_MAX;
	uint64_t x158 = 487839159LLU;

	t33 = ((x157<=x158)<=(x159*x160));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x162 = 3U;
	uint8_t x163 = UINT8_MAX;
	static int8_t x164 = -3;
	volatile int32_t t34 = -428561452;

	t34 = ((x161<=x162)<=(x163*x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = UINT64_MAX;
	uint32_t x166 = 77837327U;
	int32_t x168 = -3089;
	int32_t t35 = 265309117;

	t35 = ((x165<=x166)<=(x167*x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MAX;
	uint32_t x170 = 91U;
	int16_t x171 = INT16_MIN;
	uint8_t x172 = 61U;
	volatile int32_t t36 = -5294;

	t36 = ((x169<=x170)<=(x171*x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x177 = INT64_MIN;
	uint32_t x178 = 4649362U;
	int8_t x180 = INT8_MIN;
	int32_t t37 = -18;

	t37 = ((x177<=x178)<=(x179*x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x181 = UINT64_MAX;
	uint8_t x182 = 12U;
	int16_t x183 = INT16_MIN;
	int32_t t38 = 2009229;

	t38 = ((x181<=x182)<=(x183*x184));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x185 = INT32_MIN;
	volatile int32_t x188 = INT32_MIN;
	int32_t t39 = -314;

	t39 = ((x185<=x186)<=(x187*x188));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x190 = 0U;
	int32_t x191 = -1;
	volatile int32_t t40 = 28632;

	t40 = ((x189<=x190)<=(x191*x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x193 = INT32_MAX;
	volatile int64_t x195 = -1LL;
	int8_t x196 = INT8_MIN;
	int32_t t41 = 737160;

	t41 = ((x193<=x194)<=(x195*x196));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x198 = 213011878584866LL;
	int64_t x199 = 110213LL;
	int64_t x200 = 103102574586LL;
	int32_t t42 = -1;

	t42 = ((x197<=x198)<=(x199*x200));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x202 = 1U;
	int16_t x203 = 58;
	int64_t x204 = -1LL;
	int32_t t43 = -42;

	t43 = ((x201<=x202)<=(x203*x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MIN;

	t44 = ((x213<=x214)<=(x215*x216));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MIN;
	uint16_t x218 = 16236U;
	int16_t x219 = INT16_MAX;
	uint16_t x220 = 0U;

	t45 = ((x217<=x218)<=(x219*x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x221 = 3U;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = 2065518131LLU;
	uint64_t x224 = 51767468563230469LLU;
	volatile int32_t t46 = 658468;

	t46 = ((x221<=x222)<=(x223*x224));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x225 = INT16_MAX;
	uint64_t x226 = 36487204LLU;
	static int64_t x227 = 27LL;
	int64_t x228 = 550316LL;
	int32_t t47 = 10317;

	t47 = ((x225<=x226)<=(x227*x228));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = INT16_MAX;
	static uint32_t x230 = UINT32_MAX;
	static int32_t x231 = 248815;
	static volatile int8_t x232 = INT8_MIN;

	t48 = ((x229<=x230)<=(x231*x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MIN;
	static uint16_t x234 = 958U;
	int8_t x236 = -1;
	static volatile int32_t t49 = 624362;

	t49 = ((x233<=x234)<=(x235*x236));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x237 = 0U;
	uint8_t x238 = UINT8_MAX;
	volatile int8_t x239 = -25;
	volatile uint16_t x240 = 723U;
	int32_t t50 = 77126;

	t50 = ((x237<=x238)<=(x239*x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x245 = -1;
	int64_t x246 = -1LL;
	static int16_t x248 = -1;
	volatile int32_t t51 = 5140;

	t51 = ((x245<=x246)<=(x247*x248));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x249 = 2U;
	int16_t x250 = INT16_MIN;
	int32_t x251 = -516;
	int64_t x252 = -27323867123796LL;
	volatile int32_t t52 = -328399;

	t52 = ((x249<=x250)<=(x251*x252));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x257 = 490026520934LLU;
	static int8_t x258 = INT8_MAX;
	uint64_t x259 = 21919917656510LLU;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t53 = 639450466;

	t53 = ((x257<=x258)<=(x259*x260));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x269 = 612184U;
	static int8_t x270 = 9;
	static uint8_t x271 = 25U;
	static volatile int32_t t54 = 53889;

	t54 = ((x269<=x270)<=(x271*x272));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x274 = UINT16_MAX;
	volatile int16_t x275 = INT16_MAX;
	int8_t x276 = 1;
	static volatile int32_t t55 = 173335;

	t55 = ((x273<=x274)<=(x275*x276));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x277 = 1099004619826441074LL;
	int64_t x278 = INT64_MIN;
	uint8_t x280 = 34U;
	int32_t t56 = -54;

	t56 = ((x277<=x278)<=(x279*x280));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x285 = 350745502529693LLU;
	static int64_t x286 = INT64_MIN;
	uint64_t x287 = UINT64_MAX;
	uint16_t x288 = 368U;
	static volatile int32_t t57 = 3508288;

	t57 = ((x285<=x286)<=(x287*x288));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x289 = INT64_MAX;
	uint16_t x290 = UINT16_MAX;
	int16_t x291 = INT16_MIN;
	static volatile int32_t t58 = 2;

	t58 = ((x289<=x290)<=(x291*x292));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x293 = -23;
	int8_t x296 = -10;
	static int32_t t59 = -7758;

	t59 = ((x293<=x294)<=(x295*x296));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x297 = INT32_MIN;
	int16_t x298 = -1480;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t60 = 1;

	t60 = ((x297<=x298)<=(x299*x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x301 = UINT16_MAX;
	static int16_t x302 = INT16_MIN;
	int8_t x303 = -1;
	int32_t t61 = -6016;

	t61 = ((x301<=x302)<=(x303*x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = 353633;
	uint64_t x306 = 2274LLU;
	uint64_t x307 = UINT64_MAX;
	int64_t x308 = INT64_MAX;
	int32_t t62 = 43288587;

	t62 = ((x305<=x306)<=(x307*x308));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x309 = 7512U;
	int32_t x310 = -6;
	volatile uint32_t x312 = 8U;
	int32_t t63 = -22352;

	t63 = ((x309<=x310)<=(x311*x312));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x315 = 253123663U;
	uint16_t x316 = 1U;
	volatile int32_t t64 = -5074;

	t64 = ((x313<=x314)<=(x315*x316));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = INT32_MIN;
	volatile int16_t x319 = INT16_MIN;
	uint32_t x320 = 39151U;
	int32_t t65 = 4;

	t65 = ((x317<=x318)<=(x319*x320));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x321 = UINT16_MAX;
	int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MAX;
	volatile int32_t t66 = 293;

	t66 = ((x321<=x322)<=(x323*x324));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x325 = INT16_MIN;
	int64_t x327 = -109924637342111LL;
	volatile int64_t x328 = -1LL;
	volatile int32_t t67 = 2734806;

	t67 = ((x325<=x326)<=(x327*x328));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x329 = 162557;
	int16_t x330 = -1;
	volatile uint32_t x331 = 391993027U;
	volatile int32_t x332 = -10332;
	static volatile int32_t t68 = 456807040;

	t68 = ((x329<=x330)<=(x331*x332));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x333 = 7U;
	static int32_t x334 = -250161;
	int64_t x336 = -1LL;
	static volatile int32_t t69 = -49158548;

	t69 = ((x333<=x334)<=(x335*x336));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x338 = UINT8_MAX;
	volatile uint8_t x339 = 34U;
	int16_t x340 = INT16_MIN;
	static int32_t t70 = -266833816;

	t70 = ((x337<=x338)<=(x339*x340));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = INT16_MAX;
	int32_t x342 = -115503911;
	static int16_t x343 = INT16_MIN;
	uint32_t x344 = UINT32_MAX;

	t71 = ((x341<=x342)<=(x343*x344));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x345 = INT8_MIN;
	uint64_t x346 = UINT64_MAX;
	int64_t x348 = -139008689109634LL;
	volatile int32_t t72 = -3428460;

	t72 = ((x345<=x346)<=(x347*x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x352 = 529622385477160797LLU;

	t73 = ((x349<=x350)<=(x351*x352));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = INT64_MIN;
	uint32_t x354 = 105786584U;
	int32_t x355 = -1;
	int8_t x356 = -3;
	int32_t t74 = -224;

	t74 = ((x353<=x354)<=(x355*x356));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = 4476;
	uint16_t x359 = 434U;

	t75 = ((x357<=x358)<=(x359*x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x361 = -3836LL;
	int16_t x362 = INT16_MIN;
	int16_t x363 = INT16_MIN;
	static int16_t x364 = -1001;
	static volatile int32_t t76 = -1024380;

	t76 = ((x361<=x362)<=(x363*x364));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x369 = INT32_MIN;
	uint8_t x370 = 1U;
	int8_t x371 = INT8_MIN;
	int64_t x372 = 706849LL;
	volatile int32_t t77 = -41;

	t77 = ((x369<=x370)<=(x371*x372));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = 1499LL;
	static uint32_t x375 = 799677039U;

	t78 = ((x373<=x374)<=(x375*x376));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x377 = INT16_MIN;
	int32_t x378 = 4120714;
	static uint16_t x379 = 21U;
	int32_t x380 = -1;
	int32_t t79 = 54668445;

	t79 = ((x377<=x378)<=(x379*x380));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x385 = INT32_MIN;
	uint16_t x386 = UINT16_MAX;
	uint32_t x387 = 472899U;
	uint8_t x388 = 2U;
	int32_t t80 = 17667;

	t80 = ((x385<=x386)<=(x387*x388));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x390 = INT16_MIN;
	int32_t t81 = -500;

	t81 = ((x389<=x390)<=(x391*x392));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x393 = UINT32_MAX;
	uint64_t x394 = 2LLU;
	int16_t x395 = INT16_MIN;
	uint32_t x396 = 40454U;
	int32_t t82 = -7737718;

	t82 = ((x393<=x394)<=(x395*x396));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x397 = -21;
	int8_t x399 = -12;
	int8_t x400 = INT8_MIN;
	int32_t t83 = -6;

	t83 = ((x397<=x398)<=(x399*x400));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x409 = UINT8_MAX;
	int64_t x410 = INT64_MAX;
	volatile uint8_t x411 = 12U;
	uint32_t x412 = UINT32_MAX;

	t84 = ((x409<=x410)<=(x411*x412));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x415 = -1;
	volatile int8_t x416 = 3;
	volatile int32_t t85 = 158;

	t85 = ((x413<=x414)<=(x415*x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x417 = INT32_MIN;
	uint16_t x419 = 0U;
	int32_t x420 = INT32_MIN;
	int32_t t86 = -76478648;

	t86 = ((x417<=x418)<=(x419*x420));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x421 = INT64_MAX;
	uint64_t x422 = UINT64_MAX;
	int16_t x424 = -1;
	int32_t t87 = 7;

	t87 = ((x421<=x422)<=(x423*x424));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x433 = INT64_MIN;
	volatile int8_t x434 = -1;
	uint64_t x435 = 68389794LLU;
	uint32_t x436 = UINT32_MAX;
	int32_t t88 = 25;

	t88 = ((x433<=x434)<=(x435*x436));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x437 = 37U;
	int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	uint64_t x440 = 7834LLU;
	volatile int32_t t89 = -256889835;

	t89 = ((x437<=x438)<=(x439*x440));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x441 = -4392;
	volatile int8_t x442 = INT8_MIN;
	static int16_t x444 = INT16_MIN;
	volatile int32_t t90 = 1729;

	t90 = ((x441<=x442)<=(x443*x444));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x445 = 3925U;
	volatile uint64_t x446 = 51269549337634106LLU;
	uint8_t x447 = 11U;
	int16_t x448 = -4831;

	t91 = ((x445<=x446)<=(x447*x448));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x454 = -168094112304335444LL;
	uint8_t x455 = 7U;
	int32_t t92 = 3052;

	t92 = ((x453<=x454)<=(x455*x456));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x459 = UINT16_MAX;
	int16_t x460 = INT16_MIN;
	static volatile int32_t t93 = 94382180;

	t93 = ((x457<=x458)<=(x459*x460));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x461 = INT16_MAX;
	int8_t x462 = -1;
	int8_t x463 = -1;
	volatile int32_t t94 = 0;

	t94 = ((x461<=x462)<=(x463*x464));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x469 = 3185;
	int8_t x470 = 0;
	uint8_t x471 = 1U;
	static volatile int32_t t95 = -30653;

	t95 = ((x469<=x470)<=(x471*x472));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x477 = -1;
	int16_t x478 = INT16_MIN;
	uint32_t x480 = 45438397U;
	volatile int32_t t96 = -2458155;

	t96 = ((x477<=x478)<=(x479*x480));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x481 = -349489658;
	volatile uint8_t x482 = 1U;
	static int8_t x483 = -1;
	static volatile uint16_t x484 = 1028U;
	static int32_t t97 = -12;

	t97 = ((x481<=x482)<=(x483*x484));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x486 = INT64_MAX;
	static int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MIN;
	int32_t t98 = 59952;

	t98 = ((x485<=x486)<=(x487*x488));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x489 = INT32_MAX;
	static int16_t x490 = INT16_MIN;
	volatile uint16_t x492 = UINT16_MAX;
	int32_t t99 = 282889;

	t99 = ((x489<=x490)<=(x491*x492));

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

