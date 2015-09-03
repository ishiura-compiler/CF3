#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x8 = INT64_MIN;
int16_t x30 = 1;
int32_t x36 = -661865098;
static int32_t x39 = INT32_MIN;
int32_t x45 = 994;
uint8_t x47 = 95U;
int16_t x49 = -1;
volatile uint64_t t9 = UINT64_MAX;
int8_t x70 = INT8_MIN;
uint64_t x73 = UINT64_MAX;
int8_t x74 = INT8_MAX;
int32_t x76 = -1;
int64_t x97 = INT64_MIN;
volatile uint64_t t14 = UINT64_MAX;
int32_t x108 = -5887;
int8_t x111 = INT8_MIN;
uint8_t x117 = UINT8_MAX;
uint64_t x118 = UINT64_MAX;
int64_t x132 = -1LL;
int8_t x142 = -1;
static int64_t x144 = -1LL;
int16_t x171 = INT16_MIN;
int8_t x187 = INT8_MAX;
volatile uint32_t x192 = 400U;
uint16_t x193 = 281U;
int64_t x194 = 4928990LL;
uint64_t x196 = 178LLU;
uint32_t x201 = 51U;
static uint32_t x203 = UINT32_MAX;
uint8_t x204 = UINT8_MAX;
volatile uint32_t t34 = 55826U;
uint64_t x205 = UINT64_MAX;
int8_t x218 = INT8_MIN;
volatile uint64_t t38 = 1047287514056LLU;
int8_t x224 = INT8_MAX;
static uint16_t x230 = 3694U;
static int32_t x232 = 1;
volatile int32_t x238 = -1;
int32_t x239 = -1;
int16_t x240 = INT16_MIN;
static int32_t x244 = INT32_MAX;
int8_t x246 = -1;
int32_t x247 = INT32_MAX;
int32_t x249 = -1;
int16_t x254 = INT16_MAX;
static volatile int32_t t46 = 750852994;
volatile int64_t x260 = INT64_MAX;
static uint8_t x263 = 1U;
volatile int64_t t48 = 129972221LL;
int8_t x267 = INT8_MIN;
int8_t x268 = -1;
uint8_t x272 = UINT8_MAX;
static uint64_t x273 = 50031229992524805LLU;
uint64_t x286 = 12LLU;
int64_t x287 = -1LL;
volatile int32_t x289 = 1;
uint16_t x291 = 451U;
int32_t x293 = INT32_MIN;
int32_t x296 = -1;
int32_t t55 = -506067956;
int8_t x304 = INT8_MIN;
int32_t t58 = 6281;
static int16_t x309 = -1;
uint16_t x310 = 2U;
int32_t x312 = 931;
uint64_t t60 = 247752648921250095LLU;
int64_t x325 = 124LL;
volatile int64_t t61 = -28935490969043852LL;
uint32_t x337 = 0U;
int8_t x338 = INT8_MIN;
int64_t x357 = -1LL;
static volatile int64_t x381 = 678727323667LL;
int16_t x385 = INT16_MIN;
static uint8_t x387 = UINT8_MAX;
int16_t x405 = INT16_MAX;
int64_t x426 = -1LL;
static volatile int64_t t75 = 1056912266LL;
volatile int8_t x438 = -17;
uint32_t x442 = UINT32_MAX;
int8_t x444 = -1;
volatile uint64_t t78 = 2244LLU;
int8_t x449 = 15;
uint32_t x450 = 14270475U;
int8_t x457 = INT8_MIN;
static int32_t x459 = -1;
int32_t x460 = INT32_MIN;
int8_t x464 = INT8_MIN;
static volatile int32_t x469 = 6;
volatile int8_t x479 = -1;
uint16_t x480 = UINT16_MAX;
static uint8_t x485 = 54U;
static int32_t x486 = -61136;
static uint16_t x488 = 3095U;
volatile int16_t x511 = -7063;
uint16_t x517 = 11355U;
int64_t x520 = -61211923363149LL;
uint16_t x530 = UINT16_MAX;
int64_t t90 = -47980LL;
int16_t x535 = 1367;
int16_t x547 = -1;
uint64_t x555 = 61404061381979LLU;
uint8_t x573 = 81U;
static int64_t t96 = -6LL;
int64_t x577 = INT64_MAX;
static uint64_t x581 = 111649498573LLU;
uint64_t x583 = 77572LLU;
int64_t x586 = -1929788LL;
int32_t x588 = INT32_MIN;
int64_t t99 = -226694393LL;


