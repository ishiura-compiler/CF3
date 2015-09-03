#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = -3458;
static int32_t x16 = INT32_MIN;
static int32_t x23 = INT32_MIN;
uint16_t x25 = 224U;
static uint64_t t5 = 1861016LLU;
uint16_t x54 = 175U;
int16_t x59 = 9710;
static int16_t x62 = INT16_MIN;
int16_t x65 = -1;
uint64_t t14 = 14564516927LLU;
int16_t x93 = -10452;
volatile int32_t t17 = 574857573;
static uint16_t x98 = UINT16_MAX;
uint32_t t18 = 2059U;
int8_t x101 = 2;
static int32_t x103 = INT32_MAX;
uint64_t x115 = 23247625934543LLU;
int64_t x121 = 1498LL;
int64_t t22 = 997315LL;
uint32_t x129 = 103U;
volatile uint64_t t25 = 104008530652LLU;
int16_t x145 = INT16_MAX;
volatile uint64_t x146 = 271693292010245121LLU;
int32_t x147 = -1;
static int32_t x150 = INT32_MIN;
int64_t x151 = 122454639LL;
uint16_t x152 = UINT16_MAX;
volatile int64_t t27 = -422656038717676369LL;
int8_t x153 = INT8_MIN;
uint64_t x154 = 772257LLU;
int64_t t31 = -19982563LL;
uint32_t x174 = 398387U;
uint64_t t33 = 25173463662134LLU;
static volatile uint16_t x178 = 784U;
volatile int16_t x179 = -5669;
int16_t x198 = -8408;
uint8_t x200 = 11U;
uint16_t x202 = 0U;
int8_t x211 = -1;
volatile int64_t t40 = -15456LL;
static int64_t x218 = INT64_MIN;
volatile int16_t x222 = INT16_MIN;
int8_t x226 = INT8_MIN;
int16_t x227 = -6310;
int16_t x238 = INT16_MAX;
uint8_t x241 = 37U;
int8_t x242 = INT8_MIN;
static uint64_t x244 = UINT64_MAX;
static int64_t x251 = -1LL;
uint64_t x273 = 1444626670735117828LLU;
volatile int16_t x274 = -1;
static int32_t x275 = 1;
uint8_t x282 = 72U;
uint64_t x285 = UINT64_MAX;
volatile int32_t x287 = INT32_MAX;
static volatile uint64_t t54 = 1857965LLU;
static int32_t x296 = INT32_MAX;
int8_t x314 = INT8_MAX;
volatile uint64_t t60 = 11576239LLU;
int8_t x343 = INT8_MIN;
static volatile uint32_t x352 = 430648081U;
static uint64_t t65 = 7942608087242844LLU;
static int16_t x374 = INT16_MAX;
static int8_t x375 = INT8_MIN;
uint32_t t66 = 7585U;
int32_t x379 = INT32_MIN;
volatile int64_t t68 = 282LL;
uint32_t x397 = 264U;
int8_t x399 = INT8_MAX;
uint32_t x421 = UINT32_MAX;
int8_t x433 = -1;
static int32_t x436 = -1;
uint64_t t77 = 26LLU;
uint8_t x447 = 37U;
int16_t x449 = INT16_MAX;
volatile int16_t x451 = INT16_MIN;
static volatile int64_t t80 = -13789LL;
int32_t x472 = INT32_MAX;
int64_t x473 = -287768315022080LL;
int64_t x477 = -1LL;
int32_t x484 = -1;
int32_t x485 = -1;
uint8_t x486 = UINT8_MAX;
uint32_t x493 = 49U;
int64_t t88 = 109833991908LL;
int64_t x509 = -1LL;
int16_t x511 = 13552;
static uint16_t x523 = 11U;
uint16_t x534 = UINT16_MAX;
volatile int8_t x541 = 0;
volatile int32_t t95 = -52721691;
uint32_t x550 = 334762U;
int32_t x551 = -1;
static uint32_t x557 = 5U;
volatile uint32_t t99 = 4092U;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static int8_t x2 = INT8_MAX;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MIN;
	uint64_t t0 = 3420060134889177LLU;

	t0 = ((x1+(x2^x3))*x4);

	if (t0 != 9223372313880166400LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 23U;
	uint8_t x10 = UINT8_MAX;
	int8_t x11 = INT8_MIN;
	static int16_t x12 = 278;

	t1 = ((x9+(x10^x11))*x12);

	if (t1 != -29468) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = UINT32_MAX;
	volatile int8_t x14 = 0;
	static int32_t x15 = INT32_MAX;
	volatile uint32_t t2 = 10859U;

	t2 = ((x13+(x14^x15))*x16);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 30U;
	int64_t x22 = -1LL;
	volatile int16_t x24 = -5;
	int64_t t3 = 42773109LL;

	t3 = ((x21+(x22^x23))*x24);

	if (t3 != -10737418385LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = -1;
	volatile uint8_t x27 = UINT8_MAX;
	static int32_t x28 = -6336;
	volatile int32_t t4 = 1946667;

	t4 = ((x25+(x26^x27))*x28);

	if (t4 != 202752) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	static volatile int64_t x30 = INT64_MIN;
	uint64_t x31 = 3LLU;
	volatile int8_t x32 = INT8_MAX;

	t5 = ((x29+(x30^x31))*x32);

	if (t5 != 9223372036854759933LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = 59767U;
	int32_t x38 = INT32_MIN;
	uint8_t x39 = UINT8_MAX;
	uint64_t x40 = 1092100812868LLU;
	uint64_t t6 = 1878248235LLU;

	t6 = ((x37+(x38^x39))*x40);

	if (t6 != 2597690315414890328LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x45 = -1;
	int16_t x46 = INT16_MAX;
	int16_t x47 = INT16_MAX;
	static int64_t x48 = 25914574919909LL;
	static int64_t t7 = -463266978LL;

	t7 = ((x45+(x46^x47))*x48);

	if (t7 != -25914574919909LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x49 = 36U;
	volatile int32_t x50 = -3;
	uint64_t x51 = 112357378172512LLU;
	int8_t x52 = INT8_MIN;
	uint64_t t8 = 443273LLU;

	t8 = ((x49+(x50^x51))*x52);

	if (t8 != 14381744406077312LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 467079811356LLU;
	int8_t x55 = -11;
	int8_t x56 = -2;
	volatile uint64_t t9 = 437LLU;

	t9 = ((x53+(x54^x55))*x56);

	if (t9 != 18446743139549929236LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 528U;
	uint64_t x58 = UINT64_MAX;
	static volatile int32_t x60 = INT32_MIN;
	uint64_t t10 = 2061461074191642894LLU;

	t10 = ((x57+(x58^x59))*x60);

	if (t10 != 19720342339584LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = 4U;
	int16_t x63 = 36;
	static int8_t x64 = INT8_MIN;
	int32_t t11 = -1039597698;

	t11 = ((x61+(x62^x63))*x64);

	if (t11 != 4189184) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x66 = -1;
	int16_t x67 = INT16_MAX;
	static volatile int16_t x68 = -1;
	int32_t t12 = -654704103;

	t12 = ((x65+(x66^x67))*x68);

	if (t12 != 32769) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = 707489;
	int64_t x70 = -167059982221004LL;
	static int8_t x71 = INT8_MIN;
	int64_t x72 = 14339LL;
	volatile int64_t t13 = 32666371LL;

	t13 = ((x69+(x70^x71))*x72);

	if (t13 != 2395473095211316991LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x77 = 99LLU;
	static uint64_t x78 = 21735LLU;
	int8_t x79 = INT8_MAX;
	int16_t x80 = -3;

	t14 = ((x77+(x78^x79))*x80);

	if (t14 != 18446744073709486351LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = -1LL;
	uint16_t x82 = UINT16_MAX;
	int16_t x83 = -1;
	static int16_t x84 = 1;
	int64_t t15 = 1992281555363LL;

	t15 = ((x81+(x82^x83))*x84);

	if (t15 != -65537LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = INT32_MIN;
	uint16_t x86 = 8U;
	volatile uint32_t x87 = 58U;
	volatile uint64_t x88 = UINT64_MAX;
	volatile uint64_t t16 = 8031032159766349LLU;

	t16 = ((x85+(x86^x87))*x88);

	if (t16 != 18446744071562067918LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = 1U;

	t17 = ((x93+(x94^x95))*x96);

	if (t17 != 2147473068) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x97 = 6584U;
	uint32_t x99 = 199373296U;
	uint8_t x100 = 47U;

	t18 = ((x97+(x98^x99))*x100);

	if (t18 != 782798217U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x102 = -1;
	int32_t x104 = -1;
	int32_t t19 = -247772;

	t19 = ((x101+(x102^x103))*x104);

	if (t19 != 2147483646) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x109 = -1;
	static int8_t x110 = -1;
	int16_t x111 = -1;
	uint16_t x112 = UINT16_MAX;
	static volatile int32_t t20 = 57401;

	t20 = ((x109+(x110^x111))*x112);

	if (t20 != -65535) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MIN;
	static uint8_t x114 = 11U;
	uint16_t x116 = 16042U;
	uint64_t t21 = 407LLU;

	t21 = ((x113+(x114^x115))*x116);

	if (t21 != 372938414716098088LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x122 = 6U;
	int8_t x123 = -1;
	int32_t x124 = -1;

	t22 = ((x121+(x122^x123))*x124);

	if (t22 != -4294968787LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x125 = INT16_MIN;
	int64_t x126 = -1LL;
	volatile int16_t x127 = -7351;
	int16_t x128 = INT16_MIN;
	volatile int64_t t23 = -7LL;

	t23 = ((x125+(x126^x127))*x128);

	if (t23 != 832897024LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x130 = 0U;
	static int8_t x131 = -4;
	int64_t x132 = 1608916073708695LL;
	static volatile int64_t t24 = 19LL;

	t24 = ((x129+(x130^x131))*x132);

	if (t24 != 159282691297160805LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x141 = INT32_MIN;
	uint64_t x142 = 303020523784LLU;
	int32_t x143 = INT32_MAX;
	static int32_t x144 = INT32_MIN;

	t25 = ((x141+(x142^x143))*x144);

	if (t25 != 14318949293703036928LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x148 = 50624566037794323LLU;
	volatile uint64_t t26 = 806357640896LLU;

	t26 = ((x145+(x146^x147))*x148);

	if (t26 != 14172311665851314631LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x149 = -1;

	t27 = ((x149+(x150^x151))*x152);

	if (t27 != -132710276170350LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x155 = 5789433361081LLU;
	static int16_t x156 = INT16_MIN;
	uint64_t t28 = 99314154475168133LLU;

	t28 = ((x153+(x154^x155))*x156);

	if (t28 != 18257035940066492416LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x157 = 20U;
	int64_t x158 = -1248522145LL;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = UINT8_MAX;
	int64_t t29 = 1366835783829428109LL;

	t29 = ((x157+(x158^x159))*x160);

	if (t29 != 318366933645LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x161 = 158876U;
	static uint16_t x162 = 3U;
	uint64_t x163 = UINT64_MAX;
	volatile int32_t x164 = -1;
	uint64_t t30 = 7509438801725328LLU;

	t30 = ((x161+(x162^x163))*x164);

	if (t30 != 18446744073709392744LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x165 = UINT16_MAX;
	uint32_t x166 = UINT32_MAX;
	int64_t x167 = -1LL;
	int16_t x168 = -1;

	t31 = ((x165+(x166^x167))*x168);

	if (t31 != 4294901761LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x169 = 1U;
	uint16_t x170 = 2U;
	int32_t x171 = -7;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t32 = -28;

	t32 = ((x169+(x170^x171))*x172);

	if (t32 != 512) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;

	t33 = ((x173+(x174^x175))*x176);

	if (t33 != 18446603350010429440LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x177 = -1;
	int8_t x180 = INT8_MIN;
	int32_t t34 = -60660295;

	t34 = ((x177+(x178^x179))*x180);

	if (t34 != 695040) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x181 = 233322;
	uint32_t x182 = 67304339U;
	volatile uint64_t x183 = 906354927820686439LLU;
	int8_t x184 = INT8_MAX;
	uint64_t t35 = 26LLU;

	t35 = ((x181+(x182^x183))*x184);

	if (t35 != 4426611399542988706LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x185 = 17058412U;
	uint16_t x186 = 7U;
	int8_t x187 = INT8_MAX;
	int64_t x188 = -5LL;
	int64_t t36 = 29765LL;

	t36 = ((x185+(x186^x187))*x188);

	if (t36 != -85292660LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x197 = -117723990847141491LL;
	volatile int32_t x199 = INT32_MAX;
	volatile int64_t t37 = -4017563321LL;

	t37 = ((x197+(x198^x199))*x200);

	if (t37 != -1294963922940784052LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = INT8_MIN;
	int32_t x203 = -1;
	uint8_t x204 = UINT8_MAX;
	int32_t t38 = -5;

	t38 = ((x201+(x202^x203))*x204);

	if (t38 != -32895) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x205 = INT8_MAX;
	int64_t x206 = -9337755305LL;
	int32_t x207 = 194;
	int16_t x208 = -84;
	int64_t t39 = 24036LL;

	t39 = ((x205+(x206^x207))*x208);

	if (t39 != 784371429744LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x209 = -788549055889LL;
	int64_t x210 = -1LL;
	int16_t x212 = INT16_MIN;

	t40 = ((x209+(x210^x211))*x212);

	if (t40 != 25839175463370752LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x213 = 1371U;
	int16_t x214 = -203;
	int8_t x215 = 15;
	int16_t x216 = -6720;
	volatile int32_t t41 = -58;

	t41 = ((x213+(x214^x215))*x216);

	if (t41 != -7882560) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x217 = -50;
	uint16_t x219 = 18917U;
	static volatile uint64_t x220 = 56848LLU;
	static uint64_t t42 = 3LLU;

	t42 = ((x217+(x218^x219))*x220);

	if (t42 != 1072551216LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x221 = 17U;
	int64_t x223 = -2894055078812795LL;
	int8_t x224 = 11;
	int64_t t43 = 377434158459677041LL;

	t43 = ((x221+(x222^x223))*x224);

	if (t43 != 31834605866780530LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x225 = 125LL;
	int8_t x228 = INT8_MAX;
	int64_t t44 = 3191879870419246LL;

	t44 = ((x225+(x226^x227))*x228);

	if (t44 != 823849LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x233 = 2268LLU;
	uint8_t x234 = 43U;
	int64_t x235 = 40583770LL;
	uint64_t x236 = UINT64_MAX;
	static uint64_t t45 = 55042337LLU;

	t45 = ((x233+(x234^x235))*x236);

	if (t45 != 18446744073668965555LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x237 = -21;
	int8_t x239 = INT8_MAX;
	volatile uint64_t x240 = 1759849638103931LLU;
	volatile uint64_t t46 = 712998147881616LLU;

	t46 = ((x237+(x238^x239))*x240);

	if (t46 != 2064303124183470441LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x243 = INT64_MAX;
	static volatile uint64_t t47 = 1677265986LLU;

	t47 = ((x241+(x242^x243))*x244);

	if (t47 != 9223372036854775644LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x249 = 107824LL;
	int32_t x250 = 47883;
	int64_t x252 = -2454LL;
	volatile int64_t t48 = 4474907LL;

	t48 = ((x249+(x250^x251))*x252);

	if (t48 != -147092760LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x253 = 4316U;
	static volatile uint64_t x254 = 1393446771664769LLU;
	int8_t x255 = 0;
	int8_t x256 = INT8_MAX;
	uint64_t t49 = 11861597461919LLU;

	t49 = ((x253+(x254^x255))*x256);

	if (t49 != 176967740001973795LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x261 = -1;
	int64_t x262 = 4534LL;
	uint32_t x263 = 3542U;
	uint16_t x264 = 7U;
	int64_t t50 = -241296262140LL;

	t50 = ((x261+(x262^x263))*x264);

	if (t50 != 50841LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x269 = 1U;
	int16_t x270 = -937;
	volatile int8_t x271 = INT8_MIN;
	volatile uint32_t x272 = 179U;
	uint32_t t51 = 0U;

	t51 = ((x269+(x270^x271))*x272);

	if (t51 != 176136U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x276 = -1;
	uint64_t t52 = 73431917442LLU;

	t52 = ((x273+(x274^x275))*x276);

	if (t52 != 17002117402974433790LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x281 = 67323784U;
	uint8_t x283 = UINT8_MAX;
	int8_t x284 = INT8_MIN;
	volatile uint32_t t53 = 122325661U;

	t53 = ((x281+(x282^x283))*x284);

	if (t53 != 4267434112U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x286 = 4U;
	static uint8_t x288 = UINT8_MAX;

	t54 = ((x285+(x286^x287))*x288);

	if (t54 != 547608328710LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x293 = 2109096LL;
	volatile uint32_t x294 = 7U;
	uint64_t x295 = 1LLU;
	uint64_t t55 = 19324271386LLU;

	t55 = ((x293+(x294^x295))*x296);

	if (t55 != 4529262054854994LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x297 = 9U;
	static int8_t x298 = 1;
	uint16_t x299 = 6U;
	volatile int16_t x300 = INT16_MIN;
	static int32_t t56 = -248;

	t56 = ((x297+(x298^x299))*x300);

	if (t56 != -524288) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x301 = UINT64_MAX;
	volatile int64_t x302 = INT64_MAX;
	int64_t x303 = INT64_MIN;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t57 = 380094450319LLU;

	t57 = ((x301+(x302^x303))*x304);

	if (t57 != 65536LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x313 = INT8_MAX;
	int32_t x315 = -1;
	int16_t x316 = -1;
	volatile int32_t t58 = 613;

	t58 = ((x313+(x314^x315))*x316);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x325 = 0;
	uint64_t x326 = 441629LLU;
	uint32_t x327 = 57402873U;
	static int32_t x328 = INT32_MIN;
	uint64_t t59 = 786LLU;

	t59 = ((x325+(x326^x327))*x328);

	if (t59 != 18323268428284035072LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x329 = 7769U;
	static volatile uint64_t x330 = 12107724LLU;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = UINT8_MAX;

	t60 = ((x329+(x330^x331))*x332);

	if (t60 != 18446744070624069211LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x333 = -1;
	int8_t x334 = -1;
	volatile uint32_t x335 = 100398U;
	int8_t x336 = -1;
	uint32_t t61 = 152856U;

	t61 = ((x333+(x334^x335))*x336);

	if (t61 != 100400U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x341 = 5596655U;
	uint8_t x342 = 116U;
	volatile uint32_t x344 = 11420265U;
	uint32_t t62 = 53404U;

	t62 = ((x341+(x342^x343))*x344);

	if (t62 != 1737838619U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x349 = UINT64_MAX;
	uint16_t x350 = UINT16_MAX;
	uint16_t x351 = 2U;
	volatile uint64_t t63 = 29LLU;

	t63 = ((x349+(x350^x351))*x352);

	if (t63 != 28221230044092LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x357 = INT8_MAX;
	int8_t x358 = INT8_MIN;
	static uint32_t x359 = UINT32_MAX;
	uint8_t x360 = UINT8_MAX;
	volatile uint32_t t64 = 1171U;

	t64 = ((x357+(x358^x359))*x360);

	if (t64 != 64770U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = -17522685756157LL;
	static uint64_t x363 = 682467796082208LLU;
	uint16_t x364 = 9U;

	t65 = ((x361+(x362^x363))*x364);

	if (t65 != 18440694274650733627LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x373 = UINT32_MAX;
	uint32_t x376 = UINT32_MAX;

	t66 = ((x373+(x374^x375))*x376);

	if (t66 != 32642U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = -1;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t67 = -21815889;

	t67 = ((x377+(x378^x379))*x380);

	if (t67 != -255) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x381 = INT32_MAX;
	static int64_t x382 = -1LL;
	volatile int16_t x383 = INT16_MIN;
	volatile uint16_t x384 = 7U;

	t68 = ((x381+(x382^x383))*x384);

	if (t68 != 15032614898LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x385 = -1;
	static volatile uint64_t x386 = 15901789161214189LLU;
	uint8_t x387 = 0U;
	int32_t x388 = INT32_MIN;
	volatile uint64_t t69 = 25386830839532LLU;

	t69 = ((x385+(x386^x387))*x388);

	if (t69 != 1792528901910560768LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x393 = 168714LLU;
	uint8_t x394 = UINT8_MAX;
	static int64_t x395 = INT64_MIN;
	int16_t x396 = 0;
	volatile uint64_t t70 = 204LLU;

	t70 = ((x393+(x394^x395))*x396);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x398 = 90025201032008LLU;
	static volatile int8_t x400 = INT8_MIN;
	uint64_t t71 = 10LLU;

	t71 = ((x397+(x398^x399))*x400);

	if (t71 != 18435220847977422976LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x405 = UINT8_MAX;
	int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MAX;
	int64_t x408 = -458819LL;
	int64_t t72 = -468477151LL;

	t72 = ((x405+(x406^x407))*x408);

	if (t72 != -116540026LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x409 = -1153;
	int32_t x410 = 0;
	uint64_t x411 = UINT64_MAX;
	static uint32_t x412 = UINT32_MAX;
	volatile uint64_t t73 = 943876040568191798LLU;

	t73 = ((x409+(x410^x411))*x412);

	if (t73 != 18446739117317293186LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x413 = UINT32_MAX;
	uint32_t x414 = UINT32_MAX;
	static uint8_t x415 = 1U;
	static volatile int16_t x416 = INT16_MAX;
	static volatile uint32_t t74 = 15622562U;

	t74 = ((x413+(x414^x415))*x416);

	if (t74 != 4294868995U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x422 = INT32_MIN;
	uint16_t x423 = 13U;
	int16_t x424 = -930;
	volatile uint32_t t75 = 7U;

	t75 = ((x421+(x422^x423))*x424);

	if (t75 != 4294956136U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x434 = INT32_MIN;
	volatile int64_t x435 = INT64_MAX;
	volatile int64_t t76 = -155832024048673LL;

	t76 = ((x433+(x434^x435))*x436);

	if (t76 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x437 = -1LL;
	static int16_t x438 = -1;
	int8_t x439 = INT8_MIN;
	uint64_t x440 = 1291935434LLU;

	t77 = ((x437+(x438^x439))*x440);

	if (t77 != 162783864684LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x445 = 1754154LLU;
	int32_t x446 = 233545478;
	int16_t x448 = INT16_MIN;
	volatile uint64_t t78 = 45713790211675LLU;

	t78 = ((x445+(x446^x447))*x448);

	if (t78 != 18446736363410259968LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x450 = 86;
	uint64_t x452 = 3096935LLU;
	volatile uint64_t t79 = 6368LLU;

	t79 = ((x449+(x450^x451))*x452);

	if (t79 != 263239475LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x453 = INT32_MIN;
	volatile uint32_t x454 = 152953U;
	static int64_t x455 = -1LL;
	uint16_t x456 = 1U;

	t80 = ((x453+(x454^x455))*x456);

	if (t80 != -2147636602LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x461 = UINT64_MAX;
	int64_t x462 = 3LL;
	volatile uint64_t x463 = UINT64_MAX;
	int16_t x464 = INT16_MIN;
	volatile uint64_t t81 = 69131629161754614LLU;

	t81 = ((x461+(x462^x463))*x464);

	if (t81 != 163840LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x469 = UINT32_MAX;
	int8_t x470 = INT8_MAX;
	static uint16_t x471 = 2583U;
	static uint32_t t82 = 22U;

	t82 = ((x469+(x470^x471))*x472);

	if (t82 != 2147480985U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x474 = INT8_MIN;
	volatile int16_t x475 = INT16_MIN;
	volatile int64_t x476 = -1LL;
	volatile int64_t t83 = 137190639988509933LL;

	t83 = ((x473+(x474^x475))*x476);

	if (t83 != 287768314989440LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x478 = 93U;
	uint16_t x479 = 339U;
	volatile int16_t x480 = -1;
	static volatile int64_t t84 = 11133102852871038LL;

	t84 = ((x477+(x478^x479))*x480);

	if (t84 != -269LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x481 = INT8_MIN;
	int64_t x482 = INT64_MIN;
	uint64_t x483 = 1LLU;
	static volatile uint64_t t85 = 159423643025948597LLU;

	t85 = ((x481+(x482^x483))*x484);

	if (t85 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x487 = -93653697LL;
	int64_t x488 = 3539066435LL;
	int64_t t86 = -1LL;

	t86 = ((x485+(x486^x487))*x488);

	if (t86 != -331446202565856515LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x489 = 6;
	int32_t x490 = INT32_MIN;
	uint32_t x491 = UINT32_MAX;
	static uint8_t x492 = UINT8_MAX;
	uint32_t t87 = 213707629U;

	t87 = ((x489+(x490^x491))*x492);

	if (t87 != 2147484923U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x494 = 1;
	static int16_t x495 = INT16_MIN;
	static int64_t x496 = 1026845986LL;

	t88 = ((x493+(x494^x495))*x496);

	if (t88 != 4410236331551903908LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x497 = INT8_MIN;
	static int8_t x498 = 1;
	int32_t x499 = INT32_MAX;
	static int64_t x500 = -12LL;
	int64_t t89 = 1344017199709290392LL;

	t89 = ((x497+(x498^x499))*x500);

	if (t89 != -25769802216LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x510 = 56399090U;
	volatile int8_t x512 = -1;
	volatile int64_t t90 = 61362889LL;

	t90 = ((x509+(x510^x511))*x512);

	if (t90 != -56401921LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x517 = -6;
	int64_t x518 = -1LL;
	volatile uint64_t x519 = UINT64_MAX;
	int16_t x520 = INT16_MIN;
	volatile uint64_t t91 = 643467612194833LLU;

	t91 = ((x517+(x518^x519))*x520);

	if (t91 != 196608LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x521 = 1;
	uint64_t x522 = UINT64_MAX;
	uint16_t x524 = 29U;
	volatile uint64_t t92 = 4322LLU;

	t92 = ((x521+(x522^x523))*x524);

	if (t92 != 18446744073709551297LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x529 = UINT64_MAX;
	uint32_t x530 = UINT32_MAX;
	int8_t x531 = INT8_MIN;
	int16_t x532 = -1;
	volatile uint64_t t93 = 31LLU;

	t93 = ((x529+(x530^x531))*x532);

	if (t93 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x533 = 2U;
	uint16_t x535 = 1U;
	uint32_t x536 = 2392U;
	uint32_t t94 = 1269U;

	t94 = ((x533+(x534^x535))*x536);

	if (t94 != 156762112U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x542 = 1983U;
	uint8_t x543 = 6U;
	volatile uint16_t x544 = 1U;

	t95 = ((x541+(x542^x543))*x544);

	if (t95 != 1977) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x545 = -2;
	static volatile int16_t x546 = INT16_MAX;
	int8_t x547 = INT8_MIN;
	int8_t x548 = INT8_MAX;
	int32_t t96 = -9;

	t96 = ((x545+(x546^x547))*x548);

	if (t96 != -4145661) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x549 = 433532440U;
	uint64_t x552 = 11219445636081893LLU;
	uint64_t t97 = 401370118975864LLU;

	t97 = ((x549+(x550^x551))*x552);

	if (t97 != 338701913026888577LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x553 = 6591445;
	uint8_t x554 = 82U;
	volatile uint8_t x555 = 1U;
	uint8_t x556 = 27U;
	static int32_t t98 = 52964899;

	t98 = ((x553+(x554^x555))*x556);

	if (t98 != 177971256) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x558 = INT32_MIN;
	int8_t x559 = -1;
	static int16_t x560 = -1;

	t99 = ((x557+(x558^x559))*x560);

	if (t99 != 2147483644U) { NG(); } else { ; }
	
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

