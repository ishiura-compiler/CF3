#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x6 = INT32_MIN;
static volatile int64_t x7 = 6500LL;
uint32_t t3 = 2U;
int8_t x25 = 0;
static uint64_t x30 = 5246254385495589LLU;
int32_t x41 = INT32_MIN;
static uint32_t x42 = UINT32_MAX;
int64_t t11 = -776LL;
int16_t x56 = 1;
static uint8_t x59 = 84U;
int64_t x60 = INT64_MIN;
static int32_t x72 = INT32_MIN;
uint32_t t16 = 32359U;
volatile int8_t x93 = -1;
volatile int32_t t19 = 5358355;
uint64_t x102 = 42908LLU;
int8_t x132 = INT8_MIN;
int16_t x141 = INT16_MAX;
static uint8_t x147 = 104U;
volatile int32_t t30 = -146;
int64_t x153 = 170719243LL;
int8_t x154 = INT8_MIN;
static int16_t x158 = INT16_MIN;
volatile int64_t x173 = INT64_MAX;
int64_t x175 = -1LL;
int64_t x178 = 2730279024002990LL;
volatile uint32_t x179 = UINT32_MAX;
int8_t x182 = -3;
int32_t x190 = INT32_MIN;
int64_t x193 = INT64_MIN;
static uint16_t x194 = 1U;
volatile uint8_t x209 = 3U;
static int64_t x215 = INT64_MAX;
volatile uint8_t x218 = UINT8_MAX;
int64_t x220 = INT64_MIN;
int8_t x226 = -1;
volatile int32_t t48 = 1;
int16_t x232 = INT16_MIN;
uint32_t x233 = 591759728U;
int64_t x238 = INT64_MIN;
static int32_t t51 = 716;
volatile uint8_t x248 = 2U;
uint64_t t52 = 247195543695LLU;
int16_t x251 = INT16_MAX;
volatile int32_t x252 = INT32_MIN;
uint8_t x255 = 13U;
uint32_t x267 = 2167808U;
int64_t x271 = INT64_MIN;
uint8_t x284 = 22U;
int32_t t61 = -365;
uint32_t x300 = 131U;
int16_t x301 = -1;
volatile int32_t x303 = INT32_MAX;
int64_t x315 = 1053863846535530771LL;
volatile uint8_t x319 = 39U;
volatile int8_t x333 = -1;
uint8_t x342 = UINT8_MAX;
int32_t t72 = 3;
static volatile int64_t x352 = -121846720164752LL;
uint32_t x362 = 5U;
int64_t x364 = 21561223199905740LL;
volatile int32_t x367 = INT32_MIN;
int8_t x386 = 0;
volatile int16_t x394 = INT16_MAX;
int32_t x399 = -33361;
int8_t x401 = -1;
volatile uint8_t x403 = UINT8_MAX;
int64_t x404 = -1051LL;
uint32_t x405 = UINT32_MAX;
uint32_t x436 = 6119U;
int16_t x437 = -1;
int64_t x438 = -1LL;
int64_t t95 = INT64_MIN;
volatile uint16_t x450 = 695U;
volatile int32_t x451 = -1;


