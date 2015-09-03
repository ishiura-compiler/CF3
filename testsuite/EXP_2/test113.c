#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t3 = -1;
int64_t x18 = 25LL;
volatile int32_t t5 = -22;
int16_t x26 = -8;
uint8_t x28 = UINT8_MAX;
int64_t x32 = INT64_MIN;
int32_t t7 = -5103925;
int8_t x46 = 8;
static int16_t x50 = 3;
static volatile int16_t x68 = INT16_MIN;
volatile uint32_t x69 = 22769U;
volatile int32_t t15 = 435;
volatile uint32_t x74 = UINT32_MAX;
uint8_t x76 = 67U;
volatile int32_t t16 = -371611174;
uint32_t x78 = 10915U;
static uint8_t x79 = 7U;
uint8_t x84 = UINT8_MAX;
int16_t x93 = -1;
int32_t x95 = INT32_MIN;
uint16_t x105 = 330U;
int64_t x106 = -1LL;
volatile int32_t t24 = -149236;
uint64_t x121 = 1027LLU;
uint8_t x123 = UINT8_MAX;
int16_t x126 = INT16_MAX;
uint16_t x133 = UINT16_MAX;
uint32_t x135 = UINT32_MAX;
uint16_t x137 = 294U;
volatile int32_t t31 = 479435;
int64_t x142 = -1LL;
uint64_t x143 = 835567977LLU;
static uint8_t x151 = 26U;
uint8_t x160 = 22U;
int8_t x165 = -1;
uint8_t x171 = UINT8_MAX;
uint8_t x178 = 8U;
int16_t x187 = -1;
volatile int64_t x193 = INT64_MIN;
int32_t t44 = 356;
int64_t x202 = 402LL;
int16_t x204 = -47;
int64_t x209 = INT64_MIN;
volatile uint16_t x210 = 317U;
int16_t x211 = INT16_MAX;
static volatile int32_t t49 = -628135;
int64_t x221 = -24LL;
uint8_t x222 = 6U;
int16_t x223 = INT16_MIN;
volatile uint64_t x225 = 8499843842LLU;
uint64_t x233 = 6281924282153791103LLU;
volatile int32_t x234 = 2;
static int32_t t53 = 25892;
int32_t x246 = 18046508;
volatile uint64_t x247 = 2220757LLU;
volatile int32_t t55 = -53968;
uint64_t x249 = UINT64_MAX;
uint8_t x251 = UINT8_MAX;
static int32_t t57 = 868343;
uint8_t x265 = 4U;
uint16_t x267 = 42U;
int64_t x273 = -13LL;
uint32_t x278 = 105327958U;
uint16_t x282 = 167U;
volatile uint32_t x286 = 6043U;
volatile int32_t x304 = INT32_MIN;
int64_t x311 = INT64_MAX;
int32_t x316 = -1;
static volatile int32_t x317 = INT32_MIN;
int32_t x324 = INT32_MIN;
volatile int32_t x330 = 101605163;
int16_t x332 = -4074;
static int32_t t72 = 3464272;
uint64_t x339 = UINT64_MAX;
uint16_t x350 = 9476U;
uint32_t x354 = 49473U;
int32_t x361 = INT32_MAX;
int64_t x364 = INT64_MIN;
static int32_t t78 = 2380172;
uint32_t x371 = 3U;
uint8_t x373 = 1U;
static int32_t x376 = 128989;
volatile int32_t t82 = 26550060;
int64_t x387 = INT64_MAX;
int32_t t85 = 13100940;
int64_t x396 = 459523LL;
int32_t t86 = 163492951;
uint16_t x398 = 451U;
int32_t t87 = 253;
static volatile int8_t x405 = INT8_MIN;
int32_t t90 = 10058448;
volatile uint8_t x418 = 0U;
int64_t x422 = INT64_MAX;
int16_t x427 = INT16_MAX;
volatile uint16_t x428 = 165U;
int32_t t93 = 8883757;
uint64_t x435 = 254LLU;
static int64_t x449 = INT64_MIN;
volatile int16_t x450 = INT16_MIN;
uint64_t x451 = 2072907049724143LLU;
static volatile uint16_t x452 = 11712U;


