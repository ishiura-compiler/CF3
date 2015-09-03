#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MIN;
uint32_t x3 = 319012U;
uint64_t t1 = 5823LLU;
uint32_t x38 = 864950U;
volatile int64_t t4 = -1043LL;
int32_t x41 = INT32_MIN;
int32_t x42 = 663;
int32_t t6 = -254;
volatile int8_t x57 = INT8_MIN;
static uint32_t x60 = 14208U;
int16_t x65 = INT16_MAX;
volatile uint16_t x66 = 21649U;
uint64_t x70 = 2667322319LLU;
int16_t x90 = INT16_MIN;
static uint32_t x98 = 329243220U;
int16_t x99 = INT16_MIN;
volatile uint8_t x105 = 2U;
int64_t t15 = -10581027475974LL;
volatile int32_t x113 = -5;
static uint64_t x117 = 0LLU;
volatile int8_t x119 = INT8_MIN;
volatile uint64_t t17 = 0LLU;
int64_t x123 = 1675LL;
static int64_t t18 = -8225LL;
static uint8_t x128 = 2U;
int64_t x129 = INT64_MIN;
int16_t x132 = -1;
int64_t x134 = INT64_MIN;
volatile int32_t x137 = 175;
static uint32_t x141 = 261719U;
volatile int8_t x143 = 0;
uint64_t x153 = UINT64_MAX;
static volatile int64_t x168 = -1LL;
static uint32_t x170 = 14794269U;
static volatile uint32_t t27 = 115U;
uint16_t x185 = UINT16_MAX;
int64_t x197 = -253LL;
uint64_t x198 = 1565346738847356020LLU;
uint64_t x215 = 1993LLU;
volatile int64_t t35 = -2294869297622546167LL;
uint16_t x230 = 27199U;
static int32_t t36 = 10;
int32_t x237 = INT32_MAX;
uint16_t x246 = 16U;
int16_t x247 = -75;
volatile int32_t t40 = 24927;
uint16_t x253 = 5U;
static int8_t x264 = 1;
int32_t t42 = 116;
static volatile int16_t x266 = -42;
static int16_t x267 = -1;
uint32_t x270 = UINT32_MAX;
static int8_t x271 = 4;
int8_t x274 = -9;
int8_t x276 = -1;
int8_t x283 = 2;
int16_t x290 = -1;
int32_t x292 = 49880;
static volatile int32_t x294 = -1;
volatile uint64_t t49 = 470239741LLU;
static uint64_t t50 = 6LLU;
static uint8_t x312 = 3U;
static uint32_t x321 = UINT32_MAX;
int16_t x323 = 1;
int16_t x324 = -1;
uint32_t t54 = 396499U;
uint32_t t57 = 2U;
int8_t x338 = INT8_MIN;
static uint8_t x344 = 2U;
uint64_t t59 = 261825418180377LLU;
static volatile int32_t x356 = -1;
static int64_t x363 = 201715975065410LL;
uint32_t x379 = UINT32_MAX;
volatile int64_t x381 = -4LL;
int64_t x383 = INT64_MIN;
uint64_t x394 = 25397663LLU;
int64_t t70 = -280588797757397959LL;
int8_t x406 = 5;
int64_t x408 = -1LL;
int32_t x409 = INT32_MIN;
int32_t x415 = INT32_MAX;
uint16_t x416 = UINT16_MAX;
uint16_t x418 = UINT16_MAX;
static int32_t x427 = INT32_MIN;
int16_t x429 = -1;
volatile uint16_t x433 = 813U;
static volatile int64_t t79 = -41586932747475LL;
int32_t x447 = 248;
int16_t x448 = INT16_MIN;
static int16_t x457 = -1;
uint32_t x459 = UINT32_MAX;
volatile uint32_t t81 = 15862145U;
int32_t x466 = -1;
int16_t x468 = -24;
int8_t x469 = INT8_MAX;
static uint8_t x481 = 44U;
uint16_t x483 = 11U;
volatile uint64_t t87 = 0LLU;
uint16_t x495 = 8097U;
volatile uint64_t t89 = 4873091903639LLU;
int8_t x498 = INT8_MIN;
uint64_t t92 = 29615595LLU;
int16_t x521 = INT16_MAX;
uint16_t x524 = 868U;
uint64_t x527 = UINT64_MAX;
static volatile uint64_t t97 = 8102810189230565LLU;
volatile uint16_t x541 = 56U;
static int16_t x542 = -1;
uint32_t t99 = 1916914066U;


