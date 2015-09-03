#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x20 = 111U;
int16_t x28 = 17;
int32_t t4 = 19436536;
int16_t x31 = INT16_MIN;
int16_t x32 = -1;
static int16_t x74 = 1;
static uint32_t x78 = UINT32_MAX;
uint64_t x84 = 392807069976121LLU;
uint64_t x85 = UINT64_MAX;
volatile uint64_t x89 = 3LLU;
volatile int16_t x92 = INT16_MAX;
volatile int32_t t17 = 23085;
int64_t x106 = -1LL;
static int32_t x107 = INT32_MIN;
int64_t x110 = INT64_MIN;
volatile int32_t t19 = 243;
int32_t t20 = -60998925;
int64_t x117 = -1LL;
volatile int32_t t21 = 26;
volatile int32_t x130 = INT32_MIN;
int64_t x138 = INT64_MAX;
volatile int8_t x140 = INT8_MIN;
volatile int32_t t24 = 1;
volatile int8_t x141 = 8;
uint32_t x142 = UINT32_MAX;
volatile int32_t t25 = -144448472;
volatile int32_t x146 = INT32_MAX;
static uint16_t x152 = 1U;
volatile int32_t t27 = -4;
static int64_t x157 = INT64_MIN;
volatile int32_t t29 = 371397;
static volatile int32_t t30 = -49;
volatile int32_t x165 = INT32_MIN;
int64_t x173 = INT64_MIN;
uint16_t x179 = UINT16_MAX;
uint16_t x182 = UINT16_MAX;
volatile uint64_t x184 = UINT64_MAX;
int16_t x189 = INT16_MIN;
int32_t t35 = 3098558;
volatile int16_t x193 = INT16_MIN;
uint32_t x195 = 3013637U;
static int32_t t37 = -16;
volatile int32_t t40 = 0;
static int8_t x213 = -1;
static uint16_t x216 = UINT16_MAX;
uint16_t x217 = 13U;
uint16_t x218 = UINT16_MAX;
int32_t t42 = -7061069;
static int8_t x222 = -1;
int64_t x223 = -18243854LL;
int16_t x234 = INT16_MAX;
volatile int32_t x243 = INT32_MAX;
volatile uint32_t x247 = UINT32_MAX;
uint64_t x251 = UINT64_MAX;
int64_t x262 = -5064901152219LL;
int64_t x264 = -1LL;
int8_t x268 = INT8_MAX;
static int8_t x274 = -19;
static int8_t x280 = -1;
uint64_t x281 = UINT64_MAX;
volatile uint64_t x282 = 43510688174789273LLU;
static volatile int32_t x291 = INT32_MIN;
int64_t x292 = -1LL;
int32_t x298 = 21756;
static int16_t x300 = INT16_MIN;
int32_t t60 = -275;
volatile uint16_t x305 = 1U;
static uint8_t x310 = 23U;
int64_t x315 = INT64_MIN;
int16_t x316 = -302;
uint8_t x319 = 68U;
int64_t x322 = INT64_MAX;
int32_t t65 = 98;
int8_t x326 = INT8_MAX;
int32_t x339 = -1;
static uint64_t x341 = 20457126831LLU;
uint64_t x345 = UINT64_MAX;
volatile int8_t x348 = INT8_MIN;
int8_t x350 = INT8_MIN;
int64_t x355 = -1LL;
uint8_t x359 = 2U;
uint64_t x363 = 2957701044105LLU;
int32_t x383 = INT32_MIN;
volatile int32_t t79 = 58;
uint64_t x389 = 126LLU;
static volatile uint8_t x397 = 3U;
static volatile uint8_t x400 = UINT8_MAX;
int16_t x401 = -1;
int32_t t82 = 0;
int32_t x412 = INT32_MIN;
static int32_t x414 = -1;
uint8_t x424 = 24U;
int32_t t86 = -125;
static uint16_t x426 = UINT16_MAX;
int32_t t87 = 3222206;
static int16_t x436 = 30;
volatile int8_t x439 = INT8_MIN;
int32_t x441 = -1;
static int32_t t91 = -119;
int32_t x450 = INT32_MIN;
int8_t x456 = 17;
int16_t x461 = -3627;
static int16_t x462 = INT16_MIN;
int32_t t95 = 195425;
uint16_t x467 = 21U;
int64_t x468 = -3361LL;
volatile int64_t x470 = -1LL;
volatile int32_t t97 = 4;


