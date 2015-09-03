#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x10 = -1LL;
int8_t x13 = INT8_MIN;
static volatile int8_t x23 = 38;
int8_t x24 = INT8_MIN;
volatile int32_t t4 = -54;
volatile int16_t x25 = 1;
int64_t x36 = -1LL;
int16_t x61 = INT16_MIN;
int8_t x63 = INT8_MAX;
int32_t t12 = 3375;
int16_t x65 = -1;
static int16_t x67 = 1565;
static int32_t t13 = 54;
int32_t x75 = INT32_MIN;
volatile int8_t x89 = INT8_MIN;
uint64_t x92 = UINT64_MAX;
int16_t x95 = INT16_MAX;
int8_t x109 = -1;
uint64_t x110 = UINT64_MAX;
static int16_t x111 = 14612;
volatile int32_t t24 = 7441;
volatile int64_t x130 = INT64_MAX;
static volatile int8_t x131 = 0;
static uint32_t x132 = 1467088049U;
volatile int8_t x134 = INT8_MAX;
volatile int32_t t26 = 316513;
static uint64_t x145 = 278LLU;
uint32_t x146 = 8209U;
int16_t x148 = INT16_MIN;
volatile int32_t t28 = -84858;
int32_t x150 = INT32_MAX;
volatile int8_t x154 = INT8_MIN;
int64_t x156 = -6598455987LL;
volatile int32_t t30 = 23762395;
uint16_t x165 = 39U;
int16_t x170 = INT16_MIN;
int32_t x181 = INT32_MIN;
static volatile int32_t x182 = -1;
static volatile uint8_t x187 = 0U;
uint8_t x194 = 18U;
int64_t x205 = INT64_MAX;
int8_t x206 = -7;
int32_t t41 = 1061;
volatile int32_t t42 = 130237;
int32_t x243 = INT32_MIN;
volatile int32_t t45 = -7121;
int8_t x246 = 6;
volatile int64_t x248 = INT64_MIN;
uint64_t x249 = 831494LLU;
static int64_t x251 = 4834LL;
volatile int32_t x256 = INT32_MIN;
uint64_t x257 = 611LLU;
uint64_t x259 = UINT64_MAX;
uint32_t x266 = UINT32_MAX;
int32_t t52 = 2377;
int8_t x274 = -1;
uint8_t x276 = 45U;
uint64_t x285 = 123963LLU;
int16_t x291 = INT16_MIN;
int32_t t56 = -72655341;
uint8_t x293 = 0U;
int64_t x294 = -1LL;
uint16_t x300 = 31U;
int32_t x307 = -1;
static uint64_t x310 = 8689111944605916724LLU;
static int8_t x327 = INT8_MIN;
int16_t x328 = INT16_MIN;
static int16_t x331 = -1;
int32_t t64 = -1760714;
volatile int32_t t67 = 1;
static volatile int32_t t68 = -710;
static uint16_t x351 = 5226U;
static volatile int16_t x356 = 222;
uint64_t x357 = 65485LLU;
static int16_t x367 = INT16_MIN;
int64_t x372 = -1LL;
uint16_t x392 = 2U;
volatile uint16_t x413 = UINT16_MAX;
uint16_t x417 = UINT16_MAX;
int64_t x424 = INT64_MIN;
int16_t x438 = INT16_MAX;
int32_t t85 = 3568;
int16_t x450 = INT16_MAX;
static int16_t x453 = INT16_MIN;
int8_t x459 = INT8_MIN;
int16_t x480 = INT16_MAX;
volatile int32_t t94 = -348;
static int16_t x490 = 0;
volatile int32_t t95 = 0;
int16_t x505 = 3800;
int16_t x509 = INT16_MIN;
int16_t x520 = INT16_MIN;
int8_t x531 = INT8_MIN;
uint32_t x532 = 19U;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int16_t x2 = -2;
	int8_t x3 = INT8_MAX;
	int8_t x4 = 7;
	int32_t t0 = -37;

	t0 = ((x1<=(x2*x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 16U;
	int8_t x11 = INT8_MAX;
	int64_t x12 = -1LL;
	volatile int32_t t1 = -6871434;

	t1 = ((x9<=(x10*x11))<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = -1;
	int8_t x15 = INT8_MIN;
	int64_t x16 = INT64_MAX;
	int32_t t2 = 28395026;

	t2 = ((x13<=(x14*x15))<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 83U;
	int64_t x18 = 63572LL;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t3 = 0;

	t3 = ((x17<=(x18*x19))<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -170142005LL;
	int16_t x22 = -103;

	t4 = ((x21<=(x22*x23))<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = -668877951503LL;
	volatile uint32_t x27 = 98021U;
	int64_t x28 = -1LL;
	static int32_t t5 = 0;

	t5 = ((x25<=(x26*x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = 98125238933161LL;
	uint64_t x34 = 42165735324434582LLU;
	static int32_t x35 = -1;
	int32_t t6 = 3;

	t6 = ((x33<=(x34*x35))<x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = -3;
	int32_t x38 = -10504;
	int32_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t7 = -649417;

	t7 = ((x37<=(x38*x39))<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -41;
	static int64_t x42 = 8LL;
	int32_t x43 = INT32_MIN;
	uint16_t x44 = 3725U;
	static int32_t t8 = 1655;

	t8 = ((x41<=(x42*x43))<x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x45 = 12LLU;
	int32_t x46 = -1;
	volatile uint8_t x47 = UINT8_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t9 = 1;

	t9 = ((x45<=(x46*x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 55U;
	static uint16_t x50 = UINT16_MAX;
	int16_t x51 = INT16_MIN;
	static uint32_t x52 = UINT32_MAX;
	static int32_t t10 = 0;

	t10 = ((x49<=(x50*x51))<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = INT32_MIN;
	int8_t x54 = INT8_MAX;
	int8_t x55 = INT8_MIN;
	static int16_t x56 = 1;
	static int32_t t11 = 0;

	t11 = ((x53<=(x54*x55))<x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x62 = 123LLU;
	volatile int32_t x64 = -419914809;

	t12 = ((x61<=(x62*x63))<x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x66 = INT16_MAX;
	volatile uint32_t x68 = UINT32_MAX;

	t13 = ((x65<=(x66*x67))<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -1;
	uint16_t x70 = 3U;
	static int64_t x71 = -611727212369LL;
	static uint64_t x72 = 17934218585710051LLU;
	volatile int32_t t14 = 945;

	t14 = ((x69<=(x70*x71))<x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = UINT8_MAX;
	uint32_t x74 = UINT32_MAX;
	int16_t x76 = 1986;
	volatile int32_t t15 = -1788136;

	t15 = ((x73<=(x74*x75))<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	uint64_t x78 = 843438572LLU;
	uint16_t x79 = 0U;
	int16_t x80 = INT16_MIN;
	int32_t t16 = -54;

	t16 = ((x77<=(x78*x79))<x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = -1;
	volatile int32_t x83 = -1;
	int64_t x84 = INT64_MAX;
	int32_t t17 = 31350;

	t17 = ((x81<=(x82*x83))<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x90 = 0;
	int16_t x91 = INT16_MIN;
	int32_t t18 = -6313;

	t18 = ((x89<=(x90*x91))<x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = -1;
	volatile uint16_t x94 = 7U;
	volatile uint16_t x96 = 5U;
	static volatile int32_t t19 = -1;

	t19 = ((x93<=(x94*x95))<x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x97 = 533706U;
	volatile uint64_t x98 = UINT64_MAX;
	int32_t x99 = INT32_MIN;
	volatile int16_t x100 = -1;
	int32_t t20 = -960;

	t20 = ((x97<=(x98*x99))<x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x112 = INT64_MIN;
	int32_t t21 = -369;

	t21 = ((x109<=(x110*x111))<x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = 32788683LLU;
	static volatile uint16_t x118 = 4U;
	int64_t x119 = 30707LL;
	int64_t x120 = INT64_MIN;
	int32_t t22 = 1979;

	t22 = ((x117<=(x118*x119))<x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x121 = 5694U;
	int64_t x122 = 7LL;
	static int16_t x123 = INT16_MIN;
	int16_t x124 = -733;
	int32_t t23 = 3;

	t23 = ((x121<=(x122*x123))<x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = INT32_MIN;
	static int8_t x126 = -1;
	int8_t x127 = -1;
	volatile int8_t x128 = INT8_MIN;

	t24 = ((x125<=(x126*x127))<x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int32_t t25 = 3;

	t25 = ((x129<=(x130*x131))<x132);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = UINT16_MAX;
	int8_t x135 = -1;
	static int64_t x136 = INT64_MIN;

	t26 = ((x133<=(x134*x135))<x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = INT16_MIN;
	uint16_t x138 = UINT16_MAX;
	volatile int16_t x139 = -1;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t27 = -817068;

	t27 = ((x137<=(x138*x139))<x140);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x147 = INT16_MIN;

	t28 = ((x145<=(x146*x147))<x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x149 = 1757U;
	static volatile int16_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t29 = -153725;

	t29 = ((x149<=(x150*x151))<x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x153 = UINT16_MAX;
	int8_t x155 = -1;

	t30 = ((x153<=(x154*x155))<x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x157 = 0LLU;
	int16_t x158 = INT16_MIN;
	uint8_t x159 = UINT8_MAX;
	volatile uint64_t x160 = 384959884967LLU;
	static int32_t t31 = -3;

	t31 = ((x157<=(x158*x159))<x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x166 = -1LL;
	int16_t x167 = INT16_MIN;
	int16_t x168 = INT16_MAX;
	volatile int32_t t32 = -2473;

	t32 = ((x165<=(x166*x167))<x168);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x169 = -1LL;
	uint16_t x171 = UINT16_MAX;
	int16_t x172 = -69;
	static int32_t t33 = 1;

	t33 = ((x169<=(x170*x171))<x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x173 = 1477LLU;
	int64_t x174 = -1LL;
	int8_t x175 = 1;
	int32_t x176 = INT32_MIN;
	int32_t t34 = 6;

	t34 = ((x173<=(x174*x175))<x176);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x183 = 15896019U;
	int16_t x184 = INT16_MAX;
	volatile int32_t t35 = -3;

	t35 = ((x181<=(x182*x183))<x184);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = INT8_MIN;
	uint32_t x186 = 1U;
	int64_t x188 = -32414LL;
	int32_t t36 = -5242;

	t36 = ((x185<=(x186*x187))<x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = INT16_MAX;
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MAX;
	volatile int32_t t37 = 35;

	t37 = ((x193<=(x194*x195))<x196);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x197 = INT16_MAX;
	static int16_t x198 = INT16_MAX;
	volatile int64_t x199 = -5LL;
	int32_t x200 = -1;
	int32_t t38 = 1473817;

	t38 = ((x197<=(x198*x199))<x200);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x207 = 2;
	uint32_t x208 = 329355U;
	static int32_t t39 = 389;

	t39 = ((x205<=(x206*x207))<x208);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x209 = 1U;
	int16_t x210 = -2;
	int64_t x211 = 89715LL;
	volatile int8_t x212 = -1;
	int32_t t40 = 22;

	t40 = ((x209<=(x210*x211))<x212);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x213 = 0U;
	int32_t x214 = -3;
	static volatile int8_t x215 = -1;
	int16_t x216 = INT16_MIN;

	t41 = ((x213<=(x214*x215))<x216);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x217 = -2;
	uint16_t x218 = UINT16_MAX;
	uint32_t x219 = 195U;
	uint16_t x220 = 1U;

	t42 = ((x217<=(x218*x219))<x220);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x225 = -91;
	static uint8_t x226 = 0U;
	int32_t x227 = INT32_MIN;
	int8_t x228 = -9;
	int32_t t43 = 6556;

	t43 = ((x225<=(x226*x227))<x228);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = -1;
	int64_t x230 = INT64_MAX;
	int8_t x231 = -1;
	int64_t x232 = -1LL;
	static int32_t t44 = -1;

	t44 = ((x229<=(x230*x231))<x232);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x241 = -48;
	static uint32_t x242 = UINT32_MAX;
	int64_t x244 = INT64_MAX;

	t45 = ((x241<=(x242*x243))<x244);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x245 = INT8_MIN;
	uint16_t x247 = 1610U;
	static volatile int32_t t46 = -379563;

	t46 = ((x245<=(x246*x247))<x248);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x250 = 4476494LLU;
	int64_t x252 = 1331187356127405407LL;
	static int32_t t47 = 1054;

	t47 = ((x249<=(x250*x251))<x252);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = 2;
	static uint8_t x254 = UINT8_MAX;
	uint8_t x255 = UINT8_MAX;
	volatile int32_t t48 = -9081731;

	t48 = ((x253<=(x254*x255))<x256);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x258 = INT8_MIN;
	static int8_t x260 = INT8_MIN;
	int32_t t49 = -2761;

	t49 = ((x257<=(x258*x259))<x260);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x261 = UINT8_MAX;
	volatile int8_t x262 = 0;
	int64_t x263 = -7LL;
	int32_t x264 = -795287;
	static int32_t t50 = 100;

	t50 = ((x261<=(x262*x263))<x264);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x265 = 49433111109164LLU;
	int32_t x267 = 335;
	int8_t x268 = -1;
	static volatile int32_t t51 = 50155929;

	t51 = ((x265<=(x266*x267))<x268);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x269 = UINT16_MAX;
	uint16_t x270 = 0U;
	int8_t x271 = INT8_MAX;
	uint64_t x272 = 32774010992874450LLU;

	t52 = ((x269<=(x270*x271))<x272);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x273 = 1;
	int64_t x275 = -1LL;
	volatile int32_t t53 = 319;

	t53 = ((x273<=(x274*x275))<x276);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x277 = 1577455261229LLU;
	int64_t x278 = 575059578263LL;
	static volatile int8_t x279 = -1;
	uint32_t x280 = 3863434U;
	volatile int32_t t54 = -20750776;

	t54 = ((x277<=(x278*x279))<x280);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x286 = INT8_MIN;
	uint8_t x287 = UINT8_MAX;
	uint32_t x288 = UINT32_MAX;
	static int32_t t55 = -1559593;

	t55 = ((x285<=(x286*x287))<x288);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x289 = INT64_MAX;
	uint16_t x290 = 450U;
	static int32_t x292 = INT32_MAX;

	t56 = ((x289<=(x290*x291))<x292);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x295 = 329U;
	static volatile int32_t x296 = -1;
	int32_t t57 = -233;

	t57 = ((x293<=(x294*x295))<x296);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x297 = INT8_MIN;
	int16_t x298 = 351;
	uint64_t x299 = UINT64_MAX;
	volatile int32_t t58 = 13131020;

	t58 = ((x297<=(x298*x299))<x300);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x301 = -2862454805351262698LL;
	int64_t x302 = -7371LL;
	int8_t x303 = 5;
	int16_t x304 = INT16_MIN;
	int32_t t59 = -20036;

	t59 = ((x301<=(x302*x303))<x304);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x305 = UINT8_MAX;
	uint64_t x306 = UINT64_MAX;
	uint16_t x308 = 20U;
	volatile int32_t t60 = 5465;

	t60 = ((x305<=(x306*x307))<x308);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x311 = -3;
	uint64_t x312 = 9784LLU;
	int32_t t61 = 4747295;

	t61 = ((x309<=(x310*x311))<x312);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x313 = -6;
	volatile int8_t x314 = -1;
	uint64_t x315 = 31879989395LLU;
	volatile int16_t x316 = INT16_MAX;
	int32_t t62 = 369429738;

	t62 = ((x313<=(x314*x315))<x316);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x325 = INT16_MIN;
	static int32_t x326 = -1074202;
	volatile int32_t t63 = 18466;

	t63 = ((x325<=(x326*x327))<x328);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x329 = 0;
	uint64_t x330 = 1711281746LLU;
	static int8_t x332 = INT8_MIN;

	t64 = ((x329<=(x330*x331))<x332);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x333 = -1817191;
	volatile uint8_t x334 = 1U;
	volatile uint16_t x335 = 26173U;
	int32_t x336 = INT32_MIN;
	int32_t t65 = 64870877;

	t65 = ((x333<=(x334*x335))<x336);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x337 = 2;
	int8_t x338 = INT8_MIN;
	uint8_t x339 = UINT8_MAX;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t66 = -428307;

	t66 = ((x337<=(x338*x339))<x340);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x341 = -1;
	int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MAX;
	uint16_t x344 = 6024U;

	t67 = ((x341<=(x342*x343))<x344);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x345 = 1U;
	volatile int8_t x346 = INT8_MAX;
	uint32_t x347 = UINT32_MAX;
	int16_t x348 = 2350;

	t68 = ((x345<=(x346*x347))<x348);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x349 = INT64_MAX;
	int16_t x350 = INT16_MIN;
	int8_t x352 = -1;
	volatile int32_t t69 = -188764735;

	t69 = ((x349<=(x350*x351))<x352);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x353 = 0;
	volatile int32_t x354 = INT32_MAX;
	uint64_t x355 = UINT64_MAX;
	volatile int32_t t70 = -760;

	t70 = ((x353<=(x354*x355))<x356);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x358 = INT8_MIN;
	static uint64_t x359 = 216030973LLU;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t71 = -509;

	t71 = ((x357<=(x358*x359))<x360);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x365 = -1LL;
	int32_t x366 = 17;
	int16_t x368 = -1;
	volatile int32_t t72 = 1077400;

	t72 = ((x365<=(x366*x367))<x368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x370 = 149758932925110LLU;
	static volatile uint8_t x371 = UINT8_MAX;
	int32_t t73 = 97488;

	t73 = ((x369<=(x370*x371))<x372);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x381 = 61U;
	volatile uint16_t x382 = 26U;
	int8_t x383 = INT8_MIN;
	volatile int8_t x384 = INT8_MAX;
	int32_t t74 = 62;

	t74 = ((x381<=(x382*x383))<x384);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x385 = 37U;
	static int8_t x386 = -1;
	uint32_t x387 = 194124384U;
	volatile uint64_t x388 = UINT64_MAX;
	int32_t t75 = 2222;

	t75 = ((x385<=(x386*x387))<x388);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x389 = -3485;
	static uint64_t x390 = 62290643848535421LLU;
	int16_t x391 = -1;
	static volatile int32_t t76 = 0;

	t76 = ((x389<=(x390*x391))<x392);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x397 = UINT16_MAX;
	static int8_t x398 = INT8_MIN;
	static int16_t x399 = 0;
	static uint32_t x400 = UINT32_MAX;
	static volatile int32_t t77 = 19357138;

	t77 = ((x397<=(x398*x399))<x400);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x401 = -16111406;
	static int16_t x402 = -12805;
	int32_t x403 = 1;
	uint32_t x404 = 52U;
	volatile int32_t t78 = -975553694;

	t78 = ((x401<=(x402*x403))<x404);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x405 = INT16_MIN;
	volatile int8_t x406 = -1;
	int64_t x407 = INT64_MAX;
	int16_t x408 = -970;
	int32_t t79 = -55689291;

	t79 = ((x405<=(x406*x407))<x408);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x409 = 1;
	int64_t x410 = -60LL;
	uint32_t x411 = 1390U;
	int8_t x412 = INT8_MIN;
	int32_t t80 = 565;

	t80 = ((x409<=(x410*x411))<x412);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x414 = -254LL;
	uint16_t x415 = UINT16_MAX;
	int64_t x416 = INT64_MAX;
	volatile int32_t t81 = 3371934;

	t81 = ((x413<=(x414*x415))<x416);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x418 = UINT64_MAX;
	static int32_t x419 = INT32_MIN;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t82 = 2937;

	t82 = ((x417<=(x418*x419))<x420);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x421 = -1LL;
	uint32_t x422 = 2424U;
	uint32_t x423 = 921486833U;
	volatile int32_t t83 = -704305;

	t83 = ((x421<=(x422*x423))<x424);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x425 = -1;
	uint32_t x426 = 201U;
	static uint64_t x427 = UINT64_MAX;
	static int8_t x428 = INT8_MIN;
	int32_t t84 = -13713645;

	t84 = ((x425<=(x426*x427))<x428);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x437 = 238U;
	static int8_t x439 = 3;
	static int8_t x440 = INT8_MAX;

	t85 = ((x437<=(x438*x439))<x440);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x441 = 47;
	int16_t x442 = -1;
	volatile int8_t x443 = INT8_MIN;
	int64_t x444 = INT64_MAX;
	volatile int32_t t86 = 129746;

	t86 = ((x441<=(x442*x443))<x444);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x449 = 148U;
	static uint64_t x451 = 149LLU;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t87 = -7;

	t87 = ((x449<=(x450*x451))<x452);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x454 = -1;
	int8_t x455 = 0;
	int32_t x456 = INT32_MIN;
	volatile int32_t t88 = 0;

	t88 = ((x453<=(x454*x455))<x456);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x457 = 16117050627305380LLU;
	int8_t x458 = 1;
	int64_t x460 = -479472LL;
	int32_t t89 = -492;

	t89 = ((x457<=(x458*x459))<x460);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x461 = INT64_MIN;
	static volatile int8_t x462 = -46;
	int64_t x463 = -1LL;
	uint32_t x464 = UINT32_MAX;
	int32_t t90 = -1368;

	t90 = ((x461<=(x462*x463))<x464);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x469 = 175858LLU;
	uint64_t x470 = UINT64_MAX;
	static uint8_t x471 = 93U;
	volatile uint64_t x472 = 57LLU;
	static volatile int32_t t91 = -18488016;

	t91 = ((x469<=(x470*x471))<x472);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x473 = 0U;
	uint32_t x474 = UINT32_MAX;
	static uint64_t x475 = 850884585189LLU;
	int8_t x476 = 0;
	volatile int32_t t92 = -1;

	t92 = ((x473<=(x474*x475))<x476);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x477 = INT8_MIN;
	uint8_t x478 = 57U;
	int32_t x479 = -1;
	int32_t t93 = -38305;

	t93 = ((x477<=(x478*x479))<x480);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x485 = -1;
	int64_t x486 = 28799231LL;
	volatile int16_t x487 = INT16_MAX;
	uint8_t x488 = 0U;

	t94 = ((x485<=(x486*x487))<x488);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x489 = INT64_MIN;
	uint16_t x491 = 0U;
	static uint8_t x492 = UINT8_MAX;

	t95 = ((x489<=(x490*x491))<x492);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x506 = 30U;
	int8_t x507 = INT8_MIN;
	static volatile int8_t x508 = -1;
	int32_t t96 = -1;

	t96 = ((x505<=(x506*x507))<x508);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x510 = 1U;
	volatile int64_t x511 = INT64_MIN;
	uint16_t x512 = 11U;
	int32_t t97 = 8499;

	t97 = ((x509<=(x510*x511))<x512);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = -1;
	volatile int32_t x518 = -1;
	int32_t x519 = -1;
	int32_t t98 = -494971559;

	t98 = ((x517<=(x518*x519))<x520);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x529 = 1U;
	static int8_t x530 = -5;
	volatile int32_t t99 = -1043641;

	t99 = ((x529<=(x530*x531))<x532);

	if (t99 != 1) { NG(); } else { ; }
	
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

