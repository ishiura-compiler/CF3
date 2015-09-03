#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 11;
uint32_t x2 = 3429232U;
uint16_t x3 = 16148U;
static int8_t x4 = 33;
static volatile uint32_t t0 = 5U;
int32_t x12 = INT32_MIN;
int32_t t2 = 92925;
uint64_t t3 = 66718LLU;
static uint32_t x17 = UINT32_MAX;
int8_t x21 = -1;
int32_t x22 = INT32_MAX;
volatile uint16_t x23 = 390U;
int16_t x24 = 12;
int32_t t5 = 25886275;
int8_t x25 = INT8_MIN;
static volatile uint32_t t7 = 26U;
uint64_t x40 = 78LLU;
int8_t x41 = INT8_MIN;
uint32_t x46 = UINT32_MAX;
int16_t x47 = INT16_MIN;
int64_t t11 = 48LL;
static int16_t x57 = INT16_MIN;
static int8_t x68 = INT8_MAX;
volatile uint64_t x100 = 184126LLU;
uint64_t x109 = 287233211542724LLU;
int16_t x113 = INT16_MIN;
int32_t x114 = -398206157;
int32_t x118 = INT32_MIN;
int16_t x123 = 1;
uint16_t x129 = 2U;
int32_t x140 = -29268;
static int16_t x146 = INT16_MIN;
int32_t t29 = -251141017;
volatile int16_t x157 = INT16_MAX;
uint8_t x159 = UINT8_MAX;
uint8_t x160 = UINT8_MAX;
uint8_t x161 = UINT8_MAX;
static int16_t x162 = 73;
int16_t x169 = -1;
int16_t x192 = INT16_MIN;
volatile int32_t t37 = -13457;
uint8_t x208 = 1U;
int64_t x211 = INT64_MIN;
int32_t x212 = -1;
static uint64_t x229 = 3266523187872645155LLU;
volatile uint64_t x231 = UINT64_MAX;
static volatile int8_t x243 = INT8_MIN;
volatile uint32_t t44 = 28335U;
static volatile uint64_t t45 = 966265798926999323LLU;
static int16_t x263 = -1;
volatile int64_t t48 = -40237368772LL;
int32_t x274 = -1;
volatile int8_t x285 = -1;
volatile uint64_t t53 = 2192LLU;
static int32_t x289 = 56637;
volatile uint64_t x292 = 35277809355295715LLU;
int8_t x297 = -1;
int16_t x298 = INT16_MAX;
volatile uint32_t x301 = UINT32_MAX;
uint8_t x313 = UINT8_MAX;
static volatile int16_t x320 = -8865;
static int32_t x325 = 52;
int64_t x326 = INT64_MIN;
volatile uint8_t x337 = 3U;
int8_t x347 = INT8_MIN;
uint32_t x351 = UINT32_MAX;
static volatile uint32_t t66 = 30351U;
volatile int16_t x377 = -1989;
uint64_t x386 = UINT64_MAX;
static int8_t x388 = -1;
uint64_t t74 = 163482885335321468LLU;
volatile int16_t x392 = INT16_MAX;
int8_t x406 = -1;
uint16_t x417 = 11440U;
uint64_t x418 = UINT64_MAX;
int64_t x433 = INT64_MIN;
int32_t x440 = -53183;
int8_t x441 = INT8_MIN;
int64_t x442 = INT64_MIN;
int8_t x450 = INT8_MIN;
int32_t x456 = -9;
int64_t t88 = 111LL;
uint8_t x461 = UINT8_MAX;
int64_t x467 = -139199823LL;
volatile int64_t x480 = INT64_MAX;
static uint16_t x483 = UINT16_MAX;
int8_t x493 = -1;
volatile int8_t x501 = INT8_MAX;
uint32_t x508 = 292045323U;
static int8_t x510 = INT8_MAX;
static volatile uint64_t t98 = 461LLU;


