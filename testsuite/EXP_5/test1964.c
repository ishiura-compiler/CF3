#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
volatile uint32_t t2 = 279333U;
volatile uint16_t x14 = 3888U;
int8_t x15 = INT8_MIN;
int16_t x16 = -1;
int64_t x19 = INT64_MIN;
int32_t t4 = 102216;
int32_t x24 = -1002;
int64_t t5 = INT64_MIN;
int64_t t6 = INT64_MIN;
int16_t x48 = INT16_MIN;
static int32_t t13 = 61;
int32_t x79 = INT32_MIN;
volatile int64_t x80 = INT64_MIN;
int16_t x91 = 7396;
int64_t t22 = INT64_MIN;
volatile int8_t x98 = -1;
volatile int8_t x104 = INT8_MAX;
uint64_t x107 = 128466109222LLU;
int32_t x113 = -1;
volatile int8_t x114 = -23;
static volatile int32_t t27 = -14830;
uint32_t t28 = UINT32_MAX;
volatile uint32_t x136 = 2U;
int8_t x141 = INT8_MIN;
volatile int8_t x151 = -1;
uint32_t x154 = UINT32_MAX;
int16_t x157 = INT16_MAX;
uint16_t x158 = 6050U;
int16_t x159 = INT16_MIN;
int32_t t37 = 3395;
volatile int8_t x166 = INT8_MIN;
int32_t x167 = INT32_MAX;
volatile int32_t x169 = -1;
static volatile int64_t x170 = -1LL;
int16_t x173 = 343;
volatile int16_t x174 = -1;
int32_t t40 = -866750;
static int8_t x182 = INT8_MIN;
volatile int32_t t43 = 1;
volatile int16_t x190 = INT16_MAX;
int64_t x192 = INT64_MIN;
int16_t x199 = INT16_MIN;
int64_t x200 = INT64_MIN;
int64_t x219 = -353765682745LL;
static int16_t x220 = 0;
int32_t x222 = -1;
int8_t x225 = 0;
static uint32_t x230 = 30796354U;
static int32_t x233 = 371384605;
static uint16_t x238 = 8839U;
int64_t t57 = INT64_MIN;
static volatile int8_t x246 = INT8_MAX;
static int32_t x261 = -159;
uint16_t x264 = 3U;
int64_t x268 = -1LL;
int32_t x276 = -2711379;
int8_t x277 = INT8_MAX;
volatile int32_t t65 = 1;
int8_t x282 = -1;
uint16_t x286 = 1038U;
int8_t x288 = -1;
int32_t x290 = -3258;
int8_t x297 = INT8_MIN;
int32_t t69 = -2;
int16_t x301 = INT16_MIN;
volatile uint64_t x304 = 9332837194450642LLU;
int8_t x315 = -3;
uint8_t x322 = 0U;
uint64_t x325 = 4095321170808LLU;
static uint16_t x326 = 14920U;
static int16_t x330 = 4018;
static int8_t x335 = -42;
uint16_t x337 = UINT16_MAX;
static int32_t x350 = 64542;
volatile uint32_t t81 = 432453U;
static volatile uint64_t x359 = 6661LLU;
static uint16_t x361 = 988U;
uint32_t x363 = UINT32_MAX;
static int32_t x367 = -3;
int32_t x370 = INT32_MIN;
static int32_t x372 = -441426318;
int16_t x377 = INT16_MAX;
int64_t x378 = INT64_MAX;
int16_t x384 = INT16_MAX;
int64_t x390 = INT64_MAX;
int32_t x395 = -1;
volatile int32_t x403 = 1;
int64_t x407 = -68107354764048LL;
static uint8_t x408 = UINT8_MAX;
uint64_t x411 = UINT64_MAX;
int8_t x413 = INT8_MIN;
uint32_t x415 = 16031U;
uint8_t x419 = 6U;
int64_t x420 = INT64_MAX;
int32_t x422 = -1;
int8_t x423 = INT8_MIN;
uint16_t x427 = 6308U;


