#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
int32_t x6 = INT32_MIN;
volatile int64_t t1 = INT64_MAX;
volatile int8_t x11 = INT8_MIN;
int8_t x15 = -5;
static int64_t x23 = INT64_MAX;
static uint8_t x39 = UINT8_MAX;
int64_t x41 = -1LL;
int16_t x42 = -1;
volatile int8_t x47 = INT8_MIN;
static volatile int8_t x50 = -1;
volatile int64_t t13 = -110902651048LL;
volatile int32_t t14 = -481315090;
int16_t x61 = INT16_MAX;
volatile int64_t x72 = -65490650234563088LL;
int64_t t17 = 4067156070855LL;
volatile uint64_t x74 = UINT64_MAX;
static int64_t x75 = -1LL;
int64_t t18 = -6676826LL;
int16_t x105 = 3007;
volatile int64_t x106 = INT64_MAX;
uint64_t x107 = 556LLU;
uint64_t t26 = 48LLU;
uint64_t x110 = 3LLU;
int8_t x112 = -1;
uint32_t x119 = 155U;
int64_t x120 = INT64_MAX;
volatile int64_t t29 = -1700LL;
int64_t x121 = INT64_MAX;
volatile int64_t t32 = 933113647LL;
int64_t x133 = 31783433765LL;
int32_t x137 = INT32_MAX;
uint64_t t35 = 10668LLU;
volatile uint32_t x148 = UINT32_MAX;
volatile uint32_t t36 = 3U;
int64_t x155 = INT64_MIN;
int32_t x160 = INT32_MIN;
volatile int32_t t39 = INT32_MIN;
uint8_t x162 = UINT8_MAX;
uint32_t x167 = 343572718U;
uint64_t x168 = 3LLU;
volatile uint64_t t42 = 986LLU;
int64_t x176 = INT64_MIN;
static int16_t x180 = -15093;
volatile int64_t x182 = INT64_MAX;
volatile int64_t t45 = 85695LL;
int32_t t46 = INT32_MIN;
int32_t x189 = 4;
uint64_t x192 = UINT64_MAX;
static uint64_t t47 = UINT64_MAX;
static volatile int64_t x196 = -13LL;
uint8_t x197 = 12U;
int8_t x198 = 30;
int16_t x200 = 0;
int8_t x201 = -1;
int32_t t50 = 24;
int16_t x207 = INT16_MAX;
int64_t x210 = -1LL;
static uint64_t x212 = 1837464LLU;
int64_t x225 = -19LL;
uint64_t t57 = 32LLU;
volatile uint32_t x238 = 252066U;
uint16_t x239 = 149U;
int16_t x240 = INT16_MAX;
volatile int64_t t60 = -98889651553648LL;
int64_t x246 = -5406LL;
static int8_t x253 = INT8_MIN;
uint64_t x256 = 3935648043210188LLU;
int8_t x260 = 36;
uint64_t x264 = 790887387550636316LLU;
volatile uint64_t x269 = 889520017197347943LLU;
uint8_t x271 = 12U;
volatile int32_t t67 = -7874;
uint64_t x277 = 3793563173633214LLU;
int32_t x279 = INT32_MIN;
int64_t x284 = -1LL;
static int64_t t70 = 18537840LL;
int64_t x286 = INT64_MIN;
static int32_t x288 = 3860211;
static volatile int64_t t71 = -1002555509564170855LL;
static int64_t x294 = INT64_MAX;
int8_t x299 = INT8_MIN;
volatile uint16_t x300 = 0U;
int32_t t74 = 26251183;
volatile int32_t t75 = 10182903;
int32_t x305 = -16100;
int16_t x306 = 9;
static uint16_t x307 = UINT16_MAX;
int16_t x315 = 6101;
volatile int32_t x319 = -2298321;
static uint16_t x322 = UINT16_MAX;
volatile int32_t t81 = INT32_MIN;
uint64_t x335 = 212LLU;
volatile uint64_t t83 = 1139LLU;
uint16_t x338 = 732U;
int32_t x340 = INT32_MIN;
int32_t x341 = INT32_MAX;
static uint32_t x342 = 493632204U;
static int8_t x344 = -2;
uint8_t x345 = UINT8_MAX;
int8_t x350 = INT8_MIN;
static int32_t x353 = INT32_MAX;
uint64_t t89 = 1671045289398377688LLU;
static uint16_t x367 = UINT16_MAX;
int32_t t91 = -48454062;
int16_t x369 = -1;
uint64_t x373 = UINT64_MAX;
int32_t x377 = INT32_MIN;
volatile int32_t x381 = INT32_MAX;
volatile int16_t x385 = -1;
uint16_t x389 = 19925U;
volatile int8_t x391 = -1;
volatile int32_t x392 = INT32_MIN;
int32_t t97 = INT32_MIN;
int64_t x395 = INT64_MIN;
int16_t x396 = -5266;


