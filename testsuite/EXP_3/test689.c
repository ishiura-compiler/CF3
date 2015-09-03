#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 0U;
int32_t x3 = INT32_MIN;
volatile uint64_t t2 = 470325603275LLU;
uint32_t x15 = 1880531U;
uint32_t t3 = 198998U;
static int64_t x19 = 3269320929731LL;
static volatile int64_t t4 = 1LL;
int32_t x32 = -254562985;
int8_t x34 = 27;
int32_t x35 = INT32_MAX;
uint64_t t8 = 730871907LLU;
int64_t t10 = -430620290181958630LL;
static int16_t x67 = INT16_MIN;
int32_t t12 = 212962;
int64_t x73 = -14593LL;
volatile uint32_t x74 = 56U;
uint8_t x75 = 34U;
int64_t t13 = 1382LL;
uint32_t x78 = 2U;
int16_t x93 = INT16_MIN;
uint32_t x94 = 1628006430U;
static volatile int32_t x102 = -1;
int16_t x126 = INT16_MIN;
uint32_t x131 = 2U;
uint64_t x132 = 103668725344LLU;
int16_t x137 = INT16_MIN;
uint16_t x142 = UINT16_MAX;
int32_t t24 = -14095756;
static uint8_t x153 = UINT8_MAX;
int32_t t31 = -11;
uint8_t x173 = UINT8_MAX;
uint16_t x178 = 326U;
int8_t x179 = -1;
uint32_t t33 = 363U;
static int64_t x182 = INT64_MIN;
volatile uint64_t t35 = 4LLU;
volatile int16_t x196 = INT16_MAX;
int64_t x203 = 1651952787101LL;
int32_t x206 = 0;
int64_t t39 = 65241LL;
volatile int8_t x209 = -31;
uint16_t x210 = 3U;
volatile uint64_t t43 = 1LLU;
static int32_t x232 = -3046650;
int8_t x234 = 1;
int16_t x242 = 154;
int16_t x245 = INT16_MIN;
uint32_t x255 = UINT32_MAX;
int16_t x257 = -1;
volatile int32_t t50 = -2;
static int16_t x262 = INT16_MIN;
uint32_t x265 = UINT32_MAX;
int64_t x274 = 11926220473LL;
int16_t x280 = INT16_MIN;
int32_t t56 = 32298;
static int64_t x297 = INT64_MIN;
uint64_t x306 = 106615LLU;
volatile int8_t x308 = -6;
int16_t x322 = INT16_MIN;
static int64_t x324 = -1LL;
static volatile uint64_t x328 = 720LLU;
volatile int64_t x337 = -1LL;
int32_t x340 = -914316;
static int64_t x344 = INT64_MIN;
static int32_t x346 = INT32_MIN;
int64_t x349 = INT64_MIN;
int32_t x357 = INT32_MAX;
int64_t x360 = 40211LL;
volatile int64_t t72 = -193LL;
volatile int8_t x363 = INT8_MIN;
int64_t x376 = -1LL;
uint16_t x377 = 199U;
volatile int64_t x378 = INT64_MIN;
static int8_t x400 = -12;
static int16_t x402 = INT16_MAX;
uint8_t x406 = 101U;
volatile int32_t x408 = INT32_MIN;
uint64_t t83 = 515167196373LLU;
int64_t x416 = INT64_MAX;
uint16_t x419 = 35U;
int64_t x423 = INT64_MIN;
static volatile int8_t x430 = INT8_MAX;
int32_t x433 = INT32_MIN;
volatile int64_t t89 = 395594421LL;
uint16_t x441 = UINT16_MAX;
int8_t x442 = INT8_MAX;
int64_t x445 = INT64_MIN;
int8_t x446 = INT8_MAX;
static int64_t t92 = 2055120LL;
int32_t x455 = 46850;
volatile uint32_t t95 = 2696U;
uint32_t x461 = 1507244U;
uint8_t x463 = UINT8_MAX;
uint16_t x466 = UINT16_MAX;
int16_t x469 = INT16_MIN;
volatile uint64_t t98 = 217557358961791136LLU;
static volatile int64_t t99 = -16440703125889505LL;


