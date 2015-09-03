#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MIN;
int16_t x6 = INT16_MIN;
int16_t x8 = -44;
static int16_t x18 = INT16_MAX;
volatile uint8_t x28 = UINT8_MAX;
int8_t x33 = -1;
int32_t x35 = 3942;
uint32_t x42 = UINT32_MAX;
volatile int32_t t11 = INT32_MAX;
uint8_t x50 = 31U;
uint16_t x63 = 77U;
volatile int32_t x64 = INT32_MIN;
volatile int32_t t15 = 349;
volatile uint64_t x66 = UINT64_MAX;
int64_t x77 = INT64_MIN;
int16_t x95 = 354;
volatile int64_t t22 = 330905857149075422LL;
uint64_t t23 = 1527413LLU;
static volatile int8_t x104 = -1;
int8_t x105 = -11;
static uint8_t x106 = 14U;
static uint64_t x107 = UINT64_MAX;
int64_t x120 = -284443638452868800LL;
int8_t x122 = -1;
int32_t x123 = -328449;
uint32_t t29 = 249405U;
int8_t x127 = -3;
static volatile int64_t x130 = -1LL;
volatile int16_t x144 = -229;
volatile uint8_t x147 = UINT8_MAX;
int16_t x150 = INT16_MIN;
uint32_t x151 = UINT32_MAX;
volatile uint64_t x157 = 761LLU;
int64_t x160 = -1LL;
uint32_t x162 = UINT32_MAX;
int16_t x163 = INT16_MAX;
int32_t x173 = INT32_MIN;
static uint8_t x175 = 10U;
int64_t x176 = INT64_MIN;
static volatile int64_t x177 = INT64_MIN;
uint8_t x180 = 3U;
uint8_t x181 = 100U;
int64_t x194 = 428924908172907044LL;
int16_t x199 = INT16_MAX;
int32_t x200 = INT32_MIN;
volatile int32_t t46 = -68364;
volatile int16_t x215 = -1;
int16_t x216 = INT16_MIN;
volatile uint32_t t51 = 2260U;
volatile uint64_t t53 = 672297491LLU;
static uint32_t x235 = 89U;
uint8_t x237 = 0U;
static int64_t t56 = 17765920725260246LL;
int64_t t57 = -41LL;
uint16_t x253 = 7U;
int16_t x255 = -1;
static volatile uint32_t t60 = 2092U;
static uint32_t x261 = 19754819U;
static uint32_t t61 = 5U;
static int16_t x265 = INT16_MIN;
uint8_t x268 = 26U;
volatile int64_t x278 = INT64_MIN;
volatile uint8_t x288 = 123U;
int32_t x292 = INT32_MIN;
static int8_t x293 = 5;
volatile int64_t x299 = INT64_MIN;
int8_t x300 = -1;
int16_t x304 = -13;
static int32_t x311 = INT32_MIN;
int64_t x315 = INT64_MAX;
int16_t x320 = -1;
volatile uint32_t t73 = 11442431U;
volatile uint64_t x321 = 5520403988361820346LLU;
int16_t x322 = -4301;
uint16_t x323 = 13U;
volatile int8_t x330 = -1;
volatile uint16_t x336 = 15U;
int8_t x337 = -1;
uint64_t x339 = 57326638351384358LLU;
uint64_t t78 = 34867LLU;
uint64_t t80 = 20726698002141425LLU;
uint64_t t81 = 31713286127451425LLU;
volatile uint16_t x355 = 343U;
int16_t x361 = INT16_MIN;
static int64_t x375 = INT64_MIN;
static int32_t x377 = 633;
volatile int16_t x394 = INT16_MIN;
int8_t x395 = 19;
static int8_t x399 = INT8_MIN;
uint32_t t91 = 596427U;
int32_t x408 = -586405;
int64_t x413 = -1LL;
int32_t x431 = -7;