void f0(void) {
	static int64_t x1 = -199376064774LL;
	int16_t x2 = 0;
	int32_t x3 = 754;
	volatile int16_t x4 = -1;
	int32_t t0 = -2;

	t0 = (((x1<=x2)|x3)&x4);

	if (t0 != 755) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x7 = -1;
	int64_t x8 = INT64_MAX;

	t1 = (((x5<=x6)|x7)&x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int16_t x10 = 0;
	uint64_t x12 = 1069765916724849151LLU;
	volatile uint64_t t2 = 4177764479890LLU;

	t2 = (((x9<=x10)|x11)&x12);

	if (t2 != 1069765916724849024LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int16_t x14 = 3;
	int32_t x16 = INT32_MAX;
	int32_t t3 = 27094197;

	t3 = (((x13<=x14)|x15)&x16);

	if (t3 != 2147483643) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	static int32_t x18 = 21839471;
	volatile int32_t x19 = INT32_MIN;
	int32_t x20 = -1;
	int32_t t4 = INT32_MIN;

	t4 = (((x17<=x18)|x19)&x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	int32_t x22 = -1;
	static volatile int16_t x24 = 182;
	int64_t t5 = 818191476898512LL;

	t5 = (((x21<=x22)|x23)&x24);

	if (t5 != 182LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 109;
	int16_t x26 = 0;
	volatile int32_t x27 = 0;
	uint16_t x28 = UINT16_MAX;
	int32_t t6 = 1;

	t6 = (((x25<=x26)|x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MAX;
	int64_t x31 = -20084LL;
	int16_t x32 = INT16_MAX;
	volatile int64_t t7 = 9916103809995218LL;

	t7 = (((x29<=x30)|x31)&x32);

	if (t7 != 12684LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 97868527818127LL;
	int8_t x34 = INT8_MIN;
	static int64_t x35 = -14892932LL;
	uint32_t x36 = 67165U;
	static volatile int64_t t8 = 759328185LL;

	t8 = (((x33<=x34)|x35)&x36);

	if (t8 != 92LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -55877330LL;
	static uint64_t x38 = 18605112627860027LLU;
	int8_t x40 = -1;
	static int32_t t9 = -15667579;

	t9 = (((x37<=x38)|x39)&x40);

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x43 = INT8_MIN;
	volatile int16_t x44 = 22;
	int32_t t10 = -19258624;

	t10 = (((x41<=x42)|x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -1;
	volatile int32_t x46 = INT32_MAX;
	static uint16_t x48 = 71U;
	int32_t t11 = -9918;

	t11 = (((x45<=x46)|x47)&x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 8066481LLU;
	int32_t x51 = INT32_MIN;
	int8_t x52 = 0;
	volatile int32_t t12 = -16231;

	t12 = (((x49<=x50)|x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	int64_t x54 = 561609888LL;
	volatile int64_t x55 = 817747003951738LL;
	int64_t x56 = INT64_MIN;

	t13 = (((x53<=x54)|x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 1U;
	uint64_t x58 = 388557387133183LLU;
	int16_t x59 = 3;
	int8_t x60 = -1;

	t14 = (((x57<=x58)|x59)&x60);

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MAX;
	uint32_t x63 = 757364U;
	static int32_t x64 = 517518490;
	static volatile uint32_t t15 = 1788812887U;

	t15 = (((x61<=x62)|x63)&x64);

	if (t15 != 558096U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	volatile int32_t x66 = -1;
	int8_t x67 = INT8_MAX;
	int8_t x68 = -43;
	int32_t t16 = -63794077;

	t16 = (((x65<=x66)|x67)&x68);

	if (t16 != 85) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static uint64_t x70 = UINT64_MAX;
	int32_t x71 = INT32_MIN;

	t17 = (((x69<=x70)|x71)&x72);

	if (t17 != -65490651319369728LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	uint8_t x76 = 89U;

	t18 = (((x73<=x74)|x75)&x76);

	if (t18 != 89LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	static volatile int64_t x78 = 1568292LL;
	static volatile int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MAX;
	int32_t t19 = -27;

	t19 = (((x77<=x78)|x79)&x80);

	if (t19 != 32641) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 676U;
	int32_t x82 = INT32_MIN;
	int32_t x83 = 63;
	static int32_t x84 = INT32_MIN;
	int32_t t20 = 1214;

	t20 = (((x81<=x82)|x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = UINT8_MAX;
	static int32_t x86 = 7;
	int64_t x87 = -1LL;
	uint8_t x88 = 21U;
	volatile int64_t t21 = 62994479252157LL;

	t21 = (((x85<=x86)|x87)&x88);

	if (t21 != 21LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	static int64_t x90 = -1LL;
	volatile int32_t x91 = -1;
	int32_t x92 = 104603067;
	int32_t t22 = 267492382;

	t22 = (((x89<=x90)|x91)&x92);

	if (t22 != 104603067) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 9218998LL;
	static int64_t x94 = INT64_MAX;
	int32_t x95 = INT32_MAX;
	uint64_t x96 = 6732LLU;
	static uint64_t t23 = 11568234381227LLU;

	t23 = (((x93<=x94)|x95)&x96);

	if (t23 != 6732LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MAX;
	static int16_t x99 = INT16_MIN;
	volatile int32_t x100 = INT32_MAX;
	static volatile int32_t t24 = 54742559;

	t24 = (((x97<=x98)|x99)&x100);

	if (t24 != 2147450881) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = 0;
	int8_t x102 = 0;
	volatile int64_t x103 = -68685114137LL;
	int8_t x104 = INT8_MIN;
	volatile int64_t t25 = -229292240274512LL;

	t25 = (((x101<=x102)|x103)&x104);

	if (t25 != -68685114240LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x108 = -1;

	t26 = (((x105<=x106)|x107)&x108);

	if (t26 != 557LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	int32_t x111 = 11791;
	int32_t t27 = 2;

	t27 = (((x109<=x110)|x111)&x112);

	if (t27 != 11791) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 950U;
	uint64_t x114 = 227804304LLU;
	int64_t x115 = INT64_MAX;
	volatile uint8_t x116 = 8U;
	volatile int64_t t28 = -918612868886839LL;

	t28 = (((x113<=x114)|x115)&x116);

	if (t28 != 8LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 3;
	uint64_t x118 = UINT64_MAX;

	t29 = (((x117<=x118)|x119)&x120);

	if (t29 != 155LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MIN;
	int8_t x123 = -1;
	volatile uint64_t x124 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

	t30 = (((x121<=x122)|x123)&x124);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 2;
	int64_t x126 = -1LL;
	uint32_t x127 = UINT32_MAX;
	uint8_t x128 = UINT8_MAX;
	uint32_t t31 = 97367U;

	t31 = (((x125<=x126)|x127)&x128);

	if (t31 != 255U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 1895U;
	static volatile int8_t x130 = INT8_MAX;
	int64_t x131 = 144420720845564562LL;
	int8_t x132 = INT8_MIN;

	t32 = (((x129<=x130)|x131)&x132);

	if (t32 != 144420720845564544LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = 27;
	uint8_t x135 = UINT8_MAX;
	int32_t x136 = INT32_MIN;
	static int32_t t33 = 71193;

	t33 = (((x133<=x134)|x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x138 = 26U;
	int32_t x139 = -1;
	int64_t x140 = INT64_MAX;
	int64_t t34 = INT64_MAX;

	t34 = (((x137<=x138)|x139)&x140);

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	uint64_t x142 = 179925385870394LLU;
	volatile uint64_t x143 = 108990987LLU;
	int16_t x144 = INT16_MIN;

	t35 = (((x141<=x142)|x143)&x144);

	if (t35 != 108986368LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	int64_t x146 = INT64_MAX;
	uint16_t x147 = 1616U;

	t36 = (((x145<=x146)|x147)&x148);

	if (t36 != 1617U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	uint64_t x150 = UINT64_MAX;
	int32_t x151 = INT32_MIN;
	static int64_t x152 = INT64_MAX;
	static volatile int64_t t37 = 37792690LL;

	t37 = (((x149<=x150)|x151)&x152);

	if (t37 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -1LL;
	static volatile uint8_t x154 = UINT8_MAX;
	volatile int8_t x156 = -1;
	volatile int64_t t38 = -11434773LL;

	t38 = (((x153<=x154)|x155)&x156);

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int16_t x158 = 0;
	int16_t x159 = INT16_MIN;

	t39 = (((x157<=x158)|x159)&x160);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = 199654442112708198LL;
	int64_t x163 = INT64_MAX;
	uint16_t x164 = 30U;
	volatile int64_t t40 = 1007781422380LL;

	t40 = (((x161<=x162)|x163)&x164);

	if (t40 != 30LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	volatile int64_t x166 = 32201981863LL;
	volatile uint64_t t41 = 351177346316402683LLU;

	t41 = (((x165<=x166)|x167)&x168);

	if (t41 != 3LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 57049495U;
	static uint8_t x170 = UINT8_MAX;
	int8_t x171 = -24;
	static uint64_t x172 = 1928493556514986615LLU;

	t42 = (((x169<=x170)|x171)&x172);

	if (t42 != 1928493556514986592LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = 57505583U;
	static volatile int64_t x174 = INT64_MIN;
	uint32_t x175 = UINT32_MAX;
	volatile int64_t t43 = 1367246203302446LL;

	t43 = (((x173<=x174)|x175)&x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = 10499;
	uint16_t x178 = 3451U;
	int64_t x179 = INT64_MAX;
	int64_t t44 = 349318574LL;

	t44 = (((x177<=x178)|x179)&x180);

	if (t44 != 9223372036854760715LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 686385838446722LL;
	int64_t x183 = INT64_MIN;
	static uint8_t x184 = 63U;

	t45 = (((x181<=x182)|x183)&x184);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 93U;
	int32_t x186 = INT32_MAX;
	int32_t x187 = INT32_MIN;
	volatile int32_t x188 = INT32_MIN;

	t46 = (((x185<=x186)|x187)&x188);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x190 = 13U;
	volatile uint64_t x191 = UINT64_MAX;

	t47 = (((x189<=x190)|x191)&x192);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	int16_t x194 = 33;
	volatile uint64_t x195 = 55620439LLU;
	volatile uint64_t t48 = 126451860LLU;

	t48 = (((x193<=x194)|x195)&x196);

	if (t48 != 55620435LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x199 = 1U;
	static volatile int32_t t49 = 4358986;

	t49 = (((x197<=x198)|x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = INT8_MIN;
	static int8_t x203 = -1;
	int8_t x204 = INT8_MIN;

	t50 = (((x201<=x202)|x203)&x204);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 1;
	uint64_t x206 = 8168319169996311LLU;
	volatile int64_t x208 = -12385LL;
	volatile int64_t t51 = -2286LL;

	t51 = (((x205<=x206)|x207)&x208);

	if (t51 != 20383LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = -1LL;
	uint16_t x211 = UINT16_MAX;
	volatile uint64_t t52 = 30LLU;

	t52 = (((x209<=x210)|x211)&x212);

	if (t52 != 2456LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	static int16_t x214 = 3;
	uint32_t x215 = 111958590U;
	volatile int32_t x216 = INT32_MAX;
	uint32_t t53 = 3336318U;

	t53 = (((x213<=x214)|x215)&x216);

	if (t53 != 111958590U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int16_t x218 = -1;
	static int32_t x219 = -1;
	static int8_t x220 = -25;
	volatile int32_t t54 = -7;

	t54 = (((x217<=x218)|x219)&x220);

	if (t54 != -25) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	int8_t x222 = -1;
	volatile uint64_t x223 = UINT64_MAX;
	volatile int64_t x224 = -1LL;
	static volatile uint64_t t55 = UINT64_MAX;

	t55 = (((x221<=x222)|x223)&x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = -3079765297146562095LL;
	static uint16_t x227 = UINT16_MAX;
	volatile int64_t x228 = 3896542710LL;
	int64_t t56 = 31136251LL;

	t56 = (((x225<=x226)|x227)&x228);

	if (t56 != 34294LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = 8U;
	static int32_t x230 = -1;
	uint64_t x231 = 35053152522LLU;
	uint8_t x232 = 6U;

	t57 = (((x229<=x230)|x231)&x232);

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	uint32_t x234 = 20U;
	static int64_t x235 = INT64_MIN;
	volatile int8_t x236 = INT8_MAX;
	int64_t t58 = -15785164LL;

	t58 = (((x233<=x234)|x235)&x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	volatile int32_t t59 = -8326731;

	t59 = (((x237<=x238)|x239)&x240);

	if (t59 != 149) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	uint64_t x242 = UINT64_MAX;
	static int64_t x243 = -165492167554598LL;
	uint16_t x244 = 348U;

	t60 = (((x241<=x242)|x243)&x244);

	if (t60 != 344LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 24U;
	static int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MIN;
	volatile int32_t t61 = 7649356;

	t61 = (((x245<=x246)|x247)&x248);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = UINT64_MAX;
	volatile uint64_t x250 = 60487192LLU;
	volatile uint8_t x251 = 1U;
	int8_t x252 = 0;
	static int32_t t62 = -66585960;

	t62 = (((x249<=x250)|x251)&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x254 = INT32_MIN;
	static int16_t x255 = INT16_MAX;
	uint64_t t63 = 26683LLU;

	t63 = (((x253<=x254)|x255)&x256);

	if (t63 != 5580LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 6;
	uint8_t x258 = UINT8_MAX;
	static volatile int64_t x259 = INT64_MIN;
	volatile int64_t t64 = -291LL;

	t64 = (((x257<=x258)|x259)&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = 25U;
	int8_t x262 = -1;
	int32_t x263 = INT32_MIN;
	uint64_t t65 = 189155319661559655LLU;

	t65 = (((x261<=x262)|x263)&x264);

	if (t65 != 790887387545731072LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 7LLU;
	volatile int32_t x266 = INT32_MAX;
	static int64_t x267 = INT64_MIN;
	int8_t x268 = 3;
	volatile int64_t t66 = 28884988951628LL;

	t66 = (((x265<=x266)|x267)&x268);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x270 = INT8_MAX;
	volatile int32_t x272 = -1;

	t67 = (((x269<=x270)|x271)&x272);

	if (t67 != 12) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -1;
	static int32_t x274 = 1409;
	int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MIN;
	static int64_t t68 = INT64_MIN;

	t68 = (((x273<=x274)|x275)&x276);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x278 = UINT32_MAX;
	int8_t x280 = INT8_MAX;
	int32_t t69 = 116;

	t69 = (((x277<=x278)|x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	volatile int8_t x282 = INT8_MAX;
	int8_t x283 = INT8_MIN;

	t70 = (((x281<=x282)|x283)&x284);

	if (t70 != -127LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 1U;
	int64_t x287 = -5880779838LL;

	t71 = (((x285<=x286)|x287)&x288);

	if (t71 != 3826370LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 40;
	int16_t x290 = -1;
	int64_t x291 = -1LL;
	static int8_t x292 = -1;
	volatile int64_t t72 = -1459042LL;

	t72 = (((x289<=x290)|x291)&x292);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -692;
	static int16_t x295 = -1;
	volatile int8_t x296 = INT8_MIN;
	int32_t t73 = -56310915;

	t73 = (((x293<=x294)|x295)&x296);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	static uint32_t x298 = 19230U;

	t74 = (((x297<=x298)|x299)&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	uint8_t x302 = 93U;
	int8_t x303 = -1;
	uint8_t x304 = 1U;

	t75 = (((x301<=x302)|x303)&x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x308 = -11335921631090388LL;
	int64_t t76 = -63LL;

	t76 = (((x305<=x306)|x307)&x308);

	if (t76 != 10540LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = 91876LLU;
	static int8_t x310 = INT8_MIN;
	uint64_t x311 = UINT64_MAX;
	int64_t x312 = INT64_MIN;
	uint64_t t77 = 782281188825127429LLU;

	t77 = (((x309<=x310)|x311)&x312);

	if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1861550613501LL;
	int64_t x314 = INT64_MIN;
	volatile int32_t x316 = 333;
	int32_t t78 = 1;

	t78 = (((x313<=x314)|x315)&x316);

	if (t78 != 325) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = UINT64_MAX;
	volatile int64_t x318 = INT64_MIN;
	int32_t x320 = -1;
	int32_t t79 = 30423402;

	t79 = (((x317<=x318)|x319)&x320);

	if (t79 != -2298321) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = 8090U;
	volatile int16_t x323 = -9;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t80 = -28053;

	t80 = (((x321<=x322)|x323)&x324);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MAX;
	static int32_t x326 = -665286;
	static volatile int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MIN;

	t81 = (((x325<=x326)|x327)&x328);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MIN;
	static int32_t x331 = -208;
	static volatile int8_t x332 = INT8_MIN;
	volatile int32_t t82 = 58;

	t82 = (((x329<=x330)|x331)&x332);

	if (t82 != -256) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = INT8_MIN;
	static uint64_t x334 = 122164951244333047LLU;
	volatile int32_t x336 = -1;

	t83 = (((x333<=x334)|x335)&x336);

	if (t83 != 212LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	static int32_t x339 = 94;
	int32_t t84 = -89055;

	t84 = (((x337<=x338)|x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x343 = INT32_MIN;
	volatile int32_t t85 = INT32_MIN;

	t85 = (((x341<=x342)|x343)&x344);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = -1LL;
	static int64_t x347 = INT64_MAX;
	uint64_t x348 = UINT64_MAX;
	static uint64_t t86 = 1178793606LLU;

	t86 = (((x345<=x346)|x347)&x348);

	if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	int32_t x351 = -1;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t87 = 4905128;

	t87 = (((x349<=x350)|x351)&x352);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x354 = UINT8_MAX;
	int16_t x355 = INT16_MAX;
	int16_t x356 = -2562;
	int32_t t88 = -30;

	t88 = (((x353<=x354)|x355)&x356);

	if (t88 != 30206) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -14354;
	volatile uint64_t x358 = 1LLU;
	volatile int32_t x359 = -53050957;
	uint64_t x360 = UINT64_MAX;

	t89 = (((x357<=x358)|x359)&x360);

	if (t89 != 18446744073656500659LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int8_t x362 = 1;
	volatile uint64_t x363 = UINT64_MAX;
	int64_t x364 = INT64_MIN;
	uint64_t t90 = 3842LLU;

	t90 = (((x361<=x362)|x363)&x364);

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 75198646348598LLU;
	static int16_t x366 = INT16_MIN;
	static int16_t x368 = 3;

	t91 = (((x365<=x366)|x367)&x368);

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x370 = INT64_MAX;
	uint8_t x371 = UINT8_MAX;
	static int8_t x372 = INT8_MIN;
	volatile int32_t t92 = -18008;

	t92 = (((x369<=x370)|x371)&x372);

	if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MIN;
	int64_t x375 = INT64_MIN;
	static int32_t x376 = INT32_MAX;
	volatile int64_t t93 = 82772541489910821LL;

	t93 = (((x373<=x374)|x375)&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = -1;
	static int32_t x379 = -1;
	static volatile int16_t x380 = INT16_MIN;
	int32_t t94 = 1;

	t94 = (((x377<=x378)|x379)&x380);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x382 = INT16_MIN;
	int32_t x383 = -1;
	uint8_t x384 = 4U;
	static int32_t t95 = 496695676;

	t95 = (((x381<=x382)|x383)&x384);

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x386 = UINT64_MAX;
	volatile int32_t x387 = -1;
	static int8_t x388 = 36;
	static volatile int32_t t96 = 3264330;

	t96 = (((x385<=x386)|x387)&x388);

	if (t96 != 36) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x390 = 10U;

	t97 = (((x389<=x390)|x391)&x392);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = 33;
	int8_t x394 = -1;
	volatile int64_t t98 = INT64_MIN;

	t98 = (((x393<=x394)|x395)&x396);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 0U;
	static int32_t x398 = INT32_MIN;
	static volatile int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = INT32_MIN;

	t99 = (((x397<=x398)|x399)&x400);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