void f0(void) {
	static int8_t x1 = 1;
	volatile int32_t x2 = INT32_MIN;
	int8_t x3 = 49;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 2;

	t0 = ((x1<(x2+x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint8_t x6 = 53U;
	int16_t x7 = INT16_MAX;
	int64_t x8 = 36962462255LL;
	volatile int32_t t1 = 0;

	t1 = ((x5<(x6+x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int16_t x10 = -1;
	uint16_t x11 = 192U;
	uint32_t x12 = 1500575766U;
	int32_t t2 = -234731;

	t2 = ((x9<(x10+x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 1062;
	volatile uint8_t x14 = UINT8_MAX;
	uint64_t x15 = 55794241877LLU;
	int64_t x16 = -38225132662LL;

	t3 = ((x13<(x14+x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int8_t x19 = -3;
	volatile int16_t x20 = 29;
	static volatile int32_t t4 = 57125;

	t4 = ((x17<(x18+x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = 3;
	int8_t x22 = INT8_MIN;
	volatile int16_t x23 = INT16_MIN;
	static int64_t x24 = INT64_MIN;

	t5 = ((x21<(x22+x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -1;
	static int64_t x27 = -1539LL;
	int32_t t6 = 72055;

	t6 = ((x25<(x26+x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint16_t x30 = 10U;
	static uint16_t x31 = UINT16_MAX;

	t7 = ((x29<(x30+x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	static int16_t x34 = -1;
	int16_t x35 = 2;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = -190448413;

	t8 = ((x33<(x34+x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = -15791;
	volatile int64_t x42 = INT64_MIN;
	uint64_t x43 = 275502933LLU;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t9 = 2;

	t9 = ((x41<(x42+x43))<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int64_t x47 = INT64_MIN;
	int64_t x48 = INT64_MIN;
	volatile int32_t t10 = -1004681623;

	t10 = ((x45<(x46+x47))<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	static uint8_t x51 = UINT8_MAX;
	int16_t x52 = INT16_MAX;
	static int32_t t11 = 1;

	t11 = ((x49<(x50+x51))<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 1;
	static volatile int16_t x54 = 1573;
	volatile uint64_t x55 = UINT64_MAX;
	int64_t x56 = INT64_MAX;
	volatile int32_t t12 = -3;

	t12 = ((x53<(x54+x55))<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MIN;
	static volatile int16_t x58 = INT16_MIN;
	int64_t x59 = -4LL;
	uint32_t x60 = 6U;
	static int32_t t13 = 1336881;

	t13 = ((x57<(x58+x59))<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x65 = INT8_MIN;
	static uint64_t x66 = UINT64_MAX;
	static int8_t x67 = INT8_MIN;
	int32_t t14 = 334;

	t14 = ((x65<(x66+x67))<x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x70 = -2524;
	int16_t x71 = INT16_MIN;
	static uint16_t x72 = 24U;

	t15 = ((x69<(x70+x71))<x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 7U;
	static int64_t x75 = 159762217412LL;

	t16 = ((x73<(x74+x75))<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = INT32_MIN;
	uint64_t x80 = UINT64_MAX;
	static int32_t t17 = -4078891;

	t17 = ((x77<(x78+x79))<x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MIN;
	int8_t x82 = -8;
	int8_t x83 = INT8_MIN;
	int32_t t18 = 13681698;

	t18 = ((x81<(x82+x83))<x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	volatile int64_t x86 = INT64_MIN;
	static int16_t x87 = INT16_MAX;
	static int8_t x88 = -1;
	static volatile int32_t t19 = 0;

	t19 = ((x85<(x86+x87))<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x94 = INT8_MAX;
	int32_t x96 = 0;
	int32_t t20 = 11658;

	t20 = ((x93<(x94+x95))<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	static int16_t x98 = INT16_MAX;
	static int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;
	static int32_t t21 = 65645;

	t21 = ((x97<(x98+x99))<x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	uint16_t x102 = UINT16_MAX;
	int32_t x103 = -1;
	uint32_t x104 = 147U;
	static volatile int32_t t22 = 51703223;

	t22 = ((x101<(x102+x103))<x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x107 = -1;
	int8_t x108 = INT8_MAX;
	volatile int32_t t23 = -302754;

	t23 = ((x105<(x106+x107))<x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x109 = 2608LLU;
	uint64_t x110 = 919998056LLU;
	static int16_t x111 = 1;
	int64_t x112 = 1173332LL;

	t24 = ((x109<(x110+x111))<x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = INT64_MIN;
	static int32_t x114 = 23;
	uint8_t x115 = 0U;
	static int8_t x116 = INT8_MIN;
	int32_t t25 = 17;

	t25 = ((x113<(x114+x115))<x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MAX;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = UINT16_MAX;
	uint16_t x120 = 4063U;
	static int32_t t26 = 0;

	t26 = ((x117<(x118+x119))<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x122 = INT64_MIN;
	int16_t x124 = INT16_MAX;
	static volatile int32_t t27 = 17180032;

	t27 = ((x121<(x122+x123))<x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x125 = -1;
	int8_t x127 = -8;
	int8_t x128 = 1;
	volatile int32_t t28 = 250106544;

	t28 = ((x125<(x126+x127))<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = UINT32_MAX;
	static int16_t x130 = 15;
	int8_t x131 = 1;
	int32_t x132 = 1180;
	int32_t t29 = -12;

	t29 = ((x129<(x130+x131))<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x134 = INT64_MIN;
	volatile int16_t x136 = -48;
	static int32_t t30 = 107815294;

	t30 = ((x133<(x134+x135))<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x138 = 183916440U;
	static uint32_t x139 = 442436518U;
	uint64_t x140 = UINT64_MAX;

	t31 = ((x137<(x138+x139))<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x141 = -1;
	int64_t x144 = INT64_MAX;
	int32_t t32 = -3606251;

	t32 = ((x141<(x142+x143))<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = UINT64_MAX;
	uint32_t x146 = 2018637U;
	int8_t x147 = -33;
	uint32_t x148 = 12444312U;
	volatile int32_t t33 = -67106;

	t33 = ((x145<(x146+x147))<x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x149 = INT8_MIN;
	volatile int64_t x150 = 4299446989101458LL;
	static uint16_t x152 = 5773U;
	int32_t t34 = 936090840;

	t34 = ((x149<(x150+x151))<x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = INT32_MIN;
	uint16_t x155 = 469U;
	int8_t x156 = 3;
	static int32_t t35 = 650476;

	t35 = ((x153<(x154+x155))<x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = 554LLU;
	static int32_t x158 = -1636102;
	uint8_t x159 = 1U;
	volatile int32_t t36 = 7986504;

	t36 = ((x157<(x158+x159))<x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x166 = UINT32_MAX;
	static int64_t x167 = INT64_MIN;
	uint64_t x168 = 64144382LLU;
	int32_t t37 = 4;

	t37 = ((x165<(x166+x167))<x168);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x169 = 1112519778955748LLU;
	static volatile int32_t x170 = INT32_MIN;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t38 = 11165;

	t38 = ((x169<(x170+x171))<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = UINT32_MAX;
	int32_t x175 = -82812;
	int64_t x176 = INT64_MIN;
	volatile int32_t t39 = -2439;

	t39 = ((x173<(x174+x175))<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x177 = UINT16_MAX;
	static uint32_t x179 = 486489014U;
	int64_t x180 = -1LL;
	int32_t t40 = 1;

	t40 = ((x177<(x178+x179))<x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = -17;
	volatile int32_t x182 = 58973293;
	int64_t x183 = -1140906450LL;
	volatile int16_t x184 = 7430;
	volatile int32_t t41 = 22;

	t41 = ((x181<(x182+x183))<x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MIN;
	static uint8_t x186 = 5U;
	int16_t x188 = INT16_MAX;
	int32_t t42 = -6026;

	t42 = ((x185<(x186+x187))<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x194 = INT8_MIN;
	static int16_t x195 = INT16_MIN;
	int64_t x196 = -602170090302452LL;
	volatile int32_t t43 = -4;

	t43 = ((x193<(x194+x195))<x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x197 = 26U;
	uint8_t x198 = 6U;
	int64_t x199 = 497088067166807LL;
	uint16_t x200 = 5U;

	t44 = ((x197<(x198+x199))<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = 348896U;
	int32_t x203 = INT32_MIN;
	int32_t t45 = 104940;

	t45 = ((x201<(x202+x203))<x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MIN;
	volatile int16_t x206 = INT16_MIN;
	static int32_t x207 = 23657;
	int32_t x208 = 26090;
	int32_t t46 = 7602;

	t46 = ((x205<(x206+x207))<x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x212 = 2;
	static volatile int32_t t47 = 1;

	t47 = ((x209<(x210+x211))<x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x213 = 11310U;
	int32_t x214 = -1;
	int32_t x215 = -2577;
	uint8_t x216 = UINT8_MAX;
	static int32_t t48 = -1023747;

	t48 = ((x213<(x214+x215))<x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = INT16_MAX;
	int16_t x218 = 17;
	int32_t x219 = -1;
	static int64_t x220 = -1LL;

	t49 = ((x217<(x218+x219))<x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x224 = INT16_MIN;
	volatile int32_t t50 = -23436553;

	t50 = ((x221<(x222+x223))<x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x226 = 5384413289208LLU;
	int8_t x227 = -1;
	int32_t x228 = 95491503;
	volatile int32_t t51 = 5737353;

	t51 = ((x225<(x226+x227))<x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x235 = INT8_MIN;
	int64_t x236 = -3859059153279629LL;
	volatile int32_t t52 = -67059;

	t52 = ((x233<(x234+x235))<x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = INT16_MIN;
	uint32_t x238 = 218306973U;
	int32_t x239 = INT32_MIN;
	uint16_t x240 = UINT16_MAX;

	t53 = ((x237<(x238+x239))<x240);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = INT8_MIN;
	int16_t x242 = -1;
	int16_t x243 = 52;
	uint32_t x244 = 6U;
	int32_t t54 = 94289;

	t54 = ((x241<(x242+x243))<x244);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x245 = UINT16_MAX;
	int16_t x248 = INT16_MIN;

	t55 = ((x245<(x246+x247))<x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x250 = INT8_MAX;
	int32_t x252 = 5385;
	volatile int32_t t56 = -1;

	t56 = ((x249<(x250+x251))<x252);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x253 = 524067648U;
	volatile uint16_t x254 = 76U;
	int8_t x255 = -37;
	int16_t x256 = INT16_MAX;

	t57 = ((x253<(x254+x255))<x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x266 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	volatile int32_t t58 = -585;

	t58 = ((x265<(x266+x267))<x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x269 = INT8_MIN;
	int64_t x270 = -1LL;
	volatile int8_t x271 = INT8_MAX;
	int8_t x272 = INT8_MAX;
	static int32_t t59 = -351;

	t59 = ((x269<(x270+x271))<x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x274 = INT16_MAX;
	uint64_t x275 = 215678689043LLU;
	uint16_t x276 = 3317U;
	int32_t t60 = 9;

	t60 = ((x273<(x274+x275))<x276);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x277 = 6533U;
	int16_t x279 = -371;
	uint8_t x280 = 55U;
	volatile int32_t t61 = -81690;

	t61 = ((x277<(x278+x279))<x280);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x281 = 833U;
	uint32_t x283 = UINT32_MAX;
	uint64_t x284 = 402973390723LLU;
	volatile int32_t t62 = -9522;

	t62 = ((x281<(x282+x283))<x284);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x285 = -1LL;
	volatile int32_t x287 = INT32_MIN;
	static uint16_t x288 = UINT16_MAX;
	int32_t t63 = 57524636;

	t63 = ((x285<(x286+x287))<x288);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x293 = UINT16_MAX;
	uint8_t x294 = UINT8_MAX;
	static uint32_t x295 = UINT32_MAX;
	int8_t x296 = 5;
	int32_t t64 = -307;

	t64 = ((x293<(x294+x295))<x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MAX;
	int32_t x300 = INT32_MAX;
	volatile int32_t t65 = 1006123598;

	t65 = ((x297<(x298+x299))<x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x301 = -3;
	volatile int64_t x302 = -1LL;
	static uint8_t x303 = 23U;
	static int32_t t66 = 2;

	t66 = ((x301<(x302+x303))<x304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x305 = -1;
	uint64_t x306 = 11388LLU;
	int64_t x307 = -134355757852LL;
	int16_t x308 = -4;
	volatile int32_t t67 = -138782;

	t67 = ((x305<(x306+x307))<x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x309 = 111U;
	uint64_t x310 = 8030370687LLU;
	volatile int16_t x312 = 0;
	volatile int32_t t68 = -1430;

	t68 = ((x309<(x310+x311))<x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x313 = 114;
	int16_t x314 = -5757;
	int64_t x315 = -3996334041LL;
	static int32_t t69 = 1;

	t69 = ((x313<(x314+x315))<x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x318 = -1;
	int16_t x319 = -8;
	int8_t x320 = -1;
	volatile int32_t t70 = -108149;

	t70 = ((x317<(x318+x319))<x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x321 = INT16_MAX;
	int8_t x322 = INT8_MIN;
	volatile uint32_t x323 = UINT32_MAX;
	volatile int32_t t71 = 2;

	t71 = ((x321<(x322+x323))<x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x331 = UINT8_MAX;

	t72 = ((x329<(x330+x331))<x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MAX;
	int16_t x338 = INT16_MIN;
	uint32_t x340 = 26330U;
	static volatile int32_t t73 = 1;

	t73 = ((x337<(x338+x339))<x340);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	static uint64_t x343 = 12084927LLU;
	int8_t x344 = INT8_MAX;
	int32_t t74 = -1;

	t74 = ((x341<(x342+x343))<x344);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x349 = INT8_MIN;
	volatile int8_t x351 = 18;
	uint8_t x352 = UINT8_MAX;
	static volatile int32_t t75 = -96382916;

	t75 = ((x349<(x350+x351))<x352);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = -1;
	uint32_t x355 = 103447U;
	int64_t x356 = 354978069683LL;
	int32_t t76 = -1414188;

	t76 = ((x353<(x354+x355))<x356);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = 1LL;
	static uint32_t x358 = UINT32_MAX;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t77 = 5;

	t77 = ((x357<(x358+x359))<x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x362 = INT8_MAX;
	int16_t x363 = INT16_MIN;

	t78 = ((x361<(x362+x363))<x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x365 = 6535;
	int32_t x366 = INT32_MAX;
	uint64_t x367 = 3LLU;
	int32_t x368 = INT32_MIN;
	int32_t t79 = -65021357;

	t79 = ((x365<(x366+x367))<x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x369 = -1LL;
	uint8_t x370 = UINT8_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t80 = 47;

	t80 = ((x369<(x370+x371))<x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x374 = -1;
	static uint32_t x375 = 0U;
	int32_t t81 = 10;

	t81 = ((x373<(x374+x375))<x376);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = -1;
	static int32_t x378 = -1670;
	uint8_t x379 = UINT8_MAX;
	uint32_t x380 = 1420948U;

	t82 = ((x377<(x378+x379))<x380);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x381 = 37U;
	static int16_t x382 = -1;
	int16_t x383 = -1;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t83 = 16314533;

	t83 = ((x381<(x382+x383))<x384);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x385 = 124090LLU;
	int64_t x386 = -214676043264341611LL;
	int64_t x388 = INT64_MIN;
	static volatile int32_t t84 = -2468;

	t84 = ((x385<(x386+x387))<x388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x389 = INT16_MIN;
	int8_t x390 = -11;
	volatile int8_t x391 = -36;
	static int16_t x392 = 15;

	t85 = ((x389<(x390+x391))<x392);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x393 = -1;
	int8_t x394 = 1;
	static uint8_t x395 = 0U;

	t86 = ((x393<(x394+x395))<x396);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x397 = 1396414051187LLU;
	int64_t x399 = INT64_MIN;
	int32_t x400 = -1;

	t87 = ((x397<(x398+x399))<x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x401 = 78461U;
	static int8_t x402 = -57;
	static uint8_t x403 = 4U;
	uint32_t x404 = 3404U;
	volatile int32_t t88 = 73317;

	t88 = ((x401<(x402+x403))<x404);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x406 = INT8_MIN;
	int32_t x407 = INT32_MAX;
	int64_t x408 = -1LL;
	volatile int32_t t89 = 4621789;

	t89 = ((x405<(x406+x407))<x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x413 = INT8_MAX;
	int8_t x414 = -1;
	int8_t x415 = INT8_MIN;
	uint16_t x416 = 11U;

	t90 = ((x413<(x414+x415))<x416);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x417 = INT64_MIN;
	int64_t x419 = -1LL;
	uint8_t x420 = 88U;
	static int32_t t91 = 3;

	t91 = ((x417<(x418+x419))<x420);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x421 = UINT8_MAX;
	int16_t x423 = -1;
	uint32_t x424 = UINT32_MAX;
	volatile int32_t t92 = -32928358;

	t92 = ((x421<(x422+x423))<x424);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x425 = 211U;
	int8_t x426 = -1;

	t93 = ((x425<(x426+x427))<x428);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x429 = INT64_MIN;
	uint64_t x430 = 225914023237LLU;
	uint64_t x431 = 851943203LLU;
	int16_t x432 = 1;
	static volatile int32_t t94 = -998;

	t94 = ((x429<(x430+x431))<x432);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x433 = -1717048646LL;
	int8_t x434 = 40;
	volatile uint64_t x436 = 32718989854705LLU;
	static volatile int32_t t95 = -344552;

	t95 = ((x433<(x434+x435))<x436);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = -1;
	uint32_t x438 = 1U;
	int32_t x439 = INT32_MAX;
	volatile uint8_t x440 = UINT8_MAX;
	volatile int32_t t96 = 144438;

	t96 = ((x437<(x438+x439))<x440);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x441 = -1LL;
	uint8_t x442 = UINT8_MAX;
	static volatile uint8_t x443 = 25U;
	int64_t x444 = INT64_MIN;
	volatile int32_t t97 = -3;

	t97 = ((x441<(x442+x443))<x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = INT64_MAX;
	int16_t x446 = 179;
	static volatile uint32_t x447 = 19U;
	int16_t x448 = -1;
	static volatile int32_t t98 = -399355;

	t98 = ((x445<(x446+x447))<x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t t99 = 3831;

	t99 = ((x449<(x450+x451))<x452);

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

