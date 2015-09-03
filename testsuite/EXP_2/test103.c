#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 6683923U;
uint16_t x7 = UINT16_MAX;
volatile int32_t x9 = INT32_MAX;
uint64_t x14 = 5085831406089399750LLU;
int8_t x15 = INT8_MIN;
int8_t x18 = -1;
volatile int32_t t5 = -11;
int16_t x25 = -1;
int8_t x28 = INT8_MIN;
int32_t t8 = -386775787;
int32_t x40 = -1;
int32_t x41 = -33;
static int8_t x53 = INT8_MIN;
int32_t x54 = -1;
int32_t x58 = -1;
volatile uint16_t x59 = 252U;
int64_t t14 = INT64_MAX;
static int32_t x67 = INT32_MIN;
volatile int32_t t16 = 1017650;
int16_t x74 = INT16_MAX;
int32_t x80 = -1;
int32_t x82 = INT32_MIN;
volatile int64_t t22 = INT64_MIN;
static volatile int64_t x117 = 468938LL;
uint8_t x130 = 35U;
int64_t x134 = -1LL;
int8_t x135 = INT8_MAX;
volatile uint64_t t26 = UINT64_MAX;
uint64_t x137 = 4796428763774914LLU;
static int16_t x141 = -1;
int32_t x145 = INT32_MIN;
uint64_t x148 = UINT64_MAX;
int32_t x149 = 972031;
uint32_t x152 = 0U;
static int32_t t32 = 183271;
int32_t t33 = -6280;
int64_t t34 = -3LL;
int64_t x186 = -347LL;
volatile uint32_t x195 = 71U;
int32_t x206 = 377937;
static int8_t x213 = -63;
volatile int32_t t43 = -28627709;
uint16_t x217 = 49U;
volatile int32_t x220 = -1;
static int32_t x221 = INT32_MAX;
int16_t x235 = -12;
uint32_t t50 = UINT32_MAX;
int16_t x245 = 0;
int64_t x247 = INT64_MAX;
int8_t x271 = -54;
volatile uint16_t x280 = UINT16_MAX;
uint8_t x299 = 3U;
int32_t x300 = INT32_MIN;
static uint64_t x302 = UINT64_MAX;
int32_t x303 = -1;
int32_t x306 = 2463;
int32_t x307 = INT32_MIN;
volatile int32_t t71 = 1;
uint8_t x343 = 1U;
volatile uint8_t x346 = 16U;
int32_t x350 = -52131660;
int32_t t74 = -2781259;
int8_t x354 = -1;
int8_t x365 = INT8_MAX;
volatile uint16_t x369 = UINT16_MAX;
int64_t x372 = -1LL;
volatile uint16_t x377 = UINT16_MAX;
static int32_t x380 = INT32_MIN;
volatile int32_t t81 = INT32_MIN;
int8_t x385 = INT8_MAX;
volatile int32_t x386 = 359194594;
volatile uint16_t x390 = 32474U;
static volatile int32_t t83 = 0;
uint64_t x400 = 308072719358781LLU;
int32_t t85 = 255949;
int32_t x417 = 2185;
int8_t x418 = 7;
uint8_t x420 = 16U;
int32_t x424 = -9;
int8_t x430 = INT8_MIN;
int64_t x436 = INT64_MIN;
uint64_t x439 = 58184604306401413LLU;
volatile uint64_t x440 = 20520238653163150LLU;
static uint8_t x443 = UINT8_MAX;
int32_t t92 = -3509;
volatile int16_t x447 = INT16_MIN;
volatile int32_t x448 = -1;
volatile uint8_t x452 = 33U;
static int64_t x453 = -1LL;
int32_t t96 = -3162470;
int32_t x469 = -1782;


