#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x10 = 1;
int64_t t2 = -2LL;
int16_t x21 = -1;
uint32_t x30 = 68U;
static volatile int32_t x32 = -1;
uint8_t x47 = 0U;
int64_t x51 = -7917173295LL;
int64_t x65 = 32145828086938LL;
uint8_t x77 = UINT8_MAX;
static int32_t x83 = 22;
static int16_t x86 = INT16_MIN;
int16_t x87 = INT16_MIN;
int16_t x94 = INT16_MAX;
static volatile uint64_t t15 = 1601702831638138667LLU;
volatile uint64_t x97 = 79LLU;
uint64_t x102 = UINT64_MAX;
uint32_t t19 = 1080088U;
uint32_t x127 = 245336U;
uint64_t x137 = 2736595LLU;
volatile int16_t x142 = INT16_MIN;
uint64_t x145 = 8174LLU;
uint64_t t28 = 7297144LLU;
int16_t x159 = -68;
int64_t x160 = 32855997512LL;
volatile int64_t t29 = 5522277371683339LL;
int32_t x161 = 16314;
volatile int8_t x162 = -1;
uint64_t t32 = 8608776LLU;
static int32_t x180 = -1;
static volatile uint32_t t35 = 11675U;
int32_t x191 = -908;
int16_t x192 = 1428;
static uint8_t x197 = 11U;
static uint8_t x198 = 5U;
int32_t x211 = -116921;
int32_t x221 = 1166755;
volatile uint64_t t42 = 485LLU;
uint32_t x229 = 19589U;
volatile uint64_t t45 = 24077523737LLU;
int32_t x245 = INT32_MIN;
static int8_t x246 = INT8_MAX;
volatile int64_t x251 = -12015287031204LL;
int8_t x254 = -1;
static uint64_t x256 = 923212958LLU;
static uint64_t t49 = 63358997804960LLU;
int8_t x265 = INT8_MIN;
static volatile uint32_t x269 = 56U;
volatile int16_t x278 = INT16_MIN;
int16_t x281 = INT16_MAX;
int64_t x284 = INT64_MIN;
int64_t x309 = 12885LL;
uint32_t x312 = 1064U;
int64_t x329 = INT64_MAX;
uint64_t x331 = 3LLU;
uint64_t t62 = 27354766LLU;
volatile uint64_t t63 = 3958LLU;
static int8_t x354 = INT8_MIN;
int8_t x356 = -1;
int8_t x362 = -1;
static volatile int8_t x364 = INT8_MAX;
int16_t x371 = -1;
int64_t x372 = -1LL;
volatile int64_t t67 = -1952769964LL;
static volatile uint64_t t69 = 268994352823498432LLU;
volatile int16_t x401 = -65;
int8_t x402 = 0;
uint64_t t71 = 7895817584LLU;
int8_t x407 = 2;
int32_t x419 = -1;
volatile uint32_t t74 = 31159320U;
static int32_t x425 = -1;
uint32_t x431 = 4U;
volatile uint64_t t76 = 508LLU;
int64_t x461 = -1LL;
uint8_t x463 = 125U;
uint8_t x482 = 3U;
int16_t x488 = -394;
int64_t x496 = -1LL;
uint32_t x546 = 10U;
static int16_t x567 = INT16_MAX;
int8_t x571 = 0;
int8_t x581 = -1;
static int8_t x582 = INT8_MIN;
static int32_t x599 = -1;
uint32_t x602 = 866U;
int64_t x605 = -1LL;
volatile int8_t x608 = INT8_MIN;


