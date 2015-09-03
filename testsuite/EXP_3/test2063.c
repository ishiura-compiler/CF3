#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = UINT64_MAX;
int16_t x6 = INT16_MIN;
int32_t t2 = 1580;
volatile uint16_t x15 = 42U;
uint64_t x23 = 8560LLU;
int32_t t4 = -85343685;
static int64_t x25 = -439107776635611LL;
volatile int64_t x27 = 5783LL;
uint16_t x35 = 0U;
uint64_t x44 = UINT64_MAX;
volatile int32_t t9 = 105281859;
int32_t x46 = -1;
int64_t x48 = -1LL;
volatile int16_t x50 = INT16_MIN;
volatile int16_t x54 = 428;
uint32_t x55 = 98997541U;
uint16_t x59 = 12219U;
uint32_t x66 = 6772593U;
int16_t x68 = INT16_MIN;
volatile int32_t t15 = -745923;
uint8_t x80 = 61U;
int32_t t19 = 613532193;
static volatile int32_t x136 = INT32_MIN;
int16_t x148 = INT16_MIN;
int8_t x149 = 3;
static uint8_t x152 = UINT8_MAX;
int16_t x154 = INT16_MAX;
int16_t x156 = 5511;
static volatile int32_t t28 = 33165;
uint64_t x161 = 257540778922LLU;
volatile int16_t x176 = -1;
volatile int32_t t31 = 14723871;
uint8_t x180 = UINT8_MAX;
int16_t x182 = 1;
int32_t t36 = -7789;
static uint8_t x207 = 111U;
int8_t x209 = INT8_MAX;
static int16_t x215 = -4;
int64_t x220 = INT64_MIN;
uint16_t x238 = 1689U;
volatile int8_t x241 = 1;
int32_t x242 = -382;
static volatile int64_t x256 = 0LL;
int32_t t45 = -4845;
int64_t x273 = -1LL;
static uint8_t x297 = 13U;
volatile int8_t x300 = INT8_MAX;
int32_t x308 = INT32_MIN;
int32_t t52 = -13388;
volatile int64_t x334 = -57212LL;
int16_t x345 = INT16_MAX;
static volatile int8_t x346 = INT8_MIN;
int8_t x347 = 1;
static int64_t x348 = 13083266LL;
int32_t x349 = 1;
int8_t x350 = -1;
int32_t x351 = INT32_MIN;
int16_t x354 = -14;
int32_t t63 = -1193119;
uint32_t x375 = 6150058U;
volatile uint64_t x379 = UINT64_MAX;
int8_t x383 = -59;
volatile uint16_t x384 = 73U;
volatile int8_t x386 = -1;
volatile int64_t x390 = 88665585094958LL;
int32_t t68 = -127283;
static volatile int8_t x398 = INT8_MIN;
int32_t t69 = -3700;
static int16_t x406 = -1;
uint16_t x416 = 812U;
int32_t t72 = 53228221;
volatile int32_t x425 = -39651;
volatile int32_t t74 = -33797;
int32_t t76 = -162536221;
int16_t x443 = -1;
int32_t x450 = INT32_MIN;
static uint16_t x451 = 1U;
volatile uint32_t x454 = 1236840254U;
volatile uint32_t x458 = 1452877259U;
static int32_t t81 = -19111071;
uint16_t x461 = 6891U;
static int8_t x463 = -1;
int8_t x472 = INT8_MAX;
static volatile int32_t t83 = -29156992;
int8_t x478 = -1;
int32_t t84 = 0;
static int16_t x497 = -1;
int8_t x498 = INT8_MIN;
int32_t x499 = -1;
volatile int8_t x500 = -17;
int64_t x503 = 59319927LL;
int32_t x508 = INT32_MIN;
static volatile uint64_t x522 = 92340904413045753LLU;
int16_t x537 = 14374;
static int8_t x542 = INT8_MIN;
uint64_t x546 = 31LLU;
int8_t x547 = INT8_MIN;
static uint32_t x551 = 1233U;
static int16_t x552 = INT16_MIN;
volatile int32_t t97 = -149997;
int32_t x560 = INT32_MIN;


