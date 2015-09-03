#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = UINT32_MAX;
int64_t x22 = -397255374LL;
static int32_t x24 = INT32_MAX;
volatile int64_t t1 = -25313446177426LL;
static uint64_t t2 = 91709752146LLU;
static uint16_t x29 = 21344U;
int64_t x39 = INT64_MIN;
uint8_t x42 = 6U;
static uint32_t x64 = 1603729U;
uint64_t x66 = 442995LLU;
static int8_t x67 = -1;
int16_t x91 = INT16_MIN;
volatile uint64_t t14 = UINT64_MAX;
uint32_t x101 = UINT32_MAX;
int16_t x104 = -1;
volatile int16_t x113 = INT16_MIN;
volatile int32_t x115 = -1;
uint16_t x121 = 430U;
uint32_t x130 = UINT32_MAX;
int8_t x143 = INT8_MAX;
uint32_t x146 = 1073U;
volatile int16_t x147 = INT16_MIN;
int32_t x148 = 0;
static volatile uint64_t t25 = 515536LLU;
int32_t x155 = INT32_MAX;
uint32_t x162 = 21U;
uint16_t x167 = 116U;
static int8_t x183 = 1;
static int64_t x197 = INT64_MIN;
uint16_t x198 = 0U;
uint32_t x215 = 30770316U;
volatile uint32_t t37 = UINT32_MAX;
uint64_t x225 = 290908664979LLU;
int32_t x228 = INT32_MIN;
int64_t x235 = -1LL;
volatile int16_t x238 = INT16_MIN;
uint32_t x241 = 14788U;
uint8_t x242 = UINT8_MAX;
static int8_t x248 = INT8_MIN;
uint32_t x250 = 107969316U;
int32_t x252 = -15488690;
int64_t t45 = 3622944275653173509LL;
int8_t x258 = INT8_MIN;
volatile uint64_t x259 = 22LLU;
static volatile uint64_t t46 = 0LLU;
uint8_t x262 = 1U;
volatile uint16_t x264 = 457U;
uint64_t x282 = 317LLU;
int64_t x283 = INT64_MAX;
uint32_t x287 = 1U;
volatile int32_t x288 = 164696;
static uint64_t x312 = 97554060LLU;
uint64_t t53 = 719652466864748680LLU;
uint32_t x313 = UINT32_MAX;
int8_t x319 = INT8_MAX;
uint16_t x337 = 3715U;
int16_t x342 = -1;
uint64_t x352 = 282616LLU;
static uint64_t x363 = UINT64_MAX;
uint64_t t61 = UINT64_MAX;
static volatile uint32_t t62 = 514601U;
uint8_t x409 = 2U;
static int16_t x410 = INT16_MIN;
int64_t x411 = 1755LL;
volatile int32_t x423 = -7140219;
int16_t x424 = INT16_MIN;
int64_t x428 = -4215028LL;
static volatile uint16_t x430 = 3007U;
static volatile uint32_t t69 = 1176479960U;
volatile int16_t x442 = INT16_MIN;
uint64_t t71 = UINT64_MAX;
int8_t x464 = 0;
int8_t x477 = -60;
uint16_t x493 = UINT16_MAX;
uint64_t x497 = 26084981059LLU;
uint8_t x498 = UINT8_MAX;
int8_t x506 = 1;
uint64_t t79 = UINT64_MAX;
int8_t x523 = INT8_MAX;
int16_t x528 = 64;
static volatile uint32_t x530 = UINT32_MAX;
static volatile int8_t x534 = -1;
int8_t x561 = INT8_MAX;
volatile uint64_t x562 = 707LLU;
uint32_t x569 = 229U;
static uint64_t x585 = 15239037748LLU;
uint64_t t92 = UINT64_MAX;
uint8_t x589 = 2U;
int32_t x611 = INT32_MIN;
uint8_t x612 = 99U;
static int32_t x648 = -1;