void f0(void) {
	uint16_t x1 = 609U;
	uint16_t x4 = 645U;
	uint32_t t0 = 390U;

	t0 = (x1*((x2&x3)*x4));

	if (t0 != 4173758464U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = -1;
	int32_t x18 = 3;
	int16_t x19 = INT16_MAX;
	uint64_t x20 = 2556512912LLU;

	t1 = (x17*((x18&x19)*x20));

	if (t1 != 18446744066040012880LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = UINT16_MAX;
	uint64_t x22 = 2LLU;
	uint64_t x23 = 65547483533525LLU;
	int64_t x24 = INT64_MIN;
	uint64_t t2 = 3153LLU;

	t2 = (x21*((x22&x23)*x24));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = -1;
	int64_t x34 = -1LL;
	int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MAX;
	static int64_t t3 = -1299948729097949LL;

	t3 = (x33*((x34&x35)*x36));

	if (t3 != -16129LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x37 = INT32_MIN;
	static int32_t x39 = -1;
	int64_t x40 = -1LL;

	t4 = (x37*((x38&x39)*x40));

	if (t4 != 1857465981337600LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x43 = INT64_MIN;
	static int8_t x44 = INT8_MAX;
	int64_t t5 = -37287832LL;

	t5 = (x41*((x42&x43)*x44));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = INT32_MIN;
	static int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	static uint8_t x52 = 0U;

	t6 = (x49*((x50&x51)*x52));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x58 = INT32_MIN;
	volatile int8_t x59 = -20;
	uint32_t t7 = 419610U;

	t7 = (x57*((x58&x59)*x60));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x67 = -5880896LL;
	int8_t x68 = INT8_MAX;
	volatile int64_t t8 = 1LL;

	t8 = (x65*((x66&x67)*x68));

	if (t8 != 68713185408LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x69 = -7;
	int8_t x71 = -59;
	static uint8_t x72 = 90U;
	volatile uint64_t t9 = 20663289LLU;

	t9 = (x69*((x70&x71)*x72));

	if (t9 != 18446742393296496946LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x81 = 5952U;
	volatile int32_t x82 = INT32_MIN;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MAX;
	uint32_t t10 = 1698451554U;

	t10 = (x81*((x82&x83)*x84));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x89 = INT64_MIN;
	uint32_t x91 = UINT32_MAX;
	uint64_t x92 = UINT64_MAX;
	uint64_t t11 = 9834254LLU;

	t11 = (x89*((x90&x91)*x92));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x93 = -2;
	uint32_t x94 = 98027090U;
	int8_t x95 = -53;
	uint8_t x96 = UINT8_MAX;
	volatile uint32_t t12 = 781315U;

	t12 = (x93*((x94&x95)*x96));

	if (t12 != 1545799812U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x97 = -1;
	volatile uint8_t x100 = 1U;
	volatile uint32_t t13 = 469475558U;

	t13 = (x97*((x98&x99)*x100));

	if (t13 != 3965747200U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x101 = 1U;
	volatile uint64_t x102 = UINT64_MAX;
	int32_t x103 = INT32_MIN;
	int32_t x104 = 35977164;
	uint64_t t14 = 213789LLU;

	t14 = (x101*((x102&x103)*x104));

	if (t14 != 18369483702318137344LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x106 = 1;
	int64_t x107 = 30917862LL;
	uint16_t x108 = 497U;

	t15 = (x105*((x106&x107)*x108));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x114 = 463U;
	int32_t x115 = 0;
	volatile int16_t x116 = INT16_MAX;
	static uint32_t t16 = 30296203U;

	t16 = (x113*((x114&x115)*x116));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x118 = 1;
	int16_t x120 = -149;

	t17 = (x117*((x118&x119)*x120));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x121 = 3;
	int16_t x122 = INT16_MIN;
	volatile int32_t x124 = -1978084;

	t18 = (x121*((x122&x123)*x124));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x125 = 68U;
	int16_t x126 = -1;
	int16_t x127 = -1;
	static volatile int32_t t19 = -9540;

	t19 = (x125*((x126&x127)*x128));

	if (t19 != -136) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x130 = UINT16_MAX;
	uint32_t x131 = 0U;
	volatile int64_t t20 = -4343154LL;

	t20 = (x129*((x130&x131)*x132));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x133 = -1;
	int16_t x135 = INT16_MIN;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t21 = 4848264829522LLU;

	t21 = (x133*((x134&x135)*x136));

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x138 = 2U;
	volatile uint64_t x139 = 27731859038546LLU;
	int32_t x140 = 48;
	uint64_t t22 = 1676381272358214LLU;

	t22 = (x137*((x138&x139)*x140));

	if (t22 != 16800LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x142 = INT16_MAX;
	int16_t x144 = 630;
	uint32_t t23 = 146360136U;

	t23 = (x141*((x142&x143)*x144));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x149 = -1LL;
	uint16_t x150 = 4U;
	uint64_t x151 = 549014LLU;
	volatile uint8_t x152 = UINT8_MAX;
	uint64_t t24 = 1183690818336LLU;

	t24 = (x149*((x150&x151)*x152));

	if (t24 != 18446744073709550596LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x154 = 445768;
	int16_t x155 = INT16_MIN;
	volatile uint16_t x156 = 25U;
	static uint64_t t25 = 65020LLU;

	t25 = (x153*((x154&x155)*x156));

	if (t25 != 18446744073698902016LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x165 = 7354482LL;
	uint64_t x166 = 8969571348LLU;
	volatile uint64_t x167 = UINT64_MAX;
	static uint64_t t26 = 369945779LLU;

	t26 = (x165*((x166&x167)*x168));

	if (t26 != 18380777522682969880LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x169 = -1;
	int16_t x171 = INT16_MIN;
	volatile uint32_t x172 = UINT32_MAX;

	t27 = (x169*((x170&x171)*x172));

	if (t27 != 14778368U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x173 = INT64_MIN;
	uint64_t x174 = 6696991235153508935LLU;
	int32_t x175 = INT32_MIN;
	int32_t x176 = -1;
	static uint64_t t28 = 62745LLU;

	t28 = (x173*((x174&x175)*x176));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x181 = UINT64_MAX;
	uint64_t x182 = 55229LLU;
	uint16_t x183 = UINT16_MAX;
	uint32_t x184 = 14U;
	uint64_t t29 = 2726084071369830LLU;

	t29 = (x181*((x182&x183)*x184));

	if (t29 != 18446744073708778410LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x186 = INT16_MIN;
	uint32_t x187 = 1067465176U;
	static int16_t x188 = INT16_MIN;
	volatile uint32_t t30 = 469U;

	t30 = (x185*((x186&x187)*x188));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x199 = INT16_MIN;
	uint16_t x200 = 30313U;
	uint64_t t31 = 136917264649826828LLU;

	t31 = (x197*((x198&x199)*x200));

	if (t31 != 16584975463784382464LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x205 = INT16_MIN;
	uint8_t x206 = UINT8_MAX;
	uint32_t x207 = UINT32_MAX;
	int32_t x208 = INT32_MIN;
	uint32_t t32 = 12111999U;

	t32 = (x205*((x206&x207)*x208));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x209 = 26U;
	static int64_t x210 = INT64_MAX;
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = 1;
	int64_t t33 = -4641979952LL;

	t33 = (x209*((x210&x211)*x212));

	if (t33 != 1703910LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x213 = INT16_MIN;
	static int32_t x214 = -1;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t34 = 22611261LLU;

	t34 = (x213*((x214&x215)*x216));

	if (t34 != 2139967455232LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x225 = -76160LL;
	uint8_t x226 = 0U;
	int16_t x227 = -1;
	volatile int64_t x228 = INT64_MIN;

	t35 = (x225*((x226&x227)*x228));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x229 = INT8_MAX;
	int16_t x231 = INT16_MAX;
	uint8_t x232 = UINT8_MAX;

	t36 = (x229*((x230&x231)*x232));

	if (t36 != 880839615) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x238 = INT32_MIN;
	volatile int32_t x239 = INT32_MAX;
	int32_t x240 = INT32_MIN;
	int32_t t37 = -2217;

	t37 = (x237*((x238&x239)*x240));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x241 = INT32_MIN;
	volatile uint32_t x242 = UINT32_MAX;
	int8_t x243 = -1;
	int32_t x244 = 19206436;
	static volatile uint32_t t38 = 2129606560U;

	t38 = (x241*((x242&x243)*x244));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x245 = 508U;
	volatile int16_t x248 = INT16_MIN;
	int32_t t39 = 7666;

	t39 = (x245*((x246&x247)*x248));

	if (t39 != -266338304) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x249 = INT32_MIN;
	int16_t x250 = INT16_MAX;
	int32_t x251 = INT32_MIN;
	int16_t x252 = 68;

	t40 = (x249*((x250&x251)*x252));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x254 = 59U;
	int8_t x255 = 46;
	static int16_t x256 = INT16_MAX;
	volatile int32_t t41 = 53566;

	t41 = (x253*((x254&x255)*x256));

	if (t41 != 6881070) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x261 = UINT8_MAX;
	int8_t x262 = INT8_MIN;
	int8_t x263 = -1;

	t42 = (x261*((x262&x263)*x264));

	if (t42 != -32640) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x265 = 0U;
	static uint16_t x268 = 7858U;
	volatile int32_t t43 = -836;

	t43 = (x265*((x266&x267)*x268));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x269 = -1;
	int16_t x272 = INT16_MAX;
	uint32_t t44 = 5080U;

	t44 = (x269*((x270&x271)*x272));

	if (t44 != 4294836228U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int16_t x275 = -4;
	static volatile int32_t t45 = -1;

	t45 = (x273*((x274&x275)*x276));

	if (t45 != 786420) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x281 = -1;
	uint32_t x282 = 4U;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t46 = 1767721990703117298LLU;

	t46 = (x281*((x282&x283)*x284));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x285 = INT32_MAX;
	static int64_t x286 = 243431LL;
	int8_t x287 = INT8_MIN;
	volatile uint8_t x288 = UINT8_MAX;
	int64_t t47 = 2626LL;

	t47 = (x285*((x286&x287)*x288));

	if (t47 != 133248439718590080LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x289 = 836;
	uint32_t x291 = 24U;
	uint32_t t48 = 64506600U;

	t48 = (x289*((x290&x291)*x292));

	if (t48 != 1000792320U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x293 = 1080LLU;
	uint16_t x295 = 34U;
	volatile int8_t x296 = -1;

	t49 = (x293*((x294&x295)*x296));

	if (t49 != 18446744073709514896LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x301 = INT16_MAX;
	int32_t x302 = -1;
	uint64_t x303 = 2LLU;
	uint16_t x304 = 2U;

	t50 = (x301*((x302&x303)*x304));

	if (t50 != 131068LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x305 = -97531950;
	static volatile uint64_t x306 = 2625LLU;
	uint16_t x307 = 18466U;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t51 = 29029278LLU;

	t51 = (x305*((x306&x307)*x308));

	if (t51 != 25567415500800LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x309 = INT8_MIN;
	uint16_t x310 = 761U;
	uint8_t x311 = UINT8_MAX;
	int32_t t52 = -13888695;

	t52 = (x309*((x310&x311)*x312));

	if (t52 != -95616) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = INT16_MIN;
	static int8_t x319 = INT8_MIN;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t53 = 4187LLU;

	t53 = (x317*((x318&x319)*x320));

	if (t53 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x322 = INT16_MIN;

	t54 = (x321*((x322&x323)*x324));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x325 = INT16_MIN;
	int32_t x326 = INT32_MIN;
	int32_t x327 = -20800;
	static volatile uint32_t x328 = 149U;
	static uint32_t t55 = 2848696U;

	t55 = (x325*((x326&x327)*x328));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x329 = 59U;
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = -1;
	volatile uint16_t x332 = 1748U;
	static int32_t t56 = -4891;

	t56 = (x329*((x330&x331)*x332));

	if (t56 != 26298660) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x333 = 2931;
	int16_t x334 = INT16_MAX;
	uint32_t x335 = UINT32_MAX;
	int8_t x336 = -1;

	t57 = (x333*((x334&x335)*x336));

	if (t57 != 4198927219U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x337 = -1;
	static int64_t x339 = 41LL;
	static int32_t x340 = 162676;
	int64_t t58 = 67515542723328736LL;

	t58 = (x337*((x338&x339)*x340));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x341 = 104LLU;
	static uint8_t x342 = 0U;
	int64_t x343 = -14199021209LL;

	t59 = (x341*((x342&x343)*x344));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MIN;
	int16_t x348 = 1;
	int32_t t60 = -65;

	t60 = (x345*((x346&x347)*x348));

	if (t60 != -4161536) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x349 = -16354;
	volatile uint16_t x350 = 1U;
	static uint64_t x351 = UINT64_MAX;
	volatile int32_t x352 = -1;
	uint64_t t61 = 6LLU;

	t61 = (x349*((x350&x351)*x352));

	if (t61 != 16354LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x353 = 7498548U;
	int32_t x354 = INT32_MAX;
	int8_t x355 = 7;
	uint32_t t62 = 235757825U;

	t62 = (x353*((x354&x355)*x356));

	if (t62 != 4242477460U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x361 = -4LL;
	volatile uint8_t x362 = 1U;
	int64_t x364 = INT64_MIN;
	int64_t t63 = 396920309599456824LL;

	t63 = (x361*((x362&x363)*x364));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x365 = INT8_MAX;
	static int32_t x366 = INT32_MIN;
	uint16_t x367 = 19U;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t64 = 7;

	t64 = (x365*((x366&x367)*x368));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x369 = 0U;
	volatile uint16_t x370 = 3U;
	uint32_t x371 = 512585U;
	uint32_t x372 = 11404627U;
	uint32_t t65 = 1267U;

	t65 = (x369*((x370&x371)*x372));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x377 = 30085745LL;
	int16_t x378 = INT16_MIN;
	uint64_t x380 = UINT64_MAX;
	static uint64_t t66 = 33017223560LLU;

	t66 = (x377*((x378&x379)*x380));

	if (t66 != 18317527768708448256LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x382 = UINT16_MAX;
	int64_t x384 = INT64_MAX;
	static volatile int64_t t67 = 225952644586LL;

	t67 = (x381*((x382&x383)*x384));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x385 = INT8_MIN;
	uint64_t x386 = 10644094542LLU;
	static int8_t x387 = -1;
	volatile uint8_t x388 = 29U;
	volatile uint64_t t68 = 17165683090936485LLU;

	t68 = (x385*((x386&x387)*x388));

	if (t68 != 18446704562830611712LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x393 = 50812LL;
	int32_t x395 = INT32_MIN;
	volatile uint32_t x396 = UINT32_MAX;
	volatile uint64_t t69 = 504722LLU;

	t69 = (x393*((x394&x395)*x396));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x397 = INT8_MIN;
	uint32_t x398 = UINT32_MAX;
	static int16_t x399 = -635;
	static int64_t x400 = -1LL;

	t70 = (x397*((x398&x399)*x400));

	if (t70 != 549755732608LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int64_t x402 = INT64_MAX;
	uint64_t x403 = 5066647LLU;
	uint8_t x404 = 0U;
	uint64_t t71 = 2730391719030418LLU;

	t71 = (x401*((x402&x403)*x404));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x405 = UINT8_MAX;
	uint64_t x407 = 1393173481037532LLU;
	volatile uint64_t t72 = 2140368LLU;

	t72 = (x405*((x406&x407)*x408));

	if (t72 != 18446744073709550596LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x410 = INT64_MIN;
	int8_t x411 = 5;
	int8_t x412 = INT8_MIN;
	int64_t t73 = -56861872328632415LL;

	t73 = (x409*((x410&x411)*x412));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x413 = UINT8_MAX;
	uint32_t x414 = 256857793U;
	volatile uint32_t t74 = 110823U;

	t74 = (x413*((x414&x415)*x416));

	if (t74 != 708285889U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x417 = 128839780074LL;
	int64_t x419 = 6669299025LL;
	uint32_t x420 = 10U;
	volatile int64_t t75 = -463860457821470612LL;

	t75 = (x417*((x418&x419)*x420));

	if (t75 != 36055812453708900LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x425 = 84719742592521253LL;
	static uint8_t x426 = UINT8_MAX;
	int32_t x428 = INT32_MAX;
	int64_t t76 = 345LL;

	t76 = (x425*((x426&x427)*x428));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x430 = -1;
	int8_t x431 = INT8_MAX;
	volatile int8_t x432 = INT8_MIN;
	static int32_t t77 = 4220;

	t77 = (x429*((x430&x431)*x432));

	if (t77 != 16256) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x434 = INT16_MIN;
	uint32_t x435 = 751822569U;
	static uint32_t x436 = 2U;
	static uint32_t t78 = 245370U;

	t78 = (x433*((x434&x435)*x436));

	if (t78 != 2649948160U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x437 = -1LL;
	static uint16_t x438 = 2U;
	int32_t x439 = INT32_MIN;
	int8_t x440 = INT8_MIN;

	t79 = (x437*((x438&x439)*x440));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x445 = 174LLU;
	volatile uint64_t x446 = 12405774253937LLU;
	uint64_t t80 = 7LLU;

	t80 = (x445*((x446&x447)*x448));

	if (t80 != 18446744073070968832LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x458 = INT32_MAX;
	volatile int8_t x460 = -18;

	t81 = (x457*((x458&x459)*x460));

	if (t81 != 4294967278U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x461 = 3U;
	int8_t x462 = -31;
	uint32_t x463 = 1036895U;
	int8_t x464 = INT8_MIN;
	volatile uint32_t t82 = 11281366U;

	t82 = (x461*((x462&x463)*x464));

	if (t82 != 3896811136U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x465 = UINT8_MAX;
	int16_t x467 = -1;
	static int32_t t83 = 353966;

	t83 = (x465*((x466&x467)*x468));

	if (t83 != 6120) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x470 = 8941U;
	int32_t x471 = INT32_MIN;
	volatile uint16_t x472 = 0U;
	int32_t t84 = 1;

	t84 = (x469*((x470&x471)*x472));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x473 = 13;
	static int16_t x474 = INT16_MIN;
	volatile uint16_t x475 = 84U;
	static int64_t x476 = -1LL;
	int64_t t85 = 15565937894600507LL;

	t85 = (x473*((x474&x475)*x476));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x482 = -1;
	static int32_t x484 = -3499;
	volatile int32_t t86 = 0;

	t86 = (x481*((x482&x483)*x484));

	if (t86 != -1693516) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x485 = UINT64_MAX;
	uint64_t x486 = 35135730325813LLU;
	volatile int64_t x487 = 426132700165095389LL;
	static uint16_t x488 = UINT16_MAX;

	t87 = (x485*((x486&x487)*x488));

	if (t87 != 17481708095098558741LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x489 = 6U;
	uint64_t x490 = 345726640540LLU;
	volatile uint64_t x491 = 1550173662LLU;
	int8_t x492 = 1;
	static volatile uint64_t t88 = 30767474692204LLU;

	t88 = (x489*((x490&x491)*x492));

	if (t88 != 9299462568LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x493 = 24U;
	uint64_t x494 = UINT64_MAX;
	static volatile int8_t x496 = -1;

	t89 = (x493*((x494&x495)*x496));

	if (t89 != 18446744073709357288LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x497 = INT8_MIN;
	uint16_t x499 = 11U;
	int8_t x500 = -50;
	volatile int32_t t90 = -2698694;

	t90 = (x497*((x498&x499)*x500));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x501 = -1;
	int32_t x502 = INT32_MAX;
	volatile int64_t x503 = INT64_MIN;
	static uint32_t x504 = 27578U;
	static int64_t t91 = -236772235369011LL;

	t91 = (x501*((x502&x503)*x504));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x505 = INT16_MAX;
	uint64_t x506 = UINT64_MAX;
	volatile int64_t x507 = INT64_MIN;
	int16_t x508 = -1;

	t92 = (x505*((x506&x507)*x508));

	if (t92 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x509 = -1;
	int16_t x510 = INT16_MAX;
	uint8_t x511 = UINT8_MAX;
	uint64_t x512 = 311947643415785209LLU;
	uint64_t t93 = 34268852817718LLU;

	t93 = (x509*((x510&x511)*x512));

	if (t93 != 12687071297522529785LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x517 = 1;
	uint64_t x518 = UINT64_MAX;
	int16_t x519 = -2;
	static volatile int16_t x520 = -6;
	volatile uint64_t t94 = 2592LLU;

	t94 = (x517*((x518&x519)*x520));

	if (t94 != 12LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x522 = -18757;
	static int64_t x523 = 1LL;
	int64_t t95 = 1LL;

	t95 = (x521*((x522&x523)*x524));

	if (t95 != 28441756LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x525 = INT64_MIN;
	int64_t x526 = -7688174968LL;
	static int8_t x528 = INT8_MIN;
	static uint64_t t96 = 5983907071350712LLU;

	t96 = (x525*((x526&x527)*x528));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x533 = UINT64_MAX;
	uint16_t x534 = UINT16_MAX;
	volatile int32_t x535 = 0;
	uint32_t x536 = 2U;

	t97 = (x533*((x534&x535)*x536));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x537 = INT32_MAX;
	static volatile int32_t x538 = INT32_MIN;
	int64_t x539 = 0LL;
	static uint64_t x540 = 1485007LLU;
	static volatile uint64_t t98 = 4482640597462LLU;

	t98 = (x537*((x538&x539)*x540));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x543 = 1788221U;
	uint16_t x544 = UINT16_MAX;

	t99 = (x541*((x542&x543)*x544));

	if (t99 != 4284480168U) { NG(); } else { ; }
	
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

