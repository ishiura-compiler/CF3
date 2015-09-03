#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x13 = 2330524942281LLU;
uint16_t x14 = 1U;
int32_t x18 = 6173;
int64_t x20 = 5474583519LL;
volatile int32_t t4 = 7;
static int32_t x32 = INT32_MAX;
int32_t x35 = INT32_MIN;
uint8_t x39 = 0U;
int32_t x45 = 0;
int32_t x46 = INT32_MIN;
static volatile int32_t t9 = -55;
int16_t x52 = INT16_MIN;
int64_t x54 = -1LL;
int16_t x61 = INT16_MIN;
int16_t x63 = INT16_MIN;
uint32_t x66 = UINT32_MAX;
static int32_t x75 = -1;
int64_t t15 = -99017188442LL;
uint32_t x77 = UINT32_MAX;
uint32_t x78 = 461290U;
int32_t x80 = INT32_MIN;
volatile int32_t t18 = -3;
static int64_t x102 = -1LL;
int64_t x103 = INT64_MAX;
volatile uint8_t x108 = 8U;
uint16_t x117 = 3U;
uint8_t x119 = 4U;
static int64_t x120 = INT64_MAX;
uint16_t x128 = 21U;
static uint16_t x131 = 2901U;
static int32_t t24 = 221;
static int8_t x133 = INT8_MIN;
static uint8_t x135 = UINT8_MAX;
static volatile int64_t x143 = INT64_MIN;
volatile int32_t x147 = 535376147;
uint32_t x158 = UINT32_MAX;
int8_t x171 = INT8_MIN;
uint8_t x172 = 15U;
volatile int64_t x173 = -2883LL;
uint64_t x181 = UINT64_MAX;
static uint32_t x186 = 32332U;
static uint8_t x187 = UINT8_MAX;
static uint16_t x190 = UINT16_MAX;
volatile int16_t x197 = -1;
int64_t x201 = INT64_MIN;
uint64_t x202 = 73104662LLU;
static uint64_t x209 = 569442LLU;
static uint64_t x211 = UINT64_MAX;
uint64_t t38 = 31811653595572783LLU;
uint32_t x220 = UINT32_MAX;
int64_t x223 = INT64_MIN;
static volatile int32_t t41 = -1948814;
static volatile uint64_t t42 = 48796LLU;
static uint32_t t43 = 5027U;
static int16_t x252 = -1;
int8_t x253 = INT8_MIN;
volatile uint16_t x254 = 11079U;
int8_t x267 = INT8_MIN;
int8_t x268 = INT8_MAX;
volatile int32_t t46 = -11808;
static volatile uint32_t t47 = 7U;
int32_t x274 = -1;
volatile uint32_t t51 = 7059U;
uint8_t x298 = 41U;
int8_t x302 = INT8_MIN;
static int32_t t55 = 7832;
int8_t x330 = INT8_MIN;
int32_t t57 = -34495;
uint64_t x333 = 1132125LLU;
uint32_t x337 = UINT32_MAX;
int8_t x340 = INT8_MAX;
uint32_t t59 = 15161716U;
int16_t x342 = -6446;
uint8_t x345 = 48U;
uint16_t x346 = 27U;
volatile int16_t x351 = INT16_MAX;
int16_t x358 = 0;
static volatile int8_t x365 = 1;
uint32_t x372 = 0U;
static uint64_t x374 = 3904809033983LLU;
static uint32_t x377 = 15193U;
static volatile int64_t x380 = INT64_MIN;
uint8_t x381 = 0U;
volatile uint32_t x390 = UINT32_MAX;
volatile int16_t x394 = -1;
uint32_t x395 = 748U;
int64_t x404 = INT64_MIN;
volatile int32_t t73 = 26;
static uint64_t x408 = 3197425082510234406LLU;
volatile uint8_t x409 = UINT8_MAX;
static int8_t x410 = -63;
uint8_t x412 = 5U;
volatile int32_t t75 = -14;
static int64_t x416 = INT64_MIN;
uint64_t x421 = 31LLU;
volatile uint32_t t79 = 260729620U;
int64_t x433 = INT64_MIN;
int16_t x438 = -1;
uint64_t t81 = 226934365585LLU;
uint64_t t82 = 212070277011501483LLU;
volatile int64_t x447 = -1LL;
int32_t x465 = -115;
int64_t x467 = INT64_MIN;
int16_t x468 = -13185;
int32_t t87 = -12149;
int16_t x473 = -12460;
static volatile int8_t x475 = 1;
int16_t x484 = -101;
int32_t t91 = -479706415;
int64_t t92 = -61637876765019LL;
volatile int8_t x503 = INT8_MIN;
uint8_t x506 = 125U;
uint32_t x512 = UINT32_MAX;
volatile int16_t x514 = INT16_MIN;
int32_t t96 = 339;
static int16_t x522 = -8042;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	uint16_t x2 = 9U;
	int64_t x3 = INT64_MAX;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 3514;

	t0 = ((x1*x2)&(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MAX;
	volatile int8_t x10 = 28;
	int8_t x11 = -1;
	uint64_t x12 = UINT64_MAX;
	int32_t t1 = -320;

	t1 = ((x9*x10)&(x11<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x15 = 1010U;
	int8_t x16 = 1;
	volatile uint64_t t2 = 0LLU;

	t2 = ((x13*x14)&(x15<x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = 1709LL;
	int16_t x19 = 419;
	volatile int64_t t3 = -720377830LL;

	t3 = ((x17*x18)&(x19<x20));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	static int32_t x22 = -2474109;
	int64_t x23 = INT64_MAX;
	static int16_t x24 = 8488;

	t4 = ((x21*x22)&(x23<x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x29 = -1;
	volatile uint16_t x30 = 16U;
	int8_t x31 = 0;
	volatile int32_t t5 = -10;

	t5 = ((x29*x30)&(x31<x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x33 = 262U;
	uint64_t x34 = UINT64_MAX;
	uint16_t x36 = UINT16_MAX;
	static uint64_t t6 = 6650284322186052059LLU;

	t6 = ((x33*x34)&(x35<x36));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x37 = UINT8_MAX;
	uint16_t x38 = 247U;
	uint8_t x40 = 120U;
	int32_t t7 = 1;

	t7 = ((x37*x38)&(x39<x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	uint16_t x42 = 2419U;
	int16_t x43 = INT16_MIN;
	volatile int8_t x44 = INT8_MIN;
	uint32_t t8 = 1U;

	t8 = ((x41*x42)&(x43<x44));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x47 = INT32_MIN;
	static int64_t x48 = 1266414821LL;

	t9 = ((x45*x46)&(x47<x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = INT16_MIN;
	int64_t x50 = 2377829949LL;
	int8_t x51 = 1;
	int64_t t10 = 2226619083276123LL;

	t10 = ((x49*x50)&(x51<x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = INT8_MIN;
	int32_t x55 = 658;
	int32_t x56 = INT32_MIN;
	int64_t t11 = -288238826911LL;

	t11 = ((x53*x54)&(x55<x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	int16_t x58 = 11993;
	volatile int32_t x59 = INT32_MIN;
	uint16_t x60 = UINT16_MAX;
	int32_t t12 = -1646;

	t12 = ((x57*x58)&(x59<x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = -1;
	uint64_t x64 = 765196652677LLU;
	int32_t t13 = -22977767;

	t13 = ((x61*x62)&(x63<x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = UINT16_MAX;
	uint32_t x67 = UINT32_MAX;
	static uint32_t x68 = UINT32_MAX;
	uint32_t t14 = 260939U;

	t14 = ((x65*x66)&(x67<x68));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 0U;
	int64_t x74 = INT64_MIN;
	uint64_t x76 = 3784358894LLU;

	t15 = ((x73*x74)&(x75<x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x79 = 4251U;
	volatile uint32_t t16 = 207U;

	t16 = ((x77*x78)&(x79<x80));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = -231499763;
	uint32_t x82 = 3U;
	int8_t x83 = INT8_MAX;
	uint32_t x84 = UINT32_MAX;
	uint32_t t17 = 1492666122U;

	t17 = ((x81*x82)&(x83<x84));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = -60;
	int8_t x98 = INT8_MAX;
	int64_t x99 = INT64_MIN;
	int64_t x100 = -14309631654467LL;

	t18 = ((x97*x98)&(x99<x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x101 = INT8_MAX;
	volatile uint8_t x104 = 1U;
	volatile int64_t t19 = -11929855688LL;

	t19 = ((x101*x102)&(x103<x104));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x105 = 1;
	volatile int16_t x106 = -1;
	int8_t x107 = -1;
	int32_t t20 = 216524431;

	t20 = ((x105*x106)&(x107<x108));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = -1;
	int16_t x110 = INT16_MIN;
	uint8_t x111 = 22U;
	int8_t x112 = INT8_MAX;
	volatile int32_t t21 = -18311;

	t21 = ((x109*x110)&(x111<x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x118 = 2;
	int32_t t22 = 50794;

	t22 = ((x117*x118)&(x119<x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x125 = 0U;
	int16_t x126 = INT16_MAX;
	int8_t x127 = INT8_MIN;
	int32_t t23 = 1058745809;

	t23 = ((x125*x126)&(x127<x128));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x129 = -3509;
	int32_t x130 = -1;
	int8_t x132 = 0;

	t24 = ((x129*x130)&(x131<x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x134 = UINT8_MAX;
	uint16_t x136 = 363U;
	volatile int32_t t25 = -983;

	t25 = ((x133*x134)&(x135<x136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x141 = -1;
	static uint64_t x142 = 33913LLU;
	volatile int16_t x144 = -1;
	uint64_t t26 = 61838386LLU;

	t26 = ((x141*x142)&(x143<x144));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x145 = -138LL;
	static volatile int16_t x146 = -1;
	int32_t x148 = INT32_MIN;
	int64_t t27 = 675558954080LL;

	t27 = ((x145*x146)&(x147<x148));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x153 = UINT32_MAX;
	volatile int8_t x154 = 0;
	static int32_t x155 = -251457;
	volatile int32_t x156 = -1;
	static volatile uint32_t t28 = 370279U;

	t28 = ((x153*x154)&(x155<x156));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x157 = -1;
	volatile int8_t x159 = 0;
	int8_t x160 = INT8_MIN;
	uint32_t t29 = 12316554U;

	t29 = ((x157*x158)&(x159<x160));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x165 = INT16_MIN;
	static volatile int64_t x166 = -17806283848LL;
	uint16_t x167 = 10296U;
	static int16_t x168 = -25;
	volatile int64_t t30 = -192632002054225811LL;

	t30 = ((x165*x166)&(x167<x168));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = 1;
	int32_t x170 = -585246;
	volatile int32_t t31 = 40627406;

	t31 = ((x169*x170)&(x171<x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x174 = INT8_MIN;
	static volatile int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MAX;
	int64_t t32 = -2249LL;

	t32 = ((x173*x174)&(x175<x176));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x182 = INT32_MIN;
	int16_t x183 = -1;
	int32_t x184 = INT32_MIN;
	uint64_t t33 = 53238517LLU;

	t33 = ((x181*x182)&(x183<x184));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = -1;
	volatile int32_t x188 = 631800;
	volatile uint32_t t34 = 417052650U;

	t34 = ((x185*x186)&(x187<x188));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x189 = UINT8_MAX;
	static volatile int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	int32_t t35 = -1;

	t35 = ((x189*x190)&(x191<x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x198 = 1U;
	int8_t x199 = -4;
	uint8_t x200 = 6U;
	volatile int32_t t36 = 847099496;

	t36 = ((x197*x198)&(x199<x200));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x203 = INT16_MIN;
	static int64_t x204 = -1LL;
	static volatile uint64_t t37 = 2140561608637327325LLU;

	t37 = ((x201*x202)&(x203<x204));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x210 = INT64_MAX;
	int64_t x212 = INT64_MIN;

	t38 = ((x209*x210)&(x211<x212));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = -1LL;
	static volatile int8_t x218 = -30;
	int64_t x219 = INT64_MIN;
	int64_t t39 = -1293081070LL;

	t39 = ((x217*x218)&(x219<x220));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x221 = INT8_MIN;
	static volatile int16_t x222 = -1;
	int8_t x224 = 1;
	int32_t t40 = 7282;

	t40 = ((x221*x222)&(x223<x224));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x233 = 10072175;
	uint8_t x234 = 72U;
	volatile int32_t x235 = 151;
	int32_t x236 = -6886378;

	t41 = ((x233*x234)&(x235<x236));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x237 = -52;
	uint64_t x238 = 209447761066726LLU;
	int8_t x239 = INT8_MAX;
	static uint64_t x240 = 9371349324LLU;

	t42 = ((x237*x238)&(x239<x240));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x241 = INT8_MIN;
	uint32_t x242 = 35705140U;
	int8_t x243 = -49;
	static int16_t x244 = -1;

	t43 = ((x241*x242)&(x243<x244));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x249 = INT32_MIN;
	uint64_t x250 = UINT64_MAX;
	static uint64_t x251 = 218882LLU;
	static volatile uint64_t t44 = 34756744887LLU;

	t44 = ((x249*x250)&(x251<x252));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x255 = 8843;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t45 = 294;

	t45 = ((x253*x254)&(x255<x256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x265 = -39297;
	volatile int8_t x266 = INT8_MIN;

	t46 = ((x265*x266)&(x267<x268));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x269 = INT32_MAX;
	volatile uint32_t x270 = 67041U;
	int16_t x271 = INT16_MIN;
	volatile uint16_t x272 = 0U;

	t47 = ((x269*x270)&(x271<x272));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x273 = INT16_MIN;
	int16_t x275 = 1;
	uint8_t x276 = 54U;
	int32_t t48 = 2018;

	t48 = ((x273*x274)&(x275<x276));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x281 = -1;
	int8_t x282 = INT8_MAX;
	int8_t x283 = -1;
	int8_t x284 = 22;
	volatile int32_t t49 = 61;

	t49 = ((x281*x282)&(x283<x284));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x285 = 14522743U;
	uint64_t x286 = UINT64_MAX;
	static int32_t x287 = 1969392;
	uint16_t x288 = UINT16_MAX;
	uint64_t t50 = 1994LLU;

	t50 = ((x285*x286)&(x287<x288));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x289 = INT8_MAX;
	uint32_t x290 = 15378255U;
	static int16_t x291 = INT16_MIN;
	int32_t x292 = 15450;

	t51 = ((x289*x290)&(x291<x292));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x297 = 6626U;
	int16_t x299 = 124;
	uint64_t x300 = 835846655389LLU;
	static uint32_t t52 = 1148210U;

	t52 = ((x297*x298)&(x299<x300));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x301 = -1;
	uint8_t x303 = 1U;
	volatile int16_t x304 = INT16_MIN;
	static volatile int32_t t53 = 3446;

	t53 = ((x301*x302)&(x303<x304));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x305 = INT16_MIN;
	volatile uint16_t x306 = 0U;
	volatile uint16_t x307 = 8389U;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t54 = 443;

	t54 = ((x305*x306)&(x307<x308));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x317 = 3U;
	int8_t x318 = -28;
	volatile int64_t x319 = -1LL;
	volatile int8_t x320 = -1;

	t55 = ((x317*x318)&(x319<x320));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x325 = INT16_MAX;
	volatile uint32_t x326 = UINT32_MAX;
	uint16_t x327 = UINT16_MAX;
	int8_t x328 = 1;
	uint32_t t56 = 5638385U;

	t56 = ((x325*x326)&(x327<x328));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x329 = 5U;
	int32_t x331 = INT32_MIN;
	volatile int16_t x332 = 156;

	t57 = ((x329*x330)&(x331<x332));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x334 = INT32_MIN;
	static int8_t x335 = 0;
	int16_t x336 = -1;
	uint64_t t58 = 822516450583473LLU;

	t58 = ((x333*x334)&(x335<x336));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x338 = INT32_MAX;
	int32_t x339 = -1;

	t59 = ((x337*x338)&(x339<x340));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x341 = 1907;
	uint32_t x343 = UINT32_MAX;
	int64_t x344 = -1LL;
	int32_t t60 = -3861;

	t60 = ((x341*x342)&(x343<x344));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x347 = INT32_MAX;
	volatile int32_t x348 = INT32_MAX;
	volatile int32_t t61 = 42531351;

	t61 = ((x345*x346)&(x347<x348));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = 25U;
	int32_t x352 = INT32_MIN;
	int32_t t62 = -80108809;

	t62 = ((x349*x350)&(x351<x352));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x357 = INT64_MIN;
	int8_t x359 = INT8_MAX;
	uint32_t x360 = 29299592U;
	int64_t t63 = -3091605672387LL;

	t63 = ((x357*x358)&(x359<x360));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x361 = 4254514LLU;
	int64_t x362 = INT64_MIN;
	static volatile uint64_t x363 = 379612LLU;
	static uint64_t x364 = 3512LLU;
	volatile uint64_t t64 = 113106905628LLU;

	t64 = ((x361*x362)&(x363<x364));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x366 = -1LL;
	uint32_t x367 = UINT32_MAX;
	uint64_t x368 = 326LLU;
	static int64_t t65 = -341323LL;

	t65 = ((x365*x366)&(x367<x368));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x369 = 4LLU;
	uint32_t x370 = 370002U;
	int16_t x371 = INT16_MIN;
	volatile uint64_t t66 = 31660LLU;

	t66 = ((x369*x370)&(x371<x372));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x373 = INT16_MAX;
	volatile int32_t x375 = INT32_MAX;
	static int32_t x376 = -1;
	static uint64_t t67 = 130913116LLU;

	t67 = ((x373*x374)&(x375<x376));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x378 = INT32_MAX;
	int8_t x379 = -22;
	volatile uint32_t t68 = 5481U;

	t68 = ((x377*x378)&(x379<x380));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x382 = 34632691LLU;
	int16_t x383 = INT16_MAX;
	int64_t x384 = INT64_MAX;
	volatile uint64_t t69 = 4197691LLU;

	t69 = ((x381*x382)&(x383<x384));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x389 = 18682134932LLU;
	static int16_t x391 = INT16_MAX;
	static int32_t x392 = INT32_MIN;
	volatile uint64_t t70 = 93595LLU;

	t70 = ((x389*x390)&(x391<x392));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x393 = 1106;
	static int32_t x396 = -1;
	int32_t t71 = -7606;

	t71 = ((x393*x394)&(x395<x396));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x397 = -1;
	int8_t x398 = INT8_MIN;
	static int16_t x399 = INT16_MAX;
	uint64_t x400 = UINT64_MAX;
	int32_t t72 = -1892;

	t72 = ((x397*x398)&(x399<x400));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x401 = -1;
	uint8_t x402 = 7U;
	static int8_t x403 = INT8_MIN;

	t73 = ((x401*x402)&(x403<x404));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x405 = 1U;
	uint8_t x406 = 9U;
	int16_t x407 = -254;
	volatile int32_t t74 = -99065861;

	t74 = ((x405*x406)&(x407<x408));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x411 = UINT32_MAX;

	t75 = ((x409*x410)&(x411<x412));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x413 = 2U;
	static int8_t x414 = -1;
	int16_t x415 = INT16_MIN;
	volatile int32_t t76 = 8183;

	t76 = ((x413*x414)&(x415<x416));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x422 = INT32_MIN;
	static int8_t x423 = 0;
	static uint16_t x424 = 10U;
	uint64_t t77 = 425359135886LLU;

	t77 = ((x421*x422)&(x423<x424));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x425 = -1;
	volatile int16_t x426 = INT16_MAX;
	static uint16_t x427 = UINT16_MAX;
	uint16_t x428 = 83U;
	int32_t t78 = 49092;

	t78 = ((x425*x426)&(x427<x428));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x429 = 1265U;
	volatile int8_t x430 = 43;
	volatile int32_t x431 = -1;
	uint32_t x432 = UINT32_MAX;

	t79 = ((x429*x430)&(x431<x432));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x434 = UINT64_MAX;
	volatile uint32_t x435 = 28461540U;
	uint64_t x436 = 249899739691247LLU;
	uint64_t t80 = 988635440897LLU;

	t80 = ((x433*x434)&(x435<x436));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x437 = 460LLU;
	int64_t x439 = INT64_MIN;
	volatile int16_t x440 = INT16_MIN;

	t81 = ((x437*x438)&(x439<x440));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x441 = INT64_MAX;
	uint64_t x442 = UINT64_MAX;
	int16_t x443 = 5524;
	int64_t x444 = 3053077150LL;

	t82 = ((x441*x442)&(x443<x444));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x445 = UINT64_MAX;
	static uint64_t x446 = 1385130186984LLU;
	static uint8_t x448 = UINT8_MAX;
	uint64_t t83 = 297734173012685204LLU;

	t83 = ((x445*x446)&(x447<x448));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x449 = -1;
	volatile uint8_t x450 = 11U;
	int64_t x451 = INT64_MIN;
	int16_t x452 = INT16_MIN;
	int32_t t84 = -5210;

	t84 = ((x449*x450)&(x451<x452));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x453 = 1160938469U;
	int8_t x454 = -9;
	uint32_t x455 = 2855U;
	uint32_t x456 = 31129134U;
	uint32_t t85 = 220024222U;

	t85 = ((x453*x454)&(x455<x456));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x461 = 72225625792LLU;
	int8_t x462 = INT8_MIN;
	static volatile uint8_t x463 = 2U;
	volatile int32_t x464 = 786773;
	volatile uint64_t t86 = 4454050518733713171LLU;

	t86 = ((x461*x462)&(x463<x464));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x466 = -4;

	t87 = ((x465*x466)&(x467<x468));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x474 = INT8_MIN;
	int32_t x476 = INT32_MAX;
	volatile int32_t t88 = -1;

	t88 = ((x473*x474)&(x475<x476));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x477 = 0;
	int16_t x478 = INT16_MIN;
	int64_t x479 = 112LL;
	uint32_t x480 = 1227033871U;
	int32_t t89 = -1;

	t89 = ((x477*x478)&(x479<x480));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x481 = 94928LLU;
	int16_t x482 = INT16_MAX;
	int32_t x483 = 47932349;
	volatile uint64_t t90 = 261825674722LLU;

	t90 = ((x481*x482)&(x483<x484));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x485 = INT16_MAX;
	uint8_t x486 = 0U;
	uint8_t x487 = 1U;
	int8_t x488 = -54;

	t91 = ((x485*x486)&(x487<x488));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x489 = INT8_MIN;
	int64_t x490 = -1LL;
	static uint16_t x491 = 17009U;
	int32_t x492 = INT32_MIN;

	t92 = ((x489*x490)&(x491<x492));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x501 = 93116U;
	volatile uint32_t x502 = UINT32_MAX;
	int8_t x504 = -1;
	volatile uint32_t t93 = 62U;

	t93 = ((x501*x502)&(x503<x504));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x505 = INT8_MIN;
	uint32_t x507 = 477U;
	int16_t x508 = -1709;
	volatile int32_t t94 = 1;

	t94 = ((x505*x506)&(x507<x508));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x509 = -1LL;
	uint64_t x510 = UINT64_MAX;
	uint64_t x511 = UINT64_MAX;
	uint64_t t95 = 228413075212LLU;

	t95 = ((x509*x510)&(x511<x512));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x513 = INT8_MAX;
	static int16_t x515 = -1;
	int64_t x516 = -487155527494LL;

	t96 = ((x513*x514)&(x515<x516));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x517 = -1;
	static int16_t x518 = INT16_MIN;
	uint16_t x519 = 386U;
	int8_t x520 = INT8_MIN;
	volatile int32_t t97 = 175324589;

	t97 = ((x517*x518)&(x519<x520));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x521 = -54;
	int32_t x523 = -1;
	int16_t x524 = INT16_MIN;
	static int32_t t98 = 3;

	t98 = ((x521*x522)&(x523<x524));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x525 = -1;
	int8_t x526 = INT8_MIN;
	int8_t x527 = INT8_MIN;
	int64_t x528 = -1LL;
	int32_t t99 = 1;

	t99 = ((x525*x526)&(x527<x528));

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

