#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 4U;
volatile uint8_t x22 = 1U;
uint32_t x23 = UINT32_MAX;
uint8_t x32 = UINT8_MAX;
int8_t x59 = 50;
volatile int8_t x95 = 0;
static int32_t t17 = -59836339;
volatile uint32_t x97 = 3614U;
uint8_t x101 = 4U;
uint64_t x103 = 645LLU;
volatile int64_t x122 = -1LL;
int16_t x130 = INT16_MIN;
uint32_t x131 = UINT32_MAX;
volatile int32_t t24 = -4995082;
int8_t x153 = -3;
int16_t x155 = INT16_MIN;
int8_t x162 = INT8_MIN;
volatile uint64_t x163 = UINT64_MAX;
int16_t x174 = INT16_MIN;
int8_t x176 = INT8_MAX;
uint16_t x190 = UINT16_MAX;
int64_t x210 = -3LL;
int32_t t35 = 6447740;
int8_t x224 = 0;
static volatile int32_t t37 = -187;
int32_t t38 = 1;
int32_t x235 = 0;
int16_t x238 = INT16_MIN;
int8_t x239 = -3;
int8_t x251 = 1;
int8_t x254 = 5;
uint32_t x255 = UINT32_MAX;
volatile uint32_t x259 = UINT32_MAX;
int32_t t45 = -86340;
volatile int32_t t47 = -484470;
volatile uint32_t x281 = 1429594083U;
static int32_t t49 = 1047699053;
int16_t x286 = INT16_MIN;
int64_t x288 = -1LL;
int8_t x289 = -1;
static int32_t t51 = 0;
int32_t x300 = INT32_MAX;
volatile int32_t x303 = INT32_MIN;
int8_t x304 = 22;
uint16_t x306 = 5U;
int16_t x307 = INT16_MIN;
volatile int32_t x321 = -3522;
static uint32_t x333 = 5790U;
uint8_t x344 = 6U;
int64_t x360 = INT64_MAX;
int8_t x370 = INT8_MAX;
volatile uint8_t x372 = 20U;
volatile int32_t t66 = 153802;
int16_t x373 = -1;
int16_t x377 = INT16_MIN;
int32_t t68 = -821239588;
uint16_t x386 = 118U;
int8_t x388 = INT8_MIN;
int32_t x396 = INT32_MIN;
static int16_t x400 = INT16_MIN;
int8_t x401 = -1;
int64_t x427 = -1LL;
int8_t x431 = INT8_MIN;
static uint64_t x445 = 134682690LLU;
int64_t x461 = INT64_MAX;
uint32_t x462 = 238773U;
volatile int32_t x463 = -1;
uint16_t x470 = 12U;
volatile int32_t t79 = 126;
int8_t x474 = -2;
int16_t x494 = INT16_MIN;
volatile int16_t x495 = 6;
volatile int32_t t83 = -5;
static int16_t x501 = INT16_MIN;
int8_t x502 = -1;
int8_t x506 = 0;
uint8_t x514 = 1U;
int64_t x515 = -804726224314462639LL;
static uint32_t x521 = UINT32_MAX;
int8_t x524 = -2;
int64_t x533 = -1LL;
int32_t x537 = -97;
static int16_t x538 = INT16_MIN;
static uint64_t x539 = 500LLU;
uint64_t x545 = 621LLU;
int64_t x551 = -1LL;
volatile int32_t t94 = 62450;
volatile uint64_t x554 = UINT64_MAX;
volatile int32_t t96 = 0;
uint64_t x579 = 55LLU;
static int8_t x580 = INT8_MIN;
static int32_t x582 = 207;
volatile int32_t t98 = -44;
uint8_t x588 = UINT8_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static volatile int16_t x3 = -169;
	volatile int16_t x4 = -1;
	volatile int32_t t0 = 1;

	t0 = ((x1-(x2*x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int8_t x6 = 0;
	int8_t x7 = 1;
	static int64_t x8 = INT64_MAX;
	volatile int32_t t1 = 3063;

	t1 = ((x5-(x6*x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static uint64_t x10 = 5LLU;
	volatile uint16_t x11 = 14U;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = 3193;

	t2 = ((x9-(x10*x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -18;
	int16_t x14 = -11;
	uint32_t x15 = 564612974U;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = 1;

	t3 = ((x13-(x14*x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	volatile uint64_t x24 = 52078680877LLU;
	volatile int32_t t4 = 8;

	t4 = ((x21-(x22*x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = 3013349325573LL;
	int16_t x26 = INT16_MIN;
	static volatile int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t5 = -30;

	t5 = ((x25-(x26*x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 188742;
	int16_t x30 = -1;
	uint32_t x31 = 14324451U;
	int32_t t6 = 2820079;

	t6 = ((x29-(x30*x31))<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	static int8_t x43 = INT8_MIN;
	int64_t x44 = 324762133361402155LL;
	int32_t t7 = 25202;

	t7 = ((x41-(x42*x43))<x44);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = -1;
	static int64_t x46 = -5106543006LL;
	static uint8_t x47 = 45U;
	int8_t x48 = INT8_MAX;
	volatile int32_t t8 = -32028644;

	t8 = ((x45-(x46*x47))<x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = -1;
	volatile uint8_t x50 = 0U;
	static uint16_t x51 = 12U;
	int16_t x52 = INT16_MIN;
	volatile int32_t t9 = 9621;

	t9 = ((x49-(x50*x51))<x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x57 = 3964LLU;
	uint16_t x58 = 9779U;
	static int16_t x60 = -1;
	int32_t t10 = -5040385;

	t10 = ((x57-(x58*x59))<x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = 2870U;
	int32_t x62 = -1;
	static int32_t x63 = -213;
	uint64_t x64 = UINT64_MAX;
	static int32_t t11 = -11595;

	t11 = ((x61-(x62*x63))<x64);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = INT32_MIN;
	uint16_t x70 = 32050U;
	int32_t x71 = -1;
	uint64_t x72 = 168030LLU;
	volatile int32_t t12 = 4086;

	t12 = ((x69-(x70*x71))<x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MAX;
	int16_t x74 = INT16_MAX;
	static uint64_t x75 = UINT64_MAX;
	int32_t x76 = -30972;
	int32_t t13 = -41;

	t13 = ((x73-(x74*x75))<x76);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = UINT32_MAX;
	uint32_t x78 = 38255U;
	static int16_t x79 = INT16_MIN;
	static int8_t x80 = -1;
	int32_t t14 = -1123;

	t14 = ((x77-(x78*x79))<x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = -2;
	uint8_t x87 = 0U;
	int32_t x88 = 11442;
	int32_t t15 = -6346241;

	t15 = ((x85-(x86*x87))<x88);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x89 = -1;
	uint32_t x90 = 25319U;
	volatile int16_t x91 = INT16_MIN;
	int8_t x92 = -54;
	int32_t t16 = 5;

	t16 = ((x89-(x90*x91))<x92);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = 152126899103402LLU;
	static uint8_t x94 = UINT8_MAX;
	uint16_t x96 = 13342U;

	t17 = ((x93-(x94*x95))<x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x98 = INT16_MIN;
	volatile uint64_t x99 = 2729174375585426629LLU;
	volatile int8_t x100 = INT8_MIN;
	int32_t t18 = 1890;

	t18 = ((x97-(x98*x99))<x100);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x102 = UINT32_MAX;
	static int16_t x104 = INT16_MAX;
	int32_t t19 = -92;

	t19 = ((x101-(x102*x103))<x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = 33743LLU;
	uint8_t x106 = 26U;
	uint32_t x107 = 83895U;
	uint8_t x108 = 0U;
	int32_t t20 = 27;

	t20 = ((x105-(x106*x107))<x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x117 = UINT32_MAX;
	volatile int16_t x118 = 0;
	volatile uint32_t x119 = 1860489664U;
	int64_t x120 = 54219950LL;
	volatile int32_t t21 = -1524400;

	t21 = ((x117-(x118*x119))<x120);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 9762U;
	int32_t x123 = -130902838;
	int8_t x124 = INT8_MIN;
	volatile int32_t t22 = 59;

	t22 = ((x121-(x122*x123))<x124);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x129 = 51U;
	static int64_t x132 = 216573320308LL;
	int32_t t23 = -181;

	t23 = ((x129-(x130*x131))<x132);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x145 = INT64_MIN;
	volatile int8_t x146 = INT8_MIN;
	uint64_t x147 = UINT64_MAX;
	static uint16_t x148 = 2U;

	t24 = ((x145-(x146*x147))<x148);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x154 = 10926575U;
	int32_t x156 = 477;
	int32_t t25 = -50203478;

	t25 = ((x153-(x154*x155))<x156);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x157 = 0;
	int32_t x158 = INT32_MIN;
	static uint32_t x159 = 6501856U;
	uint32_t x160 = UINT32_MAX;
	int32_t t26 = 594856;

	t26 = ((x157-(x158*x159))<x160);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x161 = 145392256728LL;
	static int64_t x164 = INT64_MIN;
	volatile int32_t t27 = 188;

	t27 = ((x161-(x162*x163))<x164);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x165 = INT32_MIN;
	uint32_t x166 = 36809851U;
	int16_t x167 = INT16_MIN;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t28 = 728378460;

	t28 = ((x165-(x166*x167))<x168);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x169 = UINT16_MAX;
	int16_t x170 = -1;
	uint64_t x171 = 16526358255LLU;
	uint16_t x172 = UINT16_MAX;
	static volatile int32_t t29 = -19;

	t29 = ((x169-(x170*x171))<x172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x173 = INT64_MAX;
	int32_t x175 = -1;
	static volatile int32_t t30 = 13;

	t30 = ((x173-(x174*x175))<x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x177 = 2237254U;
	volatile int8_t x178 = INT8_MIN;
	int32_t x179 = 3;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t31 = 35307;

	t31 = ((x177-(x178*x179))<x180);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x185 = INT64_MIN;
	static int64_t x186 = -1LL;
	uint16_t x187 = UINT16_MAX;
	uint8_t x188 = 27U;
	volatile int32_t t32 = -15459357;

	t32 = ((x185-(x186*x187))<x188);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x189 = 933167LLU;
	uint64_t x191 = 3422531LLU;
	int64_t x192 = -1LL;
	volatile int32_t t33 = -1;

	t33 = ((x189-(x190*x191))<x192);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x209 = 3787365U;
	int16_t x211 = INT16_MIN;
	volatile int8_t x212 = 0;
	int32_t t34 = 117;

	t34 = ((x209-(x210*x211))<x212);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MIN;
	int16_t x215 = 2;
	uint64_t x216 = UINT64_MAX;

	t35 = ((x213-(x214*x215))<x216);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x217 = INT8_MAX;
	volatile uint16_t x218 = 1468U;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = -1;
	volatile int32_t t36 = -92748980;

	t36 = ((x217-(x218*x219))<x220);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = 231110794391LL;
	uint64_t x223 = UINT64_MAX;

	t37 = ((x221-(x222*x223))<x224);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x229 = INT16_MIN;
	volatile int32_t x230 = -1;
	int64_t x231 = INT64_MAX;
	uint64_t x232 = UINT64_MAX;

	t38 = ((x229-(x230*x231))<x232);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x233 = 1LLU;
	int64_t x234 = INT64_MAX;
	static uint32_t x236 = 1U;
	int32_t t39 = -353184132;

	t39 = ((x233-(x234*x235))<x236);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x237 = -1;
	uint32_t x240 = 7U;
	static volatile int32_t t40 = 0;

	t40 = ((x237-(x238*x239))<x240);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x242 = -1;
	int8_t x243 = INT8_MAX;
	volatile int32_t x244 = INT32_MAX;
	static int32_t t41 = 3;

	t41 = ((x241-(x242*x243))<x244);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x245 = 249814U;
	static int32_t x246 = INT32_MIN;
	uint32_t x247 = UINT32_MAX;
	int32_t x248 = 80;
	int32_t t42 = -86145040;

	t42 = ((x245-(x246*x247))<x248);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int64_t x250 = INT64_MIN;
	int8_t x252 = -1;
	static volatile int32_t t43 = -160;

	t43 = ((x249-(x250*x251))<x252);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = INT8_MIN;
	int16_t x256 = -1;
	volatile int32_t t44 = -2223;

	t44 = ((x253-(x254*x255))<x256);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x257 = UINT16_MAX;
	int64_t x258 = -3422033LL;
	int16_t x260 = 4358;

	t45 = ((x257-(x258*x259))<x260);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x261 = -1LL;
	volatile uint64_t x262 = 923LLU;
	int64_t x263 = -1LL;
	static int8_t x264 = INT8_MAX;
	volatile int32_t t46 = -2;

	t46 = ((x261-(x262*x263))<x264);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x269 = UINT16_MAX;
	int8_t x270 = -1;
	volatile int16_t x271 = -1;
	uint16_t x272 = 26755U;

	t47 = ((x269-(x270*x271))<x272);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x277 = 24822LLU;
	static volatile int16_t x278 = INT16_MAX;
	uint16_t x279 = 85U;
	static int32_t x280 = -220233519;
	static volatile int32_t t48 = -106766;

	t48 = ((x277-(x278*x279))<x280);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x282 = 4794LL;
	volatile uint8_t x283 = 1U;
	int16_t x284 = -1;

	t49 = ((x281-(x282*x283))<x284);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x287 = 657927LLU;
	volatile int32_t t50 = 60;

	t50 = ((x285-(x286*x287))<x288);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x290 = -1LL;
	uint32_t x291 = 387U;
	volatile int32_t x292 = -75526279;

	t51 = ((x289-(x290*x291))<x292);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x293 = INT8_MAX;
	static uint8_t x294 = 2U;
	int8_t x295 = 0;
	int32_t x296 = INT32_MIN;
	volatile int32_t t52 = -124999;

	t52 = ((x293-(x294*x295))<x296);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x297 = INT16_MAX;
	uint64_t x298 = UINT64_MAX;
	static uint8_t x299 = UINT8_MAX;
	volatile int32_t t53 = 0;

	t53 = ((x297-(x298*x299))<x300);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x301 = 351652510306LLU;
	uint64_t x302 = 4095576628LLU;
	static volatile int32_t t54 = 14860663;

	t54 = ((x301-(x302*x303))<x304);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x305 = 1U;
	volatile uint8_t x308 = UINT8_MAX;
	int32_t t55 = -3784255;

	t55 = ((x305-(x306*x307))<x308);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x309 = 26U;
	int16_t x310 = 453;
	uint8_t x311 = 2U;
	int32_t x312 = INT32_MIN;
	volatile int32_t t56 = 1;

	t56 = ((x309-(x310*x311))<x312);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x313 = 1014377763563797413LL;
	int16_t x314 = 27;
	int64_t x315 = -145652LL;
	int16_t x316 = INT16_MIN;
	int32_t t57 = 1;

	t57 = ((x313-(x314*x315))<x316);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x322 = 191U;
	int16_t x323 = -1;
	volatile int16_t x324 = -4;
	int32_t t58 = -137894;

	t58 = ((x321-(x322*x323))<x324);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x325 = -1LL;
	int8_t x326 = -1;
	static volatile int8_t x327 = 2;
	static volatile int64_t x328 = INT64_MIN;
	volatile int32_t t59 = -505;

	t59 = ((x325-(x326*x327))<x328);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x334 = INT8_MIN;
	static int16_t x335 = -136;
	uint64_t x336 = 25245730LLU;
	static int32_t t60 = 45821997;

	t60 = ((x333-(x334*x335))<x336);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x337 = INT8_MAX;
	uint16_t x338 = 16045U;
	uint16_t x339 = 14575U;
	int8_t x340 = INT8_MIN;
	static int32_t t61 = 16705;

	t61 = ((x337-(x338*x339))<x340);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x341 = INT16_MAX;
	int16_t x342 = -7004;
	uint8_t x343 = 2U;
	volatile int32_t t62 = -5447;

	t62 = ((x341-(x342*x343))<x344);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x345 = -18;
	int16_t x346 = -1;
	uint16_t x347 = 522U;
	int32_t x348 = -1;
	volatile int32_t t63 = 1;

	t63 = ((x345-(x346*x347))<x348);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x357 = INT32_MIN;
	uint64_t x358 = UINT64_MAX;
	static volatile uint8_t x359 = 98U;
	static int32_t t64 = 522958809;

	t64 = ((x357-(x358*x359))<x360);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x365 = INT32_MIN;
	static uint64_t x366 = UINT64_MAX;
	volatile int64_t x367 = 243LL;
	volatile uint8_t x368 = 1U;
	static int32_t t65 = -8749574;

	t65 = ((x365-(x366*x367))<x368);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x369 = INT64_MIN;
	int8_t x371 = INT8_MIN;

	t66 = ((x369-(x370*x371))<x372);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x374 = INT16_MIN;
	static int64_t x375 = -7547LL;
	int32_t x376 = INT32_MIN;
	static int32_t t67 = 160888576;

	t67 = ((x373-(x374*x375))<x376);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x378 = -1LL;
	volatile uint64_t x379 = UINT64_MAX;
	int32_t x380 = 582;

	t68 = ((x377-(x378*x379))<x380);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x381 = 1;
	static uint8_t x382 = UINT8_MAX;
	int16_t x383 = -1;
	int32_t x384 = -1;
	static volatile int32_t t69 = 2533;

	t69 = ((x381-(x382*x383))<x384);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x385 = -1;
	int8_t x387 = -12;
	static int32_t t70 = -912777;

	t70 = ((x385-(x386*x387))<x388);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x393 = 2822903172871829LLU;
	int32_t x394 = INT32_MIN;
	int64_t x395 = -236270LL;
	volatile int32_t t71 = -9;

	t71 = ((x393-(x394*x395))<x396);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x397 = INT8_MIN;
	volatile int16_t x398 = INT16_MAX;
	uint16_t x399 = 3101U;
	volatile int32_t t72 = -653368807;

	t72 = ((x397-(x398*x399))<x400);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x402 = -1;
	int64_t x403 = 1960602769823905LL;
	int16_t x404 = INT16_MAX;
	int32_t t73 = -12233;

	t73 = ((x401-(x402*x403))<x404);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x425 = 4900052153531LLU;
	int64_t x426 = 2306470035420773LL;
	static uint64_t x428 = UINT64_MAX;
	static volatile int32_t t74 = -9410753;

	t74 = ((x425-(x426*x427))<x428);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x429 = 28226U;
	volatile int8_t x430 = INT8_MAX;
	static int8_t x432 = -1;
	int32_t t75 = -17709262;

	t75 = ((x429-(x430*x431))<x432);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x441 = -1;
	uint32_t x442 = 6U;
	int64_t x443 = -1LL;
	volatile uint64_t x444 = 4826144LLU;
	volatile int32_t t76 = -17297;

	t76 = ((x441-(x442*x443))<x444);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x446 = 22;
	int32_t x447 = -28989454;
	int64_t x448 = INT64_MAX;
	volatile int32_t t77 = 99594140;

	t77 = ((x445-(x446*x447))<x448);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x464 = INT16_MAX;
	static volatile int32_t t78 = 29;

	t78 = ((x461-(x462*x463))<x464);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x469 = INT64_MIN;
	volatile int8_t x471 = INT8_MIN;
	uint64_t x472 = UINT64_MAX;

	t79 = ((x469-(x470*x471))<x472);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x473 = 64;
	volatile uint64_t x475 = 16026838LLU;
	int16_t x476 = -1;
	volatile int32_t t80 = -991;

	t80 = ((x473-(x474*x475))<x476);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x489 = 2U;
	uint32_t x490 = UINT32_MAX;
	int8_t x491 = 0;
	volatile int16_t x492 = INT16_MAX;
	static int32_t t81 = 3844;

	t81 = ((x489-(x490*x491))<x492);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x493 = INT16_MAX;
	volatile int8_t x496 = 0;
	static int32_t t82 = -1;

	t82 = ((x493-(x494*x495))<x496);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x497 = UINT8_MAX;
	static int8_t x498 = -6;
	int64_t x499 = -341539750288316LL;
	static volatile uint8_t x500 = UINT8_MAX;

	t83 = ((x497-(x498*x499))<x500);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x503 = 106;
	int8_t x504 = -1;
	static volatile int32_t t84 = 1406;

	t84 = ((x501-(x502*x503))<x504);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x505 = UINT64_MAX;
	static int64_t x507 = INT64_MAX;
	int64_t x508 = INT64_MIN;
	volatile int32_t t85 = 128243015;

	t85 = ((x505-(x506*x507))<x508);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x513 = 3U;
	uint8_t x516 = 0U;
	volatile int32_t t86 = 95320;

	t86 = ((x513-(x514*x515))<x516);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x517 = -1LL;
	int16_t x518 = INT16_MAX;
	int32_t x519 = -1;
	int32_t x520 = INT32_MIN;
	static int32_t t87 = -125578;

	t87 = ((x517-(x518*x519))<x520);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x522 = -8;
	int8_t x523 = -29;
	int32_t t88 = 469420975;

	t88 = ((x521-(x522*x523))<x524);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x525 = -1;
	static int64_t x526 = INT64_MIN;
	uint64_t x527 = 49214391223180LLU;
	uint64_t x528 = 396373957LLU;
	volatile int32_t t89 = 115396;

	t89 = ((x525-(x526*x527))<x528);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x534 = INT8_MAX;
	uint8_t x535 = 0U;
	int32_t x536 = 3516207;
	int32_t t90 = 1;

	t90 = ((x533-(x534*x535))<x536);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x540 = 710722172U;
	int32_t t91 = 36635049;

	t91 = ((x537-(x538*x539))<x540);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x541 = INT32_MAX;
	uint64_t x542 = 26548LLU;
	static volatile int32_t x543 = INT32_MIN;
	uint32_t x544 = UINT32_MAX;
	volatile int32_t t92 = 15650;

	t92 = ((x541-(x542*x543))<x544);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x546 = 137020760703127243LLU;
	int8_t x547 = INT8_MAX;
	int32_t x548 = 377042304;
	volatile int32_t t93 = 2;

	t93 = ((x545-(x546*x547))<x548);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x549 = UINT8_MAX;
	int32_t x550 = -1;
	volatile uint32_t x552 = 3409050U;

	t94 = ((x549-(x550*x551))<x552);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x553 = INT32_MAX;
	volatile uint16_t x555 = 767U;
	uint8_t x556 = 13U;
	volatile int32_t t95 = 5197;

	t95 = ((x553-(x554*x555))<x556);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x557 = INT16_MAX;
	volatile uint32_t x558 = UINT32_MAX;
	uint32_t x559 = UINT32_MAX;
	static int64_t x560 = INT64_MIN;

	t96 = ((x557-(x558*x559))<x560);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x577 = -1;
	uint64_t x578 = 137850600143LLU;
	int32_t t97 = 14155;

	t97 = ((x577-(x578*x579))<x580);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x581 = INT8_MIN;
	int64_t x583 = -86705583306273LL;
	uint16_t x584 = UINT16_MAX;

	t98 = ((x581-(x582*x583))<x584);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x585 = UINT64_MAX;
	uint32_t x586 = 0U;
	uint64_t x587 = 827987LLU;
	int32_t t99 = -1;

	t99 = ((x585-(x586*x587))<x588);

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