void f0(void) {
	uint16_t x1 = 519U;
	volatile int16_t x2 = INT16_MIN;
	static volatile uint8_t x3 = 53U;
	uint32_t x4 = 7755186U;

	t0 = ((x1==(x2+x3))|x4);

	if (t0 != 7755186U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint16_t x6 = 1477U;
	uint8_t x8 = 10U;
	static int32_t t1 = -1561733;

	t1 = ((x5==(x6+x7))|x8);

	if (t1 != 10) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = -1;
	volatile uint32_t x11 = 271855U;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -762212506;

	t2 = ((x9==(x10+x11))|x12);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -22653;

	t3 = ((x13==(x14+x15))|x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 38032781U;
	volatile int64_t x19 = -1LL;
	int32_t x20 = -1;
	static volatile int32_t t4 = -503558378;

	t4 = ((x17==(x18+x19))|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -10114;
	volatile int32_t x22 = INT32_MIN;
	uint32_t x23 = 1009927U;
	int16_t x24 = INT16_MIN;

	t5 = ((x21==(x22+x23))|x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x26 = UINT64_MAX;
	volatile uint8_t x27 = UINT8_MAX;
	volatile int32_t t6 = 49;

	t6 = ((x25==(x26+x27))|x28);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -37;
	int8_t x30 = 63;
	int8_t x31 = INT8_MIN;
	volatile int8_t x32 = 5;
	int32_t t7 = -986;

	t7 = ((x29==(x30+x31))|x32);

	if (t7 != 5) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -39;
	int32_t x34 = -1;
	volatile uint32_t x35 = 9664U;
	volatile int8_t x36 = -1;

	t8 = ((x33==(x34+x35))|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -768;
	volatile uint32_t x38 = 12320829U;
	uint32_t x39 = 95735U;
	static int32_t t9 = 5250;

	t9 = ((x37==(x38+x39))|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 6LLU;
	int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MAX;
	volatile int32_t t10 = -585;

	t10 = ((x41==(x42+x43))|x44);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	int16_t x46 = INT16_MIN;
	volatile int16_t x47 = -1;
	int8_t x48 = -1;
	volatile int32_t t11 = 3746958;

	t11 = ((x45==(x46+x47))|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 1U;
	int32_t x50 = -1;
	volatile uint32_t x51 = 23636U;
	static int64_t x52 = INT64_MIN;
	volatile int64_t t12 = INT64_MIN;

	t12 = ((x49==(x50+x51))|x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x55 = UINT8_MAX;
	int32_t x56 = 1016;
	volatile int32_t t13 = 42234063;

	t13 = ((x53==(x54+x55))|x56);

	if (t13 != 1016) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int64_t x60 = INT64_MAX;

	t14 = ((x57==(x58+x59))|x60);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MAX;
	uint64_t x68 = 29LLU;
	uint64_t t15 = 9LLU;

	t15 = ((x65==(x66+x67))|x68);

	if (t15 != 29LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	int64_t x70 = INT64_MAX;
	static int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MIN;

	t16 = ((x69==(x70+x71))|x72);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	uint32_t x76 = 1279912U;
	static uint32_t t17 = 45456814U;

	t17 = ((x73==(x74+x75))|x76);

	if (t17 != 1279912U) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MAX;
	volatile int16_t x78 = INT16_MIN;
	volatile int16_t x79 = INT16_MIN;
	static int32_t t18 = -231007496;

	t18 = ((x77==(x78+x79))|x80);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = INT64_MIN;
	int32_t x83 = 8314315;
	volatile uint64_t x84 = 135868728LLU;
	volatile uint64_t t19 = 96836125135892391LLU;

	t19 = ((x81==(x82+x83))|x84);

	if (t19 != 135868728LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x97 = INT8_MAX;
	static int16_t x98 = 350;
	int64_t x99 = -14370624614LL;
	uint8_t x100 = UINT8_MAX;
	int32_t t20 = -3672;

	t20 = ((x97==(x98+x99))|x100);

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x101 = 407U;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 44882LLU;
	static int32_t x104 = -1;
	volatile int32_t t21 = 127;

	t21 = ((x101==(x102+x103))|x104);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	volatile int64_t x106 = INT64_MAX;
	int32_t x107 = -1;
	int64_t x108 = INT64_MIN;

	t22 = ((x105==(x106+x107))|x108);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 142743527055201206LLU;
	static int64_t x110 = -242LL;
	int16_t x111 = INT16_MIN;
	int16_t x112 = -1;
	int32_t t23 = 232054;

	t23 = ((x109==(x110+x111))|x112);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x118 = 0U;
	static int64_t x119 = INT64_MIN;
	static int32_t x120 = -1;
	static int32_t t24 = -503;

	t24 = ((x117==(x118+x119))|x120);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = INT64_MAX;
	static volatile int16_t x131 = 694;
	int8_t x132 = -2;
	int32_t t25 = 2;

	t25 = ((x129==(x130+x131))|x132);

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = 1LL;
	volatile uint64_t x136 = UINT64_MAX;

	t26 = ((x133==(x134+x135))|x136);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x138 = INT16_MAX;
	uint32_t x139 = UINT32_MAX;
	int64_t x140 = INT64_MIN;
	int64_t t27 = INT64_MIN;

	t27 = ((x137==(x138+x139))|x140);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x142 = UINT8_MAX;
	int32_t x143 = 178;
	volatile int16_t x144 = INT16_MAX;
	volatile int32_t t28 = -3052;

	t28 = ((x141==(x142+x143))|x144);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x146 = INT16_MIN;
	int8_t x147 = 0;
	static volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x145==(x146+x147))|x148);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x150 = INT64_MIN;
	volatile int16_t x151 = INT16_MAX;
	volatile uint32_t t30 = 19U;

	t30 = ((x149==(x150+x151))|x152);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = INT8_MIN;
	static uint64_t x154 = 152602174904LLU;
	int8_t x155 = INT8_MAX;
	int16_t x156 = 1027;
	volatile int32_t t31 = 242;

	t31 = ((x153==(x154+x155))|x156);

	if (t31 != 1027) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x157 = 772175936LLU;
	int8_t x158 = -1;
	static int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MAX;

	t32 = ((x157==(x158+x159))|x160);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x165 = 268U;
	int64_t x166 = -471LL;
	uint32_t x167 = 16188160U;
	static int16_t x168 = 620;

	t33 = ((x165==(x166+x167))|x168);

	if (t33 != 620) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x173 = 345786U;
	int16_t x174 = -1;
	int8_t x175 = INT8_MAX;
	volatile int64_t x176 = -1LL;

	t34 = ((x173==(x174+x175))|x176);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x177 = 61912133U;
	volatile uint8_t x178 = UINT8_MAX;
	static int64_t x179 = -1LL;
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x177==(x178+x179))|x180);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x181 = 120272U;
	uint8_t x182 = 88U;
	int32_t x183 = 650918;
	int16_t x184 = INT16_MIN;
	int32_t t36 = -61139;

	t36 = ((x181==(x182+x183))|x184);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x185 = 88U;
	uint64_t x187 = 53LLU;
	int64_t x188 = 1705439479009146LL;
	int64_t t37 = -2LL;

	t37 = ((x185==(x186+x187))|x188);

	if (t37 != 1705439479009146LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x189 = 5;
	volatile uint16_t x190 = 378U;
	int8_t x191 = -23;
	static int32_t x192 = -1;
	volatile int32_t t38 = 511;

	t38 = ((x189==(x190+x191))|x192);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x193 = 1516U;
	int32_t x194 = INT32_MIN;
	int32_t x196 = -850;
	volatile int32_t t39 = -1498618;

	t39 = ((x193==(x194+x195))|x196);

	if (t39 != -850) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x197 = INT8_MIN;
	volatile int8_t x198 = -10;
	uint8_t x199 = UINT8_MAX;
	uint16_t x200 = 5884U;
	static volatile int32_t t40 = 7949239;

	t40 = ((x197==(x198+x199))|x200);

	if (t40 != 5884) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x201 = 995726925LLU;
	volatile int8_t x202 = INT8_MIN;
	uint8_t x203 = UINT8_MAX;
	int64_t x204 = -55LL;
	int64_t t41 = 199829908383155LL;

	t41 = ((x201==(x202+x203))|x204);

	if (t41 != -55LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = -1;
	int8_t x207 = INT8_MAX;
	int8_t x208 = 1;
	int32_t t42 = -3865580;

	t42 = ((x205==(x206+x207))|x208);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x214 = -3;
	int16_t x215 = INT16_MIN;
	static uint8_t x216 = 3U;

	t43 = ((x213==(x214+x215))|x216);

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x218 = -4639477;
	uint64_t x219 = UINT64_MAX;
	int32_t t44 = 7369109;

	t44 = ((x217==(x218+x219))|x220);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	static int16_t x224 = INT16_MIN;
	int32_t t45 = 1623784;

	t45 = ((x221==(x222+x223))|x224);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x225 = -5;
	uint32_t x226 = 1910929U;
	uint64_t x227 = UINT64_MAX;
	volatile uint32_t x228 = 70U;
	uint32_t t46 = 1074194U;

	t46 = ((x225==(x226+x227))|x228);

	if (t46 != 70U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = -5836;
	int16_t x230 = -7971;
	uint16_t x231 = 0U;
	int8_t x232 = INT8_MIN;
	int32_t t47 = -80853;

	t47 = ((x229==(x230+x231))|x232);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x233 = 192993;
	uint64_t x234 = 25292454479966621LLU;
	static volatile int64_t x236 = 181LL;
	volatile int64_t t48 = 33LL;

	t48 = ((x233==(x234+x235))|x236);

	if (t48 != 181LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = INT16_MIN;
	volatile int32_t x238 = -4047639;
	static volatile int64_t x239 = 24693LL;
	int8_t x240 = -4;
	volatile int32_t t49 = 26302;

	t49 = ((x237==(x238+x239))|x240);

	if (t49 != -4) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MIN;
	volatile int64_t x243 = -1LL;
	uint32_t x244 = UINT32_MAX;

	t50 = ((x241==(x242+x243))|x244);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x246 = -1;
	static uint32_t x248 = UINT32_MAX;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = ((x245==(x246+x247))|x248);

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x249 = UINT16_MAX;
	uint64_t x250 = 35076LLU;
	int8_t x251 = -1;
	int8_t x252 = INT8_MAX;
	volatile int32_t t52 = 61;

	t52 = ((x249==(x250+x251))|x252);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x253 = -1LL;
	uint16_t x254 = 26241U;
	int16_t x255 = -54;
	int32_t x256 = INT32_MIN;
	volatile int32_t t53 = INT32_MIN;

	t53 = ((x253==(x254+x255))|x256);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x257 = 6132937073678LLU;
	uint32_t x258 = 22446073U;
	uint8_t x259 = 2U;
	static int8_t x260 = 7;
	int32_t t54 = -430;

	t54 = ((x257==(x258+x259))|x260);

	if (t54 != 7) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x265 = INT16_MIN;
	uint8_t x266 = 13U;
	static volatile uint8_t x267 = 60U;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t55 = 99;

	t55 = ((x265==(x266+x267))|x268);

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x269 = INT8_MAX;
	int8_t x270 = INT8_MIN;
	uint64_t x272 = 175227046234LLU;
	uint64_t t56 = 54601933946675LLU;

	t56 = ((x269==(x270+x271))|x272);

	if (t56 != 175227046234LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x273 = UINT32_MAX;
	int16_t x274 = INT16_MAX;
	static uint8_t x275 = 122U;
	int32_t x276 = INT32_MAX;
	volatile int32_t t57 = INT32_MAX;

	t57 = ((x273==(x274+x275))|x276);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = INT32_MAX;
	static uint64_t x278 = 423545LLU;
	int64_t x279 = INT64_MAX;
	static int32_t t58 = -808;

	t58 = ((x277==(x278+x279))|x280);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = -5636367305424925LL;
	static int64_t x282 = INT64_MAX;
	int16_t x283 = INT16_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t59 = -4;

	t59 = ((x281==(x282+x283))|x284);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x285 = INT16_MIN;
	uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	int64_t x288 = -128LL;
	volatile int64_t t60 = -24404854LL;

	t60 = ((x285==(x286+x287))|x288);

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x293 = -1;
	int8_t x294 = -7;
	static uint32_t x295 = 486087U;
	uint32_t x296 = UINT32_MAX;
	uint32_t t61 = UINT32_MAX;

	t61 = ((x293==(x294+x295))|x296);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x297 = 1U;
	int64_t x298 = INT64_MIN;
	int32_t t62 = INT32_MIN;

	t62 = ((x297==(x298+x299))|x300);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x301 = UINT64_MAX;
	int8_t x304 = INT8_MAX;
	volatile int32_t t63 = 94944;

	t63 = ((x301==(x302+x303))|x304);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x305 = INT8_MAX;
	uint16_t x308 = 14347U;
	static volatile int32_t t64 = -1;

	t64 = ((x305==(x306+x307))|x308);

	if (t64 != 14347) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = INT16_MIN;
	volatile int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	static int16_t x316 = -122;
	static volatile int32_t t65 = 428459511;

	t65 = ((x313==(x314+x315))|x316);

	if (t65 != -122) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = 21;
	uint16_t x319 = 2U;
	int16_t x320 = -1;
	volatile int32_t t66 = 2916;

	t66 = ((x317==(x318+x319))|x320);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = UINT32_MAX;
	int32_t x323 = -1;
	uint32_t x324 = 7U;
	uint32_t t67 = 7418970U;

	t67 = ((x321==(x322+x323))|x324);

	if (t67 != 7U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x325 = INT16_MAX;
	static int32_t x326 = 2533;
	int8_t x327 = 1;
	uint32_t x328 = UINT32_MAX;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = ((x325==(x326+x327))|x328);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = 5;
	int32_t x330 = INT32_MAX;
	static volatile int16_t x331 = INT16_MIN;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x329==(x330+x331))|x332);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x333 = INT64_MIN;
	volatile uint64_t x334 = UINT64_MAX;
	volatile int64_t x335 = INT64_MIN;
	int32_t x336 = -1;
	int32_t t70 = -2019;

	t70 = ((x333==(x334+x335))|x336);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x337 = UINT64_MAX;
	static uint8_t x338 = 25U;
	uint32_t x339 = 491561949U;
	int16_t x340 = INT16_MAX;

	t71 = ((x337==(x338+x339))|x340);

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x341 = 1U;
	static volatile int32_t x342 = -364;
	int64_t x344 = 484LL;
	int64_t t72 = 532484LL;

	t72 = ((x341==(x342+x343))|x344);

	if (t72 != 484LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = INT32_MIN;
	int32_t x347 = 13344769;
	uint16_t x348 = UINT16_MAX;
	int32_t t73 = -1;

	t73 = ((x345==(x346+x347))|x348);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x349 = 14584857499LL;
	static int16_t x351 = -1;
	volatile int16_t x352 = -1;

	t74 = ((x349==(x350+x351))|x352);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x353 = -1LL;
	volatile int64_t x355 = 1LL;
	volatile int16_t x356 = INT16_MIN;
	int32_t t75 = 48292115;

	t75 = ((x353==(x354+x355))|x356);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x357 = 234U;
	int64_t x358 = INT64_MIN;
	volatile uint64_t x359 = UINT64_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t76 = INT32_MIN;

	t76 = ((x357==(x358+x359))|x360);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x361 = INT32_MAX;
	volatile uint16_t x362 = 85U;
	int16_t x363 = -1;
	volatile int8_t x364 = -1;
	int32_t t77 = 0;

	t77 = ((x361==(x362+x363))|x364);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x366 = 6;
	volatile int64_t x367 = -2175633484749262LL;
	int16_t x368 = 24;
	int32_t t78 = 27;

	t78 = ((x365==(x366+x367))|x368);

	if (t78 != 24) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x370 = UINT8_MAX;
	static uint8_t x371 = 22U;
	static volatile int64_t t79 = 19922783730852LL;

	t79 = ((x369==(x370+x371))|x372);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x373 = INT8_MIN;
	static int8_t x374 = INT8_MIN;
	static uint64_t x375 = 69534154334995LLU;
	int64_t x376 = INT64_MAX;
	int64_t t80 = INT64_MAX;

	t80 = ((x373==(x374+x375))|x376);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x378 = 1;
	int64_t x379 = INT64_MIN;

	t81 = ((x377==(x378+x379))|x380);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x387 = 1308;
	static int8_t x388 = 0;
	int32_t t82 = 384361;

	t82 = ((x385==(x386+x387))|x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x389 = INT8_MAX;
	volatile int32_t x391 = -1;
	int16_t x392 = -1;

	t83 = ((x389==(x390+x391))|x392);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x397 = INT8_MAX;
	volatile int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MAX;
	volatile uint64_t t84 = 11344876478LLU;

	t84 = ((x397==(x398+x399))|x400);

	if (t84 != 308072719358781LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x405 = -1;
	int16_t x406 = INT16_MAX;
	int8_t x407 = -1;
	static int32_t x408 = 111442010;

	t85 = ((x405==(x406+x407))|x408);

	if (t85 != 111442010) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x409 = INT32_MAX;
	uint16_t x410 = 1U;
	volatile int32_t x411 = -1;
	volatile uint32_t x412 = 9U;
	volatile uint32_t t86 = 40743349U;

	t86 = ((x409==(x410+x411))|x412);

	if (t86 != 9U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x419 = INT8_MAX;
	volatile int32_t t87 = -1;

	t87 = ((x417==(x418+x419))|x420);

	if (t87 != 16) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x421 = INT32_MIN;
	uint64_t x422 = UINT64_MAX;
	static int16_t x423 = 2135;
	int32_t t88 = 1441;

	t88 = ((x421==(x422+x423))|x424);

	if (t88 != -9) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x429 = INT8_MAX;
	static volatile uint64_t x431 = 0LLU;
	static int16_t x432 = INT16_MIN;
	static volatile int32_t t89 = 20;

	t89 = ((x429==(x430+x431))|x432);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x433 = 0U;
	int16_t x434 = INT16_MIN;
	uint8_t x435 = 4U;
	static int64_t t90 = INT64_MIN;

	t90 = ((x433==(x434+x435))|x436);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x437 = -1;
	volatile int16_t x438 = INT16_MAX;
	uint64_t t91 = 185LLU;

	t91 = ((x437==(x438+x439))|x440);

	if (t91 != 20520238653163150LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x441 = 0U;
	uint16_t x442 = 8U;
	uint16_t x444 = 8047U;

	t92 = ((x441==(x442+x443))|x444);

	if (t92 != 8047) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x445 = 32754U;
	int32_t x446 = 775504697;
	volatile int32_t t93 = -55;

	t93 = ((x445==(x446+x447))|x448);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x449 = 1;
	static volatile uint64_t x450 = 511390367617409165LLU;
	uint32_t x451 = UINT32_MAX;
	int32_t t94 = -9618918;

	t94 = ((x449==(x450+x451))|x452);

	if (t94 != 33) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x454 = INT16_MAX;
	volatile int16_t x455 = INT16_MAX;
	int8_t x456 = 0;
	int32_t t95 = -758868;

	t95 = ((x453==(x454+x455))|x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x457 = -1;
	uint8_t x458 = UINT8_MAX;
	int32_t x459 = -2;
	static int16_t x460 = -1;

	t96 = ((x457==(x458+x459))|x460);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x461 = 727;
	int8_t x462 = 0;
	int32_t x463 = -1;
	uint8_t x464 = 1U;
	volatile int32_t t97 = -5;

	t97 = ((x461==(x462+x463))|x464);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x465 = 24592U;
	int16_t x466 = INT16_MIN;
	static int16_t x467 = INT16_MIN;
	int32_t x468 = INT32_MIN;
	volatile int32_t t98 = INT32_MIN;

	t98 = ((x465==(x466+x467))|x468);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x470 = -845;
	uint16_t x471 = UINT16_MAX;
	volatile int16_t x472 = INT16_MAX;
	int32_t t99 = -1293;

	t99 = ((x469==(x470+x471))|x472);

	if (t99 != 32767) { NG(); } else { ; }
	
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

