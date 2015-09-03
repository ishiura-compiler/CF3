#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = 561323;
volatile int64_t t1 = -4055879059338555975LL;
int32_t x12 = 6613427;
static uint32_t x13 = 1173U;
static uint8_t x16 = 113U;
uint32_t x32 = 82948U;
int32_t x33 = 3;
int16_t x34 = INT16_MIN;
volatile int8_t x35 = 4;
int8_t x39 = -2;
int8_t x40 = -14;
int32_t x46 = INT32_MIN;
int32_t x52 = INT32_MIN;
uint64_t t11 = 1077478608946LLU;
static volatile int32_t t12 = 5995470;
int64_t t13 = 14423595LL;
int64_t x66 = -1LL;
volatile int32_t x67 = INT32_MIN;
int32_t x68 = -4029562;
int8_t x70 = INT8_MAX;
int64_t x75 = 0LL;
int64_t t16 = 361LL;
int16_t x80 = INT16_MAX;
uint16_t x93 = UINT16_MAX;
int64_t x97 = INT64_MIN;
uint8_t x98 = UINT8_MAX;
static int16_t x105 = INT16_MIN;
static volatile int64_t x106 = -1LL;
int16_t x108 = 0;
static volatile uint8_t x115 = 15U;
int32_t t23 = INT32_MIN;
static int32_t x128 = INT32_MIN;
static int16_t x132 = -1;
int16_t x133 = -1;
uint8_t x142 = UINT8_MAX;
volatile int8_t x143 = 1;
int32_t x154 = 168294480;
static volatile int32_t x156 = 10902804;
int32_t t32 = -18;
uint64_t x173 = 3849857609LLU;
int16_t x174 = INT16_MAX;
uint32_t x175 = 189502422U;
uint32_t x177 = UINT32_MAX;
volatile int8_t x179 = 7;
volatile uint32_t t36 = UINT32_MAX;
int32_t x184 = INT32_MIN;
static int64_t x196 = -1LL;
int32_t t40 = 27809175;
int8_t x211 = INT8_MIN;
static volatile int32_t x220 = INT32_MIN;
static uint8_t x222 = 27U;
static uint64_t x224 = 12177651775LLU;
volatile int64_t t48 = -92030470457075498LL;
uint32_t x245 = UINT32_MAX;
volatile int16_t x258 = 35;
int32_t x266 = -13;
int16_t x267 = INT16_MIN;
int16_t x272 = INT16_MIN;
static volatile int32_t t55 = 1883;
volatile uint64_t t56 = 2374605LLU;
static uint64_t x277 = UINT64_MAX;
int64_t x280 = INT64_MIN;
volatile int64_t x289 = INT64_MIN;
int64_t t59 = 3058LL;
int8_t x296 = -10;
int32_t x298 = -4331990;
volatile int32_t t61 = -113380;
int32_t t62 = 16755504;
uint8_t x306 = UINT8_MAX;
int64_t x308 = 54656094022LL;
volatile int64_t x309 = INT64_MAX;
volatile int64_t x311 = -6942LL;
volatile int16_t x327 = INT16_MAX;
int8_t x328 = -1;
volatile int32_t x339 = INT32_MAX;
volatile int64_t x355 = INT64_MIN;
uint32_t x356 = UINT32_MAX;
int32_t x361 = -1;
volatile int32_t t77 = 17513902;
int32_t x369 = -1;
int8_t x371 = 4;
int32_t t78 = 75;
int16_t x379 = -11158;
uint64_t t80 = 10995214101547501LLU;
static int16_t x391 = -1;
uint8_t x392 = 6U;
uint64_t x401 = 3929291599608523230LLU;
volatile int32_t x405 = 988314;
static int32_t t87 = -310466358;
int16_t x417 = 11985;
int32_t x419 = 58;
int8_t x425 = INT8_MAX;
int64_t x428 = INT64_MIN;
int32_t x432 = -1;
volatile int32_t t91 = 6557456;
static uint8_t x440 = 0U;
int8_t x450 = INT8_MIN;
volatile int8_t x473 = 4;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static uint8_t x2 = UINT8_MAX;
	static uint16_t x3 = 55U;
	uint64_t x4 = 1287269047297LLU;
	volatile int32_t t0 = -13002;

	t0 = (x1|((x2+x3)<=x4));

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int32_t x7 = -61122630;
	volatile int8_t x8 = -1;

	t1 = (x5|((x6+x7)<=x8));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int16_t x10 = 639;
	int16_t x11 = -7;
	uint64_t t2 = UINT64_MAX;

	t2 = (x9|((x10+x11)<=x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -10;
	static int32_t x15 = INT32_MAX;
	volatile uint32_t t3 = 238030346U;

	t3 = (x13|((x14+x15)<=x16));

	if (t3 != 1173U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 14;
	int16_t x18 = INT16_MIN;
	uint8_t x19 = 4U;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 182385;

	t4 = (x17|((x18+x19)<=x20));

	if (t4 != 14) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile uint16_t x22 = 21967U;
	int8_t x23 = -1;
	static int8_t x24 = INT8_MAX;
	int32_t t5 = -54893;

	t5 = (x21|((x22+x23)<=x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	volatile int32_t x30 = INT32_MIN;
	static volatile int8_t x31 = INT8_MAX;
	static int32_t t6 = 0;

	t6 = (x29|((x30+x31)<=x32));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x36 = INT64_MIN;
	static volatile int32_t t7 = -29233583;

	t7 = (x33|((x34+x35)<=x36));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = 1;
	int64_t x38 = -1LL;
	volatile int32_t t8 = -31008;

	t8 = (x37|((x38+x39)<=x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	uint64_t x47 = 52136920948LLU;
	int64_t x48 = -8178414676397616LL;
	volatile int32_t t9 = -105902800;

	t9 = (x45|((x46+x47)<=x48));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 398401142LLU;
	uint16_t x50 = 0U;
	uint32_t x51 = 1985379416U;
	static volatile uint64_t t10 = 1LLU;

	t10 = (x49|((x50+x51)<=x52));

	if (t10 != 398401143LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 0LLU;
	uint32_t x54 = 5028361U;
	int64_t x55 = 2503855507LL;
	static volatile int16_t x56 = 5330;

	t11 = (x53|((x54+x55)<=x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = 6;
	volatile uint32_t x58 = 1610050789U;
	uint32_t x59 = 0U;
	static int64_t x60 = -1LL;

	t12 = (x57|((x58+x59)<=x60));

	if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = 365068116LL;
	int8_t x62 = -1;
	int32_t x63 = -1;
	uint16_t x64 = UINT16_MAX;

	t13 = (x61|((x62+x63)<=x64));

	if (t13 != 365068117LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MAX;
	volatile int32_t t14 = -2;

	t14 = (x65|((x66+x67)<=x68));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = 5801336601059LL;
	uint32_t x71 = UINT32_MAX;
	int8_t x72 = INT8_MIN;
	int64_t t15 = -8788493578279LL;

	t15 = (x69|((x70+x71)<=x72));

	if (t15 != 5801336601059LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	int16_t x74 = INT16_MAX;
	uint16_t x76 = UINT16_MAX;

	t16 = (x73|((x74+x75)<=x76));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	int8_t x78 = -4;
	static int16_t x79 = -4818;
	static volatile int32_t t17 = 4059680;

	t17 = (x77|((x78+x79)<=x80));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -1LL;
	volatile int16_t x82 = -1;
	int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MAX;
	volatile int64_t t18 = -3517598405LL;

	t18 = (x81|((x82+x83)<=x84));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MIN;
	static volatile uint64_t x91 = 133627949527635LLU;
	uint64_t x92 = UINT64_MAX;
	int64_t t19 = 1011LL;

	t19 = (x89|((x90+x91)<=x92));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x94 = INT32_MAX;
	int8_t x95 = INT8_MIN;
	static int8_t x96 = 1;
	int32_t t20 = 335;

	t20 = (x93|((x94+x95)<=x96));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x99 = INT32_MIN;
	int16_t x100 = -5;
	int64_t t21 = -454LL;

	t21 = (x97|((x98+x99)<=x100));

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x107 = 1;
	int32_t t22 = -15844402;

	t22 = (x105|((x106+x107)<=x108));

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = INT32_MIN;
	int64_t x114 = 939343295LL;
	static int32_t x116 = INT32_MIN;

	t23 = (x113|((x114+x115)<=x116));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x117 = INT8_MIN;
	uint64_t x118 = UINT64_MAX;
	static int8_t x119 = INT8_MIN;
	volatile int8_t x120 = INT8_MIN;
	static int32_t t24 = -624;

	t24 = (x117|((x118+x119)<=x120));

	if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 32U;
	int8_t x122 = INT8_MIN;
	uint16_t x123 = 16139U;
	int8_t x124 = INT8_MIN;
	volatile int32_t t25 = 31992293;

	t25 = (x121|((x122+x123)<=x124));

	if (t25 != 32) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = 27681U;
	static uint16_t x126 = UINT16_MAX;
	uint16_t x127 = 1U;
	static int32_t t26 = 5;

	t26 = (x125|((x126+x127)<=x128));

	if (t26 != 27681) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = INT16_MIN;
	volatile uint64_t x130 = UINT64_MAX;
	static volatile int8_t x131 = INT8_MAX;
	int32_t t27 = 37337000;

	t27 = (x129|((x130+x131)<=x132));

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x134 = -571LL;
	int8_t x135 = 1;
	int64_t x136 = INT64_MAX;
	static int32_t t28 = -813940;

	t28 = (x133|((x134+x135)<=x136));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MIN;
	uint16_t x144 = 6U;
	int32_t t29 = -427;

	t29 = (x141|((x142+x143)<=x144));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x145 = 13;
	static volatile uint32_t x146 = 75500U;
	int32_t x147 = INT32_MIN;
	static uint8_t x148 = 57U;
	volatile int32_t t30 = -86080982;

	t30 = (x145|((x146+x147)<=x148));

	if (t30 != 13) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -1LL;
	volatile uint8_t x150 = 3U;
	int64_t x151 = INT64_MIN;
	volatile int16_t x152 = INT16_MIN;
	int64_t t31 = -7663671380LL;

	t31 = (x149|((x150+x151)<=x152));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x153 = INT32_MIN;
	volatile int64_t x155 = INT64_MIN;

	t32 = (x153|((x154+x155)<=x156));

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x157 = UINT8_MAX;
	uint16_t x158 = 2138U;
	volatile int64_t x159 = -149230052716LL;
	volatile uint16_t x160 = UINT16_MAX;
	volatile int32_t t33 = 12;

	t33 = (x157|((x158+x159)<=x160));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = 40U;
	static volatile int8_t x162 = 5;
	static uint32_t x163 = 21U;
	int16_t x164 = INT16_MIN;
	static volatile int32_t t34 = -25904;

	t34 = (x161|((x162+x163)<=x164));

	if (t34 != 41) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x176 = INT64_MAX;
	uint64_t t35 = 90867251LLU;

	t35 = (x173|((x174+x175)<=x176));

	if (t35 != 3849857609LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x178 = 839974305LL;
	static int32_t x180 = INT32_MAX;

	t36 = (x177|((x178+x179)<=x180));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = INT64_MIN;
	static int8_t x183 = 14;
	int32_t t37 = 21;

	t37 = (x181|((x182+x183)<=x184));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	int32_t x187 = -16430979;
	uint16_t x188 = 44U;
	static volatile int32_t t38 = -958;

	t38 = (x185|((x186+x187)<=x188));

	if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x189 = -1;
	int32_t x190 = INT32_MIN;
	static uint32_t x191 = 156744881U;
	uint32_t x192 = 17176U;
	static int32_t t39 = 354;

	t39 = (x189|((x190+x191)<=x192));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x193 = -15;
	uint32_t x194 = 1563547647U;
	uint16_t x195 = UINT16_MAX;

	t40 = (x193|((x194+x195)<=x196));

	if (t40 != -15) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x197 = INT16_MIN;
	int32_t x198 = -267;
	volatile int16_t x199 = -1;
	uint16_t x200 = 5792U;
	int32_t t41 = -613605947;

	t41 = (x197|((x198+x199)<=x200));

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x209 = 3U;
	int16_t x210 = INT16_MIN;
	int8_t x212 = 15;
	int32_t t42 = -14650585;

	t42 = (x209|((x210+x211)<=x212));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = 0;
	int64_t x215 = INT64_MIN;
	uint32_t x216 = 96780U;
	int32_t t43 = -96171;

	t43 = (x213|((x214+x215)<=x216));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x217 = -1;
	static uint32_t x218 = UINT32_MAX;
	int16_t x219 = INT16_MIN;
	static volatile int32_t t44 = 1150728;

	t44 = (x217|((x218+x219)<=x220));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x221 = INT64_MAX;
	static uint32_t x223 = 16U;
	static volatile int64_t t45 = INT64_MAX;

	t45 = (x221|((x222+x223)<=x224));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x225 = -1;
	static int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MAX;
	int32_t t46 = -1;

	t46 = (x225|((x226+x227)<=x228));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x229 = -1;
	int8_t x230 = -1;
	uint8_t x231 = 53U;
	uint8_t x232 = 23U;
	int32_t t47 = 16264;

	t47 = (x229|((x230+x231)<=x232));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = -1LL;
	uint8_t x234 = 13U;
	static int64_t x235 = -1LL;
	static int16_t x236 = INT16_MIN;

	t48 = (x233|((x234+x235)<=x236));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x237 = 302401660LL;
	static uint64_t x238 = 602031LLU;
	static int16_t x239 = -12;
	int64_t x240 = INT64_MIN;
	int64_t t49 = 61004880959708LL;

	t49 = (x237|((x238+x239)<=x240));

	if (t49 != 302401661LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x246 = 17;
	int8_t x247 = INT8_MIN;
	static int32_t x248 = -14;
	uint32_t t50 = UINT32_MAX;

	t50 = (x245|((x246+x247)<=x248));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x249 = -1;
	static int16_t x250 = -978;
	volatile uint16_t x251 = 30681U;
	static uint64_t x252 = 34617LLU;
	static volatile int32_t t51 = -112489391;

	t51 = (x249|((x250+x251)<=x252));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x253 = INT32_MIN;
	int32_t x254 = -31777103;
	int32_t x255 = 90395;
	static int8_t x256 = INT8_MIN;
	int32_t t52 = 30286;

	t52 = (x253|((x254+x255)<=x256));

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = INT16_MAX;
	static volatile int32_t x259 = INT32_MIN;
	int16_t x260 = -43;
	static int32_t t53 = 57;

	t53 = (x257|((x258+x259)<=x260));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x265 = -1;
	static int64_t x268 = -1LL;
	volatile int32_t t54 = -318600028;

	t54 = (x265|((x266+x267)<=x268));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x269 = 26U;
	static int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;

	t55 = (x269|((x270+x271)<=x272));

	if (t55 != 26) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x273 = 128936359LLU;
	int16_t x274 = 239;
	uint32_t x275 = 125170U;
	static int8_t x276 = -1;

	t56 = (x273|((x274+x275)<=x276));

	if (t56 != 128936359LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x278 = INT64_MIN;
	uint64_t x279 = 1721236457LLU;
	uint64_t t57 = UINT64_MAX;

	t57 = (x277|((x278+x279)<=x280));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = INT8_MAX;
	static uint16_t x286 = UINT16_MAX;
	int64_t x287 = -1LL;
	uint64_t x288 = 6229919960472249LLU;
	volatile int32_t t58 = -445178;

	t58 = (x285|((x286+x287)<=x288));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x290 = 22U;
	int8_t x291 = 18;
	uint16_t x292 = 21710U;

	t59 = (x289|((x290+x291)<=x292));

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x293 = INT64_MIN;
	static uint64_t x294 = UINT64_MAX;
	uint32_t x295 = 11U;
	static int64_t t60 = 13LL;

	t60 = (x293|((x294+x295)<=x296));

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = INT8_MAX;

	t61 = (x297|((x298+x299)<=x300));

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x301 = INT16_MIN;
	static uint64_t x302 = UINT64_MAX;
	int16_t x303 = 0;
	int8_t x304 = INT8_MIN;

	t62 = (x301|((x302+x303)<=x304));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x305 = 95;
	int64_t x307 = -1LL;
	int32_t t63 = 120537;

	t63 = (x305|((x306+x307)<=x308));

	if (t63 != 95) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x310 = 872696693106LL;
	uint32_t x312 = 1U;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x309|((x310+x311)<=x312));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x313 = -75674625LL;
	uint32_t x314 = 353U;
	int64_t x315 = INT64_MIN;
	volatile int64_t x316 = INT64_MIN;
	static int64_t t65 = 544LL;

	t65 = (x313|((x314+x315)<=x316));

	if (t65 != -75674625LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x317 = 106861542514LL;
	uint64_t x318 = 577576200375304410LLU;
	int16_t x319 = INT16_MAX;
	volatile uint8_t x320 = 26U;
	volatile int64_t t66 = -37709LL;

	t66 = (x317|((x318+x319)<=x320));

	if (t66 != 106861542514LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x322 = 12U;
	int16_t x323 = INT16_MIN;
	uint32_t x324 = 5U;
	volatile int32_t t67 = INT32_MIN;

	t67 = (x321|((x322+x323)<=x324));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x325 = 70U;
	volatile uint8_t x326 = 12U;
	static volatile int32_t t68 = -1;

	t68 = (x325|((x326+x327)<=x328));

	if (t68 != 70) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = INT64_MIN;
	uint32_t x330 = 1070559U;
	volatile int16_t x331 = -1;
	int8_t x332 = INT8_MIN;
	int64_t t69 = -1315605942708255076LL;

	t69 = (x329|((x330+x331)<=x332));

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = INT64_MIN;
	static uint8_t x334 = UINT8_MAX;
	static uint8_t x335 = 13U;
	int8_t x336 = -1;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x333|((x334+x335)<=x336));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x337 = INT64_MIN;
	int16_t x338 = -1;
	int8_t x340 = 1;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x337|((x338+x339)<=x340));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = INT64_MAX;
	int8_t x342 = -1;
	static uint32_t x343 = 1035325174U;
	int64_t x344 = INT64_MIN;
	int64_t t72 = INT64_MAX;

	t72 = (x341|((x342+x343)<=x344));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x349 = 111531347539250688LLU;
	volatile int16_t x350 = 3;
	int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MAX;
	static volatile uint64_t t73 = 130515600186703LLU;

	t73 = (x349|((x350+x351)<=x352));

	if (t73 != 111531347539250689LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x353 = UINT8_MAX;
	uint64_t x354 = UINT64_MAX;
	volatile int32_t t74 = -1476888;

	t74 = (x353|((x354+x355)<=x356));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x357 = -1;
	int16_t x358 = 10767;
	int16_t x359 = -1;
	uint16_t x360 = UINT16_MAX;
	int32_t t75 = -18559;

	t75 = (x357|((x358+x359)<=x360));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x362 = 78612219286396839LLU;
	int32_t x363 = 1305;
	int64_t x364 = -173LL;
	volatile int32_t t76 = -9474391;

	t76 = (x361|((x362+x363)<=x364));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x365 = -7;
	uint64_t x366 = 3876575849130919LLU;
	int16_t x367 = INT16_MAX;
	static int32_t x368 = INT32_MAX;

	t77 = (x365|((x366+x367)<=x368));

	if (t77 != -7) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x370 = -6;
	uint64_t x372 = 7352537469503241440LLU;

	t78 = (x369|((x370+x371)<=x372));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x373 = 35310066U;
	volatile int32_t x374 = 561573563;
	uint64_t x375 = 361347466LLU;
	int16_t x376 = INT16_MAX;
	static volatile uint32_t t79 = 43946063U;

	t79 = (x373|((x374+x375)<=x376));

	if (t79 != 35310066U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x377 = 393063LLU;
	uint32_t x378 = 22923U;
	int64_t x380 = INT64_MAX;

	t80 = (x377|((x378+x379)<=x380));

	if (t80 != 393063LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x381 = 1192U;
	int64_t x382 = -31625434363740893LL;
	static int16_t x383 = INT16_MAX;
	int64_t x384 = -6145408606078759LL;
	static int32_t t81 = -95319637;

	t81 = (x381|((x382+x383)<=x384));

	if (t81 != 1193) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = -40;
	int32_t x387 = -895;
	uint16_t x388 = UINT16_MAX;
	volatile int64_t t82 = INT64_MAX;

	t82 = (x385|((x386+x387)<=x388));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x389 = 3084410U;
	static volatile uint32_t x390 = UINT32_MAX;
	static volatile uint32_t t83 = 916290U;

	t83 = (x389|((x390+x391)<=x392));

	if (t83 != 3084410U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x393 = -1;
	uint8_t x394 = 104U;
	int16_t x395 = INT16_MIN;
	uint64_t x396 = 26LLU;
	static int32_t t84 = -629517;

	t84 = (x393|((x394+x395)<=x396));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x397 = -1;
	uint16_t x398 = 33U;
	uint16_t x399 = 2803U;
	volatile int32_t x400 = -440961;
	int32_t t85 = -29259;

	t85 = (x397|((x398+x399)<=x400));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x402 = INT8_MIN;
	uint16_t x403 = 0U;
	int64_t x404 = INT64_MIN;
	volatile uint64_t t86 = 13521924917LLU;

	t86 = (x401|((x402+x403)<=x404));

	if (t86 != 3929291599608523230LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x406 = 14U;
	static int32_t x407 = -1;
	uint16_t x408 = 1U;

	t87 = (x405|((x406+x407)<=x408));

	if (t87 != 988314) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x409 = INT32_MAX;
	int8_t x410 = INT8_MAX;
	static int8_t x411 = INT8_MIN;
	volatile uint8_t x412 = 0U;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x409|((x410+x411)<=x412));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x418 = UINT64_MAX;
	volatile int32_t x420 = INT32_MIN;
	int32_t t89 = 57228938;

	t89 = (x417|((x418+x419)<=x420));

	if (t89 != 11985) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x426 = INT8_MAX;
	static volatile int64_t x427 = INT64_MIN;
	volatile int32_t t90 = -12683;

	t90 = (x425|((x426+x427)<=x428));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x429 = INT16_MAX;
	uint8_t x430 = 3U;
	static uint32_t x431 = 47349244U;

	t91 = (x429|((x430+x431)<=x432));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x433 = INT64_MIN;
	int32_t x434 = 52238984;
	int32_t x435 = INT32_MIN;
	static int64_t x436 = 382429561LL;
	int64_t t92 = 8000651512869LL;

	t92 = (x433|((x434+x435)<=x436));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x437 = 1349U;
	static int32_t x438 = 40267771;
	int32_t x439 = -1;
	static volatile int32_t t93 = 107131;

	t93 = (x437|((x438+x439)<=x440));

	if (t93 != 1349) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x445 = UINT8_MAX;
	int16_t x446 = -1;
	static volatile uint32_t x447 = UINT32_MAX;
	uint64_t x448 = 1456711274069LLU;
	static volatile int32_t t94 = 127;

	t94 = (x445|((x446+x447)<=x448));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = -1;
	int16_t x451 = -117;
	int8_t x452 = -1;
	int32_t t95 = 101289;

	t95 = (x449|((x450+x451)<=x452));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x457 = INT8_MIN;
	static volatile int8_t x458 = -1;
	int16_t x459 = -1;
	static volatile int64_t x460 = -1100LL;
	volatile int32_t t96 = 33;

	t96 = (x457|((x458+x459)<=x460));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x474 = UINT32_MAX;
	int16_t x475 = -12138;
	static volatile int32_t x476 = 122;
	static int32_t t97 = 1;

	t97 = (x473|((x474+x475)<=x476));

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x477 = -2070;
	uint32_t x478 = 0U;
	volatile uint32_t x479 = 26291U;
	uint64_t x480 = UINT64_MAX;
	volatile int32_t t98 = 282;

	t98 = (x477|((x478+x479)<=x480));

	if (t98 != -2069) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x481 = UINT16_MAX;
	int8_t x482 = -1;
	static int32_t x483 = 392;
	int64_t x484 = -1LL;
	int32_t t99 = -1277;

	t99 = (x481|((x482+x483)<=x484));

	if (t99 != 65535) { NG(); } else { ; }
	
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

