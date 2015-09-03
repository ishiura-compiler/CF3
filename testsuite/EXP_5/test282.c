#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x2 = -6;
volatile int64_t x3 = 3545437892987LL;
uint32_t x6 = 263368555U;
static uint64_t x12 = 3LLU;
volatile int32_t t4 = -32204;
volatile int16_t x25 = -509;
static volatile int32_t t5 = -31236;
static volatile int32_t x31 = 59708471;
int64_t x33 = -85859LL;
int32_t t7 = 1652769;
static int32_t x46 = INT32_MAX;
int32_t t12 = -253791636;
static int64_t x61 = -1715887LL;
uint16_t x73 = UINT16_MAX;
uint32_t x79 = 31737U;
int16_t x87 = -342;
uint32_t x100 = UINT32_MAX;
static uint64_t x106 = 700459458549487097LLU;
int16_t x111 = -2311;
int16_t x112 = -1;
int32_t x122 = 5538153;
volatile uint32_t x123 = 3209U;
uint16_t x141 = 0U;
int32_t t30 = -3;
volatile int32_t t31 = -1708;
int32_t t32 = 2;
int16_t x166 = -1;
int64_t x182 = 916044533828LL;
int8_t x183 = -1;
int16_t x184 = INT16_MIN;
uint16_t x185 = UINT16_MAX;
volatile int8_t x190 = 1;
static int32_t t39 = 31217;
int16_t x206 = INT16_MAX;
int64_t x213 = 3060930LL;
static uint64_t x217 = 7503LLU;
int8_t x218 = INT8_MIN;
static int64_t x219 = -3305215007148LL;
static int16_t x220 = INT16_MAX;
volatile int32_t t45 = -490752;
int16_t x226 = 56;
int32_t x231 = 778;
static uint8_t x234 = 1U;
volatile int32_t t50 = -687366;
static int16_t x255 = -1;
volatile int8_t x257 = INT8_MIN;
static int64_t x259 = 0LL;
int64_t x260 = -1LL;
uint64_t x266 = 215323596892521LLU;
volatile int16_t x267 = -14022;
int16_t x272 = INT16_MAX;
int32_t t55 = -25;
static uint16_t x275 = 7U;
static int32_t t56 = -7;
int32_t x282 = INT32_MIN;
int8_t x283 = INT8_MIN;
uint16_t x299 = 9U;
uint32_t x302 = 108081U;
uint8_t x303 = UINT8_MAX;
static int32_t t61 = 946376;
uint64_t x309 = UINT64_MAX;
volatile int32_t t62 = -1843036;
int32_t t63 = -5213;
static int64_t x328 = -1LL;
volatile int32_t t65 = -10021158;
int16_t x334 = 0;
static uint64_t x345 = UINT64_MAX;
int16_t x358 = -1;
static int16_t x360 = 7;
static int32_t t73 = 158385756;
volatile uint16_t x373 = 653U;
int32_t x376 = INT32_MIN;
int64_t x379 = 410637975LL;
int8_t x380 = INT8_MAX;
int32_t t78 = 439754262;
int16_t x393 = 2;
int8_t x397 = 29;
int32_t x401 = -1;
uint8_t x408 = UINT8_MAX;
int32_t t86 = -6;
int16_t x419 = INT16_MIN;
volatile int64_t x423 = INT64_MIN;
int16_t x424 = INT16_MIN;
static int32_t t89 = -123034387;
int32_t x439 = INT32_MIN;
uint16_t x447 = UINT16_MAX;
volatile int32_t t94 = -3132636;
volatile int8_t x450 = -1;
int32_t x451 = 7949931;
int32_t t95 = -224;
int32_t x454 = -41035516;
int16_t x460 = -16212;
volatile int64_t x462 = INT64_MIN;
uint64_t x464 = 3705003LLU;