void f0(void) {
	int64_t x2 = INT64_MAX;
	uint64_t x3 = 302826110850LLU;
	uint16_t x4 = UINT16_MAX;
	volatile uint64_t t0 = 153366531246LLU;

	t0 = ((x1/x2)+(x3^x4));

	if (t0 != 302826078333LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static uint32_t x7 = 364057091U;
	volatile int64_t t1 = -1461LL;

	t1 = ((x5/x6)+(x7^x8));

	if (t1 != 281478907620823LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int8_t x10 = 5;
	int64_t x11 = INT64_MIN;
	static int32_t x12 = INT32_MAX;
	static volatile int64_t t2 = -992362640LL;

	t2 = ((x9/x10)+(x11^x12));

	if (t2 != -9223372033848298702LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -229716;
	static uint8_t x14 = 3U;
	int16_t x15 = 3;
	int32_t x16 = 260550641;
	int32_t t3 = 124787;

	t3 = ((x13/x14)+(x15^x16));

	if (t3 != 260474070) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 28646702575LL;
	volatile uint16_t x19 = 4010U;
	uint16_t x20 = UINT16_MAX;
	volatile int64_t t4 = 6196214LL;

	t4 = ((x17/x18)+(x19^x20));

	if (t4 != 935779LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MAX;
	uint32_t x24 = 19U;
	int64_t t5 = -2969154272738027LL;

	t5 = ((x21/x22)+(x23^x24));

	if (t5 != 2147483628LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	static volatile int64_t x26 = -1LL;
	volatile uint16_t x27 = 1026U;
	int64_t t6 = -19LL;

	t6 = ((x25/x26)+(x27^x28));

	if (t6 != -64258LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint8_t x30 = UINT8_MAX;
	int32_t x31 = 63526;
	int8_t x32 = 2;
	int32_t t7 = 20703;

	t7 = ((x29/x30)+(x31^x32));

	if (t7 != 63396) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	uint16_t x36 = 22U;
	static int32_t t8 = 1;

	t8 = ((x33/x34)+(x35^x36));

	if (t8 != 3952) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	volatile int64_t x38 = INT64_MIN;
	uint16_t x39 = 6U;
	int64_t x40 = -1LL;
	int64_t t9 = -1719726909740429LL;

	t9 = ((x37/x38)+(x39^x40));

	if (t9 != -7LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	int32_t x43 = INT32_MAX;
	static int16_t x44 = -1;
	static int64_t t10 = 0LL;

	t10 = ((x41/x42)+(x43^x44));

	if (t10 != -4294967296LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int32_t x46 = -26165;
	static volatile int16_t x47 = -1;
	int32_t x48 = INT32_MIN;

	t11 = ((x45/x46)+(x47^x48));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 263133755140823092LLU;
	int32_t x51 = -1;
	static uint8_t x52 = 13U;
	uint64_t t12 = 81178012LLU;

	t12 = ((x49/x50)+(x51^x52));

	if (t12 != 8488185649703956LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	int16_t x54 = -10;
	static int8_t x55 = 1;
	int32_t x56 = INT32_MIN;
	int32_t t13 = -4096482;

	t13 = ((x53/x54)+(x55^x56));

	if (t13 != -1932735283) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 15;
	int16_t x58 = INT16_MIN;
	int16_t x59 = INT16_MAX;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 13972167;

	t14 = ((x57/x58)+(x59^x60));

	if (t14 != -2147450881) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -5328;
	int16_t x62 = INT16_MAX;

	t15 = ((x61/x62)+(x63^x64));

	if (t15 != -2147483571) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint64_t x67 = 57799668888124703LLU;
	int8_t x68 = INT8_MAX;
	uint64_t t16 = 21642237674830LLU;

	t16 = ((x65/x66)+(x67^x68));

	if (t16 != 57799668888124768LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 151169U;
	volatile uint32_t x74 = 145076U;
	static int16_t x75 = -1;
	static int8_t x76 = -20;
	uint32_t t17 = 3353U;

	t17 = ((x73/x74)+(x75^x76));

	if (t17 != 20U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x78 = INT32_MAX;
	volatile int64_t x79 = INT64_MIN;
	uint64_t x80 = 62414900682LLU;
	uint64_t t18 = 10335LLU;

	t18 = ((x77/x78)+(x79^x80));

	if (t18 != 9223372094974709192LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 2U;
	volatile int32_t x82 = -18114;
	int8_t x83 = -19;
	int64_t x84 = -1LL;
	static int64_t t19 = -1993733LL;

	t19 = ((x81/x82)+(x83^x84));

	if (t19 != 18LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = UINT32_MAX;
	int8_t x86 = INT8_MAX;
	int16_t x87 = 0;
	int16_t x88 = 1964;
	static volatile uint32_t t20 = 193868743U;

	t20 = ((x85/x86)+(x87^x88));

	if (t20 != 33820604U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = INT32_MAX;
	uint64_t x90 = 905LLU;
	volatile int16_t x91 = 9066;
	uint32_t x92 = 251050231U;
	uint64_t t21 = 696907267755LLU;

	t21 = ((x89/x90)+(x91^x92));

	if (t21 != 253415627LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MAX;
	int64_t x94 = 1558984LL;
	volatile int64_t x96 = INT64_MIN;

	t22 = ((x93/x94)+(x95^x96));

	if (t22 != -9223366120583641912LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = 1962157199479187LL;
	uint8_t x98 = 13U;
	int64_t x99 = INT64_MIN;
	uint64_t x100 = 142901809200839570LLU;

	t23 = ((x97/x98)+(x99^x100));

	if (t23 != 9366424781224806084LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = 59057061LL;
	uint16_t x102 = 19385U;
	uint8_t x103 = 106U;
	int64_t t24 = 1108360LL;

	t24 = ((x101/x102)+(x103^x104));

	if (t24 != 2939LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x108 = -4582;
	volatile uint64_t t25 = 33644059615210445LLU;

	t25 = ((x105/x106)+(x107^x108));

	if (t25 != 4581LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -1;
	int8_t x110 = 5;
	static volatile uint16_t x111 = 12710U;
	int8_t x112 = -1;
	int32_t t26 = -4243173;

	t26 = ((x109/x110)+(x111^x112));

	if (t26 != -12711) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	int8_t x114 = -1;
	int32_t x115 = -522391;
	volatile uint32_t x116 = 518727001U;
	uint32_t t27 = 3909016U;

	t27 = ((x113/x114)+(x115^x116));

	if (t27 != 3776094769U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = 15;
	volatile int32_t x118 = 3;
	int8_t x119 = 4;
	int64_t t28 = -4949815632848373LL;

	t28 = ((x117/x118)+(x119^x120));

	if (t28 != -284443638452868791LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	static volatile int16_t x124 = INT16_MAX;

	t29 = ((x121/x122)+(x123^x124));

	if (t29 != 4294607617U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x125 = INT8_MIN;
	int8_t x126 = -1;
	volatile uint64_t x128 = 23527971896LLU;
	uint64_t t30 = 3821LLU;

	t30 = ((x125/x126)+(x127^x128));

	if (t30 != 18446744050181579845LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = 2543980918LL;
	int8_t x131 = INT8_MAX;
	uint8_t x132 = UINT8_MAX;
	volatile int64_t t31 = -1703LL;

	t31 = ((x129/x130)+(x131^x132));

	if (t31 != -2543980790LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 22U;
	int16_t x134 = -1;
	static volatile int16_t x135 = -1;
	int64_t x136 = 7424510LL;
	volatile int64_t t32 = 752288LL;

	t32 = ((x133/x134)+(x135^x136));

	if (t32 != -7424533LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = 0U;
	int64_t x138 = -137LL;
	int64_t x139 = -1LL;
	int32_t x140 = -5608991;
	int64_t t33 = -1LL;

	t33 = ((x137/x138)+(x139^x140));

	if (t33 != 5608990LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MAX;
	int32_t x142 = INT32_MIN;
	int8_t x143 = INT8_MIN;
	static volatile int64_t t34 = 335LL;

	t34 = ((x141/x142)+(x143^x144));

	if (t34 != -4294967140LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 207982594562545LLU;
	uint64_t x146 = 208329LLU;
	static int16_t x148 = 357;
	volatile uint64_t t35 = 1LLU;

	t35 = ((x145/x146)+(x147^x148));

	if (t35 != 998337629LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x149 = 19U;
	int32_t x152 = INT32_MAX;
	volatile uint32_t t36 = 1977024U;

	t36 = ((x149/x150)+(x151^x152));

	if (t36 != 2147483648U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x153 = 29;
	int64_t x154 = -7396194489LL;
	int16_t x155 = -1;
	int64_t x156 = INT64_MIN;
	int64_t t37 = INT64_MAX;

	t37 = ((x153/x154)+(x155^x156));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x158 = INT32_MIN;
	uint16_t x159 = UINT16_MAX;
	static uint64_t t38 = 240568413709LLU;

	t38 = ((x157/x158)+(x159^x160));

	if (t38 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	int64_t x164 = -106159380LL;
	volatile int64_t t39 = 269480LL;

	t39 = ((x161/x162)+(x163^x164));

	if (t39 != -106144493LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x165 = 53U;
	volatile int16_t x166 = INT16_MAX;
	int32_t x167 = INT32_MIN;
	int32_t x168 = INT32_MIN;
	volatile int32_t t40 = -647;

	t40 = ((x165/x166)+(x167^x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x174 = INT32_MIN;
	volatile int64_t t41 = 3358252LL;

	t41 = ((x173/x174)+(x175^x176));

	if (t41 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x178 = UINT32_MAX;
	int8_t x179 = -1;
	int64_t t42 = -2634990820214LL;

	t42 = ((x177/x178)+(x179^x180));

	if (t42 != -2147483652LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x182 = 1683U;
	static int16_t x183 = -1;
	int8_t x184 = 19;
	volatile int32_t t43 = -2;

	t43 = ((x181/x182)+(x183^x184));

	if (t43 != -20) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x185 = 51;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = 1724U;
	static volatile int8_t x188 = INT8_MIN;
	int32_t t44 = -47983983;

	t44 = ((x185/x186)+(x187^x188));

	if (t44 != -1732) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -1;
	int8_t x195 = -1;
	uint8_t x196 = 32U;
	volatile int64_t t45 = -3684LL;

	t45 = ((x193/x194)+(x195^x196));

	if (t45 != -33LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MAX;
	int16_t x198 = INT16_MAX;

	t46 = ((x197/x198)+(x199^x200));

	if (t46 != -2147450881) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	static int32_t x202 = 62863;
	int8_t x203 = INT8_MAX;
	volatile uint64_t x204 = UINT64_MAX;
	static volatile uint64_t t47 = 31930605257609LLU;

	t47 = ((x201/x202)+(x203^x204));

	if (t47 != 18446744073709517327LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = 1643636LLU;
	static uint16_t x210 = 53U;
	int16_t x211 = INT16_MIN;
	uint8_t x212 = 60U;
	static uint64_t t48 = 27235032LLU;

	t48 = ((x209/x210)+(x211^x212));

	if (t48 != 18446744073709549920LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = -18;
	static int64_t x214 = -1LL;
	volatile int64_t t49 = 10LL;

	t49 = ((x213/x214)+(x215^x216));

	if (t49 != 32785LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = UINT16_MAX;
	uint16_t x218 = 21U;
	volatile int64_t x219 = INT64_MIN;
	volatile int64_t x220 = INT64_MIN;
	volatile int64_t t50 = -453370LL;

	t50 = ((x217/x218)+(x219^x220));

	if (t50 != 3120LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MIN;
	uint32_t x223 = 58626U;
	uint16_t x224 = UINT16_MAX;

	t51 = ((x221/x222)+(x223^x224));

	if (t51 != 16784125U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = INT16_MIN;
	uint64_t x226 = 31147933LLU;
	volatile uint64_t x227 = 109991156987517LLU;
	static int16_t x228 = 18;
	uint64_t t52 = 153884956189LLU;

	t52 = ((x225/x226)+(x227^x228));

	if (t52 != 110583387106712LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	static uint64_t x232 = UINT64_MAX;

	t53 = ((x229/x230)+(x231^x232));

	if (t53 != 281474976710783LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 180LLU;
	static uint64_t x234 = UINT64_MAX;
	volatile int64_t x236 = INT64_MIN;
	uint64_t t54 = 521379941865183LLU;

	t54 = ((x233/x234)+(x235^x236));

	if (t54 != 9223372036854775897LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x238 = 231675520U;
	uint16_t x239 = UINT16_MAX;
	uint8_t x240 = 26U;
	volatile uint32_t t55 = 46509736U;

	t55 = ((x237/x238)+(x239^x240));

	if (t55 != 65509U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = 76284421831LL;
	int16_t x242 = 71;
	int32_t x243 = 85747;
	int64_t x244 = INT64_MIN;

	t56 = ((x241/x242)+(x243^x244));

	if (t56 != -9223372035780261585LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x245 = UINT32_MAX;
	static int64_t x246 = -23821245200LL;
	int32_t x247 = INT32_MIN;
	static volatile int16_t x248 = INT16_MIN;

	t57 = ((x245/x246)+(x247^x248));

	if (t57 != 2147450880LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x249 = UINT8_MAX;
	int64_t x250 = -21541714LL;
	uint64_t x251 = 185124691787852LLU;
	volatile int16_t x252 = INT16_MIN;
	volatile uint64_t t58 = 23284010823293470LLU;

	t58 = ((x249/x250)+(x251^x252));

	if (t58 != 18446558949017763916LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x254 = 25LLU;
	int64_t x256 = INT64_MIN;
	static uint64_t t59 = 1491569663015LLU;

	t59 = ((x253/x254)+(x255^x256));

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x258 = INT16_MAX;
	static volatile int32_t x259 = 15567;
	int16_t x260 = INT16_MIN;

	t60 = ((x257/x258)+(x259^x260));

	if (t60 != 113875U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x262 = 13553U;
	volatile int16_t x263 = 507;
	int8_t x264 = INT8_MIN;

	t61 = ((x261/x262)+(x263^x264));

	if (t61 != 1068U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x266 = UINT32_MAX;
	uint8_t x267 = 70U;
	volatile uint32_t t62 = 41551U;

	t62 = ((x265/x266)+(x267^x268));

	if (t62 != 92U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x269 = INT16_MIN;
	uint32_t x270 = 110581U;
	static int16_t x271 = -1142;
	static uint32_t x272 = 368U;
	static volatile uint32_t t63 = 47312075U;

	t63 = ((x269/x270)+(x271^x272));

	if (t63 != 37553U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x277 = 25077077793739882LLU;
	int8_t x279 = INT8_MAX;
	int8_t x280 = INT8_MIN;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x277/x278)+(x279^x280));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = UINT8_MAX;
	static volatile int8_t x282 = -1;
	int64_t x283 = -23492LL;
	static int64_t x284 = 1900LL;
	volatile int64_t t65 = 1491549862918831LL;

	t65 = ((x281/x282)+(x283^x284));

	if (t65 != -23983LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	uint32_t x286 = 261457371U;
	int64_t x287 = 47330035718463695LL;
	static volatile int64_t t66 = -881118450482LL;

	t66 = ((x285/x286)+(x287^x288));

	if (t66 != 47330035718463676LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = 0;
	int64_t x290 = 95262874972795812LL;
	int8_t x291 = INT8_MIN;
	volatile int64_t t67 = 967370980386575LL;

	t67 = ((x289/x290)+(x291^x292));

	if (t67 != 2147483520LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x294 = -1;
	static uint8_t x295 = 5U;
	static int32_t x296 = INT32_MIN;
	int32_t t68 = INT32_MIN;

	t68 = ((x293/x294)+(x295^x296));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x297 = -1LL;
	int64_t x298 = INT64_MIN;
	volatile int64_t t69 = INT64_MAX;

	t69 = ((x297/x298)+(x299^x300));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x301 = 2U;
	int32_t x302 = INT32_MIN;
	int8_t x303 = -1;
	int32_t t70 = 22;

	t70 = ((x301/x302)+(x303^x304));

	if (t70 != 12) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = INT16_MIN;
	int32_t x312 = -25651028;
	int32_t t71 = 26;

	t71 = ((x309/x310)+(x311^x312));

	if (t71 != 2121832621) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = -1;
	uint16_t x314 = UINT16_MAX;
	int16_t x316 = -1;
	volatile int64_t t72 = INT64_MIN;

	t72 = ((x313/x314)+(x315^x316));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = INT8_MAX;
	int32_t x318 = -1;
	static uint32_t x319 = 41876U;

	t73 = ((x317/x318)+(x319^x320));

	if (t73 != 4294925292U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x324 = 55U;
	volatile uint64_t t74 = 37413957026453983LLU;

	t74 = ((x321/x322)+(x323^x324));

	if (t74 != 58LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x325 = -1;
	static uint16_t x326 = UINT16_MAX;
	int8_t x327 = 1;
	int8_t x328 = INT8_MIN;
	int32_t t75 = 24449;

	t75 = ((x325/x326)+(x327^x328));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x329 = 8588221LLU;
	uint32_t x331 = 276686U;
	static int8_t x332 = -1;
	static uint64_t t76 = 19LLU;

	t76 = ((x329/x330)+(x331^x332));

	if (t76 != 4294690609LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = -120323779;
	int16_t x334 = INT16_MIN;
	int16_t x335 = -1;
	volatile int32_t t77 = -79035;

	t77 = ((x333/x334)+(x335^x336));

	if (t77 != 3655) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x338 = 337U;
	int32_t x340 = INT32_MIN;

	t78 = ((x337/x338)+(x339^x340));

	if (t78 != 18389417434120060710LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x341 = INT32_MAX;
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	static int64_t x344 = 0LL;
	volatile int64_t t79 = -514624495380883LL;

	t79 = ((x341/x342)+(x343^x344));

	if (t79 != -128LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x345 = UINT64_MAX;
	int16_t x346 = 1027;
	static int32_t x347 = -2599995;
	volatile uint64_t x348 = 14LLU;

	t80 = ((x345/x346)+(x347^x348));

	if (t80 != 17961776115909798LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x349 = 105907U;
	int16_t x350 = 3172;
	int32_t x351 = 4727918;
	uint64_t x352 = 68022581LLU;

	t81 = ((x349/x350)+(x351^x352));

	if (t81 != 71685500LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = -23202371LL;
	uint64_t x354 = 168078328110819154LLU;
	int16_t x356 = INT16_MIN;
	uint64_t t82 = 9399LLU;

	t82 = ((x353/x354)+(x355^x356));

	if (t82 != 18446744073709519300LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x357 = 570928U;
	int64_t x358 = -1LL;
	int32_t x359 = INT32_MAX;
	int32_t x360 = -1;
	static int64_t t83 = -27443629768609LL;

	t83 = ((x357/x358)+(x359^x360));

	if (t83 != -2148054576LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x362 = INT64_MIN;
	volatile uint32_t x363 = 823U;
	static uint32_t x364 = 965388145U;
	int64_t t84 = 552LL;

	t84 = ((x361/x362)+(x363^x364));

	if (t84 != 965387334LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MIN;
	uint32_t x367 = 31942U;
	int8_t x368 = INT8_MIN;
	volatile uint64_t t85 = 2645463618105556539LLU;

	t85 = ((x365/x366)+(x367^x368));

	if (t85 != 4294935367LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x369 = UINT32_MAX;
	uint8_t x370 = 10U;
	volatile int64_t x371 = -20577LL;
	uint8_t x372 = 7U;
	volatile int64_t t86 = -82523054867639LL;

	t86 = ((x369/x370)+(x371^x372));

	if (t86 != 429476145LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 8U;
	static int64_t x374 = 74649LL;
	static uint64_t x376 = 19608LLU;
	uint64_t t87 = 11535485144LLU;

	t87 = ((x373/x374)+(x375^x376));

	if (t87 != 9223372036854795416LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t88 = -141;

	t88 = ((x377/x378)+(x379^x380));

	if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x385 = INT64_MIN;
	uint16_t x386 = 7012U;
	int32_t x387 = INT32_MIN;
	static int32_t x388 = -61373;
	static int64_t t89 = 16915418104LL;

	t89 = ((x385/x386)+(x387^x388));

	if (t89 != -1315367509858782LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = UINT32_MAX;
	uint16_t x396 = UINT16_MAX;
	static volatile uint32_t t90 = 6745U;

	t90 = ((x393/x394)+(x395^x396));

	if (t90 != 65517U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x397 = 1325278U;
	int32_t x398 = -151;
	uint16_t x400 = 5U;

	t91 = ((x397/x398)+(x399^x400));

	if (t91 != 4294967173U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x401 = 5U;
	volatile uint8_t x402 = 85U;
	volatile uint32_t x403 = 7U;
	int16_t x404 = INT16_MIN;
	uint32_t t92 = 65053338U;

	t92 = ((x401/x402)+(x403^x404));

	if (t92 != 4294934535U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x405 = INT16_MIN;
	int8_t x406 = INT8_MIN;
	int32_t x407 = 1;
	volatile int32_t t93 = -452566459;

	t93 = ((x405/x406)+(x407^x408));

	if (t93 != -586150) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = INT32_MIN;
	int64_t x410 = -190129912836613740LL;
	int16_t x411 = INT16_MIN;
	volatile int16_t x412 = 758;
	int64_t t94 = -8364075LL;

	t94 = ((x409/x410)+(x411^x412));

	if (t94 != -32010LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x414 = INT16_MIN;
	uint16_t x415 = 7516U;
	static int16_t x416 = -11796;
	static int64_t t95 = 524822825256085093LL;

	t95 = ((x413/x414)+(x415^x416));

	if (t95 != -13136LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x417 = INT16_MIN;
	volatile int16_t x418 = INT16_MIN;
	static int64_t x419 = INT64_MIN;
	int64_t x420 = INT64_MIN;
	volatile int64_t t96 = -18626176391LL;

	t96 = ((x417/x418)+(x419^x420));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x421 = INT32_MAX;
	uint32_t x422 = 114080777U;
	uint64_t x423 = 12414244LLU;
	int8_t x424 = INT8_MIN;
	volatile uint64_t t97 = 1713615471771887LLU;

	t97 = ((x421/x422)+(x423^x424));

	if (t97 != 18446744073697137334LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x425 = UINT32_MAX;
	int8_t x426 = -52;
	int64_t x427 = INT64_MIN;
	static uint16_t x428 = 4294U;
	int64_t t98 = 425672834471LL;

	t98 = ((x425/x426)+(x427^x428));

	if (t98 != -9223372036854771513LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x429 = -5242;
	int16_t x430 = INT16_MAX;
	static int64_t x432 = INT64_MIN;
	static volatile int64_t t99 = -14317017762LL;

	t99 = ((x429/x430)+(x431^x432));

	if (t99 != 9223372036854775801LL) { NG(); } else { ; }
	
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

