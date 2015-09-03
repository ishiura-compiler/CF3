#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = INT32_MAX;
volatile uint8_t x12 = 13U;
int64_t x21 = INT64_MAX;
int16_t x24 = 9029;
uint8_t x37 = UINT8_MAX;
int8_t x42 = -2;
int32_t x44 = INT32_MIN;
int8_t x45 = -3;
static int64_t t8 = 4157811LL;
uint64_t x51 = 64525714LLU;
uint8_t x52 = 2U;
int32_t x59 = INT32_MAX;
int32_t x60 = INT32_MIN;
uint64_t x61 = 406265919716408LLU;
volatile uint64_t t11 = 198LLU;
int8_t x79 = 1;
int32_t t13 = -1418;
int8_t x81 = INT8_MIN;
int32_t x91 = 62334;
int64_t x92 = INT64_MAX;
volatile uint32_t t17 = 5U;
uint32_t x97 = UINT32_MAX;
static uint64_t x108 = UINT64_MAX;
static volatile uint16_t x111 = 971U;
int64_t t21 = 1385177LL;
uint32_t t22 = 0U;
static int32_t x121 = INT32_MIN;
int8_t x126 = -1;
uint16_t x129 = UINT16_MAX;
uint16_t x133 = 9140U;
static int8_t x135 = -1;
int16_t x136 = INT16_MIN;
static volatile int32_t t26 = 805257;
volatile int64_t t27 = -4053226547142881LL;
int16_t x141 = INT16_MAX;
static uint32_t x142 = 314338U;
uint8_t x146 = 6U;
uint64_t x147 = 430677LLU;
static volatile uint64_t t29 = 7382168LLU;
int8_t x150 = -40;
static uint64_t x152 = 1LLU;
static int64_t x154 = -1LL;
static int16_t x158 = INT16_MAX;
static int16_t x161 = -1;
uint32_t x165 = 718917685U;
int8_t x166 = INT8_MIN;
static uint16_t x180 = 2U;
int16_t x187 = INT16_MIN;
int32_t x188 = INT32_MIN;
volatile int32_t t37 = 954;
static uint64_t x197 = 122911674725117LLU;
int64_t x205 = 71919LL;
int64_t x219 = -1LL;
int16_t x228 = 99;
int8_t x238 = INT8_MIN;
uint8_t x241 = 0U;
int8_t x245 = -8;
volatile int64_t x256 = -55054149862217LL;
int32_t x265 = INT32_MIN;
static uint64_t t53 = 27LLU;
uint8_t x273 = 76U;
static volatile int16_t x278 = INT16_MAX;
static uint64_t t56 = 380136177822907LLU;
uint8_t x287 = UINT8_MAX;
volatile int32_t t57 = 0;
int64_t x301 = -1LL;
uint64_t x306 = 1796LLU;
volatile uint64_t t60 = 30LLU;
int64_t x311 = INT64_MIN;
int8_t x319 = INT8_MIN;
volatile int64_t t63 = 7583116LL;
int8_t x326 = -1;
static volatile int64_t t66 = -1LL;
uint8_t x341 = 6U;
static int8_t x343 = -1;
volatile uint32_t t68 = 6098425U;
int8_t x348 = INT8_MIN;
volatile uint64_t t71 = 94609842LLU;
static int64_t t72 = INT64_MIN;
int8_t x363 = -1;
volatile int16_t x373 = 1156;
static uint8_t x376 = 16U;
int16_t x377 = -1;
static volatile int64_t t76 = -295LL;
int64_t x381 = 48415189553932096LL;
uint64_t x384 = 365702689LLU;
uint32_t x401 = 16840U;
static int32_t x402 = 250;
uint16_t x405 = 187U;
volatile uint64_t t84 = 18821133400578760LLU;
static uint64_t x417 = 560230042460518LLU;
int64_t x419 = 13872LL;
static uint64_t t85 = 30LLU;
static uint32_t x421 = 419U;
int32_t x425 = 3919;
int64_t x426 = INT64_MIN;
static volatile int32_t x428 = 222244;
int32_t x429 = INT32_MIN;
volatile int16_t x433 = -315;
volatile uint8_t x435 = UINT8_MAX;
volatile int16_t x438 = INT16_MAX;
int32_t x440 = -7338516;
uint16_t x463 = 1579U;
volatile uint32_t t95 = 84224U;
volatile int64_t t97 = -851051092106130430LL;
static int8_t x473 = INT8_MIN;
volatile uint32_t t98 = 25980917U;
uint32_t x480 = 57855297U;
volatile uint32_t t99 = 18813U;