void f0(void) {
	uint16_t x2 = 5569U;
	uint8_t x3 = 43U;
	volatile uint32_t x4 = 1225U;
	volatile int32_t t0 = 122935093;

	t0 = ((x1*x2)<(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 3;
	int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -93342;

	t1 = ((x5*x6)<(x7^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 3839LL;
	int32_t x10 = 56410;
	int64_t x11 = -12958112036221LL;
	int64_t x12 = INT64_MIN;

	t2 = ((x9*x10)<(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	volatile uint8_t x14 = UINT8_MAX;
	int16_t x16 = -3054;
	int32_t t3 = 471448;

	t3 = ((x13*x14)<(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MIN;
	uint16_t x22 = UINT16_MAX;
	int8_t x24 = INT8_MIN;

	t4 = ((x21*x22)<(x23^x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	int8_t x28 = -9;
	int32_t t5 = -2752683;

	t5 = ((x25*x26)<(x27^x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 6U;
	static uint8_t x30 = 7U;
	int32_t x31 = -95438146;
	int8_t x32 = INT8_MIN;
	int32_t t6 = -1030861806;

	t6 = ((x29*x30)<(x31^x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	uint64_t x34 = 18612LLU;
	int64_t x36 = -1LL;
	int32_t t7 = 192;

	t7 = ((x33*x34)<(x35^x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = 0;
	uint8_t x38 = 31U;
	int64_t x39 = -33007927125888LL;
	static int8_t x40 = -1;
	volatile int32_t t8 = -66659129;

	t8 = ((x37*x38)<(x39^x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 277337435707249374LL;
	static int16_t x42 = 4;
	static int8_t x43 = -11;

	t9 = ((x41*x42)<(x43^x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	static uint32_t x47 = 1231U;
	int32_t t10 = 10;

	t10 = ((x45*x46)<(x47^x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 1669085600280899LLU;
	static int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	static int32_t t11 = 792743;

	t11 = ((x49*x50)<(x51^x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	int8_t x56 = 4;
	int32_t t12 = -268;

	t12 = ((x53*x54)<(x55^x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = 0;
	uint32_t x58 = 131647546U;
	int32_t x60 = INT32_MAX;
	volatile int32_t t13 = -17528;

	t13 = ((x57*x58)<(x59^x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x61 = 8808U;
	uint32_t x62 = 55U;
	int32_t x63 = INT32_MIN;
	int16_t x64 = -1;
	static volatile int32_t t14 = 17688;

	t14 = ((x61*x62)<(x63^x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x65 = 24550U;
	uint32_t x67 = UINT32_MAX;

	t15 = ((x65*x66)<(x67^x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 340U;
	int32_t x70 = 1;
	int32_t x71 = INT32_MIN;
	int16_t x72 = -1;
	int32_t t16 = 8;

	t16 = ((x69*x70)<(x71^x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	static uint32_t x78 = 24271095U;
	static int16_t x79 = -1;
	int32_t t17 = -2128553;

	t17 = ((x77*x78)<(x79^x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -1LL;
	int16_t x94 = INT16_MIN;
	int16_t x95 = -5;
	volatile uint8_t x96 = 1U;
	int32_t t18 = 2;

	t18 = ((x93*x94)<(x95^x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = 0U;
	int64_t x98 = INT64_MIN;
	volatile uint64_t x99 = 1570LLU;
	static int32_t x100 = INT32_MIN;

	t19 = ((x97*x98)<(x99^x100));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x109 = 473673714U;
	static int32_t x110 = INT32_MAX;
	int32_t x111 = INT32_MIN;
	int32_t x112 = INT32_MIN;
	int32_t t20 = 3259146;

	t20 = ((x109*x110)<(x111^x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x121 = 39U;
	volatile int8_t x122 = INT8_MIN;
	static int16_t x123 = INT16_MIN;
	static int8_t x124 = -1;
	int32_t t21 = -1316270;

	t21 = ((x121*x122)<(x123^x124));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = -3;
	static uint32_t x130 = 12435916U;
	int32_t x131 = INT32_MAX;
	uint8_t x132 = 104U;
	int32_t t22 = 3101;

	t22 = ((x129*x130)<(x131^x132));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x133 = INT32_MIN;
	uint32_t x134 = UINT32_MAX;
	int64_t x135 = -1LL;
	volatile int32_t t23 = 6983;

	t23 = ((x133*x134)<(x135^x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x137 = INT8_MAX;
	static int64_t x138 = 2051973340LL;
	uint16_t x139 = 1087U;
	static uint32_t x140 = UINT32_MAX;
	int32_t t24 = 32;

	t24 = ((x137*x138)<(x139^x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = INT16_MAX;
	volatile int32_t x142 = 11572;
	int16_t x143 = INT16_MIN;
	uint16_t x144 = 39U;
	int32_t t25 = 23931759;

	t25 = ((x141*x142)<(x143^x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x145 = 1U;
	volatile int16_t x146 = INT16_MIN;
	int8_t x147 = -1;
	static int32_t t26 = 2;

	t26 = ((x145*x146)<(x147^x148));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x150 = 78U;
	int32_t x151 = INT32_MIN;
	int32_t t27 = 1648363;

	t27 = ((x149*x150)<(x151^x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = -1;
	volatile int16_t x155 = 0;

	t28 = ((x153*x154)<(x155^x156));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x162 = 4807106U;
	int64_t x163 = INT64_MIN;
	static volatile int16_t x164 = INT16_MAX;
	volatile int32_t t29 = 28229;

	t29 = ((x161*x162)<(x163^x164));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = 92;
	static uint8_t x166 = 0U;
	static int32_t x167 = INT32_MAX;
	uint16_t x168 = 118U;
	static int32_t t30 = 1891;

	t30 = ((x165*x166)<(x167^x168));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = INT8_MIN;
	uint64_t x174 = 29071202079421776LLU;
	volatile int32_t x175 = 13;

	t31 = ((x173*x174)<(x175^x176));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int32_t x178 = -259;
	static int32_t x179 = 38265329;
	static volatile int32_t t32 = -51;

	t32 = ((x177*x178)<(x179^x180));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = -1;
	int64_t x183 = INT64_MIN;
	uint16_t x184 = UINT16_MAX;
	static int32_t t33 = 0;

	t33 = ((x181*x182)<(x183^x184));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x185 = UINT16_MAX;
	volatile uint32_t x186 = 4518U;
	static volatile int64_t x187 = INT64_MIN;
	uint64_t x188 = 57805321002948815LLU;
	volatile int32_t t34 = -49102869;

	t34 = ((x185*x186)<(x187^x188));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x193 = UINT8_MAX;
	int16_t x194 = INT16_MAX;
	uint8_t x195 = 0U;
	static int64_t x196 = INT64_MIN;
	volatile int32_t t35 = 13;

	t35 = ((x193*x194)<(x195^x196));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = -14;
	int8_t x198 = INT8_MIN;
	volatile int32_t x199 = INT32_MIN;
	int16_t x200 = INT16_MIN;

	t36 = ((x197*x198)<(x199^x200));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = -1;
	volatile int8_t x202 = INT8_MIN;
	uint16_t x203 = 14430U;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t37 = -4573;

	t37 = ((x201*x202)<(x203^x204));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x205 = 39;
	int64_t x206 = -5891682653LL;
	volatile int8_t x208 = -1;
	volatile int32_t t38 = 1;

	t38 = ((x205*x206)<(x207^x208));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x210 = 26160443U;
	volatile uint32_t x211 = 1U;
	volatile int64_t x212 = -1LL;
	static int32_t t39 = 22926108;

	t39 = ((x209*x210)<(x211^x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x213 = INT8_MIN;
	uint16_t x214 = UINT16_MAX;
	int32_t x216 = -1;
	static int32_t t40 = -4357304;

	t40 = ((x213*x214)<(x215^x216));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x217 = 299524LLU;
	volatile int32_t x218 = 393729;
	int8_t x219 = -1;
	static int32_t t41 = -1614;

	t41 = ((x217*x218)<(x219^x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x237 = -27;
	static int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MIN;
	static int32_t t42 = -28;

	t42 = ((x237*x238)<(x239^x240));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x243 = 4U;
	static int16_t x244 = INT16_MIN;
	int32_t t43 = 834886;

	t43 = ((x241*x242)<(x243^x244));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x245 = UINT8_MAX;
	int16_t x246 = INT16_MAX;
	int16_t x247 = -1;
	volatile uint64_t x248 = UINT64_MAX;
	int32_t t44 = 50;

	t44 = ((x245*x246)<(x247^x248));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x253 = 600U;
	static volatile uint8_t x254 = 3U;
	uint8_t x255 = 19U;

	t45 = ((x253*x254)<(x255^x256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x261 = -1;
	volatile int16_t x262 = -1;
	int16_t x263 = INT16_MIN;
	volatile int64_t x264 = -1LL;
	volatile int32_t t46 = -123;

	t46 = ((x261*x262)<(x263^x264));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x274 = 71U;
	uint64_t x275 = 4834635LLU;
	uint64_t x276 = 26LLU;
	static int32_t t47 = -67;

	t47 = ((x273*x274)<(x275^x276));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x285 = -58;
	static int64_t x286 = -621575582053120LL;
	volatile int32_t x287 = INT32_MAX;
	volatile int16_t x288 = INT16_MAX;
	static int32_t t48 = 105501;

	t48 = ((x285*x286)<(x287^x288));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x293 = -1;
	volatile uint64_t x294 = 10359278194LLU;
	int32_t x295 = INT32_MAX;
	uint16_t x296 = 25500U;
	int32_t t49 = -114567977;

	t49 = ((x293*x294)<(x295^x296));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x298 = -1;
	volatile uint64_t x299 = 38383904911LLU;
	int32_t t50 = 10;

	t50 = ((x297*x298)<(x299^x300));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = -127LL;
	uint32_t x307 = 260U;
	int32_t t51 = 1266565;

	t51 = ((x305*x306)<(x307^x308));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x309 = -179;
	int32_t x310 = -1;
	static volatile int8_t x311 = -1;
	uint16_t x312 = 29U;

	t52 = ((x309*x310)<(x311^x312));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x313 = -1;
	uint64_t x314 = 28847218LLU;
	volatile int64_t x315 = -1LL;
	int32_t x316 = -4138;
	int32_t t53 = -102113746;

	t53 = ((x313*x314)<(x315^x316));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x317 = INT32_MIN;
	uint32_t x318 = 0U;
	uint16_t x319 = 0U;
	int16_t x320 = -4;
	volatile int32_t t54 = -4943;

	t54 = ((x317*x318)<(x319^x320));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x321 = UINT16_MAX;
	uint64_t x322 = UINT64_MAX;
	int16_t x323 = INT16_MIN;
	volatile int16_t x324 = 469;
	volatile int32_t t55 = 242;

	t55 = ((x321*x322)<(x323^x324));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x333 = 39073231224371645LLU;
	static int16_t x335 = INT16_MIN;
	int16_t x336 = -1;
	static volatile int32_t t56 = 18566722;

	t56 = ((x333*x334)<(x335^x336));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x337 = 5;
	int8_t x338 = -1;
	int16_t x339 = INT16_MAX;
	uint16_t x340 = 14U;
	volatile int32_t t57 = -426615;

	t57 = ((x337*x338)<(x339^x340));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t t58 = -3;

	t58 = ((x345*x346)<(x347^x348));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x352 = UINT16_MAX;
	int32_t t59 = -22456883;

	t59 = ((x349*x350)<(x351^x352));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x353 = INT8_MIN;
	volatile int64_t x355 = INT64_MIN;
	volatile uint16_t x356 = 17853U;
	int32_t t60 = 0;

	t60 = ((x353*x354)<(x355^x356));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x357 = 6U;
	static volatile int8_t x358 = 1;
	int64_t x359 = 0LL;
	uint32_t x360 = UINT32_MAX;
	int32_t t61 = -56;

	t61 = ((x357*x358)<(x359^x360));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x361 = -1;
	int32_t x362 = -1;
	uint64_t x363 = 18009635121114702LLU;
	static int32_t x364 = -184;
	int32_t t62 = -1;

	t62 = ((x361*x362)<(x363^x364));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x369 = 473;
	int32_t x370 = -1;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MAX;

	t63 = ((x369*x370)<(x371^x372));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x373 = -1;
	int64_t x374 = INT64_MAX;
	int32_t x376 = INT32_MIN;
	int32_t t64 = -109;

	t64 = ((x373*x374)<(x375^x376));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x377 = INT16_MAX;
	uint32_t x378 = UINT32_MAX;
	int64_t x380 = -1LL;
	volatile int32_t t65 = 12761;

	t65 = ((x377*x378)<(x379^x380));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x381 = UINT64_MAX;
	uint64_t x382 = UINT64_MAX;
	int32_t t66 = -77;

	t66 = ((x381*x382)<(x383^x384));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x385 = 271216402865170LLU;
	static int64_t x387 = INT64_MAX;
	volatile uint8_t x388 = 52U;
	int32_t t67 = -228547513;

	t67 = ((x385*x386)<(x387^x388));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x389 = 43U;
	int64_t x391 = -1LL;
	uint8_t x392 = 40U;

	t68 = ((x389*x390)<(x391^x392));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x397 = 865;
	static int8_t x399 = 1;
	int32_t x400 = 15190574;

	t69 = ((x397*x398)<(x399^x400));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x405 = INT32_MAX;
	volatile int32_t x407 = INT32_MIN;
	volatile uint16_t x408 = UINT16_MAX;
	volatile int32_t t70 = -51476;

	t70 = ((x405*x406)<(x407^x408));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x409 = INT16_MIN;
	volatile int16_t x410 = -121;
	uint8_t x411 = UINT8_MAX;
	uint64_t x412 = 21430172381065LLU;
	int32_t t71 = 455;

	t71 = ((x409*x410)<(x411^x412));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x413 = -1;
	int32_t x414 = 20768;
	uint8_t x415 = UINT8_MAX;

	t72 = ((x413*x414)<(x415^x416));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x417 = INT32_MAX;
	static uint64_t x418 = UINT64_MAX;
	static int8_t x419 = -1;
	static volatile uint8_t x420 = UINT8_MAX;
	int32_t t73 = 110;

	t73 = ((x417*x418)<(x419^x420));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x426 = 5565LLU;
	int8_t x427 = INT8_MIN;
	int16_t x428 = 0;

	t74 = ((x425*x426)<(x427^x428));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x433 = INT8_MIN;
	int8_t x434 = INT8_MAX;
	volatile int32_t x435 = 414;
	uint8_t x436 = 8U;
	static int32_t t75 = 1;

	t75 = ((x433*x434)<(x435^x436));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x437 = INT32_MIN;
	volatile uint64_t x438 = 5695750860110501423LLU;
	int16_t x439 = 43;
	int64_t x440 = -3477707945313452381LL;

	t76 = ((x437*x438)<(x439^x440));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x441 = INT8_MIN;
	volatile int16_t x442 = INT16_MIN;
	uint16_t x444 = 292U;
	int32_t t77 = 29460556;

	t77 = ((x441*x442)<(x443^x444));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x445 = 652U;
	volatile int8_t x446 = INT8_MIN;
	volatile uint32_t x447 = 4994U;
	int64_t x448 = INT64_MAX;
	static int32_t t78 = 0;

	t78 = ((x445*x446)<(x447^x448));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x449 = 1;
	int32_t x452 = -1;
	volatile int32_t t79 = 1544682;

	t79 = ((x449*x450)<(x451^x452));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x453 = -55;
	int16_t x455 = INT16_MIN;
	int64_t x456 = -1LL;
	static int32_t t80 = 13581142;

	t80 = ((x453*x454)<(x455^x456));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x457 = INT8_MAX;
	int64_t x459 = -229LL;
	int8_t x460 = INT8_MIN;

	t81 = ((x457*x458)<(x459^x460));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x462 = UINT8_MAX;
	static int8_t x464 = 1;
	static int32_t t82 = 874;

	t82 = ((x461*x462)<(x463^x464));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = -2;
	uint8_t x470 = UINT8_MAX;
	uint32_t x471 = UINT32_MAX;

	t83 = ((x469*x470)<(x471^x472));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x477 = 1053385326U;
	int8_t x479 = -5;
	int8_t x480 = INT8_MIN;

	t84 = ((x477*x478)<(x479^x480));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x481 = -328787630;
	static uint64_t x482 = 19005630LLU;
	volatile uint64_t x483 = UINT64_MAX;
	volatile int64_t x484 = -51733501LL;
	int32_t t85 = 978721386;

	t85 = ((x481*x482)<(x483^x484));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x489 = 123LLU;
	int16_t x490 = 0;
	volatile int16_t x491 = INT16_MIN;
	int64_t x492 = 2251628LL;
	int32_t t86 = -5021;

	t86 = ((x489*x490)<(x491^x492));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x493 = INT32_MAX;
	int32_t x494 = -1;
	volatile int16_t x495 = INT16_MAX;
	volatile int16_t x496 = INT16_MIN;
	volatile int32_t t87 = -73571;

	t87 = ((x493*x494)<(x495^x496));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t t88 = -11642994;

	t88 = ((x497*x498)<(x499^x500));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x501 = 4163809940LL;
	uint64_t x502 = UINT64_MAX;
	static uint16_t x504 = 12U;
	int32_t t89 = 3420;

	t89 = ((x501*x502)<(x503^x504));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x505 = UINT32_MAX;
	int8_t x506 = -1;
	int8_t x507 = INT8_MAX;
	static volatile int32_t t90 = 115032;

	t90 = ((x505*x506)<(x507^x508));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x513 = INT8_MIN;
	uint16_t x514 = 12981U;
	int64_t x515 = -1LL;
	int64_t x516 = INT64_MIN;
	volatile int32_t t91 = -5943;

	t91 = ((x513*x514)<(x515^x516));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x521 = INT8_MIN;
	int64_t x523 = -117965LL;
	static volatile int8_t x524 = -1;
	volatile int32_t t92 = 31121;

	t92 = ((x521*x522)<(x523^x524));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x529 = 755761769568LL;
	uint64_t x530 = 1394591811078736LLU;
	uint64_t x531 = 1160086914345612732LLU;
	uint64_t x532 = 21849780LLU;
	volatile int32_t t93 = -1;

	t93 = ((x529*x530)<(x531^x532));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x538 = UINT64_MAX;
	int32_t x539 = 1;
	static int16_t x540 = -1;
	int32_t t94 = -204767457;

	t94 = ((x537*x538)<(x539^x540));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x541 = -1;
	int16_t x543 = -1;
	int16_t x544 = 47;
	int32_t t95 = 11;

	t95 = ((x541*x542)<(x543^x544));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x545 = -1LL;
	static int32_t x548 = -273474084;
	volatile int32_t t96 = -25;

	t96 = ((x545*x546)<(x547^x548));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x549 = 562LLU;
	volatile int8_t x550 = INT8_MAX;

	t97 = ((x549*x550)<(x551^x552));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x553 = UINT32_MAX;
	volatile int8_t x554 = -14;
	int32_t x555 = -1;
	uint8_t x556 = 1U;
	volatile int32_t t98 = 35523;

	t98 = ((x553*x554)<(x555^x556));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x557 = -1;
	uint64_t x558 = 83335874457733798LLU;
	volatile int32_t x559 = -379506;
	static int32_t t99 = 35769109;

	t99 = ((x557*x558)<(x559^x560));

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