void f0(void) {


	t0 = ((x1&(x2-x3))-x4);

	if (t0 != 4294967271U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static int8_t x6 = 2;
	volatile int16_t x7 = INT16_MIN;
	int8_t x8 = 5;
	static volatile int32_t t1 = -114851;

	t1 = ((x5&(x6-x7))-x8);

	if (t1 != 32765) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -20;
	int8_t x10 = INT8_MIN;
	int8_t x11 = -1;

	t2 = ((x9&(x10-x11))-x12);

	if (t2 != 2147483520) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 17;
	static volatile uint64_t x14 = 4613827811212LLU;
	int32_t x15 = -1;
	int16_t x16 = INT16_MIN;

	t3 = ((x13&(x14-x15))-x16);

	if (t3 != 32769LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 4U;
	int64_t x19 = INT64_MAX;
	int16_t x20 = INT16_MIN;
	int64_t t4 = 2006343892LL;

	t4 = ((x17&(x18-x19))-x20);

	if (t4 != 32773LL) { NG(); } else { ; }
	
}

void f5(void) {


	t5 = ((x21&(x22-x23))-x24);

	if (t5 != 2147483245) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = UINT8_MAX;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t6 = 1128LLU;

	t6 = ((x25&(x26-x27))-x28);

	if (t6 != 384LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 5445U;
	uint32_t x34 = 1872279868U;
	uint8_t x35 = UINT8_MAX;
	volatile uint8_t x36 = UINT8_MAX;

	t7 = ((x33&(x34-x35))-x36);

	if (t7 != 3846U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = UINT32_MAX;
	int64_t x38 = 41121948LL;
	static int8_t x39 = INT8_MIN;
	volatile uint64_t t8 = 223LLU;

	t8 = ((x37&(x38-x39))-x40);

	if (t8 != 41121998LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MAX;
	static volatile uint64_t x43 = UINT64_MAX;
	static int64_t x44 = -1LL;
	volatile uint64_t t9 = 284856408160LLU;

	t9 = ((x41&(x42-x43))-x44);

	if (t9 != 2147483649LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = 2701U;
	uint8_t x48 = UINT8_MAX;
	uint32_t t10 = 1556U;

	t10 = ((x45&(x46-x47))-x48);

	if (t10 != 2446U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -1LL;
	int32_t x54 = INT32_MIN;
	int32_t x55 = -119653470;
	int32_t x56 = INT32_MIN;

	t11 = ((x53&(x54-x55))-x56);

	if (t11 != 119653470LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = -1;
	uint16_t x59 = 184U;
	int32_t x60 = 0;
	volatile int32_t t12 = -13455;

	t12 = ((x57&(x58-x59))-x60);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 1U;
	static int8_t x62 = INT8_MAX;
	int64_t x63 = INT64_MAX;
	int8_t x64 = 61;
	int64_t t13 = 2178602204LL;

	t13 = ((x61&(x62-x63))-x64);

	if (t13 != -61LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -6;
	int16_t x66 = INT16_MIN;
	uint32_t x67 = 3786U;
	static volatile uint32_t t14 = 15745U;

	t14 = ((x65&(x66-x67))-x68);

	if (t14 != 4294930611U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = INT64_MIN;
	volatile uint8_t x70 = 122U;
	int16_t x71 = 1;
	int32_t x72 = INT32_MIN;
	volatile int64_t t15 = 7128LL;

	t15 = ((x69&(x70-x71))-x72);

	if (t15 != 2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x77 = 29765U;
	int16_t x78 = INT16_MIN;
	int16_t x79 = -1;
	static volatile int8_t x80 = -1;
	int32_t t16 = -469726045;

	t16 = ((x77&(x78-x79))-x80);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	volatile uint16_t x82 = 21U;
	int32_t x83 = 6;
	static volatile uint64_t x84 = 1898211LLU;
	volatile uint64_t t17 = 47353LLU;

	t17 = ((x81&(x82-x83))-x84);

	if (t17 != 18446744073707653420LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 11961507U;
	uint8_t x86 = 1U;
	static int64_t x87 = INT64_MAX;
	volatile uint8_t x88 = UINT8_MAX;
	static int64_t t18 = 35057401380056LL;

	t18 = ((x85&(x86-x87))-x88);

	if (t18 != -253LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = INT16_MIN;
	static volatile uint16_t x98 = 0U;
	uint8_t x99 = 37U;
	static uint64_t t19 = 18974170535055546LLU;

	t19 = ((x97&(x98-x99))-x100);

	if (t19 != 18446744073709334722LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x101 = 4U;
	int64_t x102 = -1LL;
	uint16_t x103 = UINT16_MAX;
	int16_t x104 = -1;
	static int64_t t20 = -160711249LL;

	t20 = ((x101&(x102-x103))-x104);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x110 = INT16_MIN;
	int16_t x111 = 1433;
	int8_t x112 = INT8_MIN;
	uint64_t t21 = 117174LLU;

	t21 = ((x109&(x110-x111))-x112);

	if (t21 != 287233211508932LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x115 = 5U;
	int16_t x116 = 11078;
	static int32_t t22 = 85559;

	t22 = ((x113&(x114-x115))-x116);

	if (t22 != -398240582) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x117 = INT16_MIN;
	int8_t x119 = -1;
	static int32_t x120 = INT32_MIN;
	static int32_t t23 = 1;

	t23 = ((x117&(x118-x119))-x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = -1LL;
	int64_t x122 = 41116950087LL;
	int64_t x124 = -1LL;
	volatile int64_t t24 = -1924389543720LL;

	t24 = ((x121&(x122-x123))-x124);

	if (t24 != 41116950087LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x130 = 1U;
	int32_t x131 = -1;
	int8_t x132 = -1;
	volatile int32_t t25 = -6001498;

	t25 = ((x129&(x130-x131))-x132);

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x133 = 23U;
	int8_t x134 = -1;
	uint16_t x135 = 22874U;
	uint32_t x136 = UINT32_MAX;
	static uint32_t t26 = 226700562U;

	t26 = ((x133&(x134-x135))-x136);

	if (t26 != 6U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = -1;
	static volatile uint16_t x138 = 4U;
	int32_t x139 = INT32_MAX;
	int32_t t27 = 2;

	t27 = ((x137&(x138-x139))-x140);

	if (t27 != -2147454375) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = 151;
	int16_t x142 = INT16_MIN;
	volatile uint64_t x143 = 1098569LLU;
	volatile int32_t x144 = INT32_MIN;
	volatile uint64_t t28 = 12LLU;

	t28 = ((x141&(x142-x143))-x144);

	if (t28 != 2147483799LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x145 = INT16_MAX;
	volatile uint16_t x147 = 1397U;
	uint16_t x148 = UINT16_MAX;

	t29 = ((x145&(x146-x147))-x148);

	if (t29 != -34164) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x158 = UINT8_MAX;
	int32_t t30 = -31315387;

	t30 = ((x157&(x158-x159))-x160);

	if (t30 != -255) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x163 = 1994184873451LLU;
	volatile int32_t x164 = 1790668;
	static uint64_t t31 = 7935842503843081LLU;

	t31 = ((x161&(x162-x163))-x164);

	if (t31 != 18446744073707761042LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x170 = 12U;
	uint32_t x171 = 8873783U;
	uint64_t x172 = 218044LLU;
	uint64_t t32 = 4093698947729114LLU;

	t32 = ((x169&(x170-x171))-x172);

	if (t32 != 4285875481LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x177 = INT32_MIN;
	volatile int16_t x178 = INT16_MAX;
	int8_t x179 = INT8_MIN;
	static int64_t x180 = INT64_MAX;
	int64_t t33 = -701016517806380630LL;

	t33 = ((x177&(x178-x179))-x180);

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = 7566519341703LL;
	uint8_t x182 = 73U;
	uint64_t x183 = 6742212486LLU;
	static volatile int64_t x184 = INT64_MAX;
	volatile uint64_t t34 = 45144488503562LLU;

	t34 = ((x181&(x182-x183))-x184);

	if (t34 != 9223379596636979332LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x185 = 104U;
	volatile int32_t x186 = INT32_MAX;
	int8_t x187 = INT8_MAX;
	static int64_t x188 = -97657999196LL;
	volatile int64_t t35 = -4714299LL;

	t35 = ((x185&(x186-x187))-x188);

	if (t35 != 97657999196LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x189 = -146346086546499524LL;
	static uint64_t x190 = 36134373145724439LLU;
	volatile int32_t x191 = -5;
	uint64_t t36 = 10462569LLU;

	t36 = ((x189&(x190-x191))-x192);

	if (t36 != 36028798512168988LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = 4;
	static int8_t x198 = 0;
	static volatile int8_t x199 = -1;
	int8_t x200 = INT8_MIN;

	t37 = ((x197&(x198-x199))-x200);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x205 = 4035U;
	uint8_t x206 = 0U;
	int64_t x207 = -93LL;
	volatile int64_t t38 = -27646LL;

	t38 = ((x205&(x206-x207))-x208);

	if (t38 != 64LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x209 = INT16_MIN;
	uint64_t x210 = 280206LLU;
	volatile uint64_t t39 = 2627LLU;

	t39 = ((x209&(x210-x211))-x212);

	if (t39 != 9223372036855037953LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x217 = UINT8_MAX;
	volatile int64_t x218 = INT64_MIN;
	int32_t x219 = -1494;
	static int32_t x220 = INT32_MAX;
	volatile int64_t t40 = 56964101553252068LL;

	t40 = ((x217&(x218-x219))-x220);

	if (t40 != -2147483433LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x225 = INT32_MIN;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = -1;
	int16_t x228 = -3;
	static uint64_t t41 = 10554185686931LLU;

	t41 = ((x225&(x226-x227))-x228);

	if (t41 != 3LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x230 = INT64_MAX;
	int32_t x232 = -1;
	uint64_t t42 = 0LLU;

	t42 = ((x229&(x230-x231))-x232);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x241 = UINT16_MAX;
	int16_t x242 = -1;
	static int16_t x244 = INT16_MIN;
	int32_t t43 = -432;

	t43 = ((x241&(x242-x243))-x244);

	if (t43 != 32895) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x245 = 50U;
	volatile int8_t x246 = -1;
	int16_t x247 = -3;
	static volatile uint32_t x248 = 700U;

	t44 = ((x245&(x246-x247))-x248);

	if (t44 != 4294966598U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x249 = -46;
	int8_t x250 = INT8_MIN;
	volatile uint64_t x251 = UINT64_MAX;
	volatile int8_t x252 = INT8_MIN;

	t45 = ((x249&(x250-x251))-x252);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x253 = 21U;
	static int32_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int8_t x256 = -2;
	volatile int32_t t46 = -31;

	t46 = ((x253&(x254-x255))-x256);

	if (t46 != 23) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x257 = 183499;
	int16_t x258 = -117;
	int16_t x259 = INT16_MIN;
	static uint8_t x260 = 0U;
	int32_t t47 = -974371;

	t47 = ((x257&(x258-x259))-x260);

	if (t47 != 19595) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x261 = -41768305497LL;
	int64_t x262 = -20872481362151685LL;
	int64_t x264 = INT64_MIN;

	t48 = ((x261&(x262-x263))-x264);

	if (t48 != 9202499552396063908LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x265 = INT32_MIN;
	static int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	int64_t x268 = -1LL;
	volatile int64_t t49 = 94736899LL;

	t49 = ((x265&(x266-x267))-x268);

	if (t49 != -2147483647LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x273 = -1;
	int16_t x275 = -1;
	static uint32_t x276 = 39924870U;
	static uint32_t t50 = 435U;

	t50 = ((x273&(x274-x275))-x276);

	if (t50 != 4255042426U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x277 = -1;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = UINT16_MAX;
	int32_t t51 = 1491;

	t51 = ((x277&(x278-x279))-x280);

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x281 = INT32_MIN;
	int8_t x282 = INT8_MIN;
	static int64_t x283 = -1LL;
	static int8_t x284 = INT8_MIN;
	static int64_t t52 = -52608263LL;

	t52 = ((x281&(x282-x283))-x284);

	if (t52 != -2147483520LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x286 = INT16_MAX;
	uint32_t x287 = UINT32_MAX;
	static uint64_t x288 = UINT64_MAX;

	t53 = ((x285&(x286-x287))-x288);

	if (t53 != 32769LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x290 = INT16_MAX;
	int32_t x291 = -1;
	volatile uint64_t t54 = 34217181053LLU;

	t54 = ((x289&(x290-x291))-x292);

	if (t54 != 18411466264354288669LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x299 = 1023U;
	static int64_t x300 = -1LL;
	volatile int64_t t55 = 18691LL;

	t55 = ((x297&(x298-x299))-x300);

	if (t55 != 31745LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	uint64_t x304 = 11LLU;
	uint64_t t56 = 102853677LLU;

	t56 = ((x301&(x302-x303))-x304);

	if (t56 != 4294967029LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x305 = INT64_MIN;
	uint8_t x306 = 94U;
	static int64_t x307 = -1LL;
	int64_t x308 = 46466142686292149LL;
	volatile int64_t t57 = -117LL;

	t57 = ((x305&(x306-x307))-x308);

	if (t57 != -46466142686292149LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x309 = 3345811136LLU;
	static uint8_t x310 = UINT8_MAX;
	static uint8_t x311 = UINT8_MAX;
	int32_t x312 = INT32_MIN;
	static volatile uint64_t t58 = 2LLU;

	t58 = ((x309&(x310-x311))-x312);

	if (t58 != 2147483648LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x314 = -1;
	volatile int8_t x315 = -58;
	uint32_t x316 = 195646U;
	uint32_t t59 = 1652328U;

	t59 = ((x313&(x314-x315))-x316);

	if (t59 != 4294771707U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x317 = -1;
	int8_t x318 = INT8_MIN;
	static uint32_t x319 = 2965U;
	volatile uint32_t t60 = 53051U;

	t60 = ((x317&(x318-x319))-x320);

	if (t60 != 5772U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x327 = INT16_MIN;
	int16_t x328 = -327;
	volatile int64_t t61 = 15392LL;

	t61 = ((x325&(x326-x327))-x328);

	if (t61 != 327LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x329 = -1;
	uint32_t x330 = 44999U;
	static uint32_t x331 = UINT32_MAX;
	uint8_t x332 = 23U;
	volatile uint32_t t62 = 1784U;

	t62 = ((x329&(x330-x331))-x332);

	if (t62 != 44977U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x338 = 556U;
	uint16_t x339 = 15U;
	int32_t x340 = -1;
	volatile int32_t t63 = 13278278;

	t63 = ((x337&(x338-x339))-x340);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x341 = 1;
	static int8_t x342 = -3;
	uint16_t x343 = 182U;
	int16_t x344 = INT16_MIN;
	volatile int32_t t64 = 222;

	t64 = ((x341&(x342-x343))-x344);

	if (t64 != 32769) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x345 = 1;
	uint8_t x346 = 2U;
	volatile int8_t x348 = -25;
	int32_t t65 = -3833;

	t65 = ((x345&(x346-x347))-x348);

	if (t65 != 25) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x349 = -1;
	int8_t x350 = INT8_MAX;
	static volatile int8_t x352 = -1;

	t66 = ((x349&(x350-x351))-x352);

	if (t66 != 129U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x353 = INT64_MAX;
	uint16_t x354 = 0U;
	volatile uint64_t x355 = 171209LLU;
	int8_t x356 = INT8_MIN;
	volatile uint64_t t67 = 0LLU;

	t67 = ((x353&(x354-x355))-x356);

	if (t67 != 9223372036854604727LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x357 = -136498266093895050LL;
	static int32_t x358 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	static volatile int64_t t68 = -132873781392050LL;

	t68 = ((x357&(x358-x359))-x360);

	if (t68 != -136498267587313664LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = 0;
	int8_t x363 = INT8_MIN;
	int64_t x364 = -778555809596LL;
	static volatile int64_t t69 = 186930254037LL;

	t69 = ((x361&(x362-x363))-x364);

	if (t69 != 778555809596LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x365 = 252785;
	uint32_t x366 = 1441183246U;
	static int16_t x367 = 3243;
	uint8_t x368 = 2U;
	uint32_t t70 = 3607U;

	t70 = ((x365&(x366-x367))-x368);

	if (t70 != 166239U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x373 = UINT16_MAX;
	int8_t x374 = INT8_MIN;
	int32_t x375 = -189764229;
	static int64_t x376 = 119534680LL;
	static volatile int64_t t71 = 14LL;

	t71 = ((x373&(x374-x375))-x376);

	if (t71 != -119497299LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x378 = -1LL;
	int8_t x379 = INT8_MIN;
	int32_t x380 = INT32_MIN;
	int64_t t72 = -1510940930335LL;

	t72 = ((x377&(x378-x379))-x380);

	if (t72 != 2147483707LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x381 = UINT32_MAX;
	int32_t x382 = -227;
	uint16_t x383 = UINT16_MAX;
	static int8_t x384 = INT8_MIN;
	volatile uint32_t t73 = 550530U;

	t73 = ((x381&(x382-x383))-x384);

	if (t73 != 4294901662U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x385 = INT64_MIN;
	int8_t x387 = INT8_MAX;

	t74 = ((x385&(x386-x387))-x388);

	if (t74 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x389 = 108U;
	int16_t x390 = -1;
	int32_t x391 = INT32_MAX;
	volatile int32_t t75 = -7138;

	t75 = ((x389&(x390-x391))-x392);

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x397 = 21U;
	volatile int64_t x398 = -246259LL;
	uint64_t x399 = UINT64_MAX;
	int16_t x400 = INT16_MIN;
	uint64_t t76 = 5614086298342173LLU;

	t76 = ((x397&(x398-x399))-x400);

	if (t76 != 32772LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x401 = INT32_MAX;
	int8_t x402 = -1;
	int16_t x403 = -1;
	uint32_t x404 = 45U;
	uint32_t t77 = 5355U;

	t77 = ((x401&(x402-x403))-x404);

	if (t77 != 4294967251U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x405 = -1;
	int8_t x407 = INT8_MIN;
	int16_t x408 = 150;
	static volatile int32_t t78 = 123;

	t78 = ((x405&(x406-x407))-x408);

	if (t78 != -23) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x409 = 4LLU;
	uint16_t x410 = 2U;
	int16_t x411 = -1;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t79 = 3898595042513161315LLU;

	t79 = ((x409&(x410-x411))-x412);

	if (t79 != 128LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x413 = UINT32_MAX;
	uint32_t x414 = 602939U;
	int8_t x415 = -22;
	int32_t x416 = -1033530;
	uint32_t t80 = 1711U;

	t80 = ((x413&(x414-x415))-x416);

	if (t80 != 1636491U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x419 = -1LL;
	int32_t x420 = 7;
	static uint64_t t81 = 213806LLU;

	t81 = ((x417&(x418-x419))-x420);

	if (t81 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x421 = 45;
	uint8_t x422 = 69U;
	volatile uint16_t x423 = 11U;
	int16_t x424 = INT16_MIN;
	int32_t t82 = -832;

	t82 = ((x421&(x422-x423))-x424);

	if (t82 != 32808) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x425 = 41U;
	static uint16_t x426 = 272U;
	static volatile int8_t x427 = INT8_MIN;
	volatile int8_t x428 = INT8_MIN;
	static int32_t t83 = -418041;

	t83 = ((x425&(x426-x427))-x428);

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x434 = UINT32_MAX;
	uint8_t x435 = 5U;
	int8_t x436 = -2;
	static volatile int64_t t84 = 299087100194585768LL;

	t84 = ((x433&(x434-x435))-x436);

	if (t84 != 2LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x437 = 227346U;
	int16_t x438 = INT16_MIN;
	static uint16_t x439 = 38U;
	uint32_t t85 = 1790396022U;

	t85 = ((x437&(x438-x439))-x440);

	if (t85 != 280529U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x443 = INT16_MIN;
	int16_t x444 = 1;
	volatile int64_t t86 = 1LL;

	t86 = ((x441&(x442-x443))-x444);

	if (t86 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x449 = INT8_MIN;
	int32_t x451 = 415853;
	static uint16_t x452 = 24U;
	volatile int32_t t87 = 184917;

	t87 = ((x449&(x450-x451))-x452);

	if (t87 != -416024) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x453 = INT32_MIN;
	int64_t x454 = -1LL;
	int8_t x455 = INT8_MIN;

	t88 = ((x453&(x454-x455))-x456);

	if (t88 != 9LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x457 = 3866U;
	volatile int32_t x458 = 16278;
	int32_t x459 = -1;
	volatile int64_t x460 = -70934946882224056LL;
	int64_t t89 = -934767134660908LL;

	t89 = ((x457&(x458-x459))-x460);

	if (t89 != 70934946882227914LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x462 = 29424004082717LL;
	volatile int32_t x463 = INT32_MIN;
	volatile int32_t x464 = -1;
	int64_t t90 = 27774184LL;

	t90 = ((x461&(x462-x463))-x464);

	if (t90 != 30LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x465 = 23315U;
	int32_t x466 = -1;
	volatile int16_t x468 = INT16_MIN;
	volatile int64_t t91 = -19120045LL;

	t91 = ((x465&(x466-x467))-x468);

	if (t91 != 33026LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x469 = INT32_MIN;
	uint32_t x470 = 13U;
	uint16_t x471 = 31U;
	int8_t x472 = 30;
	uint32_t t92 = 132103U;

	t92 = ((x469&(x470-x471))-x472);

	if (t92 != 2147483618U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x477 = 54U;
	int8_t x478 = INT8_MAX;
	uint64_t x479 = 1645020381981052810LLU;
	static uint64_t t93 = 30487883LLU;

	t93 = ((x477&(x478-x479))-x480);

	if (t93 != 9223372036854775861LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x481 = -1LL;
	uint8_t x482 = UINT8_MAX;
	volatile int16_t x484 = INT16_MIN;
	int64_t t94 = -7352LL;

	t94 = ((x481&(x482-x483))-x484);

	if (t94 != -32512LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x494 = 2LLU;
	int64_t x495 = -1LL;
	int64_t x496 = INT64_MAX;
	uint64_t t95 = 65LLU;

	t95 = ((x493&(x494-x495))-x496);

	if (t95 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x502 = INT32_MIN;
	uint64_t x503 = 5LLU;
	int32_t x504 = INT32_MIN;
	uint64_t t96 = 37925LLU;

	t96 = ((x501&(x502-x503))-x504);

	if (t96 != 2147483771LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x505 = 10;
	static volatile int16_t x506 = INT16_MIN;
	int32_t x507 = 1;
	uint32_t t97 = 45265883U;

	t97 = ((x505&(x506-x507))-x508);

	if (t97 != 4002921983U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x509 = UINT32_MAX;
	int16_t x511 = INT16_MIN;
	uint64_t x512 = UINT64_MAX;

	t98 = ((x509&(x510-x511))-x512);

	if (t98 != 32896LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x513 = 26093U;
	uint8_t x514 = 4U;
	uint16_t x515 = 3340U;
	int8_t x516 = -1;
	volatile uint32_t t99 = 61988U;

	t99 = ((x513&(x514-x515))-x516);

	if (t99 != 24809U) { NG(); } else { ; }
	
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