void f0(void) {
	uint64_t x1 = 128586066475243530LLU;
	int16_t x4 = -3426;
	volatile int32_t t0 = -3;

	t0 = (x1<((x2-x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -545137725;

	t1 = (x5<((x6-x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	volatile int16_t x10 = -1;
	int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -52;

	t2 = (x9<((x10-x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MIN;
	volatile int8_t x15 = -1;
	static uint16_t x16 = UINT16_MAX;
	int32_t t3 = 13;

	t3 = (x13<((x14-x15)<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	volatile uint16_t x18 = 55U;
	static volatile int8_t x19 = INT8_MIN;
	static int8_t x20 = INT8_MAX;

	t4 = (x17<((x18-x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = -1LL;
	int64_t x27 = -1LL;
	int32_t x28 = INT32_MAX;

	t5 = (x25<((x26-x27)<x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 427U;
	int32_t x30 = -10234405;
	int64_t x32 = INT64_MIN;
	volatile int32_t t6 = -12223;

	t6 = (x29<((x30-x31)<x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x34 = UINT64_MAX;
	static uint32_t x35 = 6U;
	static int16_t x36 = -12555;

	t7 = (x33<((x34-x35)<x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	static int8_t x42 = -1;
	uint16_t x43 = UINT16_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t8 = -9;

	t8 = (x41<((x42-x43)<x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MAX;
	int16_t x47 = 1;
	int64_t x48 = -121334897434LL;
	static int32_t t9 = 8114;

	t9 = (x45<((x46-x47)<x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	uint16_t x50 = 4121U;
	volatile int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MIN;
	static int32_t t10 = -7;

	t10 = (x49<((x50-x51)<x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -1;
	uint32_t x54 = 918U;
	int32_t x55 = 2;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t11 = 5506009;

	t11 = (x53<((x54-x55)<x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	uint16_t x60 = 1469U;

	t12 = (x57<((x58-x59)<x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = UINT16_MAX;
	static volatile uint64_t x63 = 4LLU;
	static int16_t x64 = INT16_MIN;
	static int32_t t13 = -108679567;

	t13 = (x61<((x62-x63)<x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	static int16_t x70 = -1;
	static uint16_t x71 = UINT16_MAX;
	int16_t x72 = INT16_MIN;
	int32_t t14 = -524;

	t14 = (x69<((x70-x71)<x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x74 = 996189463640LL;
	int8_t x75 = 1;
	uint8_t x76 = 5U;
	static volatile int32_t t15 = 2;

	t15 = (x73<((x74-x75)<x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MAX;
	int32_t x78 = INT32_MIN;
	static volatile int64_t x80 = 497254449267846128LL;
	int32_t t16 = 2075680;

	t16 = (x77<((x78-x79)<x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MIN;
	static int32_t x86 = -41;
	uint32_t x88 = 58605009U;
	static volatile int32_t t17 = 14793076;

	t17 = (x85<((x86-x87)<x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x89 = 1;
	uint16_t x90 = 7008U;
	static volatile int32_t x91 = -1;
	uint16_t x92 = 3044U;
	static int32_t t18 = -365;

	t18 = (x89<((x90-x91)<x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = 0;
	uint32_t x94 = 866216990U;
	static uint8_t x95 = UINT8_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t19 = -1771;

	t19 = (x93<((x94-x95)<x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = UINT16_MAX;
	int32_t x98 = 5729;
	int16_t x99 = 651;
	static volatile int32_t t20 = -374492679;

	t20 = (x97<((x98-x99)<x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x105 = UINT16_MAX;
	int64_t x107 = 3088560701747LL;
	volatile int32_t x108 = INT32_MIN;
	int32_t t21 = -533667039;

	t21 = (x105<((x106-x107)<x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = 71U;
	volatile int32_t x110 = INT32_MIN;
	volatile int32_t t22 = 915370427;

	t22 = (x109<((x110-x111)<x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x113 = INT8_MIN;
	int64_t x114 = -7272913133329050LL;
	volatile uint64_t x115 = 37387154433LLU;
	static int16_t x116 = -1;
	volatile int32_t t23 = 26;

	t23 = (x113<((x114-x115)<x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x121 = UINT64_MAX;
	uint8_t x124 = 33U;
	static int32_t t24 = 160614;

	t24 = (x121<((x122-x123)<x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x125 = -480315LL;
	volatile int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MAX;
	int32_t t25 = 23541238;

	t25 = (x125<((x126-x127)<x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = INT32_MIN;
	uint16_t x130 = 594U;
	int64_t x131 = -1LL;
	volatile int64_t x132 = 1590775163927970LL;
	volatile int32_t t26 = -20;

	t26 = (x129<((x130-x131)<x132));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x133 = 20U;
	int8_t x134 = -1;
	static int8_t x135 = -4;
	int32_t x136 = INT32_MAX;
	int32_t t27 = 27;

	t27 = (x133<((x134-x135)<x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x142 = 4083U;
	uint32_t x143 = 9U;
	static volatile int32_t x144 = 2;
	int32_t t28 = -72;

	t28 = (x141<((x142-x143)<x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x149 = UINT16_MAX;
	int16_t x150 = -1;
	volatile int16_t x151 = INT16_MAX;
	static int16_t x152 = 0;
	volatile int32_t t29 = 1864;

	t29 = (x149<((x150-x151)<x152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x153 = INT32_MIN;
	int64_t x154 = 9830326971641LL;
	int64_t x155 = -17788LL;
	volatile uint32_t x156 = UINT32_MAX;

	t30 = (x153<((x154-x155)<x156));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = -1LL;
	uint32_t x158 = 111U;
	volatile uint8_t x159 = 0U;
	uint64_t x160 = 29LLU;

	t31 = (x157<((x158-x159)<x160));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = -1LL;
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = 5594LL;
	int16_t x164 = -11;

	t32 = (x161<((x162-x163)<x164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = INT16_MIN;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = 15U;
	static int32_t t33 = -264724150;

	t33 = (x165<((x166-x167)<x168));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = INT8_MIN;
	static int16_t x170 = 1325;
	int32_t x171 = 63;
	int32_t x172 = INT32_MIN;
	volatile int32_t t34 = -392736041;

	t34 = (x169<((x170-x171)<x172));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = INT8_MAX;
	volatile uint64_t x178 = 2995039000389144318LLU;
	static uint64_t x179 = 1370LLU;
	int16_t x180 = INT16_MAX;
	volatile int32_t t35 = 208790;

	t35 = (x177<((x178-x179)<x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x181 = 14896947750LLU;
	volatile int32_t t36 = -29618420;

	t36 = (x181<((x182-x183)<x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x186 = 11314274LL;
	volatile int64_t x187 = -1LL;
	static volatile uint32_t x188 = 21010372U;
	int32_t t37 = -3023;

	t37 = (x185<((x186-x187)<x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = INT64_MIN;
	int64_t x191 = -16013312039121LL;
	static int64_t x192 = INT64_MAX;
	int32_t t38 = 131;

	t38 = (x189<((x190-x191)<x192));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = 4072932520LL;
	int32_t x194 = -576;
	uint8_t x195 = 1U;
	int8_t x196 = 15;

	t39 = (x193<((x194-x195)<x196));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x197 = 6U;
	static uint64_t x198 = 975108265580085392LLU;
	static int32_t x199 = -22;
	volatile uint32_t x200 = 3163U;
	static volatile int32_t t40 = 7833;

	t40 = (x197<((x198-x199)<x200));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x205 = 12475U;
	int32_t x207 = INT32_MAX;
	int32_t x208 = INT32_MAX;
	static int32_t t41 = -1;

	t41 = (x205<((x206-x207)<x208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x209 = 2434225259145481511LLU;
	uint64_t x210 = 1306973995LLU;
	uint32_t x211 = 93157565U;
	static uint64_t x212 = 39603578844177379LLU;
	int32_t t42 = -2190968;

	t42 = (x209<((x210-x211)<x212));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x214 = 62U;
	volatile int32_t x215 = -1;
	int16_t x216 = 1;
	int32_t t43 = -10638;

	t43 = (x213<((x214-x215)<x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t t44 = -2604;

	t44 = (x217<((x218-x219)<x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x221 = 0U;
	int8_t x222 = -18;
	int8_t x223 = 0;
	uint8_t x224 = UINT8_MAX;

	t45 = (x221<((x222-x223)<x224));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x225 = INT16_MIN;
	int16_t x227 = -6306;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t46 = -36418;

	t46 = (x225<((x226-x227)<x228));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x229 = 5539LL;
	volatile uint64_t x230 = UINT64_MAX;
	int64_t x232 = -1LL;
	volatile int32_t t47 = 125;

	t47 = (x229<((x230-x231)<x232));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = INT8_MIN;
	uint64_t x235 = 4709LLU;
	int16_t x236 = INT16_MAX;
	int32_t t48 = -1588;

	t48 = (x233<((x234-x235)<x236));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x241 = 20;
	int16_t x242 = INT16_MIN;
	static volatile uint8_t x243 = 1U;
	volatile int8_t x244 = -1;
	volatile int32_t t49 = -13889748;

	t49 = (x241<((x242-x243)<x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x245 = 273308897636297509LLU;
	static int16_t x246 = INT16_MIN;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = UINT16_MAX;

	t50 = (x245<((x246-x247)<x248));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x253 = 1;
	uint64_t x254 = 1LLU;
	int8_t x256 = 3;
	int32_t t51 = -93782737;

	t51 = (x253<((x254-x255)<x256));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x258 = 3;
	static int32_t t52 = -288221832;

	t52 = (x257<((x258-x259)<x260));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = -13630;
	int64_t x262 = -1LL;
	uint32_t x263 = UINT32_MAX;
	volatile int8_t x264 = 15;
	volatile int32_t t53 = -33186737;

	t53 = (x261<((x262-x263)<x264));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x265 = INT8_MAX;
	volatile uint32_t x268 = 346235844U;
	static volatile int32_t t54 = 205790;

	t54 = (x265<((x266-x267)<x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MAX;
	uint64_t x271 = 717332393520LLU;

	t55 = (x269<((x270-x271)<x272));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MAX;
	uint8_t x276 = 9U;

	t56 = (x273<((x274-x275)<x276));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x277 = 2648U;
	uint64_t x278 = 60978974843236LLU;
	static uint64_t x279 = 121746143343191348LLU;
	static uint64_t x280 = 7226LLU;
	volatile int32_t t57 = 418;

	t57 = (x277<((x278-x279)<x280));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x281 = 1;
	int32_t x284 = -1;
	static int32_t t58 = 12029;

	t58 = (x281<((x282-x283)<x284));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x285 = INT16_MIN;
	volatile int8_t x286 = 0;
	uint16_t x287 = 21U;
	volatile uint8_t x288 = 103U;
	int32_t t59 = -3160;

	t59 = (x285<((x286-x287)<x288));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MIN;
	uint64_t x300 = 6LLU;
	static volatile int32_t t60 = 1529920;

	t60 = (x297<((x298-x299)<x300));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x301 = 13U;
	int64_t x304 = INT64_MAX;

	t61 = (x301<((x302-x303)<x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x310 = 3334538168LL;
	volatile uint16_t x311 = 5109U;
	uint8_t x312 = 42U;

	t62 = (x309<((x310-x311)<x312));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x313 = INT16_MIN;
	int64_t x314 = -1LL;
	static int16_t x315 = 427;
	int64_t x316 = -1LL;

	t63 = (x313<((x314-x315)<x316));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x321 = 26;
	static uint8_t x322 = 2U;
	int32_t x323 = 26;
	int64_t x324 = 12243666788LL;
	int32_t t64 = 6824502;

	t64 = (x321<((x322-x323)<x324));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MIN;

	t65 = (x325<((x326-x327)<x328));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x329 = INT16_MIN;
	int32_t x330 = -1;
	int8_t x331 = INT8_MAX;
	static uint64_t x332 = 1419371447297947230LLU;
	int32_t t66 = -20924927;

	t66 = (x329<((x330-x331)<x332));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = -1LL;
	uint8_t x335 = 5U;
	volatile int16_t x336 = -1;
	volatile int32_t t67 = -158;

	t67 = (x333<((x334-x335)<x336));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x337 = INT8_MIN;
	int64_t x338 = INT64_MAX;
	int32_t x339 = 3668161;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t68 = 6786919;

	t68 = (x337<((x338-x339)<x340));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x341 = 43U;
	uint32_t x342 = 1140929U;
	int32_t x343 = -1;
	int16_t x344 = INT16_MIN;
	volatile int32_t t69 = -3535378;

	t69 = (x341<((x342-x343)<x344));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x346 = -16LL;
	int8_t x347 = -1;
	uint16_t x348 = 29U;
	volatile int32_t t70 = 3070369;

	t70 = (x345<((x346-x347)<x348));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x349 = -1;
	int16_t x350 = -1;
	int64_t x351 = INT64_MIN;
	uint8_t x352 = 12U;
	volatile int32_t t71 = 32305527;

	t71 = (x349<((x350-x351)<x352));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = 85087027244100099LL;
	volatile uint16_t x354 = 21183U;
	static volatile int16_t x355 = -1;
	int8_t x356 = 3;
	static int32_t t72 = 329;

	t72 = (x353<((x354-x355)<x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x357 = INT8_MIN;
	static int8_t x359 = -1;

	t73 = (x357<((x358-x359)<x360));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x361 = 9U;
	volatile int8_t x362 = 1;
	volatile uint16_t x363 = 6U;
	int64_t x364 = INT64_MIN;
	volatile int32_t t74 = 207955402;

	t74 = (x361<((x362-x363)<x364));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x365 = 0U;
	static uint64_t x366 = 6266571217414LLU;
	static volatile uint16_t x367 = 5U;
	uint8_t x368 = 15U;
	int32_t t75 = -260673;

	t75 = (x365<((x366-x367)<x368));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x369 = 184179;
	int8_t x370 = -1;
	int64_t x371 = 190754349LL;
	int8_t x372 = INT8_MAX;
	volatile int32_t t76 = -23188391;

	t76 = (x369<((x370-x371)<x372));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x374 = INT32_MAX;
	static uint32_t x375 = 1981U;
	int32_t t77 = -182119796;

	t77 = (x373<((x374-x375)<x376));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x377 = INT32_MIN;
	static int32_t x378 = INT32_MIN;

	t78 = (x377<((x378-x379)<x380));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x381 = -1;
	static int16_t x382 = -131;
	uint8_t x383 = UINT8_MAX;
	uint32_t x384 = UINT32_MAX;
	int32_t t79 = -30605937;

	t79 = (x381<((x382-x383)<x384));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x385 = UINT8_MAX;
	uint32_t x386 = 12851328U;
	int32_t x387 = INT32_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t80 = -9158;

	t80 = (x385<((x386-x387)<x388));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x389 = INT64_MIN;
	static int16_t x390 = -1;
	uint32_t x391 = 28U;
	volatile int64_t x392 = INT64_MIN;
	static volatile int32_t t81 = 99;

	t81 = (x389<((x390-x391)<x392));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x394 = 7U;
	static uint64_t x395 = UINT64_MAX;
	volatile int32_t x396 = -15747330;
	volatile int32_t t82 = -1647500;

	t82 = (x393<((x394-x395)<x396));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x398 = INT64_MIN;
	int16_t x399 = -1;
	int32_t x400 = INT32_MAX;
	int32_t t83 = 631005;

	t83 = (x397<((x398-x399)<x400));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x402 = INT8_MAX;
	static uint32_t x403 = 127U;
	volatile int64_t x404 = INT64_MIN;
	volatile int32_t t84 = 49574;

	t84 = (x401<((x402-x403)<x404));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x405 = -1;
	volatile uint16_t x406 = 2201U;
	int8_t x407 = INT8_MIN;
	static volatile int32_t t85 = 0;

	t85 = (x405<((x406-x407)<x408));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x409 = -45156839;
	static volatile uint64_t x410 = 31093866LLU;
	volatile int32_t x411 = 0;
	static uint16_t x412 = 384U;

	t86 = (x409<((x410-x411)<x412));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x413 = 22U;
	static uint64_t x414 = 3247121626LLU;
	uint8_t x415 = UINT8_MAX;
	static int64_t x416 = -43801750541670322LL;
	volatile int32_t t87 = -569401;

	t87 = (x413<((x414-x415)<x416));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x417 = 2123490778981382646LLU;
	uint8_t x418 = UINT8_MAX;
	static int8_t x420 = INT8_MIN;
	int32_t t88 = 203532348;

	t88 = (x417<((x418-x419)<x420));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x421 = UINT8_MAX;
	int8_t x422 = INT8_MIN;

	t89 = (x421<((x422-x423)<x424));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x429 = 13666797736LL;
	volatile int8_t x430 = INT8_MIN;
	volatile uint16_t x431 = 202U;
	volatile int8_t x432 = INT8_MIN;
	int32_t t90 = 31;

	t90 = (x429<((x430-x431)<x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x433 = -3066224950612LL;
	uint16_t x434 = 0U;
	int32_t x435 = INT32_MAX;
	uint32_t x436 = 9U;
	volatile int32_t t91 = 25150;

	t91 = (x433<((x434-x435)<x436));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x437 = 11874618564967009LLU;
	int64_t x438 = -1LL;
	int32_t x440 = INT32_MAX;
	int32_t t92 = 15;

	t92 = (x437<((x438-x439)<x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x441 = UINT16_MAX;
	int16_t x442 = INT16_MIN;
	uint64_t x443 = UINT64_MAX;
	volatile int64_t x444 = -1LL;
	volatile int32_t t93 = -1972438;

	t93 = (x441<((x442-x443)<x444));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x445 = 444U;
	int64_t x446 = INT64_MAX;
	static int8_t x448 = -1;

	t94 = (x445<((x446-x447)<x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = 0;
	int32_t x452 = INT32_MAX;

	t95 = (x449<((x450-x451)<x452));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x453 = 0U;
	volatile uint64_t x455 = 846988525LLU;
	uint64_t x456 = 996203131856LLU;
	int32_t t96 = -1;

	t96 = (x453<((x454-x455)<x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x457 = 55;
	int64_t x458 = INT64_MAX;
	uint32_t x459 = UINT32_MAX;
	static int32_t t97 = 110;

	t97 = (x457<((x458-x459)<x460));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x461 = 5U;
	int64_t x463 = -1LL;
	volatile int32_t t98 = 248222;

	t98 = (x461<((x462-x463)<x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x465 = 0;
	static int16_t x466 = -1;
	uint64_t x467 = UINT64_MAX;
	static volatile uint8_t x468 = 2U;
	int32_t t99 = -33559832;

	t99 = (x465<((x466-x467)<x468));

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

