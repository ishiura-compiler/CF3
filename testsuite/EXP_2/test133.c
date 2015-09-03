#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
uint64_t t1 = 250724026286LLU;
int32_t x11 = -1;
int64_t t2 = 60338438LL;
static uint8_t x16 = UINT8_MAX;
int8_t x50 = 3;
uint64_t x53 = 99063124133582989LLU;
uint64_t t9 = 98729870472489795LLU;
int32_t x69 = -1;
static volatile int64_t t11 = -6148LL;
uint32_t x75 = UINT32_MAX;
int32_t x85 = -670525978;
volatile int32_t t14 = 166085;
uint16_t x89 = 557U;
int32_t x97 = INT32_MIN;
static volatile int32_t x99 = -170;
int64_t t17 = 107729923642300LL;
uint16_t x112 = UINT16_MAX;
volatile uint64_t t18 = 101209374235472LLU;
volatile uint16_t x113 = 52U;
int16_t x123 = INT16_MIN;
static int32_t x129 = -1;
static volatile uint16_t x133 = UINT16_MAX;
int8_t x134 = 26;
static int64_t t25 = 54737637326LL;
uint64_t x146 = 1401724228508575LLU;
int64_t x153 = -1LL;
int32_t x154 = INT32_MIN;
int16_t x156 = 974;
static volatile int8_t x171 = -1;
int8_t x172 = INT8_MIN;
uint8_t x188 = UINT8_MAX;
int64_t x189 = INT64_MIN;
volatile uint8_t x192 = 15U;
static int64_t x205 = -1LL;
int8_t x206 = INT8_MIN;
volatile int16_t x234 = INT16_MAX;
static int64_t x241 = 1490362322007LL;
int16_t x243 = 1918;
int64_t t45 = -931LL;
int8_t x260 = -58;
uint8_t x262 = UINT8_MAX;
uint64_t t47 = 8LLU;
uint32_t x270 = 5394876U;
int8_t x271 = -1;
int8_t x273 = INT8_MAX;
int16_t x275 = INT16_MAX;
int8_t x276 = INT8_MAX;
static int8_t x277 = 63;
int32_t t51 = -14380719;
int64_t x287 = -118688972758733LL;
static int32_t x308 = -5;
static uint16_t x311 = 2414U;
int8_t x316 = INT8_MIN;
int16_t x321 = -1;
volatile uint16_t x322 = UINT16_MAX;
int64_t x324 = -3364000807LL;
int32_t x325 = -2371485;
volatile int8_t x330 = INT8_MIN;
static volatile int8_t x335 = 34;
uint8_t x340 = 15U;
static int16_t x342 = -1;
int64_t t65 = -158812434439459LL;
uint8_t x350 = UINT8_MAX;
uint64_t t67 = 39659370754049LLU;
volatile uint32_t x363 = 1274U;
static int64_t t68 = -674624025186204LL;
uint8_t x378 = UINT8_MAX;
uint8_t x381 = 3U;
uint16_t x385 = 127U;
int8_t x393 = -38;
uint64_t x395 = 993067869561720865LLU;
volatile int32_t x402 = -1;
volatile int64_t x406 = 742LL;
volatile int32_t x413 = INT32_MIN;
int16_t x425 = INT16_MAX;
volatile int64_t x426 = INT64_MIN;
int32_t x433 = INT32_MAX;
uint8_t x445 = 11U;
uint64_t x449 = 451446518634LLU;
static int16_t x463 = INT16_MIN;
uint32_t t88 = 202648104U;
static uint64_t t90 = 1349LLU;
int8_t x481 = INT8_MIN;
static int16_t x484 = INT16_MIN;
static int64_t x488 = INT64_MIN;
uint64_t x491 = 43772LLU;
int16_t x492 = -1;
uint8_t x493 = 64U;
int64_t t95 = 14914696830165742LL;
int32_t x507 = INT32_MIN;
int32_t x513 = INT32_MIN;
static int8_t x514 = INT8_MIN;
static int8_t x520 = 2;


