#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -3;
uint64_t x8 = 58275051748070LLU;
int8_t x9 = INT8_MAX;
int32_t x10 = INT32_MIN;
int64_t x11 = -1LL;
int64_t t2 = -43LL;
uint32_t x16 = UINT32_MAX;
int64_t t4 = -2LL;
int16_t x47 = INT16_MIN;
int16_t x53 = -1;
int64_t x54 = INT64_MIN;
int8_t x58 = INT8_MIN;
volatile int8_t x65 = -1;
volatile int32_t t12 = 1493;
volatile int16_t x75 = -1;
static int32_t x98 = INT32_MIN;
int32_t t19 = 0;
int64_t x102 = INT64_MIN;
int16_t x104 = -147;
int16_t x109 = INT16_MIN;
uint64_t x113 = 243LLU;
int32_t t23 = -414;
static volatile int32_t t24 = -1520;
int8_t x129 = -1;
uint32_t t25 = 1986817U;
int32_t x140 = -1;
static uint64_t t26 = 5028568385465198LLU;
static volatile uint32_t x152 = UINT32_MAX;
static int32_t x157 = INT32_MIN;
static uint64_t x161 = 7998LLU;
int16_t x166 = -2;
int64_t x168 = INT64_MAX;
volatile int64_t t32 = -313017LL;
static int32_t x171 = -1;
int32_t x185 = INT32_MIN;
uint32_t x188 = 23326470U;
uint32_t t35 = 4U;
int32_t x189 = INT32_MIN;
static int64_t t36 = -473138470582LL;
int16_t x224 = INT16_MAX;
volatile uint64_t t41 = 22136682058491LLU;
int32_t x230 = INT32_MIN;
static uint32_t x232 = 104396U;
volatile uint32_t t42 = 512U;
int8_t x242 = INT8_MIN;
volatile int16_t x245 = INT16_MIN;
int32_t x248 = INT32_MIN;
int32_t t47 = 608158740;
static uint64_t x255 = 1150972729266661LLU;
uint8_t x256 = 0U;
uint64_t t48 = 3939265005316LLU;
static int32_t x258 = INT32_MIN;
volatile int8_t x263 = INT8_MAX;
static int32_t t51 = 101146;
uint32_t x269 = 3U;
static volatile int8_t x270 = 1;
uint16_t x272 = UINT16_MAX;
volatile int32_t t52 = 630072;
static int16_t x292 = -1;
static uint32_t x295 = 20836U;
volatile int32_t x299 = -1;
uint64_t x303 = UINT64_MAX;
static int16_t x304 = INT16_MIN;
int16_t x310 = -1;
uint32_t t60 = 35983791U;
int8_t x318 = -1;
uint64_t x320 = UINT64_MAX;
volatile uint8_t x323 = 12U;
static uint16_t x326 = 712U;
static uint8_t x330 = UINT8_MAX;
uint32_t x332 = 41U;
static uint64_t x333 = UINT64_MAX;
volatile uint32_t t65 = 1589466U;
uint64_t x343 = 6972390294171895271LLU;
int32_t t67 = 0;
uint64_t t72 = 2964912830476912655LLU;
volatile int8_t x397 = 0;
static int64_t x398 = INT64_MIN;
int16_t x402 = -1;
static volatile int8_t x403 = INT8_MIN;
int8_t x411 = INT8_MAX;
volatile uint32_t t77 = 472906U;
volatile int32_t t78 = -857823320;
uint64_t x423 = UINT64_MAX;
int32_t t80 = 0;
int8_t x438 = -2;
volatile uint16_t x440 = 7U;
uint16_t x442 = UINT16_MAX;
static int64_t x445 = -337459503287LL;
volatile int64_t x446 = INT64_MIN;
uint32_t x447 = 90021376U;
volatile uint8_t x455 = UINT8_MAX;
int32_t t86 = 30;
int16_t x458 = 9275;
int8_t x460 = -26;
int8_t x483 = INT8_MIN;
int8_t x485 = INT8_MAX;
int8_t x491 = INT8_MIN;
static int64_t x492 = 498780440LL;
int8_t x497 = -1;
static int8_t x503 = INT8_MAX;
int8_t x511 = INT8_MAX;
volatile uint32_t x518 = UINT32_MAX;
uint32_t x519 = 9U;
volatile uint32_t x523 = 2U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int8_t x2 = -49;
	volatile int8_t x3 = -1;
	uint16_t x4 = 2U;

	t0 = ((x1==x2)|(x3*x4));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 32U;
	volatile uint8_t x6 = UINT8_MAX;
	uint16_t x7 = 2698U;
	uint64_t t1 = 32LLU;

	t1 = ((x5==x6)|(x7*x8));

	if (t1 != 157226089616292860LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x12 = INT8_MAX;

	t2 = ((x9==x10)|(x11*x12));

	if (t2 != -127LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 8U;
	volatile uint32_t t3 = 0U;

	t3 = ((x13==x14)|(x15*x16));

	if (t3 != 4294967288U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x25 = 37U;
	volatile uint64_t x26 = UINT64_MAX;
	static volatile int64_t x27 = -1LL;
	int16_t x28 = INT16_MAX;

	t4 = ((x25==x26)|(x27*x28));

	if (t4 != -32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = -442444;
	static uint16_t x30 = 2541U;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;
	int64_t t5 = 3348978610933810772LL;

	t5 = ((x29==x30)|(x31*x32));

	if (t5 != 128LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = 833LLU;
	uint64_t x38 = UINT64_MAX;
	static int32_t x39 = -40;
	int16_t x40 = 110;
	volatile int32_t t6 = -2028;

	t6 = ((x37==x38)|(x39*x40));

	if (t6 != -4400) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = INT16_MAX;
	int32_t x46 = 1315467;
	int8_t x48 = INT8_MAX;
	int32_t t7 = -2661;

	t7 = ((x45==x46)|(x47*x48));

	if (t7 != -4161536) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x55 = 17867U;
	static uint64_t x56 = UINT64_MAX;
	volatile uint64_t t8 = 142833389863612432LLU;

	t8 = ((x53==x54)|(x55*x56));

	if (t8 != 18446744073709533749LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x57 = INT32_MIN;
	volatile int8_t x59 = INT8_MIN;
	uint8_t x60 = 3U;
	static volatile int32_t t9 = 120918;

	t9 = ((x57==x58)|(x59*x60));

	if (t9 != -384) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = 3;
	int64_t x62 = INT64_MIN;
	int32_t x63 = -13;
	uint32_t x64 = 325U;
	uint32_t t10 = 1217U;

	t10 = ((x61==x62)|(x63*x64));

	if (t10 != 4294963071U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x66 = 8U;
	static uint8_t x67 = 4U;
	volatile int8_t x68 = -1;
	int32_t t11 = 192;

	t11 = ((x65==x66)|(x67*x68));

	if (t11 != -4) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x69 = -1;
	static int32_t x70 = INT32_MAX;
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MIN;

	t12 = ((x69==x70)|(x71*x72));

	if (t12 != 16384) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = INT16_MIN;
	uint32_t x74 = 4193769U;
	uint8_t x76 = 108U;
	volatile int32_t t13 = 723;

	t13 = ((x73==x74)|(x75*x76));

	if (t13 != -108) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = -417546;
	volatile uint32_t x78 = 2U;
	volatile int64_t x79 = INT64_MIN;
	uint64_t x80 = 20687869983419LLU;
	uint64_t t14 = 4431063630172155930LLU;

	t14 = ((x77==x78)|(x79*x80));

	if (t14 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = 12U;
	static uint32_t x82 = 6727403U;
	int64_t x83 = -18592LL;
	uint32_t x84 = 425U;
	static int64_t t15 = 233719770LL;

	t15 = ((x81==x82)|(x83*x84));

	if (t15 != -7901600LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MIN;
	static int32_t x87 = -1;
	int8_t x88 = INT8_MIN;
	int32_t t16 = -32432;

	t16 = ((x85==x86)|(x87*x88));

	if (t16 != 129) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = UINT8_MAX;
	int32_t x90 = 37039726;
	static int8_t x91 = INT8_MIN;
	static int8_t x92 = INT8_MIN;
	int32_t t17 = 180866;

	t17 = ((x89==x90)|(x91*x92));

	if (t17 != 16384) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x93 = 62142653U;
	static uint64_t x94 = 55LLU;
	uint64_t x95 = 35619LLU;
	uint32_t x96 = 3681U;
	volatile uint64_t t18 = 1133608571234763302LLU;

	t18 = ((x93==x94)|(x95*x96));

	if (t18 != 131113539LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	uint16_t x99 = 5U;
	uint8_t x100 = 112U;

	t19 = ((x97==x98)|(x99*x100));

	if (t19 != 560) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	static int16_t x103 = -101;
	volatile int32_t t20 = 437186634;

	t20 = ((x101==x102)|(x103*x104));

	if (t20 != 14847) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x110 = 119770564907148750LL;
	uint8_t x111 = 39U;
	volatile int8_t x112 = INT8_MAX;
	int32_t t21 = 561928768;

	t21 = ((x109==x110)|(x111*x112));

	if (t21 != 4953) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x114 = -1LL;
	int8_t x115 = -1;
	static volatile int16_t x116 = -4;
	int32_t t22 = -22;

	t22 = ((x113==x114)|(x115*x116));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = INT32_MIN;
	volatile int8_t x122 = 1;
	int8_t x123 = INT8_MAX;
	int8_t x124 = -1;

	t23 = ((x121==x122)|(x123*x124));

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x125 = 6U;
	uint32_t x126 = 3527U;
	int16_t x127 = INT16_MIN;
	static volatile uint16_t x128 = 1352U;

	t24 = ((x125==x126)|(x127*x128));

	if (t24 != -44302336) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x130 = -7176549;
	uint32_t x131 = 99U;
	int16_t x132 = INT16_MAX;

	t25 = ((x129==x130)|(x131*x132));

	if (t25 != 3243933U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = INT16_MAX;
	volatile int8_t x138 = INT8_MIN;
	uint64_t x139 = UINT64_MAX;

	t26 = ((x137==x138)|(x139*x140));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x141 = INT16_MIN;
	uint8_t x142 = UINT8_MAX;
	volatile int64_t x143 = -1LL;
	uint8_t x144 = UINT8_MAX;
	int64_t t27 = -21383242725176LL;

	t27 = ((x141==x142)|(x143*x144));

	if (t27 != -255LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	int32_t x147 = -393700;
	static uint32_t x148 = 75U;
	static volatile uint32_t t28 = 1819752828U;

	t28 = ((x145==x146)|(x147*x148));

	if (t28 != 4265439796U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	static int32_t x151 = INT32_MAX;
	volatile uint32_t t29 = 10895932U;

	t29 = ((x149==x150)|(x151*x152));

	if (t29 != 2147483649U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x158 = 106;
	uint16_t x159 = 29U;
	int32_t x160 = -1;
	static volatile int32_t t30 = -382;

	t30 = ((x157==x158)|(x159*x160));

	if (t30 != -29) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x162 = INT64_MIN;
	uint8_t x163 = 105U;
	int16_t x164 = -200;
	int32_t t31 = -768103;

	t31 = ((x161==x162)|(x163*x164));

	if (t31 != -21000) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = INT16_MIN;
	int8_t x167 = -1;

	t32 = ((x165==x166)|(x167*x168));

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x169 = INT64_MAX;
	volatile int64_t x170 = INT64_MIN;
	volatile int32_t x172 = 2680;
	volatile int32_t t33 = -17197;

	t33 = ((x169==x170)|(x171*x172));

	if (t33 != -2680) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = -8893176;
	int8_t x179 = 0;
	int8_t x180 = INT8_MAX;
	int32_t t34 = 48938;

	t34 = ((x177==x178)|(x179*x180));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x186 = 2U;
	static int16_t x187 = 12314;

	t35 = ((x185==x186)|(x187*x188));

	if (t35 != 3774310044U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x190 = INT8_MAX;
	static int64_t x191 = -17566994075LL;
	int32_t x192 = -2267402;

	t36 = ((x189==x190)|(x191*x192));

	if (t36 != 39831437499643150LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x197 = 35U;
	int64_t x198 = -1LL;
	uint16_t x199 = 52U;
	uint16_t x200 = 23U;
	static volatile int32_t t37 = 9699136;

	t37 = ((x197==x198)|(x199*x200));

	if (t37 != 1196) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x205 = 916U;
	int64_t x206 = -1LL;
	volatile int64_t x207 = -1LL;
	int16_t x208 = INT16_MAX;
	int64_t t38 = -781405462LL;

	t38 = ((x205==x206)|(x207*x208));

	if (t38 != -32767LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = -1LL;
	uint16_t x218 = 4970U;
	uint64_t x219 = 2789347LLU;
	uint32_t x220 = 88147376U;
	uint64_t t39 = 7LLU;

	t39 = ((x217==x218)|(x219*x220));

	if (t39 != 245873618803472LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x221 = INT32_MIN;
	static int8_t x222 = INT8_MAX;
	uint64_t x223 = 3LLU;
	volatile uint64_t t40 = 869450369670960997LLU;

	t40 = ((x221==x222)|(x223*x224));

	if (t40 != 98301LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x225 = INT32_MIN;
	int32_t x226 = INT32_MAX;
	volatile int16_t x227 = -1;
	uint64_t x228 = UINT64_MAX;

	t41 = ((x225==x226)|(x227*x228));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = INT16_MIN;
	volatile int16_t x231 = 1795;

	t42 = ((x229==x230)|(x231*x232));

	if (t42 != 187390820U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x233 = INT16_MAX;
	int8_t x234 = -1;
	uint16_t x235 = 1893U;
	volatile uint8_t x236 = UINT8_MAX;
	static int32_t t43 = 809;

	t43 = ((x233==x234)|(x235*x236));

	if (t43 != 482715) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x237 = 14731;
	int8_t x238 = -11;
	volatile int8_t x239 = INT8_MIN;
	uint32_t x240 = 54334U;
	uint32_t t44 = 14229190U;

	t44 = ((x237==x238)|(x239*x240));

	if (t44 != 4288012544U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x241 = UINT64_MAX;
	uint64_t x243 = UINT64_MAX;
	static int16_t x244 = INT16_MAX;
	static uint64_t t45 = 6116523687506LLU;

	t45 = ((x241==x242)|(x243*x244));

	if (t45 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x246 = INT32_MAX;
	static volatile uint64_t x247 = 2950499175808190LLU;
	uint64_t t46 = 1854863824LLU;

	t46 = ((x245==x246)|(x247*x248));

	if (t46 != 12707928486417793024LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x249 = INT8_MAX;
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = INT8_MAX;
	static int16_t x252 = INT16_MAX;

	t47 = ((x249==x250)|(x251*x252));

	if (t47 != 4161409) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x253 = -1;
	uint8_t x254 = 2U;

	t48 = ((x253==x254)|(x255*x256));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x257 = 1088488764LLU;
	int16_t x259 = 21;
	int16_t x260 = 2469;
	volatile int32_t t49 = 0;

	t49 = ((x257==x258)|(x259*x260));

	if (t49 != 51849) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x261 = 87;
	volatile int64_t x262 = INT64_MAX;
	volatile int16_t x264 = 79;
	int32_t t50 = -33243470;

	t50 = ((x261==x262)|(x263*x264));

	if (t50 != 10033) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x265 = INT64_MIN;
	volatile int32_t x266 = INT32_MAX;
	volatile uint8_t x267 = UINT8_MAX;
	int8_t x268 = INT8_MIN;

	t51 = ((x265==x266)|(x267*x268));

	if (t51 != -32640) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x271 = INT8_MIN;

	t52 = ((x269==x270)|(x271*x272));

	if (t52 != -8388480) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x277 = -1;
	int64_t x278 = INT64_MAX;
	int64_t x279 = -1LL;
	int32_t x280 = INT32_MAX;
	int64_t t53 = 28783LL;

	t53 = ((x277==x278)|(x279*x280));

	if (t53 != -2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x285 = 2U;
	int32_t x286 = -183205;
	uint32_t x287 = 239050908U;
	static int64_t x288 = -883880LL;
	volatile int64_t t54 = 634613484769LL;

	t54 = ((x285==x286)|(x287*x288));

	if (t54 != -211292316563040LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MIN;
	volatile uint16_t x291 = UINT16_MAX;
	static int32_t t55 = 231877489;

	t55 = ((x289==x290)|(x291*x292));

	if (t55 != -65535) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x293 = INT64_MAX;
	int8_t x294 = 1;
	volatile int16_t x296 = -1192;
	uint32_t t56 = 3U;

	t56 = ((x293==x294)|(x295*x296));

	if (t56 != 4270130784U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x297 = 439100855U;
	static uint8_t x298 = 4U;
	static uint32_t x300 = UINT32_MAX;
	static volatile uint32_t t57 = 8698U;

	t57 = ((x297==x298)|(x299*x300));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x301 = 159LLU;
	volatile int32_t x302 = INT32_MAX;
	static volatile uint64_t t58 = 3866799160494010LLU;

	t58 = ((x301==x302)|(x303*x304));

	if (t58 != 32768LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x305 = -29081;
	int64_t x306 = INT64_MIN;
	uint8_t x307 = UINT8_MAX;
	volatile int64_t x308 = -14LL;
	static int64_t t59 = 22356335LL;

	t59 = ((x305==x306)|(x307*x308));

	if (t59 != -3570LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x309 = -1;
	uint32_t x311 = 6107385U;
	int16_t x312 = INT16_MAX;

	t60 = ((x309==x310)|(x311*x312));

	if (t60 != 2552188679U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x317 = INT32_MIN;
	uint64_t x319 = 157644801977LLU;
	uint64_t t61 = 15556042LLU;

	t61 = ((x317==x318)|(x319*x320));

	if (t61 != 18446743916064749639LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x321 = -53440;
	static int16_t x322 = -1;
	uint8_t x324 = 67U;
	volatile int32_t t62 = 56684;

	t62 = ((x321==x322)|(x323*x324));

	if (t62 != 804) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x325 = INT64_MAX;
	static int16_t x327 = INT16_MAX;
	int16_t x328 = -1;
	int32_t t63 = -262;

	t63 = ((x325==x326)|(x327*x328));

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x329 = UINT8_MAX;
	static int8_t x331 = INT8_MIN;
	volatile uint32_t t64 = 1723U;

	t64 = ((x329==x330)|(x331*x332));

	if (t64 != 4294962049U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x334 = 18236;
	uint16_t x335 = 3963U;
	static uint32_t x336 = 6799U;

	t65 = ((x333==x334)|(x335*x336));

	if (t65 != 26944437U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x341 = -1;
	int16_t x342 = -1;
	uint8_t x344 = 0U;
	static uint64_t t66 = 0LLU;

	t66 = ((x341==x342)|(x343*x344));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x345 = 1300;
	int32_t x346 = 792;
	int32_t x347 = -1242;
	uint8_t x348 = 60U;

	t67 = ((x345==x346)|(x347*x348));

	if (t67 != -74520) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x353 = 4LLU;
	uint64_t x354 = 15009LLU;
	uint32_t x355 = 535U;
	static volatile int16_t x356 = INT16_MIN;
	uint32_t t68 = 7097226U;

	t68 = ((x353==x354)|(x355*x356));

	if (t68 != 4277436416U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x361 = INT64_MIN;
	int64_t x362 = -386155LL;
	int64_t x363 = -1LL;
	int16_t x364 = 149;
	int64_t t69 = 0LL;

	t69 = ((x361==x362)|(x363*x364));

	if (t69 != -149LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x365 = INT64_MAX;
	int32_t x366 = 254772;
	static uint16_t x367 = UINT16_MAX;
	int32_t x368 = -1;
	volatile int32_t t70 = -7400986;

	t70 = ((x365==x366)|(x367*x368));

	if (t70 != -65535) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x381 = -1LL;
	int16_t x382 = 54;
	volatile int64_t x383 = 33753589200LL;
	static uint64_t x384 = 122672788082638LLU;
	uint64_t t71 = 247LLU;

	t71 = ((x381==x382)|(x383*x384));

	if (t71 != 16933198877910375776LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x389 = UINT8_MAX;
	int32_t x390 = -447232109;
	uint64_t x391 = 2258534LLU;
	int8_t x392 = INT8_MIN;

	t72 = ((x389==x390)|(x391*x392));

	if (t72 != 18446744073420459264LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x393 = -1;
	int64_t x394 = INT64_MIN;
	int16_t x395 = -1;
	int8_t x396 = INT8_MAX;
	int32_t t73 = -25358363;

	t73 = ((x393==x394)|(x395*x396));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x399 = 10200742LLU;
	uint8_t x400 = 14U;
	static uint64_t t74 = 10230098168146112LLU;

	t74 = ((x397==x398)|(x399*x400));

	if (t74 != 142810388LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x401 = 39LL;
	static uint32_t x404 = 5631791U;
	volatile uint32_t t75 = 834616U;

	t75 = ((x401==x402)|(x403*x404));

	if (t75 != 3574098048U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x405 = 15849;
	volatile uint16_t x406 = 9U;
	int8_t x407 = -1;
	uint16_t x408 = 22U;
	volatile int32_t t76 = -5289;

	t76 = ((x405==x406)|(x407*x408));

	if (t76 != -22) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x409 = INT64_MIN;
	int64_t x410 = INT64_MAX;
	uint32_t x412 = 2051996U;

	t77 = ((x409==x410)|(x411*x412));

	if (t77 != 260603492U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x413 = -12;
	static uint16_t x414 = UINT16_MAX;
	int8_t x415 = INT8_MAX;
	uint16_t x416 = 729U;

	t78 = ((x413==x414)|(x415*x416));

	if (t78 != 92583) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x421 = INT16_MAX;
	volatile int16_t x422 = INT16_MAX;
	volatile uint64_t x424 = 51370810569LLU;
	volatile uint64_t t79 = 4409257840LLU;

	t79 = ((x421==x422)|(x423*x424));

	if (t79 != 18446744022338741047LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x429 = 16;
	volatile int32_t x430 = INT32_MIN;
	int32_t x431 = -258;
	volatile int16_t x432 = 7;

	t80 = ((x429==x430)|(x431*x432));

	if (t80 != -1806) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x433 = 254LL;
	int8_t x434 = 7;
	uint32_t x435 = UINT32_MAX;
	int8_t x436 = 13;
	volatile uint32_t t81 = 132534U;

	t81 = ((x433==x434)|(x435*x436));

	if (t81 != 4294967283U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x437 = 3206909524LLU;
	int8_t x439 = INT8_MAX;
	volatile int32_t t82 = 1;

	t82 = ((x437==x438)|(x439*x440));

	if (t82 != 889) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x441 = -3;
	int16_t x443 = INT16_MIN;
	static int64_t x444 = 3401481322848LL;
	volatile int64_t t83 = -120329286212835LL;

	t83 = ((x441==x442)|(x443*x444));

	if (t83 != -111459739987083264LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x448 = -21;
	static uint32_t t84 = 1217U;

	t84 = ((x445==x446)|(x447*x448));

	if (t84 != 2404518400U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x449 = INT64_MIN;
	static uint8_t x450 = 10U;
	volatile int32_t x451 = INT32_MIN;
	static int16_t x452 = 1;
	int32_t t85 = INT32_MIN;

	t85 = ((x449==x450)|(x451*x452));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x453 = 4;
	volatile int32_t x454 = -1;
	int8_t x456 = -22;

	t86 = ((x453==x454)|(x455*x456));

	if (t86 != -5610) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x457 = INT16_MIN;
	static int8_t x459 = INT8_MIN;
	int32_t t87 = 141;

	t87 = ((x457==x458)|(x459*x460));

	if (t87 != 3328) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x465 = UINT64_MAX;
	int64_t x466 = -1425LL;
	volatile int8_t x467 = INT8_MIN;
	static int16_t x468 = -1;
	volatile int32_t t88 = 3054;

	t88 = ((x465==x466)|(x467*x468));

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x469 = INT64_MAX;
	volatile int32_t x470 = INT32_MAX;
	uint16_t x471 = UINT16_MAX;
	volatile int8_t x472 = 2;
	volatile int32_t t89 = 279778;

	t89 = ((x469==x470)|(x471*x472));

	if (t89 != 131070) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x477 = INT64_MIN;
	int8_t x478 = INT8_MAX;
	int16_t x479 = -2737;
	uint8_t x480 = 1U;
	volatile int32_t t90 = 3;

	t90 = ((x477==x478)|(x479*x480));

	if (t90 != -2737) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x481 = INT32_MAX;
	int8_t x482 = 2;
	static int8_t x484 = 1;
	int32_t t91 = 0;

	t91 = ((x481==x482)|(x483*x484));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x486 = 20LLU;
	int8_t x487 = INT8_MAX;
	int32_t x488 = 134398;
	volatile int32_t t92 = 98208;

	t92 = ((x485==x486)|(x487*x488));

	if (t92 != 17068546) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x489 = -1;
	int64_t x490 = 5514LL;
	static int64_t t93 = -3345925254158LL;

	t93 = ((x489==x490)|(x491*x492));

	if (t93 != -63843896320LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x493 = 58U;
	int64_t x494 = INT64_MAX;
	int16_t x495 = INT16_MIN;
	volatile int16_t x496 = -1;
	static int32_t t94 = 63;

	t94 = ((x493==x494)|(x495*x496));

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x498 = INT32_MAX;
	static int8_t x499 = INT8_MIN;
	int8_t x500 = 0;
	volatile int32_t t95 = -142;

	t95 = ((x497==x498)|(x499*x500));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x501 = -25186LL;
	uint8_t x502 = UINT8_MAX;
	int32_t x504 = -1;
	volatile int32_t t96 = -2734;

	t96 = ((x501==x502)|(x503*x504));

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x509 = INT32_MIN;
	int8_t x510 = INT8_MAX;
	int64_t x512 = -1LL;
	int64_t t97 = -529089799295LL;

	t97 = ((x509==x510)|(x511*x512));

	if (t97 != -127LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x517 = -12;
	int32_t x520 = INT32_MIN;
	static uint32_t t98 = 716U;

	t98 = ((x517==x518)|(x519*x520));

	if (t98 != 2147483648U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x521 = INT32_MAX;
	volatile int8_t x522 = -7;
	static int64_t x524 = -1LL;
	int64_t t99 = -650651LL;

	t99 = ((x521==x522)|(x523*x524));

	if (t99 != -2LL) { NG(); } else { ; }
	
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

