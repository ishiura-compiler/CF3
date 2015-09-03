#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x19 = INT16_MIN;
static int32_t t2 = -22245750;
uint64_t x39 = 6098LLU;
uint64_t t3 = 1LLU;
int32_t t4 = 201580329;
int16_t x49 = -56;
static uint64_t x50 = 51675874LLU;
static uint8_t x61 = UINT8_MAX;
static int16_t x62 = INT16_MAX;
static volatile uint64_t t7 = 34178457334LLU;
int32_t x71 = 8272294;
volatile uint64_t t9 = 1424LLU;
int16_t x77 = INT16_MIN;
int16_t x89 = INT16_MIN;
int16_t x122 = 60;
static volatile uint32_t t16 = 1U;
volatile uint32_t x131 = 103250232U;
uint64_t x135 = 2070686317LLU;
int16_t x138 = -1;
volatile uint32_t t23 = 169U;
int16_t x173 = INT16_MAX;
uint32_t x182 = 988795U;
static uint32_t x198 = UINT32_MAX;
volatile int16_t x209 = INT16_MIN;
static uint32_t x210 = UINT32_MAX;
uint16_t x211 = 5450U;
uint8_t x212 = UINT8_MAX;
static volatile uint32_t t29 = 19U;
static uint64_t t30 = 64741861LLU;
int8_t x226 = INT8_MIN;
uint16_t x239 = 1U;
int64_t x240 = INT64_MIN;
volatile int8_t x243 = -56;
int8_t x246 = INT8_MIN;
uint16_t x255 = UINT16_MAX;
uint8_t x267 = 1U;
int32_t x274 = INT32_MAX;
int32_t x276 = -1;
uint64_t t41 = 1599LLU;
int64_t x285 = -6LL;
uint16_t x294 = 7626U;
uint8_t x296 = 25U;
int32_t t44 = 1321;
int64_t x302 = -1LL;
uint16_t x319 = 13126U;
volatile uint16_t x339 = 7U;
int16_t x363 = INT16_MAX;
static int32_t x367 = -127;
static uint16_t x375 = 11413U;
int16_t x380 = -105;
int32_t t56 = -3867380;
uint64_t x389 = 3925669LLU;
volatile uint64_t x391 = 21981325421361515LLU;
int16_t x396 = INT16_MAX;
int8_t x399 = INT8_MIN;
int8_t x400 = 2;
int64_t x402 = -3630147849094803143LL;
volatile int64_t t60 = -305LL;
uint64_t x405 = 57409371076LLU;
volatile uint16_t x416 = UINT16_MAX;
static int64_t x450 = -474LL;
volatile uint16_t x452 = UINT16_MAX;
uint32_t x457 = UINT32_MAX;
int16_t x466 = INT16_MIN;
static volatile int16_t x467 = INT16_MAX;
int64_t x485 = INT64_MIN;
static int16_t x487 = -456;
volatile int64_t t72 = -374789035325660LL;
int8_t x496 = 8;
int32_t x510 = INT32_MIN;
int32_t x511 = INT32_MAX;
uint16_t x516 = 27428U;
uint8_t x517 = 6U;
int16_t x522 = -3;
int8_t x524 = INT8_MIN;
volatile uint32_t t81 = 225178U;
int32_t x527 = -11470;
uint8_t x534 = UINT8_MAX;
volatile uint16_t x548 = 21U;
int8_t x554 = INT8_MIN;
int32_t x560 = -1;
uint8_t x566 = 18U;
uint64_t x582 = 7265208715467885LLU;
volatile uint16_t x601 = UINT16_MAX;
static uint64_t x616 = 281062534483803193LLU;
int16_t x626 = INT16_MIN;
int32_t t96 = -1148;
static uint64_t x637 = 512733LLU;
int32_t x638 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x2 = 7421022LL;
	int8_t x3 = 1;
	volatile uint32_t x4 = 2000247U;
	static volatile int64_t t0 = 145991242806581LL;

	t0 = ((x1+x2)/(x3*x4));

	if (t0 != 3LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x17 = -1;
	int16_t x18 = -11;
	uint64_t x20 = UINT64_MAX;
	static uint64_t t1 = 11230629625LLU;

	t1 = ((x17+x18)/(x19*x20));

	if (t1 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x25 = INT16_MAX;
	uint8_t x26 = 8U;
	int8_t x27 = 7;
	uint16_t x28 = 7760U;

	t2 = ((x25+x26)/(x27*x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x37 = INT16_MAX;
	int8_t x38 = INT8_MAX;
	uint32_t x40 = 41U;

	t3 = ((x37+x38)/(x39*x40));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MAX;
	volatile int32_t x47 = 128490;
	int8_t x48 = INT8_MIN;

	t4 = ((x45+x46)/(x47*x48));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x51 = INT8_MIN;
	int16_t x52 = -1;
	volatile uint64_t t5 = 10907LLU;

	t5 = ((x49+x50)/(x51*x52));

	if (t5 != 403717LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x53 = 4U;
	int8_t x54 = 0;
	static uint64_t x55 = 452887029014153LLU;
	int32_t x56 = INT32_MAX;
	volatile uint64_t t6 = 4094078923LLU;

	t6 = ((x53+x54)/(x55*x56));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x63 = 291131954364400LLU;
	int8_t x64 = 1;

	t7 = ((x61+x62)/(x63*x64));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x65 = -1LL;
	int8_t x66 = 47;
	int64_t x67 = -31943081749LL;
	static volatile int16_t x68 = INT16_MIN;
	static volatile int64_t t8 = -4002015LL;

	t8 = ((x65+x66)/(x67*x68));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x69 = 123024LLU;
	static uint16_t x70 = 15U;
	uint16_t x72 = 2U;

	t9 = ((x69+x70)/(x71*x72));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x78 = -7215440;
	uint16_t x79 = 31U;
	static uint64_t x80 = 512187420LLU;
	uint64_t t10 = 656230773946813LLU;

	t10 = ((x77+x78)/(x79*x80));

	if (t10 != 1161793978LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x81 = 2035671139LLU;
	volatile uint64_t x82 = 95620068961LLU;
	volatile uint8_t x83 = 14U;
	int16_t x84 = INT16_MIN;
	volatile uint64_t t11 = 13143505385838729LLU;

	t11 = ((x81+x82)/(x83*x84));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x86 = INT8_MIN;
	volatile int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	static volatile uint32_t t12 = 6U;

	t12 = ((x85+x86)/(x87*x88));

	if (t12 != 33554430U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x90 = 29637U;
	static int32_t x91 = -1;
	int8_t x92 = -11;
	int32_t t13 = 12216336;

	t13 = ((x89+x90)/(x91*x92));

	if (t13 != -284) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x105 = INT16_MAX;
	uint8_t x106 = 0U;
	uint64_t x107 = 1560222353LLU;
	uint16_t x108 = UINT16_MAX;
	uint64_t t14 = 3710575LLU;

	t14 = ((x105+x106)/(x107*x108));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x113 = 9U;
	uint64_t x114 = 8096622766981LLU;
	uint64_t x115 = 37307489919215LLU;
	uint16_t x116 = 22204U;
	volatile uint64_t t15 = 3LLU;

	t15 = ((x113+x114)/(x115*x116));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x121 = -1;
	static uint32_t x123 = UINT32_MAX;
	int8_t x124 = -1;

	t16 = ((x121+x122)/(x123*x124));

	if (t16 != 59U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x129 = INT64_MAX;
	uint64_t x130 = 13614567902LLU;
	static int8_t x132 = -1;
	uint64_t t17 = 2084631874299667LLU;

	t17 = ((x129+x130)/(x131*x132));

	if (t17 != 2200380395LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x133 = 4U;
	int16_t x134 = -1;
	int8_t x136 = 53;
	volatile uint64_t t18 = 3948LLU;

	t18 = ((x133+x134)/(x135*x136));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x137 = -1;
	static int8_t x139 = 20;
	int64_t x140 = -78110562964986577LL;
	volatile int64_t t19 = 2030LL;

	t19 = ((x137+x138)/(x139*x140));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x141 = 56U;
	int16_t x142 = -1;
	uint32_t x143 = 18957808U;
	int64_t x144 = -1LL;
	int64_t t20 = 22542054787141LL;

	t20 = ((x141+x142)/(x143*x144));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x161 = -1;
	volatile int32_t x162 = INT32_MAX;
	int8_t x163 = 44;
	static uint64_t x164 = 197139226LLU;
	static volatile uint64_t t21 = 53243LLU;

	t21 = ((x161+x162)/(x163*x164));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x165 = 0U;
	static uint16_t x166 = 115U;
	static uint16_t x167 = 1U;
	int32_t x168 = 17397;
	volatile int32_t t22 = -3832687;

	t22 = ((x165+x166)/(x167*x168));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x169 = INT16_MAX;
	uint8_t x170 = 109U;
	uint32_t x171 = 1247833541U;
	static volatile int32_t x172 = INT32_MIN;

	t23 = ((x169+x170)/(x171*x172));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x174 = INT64_MIN;
	int32_t x175 = -659980349;
	uint64_t x176 = 128448LLU;
	uint64_t t24 = 1439113832774396796LLU;

	t24 = ((x173+x174)/(x175*x176));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x181 = 413U;
	volatile int16_t x183 = -116;
	int8_t x184 = -1;
	static volatile uint32_t t25 = 29U;

	t25 = ((x181+x182)/(x183*x184));

	if (t25 != 8527U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = 9LL;
	int64_t x187 = -127302LL;
	static volatile int8_t x188 = INT8_MIN;
	int64_t t26 = -17611LL;

	t26 = ((x185+x186)/(x187*x188));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x189 = 5U;
	int64_t x190 = 0LL;
	volatile int16_t x191 = 466;
	uint32_t x192 = UINT32_MAX;
	volatile int64_t t27 = 11665LL;

	t27 = ((x189+x190)/(x191*x192));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x197 = 5622U;
	int32_t x199 = INT32_MIN;
	int64_t x200 = -1LL;
	int64_t t28 = 5397485LL;

	t28 = ((x197+x198)/(x199*x200));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {


	t29 = ((x209+x210)/(x211*x212));

	if (t29 != 3090U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x213 = 187894U;
	static int16_t x214 = INT16_MAX;
	int32_t x215 = INT32_MIN;
	uint64_t x216 = UINT64_MAX;

	t30 = ((x213+x214)/(x215*x216));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x225 = -1;
	volatile uint64_t x227 = 227LLU;
	int8_t x228 = -1;
	uint64_t t31 = 13077647082528LLU;

	t31 = ((x225+x226)/(x227*x228));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MIN;
	uint64_t x231 = 61LLU;
	int16_t x232 = -1;
	volatile uint64_t t32 = 9LLU;

	t32 = ((x229+x230)/(x231*x232));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x237 = 5939U;
	uint16_t x238 = 343U;
	int64_t t33 = -1150373LL;

	t33 = ((x237+x238)/(x239*x240));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x241 = 9455954U;
	static int8_t x242 = -1;
	int16_t x244 = 3;
	static volatile uint32_t t34 = 46940597U;

	t34 = ((x241+x242)/(x243*x244));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x245 = -120;
	static uint8_t x247 = 3U;
	static int32_t x248 = 99;
	int32_t t35 = 0;

	t35 = ((x245+x246)/(x247*x248));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x249 = -1;
	int64_t x250 = 7426174LL;
	static uint8_t x251 = UINT8_MAX;
	uint8_t x252 = UINT8_MAX;
	int64_t t36 = 145094789LL;

	t36 = ((x249+x250)/(x251*x252));

	if (t36 != 114LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x253 = -50;
	int16_t x254 = -173;
	static volatile int16_t x256 = INT16_MIN;
	int32_t t37 = -23351035;

	t37 = ((x253+x254)/(x255*x256));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x257 = 47421727392011LLU;
	static uint64_t x258 = 408209384130430749LLU;
	volatile int16_t x259 = INT16_MIN;
	static volatile int32_t x260 = -1;
	static uint64_t t38 = 722LLU;

	t38 = ((x257+x258)/(x259*x260));

	if (t38 != 12459008967829LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x265 = 91U;
	volatile uint32_t x266 = UINT32_MAX;
	int16_t x268 = INT16_MIN;
	uint32_t t39 = 22U;

	t39 = ((x265+x266)/(x267*x268));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x269 = -5267236LL;
	int16_t x270 = -1;
	uint8_t x271 = 23U;
	static volatile uint16_t x272 = UINT16_MAX;
	volatile int64_t t40 = 58976226121LL;

	t40 = ((x269+x270)/(x271*x272));

	if (t40 != -3LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x273 = UINT64_MAX;
	int8_t x275 = -1;

	t41 = ((x273+x274)/(x275*x276));

	if (t41 != 2147483646LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x281 = UINT32_MAX;
	int32_t x282 = 7;
	static int32_t x283 = -1;
	uint32_t x284 = 43U;
	static volatile uint32_t t42 = 35541U;

	t42 = ((x281+x282)/(x283*x284));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x286 = 140U;
	static int16_t x287 = INT16_MIN;
	uint32_t x288 = 1U;
	volatile int64_t t43 = -188883592LL;

	t43 = ((x285+x286)/(x287*x288));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x293 = -1;
	uint8_t x295 = UINT8_MAX;

	t44 = ((x293+x294)/(x295*x296));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x301 = 22524903LLU;
	volatile uint64_t x303 = 8041LLU;
	int8_t x304 = INT8_MIN;
	uint64_t t45 = 122325073LLU;

	t45 = ((x301+x302)/(x303*x304));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x305 = 4U;
	uint64_t x306 = 10483LLU;
	int8_t x307 = -1;
	int16_t x308 = INT16_MAX;
	uint64_t t46 = 66886899615LLU;

	t46 = ((x305+x306)/(x307*x308));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x309 = 46574410;
	static volatile int8_t x310 = INT8_MIN;
	volatile int16_t x311 = INT16_MIN;
	uint16_t x312 = 516U;
	volatile int32_t t47 = -47;

	t47 = ((x309+x310)/(x311*x312));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x317 = 6U;
	volatile uint16_t x318 = UINT16_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t48 = -239718;

	t48 = ((x317+x318)/(x319*x320));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x321 = INT16_MAX;
	static int16_t x322 = -200;
	uint32_t x323 = UINT32_MAX;
	int64_t x324 = -1LL;
	volatile int64_t t49 = 0LL;

	t49 = ((x321+x322)/(x323*x324));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x337 = 3;
	int32_t x338 = INT32_MIN;
	static uint8_t x340 = UINT8_MAX;
	static volatile int32_t t50 = 0;

	t50 = ((x337+x338)/(x339*x340));

	if (t50 != -1203072) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x341 = INT16_MIN;
	int8_t x342 = INT8_MIN;
	uint8_t x343 = 6U;
	volatile int32_t x344 = 7;
	volatile int32_t t51 = -1;

	t51 = ((x341+x342)/(x343*x344));

	if (t51 != -783) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x345 = UINT32_MAX;
	static uint64_t x346 = 11LLU;
	int32_t x347 = -1;
	int16_t x348 = -1;
	uint64_t t52 = 13641848252LLU;

	t52 = ((x345+x346)/(x347*x348));

	if (t52 != 4294967306LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x361 = 15LLU;
	uint16_t x362 = UINT16_MAX;
	int32_t x364 = -1;
	volatile uint64_t t53 = 24525994968LLU;

	t53 = ((x361+x362)/(x363*x364));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x365 = INT32_MIN;
	static volatile int32_t x366 = 0;
	volatile int32_t x368 = 846896;
	int32_t t54 = -244296;

	t54 = ((x365+x366)/(x367*x368));

	if (t54 != 19) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x373 = 16036689562063198LLU;
	int8_t x374 = INT8_MIN;
	int64_t x376 = -1LL;
	uint64_t t55 = 1LLU;

	t55 = ((x373+x374)/(x375*x376));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x377 = INT32_MIN;
	uint8_t x378 = 0U;
	volatile int32_t x379 = -1;

	t56 = ((x377+x378)/(x379*x380));

	if (t56 != -20452225) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x390 = 14735LLU;
	int8_t x392 = INT8_MIN;
	volatile uint64_t t57 = 323686011693593659LLU;

	t57 = ((x389+x390)/(x391*x392));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x393 = -1;
	volatile int64_t x394 = -1LL;
	int16_t x395 = 23;
	int64_t t58 = -75201972048609114LL;

	t58 = ((x393+x394)/(x395*x396));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x397 = 5;
	volatile int32_t x398 = INT32_MIN;
	int32_t t59 = 478458158;

	t59 = ((x397+x398)/(x399*x400));

	if (t59 != 8388607) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x401 = INT32_MAX;
	int16_t x403 = INT16_MIN;
	int16_t x404 = -1;

	t60 = ((x401+x402)/(x403*x404));

	if (t60 != -110783320524515LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MAX;
	volatile uint64_t x408 = 68361018674010966LLU;
	static volatile uint64_t t61 = 6LLU;

	t61 = ((x405+x406)/(x407*x408));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x409 = -1LL;
	uint16_t x410 = 179U;
	volatile int16_t x411 = INT16_MAX;
	int8_t x412 = INT8_MIN;
	int64_t t62 = 2643129691478588LL;

	t62 = ((x409+x410)/(x411*x412));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x413 = INT16_MAX;
	int8_t x414 = -1;
	uint8_t x415 = 1U;
	static int32_t t63 = -4186;

	t63 = ((x413+x414)/(x415*x416));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x441 = -15LL;
	uint64_t x442 = 2326931309LLU;
	int64_t x443 = -1LL;
	int16_t x444 = INT16_MIN;
	uint64_t t64 = 7546416295236LLU;

	t64 = ((x441+x442)/(x443*x444));

	if (t64 != 71012LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x445 = -1;
	uint64_t x446 = 589LLU;
	static uint32_t x447 = 28432U;
	uint64_t x448 = 31703LLU;
	uint64_t t65 = 2054061835427146LLU;

	t65 = ((x445+x446)/(x447*x448));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x449 = 575U;
	volatile int8_t x451 = 2;
	volatile int64_t t66 = -14724LL;

	t66 = ((x449+x450)/(x451*x452));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x458 = -1;
	uint32_t x459 = 365U;
	uint16_t x460 = 287U;
	uint32_t t67 = 297U;

	t67 = ((x457+x458)/(x459*x460));

	if (t67 != 41000U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x461 = UINT64_MAX;
	int64_t x462 = 33583328899865813LL;
	int8_t x463 = INT8_MIN;
	int32_t x464 = -733249;
	uint64_t t68 = 64215097LLU;

	t68 = ((x461+x462)/(x463*x464));

	if (t68 != 357818090LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x465 = 283770245554787977LL;
	static uint64_t x468 = UINT64_MAX;
	volatile uint64_t t69 = 4LLU;

	t69 = ((x465+x466)/(x467*x468));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x469 = 5;
	int32_t x470 = INT32_MIN;
	uint8_t x471 = 33U;
	uint16_t x472 = 6U;
	static volatile int32_t t70 = 1;

	t70 = ((x469+x470)/(x471*x472));

	if (t70 != -10845876) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x477 = INT16_MIN;
	uint8_t x478 = 3U;
	int16_t x479 = 2780;
	uint16_t x480 = 336U;
	volatile int32_t t71 = 251;

	t71 = ((x477+x478)/(x479*x480));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x486 = 103U;
	int32_t x488 = -1;

	t72 = ((x485+x486)/(x487*x488));

	if (t72 != -20226693063278016LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x489 = INT64_MAX;
	int16_t x490 = INT16_MIN;
	uint16_t x491 = UINT16_MAX;
	volatile int8_t x492 = -1;
	volatile int64_t t73 = -246236600672455341LL;

	t73 = ((x489+x490)/(x491*x492));

	if (t73 != -140739635871743LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x493 = INT8_MIN;
	static uint8_t x494 = 1U;
	int32_t x495 = -188409204;
	int32_t t74 = -7186;

	t74 = ((x493+x494)/(x495*x496));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x497 = INT32_MIN;
	int8_t x498 = INT8_MAX;
	int32_t x499 = -1;
	int32_t x500 = -1;
	volatile int32_t t75 = -595993626;

	t75 = ((x497+x498)/(x499*x500));

	if (t75 != -2147483521) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x501 = INT64_MIN;
	uint64_t x502 = 65069LLU;
	volatile int16_t x503 = INT16_MIN;
	volatile int64_t x504 = -1LL;
	volatile uint64_t t76 = 232531LLU;

	t76 = ((x501+x502)/(x503*x504));

	if (t76 != 281474976710657LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x505 = 1U;
	static volatile uint64_t x506 = UINT64_MAX;
	volatile uint32_t x507 = UINT32_MAX;
	int8_t x508 = -1;
	volatile uint64_t t77 = 1956280LLU;

	t77 = ((x505+x506)/(x507*x508));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x509 = 2U;
	uint32_t x512 = 12760654U;
	static uint32_t t78 = 454U;

	t78 = ((x509+x510)/(x511*x512));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x513 = 2724LLU;
	int8_t x514 = INT8_MIN;
	int8_t x515 = 1;
	uint64_t t79 = 73065009LLU;

	t79 = ((x513+x514)/(x515*x516));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x518 = -28;
	volatile uint64_t x519 = 414818LLU;
	int64_t x520 = INT64_MAX;
	uint64_t t80 = 962575292605129LLU;

	t80 = ((x517+x518)/(x519*x520));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x521 = -1;
	volatile uint32_t x523 = UINT32_MAX;

	t81 = ((x521+x522)/(x523*x524));

	if (t81 != 33554431U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x525 = INT32_MAX;
	static int16_t x526 = -1;
	volatile uint8_t x528 = 3U;
	volatile int32_t t82 = -121;

	t82 = ((x525+x526)/(x527*x528));

	if (t82 != -62408) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x529 = -29;
	int32_t x530 = -1262342;
	static int16_t x531 = -1;
	int16_t x532 = INT16_MIN;
	int32_t t83 = -53;

	t83 = ((x529+x530)/(x531*x532));

	if (t83 != -38) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x533 = 999U;
	int32_t x535 = INT32_MIN;
	static uint32_t x536 = 390329571U;
	uint32_t t84 = 6U;

	t84 = ((x533+x534)/(x535*x536));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x537 = INT16_MAX;
	static volatile int64_t x538 = INT64_MIN;
	static volatile int16_t x539 = -1;
	int16_t x540 = INT16_MIN;
	static int64_t t85 = 607485373350421408LL;

	t85 = ((x537+x538)/(x539*x540));

	if (t85 != -281474976710655LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x541 = 113U;
	volatile int16_t x542 = INT16_MIN;
	int8_t x543 = 1;
	static int16_t x544 = 173;
	static int32_t t86 = -1;

	t86 = ((x541+x542)/(x543*x544));

	if (t86 != -188) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x545 = UINT8_MAX;
	int32_t x546 = INT32_MIN;
	int8_t x547 = -1;
	int32_t t87 = 2774;

	t87 = ((x545+x546)/(x547*x548));

	if (t87 != 102261113) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x553 = INT16_MIN;
	int64_t x555 = -1LL;
	uint8_t x556 = 6U;
	int64_t t88 = 206795889448LL;

	t88 = ((x553+x554)/(x555*x556));

	if (t88 != 5482LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x557 = -13;
	static volatile int16_t x558 = INT16_MAX;
	static uint64_t x559 = 16595972LLU;
	volatile uint64_t t89 = 132584LLU;

	t89 = ((x557+x558)/(x559*x560));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x561 = INT64_MAX;
	volatile int16_t x562 = INT16_MIN;
	int16_t x563 = -1;
	uint8_t x564 = UINT8_MAX;
	volatile int64_t t90 = -7611634LL;

	t90 = ((x561+x562)/(x563*x564));

	if (t90 != -36170086419038207LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x565 = -1;
	volatile uint16_t x567 = 28983U;
	uint32_t x568 = 337973U;
	uint32_t t91 = 3U;

	t91 = ((x565+x566)/(x567*x568));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x581 = 4702U;
	static volatile uint8_t x583 = 2U;
	uint64_t x584 = UINT64_MAX;
	static volatile uint64_t t92 = 1084LLU;

	t92 = ((x581+x582)/(x583*x584));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x585 = UINT64_MAX;
	volatile uint16_t x586 = UINT16_MAX;
	int8_t x587 = INT8_MIN;
	int64_t x588 = -245412240347473LL;
	uint64_t t93 = 10893169271511227LLU;

	t93 = ((x585+x586)/(x587*x588));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x602 = -1;
	uint32_t x603 = 620U;
	int8_t x604 = INT8_MIN;
	static volatile uint32_t t94 = 13651528U;

	t94 = ((x601+x602)/(x603*x604));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x613 = INT32_MAX;
	int64_t x614 = 205179261463000800LL;
	int16_t x615 = -1;
	volatile uint64_t t95 = 1447385651955LLU;

	t95 = ((x613+x614)/(x615*x616));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x625 = 21U;
	static uint8_t x627 = 60U;
	static int32_t x628 = -9146;

	t96 = ((x625+x626)/(x627*x628));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x629 = -14;
	static int64_t x630 = -1LL;
	volatile int32_t x631 = -13;
	int64_t x632 = 124LL;
	volatile int64_t t97 = -22752417603824768LL;

	t97 = ((x629+x630)/(x631*x632));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x633 = INT16_MAX;
	uint32_t x634 = UINT32_MAX;
	static uint64_t x635 = UINT64_MAX;
	volatile int16_t x636 = -5;
	uint64_t t98 = 1989770668659428243LLU;

	t98 = ((x633+x634)/(x635*x636));

	if (t98 != 6553LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x639 = UINT32_MAX;
	int8_t x640 = INT8_MIN;
	uint64_t t99 = 8111296390413LLU;

	t99 = ((x637+x638)/(x639*x640));

	if (t99 != 144115188059082661LLU) { NG(); } else { ; }
	
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

