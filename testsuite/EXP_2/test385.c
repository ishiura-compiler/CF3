#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
static int32_t x7 = 19;
uint16_t x8 = UINT16_MAX;
static int8_t x10 = INT8_MIN;
int8_t x11 = INT8_MAX;
int8_t x19 = INT8_MIN;
volatile uint32_t x23 = 501127U;
int16_t x24 = INT16_MAX;
static volatile int32_t t5 = 1004;
int64_t x25 = -8969181395347863LL;
int16_t x30 = INT16_MIN;
uint64_t x33 = 27994LLU;
volatile int64_t x37 = 0LL;
int32_t x40 = INT32_MIN;
int32_t t9 = -4854;
int16_t x52 = 14;
int16_t x56 = INT16_MIN;
int64_t x58 = -1LL;
int8_t x67 = 1;
volatile int32_t x72 = -108;
static uint8_t x73 = 3U;
volatile int8_t x75 = INT8_MAX;
int32_t t17 = 4;
static int64_t x98 = 1405709702LL;
static int8_t x100 = -1;
int8_t x107 = -1;
uint32_t x113 = UINT32_MAX;
volatile int16_t x114 = INT16_MIN;
static int8_t x116 = INT8_MIN;
volatile int16_t x129 = -217;
uint16_t x133 = UINT16_MAX;
int32_t t25 = 10;
uint16_t x138 = 1680U;
int8_t x144 = -1;
int32_t t27 = 241;
int64_t x181 = INT64_MAX;
static uint64_t x190 = 58972916544157789LLU;
volatile int32_t t33 = 1885555;
int16_t x198 = INT16_MIN;
int16_t x200 = INT16_MIN;
volatile int32_t t34 = -2021;
int32_t x203 = -1;
int32_t t35 = -231105830;
uint64_t x206 = 23557529488463LLU;
volatile int32_t t36 = -29;
int8_t x215 = -1;
int16_t x216 = INT16_MIN;
volatile int32_t t37 = 8384920;
int32_t t38 = -22;
volatile uint8_t x225 = UINT8_MAX;
static volatile int32_t t40 = -2;
uint8_t x243 = 25U;
volatile int32_t t42 = -1;
static int64_t x252 = -1LL;
volatile int16_t x254 = -1;
int8_t x255 = INT8_MIN;
int16_t x257 = INT16_MIN;
volatile int16_t x260 = INT16_MAX;
int8_t x263 = INT8_MIN;
uint32_t x267 = 27U;
uint8_t x271 = UINT8_MAX;
static int64_t x278 = -24412907721LL;
uint8_t x280 = UINT8_MAX;
static int32_t t49 = 0;
int64_t x293 = INT64_MAX;
volatile int64_t x304 = -1LL;
static volatile int8_t x310 = -61;
int16_t x320 = INT16_MIN;
uint32_t x334 = UINT32_MAX;
static volatile int8_t x338 = INT8_MIN;
int32_t t60 = 331;
volatile int8_t x342 = INT8_MIN;
volatile int32_t t63 = 298980;
uint64_t x356 = 12145LLU;
static int16_t x365 = INT16_MIN;
int32_t t68 = -21848487;
uint8_t x407 = UINT8_MAX;
int32_t x418 = 6;
static int64_t x420 = INT64_MIN;
int32_t x424 = INT32_MIN;
int8_t x434 = INT8_MIN;
uint16_t x446 = UINT16_MAX;
volatile int64_t x453 = -1LL;
volatile int32_t t78 = -484700;
volatile int16_t x462 = INT16_MIN;
volatile int32_t t81 = 494261;
int16_t x478 = INT16_MIN;
int8_t x489 = -1;
volatile int32_t x492 = -1;
uint16_t x493 = UINT16_MAX;
int64_t x494 = -3918LL;
uint64_t x496 = UINT64_MAX;
volatile int32_t t86 = 770697;
volatile uint16_t x500 = UINT16_MAX;
int64_t x501 = INT64_MIN;
int32_t t89 = 6029756;
int32_t t90 = -58263016;
int64_t x521 = 590512550130LL;
int32_t x527 = -196;
uint32_t x531 = UINT32_MAX;
uint16_t x532 = UINT16_MAX;
int32_t t94 = 1;
int8_t x551 = -12;
static volatile int32_t t97 = 982242631;


