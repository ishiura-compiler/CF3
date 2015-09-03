#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = 220U;
int64_t x12 = -1LL;
static int16_t x15 = -6;
volatile uint32_t t2 = 18206U;
int16_t x28 = -1;
volatile int8_t x37 = INT8_MIN;
int16_t x49 = INT16_MIN;
uint32_t x50 = 3459677U;
int32_t t8 = 68;
int16_t x58 = INT16_MIN;
int32_t t11 = -6;
volatile int32_t t14 = 853;
static uint8_t x82 = UINT8_MAX;
int64_t x83 = -563208370221238LL;
int64_t x99 = -44361768952372476LL;
int64_t t18 = -156156952490LL;
uint32_t x121 = 27392056U;
volatile int32_t x122 = -981;
int8_t x124 = INT8_MIN;
int8_t x133 = INT8_MIN;
volatile int32_t x134 = INT32_MAX;
int8_t x135 = -1;
int8_t x136 = INT8_MIN;
int64_t x141 = INT64_MAX;
int64_t x143 = -1LL;
int32_t t25 = 1871213;
volatile uint16_t x154 = UINT16_MAX;
volatile uint64_t x158 = 4285471584551342LLU;
static int8_t x160 = INT8_MIN;
int8_t x161 = INT8_MIN;
int16_t x162 = -3423;
int32_t t31 = 75039997;
volatile int16_t x184 = INT16_MIN;
int32_t x192 = -3357;
int8_t x197 = INT8_MIN;
int32_t x199 = 0;
int32_t x200 = INT32_MIN;
static uint8_t x202 = UINT8_MAX;
int64_t t37 = -1455043675LL;
int64_t x213 = -11740947137785LL;
uint8_t x217 = 5U;
static int64_t x218 = 13LL;
int32_t t39 = 18512134;
int64_t t40 = -2LL;
uint16_t x225 = 0U;
static uint8_t x228 = UINT8_MAX;
int16_t x243 = INT16_MAX;
volatile int32_t t44 = -2042;
uint16_t x248 = 54U;
int32_t x250 = -37;
int32_t t47 = 3815087;
volatile int8_t x265 = INT8_MAX;
int16_t x268 = INT16_MIN;
static int32_t x272 = 20;
int16_t x274 = 432;
static int16_t x276 = INT16_MAX;
int16_t x280 = -1;
int32_t t51 = -2;
int8_t x293 = INT8_MIN;
uint64_t x294 = UINT64_MAX;
static int16_t x298 = INT16_MAX;
int8_t x302 = -5;
static int16_t x303 = INT16_MAX;
int32_t x328 = -1;
int32_t t60 = 0;
volatile int16_t x345 = -158;
volatile int16_t x354 = INT16_MAX;
int32_t x356 = -5;
uint8_t x378 = 0U;
int8_t x388 = -3;
int32_t t68 = -111541330;
uint64_t x389 = 1650205LLU;
uint16_t x391 = UINT16_MAX;
uint32_t t69 = 776298U;
volatile int32_t t70 = -1;
uint64_t x408 = 944887138240292LLU;
int32_t x410 = INT32_MIN;
static uint32_t t72 = 676U;
int8_t x421 = INT8_MIN;
int16_t x423 = INT16_MIN;
int32_t t75 = 2906196;
int32_t x432 = INT32_MAX;
volatile int32_t t78 = 19996247;
int8_t x452 = 14;
int32_t t81 = 111;
static volatile int16_t x463 = 58;
int32_t x470 = 45906244;
int8_t x473 = -1;
int64_t x476 = -1LL;
volatile int32_t x479 = -1;
uint32_t x481 = 154487U;
int64_t x486 = -1LL;
uint64_t x494 = UINT64_MAX;
int16_t x497 = INT16_MIN;
uint64_t x511 = UINT64_MAX;
int8_t x513 = -1;
int64_t x520 = -1LL;
uint8_t x533 = 66U;
volatile uint32_t x543 = 14377U;
static int8_t x554 = INT8_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static uint16_t x2 = 25U;
	int16_t x3 = INT16_MAX;
	uint16_t x4 = 82U;
	int32_t t0 = 9531744;

	t0 = ((x1<=(x2*x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x10 = -1LL;
	int8_t x11 = -1;
	static volatile int64_t t1 = -281LL;

	t1 = ((x9<=(x10*x11))/x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	int64_t x14 = -672213405170LL;
	uint32_t x16 = 50357U;

	t2 = ((x13<=(x14*x15))/x16);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;
	uint16_t x20 = 3U;
	volatile int32_t t3 = 90892;

	t3 = ((x17<=(x18*x19))/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -9506318LL;
	int64_t x26 = INT64_MIN;
	volatile uint16_t x27 = 0U;
	volatile int32_t t4 = -30569;

	t4 = ((x25<=(x26*x27))/x28);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1LL;
	static uint64_t x30 = 1674930LLU;
	int8_t x31 = -1;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t5 = 211339;

	t5 = ((x29<=(x30*x31))/x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	static int16_t x34 = 1;
	volatile uint32_t x35 = 7272534U;
	int16_t x36 = INT16_MIN;
	int32_t t6 = -1;

	t6 = ((x33<=(x34*x35))/x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x38 = INT64_MAX;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = 14;
	int32_t t7 = -1022381;

	t7 = ((x37<=(x38*x39))/x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MIN;

	t8 = ((x49<=(x50*x51))/x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 5897LLU;
	int16_t x54 = -1;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = -43;
	int32_t t9 = 1042800881;

	t9 = ((x53<=(x54*x55))/x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x57 = INT16_MIN;
	int16_t x59 = -12191;
	uint16_t x60 = UINT16_MAX;
	static volatile int32_t t10 = -8;

	t10 = ((x57<=(x58*x59))/x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = 20119U;
	int8_t x62 = INT8_MIN;
	volatile int64_t x63 = -1LL;
	int8_t x64 = INT8_MIN;

	t11 = ((x61<=(x62*x63))/x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 1919647LLU;
	uint32_t x66 = 1879589860U;
	int32_t x67 = -415;
	int8_t x68 = INT8_MIN;
	int32_t t12 = -1420;

	t12 = ((x65<=(x66*x67))/x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = -178;
	volatile uint64_t x74 = 329LLU;
	int64_t x75 = INT64_MIN;
	static int64_t x76 = 2361LL;
	int64_t t13 = 1361990080LL;

	t13 = ((x73<=(x74*x75))/x76);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = 6U;
	uint64_t x78 = 6484LLU;
	static volatile int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MAX;

	t14 = ((x77<=(x78*x79))/x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x81 = INT64_MIN;
	int64_t x84 = 489444323782225461LL;
	int64_t t15 = 928760LL;

	t15 = ((x81<=(x82*x83))/x84);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x93 = UINT64_MAX;
	int8_t x94 = -1;
	int16_t x95 = INT16_MAX;
	volatile int16_t x96 = -1;
	volatile int32_t t16 = -10;

	t16 = ((x93<=(x94*x95))/x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = 528709LL;
	uint16_t x98 = 13U;
	uint16_t x100 = 1360U;
	volatile int32_t t17 = -112347;

	t17 = ((x97<=(x98*x99))/x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x105 = -1;
	volatile int16_t x106 = INT16_MAX;
	int8_t x107 = -1;
	int64_t x108 = INT64_MIN;

	t18 = ((x105<=(x106*x107))/x108);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = INT8_MAX;
	uint32_t x110 = 1361U;
	static uint32_t x111 = UINT32_MAX;
	int32_t x112 = 1;
	static volatile int32_t t19 = 0;

	t19 = ((x109<=(x110*x111))/x112);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x117 = UINT8_MAX;
	static uint64_t x118 = UINT64_MAX;
	int8_t x119 = INT8_MAX;
	uint16_t x120 = UINT16_MAX;
	int32_t t20 = -600259;

	t20 = ((x117<=(x118*x119))/x120);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x123 = 451U;
	static volatile int32_t t21 = -14327260;

	t21 = ((x121<=(x122*x123))/x124);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = 53U;
	static int64_t x126 = 415412LL;
	int8_t x127 = -7;
	static volatile int32_t x128 = INT32_MIN;
	int32_t t22 = 111508;

	t22 = ((x125<=(x126*x127))/x128);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x129 = 0U;
	uint64_t x130 = 11LLU;
	static volatile int32_t x131 = INT32_MAX;
	int16_t x132 = -1;
	int32_t t23 = -2;

	t23 = ((x129<=(x130*x131))/x132);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t t24 = -3452436;

	t24 = ((x133<=(x134*x135))/x136);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x142 = 1120517838U;
	uint16_t x144 = 3U;

	t25 = ((x141<=(x142*x143))/x144);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x145 = 211U;
	int8_t x146 = INT8_MIN;
	uint32_t x147 = 1063685979U;
	volatile int8_t x148 = -1;
	volatile int32_t t26 = -1;

	t26 = ((x145<=(x146*x147))/x148);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x149 = UINT16_MAX;
	int16_t x150 = -1;
	static int16_t x151 = INT16_MIN;
	int16_t x152 = -11;
	static volatile int32_t t27 = -109442739;

	t27 = ((x149<=(x150*x151))/x152);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x153 = INT16_MIN;
	uint64_t x155 = 59737702935387LLU;
	static int16_t x156 = INT16_MIN;
	int32_t t28 = 3564565;

	t28 = ((x153<=(x154*x155))/x156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x157 = -1;
	volatile int64_t x159 = -1LL;
	int32_t t29 = -893209;

	t29 = ((x157<=(x158*x159))/x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x163 = 178;
	int32_t x164 = -1;
	static int32_t t30 = 6880383;

	t30 = ((x161<=(x162*x163))/x164);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = INT64_MAX;
	static uint16_t x166 = 11781U;
	static int8_t x167 = -3;
	static uint8_t x168 = UINT8_MAX;

	t31 = ((x165<=(x166*x167))/x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x173 = 264LLU;
	int8_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	static int16_t x176 = 3250;
	volatile int32_t t32 = 129463146;

	t32 = ((x173<=(x174*x175))/x176);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x181 = INT16_MAX;
	volatile int8_t x182 = -45;
	uint32_t x183 = 1491394776U;
	volatile int32_t t33 = 1;

	t33 = ((x181<=(x182*x183))/x184);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x185 = INT16_MIN;
	volatile uint16_t x186 = 16097U;
	int64_t x187 = 915LL;
	static volatile int64_t x188 = -6679LL;
	volatile int64_t t34 = -2335965LL;

	t34 = ((x185<=(x186*x187))/x188);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = INT32_MAX;
	int16_t x190 = INT16_MAX;
	uint8_t x191 = 0U;
	static int32_t t35 = 3;

	t35 = ((x189<=(x190*x191))/x192);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x198 = UINT16_MAX;
	volatile int32_t t36 = 4984125;

	t36 = ((x197<=(x198*x199))/x200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = UINT64_MAX;
	volatile uint32_t x203 = 1U;
	static volatile int64_t x204 = INT64_MIN;

	t37 = ((x201<=(x202*x203))/x204);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x214 = 132445090561LLU;
	uint32_t x215 = UINT32_MAX;
	static int8_t x216 = -1;
	volatile int32_t t38 = 2;

	t38 = ((x213<=(x214*x215))/x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x219 = 6U;
	volatile int8_t x220 = -1;

	t39 = ((x217<=(x218*x219))/x220);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x221 = -1;
	volatile uint64_t x222 = UINT64_MAX;
	uint16_t x223 = UINT16_MAX;
	volatile int64_t x224 = INT64_MAX;

	t40 = ((x221<=(x222*x223))/x224);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x226 = 1211U;
	int16_t x227 = 32;
	static volatile int32_t t41 = -41;

	t41 = ((x225<=(x226*x227))/x228);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x233 = 314559166493096089LL;
	uint64_t x234 = 2117826228342175LLU;
	int64_t x235 = -1LL;
	uint8_t x236 = UINT8_MAX;
	int32_t t42 = 55824428;

	t42 = ((x233<=(x234*x235))/x236);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x237 = INT8_MAX;
	static int32_t x238 = 1;
	int16_t x239 = INT16_MIN;
	uint16_t x240 = 29U;
	volatile int32_t t43 = -44;

	t43 = ((x237<=(x238*x239))/x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x241 = 29U;
	static int64_t x242 = 3773084003920LL;
	int16_t x244 = -1;

	t44 = ((x241<=(x242*x243))/x244);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x245 = INT16_MIN;
	uint8_t x246 = UINT8_MAX;
	uint64_t x247 = 3651077982528227LLU;
	volatile int32_t t45 = -4218570;

	t45 = ((x245<=(x246*x247))/x248);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x249 = INT16_MIN;
	int32_t x251 = 162737;
	uint32_t x252 = 88000216U;
	volatile uint32_t t46 = 10932284U;

	t46 = ((x249<=(x250*x251))/x252);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x261 = -1;
	uint16_t x262 = 0U;
	int32_t x263 = INT32_MIN;
	volatile int8_t x264 = INT8_MIN;

	t47 = ((x261<=(x262*x263))/x264);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x266 = INT8_MIN;
	int64_t x267 = -2627961237527LL;
	volatile int32_t t48 = 25141951;

	t48 = ((x265<=(x266*x267))/x268);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x269 = INT16_MAX;
	int32_t x270 = 61;
	int32_t x271 = -1;
	volatile int32_t t49 = 2;

	t49 = ((x269<=(x270*x271))/x272);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x273 = 0U;
	static int16_t x275 = INT16_MAX;
	volatile int32_t t50 = 1883226;

	t50 = ((x273<=(x274*x275))/x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x277 = INT64_MAX;
	int64_t x278 = -1LL;
	volatile uint16_t x279 = 503U;

	t51 = ((x277<=(x278*x279))/x280);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x281 = INT64_MIN;
	volatile int32_t x282 = -1;
	volatile int64_t x283 = -2LL;
	static volatile int16_t x284 = -430;
	volatile int32_t t52 = -73393091;

	t52 = ((x281<=(x282*x283))/x284);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x285 = UINT8_MAX;
	int32_t x286 = -1;
	uint32_t x287 = 1718U;
	static int16_t x288 = INT16_MAX;
	int32_t t53 = -2697323;

	t53 = ((x285<=(x286*x287))/x288);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x295 = -46891233;
	int16_t x296 = INT16_MAX;
	int32_t t54 = 20874;

	t54 = ((x293<=(x294*x295))/x296);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x297 = -1;
	uint16_t x299 = 3835U;
	uint16_t x300 = 9078U;
	static int32_t t55 = -1006;

	t55 = ((x297<=(x298*x299))/x300);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x301 = 20U;
	static int32_t x304 = INT32_MIN;
	int32_t t56 = 3065111;

	t56 = ((x301<=(x302*x303))/x304);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MAX;
	int8_t x315 = INT8_MIN;
	volatile int16_t x316 = -2;
	int32_t t57 = 89866757;

	t57 = ((x313<=(x314*x315))/x316);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x317 = -1;
	uint32_t x318 = UINT32_MAX;
	int32_t x319 = -1;
	static int64_t x320 = INT64_MIN;
	volatile int64_t t58 = 1LL;

	t58 = ((x317<=(x318*x319))/x320);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x325 = -1;
	int8_t x326 = -1;
	volatile int16_t x327 = -661;
	static int32_t t59 = 852667670;

	t59 = ((x325<=(x326*x327))/x328);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x329 = 1U;
	int64_t x330 = -116697365375LL;
	int32_t x331 = 48129;
	int32_t x332 = INT32_MIN;

	t60 = ((x329<=(x330*x331))/x332);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x341 = -9902401LL;
	int8_t x342 = INT8_MAX;
	int16_t x343 = 6;
	volatile int64_t x344 = INT64_MIN;
	int64_t t61 = -5232064751557LL;

	t61 = ((x341<=(x342*x343))/x344);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x346 = 1980U;
	uint32_t x347 = 152857U;
	static uint64_t x348 = 18684253367518411LLU;
	uint64_t t62 = 1049LLU;

	t62 = ((x345<=(x346*x347))/x348);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x353 = -1;
	int64_t x355 = -232LL;
	int32_t t63 = -6548585;

	t63 = ((x353<=(x354*x355))/x356);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x357 = -62;
	int8_t x358 = -30;
	uint8_t x359 = 114U;
	int32_t x360 = INT32_MAX;
	static volatile int32_t t64 = -316;

	t64 = ((x357<=(x358*x359))/x360);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x361 = 11U;
	static volatile int16_t x362 = 7;
	int16_t x363 = INT16_MIN;
	int16_t x364 = 60;
	int32_t t65 = -7;

	t65 = ((x361<=(x362*x363))/x364);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x377 = INT16_MIN;
	int8_t x379 = INT8_MAX;
	volatile uint32_t x380 = 9U;
	static volatile uint32_t t66 = 15669U;

	t66 = ((x377<=(x378*x379))/x380);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MAX;
	int16_t x383 = 3;
	int8_t x384 = -1;
	int32_t t67 = 621;

	t67 = ((x381<=(x382*x383))/x384);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x385 = INT64_MIN;
	int8_t x386 = -1;
	static int16_t x387 = INT16_MIN;

	t68 = ((x385<=(x386*x387))/x388);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x390 = 260997454LL;
	static uint32_t x392 = UINT32_MAX;

	t69 = ((x389<=(x390*x391))/x392);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x397 = -1;
	int16_t x398 = 390;
	uint32_t x399 = UINT32_MAX;
	volatile int8_t x400 = -13;

	t70 = ((x397<=(x398*x399))/x400);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x405 = -806465456271552LL;
	static volatile uint32_t x406 = UINT32_MAX;
	int16_t x407 = -120;
	volatile uint64_t t71 = 240860605078LLU;

	t71 = ((x405<=(x406*x407))/x408);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x409 = -16;
	uint32_t x411 = UINT32_MAX;
	uint32_t x412 = UINT32_MAX;

	t72 = ((x409<=(x410*x411))/x412);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x417 = INT32_MIN;
	int8_t x418 = 1;
	volatile uint8_t x419 = 5U;
	uint32_t x420 = 117U;
	static volatile uint32_t t73 = 643U;

	t73 = ((x417<=(x418*x419))/x420);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x422 = INT8_MIN;
	int8_t x424 = INT8_MIN;
	volatile int32_t t74 = -1;

	t74 = ((x421<=(x422*x423))/x424);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x425 = UINT32_MAX;
	static uint16_t x426 = UINT16_MAX;
	static int16_t x427 = INT16_MAX;
	int16_t x428 = INT16_MIN;

	t75 = ((x425<=(x426*x427))/x428);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x429 = INT64_MIN;
	volatile uint32_t x430 = 11U;
	int8_t x431 = -1;
	volatile int32_t t76 = -282639;

	t76 = ((x429<=(x430*x431))/x432);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x433 = INT16_MIN;
	int8_t x434 = INT8_MAX;
	volatile uint64_t x435 = 1062333201749523LLU;
	int64_t x436 = -1LL;
	static volatile int64_t t77 = -74994342498681LL;

	t77 = ((x433<=(x434*x435))/x436);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x441 = INT32_MIN;
	int8_t x442 = -1;
	int8_t x443 = INT8_MIN;
	uint8_t x444 = UINT8_MAX;

	t78 = ((x441<=(x442*x443))/x444);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x445 = -15;
	volatile int32_t x446 = -1;
	volatile int16_t x447 = 0;
	int32_t x448 = 2;
	volatile int32_t t79 = 387190;

	t79 = ((x445<=(x446*x447))/x448);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x449 = UINT8_MAX;
	static int64_t x450 = INT64_MIN;
	uint64_t x451 = UINT64_MAX;
	volatile int32_t t80 = -1;

	t80 = ((x449<=(x450*x451))/x452);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x457 = INT32_MAX;
	int16_t x458 = 3;
	uint32_t x459 = 581801426U;
	int16_t x460 = INT16_MAX;

	t81 = ((x457<=(x458*x459))/x460);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x461 = 1899986561024038LLU;
	int8_t x462 = -1;
	int16_t x464 = INT16_MAX;
	int32_t t82 = 210;

	t82 = ((x461<=(x462*x463))/x464);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x469 = 91360469950057560LLU;
	uint32_t x471 = 1835U;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t83 = 221302;

	t83 = ((x469<=(x470*x471))/x472);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x474 = 1243258U;
	uint32_t x475 = UINT32_MAX;
	volatile int64_t t84 = -380549LL;

	t84 = ((x473<=(x474*x475))/x476);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x477 = 157614842U;
	uint64_t x478 = 2LLU;
	volatile int8_t x480 = -4;
	static volatile int32_t t85 = -62421;

	t85 = ((x477<=(x478*x479))/x480);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x482 = 415U;
	static int8_t x483 = 2;
	uint16_t x484 = 5U;
	static int32_t t86 = 1;

	t86 = ((x481<=(x482*x483))/x484);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x485 = INT64_MIN;
	int8_t x487 = -1;
	int32_t x488 = 94425;
	static volatile int32_t t87 = 100;

	t87 = ((x485<=(x486*x487))/x488);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x489 = 33U;
	int8_t x490 = -29;
	int8_t x491 = INT8_MIN;
	int16_t x492 = -1;
	volatile int32_t t88 = 15165;

	t88 = ((x489<=(x490*x491))/x492);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x493 = INT8_MAX;
	int16_t x495 = INT16_MIN;
	static int32_t x496 = INT32_MIN;
	volatile int32_t t89 = -974794;

	t89 = ((x493<=(x494*x495))/x496);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x498 = 1209159U;
	uint32_t x499 = 22654683U;
	int32_t x500 = -1;
	volatile int32_t t90 = -1661160;

	t90 = ((x497<=(x498*x499))/x500);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x501 = INT32_MIN;
	static volatile int16_t x502 = INT16_MIN;
	int16_t x503 = INT16_MIN;
	int16_t x504 = -2;
	static int32_t t91 = -93339157;

	t91 = ((x501<=(x502*x503))/x504);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x505 = -551LL;
	int32_t x506 = 0;
	int32_t x507 = INT32_MAX;
	volatile uint32_t x508 = 1U;
	volatile uint32_t t92 = 6U;

	t92 = ((x505<=(x506*x507))/x508);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x509 = -374202086;
	int64_t x510 = -1LL;
	int64_t x512 = INT64_MAX;
	int64_t t93 = 2LL;

	t93 = ((x509<=(x510*x511))/x512);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x514 = -7;
	int8_t x515 = INT8_MAX;
	volatile uint8_t x516 = 1U;
	int32_t t94 = -5143725;

	t94 = ((x513<=(x514*x515))/x516);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x517 = UINT64_MAX;
	int8_t x518 = -1;
	int32_t x519 = -30;
	int64_t t95 = -825911028066LL;

	t95 = ((x517<=(x518*x519))/x520);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x525 = INT32_MAX;
	int64_t x526 = -1LL;
	volatile int16_t x527 = -26;
	uint16_t x528 = UINT16_MAX;
	int32_t t96 = -207978;

	t96 = ((x525<=(x526*x527))/x528);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x534 = 909185283U;
	uint16_t x535 = 278U;
	static int32_t x536 = -1;
	int32_t t97 = 105391065;

	t97 = ((x533<=(x534*x535))/x536);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x541 = -1LL;
	int32_t x542 = INT32_MIN;
	int64_t x544 = -1LL;
	volatile int64_t t98 = 1068876602LL;

	t98 = ((x541<=(x542*x543))/x544);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x553 = 1U;
	uint64_t x555 = 1546270293951LLU;
	static volatile int8_t x556 = INT8_MAX;
	int32_t t99 = -9777632;

	t99 = ((x553<=(x554*x555))/x556);

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

