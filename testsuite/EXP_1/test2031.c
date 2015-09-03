#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x5 = UINT32_MAX;
uint64_t x8 = UINT64_MAX;
int16_t x16 = -1;
volatile uint16_t x18 = 1U;
volatile uint32_t t3 = 578761U;
int64_t x21 = -55222849824261LL;
int16_t x22 = INT16_MIN;
volatile int8_t x24 = INT8_MAX;
volatile int64_t t4 = 498493LL;
int8_t x36 = -1;
volatile int64_t x42 = 3774331474206952926LL;
volatile uint64_t x48 = 236892323183LLU;
int16_t x53 = -1;
volatile uint16_t x62 = 1U;
int16_t x73 = INT16_MIN;
uint64_t x74 = UINT64_MAX;
uint32_t x75 = 1299U;
static int16_t x77 = INT16_MIN;
int32_t x78 = 21052;
static int8_t x79 = 1;
uint8_t x81 = 1U;
volatile int16_t x82 = -1;
static volatile uint32_t t14 = 681U;
uint32_t x97 = 222U;
int8_t x110 = -1;
static uint64_t x124 = 1LLU;
uint8_t x126 = UINT8_MAX;
uint16_t x130 = UINT16_MAX;
int8_t x139 = -1;
static uint32_t t24 = 447597238U;
static volatile uint32_t t26 = 150029U;
static int64_t x154 = INT64_MIN;
static volatile uint64_t t30 = 8337LLU;
static uint8_t x181 = UINT8_MAX;
volatile int16_t x184 = -1;
int64_t t32 = 2076117777348LL;
int16_t x185 = INT16_MIN;
uint32_t x187 = 1983910U;
int8_t x190 = INT8_MAX;
uint32_t t34 = 2126579365U;
volatile int16_t x193 = -1;
static int8_t x196 = INT8_MIN;
int16_t x197 = INT16_MIN;
uint32_t x198 = UINT32_MAX;
static int32_t x199 = INT32_MIN;
int32_t x211 = INT32_MIN;
int64_t x231 = -5149139LL;
int64_t x232 = INT64_MIN;
uint64_t t40 = 545018797556LLU;
int64_t x234 = INT64_MAX;
int16_t x238 = INT16_MAX;
static uint8_t x250 = UINT8_MAX;
int32_t x252 = INT32_MIN;
int16_t x253 = -3;
static int16_t x254 = INT16_MAX;
volatile int16_t x295 = 526;
static uint64_t x296 = UINT64_MAX;
uint64_t x313 = 1LLU;
static volatile int16_t x314 = INT16_MIN;
volatile uint64_t t51 = 0LLU;
int32_t x317 = -21;
static int32_t x319 = -110;
uint8_t x324 = UINT8_MAX;
uint32_t x329 = UINT32_MAX;
volatile int16_t x332 = INT16_MIN;
uint32_t t54 = 90U;
static int64_t x335 = -97228642946208LL;
volatile int8_t x339 = -1;
int64_t x340 = -4LL;
volatile uint8_t x347 = 0U;
static uint64_t x351 = UINT64_MAX;
static int16_t x360 = -8153;
static volatile uint32_t x362 = UINT32_MAX;
volatile uint64_t t62 = 548313869695603LLU;
uint32_t x374 = 165057157U;
volatile uint64_t t63 = 713171130410298581LLU;
static volatile int8_t x378 = INT8_MIN;
static uint64_t t64 = 19860198LLU;
int16_t x392 = INT16_MAX;
int32_t x399 = -1;
int32_t x408 = -1;
volatile uint64_t t68 = 9457775527LLU;
int64_t t69 = -14LL;
volatile int64_t x413 = -1886LL;
static uint8_t x415 = 22U;
int64_t t70 = -3653110338382LL;
static uint32_t t71 = 3U;
volatile int16_t x435 = -1;
uint32_t x442 = 282777U;
uint64_t x475 = UINT64_MAX;
static int8_t x478 = INT8_MIN;
static volatile uint64_t x481 = UINT64_MAX;
volatile int32_t t78 = -7330471;
static int32_t x495 = INT32_MIN;
volatile int64_t t79 = 27120501732884629LL;
static int16_t x497 = -1;
uint32_t x500 = 139U;
static uint32_t t80 = 28U;
int32_t x511 = -300;
uint64_t x512 = UINT64_MAX;
int16_t x520 = INT16_MIN;
int8_t x528 = 0;
static uint16_t x545 = 0U;
int64_t x553 = 16512597750365LL;
int32_t t90 = 120;
uint32_t x573 = 94700U;
static uint32_t x581 = 31U;
int8_t x583 = INT8_MIN;
volatile int16_t x589 = INT16_MIN;
static int64_t x594 = -1LL;
int32_t x597 = INT32_MIN;
uint64_t x601 = UINT64_MAX;