void f0(void) {
	uint16_t x5 = 1U;
	volatile int16_t x6 = INT16_MIN;
	uint8_t x7 = 88U;
	volatile int16_t x8 = 4;
	volatile int32_t t0 = -370120;

	t0 = (x5*((x6+x7)-x8));

	if (t0 != -32684) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 3661751374398527LLU;
	int16_t x11 = INT16_MAX;
	uint8_t x12 = 114U;
	uint64_t t1 = 5LLU;

	t1 = (x9*((x10+x11)-x12));

	if (t1 != 8890364937352190962LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = -1;
	static volatile int16_t x14 = 112;
	int8_t x15 = 2;
	int64_t x16 = 28176000377320246LL;

	t2 = (x13*((x14+x15)-x16));

	if (t2 != 28176000377320132LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x22 = -6382LL;
	int16_t x23 = -1;
	int32_t x24 = INT32_MAX;
	volatile int64_t t3 = -171LL;

	t3 = (x21*((x22+x23)-x24));

	if (t3 != 2147490030LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = 18U;
	int32_t x31 = -2598020;
	volatile uint32_t t4 = 2134898350U;

	t4 = (x29*((x30+x31)-x32));

	if (t4 != 4248204178U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x33 = 11453539U;
	int8_t x34 = INT8_MAX;
	static int32_t x35 = 755;
	int32_t x36 = -1;
	uint32_t t5 = 353U;

	t5 = (x33*((x34+x35)-x36));

	if (t5 != 1523540345U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x41 = 9740U;
	int32_t x42 = INT32_MIN;
	uint64_t x43 = UINT64_MAX;
	volatile int16_t x44 = INT16_MAX;
	uint64_t t6 = 2096975427LLU;

	t6 = (x41*((x42+x43)-x44));

	if (t6 != 18446723156899659776LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x45 = UINT32_MAX;
	static int16_t x46 = 3250;
	int8_t x48 = 7;
	volatile uint32_t t7 = 4U;

	t7 = (x45*((x46+x47)-x48));

	if (t7 != 4294964053U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x49 = UINT32_MAX;
	uint16_t x50 = 21U;
	volatile uint64_t x52 = UINT64_MAX;
	volatile uint64_t t8 = 60081963693LLU;

	t8 = (x49*((x50+x51)-x52));

	if (t8 != 2889487871035996697LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = -13460;
	int64_t x54 = INT64_MIN;
	uint32_t x55 = UINT32_MAX;
	uint64_t x56 = 4702868057817LLU;
	volatile uint64_t t9 = 1LLU;

	t9 = (x53*((x54+x55)-x56));

	if (t9 != 63242793798426120LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x61 = 0U;
	static int8_t x62 = INT8_MIN;
	volatile int16_t x63 = 0;
	static uint32_t x64 = 42753089U;
	uint32_t t10 = 2433U;

	t10 = (x61*((x62+x63)-x64));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x66 = 332;
	static uint32_t x67 = 0U;
	int32_t x68 = -1;
	int64_t t11 = -186LL;

	t11 = (x65*((x66+x67)-x68));

	if (t11 != 10704560752950354LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x78 = INT16_MAX;
	static volatile int8_t x79 = INT8_MIN;
	int8_t x80 = 1;
	volatile int32_t t12 = -120226171;

	t12 = (x77*((x78+x79)-x80));

	if (t12 != 8322690) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x81 = INT16_MIN;
	int64_t x82 = 3871448319LL;
	int16_t x84 = INT16_MAX;
	volatile int64_t t13 = -218LL;

	t13 = (x81*((x82+x83)-x84));

	if (t13 != -126858545528832LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x85 = UINT32_MAX;
	static uint32_t x88 = UINT32_MAX;
	volatile uint32_t t14 = 15204961U;

	t14 = (x85*((x86+x87)-x88));

	if (t14 != 65535U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x93 = 71947798U;
	uint64_t x95 = 534286369LLU;
	volatile int8_t x96 = INT8_MIN;

	t15 = (x93*((x94+x95)-x96));

	if (t15 != 38443094473780672LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x98 = -1LL;
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = 13;
	volatile uint64_t t16 = 5736591369LLU;

	t16 = (x97*((x98+x99)-x100));

	if (t16 != 5176159LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x101 = UINT32_MAX;
	int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;
	uint64_t t17 = 361756LLU;

	t17 = (x101*((x102+x103)-x104));

	if (t17 != 140183437541505LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = 2982;
	int8_t x106 = INT8_MIN;
	int64_t x107 = 4330833LL;
	static int16_t x108 = 21;
	volatile int64_t t18 = -45469110626LL;

	t18 = (x105*((x106+x107)-x108));

	if (t18 != 12914099688LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x113 = -13;
	volatile uint32_t x114 = 0U;
	static int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MIN;

	t19 = (x113*((x114+x115)-x116));

	if (t19 != 2147485312U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x117 = -13;
	static uint32_t x118 = UINT32_MAX;
	int16_t x119 = INT16_MAX;
	uint16_t x120 = 25723U;
	static uint32_t t20 = 9115163U;

	t20 = (x117*((x118+x119)-x120));

	if (t20 != 4294875737U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x121 = UINT8_MAX;
	uint32_t x122 = 458000U;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = 539U;
	volatile uint32_t t21 = 6035765U;

	t21 = (x121*((x122+x123)-x124));

	if (t21 != 108296715U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = 9595U;
	int64_t x126 = -1LL;
	volatile int32_t x128 = INT32_MAX;
	int64_t t22 = 935454221015914955LL;

	t22 = (x125*((x126+x127)-x128));

	if (t22 != -20602751603640LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x129 = UINT32_MAX;
	volatile uint16_t x130 = UINT16_MAX;
	volatile int32_t x131 = INT32_MIN;
	int16_t x132 = 49;
	volatile uint32_t t23 = 17U;

	t23 = (x129*((x130+x131)-x132));

	if (t23 != 2147418162U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x138 = INT8_MAX;
	int8_t x139 = 0;
	volatile uint64_t x140 = 179LLU;
	uint64_t t24 = 1911516LLU;

	t24 = (x137*((x138+x139)-x140));

	if (t24 != 18446744073567248676LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = INT32_MIN;
	static uint16_t x143 = 18U;
	volatile int64_t x144 = -1LL;
	static int64_t t25 = -404LL;

	t25 = (x141*((x142+x143)-x144));

	if (t25 != 70327941988352LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x146 = INT32_MIN;
	int32_t x147 = 1284372;
	volatile int64_t x148 = INT64_MIN;
	static volatile uint64_t t26 = 2366746951995216LLU;

	t26 = (x145*((x146+x147)-x148));

	if (t26 != 18446726530676669592LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x149 = INT8_MIN;
	static int32_t x150 = 13315119;
	int32_t x151 = -1;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t27 = 979785314;

	t27 = (x149*((x150+x151)-x152));

	if (t27 != -1695946624) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x153 = UINT64_MAX;
	static int32_t x154 = -33133131;
	volatile int64_t x155 = -949LL;
	static uint32_t x156 = 22523079U;

	t28 = (x153*((x154+x155)-x156));

	if (t28 != 55657159LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x157 = 23327;
	volatile uint32_t x158 = UINT32_MAX;

	t29 = (x157*((x158+x159)-x160));

	if (t29 != -666243153458195LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x163 = UINT16_MAX;
	static int64_t x164 = 10471LL;
	int64_t t30 = 3031081852708LL;

	t30 = (x161*((x162+x163)-x164));

	if (t30 != 898297782LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x169 = 0U;
	int8_t x170 = INT8_MAX;
	int32_t x171 = -349;
	int16_t x172 = -1;
	static volatile int32_t t31 = -505815875;

	t31 = (x169*((x170+x171)-x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x173 = 1940LLU;
	int32_t x174 = 11;
	uint64_t x175 = 4016LLU;
	uint16_t x176 = UINT16_MAX;

	t32 = (x173*((x174+x175)-x176));

	if (t32 != 18446744073590226096LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MAX;
	static int32_t x179 = INT32_MIN;
	volatile int32_t t33 = 18676;

	t33 = (x177*((x178+x179)-x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = INT32_MIN;
	uint64_t x182 = 375LLU;
	static int8_t x183 = -1;
	int64_t x184 = -1LL;
	uint64_t t34 = 33974875LLU;

	t34 = (x181*((x182+x183)-x184));

	if (t34 != 18446743268403183616LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x185 = -1;
	uint32_t x186 = 9538412U;
	int8_t x187 = 11;
	int32_t x188 = INT32_MIN;

	t35 = (x185*((x186+x187)-x188));

	if (t35 != 2137945225U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x189 = 1U;
	volatile int64_t x190 = INT64_MAX;
	int64_t t36 = 28506LL;

	t36 = (x189*((x190+x191)-x192));

	if (t36 != 9223372036854773471LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x193 = UINT8_MAX;
	uint64_t x194 = 122456LLU;
	int16_t x195 = -247;
	uint32_t x196 = 2U;
	volatile uint64_t t37 = 17159814226694456LLU;

	t37 = (x193*((x194+x195)-x196));

	if (t37 != 31162785LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x199 = 314903LLU;
	int16_t x200 = INT16_MIN;
	static volatile uint64_t t38 = 8930590214372769543LLU;

	t38 = (x197*((x198+x199)-x200));

	if (t38 != 3824436LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x209 = UINT64_MAX;
	uint16_t x210 = UINT16_MAX;
	int32_t x212 = -1;
	volatile uint64_t t39 = 1106041251LLU;

	t39 = (x209*((x210+x211)-x212));

	if (t39 != 51385LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x213 = 354;
	static uint8_t x214 = 0U;
	volatile int8_t x215 = INT8_MAX;
	int32_t x216 = -440;
	int32_t t40 = 21609;

	t40 = (x213*((x214+x215)-x216));

	if (t40 != 200718) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = -1;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = 0;
	int8_t x220 = INT8_MIN;
	static int32_t t41 = 295;

	t41 = (x217*((x218+x219)-x220));

	if (t41 != -383) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x222 = UINT32_MAX;
	uint8_t x223 = 6U;
	static volatile uint64_t x224 = 1036513673296380578LLU;

	t42 = (x221*((x222+x223)-x224));

	if (t42 != 11030585479688494345LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x225 = 0U;
	int32_t x226 = -14160629;
	int64_t x227 = INT64_MAX;
	uint16_t x228 = 27U;
	int64_t t43 = -980LL;

	t43 = (x225*((x226+x227)-x228));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x230 = 4019045LLU;
	volatile int16_t x231 = -1;
	int32_t x232 = -500;
	uint64_t t44 = 5602794094525928LLU;

	t44 = (x229*((x230+x231)-x232));

	if (t44 != 78738847416LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x233 = -1;
	uint64_t x234 = 7LLU;
	int32_t x235 = INT32_MIN;
	uint64_t x236 = 5196LLU;

	t45 = (x233*((x234+x235)-x236));

	if (t45 != 2147488837LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x247 = 3LLU;
	int32_t x248 = INT32_MIN;
	uint64_t t46 = 118278961131LLU;

	t46 = (x245*((x246+x247)-x248));

	if (t46 != 13835057776109289472LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x249 = UINT64_MAX;
	int8_t x250 = INT8_MIN;
	int32_t x252 = 1520123;
	volatile uint64_t t47 = 69LLU;

	t47 = (x249*((x250+x251)-x252));

	if (t47 != 12015288551455LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x253 = 96;
	uint8_t x255 = 17U;
	uint64_t t48 = 3392LLU;

	t48 = (x253*((x254+x255)-x256));

	if (t48 != 18446743985081109184LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x257 = 1067476125709242399LLU;
	uint32_t x258 = 58U;
	uint64_t x259 = 17LLU;
	int16_t x260 = -1967;

	t49 = (x257*((x258+x259)-x260));

	if (t49 != 3070448000545888070LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x261 = 4;
	volatile int16_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = -1;
	static volatile uint32_t t50 = 25104602U;

	t50 = (x261*((x262+x263)-x264));

	if (t50 != 4294967292U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = -1;
	int32_t x268 = 7;
	static uint64_t t51 = 7437463LLU;

	t51 = (x265*((x266+x267)-x268));

	if (t51 != 1152LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x270 = 0;
	int8_t x271 = 13;
	int16_t x272 = INT16_MAX;
	static volatile uint32_t t52 = 1U;

	t52 = (x269*((x270+x271)-x272));

	if (t52 != 4293133072U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = INT32_MIN;
	uint8_t x274 = 58U;
	static int64_t x275 = -1LL;
	uint16_t x276 = 1323U;
	volatile int64_t t53 = -239507LL;

	t53 = (x273*((x274+x275)-x276));

	if (t53 != 2718714298368LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x277 = -1;
	int8_t x279 = 2;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t54 = 7653;

	t54 = (x277*((x278+x279)-x280));

	if (t54 != 32638) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x282 = UINT64_MAX;
	int64_t x283 = INT64_MAX;
	static uint64_t t55 = 585783670179LLU;

	t55 = (x281*((x282+x283)-x284));

	if (t55 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = 451942617;
	static int16_t x286 = INT16_MIN;
	static uint32_t x287 = 1472665U;
	static uint16_t x288 = 1U;
	static volatile uint32_t t56 = 1068U;

	t56 = (x285*((x286+x287)-x288));

	if (t56 != 2691561688U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x293 = -59;
	volatile int32_t x294 = 24380446;
	static int16_t x295 = -62;
	static int32_t x296 = -1;
	volatile int32_t t57 = 157;

	t57 = (x293*((x294+x295)-x296));

	if (t57 != -1438442715) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x297 = 1U;
	int32_t x298 = INT32_MIN;
	uint64_t x299 = UINT64_MAX;
	static int8_t x300 = -1;
	volatile uint64_t t58 = 167LLU;

	t58 = (x297*((x298+x299)-x300));

	if (t58 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x301 = -1;
	static int64_t x302 = 3104LL;
	int8_t x303 = INT8_MIN;
	uint8_t x304 = UINT8_MAX;
	int64_t t59 = 131670539631815LL;

	t59 = (x301*((x302+x303)-x304));

	if (t59 != -2721LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x310 = 225878589403385307LLU;
	static int8_t x311 = INT8_MAX;
	volatile uint64_t t60 = 935529842LLU;

	t60 = (x309*((x310+x311)-x312));

	if (t60 != 14306804890208003738LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x317 = INT32_MIN;
	uint8_t x318 = 1U;
	volatile int64_t x319 = -1LL;
	int8_t x320 = INT8_MIN;
	static int64_t t61 = -189063689909996LL;

	t61 = (x317*((x318+x319)-x320));

	if (t61 != -274877906944LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x330 = INT32_MIN;
	int8_t x332 = 2;

	t62 = (x329*((x330+x331)-x332));

	if (t62 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x345 = UINT64_MAX;
	static int32_t x346 = -1;
	static int64_t x347 = -1LL;
	int32_t x348 = INT32_MIN;

	t63 = (x345*((x346+x347)-x348));

	if (t63 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x353 = 14268U;
	int16_t x355 = -1;
	int32_t t64 = 225710;

	t64 = (x353*((x354+x355)-x356));

	if (t64 != -1826304) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x357 = -1;
	static uint64_t x358 = UINT64_MAX;
	int64_t x359 = INT64_MAX;
	static uint64_t x360 = UINT64_MAX;
	uint64_t t65 = 922781691617659135LLU;

	t65 = (x357*((x358+x359)-x360));

	if (t65 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x361 = 0;
	static int8_t x363 = INT8_MIN;
	volatile int32_t t66 = -105;

	t66 = (x361*((x362+x363)-x364));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x369 = -1;
	uint16_t x370 = 3U;

	t67 = (x369*((x370+x371)-x372));

	if (t67 != -3LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x373 = INT32_MAX;
	static int8_t x374 = -1;
	static uint16_t x375 = 9U;
	uint32_t x376 = 10273418U;
	uint32_t t68 = 6739201U;

	t68 = (x373*((x374+x375)-x376));

	if (t68 != 10273410U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x377 = 126866502LLU;
	volatile uint16_t x378 = 216U;
	uint64_t x379 = 105LLU;
	static int64_t x380 = 1LL;

	t69 = (x377*((x378+x379)-x380));

	if (t69 != 40597280640LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x397 = 12U;
	volatile int16_t x398 = -3510;
	volatile uint16_t x399 = 0U;
	int16_t x400 = INT16_MIN;
	volatile int32_t t70 = -61432;

	t70 = (x397*((x398+x399)-x400));

	if (t70 != 351096) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x403 = 4;
	uint64_t x404 = 3587LLU;

	t71 = (x401*((x402+x403)-x404));

	if (t71 != 232895LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x405 = -485;
	int64_t x406 = -54706377LL;
	int8_t x408 = 0;
	volatile int64_t t72 = -58532045LL;

	t72 = (x405*((x406+x407)-x408));

	if (t72 != 26532591875LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x417 = UINT8_MAX;
	uint32_t x418 = UINT32_MAX;
	volatile int64_t x420 = -19LL;
	volatile int64_t t73 = -434690684057LL;

	t73 = (x417*((x418+x419)-x420));

	if (t73 != 1095216664815LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x421 = 18088U;
	volatile uint32_t x422 = UINT32_MAX;
	static uint16_t x423 = 481U;
	static uint32_t x424 = UINT32_MAX;

	t74 = (x421*((x422+x423)-x424));

	if (t74 != 8700328U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x426 = -263704232336LL;
	int16_t x427 = INT16_MIN;
	volatile int8_t x428 = INT8_MAX;
	volatile int64_t t75 = -2845381192748535537LL;

	t75 = (x425*((x426+x427)-x428));

	if (t75 != 263704265231LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x429 = INT8_MIN;
	uint64_t x430 = UINT64_MAX;
	int64_t x432 = -195705LL;

	t76 = (x429*((x430+x431)-x432));

	if (t76 != 18446744073684500992LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x453 = 3U;
	volatile uint32_t x454 = 3122U;
	int64_t x455 = -1LL;
	volatile int8_t x456 = -1;
	static int64_t t77 = -5969066581410LL;

	t77 = (x453*((x454+x455)-x456));

	if (t77 != 9366LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x457 = 80302143790LLU;
	static uint64_t x458 = 676937761853004294LLU;
	volatile uint64_t x459 = 197LLU;
	int32_t x460 = INT32_MIN;
	volatile uint64_t t78 = 81473282762324529LLU;

	t78 = (x457*((x458+x459)-x460));

	if (t78 != 14113075510187017082LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x462 = 37;
	uint8_t x464 = 0U;
	volatile int64_t t79 = -66840627950938614LL;

	t79 = (x461*((x462+x463)-x464));

	if (t79 != -162LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x473 = 0LL;
	int8_t x474 = INT8_MIN;
	uint32_t x475 = UINT32_MAX;
	static int32_t x476 = -1;
	int64_t t80 = 806LL;

	t80 = (x473*((x474+x475)-x476));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x481 = INT8_MIN;
	uint32_t x483 = 6153U;
	uint8_t x484 = 12U;
	uint32_t t81 = 262087924U;

	t81 = (x481*((x482+x483)-x484));

	if (t81 != 4294180864U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x485 = 54926814189001642LLU;
	int16_t x486 = 5;
	int16_t x487 = 9;
	uint64_t t82 = 6151261381423299LLU;

	t82 = (x485*((x486+x487)-x488));

	if (t82 != 3963396115403118320LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x493 = UINT32_MAX;
	int64_t x494 = INT64_MAX;
	uint64_t x495 = UINT64_MAX;
	uint64_t t83 = 15732021925119LLU;

	t83 = (x493*((x494+x495)-x496));

	if (t83 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x513 = 16U;
	static int32_t x514 = -1382092;
	uint32_t x515 = UINT32_MAX;
	int8_t x516 = INT8_MAX;
	volatile uint32_t t84 = 147596289U;

	t84 = (x513*((x514+x515)-x516));

	if (t84 != 4272851776U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x529 = 2U;
	int8_t x530 = 1;
	uint32_t x531 = 0U;
	int16_t x532 = INT16_MIN;
	uint32_t t85 = 25982226U;

	t85 = (x529*((x530+x531)-x532));

	if (t85 != 65538U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x533 = 37504266716LLU;
	static int64_t x534 = -82LL;
	uint64_t x535 = UINT64_MAX;
	static int16_t x536 = 15841;
	uint64_t t86 = 6LLU;

	t86 = (x533*((x534+x535)-x536));

	if (t86 != 18446146855766366032LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x541 = 2U;
	volatile int64_t x542 = 16516858480224664LL;
	volatile uint32_t x543 = 249895150U;
	int32_t x544 = INT32_MIN;
	int64_t t87 = 23467486LL;

	t87 = (x541*((x542+x543)-x544));

	if (t87 != 33033721755206924LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x545 = UINT16_MAX;
	volatile int32_t x547 = INT32_MAX;
	int16_t x548 = INT16_MIN;
	uint32_t t88 = 3U;

	t88 = (x545*((x546+x547)-x548));

	if (t88 != 557047U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x561 = 15U;
	volatile int32_t x562 = INT32_MIN;
	uint64_t x563 = 3722722712287035LLU;
	volatile uint64_t x564 = 5083134155LLU;
	uint64_t t89 = 245274171456870470LLU;

	t89 = (x561*((x562+x563)-x564));

	if (t89 != 55840732225038480LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x565 = 180613548U;
	int8_t x566 = 3;
	static int64_t x568 = -1LL;
	int64_t t90 = 244646031070LL;

	t90 = (x565*((x566+x567)-x568));

	if (t90 != 5918886581508LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x569 = INT32_MIN;
	uint32_t x570 = UINT32_MAX;
	volatile int8_t x572 = 2;
	uint32_t t91 = 9U;

	t91 = (x569*((x570+x571)-x572));

	if (t91 != 2147483648U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x573 = 1368124U;
	int64_t x574 = -7076LL;
	static uint64_t x575 = UINT64_MAX;
	int64_t x576 = INT64_MAX;
	volatile uint64_t t92 = 1330153188381295104LLU;

	t92 = (x573*((x574+x575)-x576));

	if (t92 != 18446744064028706192LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x583 = 1790005307U;
	static volatile int64_t x584 = -1LL;
	int64_t t93 = 45528701160417LL;

	t93 = (x581*((x582+x583)-x584));

	if (t93 != -1790005180LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x585 = 16936765497124245LLU;
	int16_t x586 = INT16_MIN;
	int64_t x587 = -41500583438854LL;
	int64_t x588 = INT64_MIN;
	static uint64_t t94 = 535104163586066LLU;

	t94 = (x585*((x586+x587)-x588));

	if (t94 != 15813157027414191234LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x589 = 26U;
	uint8_t x590 = 2U;
	int64_t x591 = -619931648LL;
	int16_t x592 = 12717;
	static int64_t t95 = 1LL;

	t95 = (x589*((x590+x591)-x592));

	if (t95 != -16118553438LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x593 = 258718;
	volatile uint64_t x594 = UINT64_MAX;
	volatile uint16_t x595 = 24124U;
	int16_t x596 = INT16_MIN;
	volatile uint64_t t96 = 13LLU;

	t96 = (x593*((x594+x595)-x596));

	if (t96 != 14718725738LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x597 = 4;
	volatile int8_t x598 = -1;
	int8_t x600 = -1;
	volatile int32_t t97 = 64085717;

	t97 = (x597*((x598+x599)-x600));

	if (t97 != -4) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x601 = 7556577627LLU;
	int8_t x603 = -2;
	int16_t x604 = 1;
	volatile uint64_t t98 = 2614LLU;

	t98 = (x601*((x602+x603)-x604));

	if (t98 != 6521326492101LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x606 = INT64_MIN;
	volatile int64_t x607 = INT64_MAX;
	int64_t t99 = -9LL;

	t99 = (x605*((x606+x607)-x608));

	if (t99 != -127LL) { NG(); } else { ; }
	
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