void f0(void) {
	uint16_t x1 = 0U;
	int64_t x2 = -5383955LL;
	int8_t x3 = -1;
	int16_t x4 = -6303;
	volatile int64_t t0 = -15958289088LL;

	t0 = (x1+((x2+x3)%x4));

	if (t0 != -1194LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 392U;
	static int32_t x11 = -1;
	uint32_t t1 = 9220493U;

	t1 = (x9+((x10+x11)%x12));

	if (t1 != 401U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	static int16_t x19 = -2230;
	int8_t x20 = 1;
	int32_t t2 = 5956252;

	t2 = (x17+((x18+x19)%x20));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x22 = INT64_MIN;
	int8_t x23 = 19;
	volatile int64_t t3 = 396933549973667LL;

	t3 = (x21+((x22+x23)%x24));

	if (t3 != 9223372036854772113LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x29 = -1;
	static int32_t x30 = -1;
	int16_t x31 = INT16_MAX;
	int8_t x32 = -1;
	volatile int32_t t4 = 57390;

	t4 = (x29+((x30+x31)%x32));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = INT32_MIN;
	uint8_t x34 = 3U;
	static volatile int16_t x35 = 5;
	int32_t x36 = INT32_MIN;
	static volatile int32_t t5 = 713709142;

	t5 = (x33+((x34+x35)%x36));

	if (t5 != -2147483640) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x38 = UINT32_MAX;
	uint8_t x39 = 0U;
	uint16_t x40 = 5U;
	volatile uint32_t t6 = 765811U;

	t6 = (x37+((x38+x39)%x40));

	if (t6 != 255U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x41 = 0U;
	int64_t x43 = -240971351LL;
	volatile int64_t t7 = -2261LL;

	t7 = (x41+((x42+x43)%x44));

	if (t7 != -240971353LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x46 = UINT8_MAX;
	int64_t x47 = INT64_MIN;
	int32_t x48 = 447923;

	t8 = (x45+((x46+x47)%x48));

	if (t8 != -209840LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x49 = -1;
	uint64_t x50 = 102542969589785LLU;
	uint64_t t9 = 10703585LLU;

	t9 = (x49+((x50+x51)%x52));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = -1;
	int16_t x58 = INT16_MIN;
	volatile int32_t t10 = -2806;

	t10 = (x57+((x58+x59)%x60));

	if (t10 != 2147450878) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x62 = -1;
	uint16_t x63 = UINT16_MAX;
	static uint64_t x64 = 21LLU;

	t11 = (x61+((x62+x63)%x64));

	if (t11 != 406265919716422LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = -816256306;
	int64_t x70 = -1LL;
	uint64_t x71 = 27798517144954LLU;
	int8_t x72 = INT8_MIN;
	uint64_t t12 = 3145571904324102LLU;

	t12 = (x69+((x70+x71)%x72));

	if (t12 != 27797700888647LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = -48;
	int32_t x80 = INT32_MAX;

	t13 = (x77+((x78+x79)%x80));

	if (t13 != 80) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x82 = 55689457650066LLU;
	static volatile int32_t x83 = -37352;
	int64_t x84 = INT64_MAX;
	uint64_t t14 = 54625275LLU;

	t14 = (x81+((x82+x83)%x84));

	if (t14 != 55689457612586LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x85 = 0U;
	int32_t x86 = INT32_MIN;
	uint16_t x87 = UINT16_MAX;
	static int32_t x88 = INT32_MAX;
	volatile int32_t t15 = -316085;

	t15 = (x85+((x86+x87)%x88));

	if (t15 != -2147418113) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = 1;
	int64_t t16 = -196505LL;

	t16 = (x89+((x90+x91)%x92));

	if (t16 != -2147421313LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x93 = UINT8_MAX;
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = 2;
	static int32_t x96 = INT32_MIN;

	t17 = (x93+((x94+x95)%x96));

	if (t17 != 256U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x98 = 289U;
	int8_t x99 = INT8_MAX;
	int16_t x100 = INT16_MIN;
	volatile uint32_t t18 = 38063006U;

	t18 = (x97+((x98+x99)%x100));

	if (t18 != 415U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x101 = INT32_MIN;
	static volatile int16_t x102 = INT16_MIN;
	static uint32_t x103 = UINT32_MAX;
	int16_t x104 = 6568;
	static uint32_t t19 = 13U;

	t19 = (x101+((x102+x103)%x104));

	if (t19 != 2147484751U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x105 = 0U;
	uint16_t x106 = 115U;
	uint8_t x107 = 18U;
	static volatile uint64_t t20 = 2584395403651484913LLU;

	t20 = (x105+((x106+x107)%x108));

	if (t20 != 133LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = -1LL;
	int16_t x110 = INT16_MAX;
	uint8_t x112 = UINT8_MAX;

	t21 = (x109+((x110+x111)%x112));

	if (t21 != 77LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x113 = -1;
	uint32_t x114 = 15101723U;
	int32_t x115 = -1126100;
	int32_t x116 = INT32_MAX;

	t22 = (x113+((x114+x115)%x116));

	if (t22 != 13975622U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x122 = 1412U;
	uint16_t x123 = 23U;
	static int16_t x124 = -1;
	volatile int32_t t23 = INT32_MIN;

	t23 = (x121+((x122+x123)%x124));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x125 = 5210U;
	int32_t x127 = 3367992;
	uint32_t x128 = 32166366U;
	static volatile uint32_t t24 = 56941U;

	t24 = (x125+((x126+x127)%x128));

	if (t24 != 3373201U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x130 = 0;
	volatile int8_t x131 = -1;
	uint8_t x132 = UINT8_MAX;
	int32_t t25 = 0;

	t25 = (x129+((x130+x131)%x132));

	if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x134 = 1U;

	t26 = (x133+((x134+x135)%x136));

	if (t26 != 9140) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = -1;
	volatile int16_t x138 = INT16_MIN;
	int64_t x139 = 6586387LL;
	int64_t x140 = INT64_MIN;

	t27 = (x137+((x138+x139)%x140));

	if (t27 != 6553618LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x143 = 0;
	int8_t x144 = 3;
	volatile uint32_t t28 = 2U;

	t28 = (x141+((x142+x143)%x144));

	if (t28 != 32768U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x145 = -1;
	int64_t x148 = INT64_MIN;

	t29 = (x145+((x146+x147)%x148));

	if (t29 != 430682LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x149 = 6943503624LLU;
	int8_t x151 = INT8_MIN;
	uint64_t t30 = 253563477LLU;

	t30 = (x149+((x150+x151)%x152));

	if (t30 != 6943503624LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = INT64_MAX;
	static int16_t x155 = 0;
	int8_t x156 = INT8_MIN;
	static int64_t t31 = 118247105207LL;

	t31 = (x153+((x154+x155)%x156));

	if (t31 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = -1;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = INT64_MIN;
	volatile int64_t t32 = 10558519012LL;

	t32 = (x157+((x158+x159)%x160));

	if (t32 != 98301LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x162 = 1007;
	int16_t x163 = -1190;
	int16_t x164 = INT16_MAX;
	volatile int32_t t33 = -10183391;

	t33 = (x161+((x162+x163)%x164));

	if (t33 != -184) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x167 = INT8_MIN;
	volatile int32_t x168 = INT32_MAX;
	uint32_t t34 = 4175306U;

	t34 = (x165+((x166+x167)%x168));

	if (t34 != 718917429U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x177 = -1LL;
	uint32_t x178 = 29849U;
	uint8_t x179 = UINT8_MAX;
	volatile int64_t t35 = 14649612913LL;

	t35 = (x177+((x178+x179)%x180));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = INT8_MAX;
	static uint16_t x182 = 0U;
	volatile uint64_t x183 = 20374502537548347LLU;
	int64_t x184 = INT64_MIN;
	uint64_t t36 = 2860949590LLU;

	t36 = (x181+((x182+x183)%x184));

	if (t36 != 20374502537548474LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x185 = INT8_MIN;
	int16_t x186 = 7;

	t37 = (x185+((x186+x187)%x188));

	if (t37 != -32889) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x198 = UINT32_MAX;
	static int8_t x199 = -1;
	int32_t x200 = INT32_MAX;
	uint64_t t38 = 795091778921548LLU;

	t38 = (x197+((x198+x199)%x200));

	if (t38 != 122911674725117LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = INT16_MAX;
	int32_t x202 = INT32_MIN;
	volatile uint64_t x203 = 3144058545LLU;
	int64_t x204 = 3LL;
	uint64_t t39 = 13058LLU;

	t39 = (x201+((x202+x203)%x204));

	if (t39 != 32768LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x206 = 2096;
	int32_t x207 = -1;
	uint32_t x208 = 155U;
	volatile int64_t t40 = 1424909523LL;

	t40 = (x205+((x206+x207)%x208));

	if (t40 != 71999LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x209 = 3U;
	uint8_t x210 = UINT8_MAX;
	int16_t x211 = 27;
	uint32_t x212 = UINT32_MAX;
	uint32_t t41 = 1053U;

	t41 = (x209+((x210+x211)%x212));

	if (t41 != 285U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = INT8_MAX;
	uint64_t x214 = 519464757LLU;
	volatile int16_t x215 = INT16_MAX;
	int8_t x216 = INT8_MIN;
	static uint64_t t42 = 6655832897728360565LLU;

	t42 = (x213+((x214+x215)%x216));

	if (t42 != 519497651LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x217 = 8049220U;
	static int64_t x218 = 482022294302LL;
	static int8_t x220 = INT8_MAX;
	static volatile int64_t t43 = -369355983568LL;

	t43 = (x217+((x218+x219)%x220));

	if (t43 != 8049249LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x225 = INT8_MAX;
	uint64_t x226 = 7762LLU;
	int8_t x227 = -3;
	uint64_t t44 = 24LLU;

	t44 = (x225+((x226+x227)%x228));

	if (t44 != 164LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x233 = 110589LL;
	static int16_t x234 = INT16_MAX;
	int64_t x235 = -1LL;
	static int32_t x236 = INT32_MIN;
	static int64_t t45 = -1173988498458237377LL;

	t45 = (x233+((x234+x235)%x236));

	if (t45 != 143355LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x237 = INT32_MAX;
	static uint32_t x239 = UINT32_MAX;
	static int8_t x240 = INT8_MIN;
	uint32_t t46 = 73U;

	t46 = (x237+((x238+x239)%x240));

	if (t46 != 2147483518U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x242 = INT16_MIN;
	volatile uint8_t x243 = UINT8_MAX;
	static uint64_t x244 = UINT64_MAX;
	static volatile uint64_t t47 = 58779LLU;

	t47 = (x241+((x242+x243)%x244));

	if (t47 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x246 = UINT16_MAX;
	int64_t x247 = INT64_MIN;
	static uint16_t x248 = UINT16_MAX;
	volatile int64_t t48 = 619758871079961725LL;

	t48 = (x245+((x246+x247)%x248));

	if (t48 != -32776LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x249 = 23U;
	uint8_t x250 = 11U;
	int8_t x251 = INT8_MAX;
	uint16_t x252 = 162U;
	volatile uint32_t t49 = 64919045U;

	t49 = (x249+((x250+x251)%x252));

	if (t49 != 161U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x253 = INT8_MIN;
	uint32_t x254 = 6952U;
	static int32_t x255 = INT32_MIN;
	int64_t t50 = -1550724635LL;

	t50 = (x253+((x254+x255)%x256));

	if (t50 != 2147490472LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x257 = -58;
	uint64_t x258 = 459LLU;
	int16_t x259 = -144;
	uint32_t x260 = UINT32_MAX;
	uint64_t t51 = 135937108701899552LLU;

	t51 = (x257+((x258+x259)%x260));

	if (t51 != 257LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x266 = 1561437;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = -1LL;
	volatile uint64_t t52 = 29676864357885LLU;

	t52 = (x265+((x266+x267)%x268));

	if (t52 != 18446744071563629404LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x269 = 14740629912LLU;
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = -1LL;
	static int32_t x272 = -1;

	t53 = (x269+((x270+x271)%x272));

	if (t53 != 14740629912LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x274 = INT8_MIN;
	uint16_t x275 = 1U;
	int16_t x276 = INT16_MIN;
	int32_t t54 = -4;

	t54 = (x273+((x274+x275)%x276));

	if (t54 != -51) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x277 = UINT32_MAX;
	volatile int8_t x279 = INT8_MIN;
	static int64_t x280 = -6626524931LL;
	static volatile int64_t t55 = 48LL;

	t55 = (x277+((x278+x279)%x280));

	if (t55 != 4294999934LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x281 = 6U;
	uint16_t x282 = 19696U;
	uint64_t x283 = 1057433LLU;
	int16_t x284 = INT16_MAX;

	t56 = (x281+((x282+x283)%x284));

	if (t56 != 28591LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x285 = UINT8_MAX;
	volatile int32_t x286 = 1447;
	static uint8_t x288 = 56U;

	t57 = (x285+((x286+x287)%x288));

	if (t57 != 277) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x289 = -1;
	int32_t x290 = INT32_MAX;
	volatile int32_t x291 = -4069784;
	uint8_t x292 = 53U;
	volatile int32_t t58 = -2;

	t58 = (x289+((x290+x291)%x292));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x302 = 60U;
	uint64_t x303 = 3186153877LLU;
	static volatile int64_t x304 = INT64_MIN;
	volatile uint64_t t59 = 755991021287020LLU;

	t59 = (x301+((x302+x303)%x304));

	if (t59 != 3186153936LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x305 = -1;
	int64_t x307 = -7164324943238747LL;
	volatile int16_t x308 = -3;

	t60 = (x305+((x306+x307)%x308));

	if (t60 != 18439579748766314664LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x309 = INT32_MIN;
	volatile int16_t x310 = 18;
	volatile int32_t x312 = INT32_MIN;
	static volatile int64_t t61 = -6117LL;

	t61 = (x309+((x310+x311)%x312));

	if (t61 != -4294967278LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x313 = 59;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = INT32_MIN;
	int8_t x316 = INT8_MAX;
	int32_t t62 = 2204;

	t62 = (x313+((x314+x315)%x316));

	if (t62 != 52) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x317 = 1778646024768LL;
	volatile int8_t x318 = 2;
	int8_t x320 = INT8_MIN;

	t63 = (x317+((x318+x319)%x320));

	if (t63 != 1778646024642LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	volatile int8_t x323 = 55;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t64 = -603556455361546903LL;

	t64 = (x321+((x322+x323)%x324));

	if (t64 != 309LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x325 = -1;
	int8_t x327 = INT8_MIN;
	static int64_t x328 = -1LL;
	volatile int64_t t65 = 8775989968LL;

	t65 = (x325+((x326+x327)%x328));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x333 = INT32_MIN;
	uint32_t x334 = 4504986U;
	static int64_t x335 = INT64_MIN;
	volatile uint8_t x336 = UINT8_MAX;

	t66 = (x333+((x334+x335)%x336));

	if (t66 != -2147483875LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x337 = -1;
	uint8_t x338 = UINT8_MAX;
	static uint64_t x339 = 241452778486061127LLU;
	int8_t x340 = 1;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x337+((x338+x339)%x340));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x342 = 79167U;
	int8_t x344 = -1;

	t68 = (x341+((x342+x343)%x344));

	if (t68 != 79172U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x345 = 16;
	int16_t x346 = 1;
	int32_t x347 = -1;
	volatile int32_t t69 = -1;

	t69 = (x345+((x346+x347)%x348));

	if (t69 != 16) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x349 = INT8_MAX;
	int32_t x350 = INT32_MAX;
	volatile int16_t x351 = INT16_MIN;
	int64_t x352 = 11LL;
	static int64_t t70 = 3952LL;

	t70 = (x349+((x350+x351)%x352));

	if (t70 != 129LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x353 = UINT64_MAX;
	static uint64_t x354 = UINT64_MAX;
	uint64_t x355 = 8021504150877LLU;
	static volatile int64_t x356 = -1LL;

	t71 = (x353+((x354+x355)%x356));

	if (t71 != 8021504150875LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x357 = INT64_MIN;
	static int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	static int8_t x360 = -1;

	t72 = (x357+((x358+x359)%x360));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	uint32_t x364 = 175U;
	volatile uint32_t t73 = 446U;

	t73 = (x361+((x362+x363)%x364));

	if (t73 != 83U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x369 = INT8_MIN;
	uint64_t x370 = UINT64_MAX;
	static int32_t x371 = INT32_MIN;
	uint8_t x372 = UINT8_MAX;
	static volatile uint64_t t74 = UINT64_MAX;

	t74 = (x369+((x370+x371)%x372));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x374 = 6;
	int16_t x375 = INT16_MAX;
	int32_t t75 = -36;

	t75 = (x373+((x374+x375)%x376));

	if (t75 != 1161) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MAX;
	volatile int64_t x380 = INT64_MIN;

	t76 = (x377+((x378+x379)%x380));

	if (t76 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x382 = INT32_MIN;
	volatile uint32_t x383 = 790818732U;
	volatile uint64_t t77 = 2077893996704LLU;

	t77 = (x381+((x382+x383)%x384));

	if (t77 != 48415189566612964LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x385 = 31399U;
	int16_t x386 = 0;
	volatile int16_t x387 = -1;
	int64_t x388 = 67956418701495788LL;
	volatile int64_t t78 = 32406LL;

	t78 = (x385+((x386+x387)%x388));

	if (t78 != 31398LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x389 = INT8_MIN;
	uint8_t x390 = 11U;
	int32_t x391 = -1;
	int64_t x392 = INT64_MIN;
	int64_t t79 = -30LL;

	t79 = (x389+((x390+x391)%x392));

	if (t79 != -118LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x397 = INT32_MIN;
	static int16_t x398 = INT16_MIN;
	static int16_t x399 = INT16_MIN;
	int32_t x400 = -1;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x397+((x398+x399)%x400));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x403 = 1124633667U;
	int16_t x404 = -1;
	volatile uint32_t t81 = 34U;

	t81 = (x401+((x402+x403)%x404));

	if (t81 != 1124650757U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x406 = INT8_MIN;
	static int8_t x407 = -1;
	static int32_t x408 = 1016785890;
	int32_t t82 = 48280;

	t82 = (x405+((x406+x407)%x408));

	if (t82 != 58) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x409 = 923102381LLU;
	volatile int8_t x410 = 1;
	volatile int16_t x411 = -1;
	int8_t x412 = -1;
	volatile uint64_t t83 = 1LLU;

	t83 = (x409+((x410+x411)%x412));

	if (t83 != 923102381LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x413 = UINT64_MAX;
	uint32_t x414 = UINT32_MAX;
	int8_t x415 = INT8_MIN;
	uint8_t x416 = UINT8_MAX;

	t84 = (x413+((x414+x415)%x416));

	if (t84 != 126LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x418 = INT8_MAX;
	uint64_t x420 = 67072750LLU;

	t85 = (x417+((x418+x419)%x420));

	if (t85 != 560230042474517LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x422 = 6U;
	volatile uint32_t x423 = UINT32_MAX;
	int8_t x424 = -1;
	static volatile uint32_t t86 = 7684090U;

	t86 = (x421+((x422+x423)%x424));

	if (t86 != 424U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x427 = INT16_MAX;
	volatile int64_t t87 = -1923761103385189LL;

	t87 = (x425+((x426+x427)%x428));

	if (t87 != -156746LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x430 = INT8_MAX;
	uint8_t x431 = 52U;
	static volatile uint64_t x432 = 152388LLU;
	volatile uint64_t t88 = 2LLU;

	t88 = (x429+((x430+x431)%x432));

	if (t88 != 18446744071562068147LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x434 = 1897U;
	int32_t x436 = -6;
	int32_t t89 = 26630630;

	t89 = (x433+((x434+x435)%x436));

	if (t89 != -311) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x437 = 61U;
	int32_t x439 = -1;
	static int32_t t90 = 518728006;

	t90 = (x437+((x438+x439)%x440));

	if (t90 != 32827) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x441 = 92363386U;
	static int32_t x442 = INT32_MIN;
	volatile int16_t x443 = INT16_MAX;
	uint8_t x444 = 35U;
	static uint32_t t91 = 1838U;

	t91 = (x441+((x442+x443)%x444));

	if (t91 != 92363370U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x445 = -1LL;
	int16_t x446 = INT16_MIN;
	uint8_t x447 = 0U;
	volatile int64_t x448 = -1LL;
	int64_t t92 = 4454LL;

	t92 = (x445+((x446+x447)%x448));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x453 = INT32_MIN;
	int64_t x454 = -1LL;
	int16_t x455 = 3;
	int8_t x456 = INT8_MAX;
	static int64_t t93 = -23809594475575LL;

	t93 = (x453+((x454+x455)%x456));

	if (t93 != -2147483646LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x457 = 119U;
	volatile int8_t x458 = INT8_MIN;
	uint8_t x459 = 3U;
	volatile uint8_t x460 = UINT8_MAX;
	volatile int32_t t94 = 1049218138;

	t94 = (x457+((x458+x459)%x460));

	if (t94 != -6) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x461 = INT8_MAX;
	int32_t x462 = -9120931;
	uint32_t x464 = 29144U;

	t95 = (x461+((x462+x463)%x464));

	if (t95 != 18863U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x465 = UINT64_MAX;
	uint16_t x466 = 5U;
	int64_t x467 = 61LL;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t96 = 58339LLU;

	t96 = (x465+((x466+x467)%x468));

	if (t96 != 65LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x469 = 170U;
	uint32_t x470 = 329713540U;
	int8_t x471 = INT8_MIN;
	volatile int64_t x472 = INT64_MIN;

	t97 = (x469+((x470+x471)%x472));

	if (t97 != 329713582LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x474 = 683960U;
	int8_t x475 = INT8_MIN;
	int16_t x476 = 299;

	t98 = (x473+((x474+x475)%x476));

	if (t98 != 4294967187U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x477 = INT16_MAX;
	uint8_t x478 = 34U;
	uint16_t x479 = UINT16_MAX;

	t99 = (x477+((x478+x479)%x480));

	if (t99 != 98336U) { NG(); } else { ; }
	
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