void f0(void) {
	int32_t x6 = 1037016;
	static int16_t x7 = 277;
	static volatile uint64_t t0 = 1730LLU;

	t0 = (((x5^x6)+x7)*x8);

	if (t0 != 18446744069415621060LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = -1;
	int32_t x10 = -1;
	uint16_t x11 = 29U;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t1 = -171;

	t1 = (((x9^x10)+x11)*x12);

	if (t1 != 7395) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	uint16_t x14 = UINT16_MAX;
	uint16_t x15 = 0U;
	volatile int32_t t2 = -12;

	t2 = (((x13^x14)+x15)*x16);

	if (t2 != 32769) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = INT8_MIN;
	static uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MAX;

	t3 = (((x17^x18)+x19)*x20);

	if (t3 != 128U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x23 = -1;

	t4 = (((x21^x22)+x23)*x24);

	if (t4 != 7013301925208838LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MAX;
	int8_t x31 = 0;
	int64_t x32 = 723009110LL;
	int64_t t5 = 1596319612819LL;

	t5 = (((x29^x30)+x31)*x32);

	if (t5 != 3105300389614900480LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 28U;
	int32_t x34 = INT32_MAX;
	int16_t x35 = INT16_MIN;
	volatile int32_t t6 = 3;

	t6 = (((x33^x34)+x35)*x36);

	if (t6 != -2147450851) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x41 = 15U;
	int32_t x43 = INT32_MIN;
	volatile int16_t x44 = -2;
	volatile int64_t t7 = -1964136321292499LL;

	t7 = (((x41^x42)+x43)*x44);

	if (t7 != -7548662944118938530LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = 27543385862643084LL;
	int16_t x46 = -556;
	static volatile int32_t x47 = -1;
	uint64_t t8 = 7963476134788279186LLU;

	t8 = (((x45^x46)+x47)*x48);

	if (t8 != 15110057899292901561LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x54 = 1458527855LLU;
	static uint32_t x55 = UINT32_MAX;
	volatile int8_t x56 = -1;
	static volatile uint64_t t9 = 12975830433LLU;

	t9 = (((x53^x54)+x55)*x56);

	if (t9 != 18446744070873112177LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = -3623220LL;
	static int32_t x63 = INT32_MIN;
	int8_t x64 = -1;
	volatile int64_t t10 = 16249LL;

	t10 = (((x61^x62)+x63)*x64);

	if (t10 != 2151106867LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = UINT32_MAX;
	uint64_t x70 = UINT64_MAX;
	uint8_t x71 = UINT8_MAX;
	uint8_t x72 = UINT8_MAX;
	uint64_t t11 = 1LLU;

	t11 = (((x69^x70)+x71)*x72);

	if (t11 != 18446742978492956161LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x76 = 796060LL;
	static volatile uint64_t t12 = 1LLU;

	t12 = (((x73^x74)+x75)*x76);

	if (t12 != 27118579960LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x80 = 225232536LLU;
	volatile uint64_t t13 = 1282733588936LLU;

	t13 = (((x77^x78)+x79)*x80);

	if (t13 != 18446741435110392376LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x83 = UINT32_MAX;
	uint16_t x84 = UINT16_MAX;

	t14 = (((x81^x82)+x83)*x84);

	if (t14 != 4294770691U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x85 = INT16_MAX;
	uint64_t x86 = 288LLU;
	uint64_t x87 = 9358LLU;
	static volatile uint64_t x88 = 235930850613487950LLU;
	uint64_t t15 = 16231541732880539LLU;

	t15 = (((x85^x86)+x87)*x88);

	if (t15 != 1630917681885249590LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x93 = 56U;
	int16_t x94 = INT16_MIN;
	uint16_t x95 = 150U;
	int8_t x96 = INT8_MAX;
	static int32_t t16 = -114;

	t16 = (((x93^x94)+x95)*x96);

	if (t16 != -4135374) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x98 = 6;
	static int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;
	volatile uint32_t t17 = 42418U;

	t17 = (((x97^x98)+x99)*x100);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x105 = INT16_MAX;
	int16_t x106 = INT16_MIN;
	static int16_t x107 = 2891;
	uint16_t x108 = 39U;
	int32_t t18 = -397225;

	t18 = (((x105^x106)+x107)*x108);

	if (t18 != 112710) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = -1;
	int8_t x111 = INT8_MIN;
	int8_t x112 = -40;
	volatile int32_t t19 = -9;

	t19 = (((x109^x110)+x111)*x112);

	if (t19 != 5120) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x117 = 1U;
	int16_t x118 = 2970;
	int32_t x119 = INT32_MIN;
	static volatile uint64_t x120 = 128758LLU;
	uint64_t t20 = 2847LLU;

	t20 = (((x117^x118)+x119)*x120);

	if (t20 != 18446467568392542450LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = INT32_MIN;
	static uint16_t x122 = 0U;
	uint16_t x123 = 58U;
	volatile uint64_t t21 = 82690125590785095LLU;

	t21 = (((x121^x122)+x123)*x124);

	if (t21 != 18446744071562068026LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = 2286;
	int64_t x127 = INT64_MIN;
	static uint64_t x128 = 25285598LLU;
	volatile uint64_t t22 = 79892LLU;

	t22 = (((x125^x126)+x127)*x128);

	if (t22 != 52214759870LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = INT64_MIN;
	uint64_t x131 = 12742083687002584LLU;
	volatile int8_t x132 = -23;
	uint64_t t23 = 29LLU;

	t23 = (((x129^x130)+x131)*x132);

	if (t23 != 8930304112052209071LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x137 = 6327U;
	volatile uint32_t x138 = 1449U;
	volatile int32_t x140 = INT32_MAX;

	t24 = (((x137^x138)+x139)*x140);

	if (t24 != 2147476195U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = 1LL;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;
	int64_t t25 = -192LL;

	t25 = (((x141^x142)+x143)*x144);

	if (t25 != 70641474600960LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int8_t x146 = -8;
	int32_t x147 = INT32_MAX;
	int8_t x148 = INT8_MIN;

	t26 = (((x145^x146)+x147)*x148);

	if (t26 != 4294966528U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x153 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = 741286LLU;
	uint64_t t27 = 814157275LLU;

	t27 = (((x153^x154)+x155)*x156);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x157 = 5U;
	int64_t x158 = -2419248142LL;
	int32_t x159 = -124;
	volatile int32_t x160 = INT32_MAX;
	static volatile int64_t t28 = 90530018LL;

	t28 = (((x157^x158)+x159)*x160);

	if (t28 != -5195296078530687867LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x161 = UINT32_MAX;
	static int8_t x162 = -2;
	volatile int16_t x163 = INT16_MIN;
	static uint8_t x164 = UINT8_MAX;
	uint32_t t29 = 1U;

	t29 = (((x161^x162)+x163)*x164);

	if (t29 != 4286611711U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x165 = INT16_MAX;
	int16_t x166 = INT16_MAX;
	volatile uint8_t x167 = 31U;
	uint64_t x168 = UINT64_MAX;

	t30 = (((x165^x166)+x167)*x168);

	if (t30 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x177 = 312539672071LLU;
	int8_t x178 = -2;
	static int32_t x179 = -828;
	int16_t x180 = 46;
	volatile uint64_t t31 = 3094LLU;

	t31 = (((x177^x178)+x179)*x180);

	if (t31 != 18446729696884598262LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x182 = UINT16_MAX;
	int64_t x183 = 12414LL;

	t32 = (((x181^x182)+x183)*x184);

	if (t32 != -77694LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x186 = INT8_MIN;
	int8_t x188 = INT8_MIN;
	uint32_t t33 = 48068450U;

	t33 = (((x185^x186)+x187)*x188);

	if (t33 != 4036848896U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x189 = 41;
	uint32_t x191 = 4322U;
	uint32_t x192 = UINT32_MAX;

	t34 = (((x189^x190)+x191)*x192);

	if (t34 != 4294962888U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x194 = 324022U;
	int32_t x195 = -22;
	uint32_t t35 = 148154U;

	t35 = (((x193^x194)+x195)*x196);

	if (t35 != 41477760U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x200 = INT32_MIN;
	volatile uint32_t t36 = 562884U;

	t36 = (((x197^x198)+x199)*x200);

	if (t36 != 2147483648U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x209 = -1889LL;
	int32_t x210 = -1;
	static int8_t x212 = INT8_MIN;
	volatile int64_t t37 = -1034444506861LL;

	t37 = (((x209^x210)+x211)*x212);

	if (t37 != 274877665280LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x221 = -1;
	uint64_t x222 = 76715807813495LLU;
	int64_t x223 = INT64_MIN;
	static uint16_t x224 = 0U;
	volatile uint64_t t38 = 450754LLU;

	t38 = (((x221^x222)+x223)*x224);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x225 = INT32_MIN;
	int16_t x226 = -95;
	int32_t x227 = -258;
	static uint64_t x228 = UINT64_MAX;
	uint64_t t39 = 12416066913LLU;

	t39 = (((x225^x226)+x227)*x228);

	if (t39 != 18446744071562068321LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x229 = INT64_MAX;
	volatile uint64_t x230 = 3507624075597857201LLU;

	t40 = (((x229^x230)+x231)*x232);

	if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x233 = INT64_MIN;
	static int8_t x235 = INT8_MIN;
	uint16_t x236 = 3224U;
	static int64_t t41 = -213367502654LL;

	t41 = (((x233^x234)+x235)*x236);

	if (t41 != -415896LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x237 = UINT16_MAX;
	volatile uint64_t x239 = UINT64_MAX;
	uint16_t x240 = UINT16_MAX;
	uint64_t t42 = 308730104LLU;

	t42 = (((x237^x238)+x239)*x240);

	if (t42 != 2147385345LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x249 = 0;
	uint32_t x251 = 93330U;
	uint32_t t43 = 3896U;

	t43 = (((x249^x250)+x251)*x252);

	if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x255 = 2U;
	uint32_t x256 = 11U;
	uint32_t t44 = 782306538U;

	t44 = (((x253^x254)+x255)*x256);

	if (t44 != 4294606892U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x257 = INT16_MIN;
	uint32_t x258 = 30842352U;
	volatile int8_t x259 = INT8_MAX;
	int8_t x260 = INT8_MAX;
	volatile uint32_t t45 = 304U;

	t45 = (((x257^x258)+x259)*x260);

	if (t45 != 375789841U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x261 = 11304113803833282LL;
	int32_t x262 = 1;
	int16_t x263 = -78;
	uint8_t x264 = UINT8_MAX;
	volatile int64_t t46 = -21060616830778LL;

	t46 = (((x261^x262)+x263)*x264);

	if (t46 != 2882549019977467275LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x277 = UINT32_MAX;
	volatile uint64_t x278 = UINT64_MAX;
	int16_t x279 = -1;
	int64_t x280 = -1LL;
	uint64_t t47 = 396739281657LLU;

	t47 = (((x277^x278)+x279)*x280);

	if (t47 != 4294967297LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x281 = 3U;
	static int8_t x282 = -1;
	static volatile uint64_t x283 = UINT64_MAX;
	int16_t x284 = INT16_MAX;
	uint64_t t48 = 1987LLU;

	t48 = (((x281^x282)+x283)*x284);

	if (t48 != 18446744073709387781LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = 3571946;
	volatile uint64_t t49 = 466493304LLU;

	t49 = (((x293^x294)+x295)*x296);

	if (t49 != 3571336LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x309 = 0U;
	static int16_t x310 = INT16_MAX;
	int8_t x311 = -1;
	uint16_t x312 = 12323U;
	volatile int32_t t50 = -612901;

	t50 = (((x309^x310)+x311)*x312);

	if (t50 != 403775418) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x315 = -11;
	uint32_t x316 = UINT32_MAX;

	t51 = (((x313^x314)+x315)*x316);

	if (t51 != 18446603293271556106LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x318 = INT8_MIN;
	int64_t x320 = 26LL;
	int64_t t52 = -499851082070LL;

	t52 = (((x317^x318)+x319)*x320);

	if (t52 != -78LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x321 = UINT64_MAX;
	static volatile int16_t x322 = -1;
	uint64_t x323 = UINT64_MAX;
	uint64_t t53 = 4243024345657LLU;

	t53 = (((x321^x322)+x323)*x324);

	if (t53 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x330 = INT16_MIN;
	static uint16_t x331 = UINT16_MAX;

	t54 = (((x329^x330)+x331)*x332);

	if (t54 != 1073807360U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x333 = -8;
	int8_t x334 = INT8_MIN;
	int16_t x336 = 8284;
	int64_t t55 = -30207788429LL;

	t55 = (((x333^x334)+x335)*x336);

	if (t55 != -805442078165392992LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x337 = INT16_MAX;
	static int16_t x338 = 3803;
	static volatile int64_t t56 = 655822217304LL;

	t56 = (((x337^x338)+x339)*x340);

	if (t56 != -115852LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MAX;
	uint64_t x348 = 1039719528LLU;
	volatile uint64_t t57 = 22750222LLU;

	t57 = (((x345^x346)+x347)*x348);

	if (t57 != 18446710136224438168LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x349 = 20;
	int64_t x350 = INT64_MIN;
	uint32_t x352 = UINT32_MAX;
	uint64_t t58 = 53949676248358334LLU;

	t58 = (((x349^x350)+x351)*x352);

	if (t58 != 9223372118459154413LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x353 = 104336627;
	static uint32_t x354 = 0U;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MAX;
	volatile uint32_t t59 = 6U;

	t59 = (((x353^x354)+x355)*x356);

	if (t59 != 3225547533U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x357 = 5LLU;
	uint32_t x358 = 47873309U;
	int16_t x359 = -1;
	volatile uint64_t t60 = 109023324387049350LLU;

	t60 = (((x357^x358)+x359)*x360);

	if (t60 != 18446743683398512257LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x361 = 2979;
	static int32_t x363 = INT32_MAX;
	int32_t x364 = INT32_MIN;
	volatile uint32_t t61 = 109942U;

	t61 = (((x361^x362)+x363)*x364);

	if (t61 != 2147483648U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x365 = UINT32_MAX;
	static int16_t x366 = INT16_MAX;
	volatile uint64_t x367 = 33403LLU;
	int8_t x368 = -4;

	t62 = (((x365^x366)+x367)*x368);

	if (t62 != 18446744056529679892LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x373 = 16U;
	static uint64_t x375 = 1256694484648LLU;
	volatile int64_t x376 = -1LL;

	t63 = (((x373^x374)+x375)*x376);

	if (t63 != 18446742816850009795LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x377 = UINT64_MAX;
	uint8_t x379 = 29U;
	static uint8_t x380 = 32U;

	t64 = (((x377^x378)+x379)*x380);

	if (t64 != 4992LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x381 = 58;
	uint64_t x382 = UINT64_MAX;
	uint8_t x383 = UINT8_MAX;
	uint64_t x384 = 157126422054LLU;
	volatile uint64_t t65 = 189861036LLU;

	t65 = (((x381^x382)+x383)*x384);

	if (t65 != 30796778722584LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x389 = 41U;
	int8_t x390 = INT8_MIN;
	static volatile int8_t x391 = INT8_MIN;
	int32_t t66 = -6934757;

	t66 = (((x389^x390)+x391)*x392);

	if (t66 != -7044905) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x397 = INT32_MAX;
	int64_t x398 = 6682701993LL;
	volatile uint16_t x400 = UINT16_MAX;
	int64_t t67 = 1734995856994039595LL;

	t67 = (((x397^x398)+x399)*x400);

	if (t67 != 547196510859435LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x405 = INT16_MIN;
	static volatile uint64_t x406 = 65LLU;
	uint64_t x407 = UINT64_MAX;

	t68 = (((x405^x406)+x407)*x408);

	if (t68 != 32704LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x409 = INT16_MIN;
	static volatile int64_t x410 = INT64_MAX;
	static volatile int64_t x411 = INT64_MAX;
	static volatile int16_t x412 = -1;

	t69 = (((x409^x410)+x411)*x412);

	if (t69 != -32766LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x414 = 27;
	int16_t x416 = -1718;

	t70 = (((x413^x414)+x415)*x416);

	if (t70 != 3162838LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x425 = UINT16_MAX;
	uint32_t x426 = UINT32_MAX;
	int8_t x427 = INT8_MIN;
	volatile int16_t x428 = INT16_MIN;

	t71 = (((x425^x426)+x427)*x428);

	if (t71 != 2151677952U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x433 = 23U;
	uint64_t x434 = UINT64_MAX;
	int8_t x436 = INT8_MIN;
	uint64_t t72 = 940209113LLU;

	t72 = (((x433^x434)+x435)*x436);

	if (t72 != 3200LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x441 = 114859765719656532LLU;
	volatile int8_t x443 = -1;
	int8_t x444 = -1;
	volatile uint64_t t73 = 6172631875239970645LLU;

	t73 = (((x441^x442)+x443)*x444);

	if (t73 != 18331884307990169396LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x465 = UINT8_MAX;
	volatile int16_t x466 = INT16_MAX;
	int8_t x467 = -1;
	uint64_t x468 = 720397865135590LLU;
	uint64_t t74 = 1095772LLU;

	t74 = (((x465^x466)+x467)*x468);

	if (t74 != 4974110919713614874LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x473 = INT16_MAX;
	uint16_t x474 = 16U;
	static int8_t x476 = INT8_MIN;
	static volatile uint64_t t75 = 142303914815573775LLU;

	t75 = (((x473^x474)+x475)*x476);

	if (t75 != 18446744073705359616LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x477 = UINT16_MAX;
	static int32_t x479 = -1;
	int32_t x480 = -2;
	volatile int32_t t76 = 1;

	t76 = (((x477^x478)+x479)*x480);

	if (t76 != 130820) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x482 = 47LL;
	uint8_t x483 = 23U;
	int64_t x484 = -1LL;
	uint64_t t77 = 221LLU;

	t77 = (((x481^x482)+x483)*x484);

	if (t77 != 25LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x489 = 8U;
	volatile uint8_t x490 = 4U;
	int32_t x491 = -30;
	uint8_t x492 = UINT8_MAX;

	t78 = (((x489^x490)+x491)*x492);

	if (t78 != -4590) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x493 = -30;
	int16_t x494 = INT16_MIN;
	int64_t x496 = -1LL;

	t79 = (((x493^x494)+x495)*x496);

	if (t79 != 2147450910LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x498 = 6543;
	volatile uint32_t x499 = 7710U;

	t80 = (((x497^x498)+x499)*x500);

	if (t80 != 162074U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x501 = INT16_MIN;
	static uint8_t x502 = 1U;
	int16_t x503 = -23;
	volatile int64_t x504 = 3843856415203LL;
	volatile int64_t t81 = 0LL;

	t81 = (((x501^x502)+x503)*x504);

	if (t81 != -126040051854506370LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x509 = -193;
	static int32_t x510 = -1;
	volatile uint64_t t82 = 258379LLU;

	t82 = (((x509^x510)+x511)*x512);

	if (t82 != 108LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x517 = UINT32_MAX;
	int8_t x518 = -1;
	static int8_t x519 = 17;
	static volatile uint32_t t83 = 42U;

	t83 = (((x517^x518)+x519)*x520);

	if (t83 != 4294410240U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x525 = UINT8_MAX;
	volatile int16_t x526 = 4866;
	uint32_t x527 = UINT32_MAX;
	static volatile uint32_t t84 = 393343086U;

	t84 = (((x525^x526)+x527)*x528);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x529 = 623585LL;
	volatile int16_t x530 = INT16_MAX;
	static int8_t x531 = INT8_MIN;
	uint32_t x532 = UINT32_MAX;
	volatile int64_t t85 = -14502075137078LL;

	t85 = (((x529^x530)+x531)*x532);

	if (t85 != 2809930813146210LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x546 = INT16_MAX;
	volatile int16_t x547 = INT16_MIN;
	uint32_t x548 = 25529046U;
	volatile uint32_t t86 = 7814U;

	t86 = (((x545^x546)+x547)*x548);

	if (t86 != 4269438250U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x549 = UINT64_MAX;
	int16_t x550 = -1;
	static int64_t x551 = INT64_MIN;
	uint64_t x552 = 2447942LLU;
	volatile uint64_t t87 = 312791LLU;

	t87 = (((x549^x550)+x551)*x552);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x554 = INT8_MIN;
	volatile uint64_t x555 = 7079810LLU;
	int64_t x556 = INT64_MAX;
	volatile uint64_t t88 = 1995LLU;

	t88 = (((x553^x554)+x555)*x556);

	if (t88 != 9223388549445446305LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x565 = 918704355686246LLU;
	int16_t x566 = INT16_MIN;
	volatile uint8_t x567 = 9U;
	int8_t x568 = INT8_MIN;
	uint64_t t89 = 468597LLU;

	t89 = (((x565^x566)+x567)*x568);

	if (t89 != 117594157528402048LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x569 = UINT8_MAX;
	uint16_t x570 = 286U;
	int8_t x571 = -1;
	int32_t x572 = -415;

	t90 = (((x569^x570)+x571)*x572);

	if (t90 != -199200) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x574 = INT8_MIN;
	uint8_t x575 = 0U;
	uint32_t x576 = UINT32_MAX;
	uint32_t t91 = 15705608U;

	t91 = (((x573^x574)+x575)*x576);

	if (t91 != 94612U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x577 = UINT64_MAX;
	int16_t x578 = INT16_MAX;
	int8_t x579 = INT8_MIN;
	static int16_t x580 = INT16_MIN;
	volatile uint64_t t92 = 774482500178043971LLU;

	t92 = (((x577^x578)+x579)*x580);

	if (t92 != 1077936128LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x582 = -1;
	volatile uint64_t x584 = 22210113284LLU;
	static uint64_t t93 = 448768325690397408LLU;

	t93 = (((x581^x582)+x583)*x584);

	if (t93 != 3157986273069276544LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x585 = -3960763255867LL;
	uint32_t x586 = UINT32_MAX;
	static volatile int8_t x587 = 2;
	uint64_t x588 = 26699962767096LLU;
	volatile uint64_t t94 = 27663112310LLU;

	t94 = (((x585^x586)+x587)*x588);

	if (t94 != 3627293150164419104LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x590 = 11697U;
	int32_t x591 = -1;
	volatile int8_t x592 = INT8_MAX;
	int32_t t95 = 27;

	t95 = (((x589^x590)+x591)*x592);

	if (t95 != -2676144) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x593 = -1;
	uint16_t x595 = 0U;
	static int16_t x596 = 26;
	volatile int64_t t96 = 13LL;

	t96 = (((x593^x594)+x595)*x596);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x598 = INT16_MIN;
	int8_t x599 = INT8_MAX;
	static volatile uint64_t x600 = 620708896672173662LLU;
	volatile uint64_t t97 = 2242LLU;

	t97 = (((x597^x598)+x599)*x600);

	if (t97 != 11802657169917501602LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x602 = 28;
	volatile int16_t x603 = -1;
	int16_t x604 = INT16_MAX;
	static volatile uint64_t t98 = 256191389695227LLU;

	t98 = (((x601^x602)+x603)*x604);

	if (t98 != 18446744073708568606LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x605 = -3;
	uint64_t x606 = 227452671713686LLU;
	volatile uint32_t x607 = 417406U;
	int8_t x608 = INT8_MIN;
	volatile uint64_t t99 = 80163557439LLU;

	t99 = (((x605^x606)+x607)*x608);

	if (t99 != 29113941925923712LLU) { NG(); } else { ; }
	
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

