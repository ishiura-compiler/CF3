#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x19 = 0;
volatile uint16_t x23 = 8104U;
int8_t x35 = INT8_MAX;
uint16_t x41 = 2026U;
int32_t t6 = 1468;
volatile int32_t t7 = 610398;
int16_t x53 = -4;
volatile int8_t x61 = 1;
volatile int64_t x62 = INT64_MAX;
uint16_t x68 = 153U;
static int8_t x71 = -1;
uint64_t x74 = 1805866731LLU;
static int32_t x75 = INT32_MIN;
uint32_t x79 = UINT32_MAX;
int32_t x80 = 340343;
volatile uint8_t x85 = 1U;
static uint64_t x96 = 38768303LLU;
uint8_t x101 = 2U;
static uint64_t x102 = 1082LLU;
volatile int32_t t17 = 25587;
int64_t x109 = -3031272089LL;
volatile int32_t t19 = -89;
uint16_t x118 = UINT16_MAX;
volatile uint32_t x120 = UINT32_MAX;
volatile int64_t t24 = -30LL;
int8_t x160 = 7;
int8_t x162 = 1;
uint64_t x163 = UINT64_MAX;
int64_t x164 = -1761LL;
int8_t x165 = INT8_MAX;
static volatile uint8_t x168 = 15U;
uint32_t x169 = 225209504U;
int64_t x173 = -1LL;
int32_t x174 = INT32_MIN;
static volatile int32_t t32 = -151799947;
static uint16_t x183 = UINT16_MAX;
static volatile int32_t x190 = INT32_MIN;
static int16_t x196 = INT16_MIN;
int32_t t38 = 3;
uint64_t x210 = 28LLU;
int32_t t41 = 57;
int32_t x219 = -1;
int8_t x242 = INT8_MAX;
int8_t x243 = INT8_MIN;
volatile uint32_t x245 = 207148U;
int16_t x250 = INT16_MAX;
int8_t x254 = -22;
volatile int8_t x272 = INT8_MIN;
int16_t x275 = INT16_MAX;
int64_t x283 = INT64_MIN;
uint8_t x285 = UINT8_MAX;
uint64_t x292 = 6454938LLU;
static uint64_t t57 = 732441521616LLU;
uint32_t x300 = 8735U;
int8_t x328 = 1;
uint16_t x333 = 24U;
volatile int16_t x341 = 1;
static volatile uint8_t x347 = UINT8_MAX;
int32_t x349 = INT32_MIN;
int16_t x351 = -1;
int32_t t71 = -567;
int32_t t72 = 0;
uint64_t x367 = UINT64_MAX;
volatile uint64_t x376 = 1706442136481819902LLU;
int64_t x381 = INT64_MIN;
volatile int16_t x385 = INT16_MIN;
int16_t x390 = INT16_MAX;
static int8_t x391 = INT8_MIN;
static int32_t t79 = -54711;
uint8_t x393 = 15U;
static uint64_t t80 = 1829LLU;
int8_t x406 = INT8_MIN;
int32_t t82 = 58463;
static volatile int64_t x413 = INT64_MIN;
volatile int32_t t83 = -133694;
uint64_t x418 = 1859LLU;
uint64_t x419 = 48120LLU;
uint16_t x425 = UINT16_MAX;
volatile int32_t x437 = INT32_MIN;
int64_t x441 = -367883774LL;
static int64_t x442 = INT64_MIN;
int64_t x443 = -23659608LL;
uint64_t x445 = 703951161179513528LLU;
int16_t x452 = 99;
int16_t x458 = -1;
int8_t x465 = 0;
volatile int8_t x469 = INT8_MIN;
uint16_t x488 = 13U;
int16_t x490 = -1812;


