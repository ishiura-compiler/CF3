#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
volatile int32_t x14 = 177232;
int64_t x17 = INT64_MIN;
static int64_t t3 = -1895023926353158LL;
uint32_t x30 = 32428555U;
static int16_t x35 = INT16_MIN;
int8_t x59 = INT8_MIN;
volatile int8_t x60 = -1;
int32_t x66 = 2212352;
uint16_t x70 = 3441U;
int16_t x76 = -3;
volatile uint8_t x93 = 10U;
uint64_t x95 = UINT64_MAX;
static uint16_t x101 = 7U;
uint64_t x103 = UINT64_MAX;
int64_t x104 = -3LL;
static int64_t x105 = INT64_MIN;
static uint64_t x107 = 29849002760LLU;
int32_t x118 = -172030;
static uint32_t x127 = 2740U;
static int32_t x145 = INT32_MIN;
volatile uint64_t t25 = 464LLU;
uint64_t x166 = UINT64_MAX;
uint32_t x167 = UINT32_MAX;
int32_t x175 = -13;
int8_t x183 = INT8_MAX;
int64_t x188 = INT64_MAX;
volatile int16_t x189 = 828;
static volatile int64_t x191 = 250794579LL;
int8_t x192 = INT8_MAX;
static volatile int64_t x195 = 42313767394LL;
int64_t t33 = 10099606843697LL;
uint32_t x203 = 1815U;
uint16_t x205 = UINT16_MAX;
volatile int8_t x208 = INT8_MIN;
int16_t x230 = -1;
int32_t x235 = -3511693;
int32_t x240 = -1;
int8_t x245 = INT8_MIN;
volatile int8_t x246 = 11;
uint32_t x254 = 412526U;
uint32_t x255 = 2020480U;
volatile uint32_t t44 = 213052089U;
volatile uint16_t x258 = UINT16_MAX;
int32_t x262 = INT32_MIN;
volatile int64_t t48 = -10961199125323815LL;
int32_t x282 = 642344;
int64_t x284 = -1LL;
uint8_t x286 = 1U;
static int64_t x290 = -1LL;
int16_t x291 = 24;
uint32_t t53 = 105573U;
int64_t x314 = INT64_MAX;
uint32_t x315 = UINT32_MAX;
int64_t x323 = -1LL;
int64_t t57 = 5088490858647896LL;
uint16_t x334 = 1728U;
int16_t x337 = INT16_MIN;
int16_t x341 = INT16_MIN;
int8_t x347 = INT8_MIN;
int16_t x351 = -1;
static uint8_t x362 = UINT8_MAX;
volatile int8_t x379 = 10;
static volatile int32_t x390 = -1;
uint16_t x419 = 0U;
int16_t x423 = INT16_MAX;
int16_t x433 = -1;
uint64_t x435 = 561182431719931130LLU;
int16_t x442 = -3369;
volatile uint64_t t78 = 340465683LLU;
int8_t x446 = -1;
uint64_t x456 = 1LLU;
static uint16_t x463 = 0U;
volatile int16_t x467 = INT16_MAX;
static volatile int32_t t83 = -404488;
uint64_t t84 = 890210428088069LLU;
uint32_t x490 = UINT32_MAX;
int16_t x499 = -2032;
static volatile int64_t t88 = -128LL;
int32_t x505 = INT32_MIN;
int32_t x506 = INT32_MIN;
static int32_t x509 = -1;
int64_t x517 = INT64_MAX;
int8_t x522 = INT8_MIN;
uint64_t x524 = UINT64_MAX;
uint8_t x525 = 12U;
uint64_t t94 = 381185409033LLU;
volatile int64_t x534 = INT64_MIN;
int64_t x537 = 15820313277761882LL;
volatile uint64_t x540 = 82589LLU;
volatile int32_t x545 = INT32_MIN;
volatile uint64_t t98 = 4007772LLU;
int32_t x549 = INT32_MIN;