void f0(void) {
	int32_t x6 = -362610409;
	volatile int16_t x7 = 71;
	int32_t x8 = -45338412;
	volatile uint32_t t0 = 5988096U;

	t0 = (((x5*x6)*x7)|x8);

	if (t0 != 4291736287U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x21 = -1;
	int8_t x23 = 1;

	t1 = (((x21*x22)*x23)|x24);

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x25 = UINT8_MAX;
	uint8_t x26 = 1U;
	uint64_t x27 = UINT64_MAX;
	int64_t x28 = INT64_MIN;

	t2 = (((x25*x26)*x27)|x28);

	if (t2 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x30 = -1LL;
	static uint64_t x31 = 8471758695374189774LLU;
	int32_t x32 = INT32_MAX;
	volatile uint64_t t3 = 7258730749786091LLU;

	t3 = (((x29*x30)*x31)|x32);

	if (t3 != 12214560510032478207LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MAX;
	int8_t x35 = -1;
	int16_t x36 = INT16_MAX;
	static int32_t t4 = 4;

	t4 = (((x33*x34)*x35)|x36);

	if (t4 != -2147385345) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = -62;
	uint8_t x38 = 0U;
	uint16_t x40 = 0U;
	int64_t t5 = 32895990773695LL;

	t5 = (((x37*x38)*x39)|x40);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	uint64_t x44 = 0LLU;
	static uint64_t t6 = 1297369924LLU;

	t6 = (((x41*x42)*x43)|x44);

	if (t6 != 768LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = -12;
	static volatile uint32_t x46 = UINT32_MAX;
	volatile int64_t x47 = -1LL;
	static int16_t x48 = INT16_MAX;
	volatile int64_t t7 = 2146870LL;

	t7 = (((x45*x46)*x47)|x48);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = UINT64_MAX;
	uint64_t x50 = 23223010LLU;
	static int64_t x51 = -5033389993734088LL;
	static int16_t x52 = INT16_MAX;
	static uint64_t t8 = 2053521LLU;

	t8 = (((x49*x50)*x51)|x52);

	if (t8 != 11895707362943926271LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x53 = 1;
	int8_t x54 = -1;
	int32_t x55 = -54;
	static int64_t x56 = INT64_MIN;
	int64_t t9 = 3325783209302167LL;

	t9 = (((x53*x54)*x55)|x56);

	if (t9 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = 0;
	static int32_t x62 = INT32_MIN;
	static int16_t x63 = INT16_MAX;
	volatile uint32_t t10 = 3816329U;

	t10 = (((x61*x62)*x63)|x64);

	if (t10 != 1603729U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = UINT8_MAX;
	volatile int16_t x68 = 0;
	static volatile uint64_t t11 = 1163358532840874188LLU;

	t11 = (((x65*x66)*x67)|x68);

	if (t11 != 18446744073596587891LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x74 = 0;
	uint32_t x75 = 20U;
	int32_t x76 = -11;
	volatile uint64_t t12 = 163812LLU;

	t12 = (((x73*x74)*x75)|x76);

	if (t12 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = -1LL;
	uint32_t x82 = 3U;
	uint8_t x83 = 85U;
	volatile int32_t x84 = INT32_MIN;
	volatile int64_t t13 = -3377727027113449LL;

	t13 = (((x81*x82)*x83)|x84);

	if (t13 != -255LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x89 = UINT64_MAX;
	int64_t x90 = INT64_MIN;
	uint64_t x92 = UINT64_MAX;

	t14 = (((x89*x90)*x91)|x92);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x97 = 172009088LLU;
	volatile int32_t x98 = INT32_MIN;
	uint32_t x99 = 778489U;
	static volatile int32_t x100 = -1;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (((x97*x98)*x99)|x100);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MIN;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (((x101*x102)*x103)|x104);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x105 = UINT32_MAX;
	uint32_t x106 = UINT32_MAX;
	uint32_t x107 = 3439U;
	int32_t x108 = 15;
	uint32_t t17 = 525502U;

	t17 = (((x105*x106)*x107)|x108);

	if (t17 != 3439U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x114 = INT8_MIN;
	int64_t x116 = INT64_MIN;
	int64_t t18 = 191707LL;

	t18 = (((x113*x114)*x115)|x116);

	if (t18 != -4194304LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x122 = -1;
	uint32_t x123 = 240U;
	uint64_t x124 = 1764470412828821099LLU;
	uint64_t t19 = 1009091LLU;

	t19 = (((x121*x122)*x123)|x124);

	if (t19 != 1764470413141700331LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x125 = -1LL;
	int16_t x126 = 193;
	static int16_t x127 = INT16_MAX;
	int8_t x128 = INT8_MAX;
	volatile int64_t t20 = 97841844LL;

	t20 = (((x125*x126)*x127)|x128);

	if (t20 != -6323969LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x129 = 1640;
	int16_t x131 = INT16_MIN;
	uint64_t x132 = UINT64_MAX;
	uint64_t t21 = UINT64_MAX;

	t21 = (((x129*x130)*x131)|x132);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x133 = UINT8_MAX;
	int64_t x134 = -1LL;
	volatile int16_t x135 = 2159;
	uint32_t x136 = UINT32_MAX;
	volatile int64_t t22 = 12LL;

	t22 = (((x133*x134)*x135)|x136);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x137 = 1045651929398505LLU;
	volatile int8_t x138 = INT8_MAX;
	int8_t x139 = -1;
	int16_t x140 = INT16_MIN;
	volatile uint64_t t23 = 50991LLU;

	t23 = (((x137*x138)*x139)|x140);

	if (t23 != 18446744073709521001LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x141 = -1;
	static uint64_t x142 = UINT64_MAX;
	static int64_t x144 = -1LL;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (((x141*x142)*x143)|x144);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x145 = UINT64_MAX;

	t25 = (((x145*x146)*x147)|x148);

	if (t25 != 35160064LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x153 = 886U;
	static int16_t x154 = INT16_MIN;
	int8_t x156 = INT8_MAX;
	static volatile uint32_t t26 = 4758180U;

	t26 = (((x153*x154)*x155)|x156);

	if (t26 != 29032575U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x157 = UINT64_MAX;
	uint32_t x158 = UINT32_MAX;
	static uint32_t x159 = 850835066U;
	uint32_t x160 = 1332U;
	uint64_t t27 = 3957320906310802LLU;

	t27 = (((x157*x158)*x159)|x160);

	if (t27 != 14792435291800385406LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x161 = 4U;
	static uint64_t x163 = UINT64_MAX;
	uint16_t x164 = UINT16_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = (((x161*x162)*x163)|x164);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = INT32_MAX;
	volatile int64_t x166 = -1LL;
	uint32_t x168 = 189954967U;
	volatile int64_t t29 = 42149LL;

	t29 = (((x165*x166)*x167)|x168);

	if (t29 != -248918148105LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x177 = -1;
	uint64_t x178 = UINT64_MAX;
	static volatile uint16_t x179 = UINT16_MAX;
	uint8_t x180 = 3U;
	volatile uint64_t t30 = 1234863251LLU;

	t30 = (((x177*x178)*x179)|x180);

	if (t30 != 65535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x181 = -8;
	static uint16_t x182 = 2161U;
	int64_t x184 = INT64_MAX;
	static volatile int64_t t31 = 2364710519795014816LL;

	t31 = (((x181*x182)*x183)|x184);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x185 = 769341009LL;
	uint32_t x186 = 3796307U;
	uint8_t x187 = UINT8_MAX;
	uint64_t x188 = 77302422LLU;
	uint64_t t32 = 1797066185LLU;

	t32 = (((x185*x186)*x187)|x188);

	if (t32 != 744766937761819583LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x189 = 1;
	volatile int32_t x190 = INT32_MAX;
	static uint32_t x191 = 1868675U;
	int16_t x192 = -1;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (((x189*x190)*x191)|x192);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x199 = INT8_MAX;
	static int16_t x200 = 3;
	int64_t t34 = -213438928401LL;

	t34 = (((x197*x198)*x199)|x200);

	if (t34 != 3LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x201 = INT8_MIN;
	static volatile uint64_t x202 = 1040366971602751827LLU;
	uint8_t x203 = 17U;
	int32_t x204 = -1;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (((x201*x202)*x203)|x204);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x209 = 120;
	int32_t x210 = -712;
	int8_t x211 = 0;
	static uint64_t x212 = 596985480178179LLU;
	uint64_t t36 = 93857931230129LLU;

	t36 = (((x209*x210)*x211)|x212);

	if (t36 != 596985480178179LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x213 = 116U;
	static volatile int16_t x214 = INT16_MAX;
	int16_t x216 = -1;

	t37 = (((x213*x214)*x215)|x216);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x217 = UINT32_MAX;
	volatile int64_t x218 = 1701LL;
	static volatile int8_t x219 = 0;
	int64_t x220 = INT64_MIN;
	volatile int64_t t38 = INT64_MIN;

	t38 = (((x217*x218)*x219)|x220);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x226 = INT32_MIN;
	volatile int16_t x227 = -943;
	volatile uint64_t t39 = 150318836078316LLU;

	t39 = (((x225*x226)*x227)|x228);

	if (t39 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x229 = INT8_MIN;
	int8_t x230 = -1;
	int8_t x231 = -1;
	int32_t x232 = -1;
	int32_t t40 = 1;

	t40 = (((x229*x230)*x231)|x232);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x233 = INT16_MAX;
	int64_t x234 = -151LL;
	volatile int32_t x236 = INT32_MIN;
	volatile int64_t t41 = 97260394696LL;

	t41 = (((x233*x234)*x235)|x236);

	if (t41 != -2142535831LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x237 = UINT8_MAX;
	static uint32_t x239 = 4U;
	int32_t x240 = INT32_MIN;
	uint32_t t42 = 600657272U;

	t42 = (((x237*x238)*x239)|x240);

	if (t42 != 4261543936U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x243 = INT32_MAX;
	uint32_t x244 = 228U;
	uint32_t t43 = 60U;

	t43 = (((x241*x242)*x243)|x244);

	if (t43 != 4291196388U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x245 = UINT8_MAX;
	int16_t x246 = INT16_MIN;
	static int8_t x247 = INT8_MIN;
	int32_t t44 = 1936357;

	t44 = (((x245*x246)*x247)|x248);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x249 = -1LL;
	volatile int16_t x251 = -15;

	t45 = (((x249*x250)*x251)|x252);

	if (t45 != -6570146LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x257 = -1LL;
	int8_t x260 = INT8_MIN;

	t46 = (((x257*x258)*x259)|x260);

	if (t46 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x261 = 89U;
	uint64_t x263 = UINT64_MAX;
	volatile uint64_t t47 = 236842LLU;

	t47 = (((x261*x262)*x263)|x264);

	if (t47 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x281 = INT16_MAX;
	static uint64_t x284 = 8798446371666565071LLU;
	volatile uint64_t t48 = 30468021996827169LLU;

	t48 = (((x281*x282)*x283)|x284);

	if (t48 != 9223372036852914175LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x285 = -1;
	static uint16_t x286 = 839U;
	uint32_t t49 = 3420809U;

	t49 = (((x285*x286)*x287)|x288);

	if (t49 != 4294967289U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x289 = -103LL;
	int32_t x290 = INT32_MIN;
	int64_t x291 = -1LL;
	volatile uint32_t x292 = UINT32_MAX;
	int64_t t50 = 511395640LL;

	t50 = (((x289*x290)*x291)|x292);

	if (t50 != -219043332097LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x297 = -1433;
	int64_t x298 = -1LL;
	int8_t x299 = INT8_MIN;
	volatile int64_t x300 = INT64_MIN;
	int64_t t51 = 3439633LL;

	t51 = (((x297*x298)*x299)|x300);

	if (t51 != -183424LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x305 = 46U;
	int16_t x306 = INT16_MIN;
	int8_t x307 = 1;
	uint16_t x308 = UINT16_MAX;
	volatile uint32_t t52 = 424U;

	t52 = (((x305*x306)*x307)|x308);

	if (t52 != 4293525503U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x309 = 14348693U;
	int16_t x310 = -2568;
	static int64_t x311 = 5618445LL;

	t53 = (((x309*x310)*x311)|x312);

	if (t53 != 10154002464636924LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	int16_t x316 = INT16_MIN;
	static uint32_t t54 = 103202482U;

	t54 = (((x313*x314)*x315)|x316);

	if (t54 != 4294967168U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x317 = 17993109327694019LLU;
	static volatile uint32_t x318 = 37721589U;
	int8_t x320 = 2;
	volatile uint64_t t55 = 30252354837197LLU;

	t55 = (((x317*x318)*x319)|x320);

	if (t55 != 5707759841517579747LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x321 = UINT8_MAX;
	static uint64_t x322 = 128671LLU;
	volatile int32_t x323 = -450;
	uint32_t x324 = 52U;
	static volatile uint64_t t56 = 571736113LLU;

	t56 = (((x321*x322)*x323)|x324);

	if (t56 != 18446744058944554366LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x338 = INT8_MIN;
	volatile int32_t x339 = -1;
	volatile uint32_t x340 = 1871U;
	volatile uint32_t t57 = 5259973U;

	t57 = (((x337*x338)*x339)|x340);

	if (t57 != 477135U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x341 = 32;
	int16_t x343 = INT16_MIN;
	uint32_t x344 = 1U;
	uint32_t t58 = 227U;

	t58 = (((x341*x342)*x343)|x344);

	if (t58 != 1048577U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x349 = 34470468909LLU;
	int64_t x350 = INT64_MIN;
	static uint64_t x351 = 11563640LLU;
	uint64_t t59 = 31223LLU;

	t59 = (((x349*x350)*x351)|x352);

	if (t59 != 282616LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x353 = 276683U;
	static int32_t x354 = -1;
	volatile int32_t x355 = -1;
	uint16_t x356 = UINT16_MAX;
	uint32_t t60 = 190287U;

	t60 = (((x353*x354)*x355)|x356);

	if (t60 != 327679U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x361 = 8;
	uint16_t x362 = UINT16_MAX;
	int64_t x364 = INT64_MAX;

	t61 = (((x361*x362)*x363)|x364);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x385 = -11;
	static volatile int8_t x386 = INT8_MIN;
	uint32_t x387 = 1642999185U;
	uint32_t x388 = 9786U;

	t62 = (((x385*x386)*x387)|x388);

	if (t62 != 2650455994U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x401 = 3422;
	volatile int32_t x402 = -210682;
	static int32_t x403 = -1;
	int64_t x404 = 204351452151LL;
	int64_t t63 = -262375436LL;

	t63 = (((x401*x402)*x403)|x404);

	if (t63 != 205067645951LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x412 = UINT16_MAX;
	int64_t t64 = -219LL;

	t64 = (((x409*x410)*x411)|x412);

	if (t64 != -114950145LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x413 = 17916456005414LLU;
	uint16_t x414 = 1U;
	int16_t x415 = -2;
	int16_t x416 = -8;
	volatile uint64_t t65 = 9974600023LLU;

	t65 = (((x413*x414)*x415)|x416);

	if (t65 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = 4;
	int8_t x419 = INT8_MIN;
	uint64_t x420 = 8011427322873268707LLU;
	volatile uint64_t t66 = 6233046452398557778LLU;

	t66 = (((x417*x418)*x419)|x420);

	if (t66 != 8011427322873334243LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x421 = UINT32_MAX;
	uint16_t x422 = 6U;
	volatile uint32_t t67 = 5U;

	t67 = (((x421*x422)*x423)|x424);

	if (t67 != 4294948066U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x425 = UINT16_MAX;
	uint64_t x426 = 68109988260271553LLU;
	int8_t x427 = INT8_MIN;
	volatile uint64_t t68 = 7661217LLU;

	t68 = (((x425*x426)*x427)|x428);

	if (t68 != 18446744073709547404LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x429 = UINT32_MAX;
	int8_t x431 = INT8_MIN;
	uint8_t x432 = 1U;

	t69 = (((x429*x430)*x431)|x432);

	if (t69 != 384897U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x441 = 2872942176LLU;
	static int32_t x443 = 1;
	int64_t x444 = -532485619632948889LL;
	uint64_t t70 = 349LLU;

	t70 = (((x441*x442)*x443)|x444);

	if (t70 != 18446668651698731367LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x445 = INT8_MAX;
	int8_t x446 = -1;
	uint64_t x447 = 669LLU;
	int32_t x448 = -1;

	t71 = (((x445*x446)*x447)|x448);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x453 = UINT32_MAX;
	static int16_t x454 = -1;
	int8_t x455 = INT8_MAX;
	static uint8_t x456 = 21U;
	volatile uint32_t t72 = 11U;

	t72 = (((x453*x454)*x455)|x456);

	if (t72 != 127U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x461 = 5;
	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	volatile int32_t t73 = -46296935;

	t73 = (((x461*x462)*x463)|x464);

	if (t73 != 20971520) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x473 = INT8_MAX;
	volatile int64_t x474 = -1LL;
	volatile int16_t x475 = -14712;
	uint16_t x476 = 3U;
	volatile int64_t t74 = -895738348280LL;

	t74 = (((x473*x474)*x475)|x476);

	if (t74 != 1868427LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x478 = 5U;
	static int64_t x479 = -2LL;
	static volatile int8_t x480 = -1;
	volatile int64_t t75 = 259206020LL;

	t75 = (((x477*x478)*x479)|x480);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x485 = -1;
	int64_t x486 = -1LL;
	int16_t x487 = 12;
	static int8_t x488 = -1;
	volatile int64_t t76 = -59283952254792846LL;

	t76 = (((x485*x486)*x487)|x488);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x494 = -1;
	static int16_t x495 = -1;
	int16_t x496 = INT16_MIN;
	static int32_t t77 = 1;

	t77 = (((x493*x494)*x495)|x496);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x499 = 241238980358178797LLU;
	uint32_t x500 = 935718U;
	uint64_t t78 = 1LLU;

	t78 = (((x497*x498)*x499)|x500);

	if (t78 != 5795668015514087423LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x505 = -1LL;
	volatile int8_t x507 = INT8_MIN;
	volatile uint64_t x508 = UINT64_MAX;

	t79 = (((x505*x506)*x507)|x508);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x509 = UINT8_MAX;
	int64_t x510 = 14LL;
	volatile int32_t x511 = -45624410;
	uint8_t x512 = UINT8_MAX;
	int64_t t80 = -81859LL;

	t80 = (((x509*x510)*x511)|x512);

	if (t80 != -162879143681LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x517 = 107040801281LLU;
	int64_t x518 = 14654739028330LL;
	static volatile int8_t x519 = -1;
	int32_t x520 = 675090;
	uint64_t t81 = 1LLU;

	t81 = (((x517*x518)*x519)|x520);

	if (t81 != 767639652581498774LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x521 = -1;
	int8_t x522 = 38;
	int64_t x524 = -1LL;
	int64_t t82 = -2128945008822LL;

	t82 = (((x521*x522)*x523)|x524);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x525 = INT16_MAX;
	uint16_t x526 = 110U;
	int8_t x527 = 24;
	int32_t t83 = 112;

	t83 = (((x525*x526)*x527)|x528);

	if (t83 != 86504944) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x529 = UINT64_MAX;
	int64_t x531 = -1LL;
	static int8_t x532 = INT8_MIN;
	static uint64_t t84 = UINT64_MAX;

	t84 = (((x529*x530)*x531)|x532);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x533 = INT16_MIN;
	uint32_t x535 = UINT32_MAX;
	int8_t x536 = -1;
	static volatile uint32_t t85 = UINT32_MAX;

	t85 = (((x533*x534)*x535)|x536);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x549 = 3U;
	static int8_t x550 = INT8_MAX;
	int8_t x551 = -1;
	static volatile int16_t x552 = INT16_MIN;
	static int32_t t86 = -18;

	t86 = (((x549*x550)*x551)|x552);

	if (t86 != -381) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x553 = -599152275027083LL;
	volatile int64_t x554 = 1LL;
	int64_t x555 = -1LL;
	int8_t x556 = INT8_MIN;
	volatile int64_t t87 = -6490960LL;

	t87 = (((x553*x554)*x555)|x556);

	if (t87 != -117LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x557 = 0U;
	int64_t x558 = -167067579497686LL;
	int16_t x559 = INT16_MIN;
	int64_t x560 = INT64_MIN;
	int64_t t88 = INT64_MIN;

	t88 = (((x557*x558)*x559)|x560);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x563 = -13;
	int32_t x564 = INT32_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (((x561*x562)*x563)|x564);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x565 = -1;
	static uint32_t x566 = 14U;
	int32_t x567 = INT32_MAX;
	int8_t x568 = INT8_MAX;
	static volatile uint32_t t90 = 7U;

	t90 = (((x565*x566)*x567)|x568);

	if (t90 != 127U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x570 = 10;
	int16_t x571 = INT16_MIN;
	uint16_t x572 = 1086U;
	volatile uint32_t t91 = 249U;

	t91 = (((x569*x570)*x571)|x572);

	if (t91 != 4219929662U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x586 = -55;
	static uint32_t x587 = 1859112586U;
	int16_t x588 = -1;

	t92 = (((x585*x586)*x587)|x588);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x590 = 8121U;
	int8_t x591 = 0;
	uint8_t x592 = 16U;
	int32_t t93 = -50457561;

	t93 = (((x589*x590)*x591)|x592);

	if (t93 != 16) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x597 = INT8_MAX;
	uint64_t x598 = UINT64_MAX;
	int64_t x599 = 230401872LL;
	int64_t x600 = 437973024LL;
	volatile uint64_t t94 = 804928469429311983LLU;

	t94 = (((x597*x598)*x599)|x600);

	if (t94 != 18446744044718522224LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x609 = INT8_MAX;
	uint8_t x610 = 0U;
	volatile int32_t t95 = -96247614;

	t95 = (((x609*x610)*x611)|x612);

	if (t95 != 99) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x617 = 445;
	int64_t x618 = -252748LL;
	int16_t x619 = INT16_MAX;
	static volatile int16_t x620 = 3;
	int64_t t96 = 6705773625LL;

	t96 = (((x617*x618)*x619)|x620);

	if (t96 != -3685398203617LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x625 = 0U;
	int8_t x626 = INT8_MIN;
	static int8_t x627 = -1;
	uint8_t x628 = 6U;
	volatile int32_t t97 = -2750567;

	t97 = (((x625*x626)*x627)|x628);

	if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x629 = 1709U;
	uint16_t x630 = 749U;
	static volatile uint32_t x631 = 23649U;
	int64_t x632 = 2355916970637562LL;
	static int64_t t98 = 3993748053687878LL;

	t98 = (((x629*x630)*x631)|x632);

	if (t98 != 2355917043006459LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x645 = -1;
	volatile uint16_t x646 = 1U;
	static int64_t x647 = -6598333252038580LL;
	int64_t t99 = -617892LL;

	t99 = (((x645*x646)*x647)|x648);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