void f0(void) {
	uint8_t x1 = 2U;
	int16_t x2 = 256;
	volatile int8_t x3 = INT8_MAX;
	volatile uint16_t x4 = 118U;
	int32_t t0 = -12;

	t0 = ((x1%(x2*x3))|x4);

	if (t0 != 118) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -168006;
	uint16_t x6 = 10U;
	int8_t x7 = 1;
	int64_t t1 = 90170LL;

	t1 = ((x5%(x6*x7))|x8);

	if (t1 != -6LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	static uint32_t x23 = 79U;
	uint16_t x24 = 3U;
	volatile uint64_t t2 = 6LLU;

	t2 = ((x21%(x22*x23))|x24);

	if (t2 != 79LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = -2586622920215LL;
	uint64_t x31 = 32069559667941LLU;
	int8_t x32 = INT8_MIN;
	volatile uint64_t t3 = 8104894LLU;

	t3 = ((x29%(x30*x31))|x32);

	if (t3 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = 8977737388296LL;
	int64_t x34 = 33911681320815LL;
	uint16_t x35 = 3U;
	static volatile int64_t t4 = 1225758400938331LL;

	t4 = ((x33%(x34*x35))|x36);

	if (t4 != -623002242LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = INT32_MIN;
	int64_t x38 = -77656190LL;
	int16_t x40 = INT16_MIN;
	int64_t t5 = -607877433230LL;

	t5 = ((x37%(x38*x39))|x40);

	if (t5 != -32768LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x41 = INT32_MIN;
	volatile int32_t x42 = INT32_MIN;
	static int64_t x43 = -75653LL;
	static volatile int8_t x44 = -1;
	int64_t t6 = 1705803LL;

	t6 = ((x41%(x42*x43))|x44);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x46 = 3;
	static uint64_t x48 = UINT64_MAX;
	static volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x45%(x46*x47))|x48);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x50 = -21383108;
	uint16_t x51 = 57U;
	int16_t x52 = -7;
	int32_t t8 = 845507355;

	t8 = ((x49%(x50*x51))|x52);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x61 = UINT64_MAX;
	uint32_t x62 = UINT32_MAX;
	volatile uint8_t x63 = 28U;
	uint64_t x64 = UINT64_MAX;

	t9 = ((x61%(x62*x63))|x64);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = INT32_MAX;
	uint16_t x66 = 18390U;
	static volatile uint64_t x67 = 3299677LLU;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x65%(x66*x67))|x68);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MIN;
	volatile uint32_t t11 = 1U;

	t11 = ((x69%(x70*x71))|x72);

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x75 = UINT8_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = ((x73%(x74*x75))|x76);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x77 = INT16_MIN;
	int32_t x78 = 5;
	int8_t x79 = INT8_MIN;
	uint64_t x80 = 100604413148738170LLU;
	uint64_t t13 = 332331251787345LLU;

	t13 = ((x77%(x78*x79))|x80);

	if (t13 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x98 = UINT64_MAX;
	static int64_t x99 = INT64_MIN;
	uint64_t x100 = UINT64_MAX;

	t14 = ((x97%(x98*x99))|x100);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x102 = 1;
	int64_t x103 = INT64_MIN;
	static int32_t x104 = INT32_MIN;
	volatile int64_t t15 = 137398035572LL;

	t15 = ((x101%(x102*x103))|x104);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x105 = -1;
	uint64_t x106 = 74597938LLU;
	static int64_t x107 = -120344LL;
	volatile uint64_t t16 = 1881158433703133LLU;

	t16 = ((x105%(x106*x107))|x108);

	if (t16 != 18446744073709545903LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x109 = -1;
	int32_t x110 = 1;
	volatile uint8_t x112 = 31U;
	volatile int32_t t17 = 779565;

	t17 = ((x109%(x110*x111))|x112);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x113 = INT64_MAX;
	int16_t x114 = 954;
	uint64_t x115 = 3354LLU;
	int64_t x116 = INT64_MIN;
	volatile uint64_t t18 = 1061084166645LLU;

	t18 = ((x113%(x114*x115))|x116);

	if (t18 != 9223372036856736735LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x119 = INT8_MAX;
	int32_t x120 = -1;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x117%(x118*x119))|x120);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = 52217780LL;
	int16_t x122 = INT16_MIN;
	int16_t x123 = 4;
	static int16_t x124 = INT16_MAX;
	volatile int64_t t20 = 53086210314LL;

	t20 = ((x121%(x122*x123))|x124);

	if (t20 != 65535LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x129 = 4LLU;
	int8_t x130 = -9;
	volatile int16_t x131 = 853;
	uint64_t t21 = UINT64_MAX;

	t21 = ((x129%(x130*x131))|x132);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x133 = 372548;
	static int8_t x134 = INT8_MAX;
	int16_t x135 = -1;
	static uint8_t x136 = 2U;
	int32_t t22 = -143079727;

	t22 = ((x133%(x134*x135))|x136);

	if (t22 != 59) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x141 = 11U;
	int32_t x143 = 304948;
	volatile int64_t t23 = -3LL;

	t23 = ((x141%(x142*x143))|x144);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x145 = 1932U;
	static int32_t x146 = INT32_MIN;
	uint64_t x147 = 186LLU;
	static uint64_t x148 = 2543244294LLU;
	volatile uint64_t t24 = 3940713167395138764LLU;

	t24 = ((x145%(x146*x147))|x148);

	if (t24 != 2543245198LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x161 = -24LL;
	int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MAX;
	volatile int8_t x164 = INT8_MIN;
	int64_t t25 = -13027LL;

	t25 = ((x161%(x162*x163))|x164);

	if (t25 != -24LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x165 = 13602;
	int32_t x166 = -1;
	int8_t x167 = INT8_MIN;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t26 = 16416084;

	t26 = ((x165%(x166*x167))|x168);

	if (t26 != -94) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x169 = 8724875596709483641LLU;
	int8_t x170 = INT8_MIN;
	uint64_t x172 = UINT64_MAX;
	static uint64_t t27 = UINT64_MAX;

	t27 = ((x169%(x170*x171))|x172);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x173 = 13249U;
	int64_t x174 = 52LL;
	int32_t x175 = 31878230;
	volatile uint16_t x176 = UINT16_MAX;
	int64_t t28 = -1558100753369451383LL;

	t28 = ((x173%(x174*x175))|x176);

	if (t28 != 65535LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x181 = INT16_MIN;
	uint8_t x182 = 1U;
	uint8_t x183 = UINT8_MAX;
	volatile int32_t x184 = -1;
	int32_t t29 = -16896;

	t29 = ((x181%(x182*x183))|x184);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x185 = INT8_MIN;
	uint64_t x186 = UINT64_MAX;
	uint32_t x188 = 846842618U;
	volatile uint64_t t30 = 2793483366198LLU;

	t30 = ((x185%(x186*x187))|x188);

	if (t30 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x189 = UINT16_MAX;
	static int8_t x190 = -1;
	static int8_t x191 = -1;
	volatile uint32_t t31 = 3949778U;

	t31 = ((x189%(x190*x191))|x192);

	if (t31 != 400U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x195 = UINT32_MAX;
	uint64_t t32 = 120323707186108825LLU;

	t32 = ((x193%(x194*x195))|x196);

	if (t32 != 443LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x197 = -1LL;
	volatile int16_t x198 = INT16_MIN;
	int8_t x199 = -1;
	volatile uint32_t x200 = 99U;
	static volatile int64_t t33 = -2100524LL;

	t33 = ((x197%(x198*x199))|x200);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x202 = 11U;

	t34 = ((x201%(x202*x203))|x204);

	if (t34 != 255U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x206 = 2;
	volatile int8_t x207 = INT8_MIN;
	static int32_t x208 = -1;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x205%(x206*x207))|x208);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x209 = -2196;
	int16_t x210 = INT16_MIN;
	static uint64_t x211 = 951875976LLU;
	uint8_t x212 = UINT8_MAX;
	uint64_t t36 = 16259110320839698LLU;

	t36 = ((x209%(x210*x211))|x212);

	if (t36 != 31191071979519LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x213 = 2107979985U;
	int64_t x214 = 27LL;
	static uint8_t x215 = UINT8_MAX;
	static int32_t x216 = -1;
	volatile int64_t t37 = -945262735LL;

	t37 = ((x213%(x214*x215))|x216);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x217 = 25554365LLU;
	int32_t x219 = -1;
	uint16_t x220 = 13073U;

	t38 = ((x217%(x218*x219))|x220);

	if (t38 != 13117LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x221 = 108;
	uint32_t x222 = 97572575U;
	volatile uint8_t x223 = UINT8_MAX;
	static volatile uint32_t t39 = 630114561U;

	t39 = ((x221%(x222*x223))|x224);

	if (t39 != 127U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x225 = 0;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = UINT32_MAX;
	static int64_t x228 = 302631824858LL;
	int64_t t40 = -18LL;

	t40 = ((x225%(x226*x227))|x228);

	if (t40 != 302631824858LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x229 = INT64_MAX;
	int8_t x231 = INT8_MIN;
	int64_t t41 = -215LL;

	t41 = ((x229%(x230*x231))|x232);

	if (t41 != 3327LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x237 = INT64_MIN;
	int64_t t42 = -20572LL;

	t42 = ((x237%(x238*x239))|x240);

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x241 = UINT64_MAX;
	volatile int16_t x242 = INT16_MIN;
	uint64_t x243 = 19764668656LLU;
	uint64_t t43 = 6299839180571157303LLU;

	t43 = ((x241%(x242*x243))|x244);

	if (t43 != 647648855982079LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x245 = 1U;
	int16_t x248 = -1;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = ((x245%(x246*x247))|x248);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MIN;
	static volatile uint32_t x252 = 43364U;
	uint32_t t45 = UINT32_MAX;

	t45 = ((x249%(x250*x251))|x252);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x253 = INT8_MIN;
	int16_t x255 = -565;
	volatile int16_t x256 = -1;

	t46 = ((x253%(x254*x255))|x256);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x257 = INT32_MIN;
	uint64_t x258 = 68333654LLU;
	volatile uint8_t x259 = UINT8_MAX;
	static volatile uint64_t t47 = 7887511621438995657LLU;

	t47 = ((x257%(x258*x259))|x260);

	if (t47 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x261 = -2LL;
	volatile int8_t x262 = INT8_MIN;
	int64_t x264 = INT64_MIN;

	t48 = ((x261%(x262*x263))|x264);

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x265 = INT16_MAX;
	static volatile int64_t x266 = 1LL;
	static volatile int64_t t49 = 36125LL;

	t49 = ((x265%(x266*x267))|x268);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = -1;
	static int8_t x270 = 3;
	volatile uint64_t x271 = 93479279269LLU;
	uint64_t t50 = 784071LLU;

	t50 = ((x269%(x270*x271))|x272);

	if (t50 != 216440717055LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x274 = 13652094304LL;
	static uint64_t x275 = 125547210561166247LLU;
	static uint16_t x276 = 31797U;
	uint64_t t51 = 66844282LLU;

	t51 = ((x273%(x274*x275))|x276);

	if (t51 != 50031229992533045LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x281 = 903255445392189LL;
	volatile int16_t x282 = 8916;
	volatile int16_t x283 = -213;
	volatile int16_t x284 = -1;
	int64_t t52 = 335802434104758LL;

	t52 = ((x281%(x282*x283))|x284);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x285 = 61U;
	uint32_t x288 = UINT32_MAX;
	volatile uint64_t t53 = 64880071573LLU;

	t53 = ((x285%(x286*x287))|x288);

	if (t53 != 4294967295LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x290 = 132981;
	static uint16_t x292 = 7U;
	static volatile int32_t t54 = 90034;

	t54 = ((x289%(x290*x291))|x292);

	if (t54 != 7) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x294 = -5;
	int8_t x295 = INT8_MAX;

	t55 = ((x293%(x294*x295))|x296);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x297 = 46U;
	static int32_t x298 = -1;
	volatile int8_t x299 = INT8_MIN;
	int16_t x300 = -1;
	int32_t t56 = -136;

	t56 = ((x297%(x298*x299))|x300);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x301 = UINT16_MAX;
	uint64_t x302 = 180660414120347576LLU;
	volatile uint16_t x303 = UINT16_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = ((x301%(x302*x303))|x304);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x305 = INT8_MIN;
	int8_t x306 = -1;
	static volatile uint16_t x307 = 26928U;
	volatile int32_t x308 = INT32_MAX;

	t58 = ((x305%(x306*x307))|x308);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x311 = 7;
	int32_t t59 = 158291225;

	t59 = ((x309%(x310*x311))|x312);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 2880812LL;
	int16_t x323 = -361;
	uint64_t x324 = 5978007043LLU;

	t60 = ((x321%(x322*x323))|x324);

	if (t60 != 18446744073709123099LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x326 = 6832U;
	int32_t x327 = 3;
	int16_t x328 = -8152;

	t61 = ((x325%(x326*x327))|x328);

	if (t61 != -8068LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MIN;
	static int8_t x331 = INT8_MIN;
	int16_t x332 = 71;
	volatile int64_t t62 = 438843340906860LL;

	t62 = ((x329%(x330*x331))|x332);

	if (t62 != 71LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x333 = 1;
	int16_t x334 = -1;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -1;
	int32_t t63 = 76;

	t63 = ((x333%(x334*x335))|x336);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x339 = 1146547410U;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = ((x337%(x338*x339))|x340);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x358 = INT8_MIN;
	static uint64_t x359 = UINT64_MAX;
	int32_t x360 = 101;
	uint64_t t65 = 28LLU;

	t65 = ((x357%(x358*x359))|x360);

	if (t65 != 127LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x373 = INT32_MIN;
	static uint8_t x374 = UINT8_MAX;
	int16_t x375 = INT16_MAX;
	int32_t x376 = 1337228;
	static int32_t t66 = 460164;

	t66 = ((x373%(x374*x375))|x376);

	if (t66 != -71795) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x382 = -1LL;
	uint32_t x383 = 440017U;
	int64_t x384 = INT64_MIN;
	volatile int64_t t67 = 5768339LL;

	t67 = ((x381%(x382*x383))|x384);

	if (t67 != -9223372036854554675LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x386 = INT16_MIN;
	int64_t x388 = INT64_MIN;
	int64_t t68 = 9505295209LL;

	t68 = ((x385%(x386*x387))|x388);

	if (t68 != -32768LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x389 = INT32_MIN;
	volatile uint64_t x390 = 200719LLU;
	volatile int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t69 = 28397057420LLU;

	t69 = ((x389%(x390*x391))|x392);

	if (t69 != 9223803075477635072LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x393 = UINT16_MAX;
	static volatile int32_t x394 = -5057404;
	uint32_t x395 = 31665281U;
	static uint8_t x396 = UINT8_MAX;
	volatile uint32_t t70 = 134665U;

	t70 = ((x393%(x394*x395))|x396);

	if (t70 != 65535U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x406 = -4851;
	int64_t x407 = -205189765468027LL;
	int16_t x408 = INT16_MIN;
	volatile int64_t t71 = -20130708470138811LL;

	t71 = ((x405%(x406*x407))|x408);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x417 = 475744403271348LLU;
	int32_t x418 = INT32_MAX;
	uint64_t x419 = 13392138065220361LLU;
	volatile uint16_t x420 = 249U;
	static uint64_t t72 = 17455924529637306LLU;

	t72 = ((x417%(x418*x419))|x420);

	if (t72 != 475744403271421LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x425 = -1LL;
	uint8_t x427 = 25U;
	int8_t x428 = 25;
	volatile int64_t t73 = -1012LL;

	t73 = ((x425%(x426*x427))|x428);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x429 = UINT64_MAX;
	uint8_t x430 = UINT8_MAX;
	int16_t x431 = -1;
	int16_t x432 = INT16_MIN;
	volatile uint64_t t74 = 27036317410485LLU;

	t74 = ((x429%(x430*x431))|x432);

	if (t74 != 18446744073709519102LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x433 = -1;
	int32_t x434 = 30164400;
	static uint8_t x435 = 22U;
	int64_t x436 = -1LL;

	t75 = ((x433%(x434*x435))|x436);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x437 = INT8_MIN;
	static int8_t x439 = 1;
	int32_t x440 = 13;
	volatile int32_t t76 = -238545;

	t76 = ((x437%(x438*x439))|x440);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x441 = 37U;
	volatile uint16_t x443 = UINT16_MAX;
	volatile uint32_t t77 = UINT32_MAX;

	t77 = ((x441%(x442*x443))|x444);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x445 = 13728U;
	static int32_t x446 = -5;
	uint64_t x447 = UINT64_MAX;
	volatile int64_t x448 = 18599450563188366LL;

	t78 = ((x445%(x446*x447))|x448);

	if (t78 != 18599450563188367LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x451 = INT32_MIN;
	int16_t x452 = INT16_MIN;
	uint32_t t79 = 199U;

	t79 = ((x449%(x450*x451))|x452);

	if (t79 != 4294934543U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x458 = 631U;
	int32_t t80 = -20083921;

	t80 = ((x457%(x458*x459))|x460);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x461 = 0U;
	int16_t x462 = 19;
	volatile int64_t x463 = -11350855LL;
	int64_t t81 = 1LL;

	t81 = ((x461%(x462*x463))|x464);

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x470 = INT8_MAX;
	int8_t x471 = INT8_MAX;
	volatile int64_t x472 = -815468420741106LL;
	static int64_t t82 = -550274600LL;

	t82 = ((x469%(x470*x471))|x472);

	if (t82 != -815468420741106LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x477 = 35U;
	uint32_t x478 = 86U;
	uint32_t t83 = 9U;

	t83 = ((x477%(x478*x479))|x480);

	if (t83 != 65535U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x487 = 20LLU;
	volatile uint64_t t84 = 70728LLU;

	t84 = ((x485%(x486*x487))|x488);

	if (t84 != 3127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x489 = 29962052U;
	static volatile int16_t x490 = -844;
	volatile int8_t x491 = INT8_MAX;
	volatile uint64_t x492 = 15806843LLU;
	uint64_t t85 = 7LLU;

	t85 = ((x489%(x490*x491))|x492);

	if (t85 != 33111935LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x509 = INT8_MIN;
	int64_t x510 = -1LL;
	volatile uint32_t x512 = 78208779U;
	int64_t t86 = -26LL;

	t86 = ((x509%(x510*x511))|x512);

	if (t86 != -117LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x513 = 45490905825858LLU;
	static uint64_t x514 = 7365600LLU;
	static volatile int32_t x515 = INT32_MIN;
	uint32_t x516 = UINT32_MAX;
	static volatile uint64_t t87 = 47129760018LLU;

	t87 = ((x513%(x514*x515))|x516);

	if (t87 != 45492293599231LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x518 = -50;
	static volatile int64_t x519 = -1LL;
	volatile int64_t t88 = -436654892LL;

	t88 = ((x517%(x518*x519))|x520);

	if (t88 != -61211923363145LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x525 = INT64_MAX;
	volatile int16_t x526 = INT16_MIN;
	int8_t x527 = -8;
	static int8_t x528 = 3;
	int64_t t89 = 3997139LL;

	t89 = ((x525%(x526*x527))|x528);

	if (t89 != 262143LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x529 = -1LL;
	int8_t x531 = INT8_MAX;
	uint32_t x532 = 490060U;

	t90 = ((x529%(x530*x531))|x532);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x533 = -1;
	uint16_t x534 = UINT16_MAX;
	int8_t x536 = -1;
	static volatile int32_t t91 = -6784;

	t91 = ((x533%(x534*x535))|x536);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x545 = INT64_MIN;
	volatile uint64_t x546 = 8738466502559002979LLU;
	int8_t x548 = INT8_MIN;
	static uint64_t t92 = 117356848242962LLU;

	t92 = ((x545%(x546*x547))|x548);

	if (t92 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x549 = -1;
	static int8_t x550 = INT8_MAX;
	int8_t x551 = 16;
	int32_t x552 = INT32_MAX;
	int32_t t93 = 2801156;

	t93 = ((x549%(x550*x551))|x552);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x553 = INT32_MIN;
	volatile int8_t x554 = INT8_MIN;
	int32_t x556 = INT32_MAX;
	static uint64_t t94 = 216574257264093LLU;

	t94 = ((x553%(x554*x555))|x556);

	if (t94 != 7859719284719615LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x569 = 0;
	volatile int8_t x570 = INT8_MIN;
	int64_t x571 = -118222393478611LL;
	int16_t x572 = 1;
	static volatile int64_t t95 = 8183LL;

	t95 = ((x569%(x570*x571))|x572);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x574 = INT16_MIN;
	int64_t x575 = 6458730304LL;
	volatile uint32_t x576 = UINT32_MAX;

	t96 = ((x573%(x574*x575))|x576);

	if (t96 != 4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x578 = INT16_MIN;
	uint8_t x579 = 1U;
	static volatile int64_t x580 = -1LL;
	volatile int64_t t97 = 356715529804577LL;

	t97 = ((x577%(x578*x579))|x580);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x582 = 8LL;
	static uint32_t x584 = 12U;
	static volatile uint64_t t98 = 7812LLU;

	t98 = ((x581%(x582*x583))|x584);

	if (t98 != 429261LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x585 = -1LL;
	static int8_t x587 = -1;

	t99 = ((x585%(x586*x587))|x588);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