void f0(void) {
	int16_t x5 = -1;
	int16_t x6 = INT16_MAX;
	int64_t x7 = 49961092LL;
	int8_t x8 = 1;
	static volatile int32_t t0 = -36113;

	t0 = ((x5<=(x6-x7))-x8);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = -3;
	int16_t x18 = -1;
	uint16_t x20 = UINT16_MAX;
	int32_t t1 = 1;

	t1 = ((x17<=(x18-x19))-x20);

	if (t1 != -65534) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = -1LL;
	int32_t x22 = -1;
	static int8_t x24 = -1;
	volatile int32_t t2 = 1966143;

	t2 = ((x21<=(x22-x23))-x24);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x29 = INT16_MAX;
	int64_t x30 = INT64_MIN;
	volatile int16_t x31 = INT16_MIN;
	int64_t x32 = 70LL;
	static volatile int64_t t3 = -4191866338731LL;

	t3 = ((x29<=(x30-x31))-x32);

	if (t3 != -70LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x33 = INT32_MIN;
	uint32_t x34 = 128U;
	uint32_t x36 = UINT32_MAX;
	volatile uint32_t t4 = 376U;

	t4 = ((x33<=(x34-x35))-x36);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x37 = 254U;
	volatile int16_t x38 = INT16_MAX;
	uint64_t x39 = 786518LLU;
	int64_t x40 = INT64_MAX;
	int64_t t5 = -105111LL;

	t5 = ((x37<=(x38-x39))-x40);

	if (t5 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x42 = 0U;
	int16_t x43 = INT16_MIN;
	static uint8_t x44 = UINT8_MAX;

	t6 = ((x41<=(x42-x43))-x44);

	if (t6 != -254) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = 1U;
	volatile int32_t x50 = -1;
	static int32_t x51 = INT32_MAX;
	int32_t x52 = -342501494;

	t7 = ((x49<=(x50-x51))-x52);

	if (t7 != 342501494) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x54 = UINT8_MAX;
	volatile uint32_t x55 = 90011U;
	uint8_t x56 = UINT8_MAX;
	int32_t t8 = -4703;

	t8 = ((x53<=(x54-x55))-x56);

	if (t8 != -255) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = -1LL;
	uint32_t x58 = 401U;
	volatile int8_t x59 = INT8_MIN;
	int16_t x60 = -1;
	int32_t t9 = -22;

	t9 = ((x57<=(x58-x59))-x60);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x63 = 461;
	int8_t x64 = INT8_MAX;
	volatile int32_t t10 = -787969898;

	t10 = ((x61<=(x62-x63))-x64);

	if (t10 != -126) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = INT64_MIN;
	uint8_t x66 = 5U;
	static int8_t x67 = -1;
	int32_t t11 = -377;

	t11 = ((x65<=(x66-x67))-x68);

	if (t11 != -152) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x69 = -1;
	int32_t x70 = 0;
	uint8_t x72 = 104U;
	volatile int32_t t12 = -26052;

	t12 = ((x69<=(x70-x71))-x72);

	if (t12 != -103) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = -1LL;
	int8_t x76 = INT8_MIN;
	volatile int32_t t13 = 28881;

	t13 = ((x73<=(x74-x75))-x76);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = 31575510;
	static volatile int64_t x78 = 170LL;
	volatile int32_t t14 = 0;

	t14 = ((x77<=(x78-x79))-x80);

	if (t14 != -340343) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x86 = 126U;
	static int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MIN;
	volatile int32_t t15 = 384;

	t15 = ((x85<=(x86-x87))-x88);

	if (t15 != 129) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = 1319;
	volatile int64_t x94 = INT64_MIN;
	int8_t x95 = INT8_MIN;
	uint64_t t16 = 636910LLU;

	t16 = ((x93<=(x94-x95))-x96);

	if (t16 != 18446744073670783313LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x103 = 24683849LLU;
	int8_t x104 = INT8_MAX;

	t17 = ((x101<=(x102-x103))-x104);

	if (t17 != -126) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x110 = 1;
	int16_t x111 = INT16_MIN;
	int32_t x112 = -1;
	volatile int32_t t18 = 105;

	t18 = ((x109<=(x110-x111))-x112);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x113 = -9240697505760LL;
	int64_t x114 = INT64_MIN;
	int64_t x115 = -1LL;
	static int8_t x116 = INT8_MAX;

	t19 = ((x113<=(x114-x115))-x116);

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = -4038LL;
	int32_t x119 = -1;
	uint32_t t20 = 1U;

	t20 = ((x117<=(x118-x119))-x120);

	if (t20 != 2U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = 2;
	static uint16_t x126 = 14U;
	int8_t x127 = INT8_MAX;
	static int32_t x128 = INT32_MAX;
	int32_t t21 = -1707219;

	t21 = ((x125<=(x126-x127))-x128);

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x129 = INT16_MAX;
	uint32_t x130 = UINT32_MAX;
	int16_t x131 = INT16_MAX;
	volatile uint64_t x132 = 1149240626878360243LLU;
	volatile uint64_t t22 = 89654973981LLU;

	t22 = ((x129<=(x130-x131))-x132);

	if (t22 != 17297503446831191374LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x137 = 0U;
	static int64_t x138 = 33LL;
	volatile int32_t x139 = INT32_MAX;
	int32_t x140 = 4;
	int32_t t23 = 1282333;

	t23 = ((x137<=(x138-x139))-x140);

	if (t23 != -4) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x145 = 48762660U;
	int32_t x146 = INT32_MIN;
	static int32_t x147 = INT32_MIN;
	int64_t x148 = 677308578LL;

	t24 = ((x145<=(x146-x147))-x148);

	if (t24 != -677308578LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x149 = -3466;
	static int16_t x150 = INT16_MAX;
	volatile uint16_t x151 = UINT16_MAX;
	int8_t x152 = 43;
	static int32_t t25 = 18;

	t25 = ((x149<=(x150-x151))-x152);

	if (t25 != -43) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x153 = -75462123;
	int16_t x154 = -1;
	int32_t x155 = -1;
	volatile uint64_t x156 = 42LLU;
	uint64_t t26 = 22774532243965LLU;

	t26 = ((x153<=(x154-x155))-x156);

	if (t26 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x157 = UINT8_MAX;
	int16_t x158 = -1;
	int16_t x159 = 992;
	volatile int32_t t27 = -249574463;

	t27 = ((x157<=(x158-x159))-x160);

	if (t27 != -7) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x161 = UINT16_MAX;
	int64_t t28 = 20203558893LL;

	t28 = ((x161<=(x162-x163))-x164);

	if (t28 != 1761LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x166 = 1356U;
	uint64_t x167 = 172040665932781623LLU;
	int32_t t29 = 8;

	t29 = ((x165<=(x166-x167))-x168);

	if (t29 != -14) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x170 = 3380;
	uint64_t x171 = 163499199502215034LLU;
	static volatile int16_t x172 = 64;
	static volatile int32_t t30 = 161;

	t30 = ((x169<=(x170-x171))-x172);

	if (t30 != -63) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x175 = 2732445U;
	static int16_t x176 = -1945;
	volatile int32_t t31 = -2;

	t31 = ((x173<=(x174-x175))-x176);

	if (t31 != 1946) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x177 = UINT32_MAX;
	volatile int8_t x178 = INT8_MAX;
	int8_t x179 = -1;
	int32_t x180 = INT32_MAX;

	t32 = ((x177<=(x178-x179))-x180);

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x181 = -1LL;
	volatile uint8_t x182 = 15U;
	volatile int8_t x184 = -1;
	volatile int32_t t33 = -76;

	t33 = ((x181<=(x182-x183))-x184);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x185 = INT64_MAX;
	int32_t x186 = INT32_MIN;
	uint16_t x187 = 0U;
	uint16_t x188 = 1U;
	int32_t t34 = -34;

	t34 = ((x185<=(x186-x187))-x188);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = -67689025659187LL;
	volatile int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MAX;
	volatile int64_t t35 = -63540843021LL;

	t35 = ((x189<=(x190-x191))-x192);

	if (t35 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	int32_t t36 = 0;

	t36 = ((x193<=(x194-x195))-x196);

	if (t36 != 32769) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x197 = 181;
	volatile uint16_t x198 = UINT16_MAX;
	uint16_t x199 = UINT16_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t37 = 669881;

	t37 = ((x197<=(x198-x199))-x200);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x201 = 2251U;
	uint16_t x202 = 55U;
	volatile uint32_t x203 = 23713147U;
	volatile uint16_t x204 = UINT16_MAX;

	t38 = ((x201<=(x202-x203))-x204);

	if (t38 != -65534) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = 4;
	int8_t x206 = -3;
	volatile int8_t x207 = INT8_MIN;
	int32_t x208 = -7;
	volatile int32_t t39 = 0;

	t39 = ((x205<=(x206-x207))-x208);

	if (t39 != 8) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x209 = -1LL;
	volatile int16_t x211 = INT16_MIN;
	volatile uint16_t x212 = 5U;
	static volatile int32_t t40 = 474;

	t40 = ((x209<=(x210-x211))-x212);

	if (t40 != -5) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x213 = 1;
	volatile uint32_t x214 = 48U;
	uint16_t x215 = 1U;
	int8_t x216 = -1;

	t41 = ((x213<=(x214-x215))-x216);

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x217 = -148;
	static uint8_t x218 = 11U;
	int8_t x220 = INT8_MAX;
	volatile int32_t t42 = -8;

	t42 = ((x217<=(x218-x219))-x220);

	if (t42 != -126) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x221 = 3U;
	int64_t x222 = -26666265333LL;
	uint32_t x223 = 357079U;
	uint64_t x224 = 411LLU;
	volatile uint64_t t43 = 4098727528098019784LLU;

	t43 = ((x221<=(x222-x223))-x224);

	if (t43 != 18446744073709551205LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x229 = UINT8_MAX;
	uint8_t x230 = UINT8_MAX;
	uint8_t x231 = UINT8_MAX;
	volatile uint32_t x232 = 850U;
	static volatile uint32_t t44 = 16U;

	t44 = ((x229<=(x230-x231))-x232);

	if (t44 != 4294966446U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x233 = INT16_MIN;
	volatile uint32_t x234 = 1499U;
	int16_t x235 = INT16_MAX;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t45 = 27258;

	t45 = ((x233<=(x234-x235))-x236);

	if (t45 != 129) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x241 = INT64_MAX;
	uint8_t x244 = 15U;
	volatile int32_t t46 = 2;

	t46 = ((x241<=(x242-x243))-x244);

	if (t46 != -15) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x246 = -206;
	int8_t x247 = INT8_MAX;
	volatile int8_t x248 = -1;
	volatile int32_t t47 = -28654;

	t47 = ((x245<=(x246-x247))-x248);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = INT64_MIN;
	static uint8_t x251 = 10U;
	volatile int32_t x252 = 18;
	static int32_t t48 = -1879142;

	t48 = ((x249<=(x250-x251))-x252);

	if (t48 != -17) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x253 = 7U;
	static uint64_t x255 = UINT64_MAX;
	volatile int16_t x256 = INT16_MAX;
	volatile int32_t t49 = -56197227;

	t49 = ((x253<=(x254-x255))-x256);

	if (t49 != -32766) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x261 = 5756U;
	volatile int16_t x262 = -7227;
	uint8_t x263 = UINT8_MAX;
	static int8_t x264 = INT8_MIN;
	int32_t t50 = 0;

	t50 = ((x261<=(x262-x263))-x264);

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x265 = -1LL;
	uint64_t x266 = UINT64_MAX;
	uint64_t x267 = 28LLU;
	int32_t x268 = INT32_MAX;
	int32_t t51 = -1821;

	t51 = ((x265<=(x266-x267))-x268);

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x269 = 1979451081LLU;
	int8_t x270 = INT8_MIN;
	int32_t x271 = 1;
	volatile int32_t t52 = -14562574;

	t52 = ((x269<=(x270-x271))-x272);

	if (t52 != 129) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = 18453;
	int16_t x274 = INT16_MIN;
	uint64_t x276 = 3298LLU;
	static uint64_t t53 = 84LLU;

	t53 = ((x273<=(x274-x275))-x276);

	if (t53 != 18446744073709548318LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x277 = 3U;
	int16_t x278 = INT16_MAX;
	static int8_t x279 = INT8_MAX;
	int16_t x280 = -1;
	volatile int32_t t54 = 1048180;

	t54 = ((x277<=(x278-x279))-x280);

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x281 = -1;
	int64_t x282 = INT64_MIN;
	int16_t x284 = -1;
	int32_t t55 = -925917878;

	t55 = ((x281<=(x282-x283))-x284);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x286 = 494U;
	volatile uint64_t x287 = 289200615LLU;
	int64_t x288 = -1836006626931502257LL;
	static int64_t t56 = -55537191419930LL;

	t56 = ((x285<=(x286-x287))-x288);

	if (t56 != 1836006626931502258LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x289 = 1329541804996LLU;
	uint64_t x290 = 1751335878LLU;
	int16_t x291 = -1;

	t57 = ((x289<=(x290-x291))-x292);

	if (t57 != 18446744073703096678LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x293 = -1;
	int8_t x294 = 1;
	int32_t x295 = 122525;
	int8_t x296 = -1;
	volatile int32_t t58 = -5245;

	t58 = ((x293<=(x294-x295))-x296);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x297 = INT8_MIN;
	volatile int32_t x298 = INT32_MIN;
	static int16_t x299 = -1;
	uint32_t t59 = 16318349U;

	t59 = ((x297<=(x298-x299))-x300);

	if (t59 != 4294958561U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x301 = 7U;
	volatile int16_t x302 = INT16_MIN;
	uint64_t x303 = UINT64_MAX;
	static int32_t x304 = -1;
	volatile int32_t t60 = -3379;

	t60 = ((x301<=(x302-x303))-x304);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x305 = 27;
	volatile uint32_t x306 = 3681321U;
	uint64_t x307 = 884178385LLU;
	int32_t x308 = 30353301;
	int32_t t61 = -400698528;

	t61 = ((x305<=(x306-x307))-x308);

	if (t61 != -30353300) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x313 = INT8_MIN;
	int16_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	static uint8_t x316 = 2U;
	int32_t t62 = 467759217;

	t62 = ((x313<=(x314-x315))-x316);

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x317 = -1LL;
	int64_t x318 = INT64_MIN;
	static int16_t x319 = INT16_MIN;
	uint32_t x320 = 273824U;
	static volatile uint32_t t63 = 364795608U;

	t63 = ((x317<=(x318-x319))-x320);

	if (t63 != 4294693472U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x325 = INT32_MAX;
	int8_t x326 = INT8_MIN;
	int8_t x327 = INT8_MIN;
	volatile int32_t t64 = -256748742;

	t64 = ((x325<=(x326-x327))-x328);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x329 = 954;
	int32_t x330 = INT32_MIN;
	int8_t x331 = -36;
	static int8_t x332 = -6;
	static volatile int32_t t65 = 6303;

	t65 = ((x329<=(x330-x331))-x332);

	if (t65 != 6) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x334 = -6;
	int16_t x335 = INT16_MIN;
	int64_t x336 = -45195854743748316LL;
	volatile int64_t t66 = 6974LL;

	t66 = ((x333<=(x334-x335))-x336);

	if (t66 != 45195854743748317LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = -1;
	int8_t x339 = -1;
	int8_t x340 = -1;
	int32_t t67 = -10838051;

	t67 = ((x337<=(x338-x339))-x340);

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x342 = INT64_MIN;
	uint64_t x343 = 67779466998993699LLU;
	int8_t x344 = INT8_MAX;
	volatile int32_t t68 = -1;

	t68 = ((x341<=(x342-x343))-x344);

	if (t68 != -126) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x345 = INT64_MIN;
	uint32_t x346 = 55846U;
	volatile uint16_t x348 = 9826U;
	volatile int32_t t69 = -4056445;

	t69 = ((x345<=(x346-x347))-x348);

	if (t69 != -9825) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x350 = 2U;
	uint64_t x352 = 160317576953761LLU;
	static uint64_t t70 = 3387457454LLU;

	t70 = ((x349<=(x350-x351))-x352);

	if (t70 != 18446583756132597856LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x353 = -1;
	static uint8_t x354 = UINT8_MAX;
	volatile int32_t x355 = -1;
	uint16_t x356 = 12U;

	t71 = ((x353<=(x354-x355))-x356);

	if (t71 != -11) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = -4;
	static int16_t x358 = -1;
	static int16_t x359 = INT16_MIN;
	int8_t x360 = INT8_MIN;

	t72 = ((x357<=(x358-x359))-x360);

	if (t72 != 129) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x365 = INT16_MIN;
	volatile uint32_t x366 = UINT32_MAX;
	static volatile uint16_t x368 = 6U;
	volatile int32_t t73 = 20399;

	t73 = ((x365<=(x366-x367))-x368);

	if (t73 != -6) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x369 = INT64_MIN;
	int16_t x370 = INT16_MIN;
	static int8_t x371 = -1;
	int64_t x372 = -19109503LL;
	int64_t t74 = 2240073870LL;

	t74 = ((x369<=(x370-x371))-x372);

	if (t74 != 19109504LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x373 = 142;
	static int8_t x374 = INT8_MIN;
	volatile int64_t x375 = -1LL;
	volatile uint64_t t75 = 8728352520585LLU;

	t75 = ((x373<=(x374-x375))-x376);

	if (t75 != 16740301937227731714LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x377 = 106750U;
	int32_t x378 = -1;
	int8_t x379 = INT8_MAX;
	int8_t x380 = 10;
	int32_t t76 = -56619018;

	t76 = ((x377<=(x378-x379))-x380);

	if (t76 != -9) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x382 = 325;
	int16_t x383 = -1;
	static int16_t x384 = INT16_MAX;
	int32_t t77 = 409333;

	t77 = ((x381<=(x382-x383))-x384);

	if (t77 != -32766) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x386 = 0U;
	uint8_t x387 = 0U;
	volatile int32_t x388 = -4942;
	volatile int32_t t78 = -21636101;

	t78 = ((x385<=(x386-x387))-x388);

	if (t78 != 4943) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x389 = UINT8_MAX;
	static uint16_t x392 = 40U;

	t79 = ((x389<=(x390-x391))-x392);

	if (t79 != -39) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x394 = INT16_MIN;
	static int8_t x395 = INT8_MIN;
	static uint64_t x396 = 3LLU;

	t80 = ((x393<=(x394-x395))-x396);

	if (t80 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x397 = UINT16_MAX;
	int16_t x398 = INT16_MIN;
	uint16_t x399 = 9752U;
	volatile int16_t x400 = INT16_MIN;
	volatile int32_t t81 = 710;

	t81 = ((x397<=(x398-x399))-x400);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x405 = 0;
	int8_t x407 = -1;
	int8_t x408 = 0;

	t82 = ((x405<=(x406-x407))-x408);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x414 = -82710;
	static uint8_t x415 = UINT8_MAX;
	static volatile int16_t x416 = INT16_MIN;

	t83 = ((x413<=(x414-x415))-x416);

	if (t83 != 32769) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x417 = INT16_MIN;
	int32_t x420 = 650;
	int32_t t84 = -199;

	t84 = ((x417<=(x418-x419))-x420);

	if (t84 != -650) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x421 = INT32_MIN;
	static volatile int16_t x422 = -7;
	int32_t x423 = INT32_MIN;
	volatile uint32_t x424 = UINT32_MAX;
	static uint32_t t85 = 247085723U;

	t85 = ((x421<=(x422-x423))-x424);

	if (t85 != 2U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x426 = 3U;
	int8_t x427 = INT8_MAX;
	int8_t x428 = INT8_MAX;
	volatile int32_t t86 = -139298;

	t86 = ((x425<=(x426-x427))-x428);

	if (t86 != -126) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x429 = 17468653LL;
	volatile int16_t x430 = -1;
	int64_t x431 = -3999855952861509418LL;
	int64_t x432 = -8200012496502LL;
	int64_t t87 = 14868626041LL;

	t87 = ((x429<=(x430-x431))-x432);

	if (t87 != 8200012496503LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x438 = INT16_MAX;
	static uint8_t x439 = 0U;
	int8_t x440 = INT8_MAX;
	int32_t t88 = -757;

	t88 = ((x437<=(x438-x439))-x440);

	if (t88 != -126) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x444 = INT64_MAX;
	volatile int64_t t89 = 3330LL;

	t89 = ((x441<=(x442-x443))-x444);

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x446 = INT8_MIN;
	int64_t x447 = -1LL;
	uint16_t x448 = UINT16_MAX;
	static int32_t t90 = -254144;

	t90 = ((x445<=(x446-x447))-x448);

	if (t90 != -65534) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x449 = 16;
	volatile int64_t x450 = -1LL;
	static int64_t x451 = -1LL;
	volatile int32_t t91 = 1;

	t91 = ((x449<=(x450-x451))-x452);

	if (t91 != -99) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x453 = 148U;
	int16_t x454 = -137;
	uint8_t x455 = UINT8_MAX;
	volatile int8_t x456 = 2;
	static int32_t t92 = 18;

	t92 = ((x453<=(x454-x455))-x456);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x457 = INT64_MIN;
	int64_t x459 = -1LL;
	int8_t x460 = INT8_MIN;
	volatile int32_t t93 = -1;

	t93 = ((x457<=(x458-x459))-x460);

	if (t93 != 129) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x466 = 3527U;
	volatile int32_t x467 = 391380;
	volatile int16_t x468 = 1;
	volatile int32_t t94 = -34955;

	t94 = ((x465<=(x466-x467))-x468);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x470 = 2291866276260LL;
	static uint64_t x471 = UINT64_MAX;
	uint16_t x472 = 173U;
	volatile int32_t t95 = 0;

	t95 = ((x469<=(x470-x471))-x472);

	if (t95 != -173) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x481 = 1U;
	int16_t x482 = 3449;
	volatile int64_t x483 = INT64_MAX;
	int64_t x484 = -1LL;
	static volatile int64_t t96 = -159613152LL;

	t96 = ((x481<=(x482-x483))-x484);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x485 = -3845;
	int32_t x486 = 420;
	uint64_t x487 = 9LLU;
	int32_t t97 = -10;

	t97 = ((x485<=(x486-x487))-x488);

	if (t97 != -13) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x489 = 3804964;
	int16_t x491 = INT16_MIN;
	uint32_t x492 = 1096U;
	static volatile uint32_t t98 = 2765838U;

	t98 = ((x489<=(x490-x491))-x492);

	if (t98 != 4294966200U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x497 = UINT16_MAX;
	int8_t x498 = INT8_MAX;
	volatile int16_t x499 = INT16_MIN;
	uint64_t x500 = 353LLU;
	volatile uint64_t t99 = 16672550LLU;

	t99 = ((x497<=(x498-x499))-x500);

	if (t99 != 18446744073709551263LLU) { NG(); } else { ; }
	
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