void f0(void) {
	int16_t x5 = INT16_MIN;
	static volatile uint32_t x7 = UINT32_MAX;
	volatile uint32_t x8 = 65592504U;
	uint32_t t0 = 1662352619U;

	t0 = (x5/(x6-(x7*x8)));

	if (t0 != 65U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = -1;
	static volatile int16_t x11 = 0;
	int32_t x12 = -44;
	int32_t t1 = -673773;

	t1 = (x9/(x10-(x11*x12)));

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = 29573U;
	static uint64_t x15 = UINT64_MAX;
	uint16_t x16 = UINT16_MAX;
	volatile uint64_t t2 = 78212LLU;

	t2 = (x13/(x14-(x15*x16)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x18 = 91272197;
	int32_t x19 = -1;
	int8_t x20 = INT8_MAX;

	t3 = (x17/(x18-(x19*x20)));

	if (t3 != -101053327368LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MIN;
	volatile uint64_t x31 = 25326790853LLU;
	static int16_t x32 = INT16_MIN;
	static uint64_t t4 = 14579400091983446LLU;

	t4 = (x29/(x30-(x31*x32)));

	if (t4 != 22227LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = -3;
	int16_t x34 = 8;
	volatile uint8_t x36 = 25U;
	int32_t t5 = 2853623;

	t5 = (x33/(x34-(x35*x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x57 = INT64_MAX;
	uint16_t x58 = 1107U;
	volatile int64_t t6 = 113137754494048LL;

	t6 = (x57/(x58-(x59*x60)));

	if (t6 != 9421217606593233LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x65 = INT16_MIN;
	static uint8_t x67 = 0U;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t7 = 4855;

	t7 = (x65/(x66-(x67*x68)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x69 = -744935585;
	uint32_t x71 = 60735298U;
	volatile uint8_t x72 = UINT8_MAX;
	uint32_t t8 = 91U;

	t8 = (x69/(x70-(x71*x72)));

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x73 = INT8_MIN;
	int8_t x74 = INT8_MIN;
	volatile int16_t x75 = INT16_MAX;
	int32_t t9 = 11;

	t9 = (x73/(x74-(x75*x76)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x77 = INT16_MAX;
	static volatile uint64_t x78 = 120LLU;
	int16_t x79 = 7505;
	uint8_t x80 = 2U;
	volatile uint64_t t10 = 1358184084LLU;

	t10 = (x77/(x78-(x79*x80)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x81 = UINT16_MAX;
	uint8_t x82 = 30U;
	uint16_t x83 = UINT16_MAX;
	uint8_t x84 = 11U;
	volatile int32_t t11 = -1;

	t11 = (x81/(x82-(x83*x84)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x85 = -1;
	int8_t x86 = 1;
	int16_t x87 = -1;
	int32_t x88 = -177;
	int32_t t12 = 8001;

	t12 = (x85/(x86-(x87*x88)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x89 = INT64_MIN;
	static volatile uint16_t x90 = UINT16_MAX;
	volatile uint32_t x91 = 25259422U;
	volatile int8_t x92 = -1;
	int64_t t13 = -11072781417LL;

	t13 = (x89/(x90-(x91*x92)));

	if (t13 != -364200896248LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x94 = 5U;
	uint8_t x96 = UINT8_MAX;
	static uint64_t t14 = 3583325829LLU;

	t14 = (x93/(x94-(x95*x96)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x102 = INT8_MIN;
	uint64_t t15 = 1967716913LLU;

	t15 = (x101/(x102-(x103*x104)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x106 = INT16_MIN;
	uint32_t x108 = 18557865U;
	volatile uint64_t t16 = 184044161114129683LLU;

	t16 = (x105/(x106-(x107*x108)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x109 = INT64_MIN;
	int32_t x110 = INT32_MIN;
	int64_t x111 = -1LL;
	volatile int8_t x112 = -2;
	static volatile int64_t t17 = 339434LL;

	t17 = (x109/(x110-(x111*x112)));

	if (t17 != 4294967292LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x113 = INT64_MAX;
	uint64_t x114 = 256587916LLU;
	volatile uint64_t x115 = 57821425835LLU;
	int8_t x116 = INT8_MIN;
	static volatile uint64_t t18 = 465059LLU;

	t18 = (x113/(x114-(x115*x116)));

	if (t18 != 1246166LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = INT64_MIN;
	volatile uint8_t x119 = 7U;
	uint16_t x120 = UINT16_MAX;
	int64_t t19 = -5637119833LL;

	t19 = (x117/(x118-(x119*x120)));

	if (t19 != 14622285342403LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x125 = -1;
	int16_t x126 = INT16_MIN;
	int64_t x128 = -1LL;
	volatile int64_t t20 = -1027714LL;

	t20 = (x125/(x126-(x127*x128)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x129 = 47U;
	int16_t x130 = -12;
	uint16_t x131 = 5857U;
	int64_t x132 = -1LL;
	int64_t t21 = -4887331298189822LL;

	t21 = (x129/(x130-(x131*x132)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x134 = 4326U;
	volatile uint8_t x135 = 36U;
	uint16_t x136 = 3U;
	uint32_t t22 = 476572850U;

	t22 = (x133/(x134-(x135*x136)));

	if (t22 != 509123U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x137 = UINT8_MAX;
	static uint8_t x138 = 33U;
	uint16_t x139 = 26U;
	uint16_t x140 = 84U;
	volatile int32_t t23 = 12161181;

	t23 = (x137/(x138-(x139*x140)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x146 = UINT64_MAX;
	uint32_t x147 = UINT32_MAX;
	int16_t x148 = INT16_MAX;
	volatile uint64_t t24 = 39889273748656LLU;

	t24 = (x145/(x146-(x147*x148)));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = INT8_MAX;
	uint32_t x150 = 1868680U;
	static volatile uint64_t x151 = UINT64_MAX;
	uint64_t x152 = 2935022247LLU;

	t25 = (x149/(x150-(x151*x152)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x165 = 60U;
	int64_t x168 = -2LL;
	uint64_t t26 = 157806LLU;

	t26 = (x165/(x166-(x167*x168)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x169 = UINT16_MAX;
	static uint32_t x170 = UINT32_MAX;
	static int8_t x171 = -5;
	uint16_t x172 = 2U;
	uint32_t t27 = 10934710U;

	t27 = (x169/(x170-(x171*x172)));

	if (t27 != 7281U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MIN;
	int8_t x176 = -1;
	static int32_t t28 = 1;

	t28 = (x173/(x174-(x175*x176)));

	if (t28 != 65510) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x177 = 108U;
	int16_t x178 = 0;
	static int16_t x179 = -1;
	int32_t x180 = -1;
	volatile int32_t t29 = 76;

	t29 = (x177/(x178-(x179*x180)));

	if (t29 != -108) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x181 = UINT64_MAX;
	uint16_t x182 = 9191U;
	volatile int64_t x184 = 21758653654763384LL;
	uint64_t t30 = 16LLU;

	t30 = (x181/(x182-(x183*x184)));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x185 = 233;
	uint8_t x186 = 0U;
	static int32_t x187 = -1;
	int64_t t31 = -2992715262LL;

	t31 = (x185/(x186-(x187*x188)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x190 = UINT64_MAX;
	uint64_t t32 = 21558637013LLU;

	t32 = (x189/(x190-(x191*x192)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x193 = UINT8_MAX;
	int32_t x194 = INT32_MIN;
	int8_t x196 = -1;

	t33 = (x193/(x194-(x195*x196)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x197 = INT32_MAX;
	int32_t x198 = 15251386;
	int64_t x199 = -1LL;
	uint16_t x200 = 3254U;
	static int64_t t34 = 1421693901LL;

	t34 = (x197/(x198-(x199*x200)));

	if (t34 != 140LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x201 = 6U;
	static int64_t x202 = INT64_MAX;
	int32_t x204 = -1;
	static int64_t t35 = -16442663923719817LL;

	t35 = (x201/(x202-(x203*x204)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x206 = -1;
	int16_t x207 = -1;
	static volatile int32_t t36 = -12790446;

	t36 = (x205/(x206-(x207*x208)));

	if (t36 != -508) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MIN;
	uint16_t x211 = 251U;
	int16_t x212 = INT16_MIN;
	volatile int64_t t37 = 88970133476239LL;

	t37 = (x209/(x210-(x211*x212)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x221 = INT16_MAX;
	int32_t x222 = 601415906;
	uint32_t x223 = 1015U;
	static int8_t x224 = -1;
	uint32_t t38 = 9197U;

	t38 = (x221/(x222-(x223*x224)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = INT8_MIN;
	int16_t x231 = 31;
	int16_t x232 = -6567;
	volatile int32_t t39 = 2;

	t39 = (x229/(x230-(x231*x232)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x233 = 5077684331LLU;
	int32_t x234 = -377887945;
	static uint64_t x236 = 35LLU;
	static uint64_t t40 = 3181910657477LLU;

	t40 = (x233/(x234-(x235*x236)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x237 = 211U;
	int64_t x238 = -1LL;
	static int32_t x239 = -35;
	volatile int64_t t41 = 1LL;

	t41 = (x237/(x238-(x239*x240)));

	if (t41 != -5LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x247 = -1;
	volatile uint64_t x248 = UINT64_MAX;
	volatile uint64_t t42 = 30337942091008LLU;

	t42 = (x245/(x246-(x247*x248)));

	if (t42 != 1844674407370955148LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x249 = INT8_MIN;
	uint8_t x250 = 2U;
	int8_t x251 = -1;
	volatile int16_t x252 = INT16_MIN;
	int32_t t43 = -141;

	t43 = (x249/(x250-(x251*x252)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = -16;
	int32_t x256 = INT32_MIN;

	t44 = (x253/(x254-(x255*x256)));

	if (t44 != 10411U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x257 = -142542;
	static int16_t x259 = INT16_MIN;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t45 = 1635672U;

	t45 = (x257/(x258-(x259*x260)));

	if (t45 != 131071U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x261 = -1;
	uint64_t x263 = 0LLU;
	static uint32_t x264 = UINT32_MAX;
	uint64_t t46 = 533951752901526054LLU;

	t46 = (x261/(x262-(x263*x264)));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x265 = -1;
	uint8_t x266 = 6U;
	int32_t x267 = -1;
	volatile uint16_t x268 = UINT16_MAX;
	volatile int32_t t47 = -222390;

	t47 = (x265/(x266-(x267*x268)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x269 = -4;
	volatile uint16_t x270 = 30U;
	volatile uint16_t x271 = 1U;
	int64_t x272 = -1LL;

	t48 = (x269/(x270-(x271*x272)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x273 = 103U;
	int64_t x274 = -210603772568LL;
	static int64_t x275 = -669202828857LL;
	int8_t x276 = INT8_MIN;
	static int64_t t49 = 261043LL;

	t49 = (x273/(x274-(x275*x276)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x281 = UINT16_MAX;
	static uint64_t x283 = 45270463638223325LLU;
	volatile uint64_t t50 = 532560916LLU;

	t50 = (x281/(x282-(x283*x284)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x285 = -1LL;
	volatile int16_t x287 = INT16_MAX;
	volatile uint32_t x288 = 43492U;
	volatile int64_t t51 = -197472620095LL;

	t51 = (x285/(x286-(x287*x288)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x289 = -7800;
	volatile int16_t x292 = INT16_MIN;
	static volatile int64_t t52 = -8394869101665LL;

	t52 = (x289/(x290-(x291*x292)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x293 = UINT32_MAX;
	int32_t x294 = 149995383;
	int8_t x295 = 1;
	static volatile int32_t x296 = -1;

	t53 = (x293/(x294-(x295*x296)));

	if (t53 != 28U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x297 = 1366954152446088000LLU;
	uint64_t x298 = UINT64_MAX;
	volatile uint16_t x299 = 1895U;
	static uint32_t x300 = 354569U;
	uint64_t t54 = 558924924531LLU;

	t54 = (x297/(x298-(x299*x300)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x305 = 2552U;
	int64_t x306 = -389059430296LL;
	uint8_t x307 = UINT8_MAX;
	int8_t x308 = INT8_MIN;
	static int64_t t55 = -29529001989515577LL;

	t55 = (x305/(x306-(x307*x308)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x313 = -1LL;
	static int32_t x316 = INT32_MIN;
	volatile int64_t t56 = -870293111805865LL;

	t56 = (x313/(x314-(x315*x316)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x321 = UINT32_MAX;
	int32_t x322 = INT32_MIN;
	uint8_t x324 = 55U;

	t57 = (x321/(x322-(x323*x324)));

	if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x333 = 14758;
	uint32_t x335 = 6331U;
	uint8_t x336 = 21U;
	volatile uint32_t t58 = 16624900U;

	t58 = (x333/(x334-(x335*x336)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x338 = INT64_MIN;
	static volatile int32_t x339 = -3700150;
	static uint8_t x340 = 4U;
	int64_t t59 = 141748854LL;

	t59 = (x337/(x338-(x339*x340)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x342 = 78791U;
	int64_t x343 = -1LL;
	volatile int8_t x344 = -1;
	static int64_t t60 = 1241609218LL;

	t60 = (x341/(x342-(x343*x344)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x345 = INT32_MIN;
	volatile int32_t x346 = INT32_MAX;
	volatile int64_t x348 = -1LL;
	volatile int64_t t61 = 2LL;

	t61 = (x345/(x346-(x347*x348)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x349 = INT32_MIN;
	int32_t x350 = -202;
	int32_t x352 = -93666756;
	volatile int32_t t62 = 2593034;

	t62 = (x349/(x350-(x351*x352)));

	if (t62 != 22) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x357 = INT32_MIN;
	int16_t x358 = INT16_MIN;
	uint8_t x359 = UINT8_MAX;
	int16_t x360 = INT16_MIN;
	static int32_t t63 = -606;

	t63 = (x357/(x358-(x359*x360)));

	if (t63 != -258) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x361 = INT32_MAX;
	static int16_t x363 = INT16_MIN;
	uint16_t x364 = 9U;
	int32_t t64 = 459258;

	t64 = (x361/(x362-(x363*x364)));

	if (t64 != 7275) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x369 = UINT64_MAX;
	static int32_t x370 = -1;
	static volatile int8_t x371 = -1;
	int8_t x372 = -17;
	volatile uint64_t t65 = 134694828LLU;

	t65 = (x369/(x370-(x371*x372)));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x373 = INT8_MIN;
	uint8_t x374 = 25U;
	static uint16_t x375 = 8705U;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t66 = -1;

	t66 = (x373/(x374-(x375*x376)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = -1LL;
	uint8_t x380 = UINT8_MAX;
	int64_t t67 = -4049201008928796LL;

	t67 = (x377/(x378-(x379*x380)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x389 = INT32_MAX;
	int8_t x391 = 8;
	int8_t x392 = INT8_MIN;
	int32_t t68 = 2925;

	t68 = (x389/(x390-(x391*x392)));

	if (t68 != 2099202) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x393 = -1;
	static uint16_t x394 = 4U;
	int8_t x395 = INT8_MAX;
	volatile int64_t x396 = 598588732LL;
	int64_t t69 = 5905715521LL;

	t69 = (x393/(x394-(x395*x396)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x397 = UINT64_MAX;
	volatile uint32_t x398 = UINT32_MAX;
	volatile int32_t x399 = INT32_MIN;
	uint32_t x400 = 14147114U;
	uint64_t t70 = 3590074395633173966LLU;

	t70 = (x397/(x398-(x399*x400)));

	if (t70 != 4294967297LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x405 = -1LL;
	int8_t x406 = INT8_MIN;
	uint16_t x407 = 0U;
	int16_t x408 = -186;
	int64_t t71 = -2706091982136LL;

	t71 = (x405/(x406-(x407*x408)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x409 = 52722917976013743LL;
	int64_t x410 = -236308016LL;
	int8_t x411 = INT8_MAX;
	uint16_t x412 = 10813U;
	int64_t t72 = 977513800085LL;

	t72 = (x409/(x410-(x411*x412)));

	if (t72 != -221821932LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x417 = -1;
	volatile uint32_t x418 = 2072977U;
	int32_t x420 = -1;
	volatile uint32_t t73 = 10U;

	t73 = (x417/(x418-(x419*x420)));

	if (t73 != 2071U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x421 = 402487U;
	int16_t x422 = INT16_MIN;
	volatile uint8_t x424 = 1U;
	volatile uint32_t t74 = 261527U;

	t74 = (x421/(x422-(x423*x424)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x425 = 63U;
	volatile int64_t x426 = INT64_MIN;
	uint64_t x427 = 87880408276LLU;
	static uint8_t x428 = UINT8_MAX;
	uint64_t t75 = 20602LLU;

	t75 = (x425/(x426-(x427*x428)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x429 = 6450;
	int8_t x430 = INT8_MIN;
	uint8_t x431 = 33U;
	uint8_t x432 = 64U;
	static int32_t t76 = -51164821;

	t76 = (x429/(x430-(x431*x432)));

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x434 = -2913LL;
	int8_t x436 = -1;
	uint64_t t77 = 12054LLU;

	t77 = (x433/(x434-(x435*x436)));

	if (t77 != 32LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x441 = 292615961689080382LL;
	uint64_t x443 = UINT64_MAX;
	uint16_t x444 = 1015U;

	t78 = (x441/(x442-(x443*x444)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x445 = -1;
	static int8_t x447 = 23;
	static volatile int8_t x448 = INT8_MIN;
	static volatile int32_t t79 = 2;

	t79 = (x445/(x446-(x447*x448)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x453 = UINT32_MAX;
	static uint8_t x454 = 5U;
	int32_t x455 = -83230663;
	static uint64_t t80 = 131140158507119284LLU;

	t80 = (x453/(x454-(x455*x456)));

	if (t80 != 51LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x457 = 15;
	uint8_t x458 = UINT8_MAX;
	int16_t x459 = -46;
	uint64_t x460 = 32052LLU;
	uint64_t t81 = 9454441LLU;

	t81 = (x457/(x458-(x459*x460)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x461 = INT32_MIN;
	uint32_t x462 = 61784369U;
	int8_t x464 = 0;
	volatile uint32_t t82 = 110U;

	t82 = (x461/(x462-(x463*x464)));

	if (t82 != 34U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x465 = -1;
	static volatile int8_t x466 = -1;
	uint16_t x468 = 11U;

	t83 = (x465/(x466-(x467*x468)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x481 = UINT32_MAX;
	uint64_t x482 = UINT64_MAX;
	static uint8_t x483 = 1U;
	int64_t x484 = INT64_MAX;

	t84 = (x481/(x482-(x483*x484)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x485 = INT16_MIN;
	int32_t x486 = -1;
	uint32_t x487 = UINT32_MAX;
	int16_t x488 = -142;
	uint32_t t85 = 92556U;

	t85 = (x485/(x486-(x487*x488)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x489 = UINT8_MAX;
	uint32_t x491 = UINT32_MAX;
	uint8_t x492 = UINT8_MAX;
	static uint32_t t86 = 5622U;

	t86 = (x489/(x490-(x491*x492)));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x493 = INT8_MIN;
	int32_t x494 = INT32_MIN;
	uint64_t x495 = 7355755269942719LLU;
	int16_t x496 = INT16_MAX;
	static volatile uint64_t t87 = 10032LLU;

	t87 = (x493/(x494-(x495*x496)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x497 = INT64_MAX;
	int16_t x498 = INT16_MIN;
	volatile int32_t x500 = -1;

	t88 = (x497/(x498-(x499*x500)));

	if (t88 != -265039426346401LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x501 = 3U;
	uint64_t x502 = 497LLU;
	uint64_t x503 = 5944LLU;
	static uint32_t x504 = 1323736U;
	uint64_t t89 = 0LLU;

	t89 = (x501/(x502-(x503*x504)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x507 = 35U;
	int16_t x508 = -3151;
	volatile int32_t t90 = 30224;

	t90 = (x505/(x506-(x507*x508)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x510 = INT8_MIN;
	static int32_t x511 = -1;
	static uint8_t x512 = 24U;
	volatile int32_t t91 = 16;

	t91 = (x509/(x510-(x511*x512)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x518 = INT32_MAX;
	volatile uint32_t x519 = 176U;
	int8_t x520 = -6;
	int64_t t92 = 23104LL;

	t92 = (x517/(x518-(x519*x520)));

	if (t92 != 4294965186LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x521 = INT64_MIN;
	static int32_t x523 = -2;
	static uint64_t t93 = 1LLU;

	t93 = (x521/(x522-(x523*x524)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x526 = INT32_MIN;
	static uint64_t x527 = 6251423931306694LLU;
	int8_t x528 = INT8_MIN;

	t94 = (x525/(x526-(x527*x528)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x529 = 67249635795368735LLU;
	int32_t x530 = -710335;
	uint64_t x531 = 11956883360042307LLU;
	int32_t x532 = -3678063;
	uint64_t t95 = 259075346411LLU;

	t95 = (x529/(x530-(x531*x532)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x533 = INT16_MIN;
	int64_t x535 = -1LL;
	int32_t x536 = INT32_MAX;
	int64_t t96 = -3079LL;

	t96 = (x533/(x534-(x535*x536)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x538 = INT32_MIN;
	volatile uint16_t x539 = 1U;
	static volatile uint64_t t97 = 180155570454674697LLU;

	t97 = (x537/(x538-(x539*x540)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x546 = UINT16_MAX;
	uint16_t x547 = 7480U;
	uint64_t x548 = 248974719804LLU;

	t98 = (x545/(x546-(x547*x548)));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x550 = 6004U;
	uint64_t x551 = 46676366036790LLU;
	volatile int16_t x552 = INT16_MAX;
	uint64_t t99 = 15334816097987430LLU;

	t99 = (x549/(x550-(x551*x552)));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