void f0(void) {
	volatile uint8_t x1 = 83U;
	int64_t x2 = -508LL;
	int32_t x3 = 3;
	static int16_t x4 = 1746;
	static int32_t t0 = -3;

	t0 = (x1+((x2+x3)<=x4));

	if (t0 != 84) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 498900;
	int64_t x8 = INT64_MIN;
	static int32_t t1 = -20;

	t1 = (x5+((x6+x7)<=x8));

	if (t1 != 498900) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 896413591;
	static int8_t x10 = 0;
	int8_t x11 = INT8_MIN;
	int16_t x12 = -5;
	volatile int32_t t2 = 251139;

	t2 = (x9+((x10+x11)<=x12));

	if (t2 != 896413592) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 190U;
	uint32_t x14 = UINT32_MAX;
	volatile uint8_t x15 = UINT8_MAX;
	int64_t x16 = INT64_MIN;

	t3 = (x13+((x14+x15)<=x16));

	if (t3 != 190U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int16_t x18 = 320;
	int16_t x19 = INT16_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 1860999;

	t4 = (x17+((x18+x19)<=x20));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MAX;
	int64_t x23 = -1LL;
	int64_t x24 = -1LL;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x21+((x22+x23)<=x24));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	int32_t x27 = 404455273;
	uint8_t x28 = 10U;
	volatile int32_t t6 = 87555;

	t6 = (x25+((x26+x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 7384649LLU;
	uint32_t x31 = UINT32_MAX;
	int32_t x32 = INT32_MIN;
	volatile uint64_t t7 = 1305694830449538885LLU;

	t7 = (x29+((x30+x31)<=x32));

	if (t7 != 7384650LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int16_t x34 = INT16_MAX;
	volatile int8_t x35 = INT8_MAX;
	uint32_t x36 = 26U;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x33+((x34+x35)<=x36));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x43 = 979869;
	static volatile int32_t x44 = INT32_MAX;
	int32_t t9 = 34539929;

	t9 = (x41+((x42+x43)<=x44));

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 30U;
	static int64_t x46 = 630578625LL;
	int16_t x47 = INT16_MAX;
	int32_t x48 = 60;
	static int32_t t10 = 25803555;

	t10 = (x45+((x46+x47)<=x48));

	if (t10 != 30) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MIN;
	int8_t x51 = 0;
	uint16_t x52 = UINT16_MAX;

	t11 = (x49+((x50+x51)<=x52));

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static volatile uint16_t x54 = 4U;
	int64_t x55 = -1LL;
	uint64_t t12 = UINT64_MAX;

	t12 = (x53+((x54+x55)<=x56));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 68U;
	uint32_t x58 = 94714U;
	static int32_t t13 = 3058;

	t13 = (x57+((x58+x59)<=x60));

	if (t13 != 68) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 15238LLU;
	uint16_t x62 = 2U;
	volatile int64_t x63 = 1766LL;
	uint8_t x64 = 11U;
	uint64_t t14 = 188LLU;

	t14 = (x61+((x62+x63)<=x64));

	if (t14 != 15238LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 570U;
	int16_t x70 = 7;
	volatile uint64_t x71 = 114666544777219LLU;
	static int32_t t15 = -8941395;

	t15 = (x69+((x70+x71)<=x72));

	if (t15 != 571) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 269U;
	static int64_t x78 = -19LL;
	volatile int64_t x79 = 4072451489986769LL;
	int16_t x80 = -1;

	t16 = (x77+((x78+x79)<=x80));

	if (t16 != 269U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MAX;
	int32_t x87 = -1;
	int32_t x88 = INT32_MAX;
	static volatile int32_t t17 = 4134972;

	t17 = (x85+((x86+x87)<=x88));

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = -5673LL;
	uint16_t x90 = 281U;
	int8_t x91 = INT8_MIN;
	volatile int64_t x92 = -1LL;
	int64_t t18 = 3143553890367LL;

	t18 = (x89+((x90+x91)<=x92));

	if (t18 != -5673LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x94 = INT64_MIN;
	volatile int8_t x95 = 2;
	uint16_t x96 = 3U;

	t19 = (x93+((x94+x95)<=x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x103 = 732919U;
	uint16_t x104 = 3U;
	volatile int64_t t20 = INT64_MIN;

	t20 = (x101+((x102+x103)<=x104));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = -9LL;
	volatile uint64_t x107 = 146487913LLU;
	int32_t x108 = INT32_MIN;
	volatile int64_t t21 = -3947914LL;

	t21 = (x105+((x106+x107)<=x108));

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x109 = -1;
	int64_t x110 = -1LL;
	static int64_t x111 = INT64_MAX;
	int64_t x112 = INT64_MAX;
	volatile int32_t t22 = 15266184;

	t22 = (x109+((x110+x111)<=x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = INT8_MIN;
	int64_t x114 = 1915642515467LL;
	int64_t x115 = INT64_MIN;
	static int16_t x116 = INT16_MIN;
	int32_t t23 = 1;

	t23 = (x113+((x114+x115)<=x116));

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MAX;
	int16_t x118 = -1;
	uint16_t x119 = UINT16_MAX;
	static int64_t x120 = 198520LL;
	volatile int32_t t24 = 0;

	t24 = (x117+((x118+x119)<=x120));

	if (t24 != 32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 515U;
	static uint64_t x122 = 10585040390LLU;
	static uint8_t x123 = 109U;
	uint32_t x124 = 51685U;
	int32_t t25 = -148756635;

	t25 = (x121+((x122+x123)<=x124));

	if (t25 != 515) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = 27U;
	int16_t x130 = INT16_MIN;
	volatile uint32_t x131 = UINT32_MAX;
	int32_t t26 = 1928441;

	t26 = (x129+((x130+x131)<=x132));

	if (t26 != 28) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x133 = 300466U;
	int32_t x134 = -5;
	volatile int32_t x135 = INT32_MAX;
	uint64_t x136 = 14916947807196LLU;
	uint32_t t27 = 5U;

	t27 = (x133+((x134+x135)<=x136));

	if (t27 != 300467U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = UINT8_MAX;
	int8_t x138 = 14;
	int8_t x139 = 0;
	volatile uint32_t x140 = UINT32_MAX;
	volatile int32_t t28 = 217269863;

	t28 = (x137+((x138+x139)<=x140));

	if (t28 != 256) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x142 = 128LLU;
	int32_t x143 = INT32_MAX;
	int64_t x144 = 353558457564LL;
	int32_t t29 = -1468;

	t29 = (x141+((x142+x143)<=x144));

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 3U;
	int64_t x146 = -28691260689LL;
	volatile uint32_t x148 = UINT32_MAX;

	t30 = (x145+((x146+x147)<=x148));

	if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x149 = 567U;
	static int64_t x150 = INT64_MAX;
	static int32_t x151 = INT32_MIN;
	int32_t x152 = -1;
	volatile uint32_t t31 = 8179575U;

	t31 = (x149+((x150+x151)<=x152));

	if (t31 != 567U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x155 = -1182;
	int8_t x156 = INT8_MAX;
	volatile int64_t t32 = -18163624411LL;

	t32 = (x153+((x154+x155)<=x156));

	if (t32 != 170719244LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = 19476817U;
	static uint64_t x159 = 31260963LLU;
	static uint32_t x160 = 16995407U;
	volatile uint32_t t33 = 52167U;

	t33 = (x157+((x158+x159)<=x160));

	if (t33 != 19476817U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x165 = -1996564580343LL;
	static int64_t x166 = 10LL;
	int8_t x167 = INT8_MIN;
	static int8_t x168 = 1;
	volatile int64_t t34 = -485LL;

	t34 = (x165+((x166+x167)<=x168));

	if (t34 != -1996564580342LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x169 = INT32_MIN;
	uint32_t x170 = UINT32_MAX;
	uint32_t x171 = 63524U;
	uint64_t x172 = UINT64_MAX;
	static volatile int32_t t35 = 1;

	t35 = (x169+((x170+x171)<=x172));

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x174 = INT16_MAX;
	volatile int16_t x176 = -107;
	volatile int64_t t36 = INT64_MAX;

	t36 = (x173+((x174+x175)<=x176));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x177 = INT64_MIN;
	int64_t x180 = -63815608337772594LL;
	volatile int64_t t37 = INT64_MIN;

	t37 = (x177+((x178+x179)<=x180));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -13676;
	int8_t x183 = INT8_MIN;
	static int64_t x184 = 0LL;
	int32_t t38 = -287;

	t38 = (x181+((x182+x183)<=x184));

	if (t38 != -13675) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x185 = UINT32_MAX;
	int8_t x186 = -1;
	volatile uint32_t x187 = UINT32_MAX;
	volatile int16_t x188 = -10228;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x185+((x186+x187)<=x188));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x189 = -1LL;
	uint16_t x191 = 5936U;
	volatile uint16_t x192 = 4U;
	volatile int64_t t40 = 303253773LL;

	t40 = (x189+((x190+x191)<=x192));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x195 = 13;
	int32_t x196 = -215951198;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x193+((x194+x195)<=x196));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = -1888LL;
	int64_t x202 = -1LL;
	uint32_t x203 = 1U;
	int32_t x204 = -28606;
	volatile int64_t t42 = 971206946LL;

	t42 = (x201+((x202+x203)<=x204));

	if (t42 != -1888LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = -1;
	volatile int16_t x206 = INT16_MIN;
	volatile int64_t x207 = INT64_MAX;
	int64_t x208 = INT64_MIN;
	int32_t t43 = -690541;

	t43 = (x205+((x206+x207)<=x208));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x210 = UINT8_MAX;
	uint32_t x211 = 746U;
	int16_t x212 = -3;
	int32_t t44 = -46;

	t44 = (x209+((x210+x211)<=x212));

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = 4364892;
	int64_t x214 = INT64_MIN;
	static volatile int32_t x216 = 117405589;
	volatile int32_t t45 = 176;

	t45 = (x213+((x214+x215)<=x216));

	if (t45 != 4364893) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x217 = -1LL;
	static int8_t x219 = INT8_MAX;
	int64_t t46 = 187976LL;

	t46 = (x217+((x218+x219)<=x220));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = INT8_MAX;
	static int16_t x222 = -18;
	volatile uint64_t x223 = 1697741045437LLU;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t47 = -31009390;

	t47 = (x221+((x222+x223)<=x224));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = 39;
	int32_t x227 = 1;
	uint32_t x228 = 2634U;

	t48 = (x225+((x226+x227)<=x228));

	if (t48 != 40) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x229 = -1;
	volatile int32_t x230 = -1;
	static volatile int64_t x231 = INT64_MAX;
	volatile int32_t t49 = 27598415;

	t49 = (x229+((x230+x231)<=x232));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x234 = 13U;
	static int32_t x235 = INT32_MIN;
	uint32_t x236 = 501606592U;
	static volatile uint32_t t50 = 1987044361U;

	t50 = (x233+((x234+x235)<=x236));

	if (t50 != 591759728U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x237 = -560;
	static uint16_t x239 = 327U;
	uint32_t x240 = 4886079U;

	t51 = (x237+((x238+x239)<=x240));

	if (t51 != -559) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = 42225486205117618LLU;
	int64_t x246 = INT64_MIN;
	static int64_t x247 = INT64_MAX;

	t52 = (x245+((x246+x247)<=x248));

	if (t52 != 42225486205117619LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = 0;
	static uint8_t x250 = 53U;
	volatile int32_t t53 = 240351;

	t53 = (x249+((x250+x251)<=x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x253 = -1;
	static uint8_t x254 = 29U;
	uint64_t x256 = UINT64_MAX;
	static int32_t t54 = 2986262;

	t54 = (x253+((x254+x255)<=x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = -117838;
	static int32_t x266 = 1080;
	static int16_t x268 = INT16_MAX;
	static int32_t t55 = 1754041;

	t55 = (x265+((x266+x267)<=x268));

	if (t55 != -117838) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x269 = UINT16_MAX;
	volatile uint64_t x270 = 164961LLU;
	volatile uint64_t x272 = 472676LLU;
	volatile int32_t t56 = -3042;

	t56 = (x269+((x270+x271)<=x272));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = 1468348236744LL;
	uint32_t x274 = 26491709U;
	volatile int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MAX;
	volatile int64_t t57 = -895689LL;

	t57 = (x273+((x274+x275)<=x276));

	if (t57 != 1468348236744LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x277 = UINT32_MAX;
	volatile int8_t x278 = INT8_MAX;
	int64_t x279 = -1LL;
	uint16_t x280 = 829U;
	static volatile uint32_t t58 = 757U;

	t58 = (x277+((x278+x279)<=x280));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MAX;
	uint16_t x283 = 568U;
	int32_t t59 = -193897;

	t59 = (x281+((x282+x283)<=x284));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int8_t x286 = -42;
	int16_t x287 = INT16_MAX;
	uint16_t x288 = 40U;
	static uint32_t t60 = UINT32_MAX;

	t60 = (x285+((x286+x287)<=x288));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x289 = 513562815;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MAX;
	int8_t x292 = -11;

	t61 = (x289+((x290+x291)<=x292));

	if (t61 != 513562816) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = -1;
	int16_t x298 = INT16_MAX;
	static volatile int16_t x299 = -1;
	volatile int32_t t62 = 4078;

	t62 = (x297+((x298+x299)<=x300));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x302 = 277659U;
	int64_t x304 = -1LL;
	static int32_t t63 = -115750752;

	t63 = (x301+((x302+x303)<=x304));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x305 = 7U;
	static int32_t x306 = 9;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = 121U;
	volatile int32_t t64 = -381435333;

	t64 = (x305+((x306+x307)<=x308));

	if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x313 = UINT16_MAX;
	int16_t x314 = INT16_MIN;
	static int64_t x316 = -85804246785LL;
	volatile int32_t t65 = 98;

	t65 = (x313+((x314+x315)<=x316));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x317 = 13;
	static int8_t x318 = -1;
	int32_t x320 = INT32_MAX;
	static volatile int32_t t66 = 314133;

	t66 = (x317+((x318+x319)<=x320));

	if (t66 != 14) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = INT32_MIN;
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MAX;
	int32_t t67 = INT32_MIN;

	t67 = (x321+((x322+x323)<=x324));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x325 = 641399LL;
	static int64_t x326 = 54406LL;
	int16_t x327 = INT16_MIN;
	volatile int8_t x328 = -55;
	int64_t t68 = -9169503LL;

	t68 = (x325+((x326+x327)<=x328));

	if (t68 != 641399LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = 1027796022113LL;
	int32_t x331 = -1;
	int8_t x332 = INT8_MIN;
	volatile int32_t t69 = -155;

	t69 = (x329+((x330+x331)<=x332));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x334 = 0;
	uint64_t x335 = 1067LLU;
	int64_t x336 = -79732LL;
	int32_t t70 = -12756;

	t70 = (x333+((x334+x335)<=x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x337 = -1557310356526262LL;
	volatile int32_t x338 = -1;
	int8_t x339 = -1;
	uint16_t x340 = 10627U;
	volatile int64_t t71 = -2291151346879620315LL;

	t71 = (x337+((x338+x339)<=x340));

	if (t71 != -1557310356526261LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x341 = -832;
	int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;

	t72 = (x341+((x342+x343)<=x344));

	if (t72 != -831) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = -1;
	volatile int64_t x346 = -5753473869543LL;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t73 = 3;

	t73 = (x345+((x346+x347)<=x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x349 = -1;
	int32_t x350 = 261930;
	volatile int32_t x351 = -1;
	static int32_t t74 = -14290036;

	t74 = (x349+((x350+x351)<=x352));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x361 = INT16_MAX;
	int16_t x363 = -1;
	volatile int32_t t75 = -5751318;

	t75 = (x361+((x362+x363)<=x364));

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x365 = INT8_MIN;
	static uint8_t x366 = 3U;
	uint8_t x368 = 49U;
	volatile int32_t t76 = 2919;

	t76 = (x365+((x366+x367)<=x368));

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x369 = 7U;
	uint16_t x370 = UINT16_MAX;
	int32_t x371 = -1;
	static int8_t x372 = INT8_MIN;
	volatile uint32_t t77 = 75U;

	t77 = (x369+((x370+x371)<=x372));

	if (t77 != 7U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x373 = -1;
	int32_t x374 = -31;
	int64_t x375 = 811019429517563LL;
	uint32_t x376 = 236U;
	int32_t t78 = -4716892;

	t78 = (x373+((x374+x375)<=x376));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = -25104416;
	static int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MAX;
	uint8_t x380 = UINT8_MAX;
	static int32_t t79 = -115640232;

	t79 = (x377+((x378+x379)<=x380));

	if (t79 != -25104415) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x381 = 1;
	volatile int8_t x382 = INT8_MIN;
	static int64_t x383 = -1761343658870345LL;
	int16_t x384 = 103;
	int32_t t80 = 50400;

	t80 = (x381+((x382+x383)<=x384));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x385 = UINT32_MAX;
	int32_t x387 = -1;
	int16_t x388 = -54;
	static volatile uint32_t t81 = UINT32_MAX;

	t81 = (x385+((x386+x387)<=x388));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x389 = INT8_MAX;
	static volatile uint16_t x390 = 3U;
	int8_t x391 = -3;
	int64_t x392 = -1LL;
	volatile int32_t t82 = -88426;

	t82 = (x389+((x390+x391)<=x392));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x393 = INT64_MIN;
	int8_t x395 = 22;
	int32_t x396 = -1;
	volatile int64_t t83 = INT64_MIN;

	t83 = (x393+((x394+x395)<=x396));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = -3;
	static volatile int32_t x400 = INT32_MAX;
	volatile int32_t t84 = 201244;

	t84 = (x397+((x398+x399)<=x400));

	if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x402 = UINT8_MAX;
	volatile int32_t t85 = -3814506;

	t85 = (x401+((x402+x403)<=x404));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x406 = INT64_MIN;
	volatile uint8_t x407 = 4U;
	int32_t x408 = 213;
	volatile uint32_t t86 = 257U;

	t86 = (x405+((x406+x407)<=x408));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = 454;
	volatile int8_t x410 = -1;
	int64_t x411 = 62LL;
	uint16_t x412 = 620U;
	int32_t t87 = -9109091;

	t87 = (x409+((x410+x411)<=x412));

	if (t87 != 455) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x413 = -1LL;
	volatile int16_t x414 = INT16_MIN;
	int64_t x415 = -2483025LL;
	volatile uint8_t x416 = UINT8_MAX;
	volatile int64_t t88 = 7LL;

	t88 = (x413+((x414+x415)<=x416));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x417 = INT16_MIN;
	int32_t x418 = -1;
	int16_t x419 = INT16_MAX;
	uint64_t x420 = UINT64_MAX;
	static int32_t t89 = -7;

	t89 = (x417+((x418+x419)<=x420));

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x421 = -8;
	int64_t x422 = 7655791668LL;
	uint64_t x423 = 1199273775371LLU;
	uint64_t x424 = UINT64_MAX;
	int32_t t90 = 3580927;

	t90 = (x421+((x422+x423)<=x424));

	if (t90 != -7) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x425 = 103U;
	static int32_t x426 = INT32_MAX;
	int8_t x427 = INT8_MIN;
	static int8_t x428 = -8;
	volatile int32_t t91 = -22766;

	t91 = (x425+((x426+x427)<=x428));

	if (t91 != 103) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x429 = UINT8_MAX;
	volatile uint8_t x430 = UINT8_MAX;
	int16_t x431 = INT16_MAX;
	volatile int64_t x432 = 49083LL;
	static int32_t t92 = 73803450;

	t92 = (x429+((x430+x431)<=x432));

	if (t92 != 256) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = 6026;
	int64_t x434 = INT64_MAX;
	int32_t x435 = -1;
	volatile int32_t t93 = 64622;

	t93 = (x433+((x434+x435)<=x436));

	if (t93 != 6026) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x439 = 7U;
	volatile int8_t x440 = -1;
	int32_t t94 = -46104254;

	t94 = (x437+((x438+x439)<=x440));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x441 = INT64_MIN;
	int8_t x442 = -5;
	static int32_t x443 = -1;
	int64_t x444 = INT64_MIN;

	t95 = (x441+((x442+x443)<=x444));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x445 = 16888U;
	static int8_t x446 = -7;
	static volatile uint32_t x447 = UINT32_MAX;
	uint32_t x448 = 1093210U;
	static int32_t t96 = -322221565;

	t96 = (x445+((x446+x447)<=x448));

	if (t96 != 16888) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x449 = 133334781853838743LL;
	int16_t x452 = -1;
	int64_t t97 = 3203LL;

	t97 = (x449+((x450+x451)<=x452));

	if (t97 != 133334781853838743LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x453 = 3915904892LL;
	static int8_t x454 = INT8_MIN;
	uint16_t x455 = 18U;
	int64_t x456 = 735592180843LL;
	volatile int64_t t98 = -15802LL;

	t98 = (x453+((x454+x455)<=x456));

	if (t98 != 3915904893LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x457 = 4810;
	static int16_t x458 = 7;
	uint8_t x459 = 7U;
	int64_t x460 = -100516446107LL;
	int32_t t99 = 55904990;

	t99 = (x457+((x458+x459)<=x460));

	if (t99 != 4810) { NG(); } else { ; }
	
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