void f0(void) {
	int8_t x5 = -1;
	volatile uint64_t x6 = 68576LLU;
	uint64_t x7 = 966LLU;
	volatile int16_t x8 = INT16_MAX;
	volatile int32_t t0 = 409987;

	t0 = (x5<=((x6&x7)*x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x9 = 731081U;
	int64_t x10 = INT64_MIN;
	uint32_t x11 = UINT32_MAX;
	uint16_t x12 = 30U;
	volatile int32_t t1 = -660415;

	t1 = (x9<=((x10&x11)*x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = 176077170;
	volatile uint64_t x18 = 11054692837LLU;
	int64_t x19 = -1LL;
	int32_t t2 = 1;

	t2 = (x17<=((x18&x19)*x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x21 = INT64_MIN;
	uint16_t x22 = 1720U;
	int8_t x23 = 6;
	int32_t x24 = 1380982;
	static int32_t t3 = -33;

	t3 = (x21<=((x22&x23)*x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 30U;
	int8_t x26 = 4;
	static int8_t x27 = INT8_MAX;

	t4 = (x25<=((x26&x27)*x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = 13713426122753LLU;
	static volatile int32_t t5 = 66339005;

	t5 = (x29<=((x30&x31)*x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = -1;
	static int32_t x34 = -1846769;
	int64_t x35 = 64313108341500LL;
	uint8_t x36 = 1U;
	int32_t t6 = -220;

	t6 = (x33<=((x34&x35)*x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -28;
	int8_t x42 = INT8_MIN;
	uint16_t x43 = 3U;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t7 = -1795030;

	t7 = (x41<=((x42&x43)*x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	static int32_t x46 = INT32_MIN;
	uint32_t x47 = 8U;
	int64_t x48 = -1LL;
	int32_t t8 = -579106954;

	t8 = (x45<=((x46&x47)*x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 6250275U;
	int32_t x54 = -1;
	int8_t x55 = -8;
	int8_t x56 = 3;
	volatile int32_t t9 = -5;

	t9 = (x53<=((x54&x55)*x56));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MAX;
	int16_t x59 = -1;
	int8_t x60 = -1;
	volatile int32_t t10 = -909336716;

	t10 = (x57<=((x58&x59)*x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x69 = INT32_MIN;
	int64_t x70 = -2089720579151370694LL;
	static volatile uint64_t x71 = 54860027583665LLU;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t11 = 0;

	t11 = (x69<=((x70&x71)*x72));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x73 = 13808LLU;
	volatile int64_t x75 = INT64_MAX;
	static int8_t x76 = INT8_MIN;
	int32_t t12 = 9827540;

	t12 = (x73<=((x74&x75)*x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = 167471897548821LL;
	int64_t x79 = -9409LL;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t13 = 51;

	t13 = (x77<=((x78&x79)*x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x81 = 4U;
	volatile int16_t x82 = INT16_MAX;
	volatile uint64_t x83 = UINT64_MAX;
	volatile int32_t t14 = -486471;

	t14 = (x81<=((x82&x83)*x84));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x86 = INT16_MIN;
	static int8_t x87 = -1;
	volatile uint32_t x88 = UINT32_MAX;
	int32_t t15 = -453;

	t15 = (x85<=((x86&x87)*x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x90 = UINT64_MAX;
	uint8_t x91 = 2U;
	volatile int32_t t16 = 581807;

	t16 = (x89<=((x90&x91)*x92));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = 302433892603678LLU;
	int32_t x103 = -1;
	volatile uint32_t x104 = 3439U;

	t17 = (x101<=((x102&x103)*x104));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x105 = INT32_MIN;
	uint16_t x108 = 6U;
	volatile int32_t t18 = 1;

	t18 = (x105<=((x106&x107)*x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x109 = INT32_MAX;
	int8_t x111 = INT8_MAX;
	static int8_t x112 = INT8_MIN;

	t19 = (x109<=((x110&x111)*x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -1;
	int8_t x114 = INT8_MAX;
	int32_t x115 = 22659;
	int8_t x116 = 1;

	t20 = (x113<=((x114&x115)*x116));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x118 = 0;
	static volatile int64_t x119 = INT64_MIN;
	static uint64_t x120 = 127146546922679LLU;

	t21 = (x117<=((x118&x119)*x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x121 = 13685143U;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MAX;
	volatile int64_t x124 = 700006860857966177LL;
	static int32_t t22 = 58525514;

	t22 = (x121<=((x122&x123)*x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x129 = UINT16_MAX;
	int32_t x131 = 28;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t23 = -7;

	t23 = (x129<=((x130&x131)*x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x137 = 8U;
	static uint16_t x139 = 6U;

	t24 = (x137<=((x138&x139)*x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x143 = INT8_MAX;
	int16_t x144 = -1;

	t25 = (x141<=((x142&x143)*x144));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x145 = UINT8_MAX;
	static int32_t x147 = INT32_MIN;
	int64_t x148 = 8LL;
	static volatile int32_t t26 = 16110;

	t26 = (x145<=((x146&x147)*x148));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x149 = 98831U;
	int64_t x150 = INT64_MIN;
	uint16_t x151 = UINT16_MAX;

	t27 = (x149<=((x150&x151)*x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = 3;
	int64_t x154 = INT64_MAX;
	volatile int64_t x155 = INT64_MIN;
	int32_t x156 = INT32_MAX;
	int32_t t28 = 144360090;

	t28 = (x153<=((x154&x155)*x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x158 = INT8_MIN;
	int64_t x159 = -219LL;
	int32_t x160 = INT32_MIN;

	t29 = (x157<=((x158&x159)*x160));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = 1LLU;
	int64_t x164 = INT64_MIN;

	t30 = (x161<=((x162&x163)*x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x166 = INT8_MAX;
	static uint32_t x167 = 10U;
	static int64_t x168 = 863759012846LL;
	volatile int32_t t31 = -356;

	t31 = (x165<=((x166&x167)*x168));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x174 = INT16_MIN;
	static uint32_t x175 = 198118U;
	int8_t x176 = -1;
	int32_t t32 = -1007;

	t32 = (x173<=((x174&x175)*x176));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x177 = INT64_MIN;
	int64_t x178 = -13LL;
	volatile uint64_t x180 = UINT64_MAX;
	int32_t t33 = 3;

	t33 = (x177<=((x178&x179)*x180));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = INT32_MAX;
	int32_t x183 = 13162;
	int32_t t34 = 13632387;

	t34 = (x181<=((x182&x183)*x184));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x190 = 49;
	static int32_t x191 = 816634;
	int64_t x192 = -1LL;

	t35 = (x189<=((x190&x191)*x192));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x194 = 3LLU;
	static int64_t x196 = -881236583981LL;
	static int32_t t36 = 61;

	t36 = (x193<=((x194&x195)*x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x197 = INT16_MAX;
	uint8_t x198 = 0U;
	static uint8_t x199 = UINT8_MAX;
	int16_t x200 = INT16_MIN;

	t37 = (x197<=((x198&x199)*x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x201 = INT64_MIN;
	static int16_t x202 = INT16_MIN;
	volatile uint32_t x203 = 3283U;
	int16_t x204 = 375;
	int32_t t38 = 17728;

	t38 = (x201<=((x202&x203)*x204));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = 19;
	volatile uint8_t x206 = 44U;
	int32_t x207 = INT32_MIN;
	int32_t x208 = -508521;
	int32_t t39 = -11832;

	t39 = (x205<=((x206&x207)*x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x209 = 818458LLU;
	int16_t x210 = INT16_MIN;
	static uint32_t x211 = 1707U;
	volatile int16_t x212 = INT16_MIN;

	t40 = (x209<=((x210&x211)*x212));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x214 = -11;
	volatile int16_t x215 = INT16_MAX;
	volatile int32_t t41 = 17399;

	t41 = (x213<=((x214&x215)*x216));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x219 = INT8_MIN;
	int8_t x220 = -1;

	t42 = (x217<=((x218&x219)*x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x221 = INT8_MAX;
	int8_t x224 = 5;
	volatile int32_t t43 = -1304829;

	t43 = (x221<=((x222&x223)*x224));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x229 = INT8_MIN;
	uint16_t x230 = 3U;
	static volatile int16_t x231 = INT16_MIN;
	volatile int32_t x232 = INT32_MAX;
	volatile int32_t t44 = 49833;

	t44 = (x229<=((x230&x231)*x232));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x233 = 9257271952659200LLU;
	int8_t x235 = 0;
	static int16_t x236 = -192;
	volatile int32_t t45 = 81656824;

	t45 = (x233<=((x234&x235)*x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x237 = 1894549180U;
	static volatile uint32_t x238 = 97272476U;
	int16_t x239 = INT16_MAX;
	int32_t x240 = 0;
	static volatile int32_t t46 = -72;

	t46 = (x237<=((x238&x239)*x240));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = INT64_MAX;
	int64_t x242 = INT64_MAX;
	int16_t x244 = 23;
	static int32_t t47 = 1805;

	t47 = (x241<=((x242&x243)*x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x245 = UINT16_MAX;
	int64_t x246 = INT64_MAX;
	volatile uint32_t x248 = 15429U;
	volatile int32_t t48 = 36;

	t48 = (x245<=((x246&x247)*x248));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x249 = 1;
	volatile int16_t x250 = -1;
	uint8_t x252 = 80U;
	volatile int32_t t49 = 243520795;

	t49 = (x249<=((x250&x251)*x252));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x261 = INT64_MAX;
	static uint32_t x263 = UINT32_MAX;
	static int32_t t50 = 1;

	t50 = (x261<=((x262&x263)*x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x265 = INT32_MIN;
	static uint32_t x266 = UINT32_MAX;
	volatile int32_t x267 = -3578853;
	volatile int32_t t51 = 1399224;

	t51 = (x265<=((x266&x267)*x268));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x269 = UINT64_MAX;
	uint64_t x270 = 65493677333LLU;
	volatile int32_t x271 = -177545;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t52 = 1778793;

	t52 = (x269<=((x270&x271)*x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x273 = 0;
	static uint32_t x275 = 1937U;
	int16_t x276 = INT16_MIN;
	static volatile int32_t t53 = 12443;

	t53 = (x273<=((x274&x275)*x276));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x277 = 11201U;
	int16_t x278 = INT16_MIN;
	uint16_t x279 = UINT16_MAX;
	volatile int32_t t54 = 575;

	t54 = (x277<=((x278&x279)*x280));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MIN;
	int32_t t55 = 2752413;

	t55 = (x281<=((x282&x283)*x284));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x285 = INT16_MIN;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = 15505;
	int8_t x288 = -1;
	int32_t t56 = -9;

	t56 = (x285<=((x286&x287)*x288));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x289 = -685;
	uint16_t x290 = 199U;
	static int32_t t57 = -196;

	t57 = (x289<=((x290&x291)*x292));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = INT32_MAX;
	volatile uint64_t x295 = 160617131LLU;
	uint8_t x296 = 61U;
	static int32_t t58 = 709908;

	t58 = (x293<=((x294&x295)*x296));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x297 = 6;
	int64_t x299 = INT64_MIN;
	volatile int32_t t59 = -3;

	t59 = (x297<=((x298&x299)*x300));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x301 = INT16_MIN;
	volatile uint8_t x302 = 10U;
	uint16_t x303 = 16668U;
	int8_t x304 = INT8_MAX;

	t60 = (x301<=((x302&x303)*x304));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x306 = -11898606222543LL;
	int16_t x307 = 32;
	int32_t x308 = INT32_MIN;
	volatile int32_t t61 = 0;

	t61 = (x305<=((x306&x307)*x308));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x309 = INT64_MIN;
	int8_t x311 = INT8_MIN;
	int64_t x312 = -189422348597LL;
	volatile int32_t t62 = -23464;

	t62 = (x309<=((x310&x311)*x312));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x313 = -33522176;
	volatile uint16_t x314 = UINT16_MAX;
	int32_t t63 = -147;

	t63 = (x313<=((x314&x315)*x316));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x317 = INT16_MIN;
	static int8_t x318 = INT8_MAX;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t64 = -45;

	t64 = (x317<=((x318&x319)*x320));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x321 = INT8_MAX;
	int16_t x323 = 0;
	static int16_t x324 = INT16_MIN;

	t65 = (x321<=((x322&x323)*x324));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x325 = 13;
	volatile uint16_t x327 = 366U;
	volatile int16_t x328 = -1;
	static volatile int32_t t66 = -11455;

	t66 = (x325<=((x326&x327)*x328));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x329 = INT64_MAX;
	volatile int16_t x330 = -1;
	static uint8_t x331 = 15U;
	int8_t x332 = 0;
	volatile int32_t t67 = 27;

	t67 = (x329<=((x330&x331)*x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x333 = UINT16_MAX;
	int8_t x334 = INT8_MAX;
	volatile int16_t x335 = INT16_MIN;
	static uint16_t x336 = 30U;
	static volatile int32_t t68 = 1614;

	t68 = (x333<=((x334&x335)*x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x337 = -1;
	uint16_t x338 = 67U;
	int8_t x340 = INT8_MIN;
	volatile int32_t t69 = -5470857;

	t69 = (x337<=((x338&x339)*x340));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x342 = -982LL;
	int64_t x343 = 302911LL;
	int8_t x344 = -1;
	int32_t t70 = -1801152;

	t70 = (x341<=((x342&x343)*x344));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x346 = INT64_MIN;
	uint8_t x347 = 49U;
	volatile int32_t t71 = 43090;

	t71 = (x345<=((x346&x347)*x348));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x349 = INT16_MIN;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = -10109LL;
	int32_t t72 = -1712139;

	t72 = (x349<=((x350&x351)*x352));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	volatile int8_t x356 = INT8_MIN;
	static int32_t t73 = 107;

	t73 = (x353<=((x354&x355)*x356));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x357 = -1;
	volatile int16_t x358 = INT16_MIN;
	static int32_t x360 = 1017907103;
	int32_t t74 = -3638386;

	t74 = (x357<=((x358&x359)*x360));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x361 = INT8_MIN;
	int32_t x362 = 63576977;
	int32_t x364 = 3456;
	volatile int32_t t75 = 7767;

	t75 = (x361<=((x362&x363)*x364));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x365 = 1166645235918599LLU;
	static int8_t x366 = -35;
	int16_t x367 = INT16_MIN;
	int32_t x368 = -1;
	volatile int32_t t76 = 8;

	t76 = (x365<=((x366&x367)*x368));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x373 = 15347838666543324LLU;
	int16_t x374 = -3;
	uint16_t x375 = 3U;
	static volatile uint32_t x376 = UINT32_MAX;
	static volatile int32_t t77 = 575894324;

	t77 = (x373<=((x374&x375)*x376));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x381 = 64456156LLU;
	static uint8_t x382 = 71U;
	volatile int8_t x384 = INT8_MIN;
	volatile int32_t t78 = -1628969;

	t78 = (x381<=((x382&x383)*x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x385 = INT64_MAX;
	static int64_t x386 = 12LL;
	int32_t x387 = INT32_MIN;
	static int64_t x388 = INT64_MIN;

	t79 = (x385<=((x386&x387)*x388));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x390 = UINT32_MAX;
	static uint8_t x391 = UINT8_MAX;
	uint32_t x392 = 7U;
	volatile int32_t t80 = 212266814;

	t80 = (x389<=((x390&x391)*x392));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x398 = 1U;
	uint8_t x399 = 29U;
	volatile int32_t t81 = 8031;

	t81 = (x397<=((x398&x399)*x400));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x402 = UINT8_MAX;
	static volatile uint8_t x403 = 2U;
	uint64_t x404 = 356496307885162473LLU;

	t82 = (x401<=((x402&x403)*x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x409 = 119830U;
	int8_t x410 = -7;
	uint32_t x411 = UINT32_MAX;
	volatile int32_t t83 = -173534;

	t83 = (x409<=((x410&x411)*x412));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x413 = INT64_MIN;
	volatile int8_t x415 = INT8_MAX;
	uint64_t x416 = 1032243LLU;
	volatile int32_t t84 = 63;

	t84 = (x413<=((x414&x415)*x416));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x417 = 41048540;
	uint64_t x418 = 1937421818518631LLU;
	uint32_t x419 = 12485U;
	static uint32_t x420 = 821999498U;
	int32_t t85 = 0;

	t85 = (x417<=((x418&x419)*x420));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x421 = UINT64_MAX;
	static uint16_t x422 = 5U;
	static int16_t x423 = INT16_MIN;

	t86 = (x421<=((x422&x423)*x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x425 = 3U;
	int32_t x427 = INT32_MIN;
	int32_t x428 = INT32_MIN;

	t87 = (x425<=((x426&x427)*x428));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = INT8_MIN;
	int16_t x430 = INT16_MIN;
	int8_t x431 = -1;
	static int16_t x432 = -29;
	static int32_t t88 = 64368471;

	t88 = (x429<=((x430&x431)*x432));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x433 = -1;
	static int16_t x434 = -1;
	uint32_t x435 = 315853579U;
	int32_t t89 = 1;

	t89 = (x433<=((x434&x435)*x436));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x437 = 24112762890335008LLU;
	uint8_t x438 = 18U;
	volatile int64_t x440 = INT64_MIN;
	static int32_t t90 = 1461;

	t90 = (x437<=((x438&x439)*x440));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x442 = INT16_MAX;
	static int8_t x443 = -1;
	int8_t x444 = 0;

	t91 = (x441<=((x442&x443)*x444));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x449 = INT32_MAX;
	static uint32_t x451 = 282U;
	int32_t x452 = INT32_MIN;
	static volatile int32_t t92 = 3033;

	t92 = (x449<=((x450&x451)*x452));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x453 = INT64_MIN;
	int8_t x454 = INT8_MAX;
	static volatile int32_t x455 = INT32_MIN;
	int32_t t93 = -253631810;

	t93 = (x453<=((x454&x455)*x456));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x457 = UINT64_MAX;
	static volatile int32_t x458 = 33;
	uint16_t x459 = UINT16_MAX;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t94 = -4;

	t94 = (x457<=((x458&x459)*x460));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x463 = -1;
	uint32_t x464 = 21860U;

	t95 = (x461<=((x462&x463)*x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x465 = -1;
	int64_t x466 = INT64_MIN;
	int32_t t96 = 14659;

	t96 = (x465<=((x466&x467)*x468));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x469 = INT64_MAX;
	volatile int8_t x471 = -1;
	uint8_t x472 = 10U;

	t97 = (x469<=((x470&x471)*x472));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x473 = -255961;
	volatile int64_t x474 = -1458702179091927LL;
	uint8_t x475 = 13U;
	int16_t x476 = INT16_MIN;
	volatile int32_t t98 = 125793;

	t98 = (x473<=((x474&x475)*x476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x477 = 74;
	int8_t x478 = -1;
	int16_t x479 = INT16_MIN;
	uint64_t x480 = UINT64_MAX;
	int32_t t99 = 226349568;

	t99 = (x477<=((x478&x479)*x480));

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