void f0(void) {
	int32_t x2 = -14432106;
	static volatile uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -298268;

	t0 = ((x1+x2)^(x3%x4));

	if (t0 != 14436502) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	volatile uint32_t x6 = 76147U;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = -1;
	volatile uint32_t t1 = 4U;

	t1 = ((x5+x6)^(x7%x8));

	if (t1 != 43379U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static int32_t x10 = -2537;
	int64_t x11 = INT64_MAX;
	int64_t x12 = -2351853507LL;

	t2 = ((x9+x10)^(x11%x12));

	if (t2 != 18446744073480925277LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 2946U;
	uint32_t x14 = 749049562U;
	volatile int16_t x16 = -1;

	t3 = ((x13+x14)^(x15%x16));

	if (t3 != 750326671U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint16_t x18 = UINT16_MAX;
	uint8_t x20 = 1U;

	t4 = ((x17+x18)^(x19%x20));

	if (t4 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 504643637LLU;
	int8_t x22 = -1;
	uint64_t x23 = 192480881456281149LLU;
	uint32_t x24 = UINT32_MAX;
	volatile uint64_t t5 = 11541460759LLU;

	t5 = ((x21+x22)^(x23%x24));

	if (t5 != 2583235232LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = UINT8_MAX;
	static int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MIN;
	int32_t t6 = -652872614;

	t6 = ((x29+x30)^(x31%x32));

	if (t6 != 2147483519) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	uint8_t x36 = UINT8_MAX;
	volatile int64_t t7 = -608491423LL;

	t7 = ((x33+x34)^(x35%x36));

	if (t7 != 101LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -1;
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x43 = -1;
	static int8_t x44 = 28;

	t8 = ((x41+x42)^(x43%x44));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	static int32_t x46 = 925585247;
	volatile uint16_t x47 = UINT16_MAX;
	static uint32_t x48 = UINT32_MAX;
	volatile uint32_t t9 = 3034027U;

	t9 = ((x45+x46)^(x47%x48));

	if (t9 != 925511840U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	int16_t x50 = INT16_MAX;
	static volatile uint32_t x51 = UINT32_MAX;
	int64_t x52 = -1LL;

	t10 = ((x49+x50)^(x51%x52));

	if (t10 != 32766LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 3718717849309597LLU;
	int64_t x54 = 1LL;
	int8_t x55 = INT8_MIN;
	uint16_t x56 = 91U;
	uint64_t t11 = 144612596LLU;

	t11 = ((x53+x54)^(x55%x56));

	if (t11 != 18443025355860241989LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = -70081112;
	static int8_t x66 = -1;
	int8_t x68 = INT8_MIN;

	t12 = ((x65+x66)^(x67%x68));

	if (t12 != -70081113) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x76 = 108997823U;

	t13 = ((x73+x74)^(x75%x76));

	if (t13 != -14571LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x77 = INT16_MIN;
	static uint64_t x79 = UINT64_MAX;
	int64_t x80 = -190994288030448654LL;
	volatile uint64_t t14 = 1336789003190882LLU;

	t14 = ((x77+x78)^(x79%x80));

	if (t14 != 190994292185070607LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x81 = 92661;
	uint16_t x82 = 1U;
	int64_t x83 = -506573774LL;
	int64_t x84 = INT64_MIN;
	int64_t t15 = 884LL;

	t15 = ((x81+x82)^(x83%x84));

	if (t15 != -506518076LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = 1U;
	uint8_t x90 = UINT8_MAX;
	static volatile int8_t x91 = INT8_MIN;
	volatile uint64_t x92 = 16188083196504LLU;
	volatile uint64_t t16 = 21123791881567214LLU;

	t16 = ((x89+x90)^(x91%x92));

	if (t16 != 2381130134128LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x95 = 66U;
	static int16_t x96 = -1;
	uint32_t t17 = 24685U;

	t17 = ((x93+x94)^(x95%x96));

	if (t17 != 1627973662U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x103 = -857;
	volatile uint64_t x104 = 3418491940LLU;
	static volatile uint64_t t18 = 22LLU;

	t18 = ((x101+x102)^(x103%x104));

	if (t18 != 1333384217LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x121 = 3534U;
	uint64_t x122 = 153377398708309106LLU;
	int64_t x123 = -264121057995LL;
	static volatile int64_t x124 = INT64_MAX;
	volatile uint64_t t19 = 15449223573733497LLU;

	t19 = ((x121+x122)^(x123%x124));

	if (t19 != 18293366792816256885LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x125 = UINT64_MAX;
	uint16_t x127 = 3270U;
	volatile int16_t x128 = 1782;
	static uint64_t t20 = 28021LLU;

	t20 = ((x125+x126)^(x127%x128));

	if (t20 != 18446744073709517359LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x129 = -1;
	int8_t x130 = INT8_MAX;
	volatile uint64_t t21 = 118493829777LLU;

	t21 = ((x129+x130)^(x131%x132));

	if (t21 != 124LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MAX;
	int32_t x135 = INT32_MIN;
	static volatile int32_t x136 = 1;
	volatile int32_t t22 = 1038547420;

	t22 = ((x133+x134)^(x135%x136));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x138 = UINT8_MAX;
	int32_t x139 = INT32_MAX;
	int8_t x140 = INT8_MIN;
	volatile int32_t t23 = 61;

	t23 = ((x137+x138)^(x139%x140));

	if (t23 != -32640) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x141 = 1895;
	uint16_t x143 = UINT16_MAX;
	static uint8_t x144 = UINT8_MAX;

	t24 = ((x141+x142)^(x143%x144));

	if (t24 != 67430) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x145 = -1;
	static uint8_t x146 = UINT8_MAX;
	static uint32_t x147 = 1054125203U;
	volatile int32_t x148 = INT32_MIN;
	uint32_t t25 = 8102741U;

	t25 = ((x145+x146)^(x147%x148));

	if (t25 != 1054125165U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x149 = INT16_MAX;
	static int16_t x150 = INT16_MIN;
	uint16_t x151 = UINT16_MAX;
	int16_t x152 = -1;
	volatile int32_t t26 = -918921826;

	t26 = ((x149+x150)^(x151%x152));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x154 = UINT64_MAX;
	int8_t x155 = 3;
	volatile int16_t x156 = -2;
	uint64_t t27 = 1226366416444LLU;

	t27 = ((x153+x154)^(x155%x156));

	if (t27 != 255LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x157 = -55;
	uint32_t x158 = UINT32_MAX;
	uint8_t x159 = 83U;
	volatile int16_t x160 = INT16_MAX;
	uint32_t t28 = 167U;

	t28 = ((x157+x158)^(x159%x160));

	if (t28 != 4294967195U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = -5;
	int16_t x162 = INT16_MIN;
	int8_t x163 = -1;
	int16_t x164 = 16;
	volatile int32_t t29 = -7;

	t29 = ((x161+x162)^(x163%x164));

	if (t29 != 32772) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x165 = INT16_MIN;
	int8_t x166 = -26;
	volatile int64_t x167 = -1LL;
	uint32_t x168 = UINT32_MAX;
	int64_t t30 = -7720802595LL;

	t30 = ((x165+x166)^(x167%x168));

	if (t30 != 32793LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x169 = 57;
	uint8_t x170 = 30U;
	int32_t x171 = INT32_MIN;
	static int8_t x172 = INT8_MIN;

	t31 = ((x169+x170)^(x171%x172));

	if (t31 != 87) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MAX;
	uint8_t x176 = 2U;
	int64_t t32 = 12678939047549150LL;

	t32 = ((x173+x174)^(x175%x176));

	if (t32 != -2147483394LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x177 = UINT32_MAX;
	uint16_t x180 = 28835U;

	t33 = ((x177+x178)^(x179%x180));

	if (t33 != 4294966970U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = UINT8_MAX;
	uint32_t x183 = UINT32_MAX;
	static uint32_t x184 = 280U;
	int64_t t34 = INT64_MIN;

	t34 = ((x181+x182)^(x183%x184));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x185 = 8073446LLU;
	static int16_t x186 = -1;
	int32_t x187 = 28284794;
	volatile uint64_t x188 = 21208911826190174LLU;

	t35 = ((x185+x186)^(x187%x188));

	if (t35 != 30713759LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x193 = 1;
	int32_t x194 = -1;
	int64_t x195 = INT64_MIN;
	volatile int64_t t36 = 2550621788389739684LL;

	t36 = ((x193+x194)^(x195%x196));

	if (t36 != -8LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x197 = INT64_MAX;
	volatile int32_t x198 = INT32_MIN;
	int64_t x199 = INT64_MIN;
	uint64_t x200 = 64LLU;
	static volatile uint64_t t37 = 1124687LLU;

	t37 = ((x197+x198)^(x199%x200));

	if (t37 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x201 = 111206146466LLU;
	int64_t x202 = INT64_MIN;
	volatile uint64_t x204 = 31549059LLU;
	uint64_t t38 = 4156792283575267260LLU;

	t38 = ((x201+x202)^(x203%x204));

	if (t38 != 9223372148068450080LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = INT16_MIN;
	int64_t x207 = INT64_MAX;
	volatile uint8_t x208 = 5U;

	t39 = ((x205+x206)^(x207%x208));

	if (t39 != -32766LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x211 = INT8_MAX;
	static int16_t x212 = 15;
	volatile int32_t t40 = -3128;

	t40 = ((x209+x210)^(x211%x212));

	if (t40 != -29) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MAX;
	static volatile int16_t x215 = INT16_MAX;
	volatile int8_t x216 = -14;
	int32_t t41 = 643112;

	t41 = ((x213+x214)^(x215%x216));

	if (t41 != 2147483512) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x217 = 232084532U;
	volatile int16_t x218 = 8;
	uint64_t x219 = 24809958LLU;
	volatile uint32_t x220 = 1U;
	uint64_t t42 = 3359033575228LLU;

	t42 = ((x217+x218)^(x219%x220));

	if (t42 != 232084540LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x221 = 73U;
	static uint64_t x222 = 402158804395906LLU;
	int16_t x223 = INT16_MIN;
	int16_t x224 = 1224;

	t43 = ((x221+x222)^(x223%x224));

	if (t43 != 18446341914905156507LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x229 = 100U;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = 9;
	int32_t t44 = 0;

	t44 = ((x229+x230)^(x231%x232));

	if (t44 != 362) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x233 = 328437U;
	volatile int64_t x235 = INT64_MAX;
	int64_t x236 = -1LL;
	int64_t t45 = 33LL;

	t45 = ((x233+x234)^(x235%x236));

	if (t45 != 328438LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x237 = 7466;
	static int64_t x238 = 769849215LL;
	volatile int8_t x239 = -1;
	int32_t x240 = 27;
	volatile int64_t t46 = 16042615776904226LL;

	t46 = ((x237+x238)^(x239%x240));

	if (t46 != -769856682LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x241 = INT8_MIN;
	static uint16_t x243 = 16U;
	volatile int8_t x244 = INT8_MAX;
	int32_t t47 = 1;

	t47 = ((x241+x242)^(x243%x244));

	if (t47 != 10) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x246 = -32967747497597LL;
	volatile uint64_t x247 = 1706453535302075LLU;
	volatile uint16_t x248 = UINT16_MAX;
	uint64_t t48 = 10958617095LLU;

	t48 = ((x245+x246)^(x247%x248));

	if (t48 != 18446711105962004236LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x253 = 25U;
	static int32_t x254 = -4728;
	volatile uint64_t x256 = 827160273513038598LLU;
	uint64_t t49 = 117978109449247583LLU;

	t49 = ((x253+x254)^(x255%x256));

	if (t49 != 18446744069414589022LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x258 = 1858U;
	int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MIN;

	t50 = ((x257+x258)^(x259%x260));

	if (t50 != 1857) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x263 = -1LL;
	uint8_t x264 = 54U;
	static volatile int64_t t51 = 1652370994LL;

	t51 = ((x261+x262)^(x263%x264));

	if (t51 != -4294934528LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x266 = INT64_MIN;
	int16_t x267 = -2439;
	volatile int8_t x268 = INT8_MIN;
	volatile int64_t t52 = 51645392LL;

	t52 = ((x265+x266)^(x267%x268));

	if (t52 != 9223372032559808518LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x269 = UINT64_MAX;
	uint8_t x270 = UINT8_MAX;
	uint32_t x271 = 10U;
	int8_t x272 = 60;
	uint64_t t53 = 372771196751496LLU;

	t53 = ((x269+x270)^(x271%x272));

	if (t53 != 244LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x273 = 1U;
	static uint32_t x275 = 2348885U;
	int64_t x276 = INT64_MAX;
	static volatile int64_t t54 = 1237112611845553264LL;

	t54 = ((x273+x274)^(x275%x276));

	if (t54 != 11928107503LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x277 = INT32_MIN;
	uint32_t x278 = 28333U;
	int64_t x279 = -462LL;
	volatile int64_t t55 = 7039787422004791LL;

	t55 = ((x277+x278)^(x279%x280));

	if (t55 != -2147512161LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x281 = -3582;
	uint16_t x282 = UINT16_MAX;
	uint16_t x283 = 0U;
	uint8_t x284 = 2U;

	t56 = ((x281+x282)^(x283%x284));

	if (t56 != 61953) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x293 = 25U;
	int64_t x294 = 28690462103LL;
	int16_t x295 = 4248;
	int16_t x296 = INT16_MAX;
	int64_t t57 = 227604709068273LL;

	t57 = ((x293+x294)^(x295%x296));

	if (t57 != 28690457896LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x298 = UINT32_MAX;
	int8_t x299 = -3;
	volatile uint64_t x300 = 14LLU;
	static volatile uint64_t t58 = 348LLU;

	t58 = ((x297+x298)^(x299%x300));

	if (t58 != 9223372041149743090LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x301 = INT16_MIN;
	static int32_t x302 = -1752;
	int8_t x303 = -6;
	uint16_t x304 = UINT16_MAX;
	static int32_t t59 = 0;

	t59 = ((x301+x302)^(x303%x304));

	if (t59 != 34514) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x305 = 0LL;
	static int8_t x307 = INT8_MIN;
	volatile uint64_t t60 = 8164483LLU;

	t60 = ((x305+x306)^(x307%x308));

	if (t60 != 18446744073709445001LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x309 = 12218250487034LL;
	static int32_t x310 = INT32_MIN;
	volatile int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	static int64_t t61 = 3983630569888LL;

	t61 = ((x309+x310)^(x311%x312));

	if (t61 != -12216103003270LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x313 = INT16_MIN;
	uint8_t x314 = 25U;
	static volatile int64_t x315 = -1LL;
	uint16_t x316 = UINT16_MAX;
	int64_t t62 = -2312034032621878LL;

	t62 = ((x313+x314)^(x315%x316));

	if (t62 != 32742LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x317 = 157349LL;
	int16_t x318 = -1;
	static int16_t x319 = 7;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t63 = 121450201LLU;

	t63 = ((x317+x318)^(x319%x320));

	if (t63 != 157347LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x321 = -1;
	uint32_t x323 = 3712831U;
	int64_t t64 = -111984413LL;

	t64 = ((x321+x322)^(x323%x324));

	if (t64 != -32769LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x325 = -269166LL;
	int64_t x326 = INT64_MAX;
	int64_t x327 = -1LL;
	static volatile uint64_t t65 = 58LLU;

	t65 = ((x325+x326)^(x327%x328));

	if (t65 != 9223372036854506654LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x333 = 109U;
	static int8_t x334 = 1;
	static uint16_t x335 = 6306U;
	int32_t x336 = -117031;
	int32_t t66 = -1999914;

	t66 = ((x333+x334)^(x335%x336));

	if (t66 != 6348) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x338 = 5092580947975152697LLU;
	volatile int8_t x339 = INT8_MAX;
	uint64_t t67 = 89919581580LLU;

	t67 = ((x337+x338)^(x339%x340));

	if (t67 != 5092580947975152711LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = -27;
	uint32_t x342 = UINT32_MAX;
	uint16_t x343 = 10398U;
	int64_t t68 = -1028411190349548LL;

	t68 = ((x341+x342)^(x343%x344));

	if (t68 != 4294956922LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = INT32_MAX;
	int16_t x347 = INT16_MAX;
	uint32_t x348 = 130723U;
	uint32_t t69 = 309U;

	t69 = ((x345+x346)^(x347%x348));

	if (t69 != 4294934528U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x350 = INT64_MAX;
	uint64_t x351 = 1831730253LLU;
	int64_t x352 = INT64_MAX;
	uint64_t t70 = 2441LLU;

	t70 = ((x349+x350)^(x351%x352));

	if (t70 != 18446744071877821362LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x353 = 29U;
	static uint8_t x354 = UINT8_MAX;
	int64_t x355 = -27795LL;
	int16_t x356 = 368;
	int64_t t71 = 1090084901142LL;

	t71 = ((x353+x354)^(x355%x356));

	if (t71 != -479LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MIN;

	t72 = ((x357+x358)^(x359%x360));

	if (t72 != -2147418663LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x361 = UINT64_MAX;
	uint8_t x362 = 1U;
	int8_t x364 = -22;
	volatile uint64_t t73 = 46652615440668LLU;

	t73 = ((x361+x362)^(x363%x364));

	if (t73 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x365 = INT8_MIN;
	volatile uint32_t x366 = 47U;
	int16_t x367 = INT16_MIN;
	static uint16_t x368 = 23227U;
	uint32_t t74 = 35U;

	t74 = ((x365+x366)^(x367%x368));

	if (t74 != 9492U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x373 = -340316382107LL;
	int8_t x374 = INT8_MAX;
	uint8_t x375 = 10U;
	int64_t t75 = -10940924LL;

	t75 = ((x373+x374)^(x375%x376));

	if (t75 != -340316381980LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x379 = UINT8_MAX;
	volatile int8_t x380 = 12;
	static volatile int64_t t76 = -963933442269015LL;

	t76 = ((x377+x378)^(x379%x380));

	if (t76 != -9223372036854775612LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x381 = -215495878LL;
	static int8_t x382 = INT8_MAX;
	volatile int16_t x383 = -1;
	uint8_t x384 = 7U;
	volatile int64_t t77 = 654631LL;

	t77 = ((x381+x382)^(x383%x384));

	if (t77 != 215495750LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x389 = 27U;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 3U;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t78 = -3076835;

	t78 = ((x389+x390)^(x391%x392));

	if (t78 != -32744) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x393 = 61375071281LLU;
	static int64_t x394 = -1LL;
	volatile uint32_t x395 = UINT32_MAX;
	int64_t x396 = INT64_MIN;
	uint64_t t79 = 297757950LLU;

	t79 = ((x393+x394)^(x395%x396));

	if (t79 != 63178980303LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x397 = UINT8_MAX;
	uint32_t x398 = UINT32_MAX;
	static int16_t x399 = INT16_MAX;
	uint32_t t80 = 18U;

	t80 = ((x397+x398)^(x399%x400));

	if (t80 != 249U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x401 = 61U;
	uint16_t x403 = 17453U;
	volatile uint64_t x404 = 257922523LLU;
	volatile uint64_t t81 = 325864093LLU;

	t81 = ((x401+x402)^(x403%x404));

	if (t81 != 50193LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x405 = -1;
	static uint16_t x407 = 2U;
	int32_t t82 = 0;

	t82 = ((x405+x406)^(x407%x408));

	if (t82 != 102) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x409 = INT32_MIN;
	volatile uint64_t x410 = 1LLU;
	int64_t x411 = 2687161LL;
	int64_t x412 = INT64_MAX;

	t83 = ((x409+x410)^(x411%x412));

	if (t83 != 18446744071564755128LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x413 = -1;
	uint16_t x414 = UINT16_MAX;
	static int8_t x415 = INT8_MAX;
	volatile int64_t t84 = -313892595800LL;

	t84 = ((x413+x414)^(x415%x416));

	if (t84 != 65409LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x417 = UINT32_MAX;
	int64_t x418 = -1889263208660176328LL;
	int16_t x420 = 86;
	volatile int64_t t85 = 0LL;

	t85 = ((x417+x418)^(x419%x420));

	if (t85 != -1889263204365209068LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x421 = -1;
	uint8_t x422 = UINT8_MAX;
	volatile int64_t x424 = -313575LL;
	int64_t t86 = 11276539722712LL;

	t86 = ((x421+x422)^(x423%x424));

	if (t86 != -235563LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x425 = INT64_MIN;
	int16_t x426 = 13246;
	static uint16_t x427 = UINT16_MAX;
	int16_t x428 = -1;
	int64_t t87 = -44949189177LL;

	t87 = ((x425+x426)^(x427%x428));

	if (t87 != -9223372036854762562LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x429 = INT64_MIN;
	volatile uint16_t x431 = UINT16_MAX;
	int8_t x432 = INT8_MIN;
	volatile int64_t t88 = INT64_MIN;

	t88 = ((x429+x430)^(x431%x432));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x434 = 1U;
	int32_t x435 = -767838251;
	int64_t x436 = INT64_MIN;

	t89 = ((x433+x434)^(x435%x436));

	if (t89 != 1379645396LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = INT64_MIN;
	uint16_t x438 = 1747U;
	int16_t x439 = INT16_MAX;
	int16_t x440 = INT16_MIN;
	static int64_t t90 = 0LL;

	t90 = ((x437+x438)^(x439%x440));

	if (t90 != -9223372036854744788LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x443 = -1;
	int64_t x444 = INT64_MAX;
	static int64_t t91 = 756515420166991LL;

	t91 = ((x441+x442)^(x443%x444));

	if (t91 != -65663LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x447 = INT32_MIN;
	uint8_t x448 = 56U;

	t92 = ((x445+x446)^(x447%x448));

	if (t92 != 9223372036854775695LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x449 = INT16_MAX;
	int32_t x450 = -1;
	uint8_t x451 = 3U;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t93 = -1336;

	t93 = ((x449+x450)^(x451%x452));

	if (t93 != 32765) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x453 = -1LL;
	int32_t x454 = INT32_MIN;
	static uint16_t x456 = UINT16_MAX;
	volatile int64_t t94 = 727121210809LL;

	t94 = ((x453+x454)^(x455%x456));

	if (t94 != -2147530499LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x457 = 15;
	volatile uint32_t x458 = 15U;
	int32_t x459 = -176611800;
	int8_t x460 = -1;

	t95 = ((x457+x458)^(x459%x460));

	if (t95 != 30U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x462 = INT8_MIN;
	uint8_t x464 = 124U;
	uint32_t t96 = 1005245771U;

	t96 = ((x461+x462)^(x463%x464));

	if (t96 != 1507115U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x465 = 98854854474369LLU;
	int8_t x467 = 4;
	int8_t x468 = 2;
	uint64_t t97 = 34903587LLU;

	t97 = ((x465+x466)^(x467%x468));

	if (t97 != 98854854539904LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x470 = 2U;
	static volatile uint64_t x471 = UINT64_MAX;
	int8_t x472 = INT8_MIN;

	t98 = ((x469+x470)^(x471%x472));

	if (t98 != 18446744073709518973LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x473 = -54;
	uint8_t x474 = 0U;
	int64_t x475 = 1354665716263644947LL;
	int16_t x476 = 6442;

	t99 = ((x473+x474)^(x475%x476));

	if (t99 != -2593LL) { NG(); } else { ; }
	
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

