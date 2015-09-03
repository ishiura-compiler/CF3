#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 1862U;
int16_t x3 = INT16_MAX;
int32_t t0 = 152;
int16_t x9 = -39;
static int64_t x13 = INT64_MIN;
int8_t x41 = INT8_MAX;
int32_t t9 = -19247;
static int64_t x52 = -2416240LL;
int64_t x53 = -1LL;
int32_t x55 = INT32_MIN;
int8_t x67 = 2;
int8_t x72 = INT8_MIN;
int16_t x78 = INT16_MIN;
uint16_t x80 = 22U;
volatile int32_t t16 = 5683;
int32_t t17 = 671979;
uint16_t x86 = 0U;
int32_t x87 = 0;
uint64_t x92 = UINT64_MAX;
volatile uint64_t t19 = UINT64_MAX;
int8_t x97 = 1;
static int32_t x101 = INT32_MIN;
static volatile int32_t t21 = -38394;
static int32_t x109 = INT32_MIN;
uint16_t x111 = 16877U;
int8_t x117 = -48;
int8_t x124 = 7;
int32_t t25 = 103264;
int8_t x127 = 0;
int32_t t27 = INT32_MIN;
int64_t x136 = INT64_MAX;
uint8_t x138 = UINT8_MAX;
volatile uint8_t x139 = 1U;
int16_t x140 = -1;
volatile int64_t x142 = INT64_MIN;
int16_t x143 = INT16_MIN;
int32_t x144 = 8245;
int64_t x158 = -1LL;
int64_t t34 = INT64_MIN;
uint64_t x166 = 4647031LLU;
int32_t t35 = 453533;
uint32_t x170 = 180634655U;
int16_t x174 = INT16_MAX;
volatile uint32_t x176 = UINT32_MAX;
volatile int16_t x182 = INT16_MIN;
volatile uint16_t x186 = 10U;
uint32_t x190 = 19652582U;
uint8_t x193 = 6U;
volatile uint32_t x196 = 199120U;
volatile int32_t t43 = -836;
int32_t x206 = -5725130;
uint16_t x208 = 11348U;
int8_t x210 = INT8_MIN;
int16_t x211 = -4;
uint64_t x212 = UINT64_MAX;
int64_t x216 = INT64_MIN;
int64_t x217 = 2135LL;
volatile int32_t x219 = -1;
uint32_t x220 = 541U;
volatile int8_t x234 = -52;
volatile int64_t x235 = INT64_MIN;
uint32_t x270 = 23196737U;
uint64_t x282 = 7LLU;
static volatile int8_t x284 = -1;
int64_t x298 = -1LL;
uint64_t x299 = 40820907LLU;
volatile int32_t t63 = INT32_MIN;
int8_t x312 = INT8_MAX;
volatile int32_t t66 = INT32_MAX;
int16_t x318 = INT16_MAX;
volatile int32_t x320 = 1;
int16_t x321 = -1;
int16_t x325 = -2522;
static uint32_t x332 = 250748U;
static int32_t x338 = INT32_MIN;
int64_t t72 = -1LL;
int16_t x346 = INT16_MIN;
static int64_t x348 = -1LL;
int16_t x352 = INT16_MIN;
int64_t x353 = INT64_MIN;
static int32_t t75 = -245;
int8_t x366 = 30;
volatile uint64_t t79 = 1012085664423653LLU;
uint64_t x386 = 736711550LLU;
uint16_t x396 = 2U;
uint64_t x398 = UINT64_MAX;
uint8_t x399 = UINT8_MAX;
int32_t x403 = -1;
uint16_t x405 = 5519U;
int64_t x410 = INT64_MIN;
static int32_t x415 = INT32_MAX;
uint8_t x420 = UINT8_MAX;
int32_t t90 = -1774;
static uint64_t x430 = UINT64_MAX;
static int64_t t93 = INT64_MIN;
volatile uint64_t x440 = 1LLU;
int8_t x458 = -1;
int16_t x467 = 2;
uint64_t x468 = 0LLU;


