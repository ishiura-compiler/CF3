#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int16_t x2 = 1;
volatile uint64_t t2 = 4140676655254175916LLU;
volatile uint32_t x17 = UINT32_MAX;
volatile uint64_t x19 = 26386418012753281LLU;
volatile uint32_t t3 = 711729U;
int8_t x23 = 17;
uint64_t t4 = 139847040370858LLU;
int8_t x28 = INT8_MIN;
static volatile int32_t t5 = 49;
int64_t x30 = 122447LL;
volatile int64_t t6 = 37673252902LL;
int32_t t8 = -607;
uint64_t x57 = UINT64_MAX;
int64_t x60 = INT64_MAX;
static int32_t t12 = 4648112;
volatile uint64_t t14 = 196LLU;
volatile int64_t x89 = -38710122550LL;
volatile int64_t t15 = 1937425746LL;
uint8_t x95 = 14U;
static volatile int64_t x96 = INT64_MIN;
volatile uint64_t t16 = 1948187LLU;
int64_t x101 = -229000011976112LL;
int16_t x102 = -24;
volatile int8_t x113 = INT8_MAX;
int8_t x116 = 1;
int8_t x117 = 35;
int32_t x123 = -1;
int64_t t21 = 12LL;
static int8_t x129 = -1;
static int32_t t23 = 61;
static volatile uint64_t t24 = 1827097708131569LLU;
uint64_t x149 = UINT64_MAX;
static uint64_t x164 = 202945927320LLU;
int64_t t29 = -66210775LL;
static volatile int32_t t30 = -15724;
int64_t x191 = -346162812LL;
int64_t x200 = INT64_MIN;
static uint64_t t33 = 1LLU;
uint8_t x216 = 27U;
int16_t x234 = -1;
int64_t x253 = -1LL;
uint8_t x264 = 0U;
int8_t x296 = INT8_MIN;
int32_t t47 = 221874058;
uint32_t x302 = UINT32_MAX;
int32_t x307 = INT32_MAX;
volatile int64_t x309 = -1LL;
int64_t x321 = 0LL;
int16_t x322 = -1;
uint8_t x324 = UINT8_MAX;
static int16_t x325 = INT16_MAX;
static volatile uint16_t x328 = 7854U;
volatile int32_t t54 = -400760141;
static volatile int32_t t57 = -846656;
int16_t x368 = INT16_MIN;
int32_t t59 = -1;
int8_t x381 = 46;
uint16_t x390 = 27121U;
uint64_t x393 = UINT64_MAX;
int16_t x401 = INT16_MIN;
int64_t x427 = -1559767714LL;
volatile int64_t t69 = -13802902165342264LL;
static int64_t x451 = -1LL;
static int64_t x464 = 897LL;
volatile uint64_t x471 = 32424662895066LLU;
static uint16_t x473 = UINT16_MAX;
int64_t x483 = -1LL;
static int16_t x484 = INT16_MIN;
int8_t x486 = INT8_MAX;
volatile int32_t t82 = 112756;
static volatile int32_t x493 = -11976576;
int8_t x494 = -1;
int64_t x498 = -1LL;
volatile uint8_t x501 = 82U;
int8_t x502 = 0;
int8_t x512 = -1;
uint64_t t86 = 250787509359LLU;
static int64_t x540 = INT64_MAX;
static int64_t t90 = 245187226365631927LL;
int16_t x561 = INT16_MIN;
int64_t t95 = -14120373134972LL;
int64_t x575 = -976654692622905490LL;
static int64_t x582 = -1LL;
volatile int64_t t97 = 1218258582328LL;
static uint8_t x590 = UINT8_MAX;
volatile int32_t t99 = 7914204;