void f0(void) {
	volatile int32_t x1 = -6541109;
	uint16_t x2 = 61U;
	volatile int16_t x4 = INT16_MIN;
	int32_t t0 = -842;

	t0 = (x1+((x2|x3)<x4));

	if (t0 != -6541109) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int32_t x6 = 0;
	int64_t x7 = -1LL;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = 50104223;

	t1 = (x5+((x6|x7)<x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 18686U;
	int8_t x10 = 1;
	int8_t x11 = INT8_MAX;
	uint32_t x12 = UINT32_MAX;

	t2 = (x9+((x10|x11)<x12));

	if (t2 != 18687U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	static volatile uint32_t t3 = 62U;

	t3 = (x13+((x14|x15)<x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 1U;
	int32_t x18 = -1;
	int8_t x20 = -1;

	t4 = (x17+((x18|x19)<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	static int32_t x22 = 14885;
	int64_t x23 = 2711395833LL;

	t5 = (x21+((x22|x23)<x24));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	static int64_t x26 = INT64_MAX;
	uint64_t x27 = UINT64_MAX;
	static volatile uint8_t x28 = UINT8_MAX;

	t6 = (x25+((x26|x27)<x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = -13818327LL;
	volatile int64_t x31 = 249083LL;
	int32_t x32 = 925;
	volatile int32_t t7 = 3394;

	t7 = (x29+((x30|x31)<x32));

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 4U;
	int8_t x34 = -1;
	int32_t x35 = -29968175;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 2051756;

	t8 = (x33+((x34|x35)<x36));

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 505347224777348505LLU;
	int64_t x38 = 1610363556LL;
	static uint64_t x39 = UINT64_MAX;
	int16_t x40 = -1;
	volatile uint64_t t9 = 98586048911821LLU;

	t9 = (x37+((x38|x39)<x40));

	if (t9 != 505347224777348505LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 48U;
	int16_t x42 = -6112;
	uint64_t x43 = 141195LLU;
	int32_t x44 = INT32_MIN;
	static int32_t t10 = -26883665;

	t10 = (x41+((x42|x43)<x44));

	if (t10 != 48) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int32_t x46 = -1;
	int32_t x47 = INT32_MIN;
	int32_t t11 = INT32_MIN;

	t11 = (x45+((x46|x47)<x48));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int64_t x50 = INT64_MAX;
	static int32_t x51 = -1;
	int32_t x52 = INT32_MIN;
	int32_t t12 = -36;

	t12 = (x49+((x50|x51)<x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 452U;
	int64_t x54 = -1LL;
	volatile uint32_t x55 = 2028048U;
	int16_t x56 = INT16_MIN;

	t13 = (x53+((x54|x55)<x56));

	if (t13 != 452) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	uint16_t x58 = 12U;
	volatile uint32_t x59 = 60U;
	int32_t x60 = -681343;
	int32_t t14 = 410915;

	t14 = (x57+((x58|x59)<x60));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 0U;
	uint64_t x62 = UINT64_MAX;
	uint8_t x63 = 10U;
	int16_t x64 = 12;
	volatile int32_t t15 = -891;

	t15 = (x61+((x62|x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	static int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t16 = 181143;

	t16 = (x69+((x70|x71)<x72));

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	uint64_t x74 = 286LLU;
	volatile uint8_t x75 = 3U;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t17 = 0;

	t17 = (x73+((x74|x75)<x76));

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = -36623;
	int32_t x78 = INT32_MAX;
	volatile int32_t t18 = -20;

	t18 = (x77+((x78|x79)<x80));

	if (t18 != -36623) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = -1;
	static int64_t x82 = -2587177178LL;
	int64_t x83 = -60681924037LL;
	int32_t x84 = INT32_MIN;
	volatile int32_t t19 = 11;

	t19 = (x81+((x82|x83)<x84));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 4U;
	int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MIN;
	volatile int64_t x88 = INT64_MAX;
	volatile int32_t t20 = 562189883;

	t20 = (x85+((x86|x87)<x88));

	if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 76U;
	static int8_t x90 = INT8_MIN;
	int32_t x92 = INT32_MIN;
	volatile int32_t t21 = 612255;

	t21 = (x89+((x90|x91)<x92));

	if (t21 != 76) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	volatile uint32_t x94 = 64901462U;
	int16_t x95 = -1;
	volatile int64_t x96 = 130314318LL;

	t22 = (x93+((x94|x95)<x96));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	volatile int64_t x99 = -3600984LL;
	uint16_t x100 = 2957U;
	static volatile int32_t t23 = -695897135;

	t23 = (x97+((x98|x99)<x100));

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MAX;
	uint32_t x103 = UINT32_MAX;
	volatile int32_t t24 = 476332;

	t24 = (x101+((x102|x103)<x104));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x105 = 13U;
	int64_t x106 = INT64_MIN;
	static volatile int64_t x108 = -1LL;
	uint32_t t25 = 24495532U;

	t25 = (x105+((x106|x107)<x108));

	if (t25 != 14U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x115 = 1;
	static int32_t x116 = 836243;
	static volatile int32_t t26 = -25;

	t26 = (x113+((x114|x115)<x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -1;
	int8_t x118 = INT8_MAX;
	int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MIN;

	t27 = (x117+((x118|x119)<x120));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x121 = UINT32_MAX;
	uint16_t x122 = 1999U;
	int64_t x123 = 1154519246LL;
	int32_t x124 = 64838;

	t28 = (x121+((x122|x123)<x124));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x125 = INT16_MAX;
	volatile uint64_t x126 = UINT64_MAX;
	uint32_t x127 = 54U;
	uint32_t x128 = 511U;
	volatile int32_t t29 = 56;

	t29 = (x125+((x126|x127)<x128));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = 9574;
	uint16_t x130 = UINT16_MAX;
	uint8_t x131 = UINT8_MAX;
	static uint64_t x132 = 327LLU;
	volatile int32_t t30 = 719251;

	t30 = (x129+((x130|x131)<x132));

	if (t30 != 9574) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = 12529LL;
	volatile int32_t x134 = -1;
	uint32_t x135 = UINT32_MAX;
	static int64_t t31 = -21029LL;

	t31 = (x133+((x134|x135)<x136));

	if (t31 != 12529LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x137 = 7;
	static uint16_t x138 = 281U;
	int64_t x139 = INT64_MIN;
	static int8_t x140 = INT8_MIN;
	volatile int32_t t32 = -2636422;

	t32 = (x137+((x138|x139)<x140));

	if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	static uint32_t x144 = 2027844497U;
	int32_t t33 = 15669;

	t33 = (x141+((x142|x143)<x144));

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = 6281401LL;
	static int32_t x150 = 1051850394;
	int64_t x152 = INT64_MIN;
	static volatile int64_t t34 = 30664395930609656LL;

	t34 = (x149+((x150|x151)<x152));

	if (t34 != 6281401LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = INT32_MIN;
	uint8_t x155 = 69U;
	int16_t x156 = -1;
	volatile int32_t t35 = INT32_MIN;

	t35 = (x153+((x154|x155)<x156));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x160 = INT16_MIN;
	static volatile int32_t t36 = 1988;

	t36 = (x157+((x158|x159)<x160));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = -10877989145620LL;
	static int64_t x163 = -1LL;
	uint8_t x164 = UINT8_MAX;

	t37 = (x161+((x162|x163)<x164));

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x168 = -4140048;
	uint32_t t38 = UINT32_MAX;

	t38 = (x165+((x166|x167)<x168));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x171 = -11LL;
	int8_t x172 = INT8_MIN;
	int32_t t39 = -672;

	t39 = (x169+((x170|x171)<x172));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x175 = -1LL;
	uint16_t x176 = UINT16_MAX;

	t40 = (x173+((x174|x175)<x176));

	if (t40 != 344) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = 11551;
	int64_t x178 = INT64_MIN;
	static volatile int64_t x179 = 9173LL;
	int32_t x180 = INT32_MAX;
	volatile int32_t t41 = 0;

	t41 = (x177+((x178|x179)<x180));

	if (t41 != 11552) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = UINT32_MAX;
	int8_t x183 = -2;
	volatile int8_t x184 = -1;
	volatile uint32_t t42 = 4U;

	t42 = (x181+((x182|x183)<x184));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = UINT16_MAX;
	int8_t x186 = INT8_MIN;
	volatile int64_t x187 = 118103504769460234LL;
	int32_t x188 = INT32_MIN;

	t43 = (x185+((x186|x187)<x188));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = INT32_MIN;
	int64_t x191 = INT64_MAX;
	int32_t t44 = INT32_MIN;

	t44 = (x189+((x190|x191)<x192));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x193 = 509U;
	int16_t x194 = -467;
	uint8_t x195 = 0U;
	int16_t x196 = INT16_MIN;
	volatile int32_t t45 = -7383;

	t45 = (x193+((x194|x195)<x196));

	if (t45 != 509) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 4832395299619760LLU;
	int16_t x198 = INT16_MIN;
	volatile uint64_t t46 = 324149897014688817LLU;

	t46 = (x197+((x198|x199)<x200));

	if (t46 != 4832395299619760LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x201 = -14843;
	uint8_t x202 = 1U;
	int32_t x203 = -5;
	int8_t x204 = 0;
	static volatile int32_t t47 = 469602;

	t47 = (x201+((x202|x203)<x204));

	if (t47 != -14842) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = 2538237;
	volatile int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MAX;
	volatile int32_t t48 = 218770731;

	t48 = (x205+((x206|x207)<x208));

	if (t48 != 2538238) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = -1LL;
	int8_t x211 = INT8_MIN;
	volatile int32_t x212 = INT32_MIN;
	static int32_t t49 = -3841;

	t49 = (x209+((x210|x211)<x212));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = 4171155527LLU;
	volatile int64_t x214 = 11948LL;
	volatile int64_t x215 = -1LL;
	uint64_t x216 = 99630LLU;
	uint64_t t50 = 96346341778522LLU;

	t50 = (x213+((x214|x215)<x216));

	if (t50 != 4171155527LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = 1U;
	uint32_t x218 = 1690239U;
	volatile int32_t t51 = 3047;

	t51 = (x217+((x218|x219)<x220));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = INT8_MIN;
	int8_t x223 = 49;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t52 = 3;

	t52 = (x221+((x222|x223)<x224));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x226 = 261741739640LLU;
	int16_t x227 = -1;
	volatile int8_t x228 = -37;
	volatile int32_t t53 = -483793780;

	t53 = (x225+((x226|x227)<x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = 69106;
	static volatile uint64_t x231 = 86991737LLU;
	volatile uint32_t x232 = 14978910U;
	int32_t t54 = 0;

	t54 = (x229+((x230|x231)<x232));

	if (t54 != 69106) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x234 = 87U;
	static uint64_t x235 = UINT64_MAX;
	int64_t x236 = -714657055435173463LL;
	volatile int32_t t55 = -174091;

	t55 = (x233+((x234|x235)<x236));

	if (t55 != 371384605) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x237 = -59;
	int16_t x239 = 19;
	uint64_t x240 = 33LLU;
	static volatile int32_t t56 = -12122960;

	t56 = (x237+((x238|x239)<x240));

	if (t56 != -59) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x241 = INT64_MIN;
	uint8_t x242 = 0U;
	int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MIN;

	t57 = (x241+((x242|x243)<x244));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x245 = 3065U;
	int64_t x247 = INT64_MIN;
	volatile int16_t x248 = 638;
	uint32_t t58 = 19469U;

	t58 = (x245+((x246|x247)<x248));

	if (t58 != 3066U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x250 = 64730U;
	static uint8_t x251 = 5U;
	int16_t x252 = -8131;
	int32_t t59 = -93692973;

	t59 = (x249+((x250|x251)<x252));

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x253 = -1;
	int32_t x254 = 52;
	uint64_t x255 = UINT64_MAX;
	int8_t x256 = INT8_MAX;
	static volatile int32_t t60 = -15;

	t60 = (x253+((x254|x255)<x256));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x262 = INT16_MAX;
	uint8_t x263 = 41U;
	int32_t t61 = 138224;

	t61 = (x261+((x262|x263)<x264));

	if (t61 != -159) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x265 = 486U;
	static int8_t x266 = INT8_MAX;
	static int8_t x267 = INT8_MIN;
	volatile uint32_t t62 = 3195316U;

	t62 = (x265+((x266|x267)<x268));

	if (t62 != 486U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x269 = 3U;
	static uint16_t x270 = 1U;
	uint8_t x271 = 1U;
	static uint64_t x272 = 335324LLU;
	int32_t t63 = 1;

	t63 = (x269+((x270|x271)<x272));

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x273 = -498;
	uint16_t x274 = 19U;
	uint8_t x275 = 14U;
	int32_t t64 = -221;

	t64 = (x273+((x274|x275)<x276));

	if (t64 != -498) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x278 = 13U;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = -53048;

	t65 = (x277+((x278|x279)<x280));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x281 = 56;
	int16_t x283 = -1;
	uint16_t x284 = 62U;
	volatile int32_t t66 = 11;

	t66 = (x281+((x282|x283)<x284));

	if (t66 != 57) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = INT32_MIN;
	static volatile uint64_t x287 = 62656107LLU;
	int32_t t67 = 1;

	t67 = (x285+((x286|x287)<x288));

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -380924874235LL;
	int8_t x291 = 17;
	int8_t x292 = INT8_MIN;
	volatile int64_t t68 = -4255286002817877LL;

	t68 = (x289+((x290|x291)<x292));

	if (t68 != -380924874234LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x298 = -1;
	int32_t x299 = INT32_MIN;
	static uint8_t x300 = UINT8_MAX;

	t69 = (x297+((x298|x299)<x300));

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x302 = INT16_MIN;
	int8_t x303 = -1;
	int32_t t70 = -469;

	t70 = (x301+((x302|x303)<x304));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = 314;
	static uint8_t x306 = 0U;
	int32_t x307 = INT32_MAX;
	volatile int8_t x308 = INT8_MIN;
	static int32_t t71 = 379;

	t71 = (x305+((x306|x307)<x308));

	if (t71 != 314) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = INT64_MIN;
	static volatile int64_t x314 = INT64_MIN;
	static int64_t x316 = INT64_MAX;
	int64_t t72 = -14LL;

	t72 = (x313+((x314|x315)<x316));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x317 = 730807036U;
	static int64_t x318 = INT64_MAX;
	volatile uint16_t x319 = 25U;
	int32_t x320 = -7;
	volatile uint32_t t73 = 249U;

	t73 = (x317+((x318|x319)<x320));

	if (t73 != 730807036U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = -1;
	int32_t x323 = 109624762;
	volatile int64_t x324 = INT64_MIN;
	int32_t t74 = 9812550;

	t74 = (x321+((x322|x323)<x324));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x327 = -3421;
	volatile int32_t x328 = INT32_MAX;
	uint64_t t75 = 76220590085678LLU;

	t75 = (x325+((x326|x327)<x328));

	if (t75 != 4095321170809LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x329 = INT16_MAX;
	uint64_t x331 = 181844146549LLU;
	static int8_t x332 = INT8_MIN;
	int32_t t76 = 1;

	t76 = (x329+((x330|x331)<x332));

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x333 = UINT8_MAX;
	uint64_t x334 = 3575833995LLU;
	uint32_t x336 = 2U;
	int32_t t77 = -209;

	t77 = (x333+((x334|x335)<x336));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x338 = INT64_MIN;
	int64_t x339 = -2529365261900059LL;
	uint32_t x340 = 1655316627U;
	volatile int32_t t78 = -488912;

	t78 = (x337+((x338|x339)<x340));

	if (t78 != 65536) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = -3;
	int32_t x342 = INT32_MAX;
	static volatile uint32_t x343 = UINT32_MAX;
	uint16_t x344 = UINT16_MAX;
	int32_t t79 = 59973727;

	t79 = (x341+((x342|x343)<x344));

	if (t79 != -3) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x345 = -13212726;
	uint16_t x346 = UINT16_MAX;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = -1;
	volatile int32_t t80 = 552011592;

	t80 = (x345+((x346|x347)<x348));

	if (t80 != -13212726) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x349 = 60852316U;
	static uint16_t x351 = 14998U;
	int8_t x352 = INT8_MIN;

	t81 = (x349+((x350|x351)<x352));

	if (t81 != 60852316U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x353 = INT32_MIN;
	uint8_t x354 = 45U;
	int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MIN;
	volatile int32_t t82 = INT32_MIN;

	t82 = (x353+((x354|x355)<x356));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x357 = 0U;
	static int64_t x358 = -1051056941LL;
	static uint64_t x360 = UINT64_MAX;
	static int32_t t83 = -2;

	t83 = (x357+((x358|x359)<x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x362 = 3209603911904687LL;
	int32_t x364 = INT32_MIN;
	volatile int32_t t84 = 206458;

	t84 = (x361+((x362|x363)<x364));

	if (t84 != 988) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x365 = -6304;
	int32_t x366 = INT32_MIN;
	volatile int32_t x368 = 29;
	static int32_t t85 = -3277;

	t85 = (x365+((x366|x367)<x368));

	if (t85 != -6303) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	uint64_t x371 = UINT64_MAX;
	int32_t t86 = -24;

	t86 = (x369+((x370|x371)<x372));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	int32_t t87 = 6857;

	t87 = (x377+((x378|x379)<x380));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x381 = 207852LLU;
	static int8_t x382 = INT8_MIN;
	volatile uint8_t x383 = UINT8_MAX;
	static uint64_t t88 = 71420672782819LLU;

	t88 = (x381+((x382|x383)<x384));

	if (t88 != 207853LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x385 = UINT32_MAX;
	static int32_t x386 = 23174;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MAX;
	uint32_t t89 = 6491U;

	t89 = (x385+((x386|x387)<x388));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = 2492926;
	int32_t x391 = -6660836;
	int64_t x392 = INT64_MIN;
	static int32_t t90 = 1;

	t90 = (x389+((x390|x391)<x392));

	if (t90 != 2492926) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = 19966;
	static int8_t x394 = INT8_MIN;
	static int16_t x396 = -1129;
	int32_t t91 = -8;

	t91 = (x393+((x394|x395)<x396));

	if (t91 != 19966) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x397 = 12U;
	int64_t x398 = INT64_MIN;
	uint64_t x399 = 6817415903535696LLU;
	uint32_t x400 = 9461164U;
	volatile int32_t t92 = -52695;

	t92 = (x397+((x398|x399)<x400));

	if (t92 != 12) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x401 = 37U;
	int16_t x402 = -19;
	static volatile int32_t x404 = INT32_MAX;
	volatile int32_t t93 = 882704096;

	t93 = (x401+((x402|x403)<x404));

	if (t93 != 38) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x405 = 25U;
	uint64_t x406 = 608858248LLU;
	static volatile int32_t t94 = -20056452;

	t94 = (x405+((x406|x407)<x408));

	if (t94 != 25) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x409 = UINT32_MAX;
	volatile int32_t x410 = INT32_MIN;
	int8_t x412 = -57;
	static uint32_t t95 = UINT32_MAX;

	t95 = (x409+((x410|x411)<x412));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x414 = INT8_MAX;
	int32_t x416 = 128441;
	int32_t t96 = -542;

	t96 = (x413+((x414|x415)<x416));

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x417 = UINT8_MAX;
	uint64_t x418 = 3LLU;
	volatile int32_t t97 = -254875493;

	t97 = (x417+((x418|x419)<x420));

	if (t97 != 256) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x421 = 8U;
	uint8_t x424 = 16U;
	int32_t t98 = 461345304;

	t98 = (x421+((x422|x423)<x424));

	if (t98 != 9) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = -1LL;
	volatile uint64_t x426 = 114574907LLU;
	volatile int16_t x428 = INT16_MAX;
	int64_t t99 = -4167698282683253063LL;

	t99 = (x425+((x426|x427)<x428));

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

