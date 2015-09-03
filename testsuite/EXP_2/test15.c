#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = INT32_MIN;
static int64_t x9 = INT64_MAX;
int8_t x13 = -1;
int8_t x16 = -1;
int64_t x21 = -19732415LL;
static int32_t x23 = -2056143;
int32_t x25 = 367;
int64_t x26 = INT64_MAX;
volatile uint64_t x32 = UINT64_MAX;
volatile uint16_t x46 = 321U;
uint64_t x54 = 1744757LLU;
uint32_t x70 = 10198932U;
static volatile int32_t t16 = -14857277;
volatile int64_t t17 = -83957213105LL;
volatile uint8_t x81 = UINT8_MAX;
volatile int64_t t19 = -56407549332411844LL;
uint8_t x97 = 11U;
uint32_t x99 = UINT32_MAX;
static int32_t x100 = INT32_MIN;
int32_t x103 = INT32_MIN;
static uint32_t x106 = 65351U;
int16_t x115 = -761;
int8_t x128 = 1;
volatile uint32_t x143 = UINT32_MAX;
volatile int32_t x145 = INT32_MIN;
static int64_t x156 = -3233590067293405LL;
uint64_t t31 = 992066535LLU;
static int16_t x171 = -1;
static volatile uint32_t t34 = 233U;
volatile uint64_t x185 = UINT64_MAX;
int16_t x190 = -80;
volatile uint32_t x193 = 62989U;
uint16_t x207 = 32U;
uint16_t x209 = 1U;
int64_t x210 = 2917995930LL;
int16_t x213 = INT16_MIN;
uint64_t x215 = 97089491LLU;
uint16_t x217 = 2507U;
volatile int32_t t42 = 28124073;
uint8_t x221 = UINT8_MAX;
volatile int16_t x228 = 8;
uint32_t x236 = 1U;
volatile int16_t x242 = -2;
int64_t x246 = 3497428177811LL;
volatile uint8_t x252 = UINT8_MAX;
uint64_t x255 = 8LLU;
int16_t x263 = INT16_MIN;
int32_t x269 = 260832;
uint32_t x276 = 370709447U;
static volatile int8_t x296 = INT8_MIN;
int16_t x299 = INT16_MAX;
static int16_t x313 = INT16_MIN;
int32_t x314 = INT32_MIN;
static uint64_t x315 = 2029932267247772LLU;
volatile uint64_t t62 = 248841LLU;
volatile uint32_t t64 = 87U;
uint64_t t65 = 4LLU;
int64_t x337 = -4LL;
int16_t x343 = INT16_MAX;
static volatile int32_t x346 = -5073199;
static volatile int32_t x362 = INT32_MAX;
int16_t x364 = -1;
volatile int8_t x367 = INT8_MIN;
uint32_t x369 = 17602U;
int8_t x370 = INT8_MIN;
volatile uint64_t x374 = 16140032383971LLU;
uint64_t t74 = 2LLU;
uint8_t x379 = UINT8_MAX;
int64_t x381 = -266473226305LL;
static int8_t x390 = INT8_MIN;
int8_t x391 = INT8_MIN;
volatile int64_t t77 = 1511579252075LL;
int64_t t78 = 10784LL;
int64_t x397 = INT64_MIN;
uint64_t x398 = 279LLU;
uint8_t x400 = 116U;
static int8_t x406 = -1;
int16_t x428 = 1;
int8_t x442 = INT8_MAX;
int64_t x444 = INT64_MAX;
volatile uint32_t t86 = 2049U;
int8_t x449 = INT8_MAX;
int8_t x452 = -1;
int8_t x453 = 1;
uint32_t x455 = UINT32_MAX;
int64_t x458 = -8751126593182LL;
int32_t x472 = -10433;
int8_t x473 = 5;
volatile int64_t x479 = 16LL;
volatile int16_t x480 = -3;
int64_t x505 = -14972LL;
volatile int8_t x507 = INT8_MIN;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = -1;
	static int32_t t0 = -102290267;

	t0 = ((x1-(x2+x3))-x4);

	if (t0 != 2147385346) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int64_t x6 = 749209652LL;
	uint8_t x7 = UINT8_MAX;
	volatile int16_t x8 = INT16_MAX;
	volatile int64_t t1 = -710LL;

	t1 = ((x5-(x6+x7))-x8);

	if (t1 != -749242802LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1304;
	int16_t x11 = INT16_MAX;
	uint8_t x12 = 95U;
	static int64_t t2 = 48113879019LL;

	t2 = ((x9-(x10+x11))-x12);

	if (t2 != 9223372036854744249LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x14 = 412834LLU;
	int8_t x15 = INT8_MIN;
	uint64_t t3 = 430583369LLU;

	t3 = ((x13-(x14+x15))-x16);

	if (t3 != 18446744073709138910LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MIN;
	int8_t x24 = -33;
	static int64_t t4 = 35258LL;

	t4 = ((x21-(x22+x23))-x24);

	if (t4 != -17643471LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x27 = -1LL;
	int16_t x28 = -1;
	volatile int64_t t5 = 7963LL;

	t5 = ((x25-(x26+x27))-x28);

	if (t5 != -9223372036854775438LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x29 = 4216161466875LL;
	static int64_t x30 = -1LL;
	int16_t x31 = INT16_MAX;
	static uint64_t t6 = 1571867282930759LLU;

	t6 = ((x29-(x30+x31))-x32);

	if (t6 != 4216161434110LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = INT64_MAX;
	uint64_t x34 = 1223LLU;
	uint8_t x35 = 28U;
	int32_t x36 = -724;
	uint64_t t7 = 25330714144757LLU;

	t7 = ((x33-(x34+x35))-x36);

	if (t7 != 9223372036854775280LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MAX;
	int64_t x38 = -458057642097LL;
	static int16_t x39 = INT16_MAX;
	uint64_t x40 = 3468823658075945LLU;
	uint64_t t8 = 261974381439355LLU;

	t8 = ((x37-(x38+x39))-x40);

	if (t8 != 18443275708109085128LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -645LL;
	static int64_t x47 = INT64_MIN;
	uint64_t x48 = 0LLU;
	volatile uint64_t t9 = 68LLU;

	t9 = ((x45-(x46+x47))-x48);

	if (t9 != 9223372036854774842LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 1U;
	int32_t x50 = -1;
	int8_t x51 = -1;
	volatile int64_t x52 = -2639092LL;
	static volatile int64_t t10 = -1059LL;

	t10 = ((x49-(x50+x51))-x52);

	if (t10 != 2639095LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x53 = 0U;
	int16_t x55 = -1;
	static int32_t x56 = INT32_MIN;
	volatile uint64_t t11 = 1279871LLU;

	t11 = ((x53-(x54+x55))-x56);

	if (t11 != 2145738892LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = INT8_MIN;
	uint16_t x58 = 6491U;
	volatile uint64_t x59 = 686312557342097LLU;
	int8_t x60 = INT8_MIN;
	volatile uint64_t t12 = 345942765883LLU;

	t12 = ((x57-(x58+x59))-x60);

	if (t12 != 18446057761152203028LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x61 = 4U;
	int64_t x62 = 35699363008LL;
	int8_t x63 = INT8_MIN;
	volatile int8_t x64 = INT8_MIN;
	static int64_t t13 = -1196LL;

	t13 = ((x61-(x62+x63))-x64);

	if (t13 != -35699362748LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MAX;
	int64_t x66 = INT64_MAX;
	static int32_t x67 = -1;
	int16_t x68 = -1;
	volatile int64_t t14 = -1LL;

	t14 = ((x65-(x66+x67))-x68);

	if (t14 != 2LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = -1;
	int32_t x71 = -1;
	volatile uint32_t x72 = UINT32_MAX;
	uint32_t t15 = 6663809U;

	t15 = ((x69-(x70+x71))-x72);

	if (t15 != 4284768365U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 6209190;
	int16_t x74 = INT16_MIN;
	uint16_t x75 = 6U;
	uint16_t x76 = 3U;

	t16 = ((x73-(x74+x75))-x76);

	if (t16 != 6241949) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	static int64_t x78 = 4682500186828866LL;
	int16_t x79 = INT16_MAX;
	static int64_t x80 = INT64_MIN;

	t17 = ((x77-(x78+x79))-x80);

	if (t17 != 9218689534520430527LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x82 = 2482U;
	volatile uint8_t x83 = 116U;
	int16_t x84 = -734;
	static volatile int32_t t18 = -1;

	t18 = ((x81-(x82+x83))-x84);

	if (t18 != -1609) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	int64_t x86 = -1274717525713LL;
	uint32_t x87 = 6U;
	volatile int16_t x88 = INT16_MIN;

	t19 = ((x85-(x86+x87))-x88);

	if (t19 != 1274717558474LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	volatile int8_t x90 = INT8_MAX;
	static int8_t x91 = 6;
	int8_t x92 = INT8_MIN;
	volatile int32_t t20 = -5881;

	t20 = ((x89-(x90+x91))-x92);

	if (t20 != -32773) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = INT64_MIN;
	volatile int64_t t21 = 660791769966140329LL;

	t21 = ((x97-(x98+x99))-x100);

	if (t21 != 9223372034707292172LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x101 = 3LL;
	static uint32_t x102 = 0U;
	uint64_t x104 = 1053315298280LLU;
	static uint64_t t22 = 20LLU;

	t22 = ((x101-(x102+x103))-x104);

	if (t22 != 18446743018246769691LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = UINT64_MAX;
	int16_t x107 = 8;
	int16_t x108 = -56;
	static uint64_t t23 = 4044629LLU;

	t23 = ((x105-(x106+x107))-x108);

	if (t23 != 18446744073709486312LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x113 = 424U;
	static int32_t x114 = INT32_MAX;
	volatile int8_t x116 = INT8_MAX;
	uint32_t t24 = 51789650U;

	t24 = ((x113-(x114+x115))-x116);

	if (t24 != 2147484707U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x117 = -1;
	uint16_t x118 = 1031U;
	uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MIN;
	volatile uint32_t t25 = 0U;

	t25 = ((x117-(x118+x119))-x120);

	if (t25 != 2147482617U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = UINT8_MAX;
	int8_t x126 = -1;
	int8_t x127 = -1;
	volatile int32_t t26 = 20496438;

	t26 = ((x125-(x126+x127))-x128);

	if (t26 != 256) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = 2;
	int32_t x138 = INT32_MAX;
	uint64_t x139 = 2144924808LLU;
	static volatile int8_t x140 = -7;
	volatile uint64_t t27 = 39558330372627LLU;

	t27 = ((x137-(x138+x139))-x140);

	if (t27 != 18446744069417143170LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x141 = INT8_MAX;
	static int8_t x142 = INT8_MAX;
	volatile int16_t x144 = INT16_MIN;
	uint32_t t28 = 7531U;

	t28 = ((x141-(x142+x143))-x144);

	if (t28 != 32769U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x146 = INT8_MIN;
	int16_t x147 = -1;
	volatile int32_t x148 = -13722177;
	static int32_t t29 = 104;

	t29 = ((x145-(x146+x147))-x148);

	if (t29 != -2133761342) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = INT32_MIN;
	volatile int16_t x154 = INT16_MIN;
	static uint64_t x155 = UINT64_MAX;
	static volatile uint64_t t30 = 7564033804950LLU;

	t30 = ((x153-(x154+x155))-x156);

	if (t30 != 3233587919842526LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x161 = UINT8_MAX;
	int16_t x162 = 914;
	uint64_t x163 = 1230LLU;
	static int32_t x164 = INT32_MIN;

	t31 = ((x161-(x162+x163))-x164);

	if (t31 != 2147481759LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x169 = UINT32_MAX;
	uint32_t x170 = 5U;
	uint16_t x172 = 5173U;
	static volatile uint32_t t32 = 2029291587U;

	t32 = ((x169-(x170+x171))-x172);

	if (t32 != 4294962118U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x173 = 29739116852476455LLU;
	int16_t x174 = -1;
	int16_t x175 = INT16_MAX;
	static int8_t x176 = INT8_MAX;
	uint64_t t33 = 415218443447012680LLU;

	t33 = ((x173-(x174+x175))-x176);

	if (t33 != 29739116852443562LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x177 = INT8_MIN;
	int8_t x178 = -11;
	uint32_t x179 = 903984U;
	int32_t x180 = INT32_MAX;

	t34 = ((x177-(x178+x179))-x180);

	if (t34 != 2146579548U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x186 = INT16_MIN;
	int8_t x187 = -1;
	volatile int64_t x188 = -1LL;
	uint64_t t35 = 16LLU;

	t35 = ((x185-(x186+x187))-x188);

	if (t35 != 32769LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = -1;
	static int16_t x191 = -1;
	volatile int16_t x192 = INT16_MAX;
	volatile int32_t t36 = -5402426;

	t36 = ((x189-(x190+x191))-x192);

	if (t36 != -32687) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x194 = 55;
	static volatile uint8_t x195 = UINT8_MAX;
	int8_t x196 = INT8_MIN;
	volatile uint32_t t37 = 1442964U;

	t37 = ((x193-(x194+x195))-x196);

	if (t37 != 62807U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x201 = UINT16_MAX;
	static int8_t x202 = -1;
	uint64_t x203 = UINT64_MAX;
	int16_t x204 = 1;
	volatile uint64_t t38 = 1695344877824LLU;

	t38 = ((x201-(x202+x203))-x204);

	if (t38 != 65536LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x205 = -1LL;
	int16_t x206 = INT16_MAX;
	int16_t x208 = 1;
	volatile int64_t t39 = 61430260059100LL;

	t39 = ((x205-(x206+x207))-x208);

	if (t39 != -32801LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MIN;
	volatile int64_t t40 = 784682406561546LL;

	t40 = ((x209-(x210+x211))-x212);

	if (t40 != 9223372036084263527LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x214 = UINT8_MAX;
	int8_t x216 = INT8_MIN;
	uint64_t t41 = 1670432148265198LLU;

	t41 = ((x213-(x214+x215))-x216);

	if (t41 != 18446744073612429230LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x218 = UINT8_MAX;
	int8_t x219 = INT8_MIN;
	int8_t x220 = -1;

	t42 = ((x217-(x218+x219))-x220);

	if (t42 != 2381) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MAX;
	static uint32_t x224 = UINT32_MAX;
	uint32_t t43 = 689384U;

	t43 = ((x221-(x222+x223))-x224);

	if (t43 != 4294934786U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x225 = 3165305U;
	int16_t x226 = INT16_MIN;
	volatile int64_t x227 = -1LL;
	static volatile int64_t t44 = -2391146279176LL;

	t44 = ((x225-(x226+x227))-x228);

	if (t44 != 3198066LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x229 = -1LL;
	static int64_t x230 = -1LL;
	int32_t x231 = -7628994;
	uint16_t x232 = 4978U;
	static volatile int64_t t45 = 1486338837359087LL;

	t45 = ((x229-(x230+x231))-x232);

	if (t45 != 7624016LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x233 = 30372311U;
	static int32_t x234 = -138102948;
	int8_t x235 = 19;
	static uint32_t t46 = 2934230U;

	t46 = ((x233-(x234+x235))-x236);

	if (t46 != 168475239U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x237 = INT8_MIN;
	static volatile int64_t x238 = -1LL;
	int32_t x239 = 3;
	static volatile uint8_t x240 = UINT8_MAX;
	int64_t t47 = 6386757508532LL;

	t47 = ((x237-(x238+x239))-x240);

	if (t47 != -385LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = INT32_MIN;
	static int64_t x243 = 701215514LL;
	int64_t x244 = 5LL;
	int64_t t48 = 41647146207229939LL;

	t48 = ((x241-(x242+x243))-x244);

	if (t48 != -2848699165LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = 3;
	int64_t x247 = INT64_MIN;
	volatile int8_t x248 = INT8_MAX;
	volatile int64_t t49 = -3520LL;

	t49 = ((x245-(x246+x247))-x248);

	if (t49 != 9223368539426597873LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = INT64_MAX;
	static volatile int8_t x250 = -2;
	static volatile uint64_t x251 = UINT64_MAX;
	uint64_t t50 = 771LLU;

	t50 = ((x249-(x250+x251))-x252);

	if (t50 != 9223372036854775555LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x253 = UINT64_MAX;
	volatile int8_t x254 = INT8_MAX;
	int16_t x256 = INT16_MAX;
	volatile uint64_t t51 = 217708LLU;

	t51 = ((x253-(x254+x255))-x256);

	if (t51 != 18446744073709518713LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	int16_t x264 = -1;
	int32_t t52 = 3;

	t52 = ((x261-(x262+x263))-x264);

	if (t52 != -2147450751) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x265 = -848879264;
	volatile int8_t x266 = 12;
	static volatile int8_t x267 = INT8_MIN;
	uint16_t x268 = UINT16_MAX;
	int32_t t53 = -918025880;

	t53 = ((x265-(x266+x267))-x268);

	if (t53 != -848944683) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x270 = INT8_MAX;
	uint16_t x271 = 177U;
	int8_t x272 = -1;
	static volatile int32_t t54 = -785021799;

	t54 = ((x269-(x270+x271))-x272);

	if (t54 != 260529) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x273 = INT16_MIN;
	volatile int32_t x274 = 5773053;
	int16_t x275 = INT16_MIN;
	uint32_t t55 = 1163U;

	t55 = ((x273-(x274+x275))-x276);

	if (t55 != 3918484796U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x277 = INT8_MIN;
	static uint32_t x278 = 482506U;
	int8_t x279 = 0;
	int64_t x280 = -3419708070656134LL;
	volatile int64_t t56 = -5585363224LL;

	t56 = ((x277-(x278+x279))-x280);

	if (t56 != 3419712365140796LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x281 = -3;
	volatile uint16_t x282 = 4U;
	int16_t x283 = -36;
	static int8_t x284 = INT8_MIN;
	int32_t t57 = 207;

	t57 = ((x281-(x282+x283))-x284);

	if (t57 != 157) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x289 = UINT64_MAX;
	static volatile int8_t x290 = 2;
	volatile uint32_t x291 = UINT32_MAX;
	uint8_t x292 = 92U;
	volatile uint64_t t58 = 698LLU;

	t58 = ((x289-(x290+x291))-x292);

	if (t58 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x293 = -1LL;
	volatile int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	static int64_t t59 = 3966551277LL;

	t59 = ((x293-(x294+x295))-x296);

	if (t59 != 383LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x297 = 0U;
	int16_t x298 = -811;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t60 = 293087907;

	t60 = ((x297-(x298+x299))-x300);

	if (t60 != 812) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x301 = -1;
	int8_t x302 = INT8_MIN;
	static int8_t x303 = 12;
	static int64_t x304 = 4336510227638LL;
	volatile int64_t t61 = -74785692489LL;

	t61 = ((x301-(x302+x303))-x304);

	if (t61 != -4336510227523LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x316 = INT8_MIN;

	t62 = ((x313-(x314+x315))-x316);

	if (t62 != 18444714143589754852LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x321 = -1;
	int16_t x322 = -4111;
	uint32_t x323 = 2U;
	uint32_t x324 = 310U;
	volatile uint32_t t63 = 3U;

	t63 = ((x321-(x322+x323))-x324);

	if (t63 != 3798U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x325 = 33U;
	int16_t x326 = -1;
	volatile uint8_t x327 = 91U;
	static uint32_t x328 = 141730819U;

	t64 = ((x325-(x326+x327))-x328);

	if (t64 != 4153236420U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x333 = -561351034442708238LL;
	static int32_t x334 = INT32_MIN;
	static uint64_t x335 = 7762391817679844LLU;
	static uint16_t x336 = UINT16_MAX;

	t65 = ((x333-(x334+x335))-x336);

	if (t65 != 17877630649596581647LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x338 = 3;
	static int32_t x339 = -232763039;
	volatile uint8_t x340 = UINT8_MAX;
	volatile int64_t t66 = -2918255LL;

	t66 = ((x337-(x338+x339))-x340);

	if (t66 != 232762777LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x341 = -1LL;
	int16_t x342 = -5;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t67 = 2245267441254LLU;

	t67 = ((x341-(x342+x343))-x344);

	if (t67 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x345 = 77U;
	int16_t x347 = -1;
	uint64_t x348 = 885026516889148LLU;
	volatile uint64_t t68 = 206052281027LLU;

	t68 = ((x345-(x346+x347))-x348);

	if (t68 != 18445859047197735745LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x349 = 9U;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = 36U;
	uint64_t x352 = UINT64_MAX;
	uint64_t t69 = 314967LLU;

	t69 = ((x349-(x350+x351))-x352);

	if (t69 != 2147483622LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = 8940001;
	uint64_t x358 = UINT64_MAX;
	int8_t x359 = -1;
	static int8_t x360 = INT8_MIN;
	volatile uint64_t t70 = 140133639LLU;

	t70 = ((x357-(x358+x359))-x360);

	if (t70 != 8940131LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x361 = -77430;
	int64_t x363 = INT64_MIN;
	static int64_t t71 = -95790LL;

	t71 = ((x361-(x362+x363))-x364);

	if (t71 != 9223372034707214732LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x365 = 1974888829LLU;
	uint32_t x366 = UINT32_MAX;
	uint16_t x368 = 1U;
	static uint64_t t72 = 9523630085LLU;

	t72 = ((x365-(x366+x367))-x368);

	if (t72 != 18446744071389473277LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x371 = -1;
	int32_t x372 = -1911;
	uint32_t t73 = 49U;

	t73 = ((x369-(x370+x371))-x372);

	if (t73 != 19642U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x373 = -17750441;
	uint32_t x375 = 89086120U;
	uint16_t x376 = 1254U;

	t74 = ((x373-(x374+x375))-x376);

	if (t74 != 18446727933570329830LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x377 = INT8_MIN;
	volatile int8_t x378 = -1;
	int16_t x380 = INT16_MIN;
	int32_t t75 = 1;

	t75 = ((x377-(x378+x379))-x380);

	if (t75 != 32386) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x382 = INT64_MAX;
	static int64_t x383 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	volatile int64_t t76 = 1399707LL;

	t76 = ((x381-(x382+x383))-x384);

	if (t76 != -266473193536LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x389 = INT64_MIN;
	int8_t x392 = INT8_MAX;

	t77 = ((x389-(x390+x391))-x392);

	if (t77 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x393 = 40U;
	int16_t x394 = INT16_MAX;
	int64_t x395 = INT64_MIN;
	volatile int64_t x396 = 110274156LL;

	t78 = ((x393-(x394+x395))-x396);

	if (t78 != 9223372036744468925LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x399 = INT64_MIN;
	uint64_t t79 = 52LLU;

	t79 = ((x397-(x398+x399))-x400);

	if (t79 != 18446744073709551221LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x405 = -152;
	volatile uint64_t x407 = UINT64_MAX;
	static int16_t x408 = INT16_MAX;
	volatile uint64_t t80 = 300318779341LLU;

	t80 = ((x405-(x406+x407))-x408);

	if (t80 != 18446744073709518699LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x409 = 148518LL;
	int8_t x410 = INT8_MIN;
	uint16_t x411 = UINT16_MAX;
	volatile int8_t x412 = INT8_MIN;
	volatile int64_t t81 = -90525726494494112LL;

	t81 = ((x409-(x410+x411))-x412);

	if (t81 != 83239LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x417 = -1556709LL;
	int32_t x418 = INT32_MIN;
	uint64_t x419 = 1251453600854LLU;
	static int8_t x420 = INT8_MIN;
	static volatile uint64_t t82 = 178944102179LLU;

	t82 = ((x417-(x418+x419))-x420);

	if (t82 != 18446742824401877829LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x425 = -1LL;
	int32_t x426 = INT32_MIN;
	int64_t x427 = INT64_MAX;
	int64_t t83 = 103904LL;

	t83 = ((x425-(x426+x427))-x428);

	if (t83 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x429 = 1U;
	int16_t x430 = 6979;
	volatile uint16_t x431 = UINT16_MAX;
	int16_t x432 = INT16_MIN;
	volatile int32_t t84 = 196297;

	t84 = ((x429-(x430+x431))-x432);

	if (t84 != -39745) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x441 = 8415;
	uint8_t x443 = 7U;
	int64_t t85 = 55537296415605LL;

	t85 = ((x441-(x442+x443))-x444);

	if (t85 != -9223372036854767526LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x445 = 2U;
	static volatile int16_t x446 = -77;
	uint32_t x447 = 31552224U;
	int8_t x448 = 1;

	t86 = ((x445-(x446+x447))-x448);

	if (t86 != 4263415150U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x450 = 6152U;
	uint64_t x451 = 98709LLU;
	static uint64_t t87 = 1143808186977370753LLU;

	t87 = ((x449-(x450+x451))-x452);

	if (t87 != 18446744073709446883LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x454 = 2;
	uint64_t x456 = 1488446LLU;
	volatile uint64_t t88 = 692700090408573LLU;

	t88 = ((x453-(x454+x455))-x456);

	if (t88 != 18446744073708063170LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x457 = INT16_MIN;
	int16_t x459 = -4;
	static int32_t x460 = -1;
	static int64_t t89 = -1214459009775LL;

	t89 = ((x457-(x458+x459))-x460);

	if (t89 != 8751126560419LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x461 = -83236466LL;
	int16_t x462 = -1446;
	static int64_t x463 = -1LL;
	int8_t x464 = INT8_MIN;
	volatile int64_t t90 = -52180811192109LL;

	t90 = ((x461-(x462+x463))-x464);

	if (t90 != -83234891LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x465 = 56U;
	int32_t x466 = -35825485;
	uint16_t x467 = 1756U;
	int16_t x468 = -1;
	int32_t t91 = -1;

	t91 = ((x465-(x466+x467))-x468);

	if (t91 != 35823786) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x469 = INT32_MIN;
	uint8_t x470 = 44U;
	uint64_t x471 = 74632209367121899LLU;
	volatile uint64_t t92 = 47LLU;

	t92 = ((x469-(x470+x471))-x472);

	if (t92 != 18372111862194956458LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x474 = INT32_MAX;
	int64_t x475 = -1LL;
	uint64_t x476 = 55738420222939137LLU;
	static uint64_t t93 = 382389712720476LLU;

	t93 = ((x473-(x474+x475))-x476);

	if (t93 != 18391005651339128838LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x477 = 5U;
	int32_t x478 = 1961202;
	int64_t t94 = -1042749748739193LL;

	t94 = ((x477-(x478+x479))-x480);

	if (t94 != -1961210LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x481 = 5U;
	uint32_t x482 = 883U;
	int64_t x483 = 6077863706919LL;
	uint8_t x484 = UINT8_MAX;
	int64_t t95 = -5606LL;

	t95 = ((x481-(x482+x483))-x484);

	if (t95 != -6077863708052LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x485 = INT64_MAX;
	static int64_t x486 = 5766737751441868LL;
	int8_t x487 = 0;
	volatile int8_t x488 = 0;
	volatile int64_t t96 = 0LL;

	t96 = ((x485-(x486+x487))-x488);

	if (t96 != 9217605299103333939LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x493 = 100U;
	int32_t x494 = -1;
	uint32_t x495 = 5266768U;
	int16_t x496 = INT16_MIN;
	static uint32_t t97 = 779118401U;

	t97 = ((x493-(x494+x495))-x496);

	if (t97 != 4289733397U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x501 = -1LL;
	uint8_t x502 = UINT8_MAX;
	volatile uint32_t x503 = 705205265U;
	uint64_t x504 = UINT64_MAX;
	static volatile uint64_t t98 = 0LLU;

	t98 = ((x501-(x502+x503))-x504);

	if (t98 != 18446744073004346096LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x506 = UINT8_MAX;
	static int64_t x508 = -1LL;
	int64_t t99 = -1817616LL;

	t99 = ((x505-(x506+x507))-x508);

	if (t99 != -15098LL) { NG(); } else { ; }
	
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