void f0(void) {
	static int16_t x3 = INT16_MIN;
	int16_t x4 = 30;
	volatile int32_t t0 = -26915667;

	t0 = ((x1*x2)|(x3==x4));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = -1;
	int32_t x7 = -1;
	volatile int8_t x8 = 14;
	static volatile int32_t t1 = -28600;

	t1 = ((x5*x6)|(x7==x8));

	if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint64_t x10 = UINT64_MAX;
	uint32_t x11 = 94U;
	int8_t x12 = INT8_MAX;

	t2 = ((x9*x10)|(x11==x12));

	if (t2 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = UINT32_MAX;
	static uint16_t x20 = 2030U;

	t3 = ((x17*x18)|(x19==x20));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 3097450186720LLU;
	int8_t x22 = 4;
	uint32_t x24 = 154902U;

	t4 = ((x21*x22)|(x23==x24));

	if (t4 != 12389800746880LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	volatile int16_t x26 = INT16_MIN;
	int64_t x27 = -7952803395LL;

	t5 = ((x25*x26)|(x27==x28));

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	uint16_t x31 = 6791U;
	uint32_t x32 = UINT32_MAX;

	t6 = ((x29*x30)|(x31==x32));

	if (t6 != -122447LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -1LL;
	static int8_t x38 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = 59U;
	int64_t t7 = -1606LL;

	t7 = ((x37*x38)|(x39==x40));

	if (t7 != -127LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MIN;
	int16_t x47 = INT16_MIN;
	int64_t x48 = INT64_MAX;

	t8 = ((x45*x46)|(x47==x48));

	if (t8 != 16384) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x58 = 13938343;
	int8_t x59 = 63;
	volatile uint64_t t9 = 2935396892739LLU;

	t9 = ((x57*x58)|(x59==x60));

	if (t9 != 18446744073695613273LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = UINT8_MAX;
	uint64_t x62 = 14877312049753967LLU;
	static uint32_t x63 = UINT32_MAX;
	int32_t x64 = INT32_MIN;
	volatile uint64_t t10 = 790467043843289460LLU;

	t10 = ((x61*x62)|(x63==x64));

	if (t10 != 3793714572687261585LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = UINT32_MAX;
	int32_t x66 = 0;
	volatile uint64_t x67 = 0LLU;
	uint32_t x68 = 811903997U;
	volatile uint32_t t11 = 9241005U;

	t11 = ((x65*x66)|(x67==x68));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = -1;
	int8_t x78 = INT8_MAX;
	static volatile int32_t x79 = INT32_MAX;
	uint32_t x80 = UINT32_MAX;

	t12 = ((x77*x78)|(x79==x80));

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x81 = 3U;
	int32_t x82 = 1;
	uint8_t x83 = 13U;
	int64_t x84 = INT64_MIN;
	int32_t t13 = -3;

	t13 = ((x81*x82)|(x83==x84));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x85 = 367LLU;
	int32_t x86 = INT32_MIN;
	int8_t x87 = -1;
	int64_t x88 = -1LL;

	t14 = ((x85*x86)|(x87==x88));

	if (t14 != 18446743285583052801LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x90 = UINT8_MAX;
	uint16_t x91 = 34U;
	int8_t x92 = -1;

	t15 = ((x89*x90)|(x91==x92));

	if (t15 != -9871081250250LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = -1;
	volatile uint64_t x94 = 46971607566LLU;

	t16 = ((x93*x94)|(x95==x96));

	if (t16 != 18446744026737944050LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x103 = 3;
	static int8_t x104 = INT8_MIN;
	static int64_t t17 = -1242735LL;

	t17 = ((x101*x102)|(x103==x104));

	if (t17 != 5496000287426688LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x109 = 8016238;
	int64_t x110 = -1LL;
	volatile int64_t x111 = -643825289324LL;
	int64_t x112 = INT64_MIN;
	volatile int64_t t18 = -2149640942484050334LL;

	t18 = ((x109*x110)|(x111==x112));

	if (t18 != -8016238LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x114 = 55U;
	uint32_t x115 = 24U;
	static volatile int32_t t19 = -2836626;

	t19 = ((x113*x114)|(x115==x116));

	if (t19 != 6985) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x118 = 8625321807477518576LLU;
	int8_t x119 = INT8_MAX;
	int16_t x120 = INT16_MIN;
	static uint64_t t20 = 89826854LLU;

	t20 = ((x117*x118)|(x119==x120));

	if (t20 != 6738358082360324304LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x121 = 3LL;
	int64_t x122 = -404LL;
	volatile int16_t x124 = -418;

	t21 = ((x121*x122)|(x123==x124));

	if (t21 != -1212LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = INT32_MAX;
	static uint64_t x126 = UINT64_MAX;
	int16_t x127 = -1;
	int32_t x128 = INT32_MIN;
	uint64_t t22 = 6417388039143248581LLU;

	t22 = ((x125*x126)|(x127==x128));

	if (t22 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x130 = INT32_MAX;
	static volatile int8_t x131 = 0;
	int64_t x132 = 106492965984383LL;

	t23 = ((x129*x130)|(x131==x132));

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x133 = 148LLU;
	int64_t x134 = INT64_MIN;
	int8_t x135 = INT8_MAX;
	static int16_t x136 = INT16_MAX;

	t24 = ((x133*x134)|(x135==x136));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x150 = INT32_MAX;
	int16_t x151 = -23;
	int32_t x152 = 1;
	volatile uint64_t t25 = 190LLU;

	t25 = ((x149*x150)|(x151==x152));

	if (t25 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x157 = -1;
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = INT16_MIN;
	static volatile int16_t x160 = -943;
	int32_t t26 = -213;

	t26 = ((x157*x158)|(x159==x160));

	if (t26 != -255) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x161 = 49;
	int32_t x162 = -367;
	int8_t x163 = INT8_MIN;
	volatile int32_t t27 = 6;

	t27 = ((x161*x162)|(x163==x164));

	if (t27 != -17983) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x165 = 16U;
	int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MAX;
	static int8_t x168 = INT8_MIN;
	int32_t t28 = -651384;

	t28 = ((x165*x166)|(x167==x168));

	if (t28 != -524288) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x177 = UINT32_MAX;
	int64_t x178 = -1LL;
	static uint32_t x179 = 1U;
	int64_t x180 = INT64_MAX;

	t29 = ((x177*x178)|(x179==x180));

	if (t29 != -4294967295LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x181 = -37;
	uint8_t x182 = 19U;
	volatile int32_t x183 = INT32_MIN;
	int16_t x184 = -50;

	t30 = ((x181*x182)|(x183==x184));

	if (t30 != -703) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x185 = INT32_MAX;
	int32_t x186 = -1;
	int8_t x187 = -1;
	int8_t x188 = -26;
	static int32_t t31 = -885567274;

	t31 = ((x185*x186)|(x187==x188));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x189 = 4U;
	uint16_t x190 = UINT16_MAX;
	int64_t x192 = -1LL;
	volatile int32_t t32 = -3372238;

	t32 = ((x189*x190)|(x191==x192));

	if (t32 != 262140) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x197 = 54554196373LLU;
	int32_t x198 = 454;
	int32_t x199 = INT32_MIN;

	t33 = ((x197*x198)|(x199==x200));

	if (t33 != 24767605153342LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x201 = 0U;
	static int32_t x202 = -492269;
	int8_t x203 = 11;
	int64_t x204 = 57LL;
	volatile int32_t t34 = 482251757;

	t34 = ((x201*x202)|(x203==x204));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x205 = 6U;
	static uint32_t x206 = UINT32_MAX;
	uint64_t x207 = 120764498107434170LLU;
	volatile uint64_t x208 = UINT64_MAX;
	volatile uint32_t t35 = 1U;

	t35 = ((x205*x206)|(x207==x208));

	if (t35 != 4294967290U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x213 = 5019;
	uint64_t x214 = UINT64_MAX;
	static uint8_t x215 = 29U;
	volatile uint64_t t36 = 3134093005773460LLU;

	t36 = ((x213*x214)|(x215==x216));

	if (t36 != 18446744073709546597LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = -5062166875894LL;
	volatile int8_t x223 = 1;
	uint32_t x224 = 249014U;
	volatile int64_t t37 = -2363885052LL;

	t37 = ((x221*x222)|(x223==x224));

	if (t37 != -165872022022418698LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x233 = 3782072LLU;
	uint8_t x235 = 125U;
	static int64_t x236 = INT64_MIN;
	uint64_t t38 = 25025025596LLU;

	t38 = ((x233*x234)|(x235==x236));

	if (t38 != 18446744073705769544LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x237 = -1;
	int16_t x238 = 4235;
	uint64_t x239 = 2337488LLU;
	static int32_t x240 = -125;
	volatile int32_t t39 = -12389;

	t39 = ((x237*x238)|(x239==x240));

	if (t39 != -4235) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x241 = UINT32_MAX;
	volatile uint64_t x242 = 125002941231661370LLU;
	int16_t x243 = -116;
	int16_t x244 = INT16_MIN;
	static uint64_t t40 = 9345910663307619LLU;

	t40 = ((x241*x242)|(x243==x244));

	if (t40 != 4774351852013747910LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x254 = INT16_MIN;
	volatile int64_t x255 = -623752087LL;
	uint16_t x256 = 1927U;
	volatile int64_t t41 = -435524297819253LL;

	t41 = ((x253*x254)|(x255==x256));

	if (t41 != 32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x261 = 159U;
	uint8_t x262 = 4U;
	static volatile uint64_t x263 = UINT64_MAX;
	volatile int32_t t42 = 32110301;

	t42 = ((x261*x262)|(x263==x264));

	if (t42 != 636) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x265 = INT8_MIN;
	int16_t x266 = -1;
	uint8_t x267 = 0U;
	uint32_t x268 = 34U;
	int32_t t43 = 133138200;

	t43 = ((x265*x266)|(x267==x268));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x269 = 279U;
	int8_t x270 = INT8_MAX;
	static int16_t x271 = -5564;
	int8_t x272 = INT8_MIN;
	int32_t t44 = -1;

	t44 = ((x269*x270)|(x271==x272));

	if (t44 != 35433) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x277 = 845;
	static int8_t x278 = INT8_MIN;
	volatile int32_t x279 = INT32_MAX;
	volatile int8_t x280 = INT8_MAX;
	static int32_t t45 = -941573891;

	t45 = ((x277*x278)|(x279==x280));

	if (t45 != -108160) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x281 = -16689892058757LL;
	int32_t x282 = -27;
	int16_t x283 = INT16_MIN;
	int32_t x284 = -74;
	int64_t t46 = -2503357465689697329LL;

	t46 = ((x281*x282)|(x283==x284));

	if (t46 != 450627085586439LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x293 = -1;
	int16_t x294 = INT16_MIN;
	volatile uint64_t x295 = 430LLU;

	t47 = ((x293*x294)|(x295==x296));

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x301 = 1285U;
	int8_t x303 = -1;
	int16_t x304 = INT16_MIN;
	volatile uint32_t t48 = 9083364U;

	t48 = ((x301*x302)|(x303==x304));

	if (t48 != 4294966011U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x305 = -1LL;
	volatile int32_t x306 = -1;
	int32_t x308 = 22319644;
	volatile int64_t t49 = 428632035500262343LL;

	t49 = ((x305*x306)|(x307==x308));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x310 = 81U;
	static int16_t x311 = 11256;
	uint32_t x312 = UINT32_MAX;
	volatile int64_t t50 = -17LL;

	t50 = ((x309*x310)|(x311==x312));

	if (t50 != -81LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x317 = UINT64_MAX;
	static volatile int64_t x318 = INT64_MIN;
	uint64_t x319 = UINT64_MAX;
	uint64_t x320 = 402532248868LLU;
	volatile uint64_t t51 = 236951017849999865LLU;

	t51 = ((x317*x318)|(x319==x320));

	if (t51 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x323 = UINT16_MAX;
	volatile int64_t t52 = 235LL;

	t52 = ((x321*x322)|(x323==x324));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x326 = INT8_MAX;
	static uint8_t x327 = 13U;
	volatile int32_t t53 = 8991;

	t53 = ((x325*x326)|(x327==x328));

	if (t53 != 4161409) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x329 = 1;
	int8_t x330 = INT8_MIN;
	volatile uint8_t x331 = UINT8_MAX;
	int32_t x332 = INT32_MAX;

	t54 = ((x329*x330)|(x331==x332));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x337 = INT16_MAX;
	volatile uint64_t x338 = UINT64_MAX;
	int8_t x339 = 27;
	static uint8_t x340 = UINT8_MAX;
	static volatile uint64_t t55 = 111LLU;

	t55 = ((x337*x338)|(x339==x340));

	if (t55 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x353 = 6847668U;
	uint32_t x354 = 37027055U;
	static int8_t x355 = INT8_MIN;
	uint8_t x356 = 10U;
	uint32_t t56 = 360U;

	t56 = ((x353*x354)|(x355==x356));

	if (t56 != 4175272972U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x361 = 66;
	int8_t x362 = 0;
	int32_t x363 = -347;
	int64_t x364 = -1LL;

	t57 = ((x361*x362)|(x363==x364));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x365 = 100088386U;
	static int32_t x366 = 49691;
	int32_t x367 = 38;
	static uint32_t t58 = 10844U;

	t58 = ((x365*x366)|(x367==x368));

	if (t58 != 4214827254U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x373 = INT16_MAX;
	static uint8_t x374 = 5U;
	int32_t x375 = INT32_MIN;
	static int16_t x376 = -1;

	t59 = ((x373*x374)|(x375==x376));

	if (t59 != 163835) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x377 = INT8_MIN;
	volatile int64_t x378 = -1LL;
	static int32_t x379 = -60925;
	volatile int16_t x380 = 5;
	static int64_t t60 = -132819821384LL;

	t60 = ((x377*x378)|(x379==x380));

	if (t60 != 128LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x382 = 98569LLU;
	uint16_t x383 = 3U;
	int32_t x384 = INT32_MIN;
	volatile uint64_t t61 = 5214811898LLU;

	t61 = ((x381*x382)|(x383==x384));

	if (t61 != 4534174LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x389 = 59;
	static uint64_t x391 = UINT64_MAX;
	static int64_t x392 = INT64_MIN;
	int32_t t62 = -10878620;

	t62 = ((x389*x390)|(x391==x392));

	if (t62 != 1600139) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x394 = INT16_MIN;
	int32_t x395 = 35067401;
	uint32_t x396 = 2U;
	uint64_t t63 = 4756637777282625LLU;

	t63 = ((x393*x394)|(x395==x396));

	if (t63 != 32768LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x402 = -18;
	int8_t x403 = INT8_MIN;
	int16_t x404 = 1;
	volatile int32_t t64 = 1;

	t64 = ((x401*x402)|(x403==x404));

	if (t64 != 589824) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x405 = 14U;
	int8_t x406 = -9;
	int32_t x407 = -1;
	volatile int64_t x408 = -1535902LL;
	volatile int32_t t65 = 40;

	t65 = ((x405*x406)|(x407==x408));

	if (t65 != -126) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x409 = -562;
	int16_t x410 = -794;
	uint64_t x411 = 3117898599204LLU;
	volatile uint32_t x412 = 64751404U;
	static int32_t t66 = 502;

	t66 = ((x409*x410)|(x411==x412));

	if (t66 != 446228) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x417 = -1100;
	int16_t x418 = INT16_MIN;
	uint64_t x419 = UINT64_MAX;
	volatile int8_t x420 = -4;
	int32_t t67 = 4;

	t67 = ((x417*x418)|(x419==x420));

	if (t67 != 36044800) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x421 = 26U;
	static volatile int8_t x422 = INT8_MIN;
	uint16_t x423 = 4U;
	uint64_t x424 = 30065114LLU;
	int32_t t68 = 707;

	t68 = ((x421*x422)|(x423==x424));

	if (t68 != -3328) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x425 = INT16_MIN;
	int64_t x426 = 12993144635LL;
	uint64_t x428 = 128392LLU;

	t69 = ((x425*x426)|(x427==x428));

	if (t69 != -425759363399680LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x429 = -82475692832972LL;
	volatile uint16_t x430 = 716U;
	static int8_t x431 = -1;
	int64_t x432 = -1LL;
	static volatile int64_t t70 = -8400LL;

	t70 = ((x429*x430)|(x431==x432));

	if (t70 != -59052596068407951LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x433 = -1;
	static uint32_t x434 = UINT32_MAX;
	static int32_t x435 = INT32_MIN;
	static int16_t x436 = -119;
	uint32_t t71 = 26190639U;

	t71 = ((x433*x434)|(x435==x436));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x437 = 188917668806492282LLU;
	uint8_t x438 = 0U;
	int32_t x439 = -3;
	static int64_t x440 = -65495369909028LL;
	static volatile uint64_t t72 = 5534558518050LLU;

	t72 = ((x437*x438)|(x439==x440));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x441 = 6;
	uint32_t x442 = 1857U;
	volatile int32_t x443 = INT32_MAX;
	static int64_t x444 = -970LL;
	volatile uint32_t t73 = 1385916U;

	t73 = ((x441*x442)|(x443==x444));

	if (t73 != 11142U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x445 = -14712;
	uint32_t x446 = 230U;
	uint16_t x447 = 1U;
	uint16_t x448 = UINT16_MAX;
	uint32_t t74 = 4U;

	t74 = ((x445*x446)|(x447==x448));

	if (t74 != 4291583536U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x449 = 0U;
	int16_t x450 = 5518;
	static uint16_t x452 = UINT16_MAX;
	static volatile uint32_t t75 = 212449360U;

	t75 = ((x449*x450)|(x451==x452));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x453 = 1;
	int64_t x454 = -1LL;
	int16_t x455 = INT16_MAX;
	static uint32_t x456 = 7U;
	static volatile int64_t t76 = 107460LL;

	t76 = ((x453*x454)|(x455==x456));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x461 = -47;
	int16_t x462 = INT16_MIN;
	volatile int8_t x463 = -1;
	int32_t t77 = -1287;

	t77 = ((x461*x462)|(x463==x464));

	if (t77 != 1540096) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x469 = 21874005682LLU;
	int32_t x470 = INT32_MIN;
	uint16_t x472 = 40U;
	static volatile uint64_t t78 = 3001931294LLU;

	t78 = ((x469*x470)|(x471==x472));

	if (t78 != 8366162702774566912LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x474 = INT16_MAX;
	int32_t x475 = 559987;
	volatile uint32_t x476 = 38207U;
	int32_t t79 = -26081032;

	t79 = ((x473*x474)|(x475==x476));

	if (t79 != 2147385345) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x477 = INT8_MIN;
	static uint64_t x478 = UINT64_MAX;
	static int8_t x479 = -1;
	int16_t x480 = INT16_MIN;
	volatile uint64_t t80 = 270400LLU;

	t80 = ((x477*x478)|(x479==x480));

	if (t80 != 128LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x481 = 26661739U;
	int8_t x482 = 0;
	volatile uint32_t t81 = 9489422U;

	t81 = ((x481*x482)|(x483==x484));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x485 = -1;
	static int64_t x487 = INT64_MAX;
	static int8_t x488 = INT8_MIN;

	t82 = ((x485*x486)|(x487==x488));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x495 = 10405U;
	int64_t x496 = -4214082780LL;
	static int32_t t83 = -6002;

	t83 = ((x493*x494)|(x495==x496));

	if (t83 != 11976576) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x497 = INT64_MAX;
	int8_t x499 = INT8_MIN;
	uint16_t x500 = UINT16_MAX;
	volatile int64_t t84 = -19365100LL;

	t84 = ((x497*x498)|(x499==x500));

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x503 = INT8_MIN;
	static volatile uint64_t x504 = 177611LLU;
	volatile int32_t t85 = 2651549;

	t85 = ((x501*x502)|(x503==x504));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x509 = 5562305377028LLU;
	static uint8_t x510 = UINT8_MAX;
	uint32_t x511 = 2949U;

	t86 = ((x509*x510)|(x511==x512));

	if (t86 != 1418387871142140LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x513 = -7;
	int8_t x514 = -1;
	int8_t x515 = -1;
	static int32_t x516 = -521063541;
	int32_t t87 = -256;

	t87 = ((x513*x514)|(x515==x516));

	if (t87 != 7) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x521 = -1LL;
	volatile int32_t x522 = 2999;
	volatile uint64_t x523 = UINT64_MAX;
	volatile int8_t x524 = 24;
	volatile int64_t t88 = 3910543120809105LL;

	t88 = ((x521*x522)|(x523==x524));

	if (t88 != -2999LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x533 = 472LL;
	static int32_t x534 = 54;
	int64_t x535 = INT64_MIN;
	int64_t x536 = INT64_MAX;
	static volatile int64_t t89 = 1695683703LL;

	t89 = ((x533*x534)|(x535==x536));

	if (t89 != 25488LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x537 = 9413542LL;
	int32_t x538 = -1;
	static uint64_t x539 = 49836020LLU;

	t90 = ((x537*x538)|(x539==x540));

	if (t90 != -9413542LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x549 = 1U;
	volatile int16_t x550 = 32;
	static int64_t x551 = -56855575842240539LL;
	volatile int64_t x552 = INT64_MAX;
	int32_t t91 = -3851;

	t91 = ((x549*x550)|(x551==x552));

	if (t91 != 32) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x553 = 122275;
	uint8_t x554 = UINT8_MAX;
	uint32_t x555 = 277344880U;
	uint64_t x556 = 2820780707296507516LLU;
	volatile int32_t t92 = -7;

	t92 = ((x553*x554)|(x555==x556));

	if (t92 != 31180125) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x557 = 7U;
	int16_t x558 = INT16_MIN;
	int32_t x559 = INT32_MAX;
	uint16_t x560 = 0U;
	static uint32_t t93 = 48301U;

	t93 = ((x557*x558)|(x559==x560));

	if (t93 != 4294737920U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x562 = -1;
	int64_t x563 = INT64_MIN;
	uint8_t x564 = 1U;
	static volatile int32_t t94 = -47;

	t94 = ((x561*x562)|(x563==x564));

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x569 = INT16_MAX;
	int64_t x570 = -1LL;
	static int32_t x571 = INT32_MAX;
	int64_t x572 = INT64_MIN;

	t95 = ((x569*x570)|(x571==x572));

	if (t95 != -32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x573 = UINT8_MAX;
	volatile int64_t x574 = -37LL;
	volatile int8_t x576 = 2;
	volatile int64_t t96 = 49759786LL;

	t96 = ((x573*x574)|(x575==x576));

	if (t96 != -9435LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x581 = UINT8_MAX;
	int8_t x583 = INT8_MIN;
	uint32_t x584 = 22597153U;

	t97 = ((x581*x582)|(x583==x584));

	if (t97 != -255LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x585 = UINT64_MAX;
	int32_t x586 = 7;
	uint32_t x587 = 815U;
	int32_t x588 = INT32_MIN;
	static uint64_t t98 = 192LLU;

	t98 = ((x585*x586)|(x587==x588));

	if (t98 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x589 = -1;
	int16_t x591 = INT16_MIN;
	static uint16_t x592 = 0U;

	t99 = ((x589*x590)|(x591==x592));

	if (t99 != -255) { NG(); } else { ; }
	
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