void f0(void) {
	int32_t x2 = -1;
	volatile int8_t x3 = INT8_MAX;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 1;

	t0 = ((x1/(x2*x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	static int8_t x6 = 7;
	volatile int32_t t1 = -167892826;

	t1 = ((x5/(x6*x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	volatile int32_t x12 = INT32_MAX;
	static int32_t t2 = 25253;

	t2 = ((x9/(x10*x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 42203U;
	volatile uint64_t x14 = 9107469622LLU;
	static int8_t x15 = INT8_MIN;
	int64_t x16 = -1LL;
	volatile int32_t t3 = 183863;

	t3 = ((x13/(x14*x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 6;
	static uint64_t x18 = 5684554005653113LLU;
	int8_t x20 = INT8_MAX;
	int32_t t4 = -15832625;

	t4 = ((x17/(x18*x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	volatile int16_t x22 = -9;

	t5 = ((x21/(x22*x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = INT16_MIN;
	static int16_t x27 = -1;
	volatile int8_t x28 = 0;
	int32_t t6 = -28150097;

	t6 = ((x25/(x26*x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 75195U;
	static uint32_t x31 = 51623U;
	int8_t x32 = 1;
	static int32_t t7 = -107;

	t7 = ((x29/(x30*x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	volatile uint64_t x35 = 56908LLU;
	int64_t x36 = 1454531345LL;
	int32_t t8 = 36077051;

	t8 = ((x33/(x34*x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -1;
	uint16_t x39 = UINT16_MAX;

	t9 = ((x37/(x38*x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = INT64_MIN;
	int8_t x50 = -10;
	volatile int16_t x51 = INT16_MIN;
	volatile int32_t t10 = -6632;

	t10 = ((x49/(x50*x51))==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	int8_t x54 = -1;
	uint8_t x55 = UINT8_MAX;
	volatile int32_t t11 = -569;

	t11 = ((x53/(x54*x55))==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x57 = UINT16_MAX;
	int8_t x59 = INT8_MIN;
	static uint16_t x60 = UINT16_MAX;
	volatile int32_t t12 = -957479394;

	t12 = ((x57/(x58*x59))==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = -1LL;
	volatile int16_t x62 = -1;
	volatile uint64_t x63 = UINT64_MAX;
	static int8_t x64 = INT8_MIN;
	static int32_t t13 = 1;

	t13 = ((x61/(x62*x63))==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 5U;
	static int32_t x66 = -1;
	uint16_t x68 = 65U;
	int32_t t14 = 12468;

	t14 = ((x65/(x66*x67))==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = -244LL;
	int64_t x70 = -15458009469508LL;
	volatile int64_t x71 = -1LL;
	int32_t t15 = 56896602;

	t15 = ((x69/(x70*x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x74 = INT16_MAX;
	int64_t x76 = INT64_MAX;
	static volatile int32_t t16 = 9365;

	t16 = ((x73/(x74*x75))==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = 0;
	uint8_t x78 = 26U;
	static int8_t x79 = INT8_MIN;
	uint8_t x80 = 88U;

	t17 = ((x77/(x78*x79))==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x97 = 1715U;
	int32_t x99 = 3046;
	volatile int32_t t18 = -1010219;

	t18 = ((x97/(x98*x99))==x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = -1;
	static int32_t x106 = 20966;
	uint32_t x108 = 2465U;
	int32_t t19 = -1014695;

	t19 = ((x105/(x106*x107))==x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x109 = INT64_MIN;
	int8_t x110 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;
	static int32_t x112 = INT32_MIN;
	int32_t t20 = -44977;

	t20 = ((x109/(x110*x111))==x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x115 = 102U;
	volatile int32_t t21 = 343758459;

	t21 = ((x113/(x114*x115))==x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MIN;
	volatile int8_t x123 = -22;
	static int32_t x124 = 7;
	static volatile int32_t t22 = 47001;

	t22 = ((x121/(x122*x123))==x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = -1;
	int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MAX;
	volatile int32_t x128 = -42991348;
	volatile int32_t t23 = 129;

	t23 = ((x125/(x126*x127))==x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x130 = INT8_MAX;
	uint8_t x131 = 57U;
	static int16_t x132 = INT16_MIN;
	int32_t t24 = 3;

	t24 = ((x129/(x130*x131))==x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x134 = 10377366047815369LLU;
	uint8_t x135 = UINT8_MAX;
	static uint8_t x136 = 44U;

	t25 = ((x133/(x134*x135))==x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x137 = UINT8_MAX;
	static int32_t x139 = -1;
	static uint8_t x140 = 93U;
	int32_t t26 = 293;

	t26 = ((x137/(x138*x139))==x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x141 = UINT64_MAX;
	int16_t x142 = -1;
	int16_t x143 = INT16_MIN;

	t27 = ((x141/(x142*x143))==x144);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = -1;
	int32_t x166 = -49058;
	int16_t x167 = -111;
	int8_t x168 = INT8_MIN;
	volatile int32_t t28 = 11962;

	t28 = ((x165/(x166*x167))==x168);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x169 = -382;
	int16_t x170 = -1;
	int32_t x171 = -1;
	uint8_t x172 = 1U;
	int32_t t29 = 11910514;

	t29 = ((x169/(x170*x171))==x172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x173 = 271310373U;
	int64_t x174 = -1LL;
	uint64_t x175 = 8613LLU;
	int32_t x176 = INT32_MIN;
	int32_t t30 = 196;

	t30 = ((x173/(x174*x175))==x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x182 = INT16_MAX;
	volatile int8_t x183 = -1;
	uint32_t x184 = 2U;
	volatile int32_t t31 = 289757427;

	t31 = ((x181/(x182*x183))==x184);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x189 = INT64_MAX;
	volatile int64_t x191 = 2198704050603177815LL;
	int32_t x192 = INT32_MAX;
	int32_t t32 = -829;

	t32 = ((x189/(x190*x191))==x192);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x193 = -1LL;
	static uint64_t x194 = 832LLU;
	int8_t x195 = INT8_MAX;
	uint64_t x196 = 2541LLU;

	t33 = ((x193/(x194*x195))==x196);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x197 = -50;
	uint8_t x199 = 35U;

	t34 = ((x197/(x198*x199))==x200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x201 = -1;
	int16_t x202 = -2780;
	uint8_t x204 = UINT8_MAX;

	t35 = ((x201/(x202*x203))==x204);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x205 = 1;
	int8_t x207 = -1;
	uint16_t x208 = 768U;

	t36 = ((x205/(x206*x207))==x208);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x213 = INT32_MAX;
	int32_t x214 = -1;

	t37 = ((x213/(x214*x215))==x216);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x221 = INT64_MIN;
	uint16_t x222 = 58U;
	uint16_t x223 = 1U;
	int16_t x224 = INT16_MIN;

	t38 = ((x221/(x222*x223))==x224);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x226 = -1;
	int8_t x227 = -2;
	volatile uint64_t x228 = UINT64_MAX;
	int32_t t39 = 1;

	t39 = ((x225/(x226*x227))==x228);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = -1;
	int8_t x231 = -55;
	volatile uint32_t x232 = 143U;

	t40 = ((x229/(x230*x231))==x232);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x241 = 0;
	static uint64_t x242 = 288374688471LLU;
	int8_t x244 = INT8_MAX;
	int32_t t41 = -175;

	t41 = ((x241/(x242*x243))==x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x245 = 1;
	uint16_t x246 = 2550U;
	volatile uint32_t x247 = 498U;
	int16_t x248 = -1755;

	t42 = ((x245/(x246*x247))==x248);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x249 = -642;
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = INT8_MIN;
	volatile int32_t t43 = -24921196;

	t43 = ((x249/(x250*x251))==x252);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x253 = 862U;
	int8_t x256 = INT8_MIN;
	volatile int32_t t44 = -410169;

	t44 = ((x253/(x254*x255))==x256);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x258 = 6U;
	uint8_t x259 = 43U;
	volatile int32_t t45 = 236;

	t45 = ((x257/(x258*x259))==x260);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x261 = INT64_MIN;
	uint64_t x262 = 89455888798LLU;
	volatile uint32_t x264 = 7231651U;
	volatile int32_t t46 = -3228081;

	t46 = ((x261/(x262*x263))==x264);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x265 = 26606U;
	uint16_t x266 = UINT16_MAX;
	int16_t x268 = -6;
	volatile int32_t t47 = -14;

	t47 = ((x265/(x266*x267))==x268);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x269 = 3511U;
	int16_t x270 = -1;
	int32_t x272 = INT32_MIN;
	volatile int32_t t48 = 20527;

	t48 = ((x269/(x270*x271))==x272);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x277 = 27568U;
	volatile uint64_t x279 = 13568914LLU;

	t49 = ((x277/(x278*x279))==x280);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x285 = UINT8_MAX;
	volatile int16_t x286 = 4;
	int32_t x287 = 4594387;
	static int32_t x288 = INT32_MIN;
	volatile int32_t t50 = 7729;

	t50 = ((x285/(x286*x287))==x288);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x294 = 2U;
	int16_t x295 = INT16_MIN;
	static uint8_t x296 = 33U;
	int32_t t51 = -1;

	t51 = ((x293/(x294*x295))==x296);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x301 = 371U;
	static int16_t x302 = INT16_MIN;
	uint32_t x303 = 24645U;
	int32_t t52 = -280055293;

	t52 = ((x301/(x302*x303))==x304);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x305 = 218460596U;
	static int16_t x306 = -2010;
	uint32_t x307 = 11238U;
	static volatile int32_t x308 = 891130;
	int32_t t53 = -21;

	t53 = ((x305/(x306*x307))==x308);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x309 = INT64_MIN;
	int16_t x311 = INT16_MAX;
	static volatile int32_t x312 = INT32_MIN;
	volatile int32_t t54 = 53321;

	t54 = ((x309/(x310*x311))==x312);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = -1;
	static volatile uint8_t x315 = UINT8_MAX;
	uint32_t x316 = UINT32_MAX;
	static volatile int32_t t55 = 138838;

	t55 = ((x313/(x314*x315))==x316);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x317 = -1;
	int16_t x318 = INT16_MIN;
	volatile uint32_t x319 = 14663009U;
	int32_t t56 = 27;

	t56 = ((x317/(x318*x319))==x320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x321 = 246140089863647LL;
	int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t57 = -63835833;

	t57 = ((x321/(x322*x323))==x324);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x325 = 2U;
	uint32_t x326 = 1270969298U;
	uint32_t x327 = 846754183U;
	uint8_t x328 = 88U;
	volatile int32_t t58 = 20239340;

	t58 = ((x325/(x326*x327))==x328);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x333 = INT16_MIN;
	uint64_t x335 = 3356774563952231LLU;
	static volatile int16_t x336 = INT16_MAX;
	int32_t t59 = 8;

	t59 = ((x333/(x334*x335))==x336);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x337 = 256427U;
	uint16_t x339 = 1412U;
	static uint8_t x340 = 7U;

	t60 = ((x337/(x338*x339))==x340);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x341 = INT8_MIN;
	uint32_t x343 = 13936U;
	int8_t x344 = -2;
	volatile int32_t t61 = 2967803;

	t61 = ((x341/(x342*x343))==x344);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x345 = 3699U;
	uint16_t x346 = 1U;
	volatile int32_t x347 = INT32_MIN;
	uint64_t x348 = 83769532357LLU;
	int32_t t62 = 23;

	t62 = ((x345/(x346*x347))==x348);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x349 = 2268LLU;
	uint64_t x350 = 188144278563531LLU;
	uint16_t x351 = 16U;
	int64_t x352 = INT64_MAX;

	t63 = ((x349/(x350*x351))==x352);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x353 = -1;
	static int16_t x354 = -1947;
	volatile uint64_t x355 = UINT64_MAX;
	int32_t t64 = 33979505;

	t64 = ((x353/(x354*x355))==x356);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x357 = 10U;
	uint16_t x358 = UINT16_MAX;
	int32_t x359 = -10452;
	static uint64_t x360 = UINT64_MAX;
	volatile int32_t t65 = -1;

	t65 = ((x357/(x358*x359))==x360);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x366 = INT8_MAX;
	int16_t x367 = INT16_MAX;
	int16_t x368 = -1;
	static volatile int32_t t66 = -112860198;

	t66 = ((x365/(x366*x367))==x368);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x397 = INT32_MAX;
	int8_t x398 = -1;
	int8_t x399 = INT8_MAX;
	int16_t x400 = INT16_MAX;
	int32_t t67 = 97342647;

	t67 = ((x397/(x398*x399))==x400);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x401 = UINT16_MAX;
	int32_t x402 = INT32_MIN;
	uint32_t x403 = 472351203U;
	uint8_t x404 = 2U;

	t68 = ((x401/(x402*x403))==x404);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x405 = UINT64_MAX;
	uint32_t x406 = UINT32_MAX;
	uint64_t x408 = UINT64_MAX;
	int32_t t69 = -4012;

	t69 = ((x405/(x406*x407))==x408);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x413 = INT8_MIN;
	int32_t x414 = INT32_MAX;
	uint64_t x415 = UINT64_MAX;
	static int32_t x416 = 868465567;
	static int32_t t70 = 8501;

	t70 = ((x413/(x414*x415))==x416);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x417 = UINT64_MAX;
	volatile int16_t x419 = -1551;
	volatile int32_t t71 = -25209;

	t71 = ((x417/(x418*x419))==x420);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x421 = UINT16_MAX;
	uint16_t x422 = UINT16_MAX;
	volatile int8_t x423 = INT8_MAX;
	static int32_t t72 = -763924640;

	t72 = ((x421/(x422*x423))==x424);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x429 = UINT64_MAX;
	uint8_t x430 = 7U;
	int16_t x431 = INT16_MIN;
	int16_t x432 = -1;
	int32_t t73 = -177680;

	t73 = ((x429/(x430*x431))==x432);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x433 = UINT32_MAX;
	volatile uint32_t x435 = 205U;
	volatile int64_t x436 = INT64_MIN;
	volatile int32_t t74 = 1163690;

	t74 = ((x433/(x434*x435))==x436);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x437 = UINT16_MAX;
	int8_t x438 = 21;
	int16_t x439 = -21;
	volatile uint8_t x440 = UINT8_MAX;
	int32_t t75 = 2786;

	t75 = ((x437/(x438*x439))==x440);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x441 = 8830560;
	static int8_t x442 = -1;
	int64_t x443 = INT64_MAX;
	int32_t x444 = -321240717;
	volatile int32_t t76 = 464708250;

	t76 = ((x441/(x442*x443))==x444);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x445 = -3069;
	volatile uint64_t x447 = 20717LLU;
	volatile int32_t x448 = INT32_MIN;
	volatile int32_t t77 = 59072261;

	t77 = ((x445/(x446*x447))==x448);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x454 = 71364U;
	int64_t x455 = 136LL;
	volatile uint32_t x456 = 322414U;

	t78 = ((x453/(x454*x455))==x456);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x457 = -1;
	volatile int8_t x458 = -1;
	uint64_t x459 = 14LLU;
	int8_t x460 = INT8_MIN;
	int32_t t79 = -14;

	t79 = ((x457/(x458*x459))==x460);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x461 = INT16_MIN;
	uint64_t x463 = 549081785851LLU;
	static volatile uint8_t x464 = 17U;
	static int32_t t80 = -713720;

	t80 = ((x461/(x462*x463))==x464);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x465 = -1272709592534332LL;
	uint64_t x466 = 836460029LLU;
	int32_t x467 = INT32_MIN;
	uint8_t x468 = 7U;

	t81 = ((x465/(x466*x467))==x468);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x469 = 18244U;
	uint8_t x470 = 3U;
	static volatile int16_t x471 = 232;
	uint8_t x472 = 105U;
	volatile int32_t t82 = -215;

	t82 = ((x469/(x470*x471))==x472);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x477 = -26;
	static int32_t x479 = -10581;
	int16_t x480 = 1;
	int32_t t83 = -42;

	t83 = ((x477/(x478*x479))==x480);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x481 = 1U;
	uint16_t x482 = 639U;
	static volatile uint16_t x483 = 3546U;
	uint32_t x484 = UINT32_MAX;
	volatile int32_t t84 = 200;

	t84 = ((x481/(x482*x483))==x484);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x490 = -1095378092654LL;
	volatile int16_t x491 = INT16_MIN;
	int32_t t85 = 41;

	t85 = ((x489/(x490*x491))==x492);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x495 = 4;

	t86 = ((x493/(x494*x495))==x496);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x497 = INT64_MIN;
	int16_t x498 = INT16_MIN;
	volatile int8_t x499 = INT8_MIN;
	static volatile int32_t t87 = 96764977;

	t87 = ((x497/(x498*x499))==x500);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x502 = -51;
	uint64_t x503 = UINT64_MAX;
	volatile uint32_t x504 = UINT32_MAX;
	static volatile int32_t t88 = -1;

	t88 = ((x501/(x502*x503))==x504);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x505 = INT32_MIN;
	int16_t x506 = INT16_MAX;
	uint8_t x507 = UINT8_MAX;
	int16_t x508 = -8816;

	t89 = ((x505/(x506*x507))==x508);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x509 = INT8_MIN;
	int16_t x510 = -1;
	static uint16_t x511 = 9U;
	int64_t x512 = -1LL;

	t90 = ((x509/(x510*x511))==x512);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x517 = 30791;
	uint16_t x518 = 22747U;
	int16_t x519 = INT16_MAX;
	int32_t x520 = INT32_MIN;
	static int32_t t91 = 59911144;

	t91 = ((x517/(x518*x519))==x520);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x522 = -1;
	uint16_t x523 = 4U;
	int32_t x524 = INT32_MIN;
	int32_t t92 = -9066;

	t92 = ((x521/(x522*x523))==x524);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x525 = UINT8_MAX;
	int8_t x526 = -7;
	volatile int8_t x528 = INT8_MIN;
	volatile int32_t t93 = 0;

	t93 = ((x525/(x526*x527))==x528);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x529 = INT8_MAX;
	int8_t x530 = -1;

	t94 = ((x529/(x530*x531))==x532);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x533 = -91412907LL;
	uint16_t x534 = 1U;
	volatile uint8_t x535 = 1U;
	volatile int64_t x536 = INT64_MAX;
	volatile int32_t t95 = 949;

	t95 = ((x533/(x534*x535))==x536);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x537 = -188788292;
	uint32_t x538 = 47705720U;
	uint32_t x539 = 7082U;
	uint64_t x540 = 269364LLU;
	static int32_t t96 = 15884292;

	t96 = ((x537/(x538*x539))==x540);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x549 = 368052140800410917LLU;
	int64_t x550 = -1LL;
	int32_t x552 = INT32_MIN;

	t97 = ((x549/(x550*x551))==x552);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x557 = -634;
	int8_t x558 = INT8_MIN;
	uint8_t x559 = 6U;
	static volatile uint8_t x560 = 16U;
	volatile int32_t t98 = -26128;

	t98 = ((x557/(x558*x559))==x560);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x561 = -1;
	int8_t x562 = -1;
	static int16_t x563 = 418;
	volatile uint8_t x564 = UINT8_MAX;
	static volatile int32_t t99 = 788;

	t99 = ((x561/(x562*x563))==x564);

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

