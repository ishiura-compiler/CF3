#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -1;
int16_t x6 = INT16_MIN;
static int64_t x18 = INT64_MAX;
uint64_t t4 = 28756340814763LLU;
int32_t x22 = 109;
static uint32_t x23 = 335203498U;
int64_t t6 = INT64_MAX;
int8_t x33 = INT8_MIN;
uint64_t x38 = 1058030836LLU;
int8_t x57 = INT8_MAX;
uint64_t x63 = 349489867354952LLU;
uint8_t x74 = 39U;
static volatile uint8_t x76 = UINT8_MAX;
volatile uint32_t t16 = 144961U;
volatile int64_t t18 = 5146536564LL;
volatile int8_t x90 = -1;
volatile uint32_t t19 = 25U;
static int16_t x103 = INT16_MIN;
static volatile int64_t x115 = -27LL;
volatile uint64_t t25 = 53812753017391471LLU;
int16_t x121 = INT16_MIN;
int32_t x125 = -66903010;
volatile int64_t x137 = -9429467636382LL;
volatile int64_t x138 = -1LL;
int64_t t29 = -680597224912207145LL;
volatile int64_t x141 = -594LL;
uint16_t x144 = UINT16_MAX;
int32_t x146 = INT32_MIN;
volatile uint64_t x149 = 2958374486020LLU;
int64_t x159 = -267800LL;
static int8_t x164 = -1;
int8_t x169 = -8;
volatile int8_t x171 = 6;
int16_t x181 = INT16_MIN;
volatile int32_t t38 = -42321530;
int8_t x191 = -1;
volatile int32_t t40 = 185;
int64_t x195 = 24768242369LL;
volatile int8_t x197 = INT8_MIN;
static uint8_t x219 = UINT8_MAX;
static int64_t t50 = -30LL;
static int64_t x234 = -1LL;
int32_t x236 = INT32_MIN;
int64_t t51 = 366276LL;
int8_t x238 = INT8_MAX;
int32_t t52 = -1279203;
volatile int16_t x241 = INT16_MIN;
uint32_t x247 = 19872856U;
uint8_t x253 = UINT8_MAX;
int8_t x261 = -3;
volatile uint64_t t57 = 8352885338118251501LLU;
uint8_t x265 = 0U;
volatile int64_t x272 = -6939185251LL;
int8_t x278 = -1;
int8_t x279 = INT8_MIN;
uint64_t t63 = 3188LLU;
uint64_t x296 = 500480849LLU;
int16_t x307 = INT16_MIN;
uint64_t x311 = 519375555508395LLU;
static volatile int16_t x313 = INT16_MAX;
uint32_t t68 = 0U;
int32_t x319 = INT32_MIN;
static volatile int64_t x323 = INT64_MAX;
volatile int64_t t70 = -9399LL;
int8_t x326 = INT8_MIN;
uint8_t x327 = UINT8_MAX;
uint8_t x329 = 2U;
int32_t x341 = -126495;
int16_t x342 = INT16_MIN;
int32_t x343 = INT32_MIN;
int32_t t75 = 173263726;
volatile int64_t t76 = INT64_MIN;
int8_t x349 = INT8_MAX;
int8_t x350 = INT8_MIN;
int16_t x353 = 1;
int16_t x355 = INT16_MIN;
uint8_t x356 = 4U;
static uint8_t x357 = UINT8_MAX;
uint8_t x358 = UINT8_MAX;
static uint32_t x360 = UINT32_MAX;
int32_t x361 = 401001842;
int32_t x364 = 419;
int32_t x367 = -87013532;
uint8_t x372 = 15U;
volatile uint32_t x373 = 1475513282U;
static int64_t t83 = 1208202182LL;
int16_t x377 = INT16_MAX;
static int64_t x378 = INT64_MIN;
volatile int16_t x382 = -198;
uint16_t x385 = 0U;
int32_t x386 = INT32_MAX;
int32_t x387 = -2446;
static int8_t x389 = 0;
int64_t x394 = INT64_MIN;
volatile int64_t t88 = -413366124230LL;
volatile int64_t x400 = INT64_MIN;
uint8_t x401 = 49U;
int8_t x406 = -1;
int32_t t91 = -5091;
uint32_t x414 = 6U;
uint64_t x415 = 58569610152687518LLU;
static int8_t x418 = INT8_MIN;
static int32_t t94 = -1393;
static int64_t x433 = INT64_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = UINT64_MAX;
	uint32_t x4 = 764U;
	uint64_t t0 = 12309LLU;

	t0 = ((x1+x2)|(x3&x4));

	if (t0 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = -225373359;

	t1 = ((x5+x6)|(x7&x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x9 = 116U;
	int8_t x10 = -1;
	static volatile int32_t x11 = INT32_MIN;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -246;

	t2 = ((x9+x10)|(x11&x12));

	if (t2 != 115) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 325LL;
	int32_t x14 = -1;
	static volatile int8_t x15 = INT8_MIN;
	int64_t x16 = 5LL;
	int64_t t3 = -3LL;

	t3 = ((x13+x14)|(x15&x16));

	if (t3 != 324LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int16_t x19 = INT16_MAX;
	static uint64_t x20 = 208LLU;

	t4 = ((x17+x18)|(x19&x20));

	if (t4 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1U;
	uint64_t x24 = 3594161LLU;
	uint64_t t5 = 240467LLU;

	t5 = ((x21+x22)|(x23&x24));

	if (t5 != 3327214LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int64_t x26 = INT64_MAX;
	static int16_t x27 = 1;
	uint8_t x28 = UINT8_MAX;

	t6 = ((x25+x26)|(x27&x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int64_t x30 = -395297843368353LL;
	int64_t x31 = 24643924LL;
	static int16_t x32 = -1;
	volatile int64_t t7 = -64599933118811063LL;

	t7 = ((x29+x30)|(x31&x32));

	if (t7 != -395297826099361LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	volatile uint32_t x35 = UINT32_MAX;
	static int32_t x36 = -42309737;
	static uint32_t t8 = 31313U;

	t8 = ((x33+x34)|(x35&x36));

	if (t8 != 4252657663U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = 411;
	uint64_t t9 = 45018677850291LLU;

	t9 = ((x37+x38)|(x39&x40));

	if (t9 != 9223372037912806911LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 103U;
	static int8_t x42 = INT8_MIN;
	static int32_t x43 = 172210617;
	uint8_t x44 = 2U;
	volatile int32_t t10 = -24126;

	t10 = ((x41+x42)|(x43&x44));

	if (t10 != -25) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	volatile uint8_t x46 = 12U;
	static int16_t x47 = 40;
	volatile int32_t x48 = -2813;
	uint64_t t11 = 60540304652432759LLU;

	t11 = ((x45+x46)|(x47&x48));

	if (t11 != 11LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x58 = -1;
	static int64_t x59 = INT64_MIN;
	volatile int8_t x60 = -21;
	static volatile int64_t t12 = 1003909LL;

	t12 = ((x57+x58)|(x59&x60));

	if (t12 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x61 = INT32_MIN;
	uint64_t x62 = 15LLU;
	int16_t x64 = INT16_MIN;
	uint64_t t13 = 1614LLU;

	t13 = ((x61+x62)|(x63&x64));

	if (t13 != 18446744073498066959LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MAX;
	volatile int64_t x66 = 1264424LL;
	static uint64_t x67 = 57LLU;
	uint32_t x68 = 660568U;
	volatile uint64_t t14 = 2195318074079859035LLU;

	t14 = ((x65+x66)|(x67&x68));

	if (t14 != 1297215LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 7U;
	uint16_t x70 = UINT16_MAX;
	uint16_t x71 = 6429U;
	static int64_t x72 = -1LL;
	static volatile int64_t t15 = -183408LL;

	t15 = ((x69+x70)|(x71&x72));

	if (t15 != 71967LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x73 = 16143U;
	int8_t x75 = -12;

	t16 = ((x73+x74)|(x75&x76));

	if (t16 != 16374U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x77 = 1U;
	static int32_t x78 = -1;
	volatile uint8_t x79 = 0U;
	static int16_t x80 = -7;
	int32_t t17 = 2;

	t17 = ((x77+x78)|(x79&x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = UINT8_MAX;
	static int64_t x82 = 71757830385068468LL;
	int16_t x83 = INT16_MIN;
	volatile int32_t x84 = 22058;

	t18 = ((x81+x82)|(x83&x84));

	if (t18 != 71757830385068723LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 725993U;
	uint8_t x91 = 58U;
	int32_t x92 = INT32_MIN;

	t19 = ((x89+x90)|(x91&x92));

	if (t19 != 725992U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 1687U;
	volatile int64_t x94 = 6401529546731801LL;
	static uint16_t x95 = UINT16_MAX;
	volatile int64_t x96 = INT64_MIN;
	int64_t t20 = -32614002682LL;

	t20 = ((x93+x94)|(x95&x96));

	if (t20 != 6401529546733488LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -8;
	static int16_t x102 = INT16_MIN;
	int8_t x104 = INT8_MIN;
	int32_t t21 = -632667;

	t21 = ((x101+x102)|(x103&x104));

	if (t21 != -8) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = -7260415857977877LL;
	int64_t x106 = -1LL;
	int8_t x107 = INT8_MIN;
	uint16_t x108 = UINT16_MAX;
	volatile int64_t t22 = 1423LL;

	t22 = ((x105+x106)|(x107&x108));

	if (t22 != -7260415857917974LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MIN;
	volatile uint16_t x110 = 26490U;
	int8_t x111 = 32;
	volatile uint32_t x112 = 76U;
	static uint32_t t23 = 13113656U;

	t23 = ((x109+x110)|(x111&x112));

	if (t23 != 26362U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = UINT16_MAX;
	uint16_t x114 = 13U;
	static volatile uint16_t x116 = 0U;
	static volatile int64_t t24 = 178LL;

	t24 = ((x113+x114)|(x115&x116));

	if (t24 != 65548LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = 10067LLU;
	int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	volatile int8_t x120 = INT8_MIN;

	t25 = ((x117+x118)|(x119&x120));

	if (t25 != 9223372036854785747LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x122 = INT8_MAX;
	static uint32_t x123 = UINT32_MAX;
	int64_t x124 = INT64_MIN;
	volatile int64_t t26 = 400744360329LL;

	t26 = ((x121+x122)|(x123&x124));

	if (t26 != -32641LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x126 = -38;
	int8_t x127 = -13;
	int16_t x128 = -428;
	int32_t t27 = 58;

	t27 = ((x125+x126)|(x127&x128));

	if (t27 != -8) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -1977766466980LL;
	uint8_t x134 = 15U;
	volatile int64_t x135 = -825LL;
	int64_t x136 = INT64_MIN;
	int64_t t28 = 95030LL;

	t28 = ((x133+x134)|(x135&x136));

	if (t28 != -1977766466965LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x139 = INT64_MIN;
	int64_t x140 = 3LL;

	t29 = ((x137+x138)|(x139&x140));

	if (t29 != -9429467636383LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x142 = -477486677;
	static uint16_t x143 = UINT16_MAX;
	int64_t t30 = 1716795577071340LL;

	t30 = ((x141+x142)|(x143&x144));

	if (t30 != -477429761LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x145 = UINT8_MAX;
	volatile uint64_t x147 = 9008316959LLU;
	static volatile int32_t x148 = INT32_MIN;
	volatile uint64_t t31 = 99481866816LLU;

	t31 = ((x145+x146)|(x147&x148));

	if (t31 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x150 = UINT16_MAX;
	volatile int64_t x151 = INT64_MIN;
	static uint32_t x152 = UINT32_MAX;
	static uint64_t t32 = 7LLU;

	t32 = ((x149+x150)|(x151&x152));

	if (t32 != 2958374551555LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = -12338780410393536LL;
	int64_t x158 = INT64_MAX;
	static volatile int64_t x160 = INT64_MIN;
	int64_t t33 = 841574LL;

	t33 = ((x157+x158)|(x159&x160));

	if (t33 != -12338780410393537LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = -1;
	int32_t x162 = -29;
	int64_t x163 = INT64_MIN;
	int64_t t34 = -54106061LL;

	t34 = ((x161+x162)|(x163&x164));

	if (t34 != -30LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x165 = INT64_MIN;
	static int16_t x166 = INT16_MAX;
	volatile int16_t x167 = 136;
	uint8_t x168 = 115U;
	volatile int64_t t35 = 3228LL;

	t35 = ((x165+x166)|(x167&x168));

	if (t35 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x170 = 0U;
	int64_t x172 = -12408LL;
	volatile int64_t t36 = -1638220LL;

	t36 = ((x169+x170)|(x171&x172));

	if (t36 != -8LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x177 = 0;
	int64_t x178 = -1006648678LL;
	volatile uint8_t x179 = 3U;
	static volatile int32_t x180 = INT32_MIN;
	volatile int64_t t37 = -161588182111975763LL;

	t37 = ((x177+x178)|(x179&x180));

	if (t37 != -1006648678LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x182 = INT16_MAX;
	int16_t x183 = INT16_MAX;
	volatile uint16_t x184 = 21U;

	t38 = ((x181+x182)|(x183&x184));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = 5583;
	int64_t x186 = 80757211172355932LL;
	static volatile int8_t x187 = INT8_MIN;
	static int64_t x188 = -1LL;
	static int64_t t39 = -104522072631299539LL;

	t39 = ((x185+x186)|(x187&x188));

	if (t39 != -85LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = 34;
	int32_t x190 = 13020;
	volatile int8_t x192 = INT8_MIN;

	t40 = ((x189+x190)|(x191&x192));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = -8493168;
	volatile int16_t x194 = -1;
	volatile uint32_t x196 = UINT32_MAX;
	volatile int64_t t41 = 10LL;

	t41 = ((x193+x194)|(x195&x196));

	if (t41 != -8427569LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x198 = -252008971411386617LL;
	uint32_t x199 = 201888U;
	uint32_t x200 = 55609802U;
	int64_t t42 = -1136122793LL;

	t42 = ((x197+x198)|(x199&x200));

	if (t42 != -252008971411386745LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x201 = 6828871532302764615LLU;
	volatile int8_t x202 = INT8_MIN;
	int64_t x203 = 1LL;
	int32_t x204 = -1;
	static volatile uint64_t t43 = 1913459980416623247LLU;

	t43 = ((x201+x202)|(x203&x204));

	if (t43 != 6828871532302764487LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = INT32_MIN;
	uint64_t x206 = 29356949215LLU;
	int32_t x207 = INT32_MIN;
	static int16_t x208 = INT16_MIN;
	volatile uint64_t t44 = 192LLU;

	t44 = ((x205+x206)|(x207&x208));

	if (t44 != 18446744073001729759LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = INT64_MIN;
	static int8_t x210 = 56;
	uint16_t x211 = 10120U;
	uint16_t x212 = 1749U;
	volatile int64_t t45 = 42LL;

	t45 = ((x209+x210)|(x211&x212));

	if (t45 != -9223372036854774088LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x213 = UINT32_MAX;
	int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;
	uint32_t t46 = UINT32_MAX;

	t46 = ((x213+x214)|(x215&x216));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = 1830615LL;
	uint32_t x218 = UINT32_MAX;
	int8_t x220 = INT8_MIN;
	int64_t t47 = -1LL;

	t47 = ((x217+x218)|(x219&x220));

	if (t47 != 4296797910LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x221 = INT8_MAX;
	volatile uint32_t x222 = 786497126U;
	uint32_t x223 = 2948U;
	int8_t x224 = INT8_MIN;
	uint32_t t48 = 47U;

	t48 = ((x221+x222)|(x223&x224));

	if (t48 != 786497509U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = -1;
	static volatile uint64_t t49 = UINT64_MAX;

	t49 = ((x225+x226)|(x227&x228));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MIN;
	volatile int64_t x230 = -1LL;
	int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MIN;

	t50 = ((x229+x230)|(x231&x232));

	if (t50 != -129LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x233 = UINT8_MAX;
	volatile int8_t x235 = INT8_MAX;

	t51 = ((x233+x234)|(x235&x236));

	if (t51 != 254LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x237 = UINT8_MAX;
	static int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MIN;

	t52 = ((x237+x238)|(x239&x240));

	if (t52 != -2147483266) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x242 = -355;
	static int8_t x243 = -30;
	uint32_t x244 = UINT32_MAX;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = ((x241+x242)|(x243&x244));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x245 = -18609;
	int16_t x246 = -66;
	int64_t x248 = 575LL;
	volatile int64_t t54 = 1975LL;

	t54 = ((x245+x246)|(x247&x248));

	if (t54 != -18659LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = 15607U;
	int8_t x250 = INT8_MAX;
	uint64_t x251 = 518470317LLU;
	int32_t x252 = INT32_MIN;
	static uint64_t t55 = 3939078813874LLU;

	t55 = ((x249+x250)|(x251&x252));

	if (t55 != 15734LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x254 = UINT8_MAX;
	int64_t x255 = INT64_MIN;
	uint32_t x256 = UINT32_MAX;
	volatile int64_t t56 = 2989LL;

	t56 = ((x253+x254)|(x255&x256));

	if (t56 != 510LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x262 = 102750610LLU;
	int16_t x263 = -36;
	uint16_t x264 = 913U;

	t57 = ((x261+x262)|(x263&x264));

	if (t57 != 102751135LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x266 = INT32_MIN;
	uint16_t x267 = 7855U;
	static int8_t x268 = -1;
	int32_t t58 = 6;

	t58 = ((x265+x266)|(x267&x268));

	if (t58 != -2147475793) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x269 = 3U;
	uint16_t x270 = 27U;
	uint32_t x271 = 229084101U;
	int64_t t59 = 1113066011748482LL;

	t59 = ((x269+x270)|(x271&x272));

	if (t59 != 2362271LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x273 = 1;
	uint64_t x274 = 6295513324924501166LLU;
	int16_t x275 = -1;
	uint8_t x276 = 13U;
	uint64_t t60 = 28313872859116444LLU;

	t60 = ((x273+x274)|(x275&x276));

	if (t60 != 6295513324924501167LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x277 = -237152778;
	int8_t x280 = 54;
	volatile int32_t t61 = -528151743;

	t61 = ((x277+x278)|(x279&x280));

	if (t61 != -237152779) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x285 = 7846042258LLU;
	int8_t x286 = INT8_MIN;
	int16_t x287 = -337;
	uint16_t x288 = 1978U;
	volatile uint64_t t62 = 102386947285050250LLU;

	t62 = ((x285+x286)|(x287&x288));

	if (t62 != 7846043322LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x289 = 25LLU;
	int8_t x290 = -2;
	static uint64_t x291 = 12955253LLU;
	volatile int16_t x292 = -1;

	t63 = ((x289+x290)|(x291&x292));

	if (t63 != 12955255LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x293 = UINT64_MAX;
	int32_t x294 = INT32_MAX;
	volatile uint64_t x295 = 0LLU;
	static uint64_t t64 = 725750548163LLU;

	t64 = ((x293+x294)|(x295&x296));

	if (t64 != 2147483646LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = -1;
	uint32_t x302 = 2U;
	volatile uint64_t x303 = 64957313LLU;
	volatile int8_t x304 = -1;
	uint64_t t65 = 34744816LLU;

	t65 = ((x301+x302)|(x303&x304));

	if (t65 != 64957313LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = 54859LLU;
	int8_t x306 = INT8_MIN;
	uint32_t x308 = 10944U;
	volatile uint64_t t66 = 1LLU;

	t66 = ((x305+x306)|(x307&x308));

	if (t66 != 54731LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = -2652LL;
	uint32_t x310 = UINT32_MAX;
	uint32_t x312 = 26525710U;
	volatile uint64_t t67 = 7547LLU;

	t67 = ((x309+x310)|(x311&x312));

	if (t67 != 4294964651LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x314 = 4U;
	int16_t x315 = 1;
	uint32_t x316 = 2040U;

	t68 = ((x313+x314)|(x315&x316));

	if (t68 != 32771U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = 14;
	uint16_t x318 = UINT16_MAX;
	int64_t x320 = -1LL;
	int64_t t69 = -9219259240526LL;

	t69 = ((x317+x318)|(x319&x320));

	if (t69 != -2147418099LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = -1;
	int8_t x322 = INT8_MAX;
	volatile int16_t x324 = 871;

	t70 = ((x321+x322)|(x323&x324));

	if (t70 != 895LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x325 = UINT8_MAX;
	int8_t x328 = 20;
	static int32_t t71 = -96529;

	t71 = ((x325+x326)|(x327&x328));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x330 = INT64_MIN;
	uint16_t x331 = 787U;
	uint16_t x332 = UINT16_MAX;
	static int64_t t72 = -8182627LL;

	t72 = ((x329+x330)|(x331&x332));

	if (t72 != -9223372036854775021LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x333 = 5U;
	volatile int32_t x334 = -1;
	volatile int32_t x335 = INT32_MAX;
	int16_t x336 = INT16_MIN;
	volatile int32_t t73 = 126441;

	t73 = ((x333+x334)|(x335&x336));

	if (t73 != 2147450884) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x337 = INT32_MIN;
	static uint64_t x338 = 79475386851LLU;
	int8_t x339 = INT8_MIN;
	int32_t x340 = -1;
	volatile uint64_t t74 = 8LLU;

	t74 = ((x337+x338)|(x339&x340));

	if (t74 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x344 = -1;

	t75 = ((x341+x342)|(x343&x344));

	if (t75 != -159263) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x345 = 0U;
	static int64_t x346 = INT64_MIN;
	int8_t x347 = 2;
	int8_t x348 = 0;

	t76 = ((x345+x346)|(x347&x348));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x351 = 106900583LLU;
	int32_t x352 = -1;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x349+x350)|(x351&x352));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x354 = UINT8_MAX;
	static volatile int32_t t78 = -7814;

	t78 = ((x353+x354)|(x355&x356));

	if (t78 != 256) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x359 = 55U;
	uint32_t t79 = 3469585U;

	t79 = ((x357+x358)|(x359&x360));

	if (t79 != 511U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x362 = -1LL;
	uint64_t x363 = 962205571602172LLU;
	volatile uint64_t t80 = 73450315LLU;

	t80 = ((x361+x362)|(x363&x364));

	if (t80 != 401001969LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = INT32_MAX;
	int64_t x366 = -24433736LL;
	int32_t x368 = INT32_MIN;
	volatile int64_t t81 = 3LL;

	t81 = ((x365+x366)|(x367&x368));

	if (t81 != -24433737LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = 259308LL;
	int8_t x370 = -1;
	int64_t x371 = -255083354164LL;
	int64_t t82 = 1599543699289LL;

	t82 = ((x369+x370)|(x371&x372));

	if (t82 != 259311LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x374 = -31;
	int64_t x375 = INT64_MAX;
	uint32_t x376 = UINT32_MAX;

	t83 = ((x373+x374)|(x375&x376));

	if (t83 != 4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x379 = INT64_MIN;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t84 = 34825680502671LLU;

	t84 = ((x377+x378)|(x379&x380));

	if (t84 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x381 = 404U;
	int64_t x383 = 22607196LL;
	static uint16_t x384 = 1286U;
	static int64_t t85 = 13635808464331822LL;

	t85 = ((x381+x382)|(x383&x384));

	if (t85 != 1486LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x388 = -4552625049009906426LL;
	static volatile int64_t t86 = 0LL;

	t86 = ((x385+x386)|(x387&x388));

	if (t86 != -4552625046966763521LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x390 = INT8_MIN;
	static volatile uint32_t x391 = 1719U;
	int64_t x392 = -295300064284LL;
	int64_t t87 = 102147769304LL;

	t87 = ((x389+x390)|(x391&x392));

	if (t87 != -92LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = UINT16_MAX;
	int16_t x395 = -1;
	int8_t x396 = INT8_MIN;

	t88 = ((x393+x394)|(x395&x396));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x397 = 908U;
	volatile int16_t x398 = INT16_MIN;
	volatile int64_t x399 = INT64_MIN;
	static int64_t t89 = -454064LL;

	t89 = ((x397+x398)|(x399&x400));

	if (t89 != -31860LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x402 = UINT8_MAX;
	int16_t x403 = INT16_MIN;
	static int32_t x404 = -1460849;
	int32_t t90 = -30017;

	t90 = ((x401+x402)|(x403&x404));

	if (t90 != -1474256) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = INT8_MIN;
	int16_t x407 = 26;
	volatile int32_t x408 = 7201;

	t91 = ((x405+x406)|(x407&x408));

	if (t91 != -129) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x409 = 10992U;
	uint16_t x410 = 1260U;
	int32_t x411 = -31006122;
	int8_t x412 = INT8_MIN;
	static volatile int32_t t92 = 16102934;

	t92 = ((x409+x410)|(x411&x412));

	if (t92 != -31002660) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x413 = 47785982U;
	static int8_t x416 = INT8_MIN;
	uint64_t t93 = 7165760276263008LLU;

	t93 = ((x413+x414)|(x415&x416));

	if (t93 != 58569610153803652LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x417 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	static int16_t x420 = -1;

	t94 = ((x417+x418)|(x419&x420));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x421 = 338755;
	volatile uint8_t x422 = UINT8_MAX;
	static int32_t x423 = 940808;
	int16_t x424 = -54;
	int32_t t95 = -247839190;

	t95 = ((x421+x422)|(x423&x424));

	if (t95 != 1015626) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x425 = 22690950;
	int64_t x426 = -1LL;
	int32_t x427 = 5629142;
	volatile int16_t x428 = -1;
	volatile int64_t t96 = 30550LL;

	t96 = ((x425+x426)|(x427&x428));

	if (t96 != 23067863LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x429 = 284111;
	uint16_t x430 = UINT16_MAX;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = -1;
	int32_t t97 = 5945654;

	t97 = ((x429+x430)|(x431&x432));

	if (t97 != 349695) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x434 = INT8_MAX;
	uint16_t x435 = 941U;
	uint8_t x436 = 47U;
	volatile int64_t t98 = 362594910LL;

	t98 = ((x433+x434)|(x435&x436));

	if (t98 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x437 = INT32_MIN;
	int64_t x438 = 36833LL;
	int32_t x439 = -1;
	uint32_t x440 = UINT32_MAX;
	static int64_t t99 = -3696LL;

	t99 = ((x437+x438)|(x439&x440));

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