void f0(void) {
	static int16_t x1 = -12;
	static uint64_t x3 = UINT64_MAX;
	volatile uint64_t x4 = UINT64_MAX;
	static uint64_t t0 = 0LLU;

	t0 = ((x1&(x2+x3))*x4);

	if (t0 != 12LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	int8_t x6 = INT8_MIN;
	int16_t x7 = -1139;
	static uint64_t x8 = UINT64_MAX;

	t1 = ((x5&(x6+x7))*x8);

	if (t1 != 18446744071562069235LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	uint16_t x10 = 14U;
	int8_t x12 = INT8_MAX;

	t2 = ((x9&(x10+x11))*x12);

	if (t2 != 1651LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 0U;
	volatile uint32_t x14 = UINT32_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint32_t t3 = 300778U;

	t3 = ((x13&(x14+x15))*x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x25 = 1U;
	volatile uint8_t x26 = 1U;
	int32_t x27 = INT32_MIN;
	int8_t x28 = -1;
	int32_t t4 = 94216136;

	t4 = ((x25&(x26+x27))*x28);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = INT32_MIN;
	static volatile uint64_t x30 = 38514363440134998LLU;
	int64_t x31 = INT64_MAX;
	int16_t x32 = INT16_MIN;
	uint64_t t5 = 85205763048513LLU;

	t5 = ((x29&(x30+x31))*x32);

	if (t5 != 10786684057505759232LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x37 = 14U;
	uint8_t x38 = 2U;
	volatile uint8_t x39 = 0U;
	static uint8_t x40 = 104U;
	int32_t t6 = -20538;

	t6 = ((x37&(x38+x39))*x40);

	if (t6 != 208) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x41 = 1;
	uint64_t x42 = UINT64_MAX;
	int32_t x43 = -1;
	int8_t x44 = 24;
	uint64_t t7 = 459581565501284746LLU;

	t7 = ((x41&(x42+x43))*x44);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x49 = -1;
	int32_t x51 = -272692;
	int8_t x52 = 1;
	volatile int32_t t8 = -1;

	t8 = ((x49&(x50+x51))*x52);

	if (t8 != -272689) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x54 = 1554U;
	int8_t x55 = INT8_MAX;
	uint64_t x56 = 182865014LLU;

	t9 = ((x53&(x54+x55))*x56);

	if (t9 != 23589586806LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x61 = 1245031615088LLU;
	uint16_t x62 = UINT16_MAX;
	int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MIN;
	volatile uint64_t t10 = 403561647LLU;

	t10 = ((x61&(x62+x63))*x64);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x70 = -1LL;
	static uint32_t x71 = UINT32_MAX;
	volatile int8_t x72 = INT8_MIN;

	t11 = ((x69&(x70+x71))*x72);

	if (t11 != -549755813632LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x73 = INT8_MIN;
	volatile int16_t x74 = INT16_MAX;
	uint32_t x76 = 7U;
	uint32_t t12 = 1U;

	t12 = ((x73&(x74+x75))*x76);

	if (t12 != 228480U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x77 = 0U;
	int8_t x78 = INT8_MAX;
	uint16_t x79 = 16197U;
	int8_t x80 = INT8_MIN;
	volatile int32_t t13 = -29;

	t13 = ((x77&(x78+x79))*x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x86 = UINT8_MAX;
	static int16_t x87 = INT16_MAX;
	volatile uint16_t x88 = 0U;

	t14 = ((x85&(x86+x87))*x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x90 = 20595650842611LL;
	uint16_t x91 = 1431U;
	static uint32_t x92 = 935637U;
	int64_t t15 = 2659801LL;

	t15 = ((x89&(x90+x91))*x92);

	if (t15 != 7485096LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x98 = 1169431364183955208LLU;
	int64_t x100 = 5988634322LL;
	volatile uint64_t t16 = 32LLU;

	t16 = ((x97&(x98+x99))*x100);

	if (t16 != 3531824939772411904LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x105 = 1U;
	int64_t x106 = 506LL;
	static uint32_t x107 = UINT32_MAX;
	int32_t x108 = INT32_MIN;

	t17 = ((x105&(x106+x107))*x108);

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = -1;
	static int8_t x110 = 1;
	static uint64_t x111 = 16369153338005001LLU;

	t18 = ((x109&(x110+x111))*x112);

	if (t18 != 2841307731003812342LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x114 = -1;
	volatile uint64_t x115 = 334316LLU;
	static int8_t x116 = -2;
	uint64_t t19 = 124909LLU;

	t19 = ((x113&(x114+x115))*x116);

	if (t19 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = INT32_MIN;
	static int64_t x118 = -22561537311274LL;
	static uint8_t x119 = 27U;
	int8_t x120 = INT8_MIN;
	static volatile int64_t t20 = -7439743LL;

	t20 = ((x117&(x118+x119))*x120);

	if (t20 != 2888142168260608LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = INT32_MIN;
	uint16_t x122 = UINT16_MAX;
	int8_t x124 = 0;
	static volatile int32_t t21 = 96797;

	t21 = ((x121&(x122+x123))*x124);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = -1;
	int16_t x126 = INT16_MIN;
	static volatile int64_t x127 = -6644LL;
	volatile int16_t x128 = 3251;
	volatile int64_t t22 = 219782123684LL;

	t22 = ((x125&(x126+x127))*x128);

	if (t22 != -128128412LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MAX;
	int64_t x132 = INT64_MAX;
	int64_t t23 = 6665173137LL;

	t23 = ((x129&(x130+x131))*x132);

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x135 = -1;
	int16_t x136 = INT16_MIN;
	static int32_t t24 = -34807;

	t24 = ((x133&(x134+x135))*x136);

	if (t24 != -819200) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x137 = UINT8_MAX;
	static uint32_t x138 = 810U;
	static int8_t x139 = -1;
	int64_t x140 = -245076LL;

	t25 = ((x137&(x138+x139))*x140);

	if (t25 != -10048116LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = -745685593LL;
	int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MAX;
	volatile uint64_t t26 = 35629515980080256LLU;

	t26 = ((x145&(x146+x147))*x148);

	if (t26 != 178018686828292601LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = INT16_MIN;
	static int64_t x151 = -1LL;
	int32_t x152 = -1;
	volatile int64_t t27 = -780927630624392LL;

	t27 = ((x149&(x150+x151))*x152);

	if (t27 != -32767LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x155 = -35482578LL;
	int64_t t28 = -1536751LL;

	t28 = ((x153&(x154+x155))*x156);

	if (t28 != -2126209104124LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x157 = INT32_MAX;
	static int32_t x158 = 0;
	volatile uint8_t x159 = 15U;
	volatile int32_t x160 = -107;
	int32_t t29 = -5030;

	t29 = ((x157&(x158+x159))*x160);

	if (t29 != -1605) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x169 = 940;
	uint16_t x170 = 25422U;
	int32_t t30 = 407;

	t30 = ((x169&(x170+x171))*x172);

	if (t30 != -99840) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x177 = -1;
	static int32_t x178 = INT32_MIN;
	uint8_t x179 = UINT8_MAX;
	volatile uint32_t x180 = 111U;
	uint32_t t31 = 5U;

	t31 = ((x177&(x178+x179))*x180);

	if (t31 != 2147511953U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x186 = 2330U;
	int16_t x187 = INT16_MAX;
	uint32_t t32 = 3214U;

	t32 = ((x185&(x186+x187))*x188);

	if (t32 != 8355840U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x190 = -1;
	volatile int8_t x191 = 3;
	volatile int64_t t33 = 9817498067LL;

	t33 = ((x189&(x190+x191))*x192);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x193 = INT16_MAX;
	int32_t x194 = -342600;
	int16_t x195 = -1;
	int16_t x196 = INT16_MIN;
	int32_t t34 = -4715;

	t34 = ((x193&(x194+x195))*x196);

	if (t34 != -584810496) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x197 = -701;
	volatile int16_t x198 = INT16_MIN;
	uint8_t x199 = UINT8_MAX;
	int64_t x200 = -1LL;
	volatile int64_t t35 = -7423368474LL;

	t35 = ((x197&(x198+x199))*x200);

	if (t35 != 32701LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x201 = 215U;
	int64_t x202 = -1LL;
	uint32_t x203 = UINT32_MAX;
	volatile uint16_t x204 = 61U;
	static volatile int64_t t36 = -99890LL;

	t36 = ((x201&(x202+x203))*x204);

	if (t36 != 13054LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x207 = -1;
	int64_t x208 = -3LL;
	volatile int64_t t37 = -57282328670919474LL;

	t37 = ((x205&(x206+x207))*x208);

	if (t37 != 387LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x213 = 16U;
	uint8_t x214 = 126U;
	static int8_t x215 = -1;
	int8_t x216 = INT8_MIN;
	int32_t t38 = -191305115;

	t38 = ((x213&(x214+x215))*x216);

	if (t38 != -2048) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = INT64_MAX;
	static int8_t x218 = INT8_MAX;
	uint32_t x219 = 3U;
	int32_t x220 = -27;
	int64_t t39 = -399869554204LL;

	t39 = ((x217&(x218+x219))*x220);

	if (t39 != -3510LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x225 = 33;
	int8_t x226 = INT8_MIN;
	static int16_t x227 = INT16_MIN;
	static uint8_t x228 = 1U;
	volatile int32_t t40 = -1298640;

	t40 = ((x225&(x226+x227))*x228);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x229 = INT8_MIN;
	int64_t x230 = -1852691LL;
	volatile uint16_t x231 = UINT16_MAX;
	int32_t x232 = -1892;
	volatile int64_t t41 = -3212505412LL;

	t41 = ((x229&(x230+x231))*x232);

	if (t41 != 3381503488LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x233 = -1;
	int8_t x235 = INT8_MIN;
	uint32_t x236 = UINT32_MAX;
	static volatile uint32_t t42 = 54U;

	t42 = ((x233&(x234+x235))*x236);

	if (t42 != 4294934657U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x242 = INT16_MIN;
	static int16_t x244 = INT16_MAX;
	volatile int64_t t43 = -37LL;

	t43 = ((x241&(x242+x243))*x244);

	if (t43 != 48834701601209258LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x245 = 6219U;
	volatile uint64_t x246 = 590859126LLU;
	static int16_t x247 = INT16_MIN;
	static volatile uint16_t x248 = 1383U;
	volatile uint64_t t44 = 441LLU;

	t44 = ((x245&(x246+x247))*x248);

	if (t44 != 2923662LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x249 = 0LL;
	static int64_t x250 = INT64_MIN;
	uint16_t x251 = 1U;
	volatile int8_t x252 = -1;

	t45 = ((x249&(x250+x251))*x252);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x257 = 4LLU;
	uint8_t x258 = 126U;
	static uint16_t x259 = UINT16_MAX;
	volatile uint64_t t46 = 103472920260LLU;

	t46 = ((x257&(x258+x259))*x260);

	if (t46 != 18446744073709551384LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x261 = 12U;
	int64_t x263 = INT64_MIN;
	volatile uint64_t x264 = 66834516LLU;

	t47 = ((x261&(x262+x263))*x264);

	if (t47 != 802014192LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x265 = 20U;
	int16_t x266 = 1;
	volatile int16_t x267 = -477;
	volatile int16_t x268 = INT16_MIN;
	volatile int32_t t48 = -530;

	t48 = ((x265&(x266+x267))*x268);

	if (t48 != -131072) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x269 = INT8_MIN;
	int16_t x272 = -229;
	uint32_t t49 = 7409214U;

	t49 = ((x269&(x270+x271))*x272);

	if (t49 != 3059554432U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x274 = -1LL;
	volatile int64_t t50 = -921LL;

	t50 = ((x273&(x274+x275))*x276);

	if (t50 != 16002LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x278 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = -1;

	t51 = ((x277&(x278+x279))*x280);

	if (t51 != -63) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x281 = UINT64_MAX;
	static int8_t x282 = INT8_MIN;
	uint64_t x283 = 58LLU;
	int32_t x284 = -122294;
	static uint64_t t52 = 439228941123048386LLU;

	t52 = ((x281&(x282+x283))*x284);

	if (t52 != 8560580LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x285 = -2419;
	uint16_t x286 = UINT16_MAX;
	uint8_t x288 = UINT8_MAX;
	volatile int64_t t53 = -9LL;

	t53 = ((x285&(x286+x287))*x288);

	if (t53 != -30265688036843520LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x289 = -1LL;
	static int16_t x290 = -1;
	volatile int8_t x291 = -1;
	volatile int64_t x292 = -920748LL;
	static volatile int64_t t54 = 34362225671683LL;

	t54 = ((x289&(x290+x291))*x292);

	if (t54 != 1841496LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x301 = 7133038187LL;
	static int64_t x302 = -123LL;
	volatile int64_t x303 = 121151692275LL;
	uint8_t x304 = 65U;
	int64_t t55 = -3320688068LL;

	t55 = ((x301&(x302+x303))*x304);

	if (t55 != 36123516520LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x305 = 11;
	uint16_t x306 = 8048U;
	int16_t x307 = INT16_MAX;
	volatile int32_t t56 = 100192054;

	t56 = ((x305&(x306+x307))*x308);

	if (t56 != -55) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x309 = -56;
	static int64_t x310 = -1LL;
	static uint32_t x312 = 756U;
	volatile int64_t t57 = -10715LL;

	t57 = ((x309&(x310+x311))*x312);

	if (t57 != 1796256LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x313 = -1LL;
	volatile int8_t x314 = INT8_MIN;
	static uint32_t x315 = UINT32_MAX;
	int64_t t58 = 31124032419LL;

	t58 = ((x313&(x314+x315))*x316);

	if (t58 != -549755797376LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x317 = -2006LL;
	int32_t x318 = 1;
	static uint64_t x319 = 74377378LLU;
	int64_t x320 = INT64_MAX;
	volatile uint64_t t59 = 6310146LLU;

	t59 = ((x317&(x318+x319))*x320);

	if (t59 != 18446744073635174366LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x323 = -1;
	volatile int64_t t60 = -219728947LL;

	t60 = ((x321&(x322+x323))*x324);

	if (t60 != -220456428885938LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x326 = UINT64_MAX;
	uint16_t x327 = 737U;
	int8_t x328 = INT8_MIN;
	static volatile uint64_t t61 = 453204041LLU;

	t61 = ((x325&(x326+x327))*x328);

	if (t61 != 18446744073709539328LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x329 = 9;
	int16_t x331 = -22;
	volatile int8_t x332 = INT8_MIN;
	volatile int32_t t62 = -3764362;

	t62 = ((x329&(x330+x331))*x332);

	if (t62 != -1024) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x333 = 0;
	volatile int8_t x334 = -1;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t63 = 2;

	t63 = ((x333&(x334+x335))*x336);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x337 = -3LL;
	int8_t x338 = -1;
	int64_t x339 = -1LL;
	int64_t t64 = -420501538906LL;

	t64 = ((x337&(x338+x339))*x340);

	if (t64 != -60LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x341 = 361635LL;
	uint16_t x343 = 664U;
	static int16_t x344 = INT16_MIN;

	t65 = ((x341&(x342+x343))*x344);

	if (t65 != -4292608LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x349 = UINT8_MAX;
	int8_t x351 = 35;
	static uint16_t x352 = 311U;
	static volatile int32_t t66 = 0;

	t66 = ((x349&(x350+x351))*x352);

	if (t66 != 10574) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = -14;
	volatile int64_t x359 = -8701055611170LL;
	volatile int32_t x360 = INT32_MAX;

	t67 = ((x357&(x358+x359))*x360);

	if (t67 != 1177110012545478960LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x361 = INT64_MAX;
	int64_t x362 = 0LL;
	uint8_t x364 = 0U;

	t68 = ((x361&(x362+x363))*x364);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x365 = -1;
	int8_t x366 = 0;
	static volatile int16_t x367 = -1;
	int16_t x368 = INT16_MAX;
	static int32_t t69 = -4194605;

	t69 = ((x365&(x366+x367))*x368);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x377 = -1;
	volatile int8_t x379 = INT8_MAX;
	volatile uint64_t x380 = 98340929982426935LLU;
	static uint64_t t70 = 3712079490LLU;

	t70 = ((x377&(x378+x379))*x380);

	if (t70 != 672747105867985938LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x382 = 16297U;
	uint32_t x383 = UINT32_MAX;
	int8_t x384 = INT8_MIN;
	volatile uint32_t t71 = 1187315U;

	t71 = ((x381&(x382+x383))*x384);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x386 = 1LLU;
	volatile int16_t x387 = INT16_MAX;
	int64_t x388 = -3041852758629LL;
	volatile uint64_t t72 = 28LLU;

	t72 = ((x385&(x386+x387))*x388);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x394 = 24;
	uint8_t x396 = 3U;
	volatile uint64_t t73 = 6594616388LLU;

	t73 = ((x393&(x394+x395))*x396);

	if (t73 != 2979203608685162568LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MIN;
	volatile uint16_t x399 = 19297U;
	uint16_t x400 = 0U;
	int32_t t74 = -1396;

	t74 = ((x397&(x398+x399))*x400);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x401 = 15328LL;
	int64_t x403 = INT64_MAX;
	int32_t x404 = 36;
	int64_t t75 = 13771541669696LL;

	t75 = ((x401&(x402+x403))*x404);

	if (t75 != 551808LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x405 = INT16_MIN;
	volatile int64_t x407 = 3886223380274721490LL;
	static volatile uint64_t x408 = 14499429664196844LLU;
	volatile uint64_t t76 = 108282543643945LLU;

	t76 = ((x405&(x406+x407))*x408);

	if (t76 != 5666049230597914624LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x414 = 7U;
	uint8_t x415 = 63U;
	uint8_t x416 = 3U;
	int32_t t77 = -3043;

	t77 = ((x413&(x414+x415))*x416);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x417 = -4;
	uint32_t x418 = 1317U;
	uint64_t x419 = 114294057LLU;
	int8_t x420 = 0;
	static uint64_t t78 = 4020627LLU;

	t78 = ((x417&(x418+x419))*x420);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x427 = 87U;
	uint8_t x428 = UINT8_MAX;
	int64_t t79 = -512LL;

	t79 = ((x425&(x426+x427))*x428);

	if (t79 != 22185LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x429 = -1;
	uint16_t x430 = 1U;
	int16_t x431 = INT16_MIN;
	int16_t x432 = INT16_MIN;
	int32_t t80 = -3;

	t80 = ((x429&(x430+x431))*x432);

	if (t80 != 1073709056) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x434 = INT64_MIN;
	volatile uint8_t x435 = 3U;
	uint32_t x436 = 795U;
	volatile int64_t t81 = 216733856LL;

	t81 = ((x433&(x434+x435))*x436);

	if (t81 != 2385LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x437 = -1;
	int16_t x438 = -1;
	uint64_t x439 = 45041309897647696LLU;
	static volatile int16_t x440 = -3;
	volatile uint64_t t82 = 418359135LLU;

	t82 = ((x437&(x438+x439))*x440);

	if (t82 != 18311620144016608531LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x441 = -1;
	static volatile int16_t x442 = -1;
	uint8_t x443 = UINT8_MAX;
	volatile uint64_t x444 = 1506LLU;
	uint64_t t83 = 59999LLU;

	t83 = ((x441&(x442+x443))*x444);

	if (t83 != 382524LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x446 = -59122LL;
	int16_t x447 = -1;
	int32_t x448 = -8075713;
	int64_t t84 = 0LL;

	t84 = ((x445&(x446+x447))*x448);

	if (t84 != -72681417LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x450 = 1;
	uint16_t x451 = UINT16_MAX;
	static int64_t x452 = -194963695LL;
	volatile uint64_t t85 = 28LLU;

	t85 = ((x449&(x450+x451))*x452);

	if (t85 != 18446731296568836096LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x453 = -1;
	volatile int8_t x454 = -1;
	int32_t x455 = -1237;
	volatile int32_t x456 = 0;
	volatile int32_t t86 = 176341;

	t86 = ((x453&(x454+x455))*x456);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x457 = INT8_MIN;
	volatile uint8_t x458 = 3U;
	int64_t x459 = -29182061LL;
	volatile int64_t x460 = -875240LL;
	int64_t t87 = -8374156240LL;

	t87 = ((x457&(x458+x459))*x460);

	if (t87 != 25541323699200LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x461 = -10;
	uint32_t x462 = UINT32_MAX;
	int16_t x464 = -10997;

	t88 = ((x461&(x462+x463))*x464);

	if (t88 != 360459666U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x465 = 2;
	int32_t x466 = 29603;
	volatile uint16_t x467 = 1877U;
	volatile int32_t x468 = -1;
	int32_t t89 = -12193604;

	t89 = ((x465&(x466+x467))*x468);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x469 = -360499987334402867LL;
	static uint64_t x470 = 49098809071LLU;
	volatile int64_t x471 = INT64_MAX;
	uint64_t x472 = 22374311172385423LLU;

	t90 = ((x469&(x470+x471))*x472);

	if (t90 != 5679998930713599476LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x477 = -1LL;
	uint32_t x478 = UINT32_MAX;
	volatile uint8_t x479 = 3U;
	int16_t x480 = 10702;
	volatile int64_t t91 = 0LL;

	t91 = ((x477&(x478+x479))*x480);

	if (t91 != 21404LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x482 = 15076U;
	volatile int16_t x483 = INT16_MIN;
	int32_t t92 = 1;

	t92 = ((x481&(x482+x483))*x484);

	if (t92 != 583008256) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x485 = 432043525486622LLU;
	uint16_t x486 = 35U;
	static uint64_t x487 = UINT64_MAX;
	static uint64_t t93 = 3504229LLU;

	t93 = ((x485&(x486+x487))*x488);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x489 = -1;
	int64_t x490 = INT64_MAX;
	uint64_t t94 = 56329514836926731LLU;

	t94 = ((x489&(x490+x491))*x492);

	if (t94 != 9223372036854732037LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x494 = 79077;
	static int16_t x495 = -13888;
	static int64_t x496 = INT64_MIN;

	t95 = ((x493&(x494+x495))*x496);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x505 = 13U;
	int32_t x506 = INT32_MAX;
	int16_t x508 = 3;
	int32_t t96 = 1656781;

	t96 = ((x505&(x506+x507))*x508);

	if (t96 != 39) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x509 = INT64_MIN;
	static int16_t x510 = INT16_MIN;
	int64_t x511 = INT64_MAX;
	int64_t x512 = INT64_MIN;
	volatile int64_t t97 = 1088829237240LL;

	t97 = ((x509&(x510+x511))*x512);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x515 = UINT32_MAX;
	uint32_t x516 = UINT32_MAX;
	volatile uint32_t t98 = 210890486U;

	t98 = ((x513&(x514+x515))*x516);

	if (t98 != 2147483648U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x517 = 223U;
	int16_t x518 = INT16_MAX;
	int64_t x519 = -67462887943599279LL;
	volatile int64_t t99 = 1086497950874018889LL;

	t99 = ((x517&(x518+x519))*x520);

	if (t99 != 160LL) { NG(); } else { ; }
	
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