void f0(void) {
	int32_t x1 = -1;
	static uint8_t x4 = UINT8_MAX;

	t0 = ((x1==(x2-x3))|x4);

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 34U;
	int16_t x6 = -1;
	static uint16_t x7 = 71U;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = ((x5==(x6-x7))|x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	static int16_t x11 = -1;
	volatile int16_t x12 = INT16_MAX;
	int32_t t2 = -749808;

	t2 = ((x9==(x10-x11))|x12);

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = INT16_MIN;
	static int32_t x15 = 510;
	uint16_t x16 = 483U;
	volatile int32_t t3 = -49;

	t3 = ((x13==(x14-x15))|x16);

	if (t3 != 483) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 1U;
	int64_t x22 = -47LL;
	int8_t x23 = 2;
	int8_t x24 = 0;
	static volatile int32_t t4 = 41097;

	t4 = ((x21==(x22-x23))|x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MIN;
	int16_t x31 = -1;
	static int8_t x32 = INT8_MIN;
	volatile int32_t t5 = 507;

	t5 = ((x29==(x30-x31))|x32);

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = 12645U;
	static volatile int32_t x35 = 0;
	uint64_t x36 = 6625220551LLU;
	volatile uint64_t t6 = 127061360253LLU;

	t6 = ((x33==(x34-x35))|x36);

	if (t6 != 6625220551LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MAX;
	volatile int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	volatile int16_t x40 = -1;
	int32_t t7 = -51862;

	t7 = ((x37==(x38-x39))|x40);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x42 = UINT32_MAX;
	volatile int32_t x43 = INT32_MIN;
	static int64_t x44 = INT64_MAX;
	volatile int64_t t8 = INT64_MAX;

	t8 = ((x41==(x42-x43))|x44);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MIN;
	volatile uint16_t x46 = 1U;
	int32_t x47 = -6906426;
	static int16_t x48 = -1;

	t9 = ((x45==(x46-x47))|x48);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = INT64_MIN;
	static uint8_t x50 = 43U;
	static volatile int8_t x51 = INT8_MIN;
	int64_t t10 = -8301LL;

	t10 = ((x49==(x50-x51))|x52);

	if (t10 != -2416240LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x54 = UINT64_MAX;
	volatile int32_t x56 = 1;
	volatile int32_t t11 = 41195773;

	t11 = ((x53==(x54-x55))|x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	volatile int32_t x58 = -25082;
	volatile uint16_t x59 = 929U;
	int64_t x60 = -3595936LL;
	int64_t t12 = -4126035429172223141LL;

	t12 = ((x57==(x58-x59))|x60);

	if (t12 != -3595936LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = INT32_MIN;
	static int64_t x66 = INT64_MAX;
	static uint32_t x68 = 7U;
	static uint32_t t13 = 33U;

	t13 = ((x65==(x66-x67))|x68);

	if (t13 != 7U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MAX;
	volatile uint32_t x71 = 1192967U;
	int32_t t14 = 27170;

	t14 = ((x69==(x70-x71))|x72);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = UINT8_MAX;
	int16_t x74 = INT16_MIN;
	uint64_t x75 = 526575LLU;
	int16_t x76 = INT16_MIN;
	int32_t t15 = -52317923;

	t15 = ((x73==(x74-x75))|x76);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = UINT16_MAX;
	int8_t x79 = INT8_MAX;

	t16 = ((x77==(x78-x79))|x80);

	if (t16 != 22) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = -1;
	int8_t x83 = -33;
	int32_t x84 = -1;

	t17 = ((x81==(x82-x83))|x84);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 124860419162057766LLU;
	static int32_t x88 = INT32_MIN;
	static int32_t t18 = INT32_MIN;

	t18 = ((x85==(x86-x87))|x88);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x89 = 1601U;
	int32_t x90 = -7;
	int64_t x91 = INT64_MIN;

	t19 = ((x89==(x90-x91))|x92);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x98 = INT64_MIN;
	static int16_t x99 = -6;
	int16_t x100 = INT16_MIN;
	int32_t t20 = -112047;

	t20 = ((x97==(x98-x99))|x100);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x102 = INT32_MIN;
	int64_t x103 = -1LL;
	volatile int8_t x104 = INT8_MAX;

	t21 = ((x101==(x102-x103))|x104);

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x110 = 10;
	static volatile uint16_t x112 = 11077U;
	int32_t t22 = -1341941;

	t22 = ((x109==(x110-x111))|x112);

	if (t22 != 11077) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = -1;
	static int64_t x114 = -1LL;
	static int16_t x115 = -1;
	int64_t x116 = INT64_MAX;
	volatile int64_t t23 = INT64_MAX;

	t23 = ((x113==(x114-x115))|x116);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x118 = INT16_MIN;
	int32_t x119 = -22;
	static int8_t x120 = INT8_MIN;
	int32_t t24 = -477;

	t24 = ((x117==(x118-x119))|x120);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = -1;
	static int64_t x122 = INT64_MAX;
	uint32_t x123 = 112386U;

	t25 = ((x121==(x122-x123))|x124);

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MAX;
	uint64_t x126 = 8839215445LLU;
	int16_t x128 = INT16_MIN;
	int32_t t26 = 807;

	t26 = ((x125==(x126-x127))|x128);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MAX;
	static int8_t x131 = INT8_MAX;
	int32_t x132 = INT32_MIN;

	t27 = ((x129==(x130-x131))|x132);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x133 = INT16_MIN;
	static int16_t x134 = 0;
	int16_t x135 = INT16_MIN;
	volatile int64_t t28 = INT64_MAX;

	t28 = ((x133==(x134-x135))|x136);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x137 = -1;
	int32_t t29 = -1019099759;

	t29 = ((x137==(x138-x139))|x140);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x141 = 0U;
	volatile int32_t t30 = 923321;

	t30 = ((x141==(x142-x143))|x144);

	if (t30 != 8245) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x149 = 1U;
	int32_t x150 = -1;
	static volatile int8_t x151 = INT8_MAX;
	int64_t x152 = 129525LL;
	volatile int64_t t31 = 2421120365206082LL;

	t31 = ((x149==(x150-x151))|x152);

	if (t31 != 129525LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = 185910832;
	int8_t x154 = -1;
	int64_t x155 = INT64_MIN;
	static int16_t x156 = -4030;
	int32_t t32 = -75911617;

	t32 = ((x153==(x154-x155))|x156);

	if (t32 != -4030) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MIN;
	int32_t x159 = 3;
	uint8_t x160 = 14U;
	static volatile int32_t t33 = -2301699;

	t33 = ((x157==(x158-x159))|x160);

	if (t33 != 14) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x161 = INT64_MAX;
	int64_t x162 = -1LL;
	int16_t x163 = INT16_MIN;
	static int64_t x164 = INT64_MIN;

	t34 = ((x161==(x162-x163))|x164);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	static int32_t x168 = 70736884;

	t35 = ((x165==(x166-x167))|x168);

	if (t35 != 70736884) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = INT32_MAX;
	volatile int64_t x171 = -1LL;
	volatile int32_t x172 = -1;
	int32_t t36 = 5404715;

	t36 = ((x169==(x170-x171))|x172);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = -172;
	int16_t x175 = INT16_MAX;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = ((x173==(x174-x175))|x176);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MIN;
	static int64_t x178 = INT64_MIN;
	volatile uint8_t x179 = 0U;
	uint8_t x180 = 88U;
	volatile int32_t t38 = -755902192;

	t38 = ((x177==(x178-x179))|x180);

	if (t38 != 88) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = UINT16_MAX;
	volatile uint16_t x183 = 12U;
	uint32_t x184 = 96246477U;
	static volatile uint32_t t39 = 9848219U;

	t39 = ((x181==(x182-x183))|x184);

	if (t39 != 96246477U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MIN;
	int16_t x187 = INT16_MAX;
	uint8_t x188 = 8U;
	volatile int32_t t40 = 1917234;

	t40 = ((x185==(x186-x187))|x188);

	if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = -1;
	uint64_t x191 = 220595LLU;
	uint64_t x192 = 38571826LLU;
	static volatile uint64_t t41 = 13041905LLU;

	t41 = ((x189==(x190-x191))|x192);

	if (t41 != 38571826LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x194 = INT32_MIN;
	static int64_t x195 = -1LL;
	uint32_t t42 = 206199U;

	t42 = ((x193==(x194-x195))|x196);

	if (t42 != 199120U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x197 = -1;
	int8_t x198 = -6;
	static int32_t x199 = -11940726;
	int8_t x200 = -1;

	t43 = ((x197==(x198-x199))|x200);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x205 = 4;
	int64_t x207 = 859087LL;
	volatile int32_t t44 = -1084;

	t44 = ((x205==(x206-x207))|x208);

	if (t44 != 11348) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = 10595392U;
	static uint64_t t45 = UINT64_MAX;

	t45 = ((x209==(x210-x211))|x212);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = 1197114557652687LL;
	int32_t x214 = -1;
	volatile uint32_t x215 = 91240764U;
	int64_t t46 = INT64_MIN;

	t46 = ((x213==(x214-x215))|x216);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x218 = 1;
	uint32_t t47 = 62665U;

	t47 = ((x217==(x218-x219))|x220);

	if (t47 != 541U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = 94U;
	int16_t x226 = INT16_MAX;
	int16_t x227 = 1900;
	static uint64_t x228 = 5LLU;
	uint64_t t48 = 18434475605LLU;

	t48 = ((x225==(x226-x227))|x228);

	if (t48 != 5LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x229 = 3U;
	uint32_t x230 = 758629150U;
	int8_t x231 = -1;
	volatile uint8_t x232 = UINT8_MAX;
	int32_t t49 = -64646845;

	t49 = ((x229==(x230-x231))|x232);

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = -5;
	int32_t x236 = -1;
	volatile int32_t t50 = 65048;

	t50 = ((x233==(x234-x235))|x236);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = 31;
	int16_t x238 = -421;
	volatile uint16_t x239 = UINT16_MAX;
	int8_t x240 = -54;
	static volatile int32_t t51 = 184;

	t51 = ((x237==(x238-x239))|x240);

	if (t51 != -54) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = UINT64_MAX;
	int8_t x246 = 11;
	int16_t x247 = 19;
	uint64_t x248 = UINT64_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = ((x245==(x246-x247))|x248);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x249 = UINT8_MAX;
	static volatile uint16_t x250 = 6U;
	volatile int16_t x251 = -1;
	int32_t x252 = -1;
	int32_t t53 = -54;

	t53 = ((x249==(x250-x251))|x252);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x253 = INT16_MAX;
	static volatile uint16_t x254 = 4U;
	int16_t x255 = 14785;
	uint64_t x256 = 138121765030443LLU;
	uint64_t t54 = 17947957673LLU;

	t54 = ((x253==(x254-x255))|x256);

	if (t54 != 138121765030443LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x257 = INT32_MAX;
	int32_t x258 = INT32_MAX;
	uint8_t x259 = UINT8_MAX;
	uint16_t x260 = UINT16_MAX;
	int32_t t55 = -881869;

	t55 = ((x257==(x258-x259))|x260);

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x261 = 1907347;
	uint8_t x262 = 1U;
	int64_t x263 = -1LL;
	int32_t x264 = -1;
	int32_t t56 = -958735151;

	t56 = ((x261==(x262-x263))|x264);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x265 = INT8_MIN;
	int64_t x266 = -1LL;
	int32_t x267 = -3538967;
	int16_t x268 = INT16_MIN;
	int32_t t57 = -5;

	t57 = ((x265==(x266-x267))|x268);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x269 = 1LLU;
	volatile uint64_t x271 = 124084581426LLU;
	int64_t x272 = 5248LL;
	volatile int64_t t58 = -3062LL;

	t58 = ((x269==(x270-x271))|x272);

	if (t58 != 5248LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = -1;
	volatile uint32_t x274 = UINT32_MAX;
	uint16_t x275 = 11404U;
	int8_t x276 = INT8_MAX;
	int32_t t59 = -1416808;

	t59 = ((x273==(x274-x275))|x276);

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = INT32_MIN;
	int64_t x278 = -1558921520759LL;
	volatile int64_t x279 = INT64_MIN;
	uint64_t x280 = UINT64_MAX;
	uint64_t t60 = UINT64_MAX;

	t60 = ((x277==(x278-x279))|x280);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = 3112U;
	volatile int32_t x283 = INT32_MAX;
	static volatile int32_t t61 = 1;

	t61 = ((x281==(x282-x283))|x284);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x285 = 40671958497LLU;
	int64_t x286 = INT64_MAX;
	static int16_t x287 = 182;
	int8_t x288 = -1;
	volatile int32_t t62 = -26;

	t62 = ((x285==(x286-x287))|x288);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x297 = INT8_MIN;
	static volatile int32_t x300 = INT32_MIN;

	t63 = ((x297==(x298-x299))|x300);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x305 = INT16_MAX;
	static volatile int16_t x306 = INT16_MIN;
	int32_t x307 = INT32_MIN;
	static int32_t x308 = -1;
	volatile int32_t t64 = -1;

	t64 = ((x305==(x306-x307))|x308);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x309 = -1;
	int64_t x310 = -1LL;
	int16_t x311 = -1;
	int32_t t65 = 9353;

	t65 = ((x309==(x310-x311))|x312);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x313 = 7;
	int32_t x314 = -192582;
	uint16_t x315 = 15904U;
	int32_t x316 = INT32_MAX;

	t66 = ((x313==(x314-x315))|x316);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x317 = -16;
	int32_t x319 = -10;
	static int32_t t67 = 130147956;

	t67 = ((x317==(x318-x319))|x320);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x322 = 7220977462181LL;
	static volatile int32_t x323 = 412;
	int32_t x324 = -42708611;
	volatile int32_t t68 = 92256880;

	t68 = ((x321==(x322-x323))|x324);

	if (t68 != -42708611) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x326 = UINT64_MAX;
	int8_t x327 = -11;
	int8_t x328 = INT8_MAX;
	int32_t t69 = 169253;

	t69 = ((x325==(x326-x327))|x328);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x329 = -106037LL;
	uint32_t x330 = 110567U;
	uint8_t x331 = 6U;
	volatile uint32_t t70 = 242U;

	t70 = ((x329==(x330-x331))|x332);

	if (t70 != 250748U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x337 = INT64_MIN;
	static volatile uint64_t x339 = 15502265506772LLU;
	uint64_t x340 = 189778209439551LLU;
	uint64_t t71 = 962LLU;

	t71 = ((x337==(x338-x339))|x340);

	if (t71 != 189778209439551LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x342 = INT16_MAX;
	volatile int64_t x343 = 596691910300583403LL;
	int64_t x344 = -59558332719848449LL;

	t72 = ((x341==(x342-x343))|x344);

	if (t72 != -59558332719848449LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x345 = UINT64_MAX;
	static uint64_t x347 = 327146656326452LLU;
	int64_t t73 = 0LL;

	t73 = ((x345==(x346-x347))|x348);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x349 = 10369705899641322LLU;
	int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	volatile int32_t t74 = -35550;

	t74 = ((x349==(x350-x351))|x352);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x354 = 2U;
	static uint16_t x355 = 1797U;
	int32_t x356 = -108872317;

	t75 = ((x353==(x354-x355))|x356);

	if (t75 != -108872317) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x361 = INT8_MIN;
	uint64_t x362 = UINT64_MAX;
	int16_t x363 = INT16_MAX;
	int64_t x364 = INT64_MAX;
	int64_t t76 = INT64_MAX;

	t76 = ((x361==(x362-x363))|x364);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x365 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	volatile int64_t x368 = INT64_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = ((x365==(x366-x367))|x368);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x369 = INT8_MAX;
	int32_t x370 = -1;
	static int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MAX;
	int64_t t78 = INT64_MAX;

	t78 = ((x369==(x370-x371))|x372);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = -1;
	int32_t x374 = INT32_MIN;
	static int8_t x375 = INT8_MIN;
	uint64_t x376 = 515949LLU;

	t79 = ((x373==(x374-x375))|x376);

	if (t79 != 515949LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x381 = INT8_MIN;
	volatile int64_t x382 = -249935859LL;
	int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MAX;
	volatile int64_t t80 = INT64_MAX;

	t80 = ((x381==(x382-x383))|x384);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x385 = -1LL;
	uint8_t x387 = UINT8_MAX;
	volatile int8_t x388 = -1;
	volatile int32_t t81 = 0;

	t81 = ((x385==(x386-x387))|x388);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = 7;
	int64_t x390 = 57837138682411LL;
	int16_t x391 = INT16_MIN;
	static volatile uint8_t x392 = 0U;
	int32_t t82 = -6848707;

	t82 = ((x389==(x390-x391))|x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x393 = INT8_MIN;
	volatile int8_t x394 = -1;
	static uint32_t x395 = 93U;
	int32_t t83 = -9592295;

	t83 = ((x393==(x394-x395))|x396);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x397 = INT16_MIN;
	int64_t x400 = INT64_MIN;
	int64_t t84 = INT64_MIN;

	t84 = ((x397==(x398-x399))|x400);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x401 = INT32_MAX;
	uint32_t x402 = 22U;
	int32_t x404 = INT32_MIN;
	int32_t t85 = INT32_MIN;

	t85 = ((x401==(x402-x403))|x404);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x406 = 0;
	uint16_t x407 = 2U;
	uint64_t x408 = 31890554996824LLU;
	volatile uint64_t t86 = 1458LLU;

	t86 = ((x405==(x406-x407))|x408);

	if (t86 != 31890554996824LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = 6770U;
	int8_t x411 = 0;
	uint64_t x412 = UINT64_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x409==(x410-x411))|x412);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x413 = -19651;
	int16_t x414 = 8;
	volatile int16_t x416 = -1;
	static volatile int32_t t88 = 72841306;

	t88 = ((x413==(x414-x415))|x416);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x417 = UINT16_MAX;
	volatile int8_t x418 = INT8_MAX;
	int64_t x419 = 709LL;
	int32_t t89 = -31;

	t89 = ((x417==(x418-x419))|x420);

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x421 = 1U;
	int32_t x422 = -5516418;
	int64_t x423 = -24871257759407LL;
	int16_t x424 = 56;

	t90 = ((x421==(x422-x423))|x424);

	if (t90 != 56) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = -16063854651561766LL;
	static volatile uint32_t x426 = 7785579U;
	static int32_t x427 = INT32_MIN;
	static int32_t x428 = INT32_MIN;
	int32_t t91 = INT32_MIN;

	t91 = ((x425==(x426-x427))|x428);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x429 = 784150;
	int64_t x431 = -1LL;
	int8_t x432 = -1;
	volatile int32_t t92 = 227804710;

	t92 = ((x429==(x430-x431))|x432);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x433 = UINT64_MAX;
	static int32_t x434 = -484;
	volatile int64_t x435 = INT64_MIN;
	static int64_t x436 = INT64_MIN;

	t93 = ((x433==(x434-x435))|x436);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x437 = UINT8_MAX;
	uint8_t x438 = 73U;
	volatile uint8_t x439 = UINT8_MAX;
	static volatile uint64_t t94 = 7LLU;

	t94 = ((x437==(x438-x439))|x440);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x449 = -1;
	int64_t x450 = -1LL;
	uint16_t x451 = 1U;
	int64_t x452 = -1LL;
	volatile int64_t t95 = 1460906530823798997LL;

	t95 = ((x449==(x450-x451))|x452);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x457 = INT16_MIN;
	static int16_t x459 = -879;
	uint8_t x460 = 0U;
	volatile int32_t t96 = 259754;

	t96 = ((x457==(x458-x459))|x460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x461 = 4;
	int16_t x462 = -418;
	uint32_t x463 = UINT32_MAX;
	static int64_t x464 = 2LL;
	int64_t t97 = 394884564986676256LL;

	t97 = ((x461==(x462-x463))|x464);

	if (t97 != 2LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = INT8_MIN;
	int8_t x466 = -1;
	volatile uint64_t t98 = 156485038352249500LLU;

	t98 = ((x465==(x466-x467))|x468);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x469 = 7855U;
	int8_t x470 = -1;
	static int64_t x471 = INT64_MAX;
	int8_t x472 = INT8_MAX;
	int32_t t99 = 152068;

	t99 = ((x469==(x470-x471))|x472);

	if (t99 != 127) { NG(); } else { ; }
	
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

