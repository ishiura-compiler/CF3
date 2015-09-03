#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 22096;
int64_t x9 = -937LL;
uint32_t x13 = UINT32_MAX;
int64_t x14 = INT64_MIN;
static volatile int32_t x17 = INT32_MIN;
uint64_t x18 = UINT64_MAX;
static int64_t x24 = 1LL;
int64_t t4 = 7LL;
uint16_t x26 = 3U;
volatile int64_t t6 = 66345575679LL;
int32_t x45 = 84330;
volatile uint8_t x46 = UINT8_MAX;
static volatile int32_t t11 = 130201;
int16_t x60 = INT16_MIN;
int32_t t12 = 3098;
uint64_t x62 = 50LLU;
volatile uint32_t x63 = UINT32_MAX;
uint32_t x65 = 363U;
volatile int64_t x66 = 1548598LL;
static volatile uint16_t x67 = UINT16_MAX;
volatile int64_t t15 = 2958176LL;
static int64_t t16 = 1155026898428648LL;
int8_t x83 = 10;
int64_t t19 = -69210030317249LL;
static uint16_t x93 = 0U;
int16_t x107 = INT16_MIN;
static uint16_t x111 = 300U;
int16_t x112 = INT16_MIN;
volatile int32_t x115 = 268634;
int64_t t25 = -2523269811LL;
int64_t x118 = -36311879LL;
volatile int32_t x119 = 61;
uint8_t x123 = 0U;
int16_t x127 = INT16_MIN;
static uint32_t x132 = 14867451U;
uint8_t x137 = 1U;
volatile int64_t x139 = -1LL;
int64_t x148 = -1LL;
int64_t x157 = INT64_MAX;
int32_t x160 = -4815;
static int64_t x167 = -77212674544028836LL;
static volatile uint64_t t38 = 404713883428246LLU;
int8_t x174 = -1;
static int8_t x176 = INT8_MIN;
int16_t x178 = INT16_MIN;
static int16_t x184 = INT16_MIN;
int8_t x185 = -1;
uint16_t x193 = 28U;
int64_t x194 = -1LL;
static int32_t x197 = -404629;
int64_t x203 = 3LL;
int8_t x213 = 15;
static volatile uint16_t x216 = UINT16_MAX;
int8_t x233 = 5;
static uint64_t x234 = 734567279908426LLU;
static uint64_t x236 = UINT64_MAX;
int32_t x237 = -1;
int16_t x238 = -1;
int32_t x241 = INT32_MIN;
int64_t t55 = -993349003420LL;
static volatile int16_t x245 = -5;
int64_t x246 = -1LL;
int64_t t56 = 218129245015523650LL;
volatile int8_t x261 = -40;
static int32_t t60 = -24643714;
volatile uint64_t t61 = 2090624245148489614LLU;
uint32_t x275 = 428U;
uint32_t x283 = UINT32_MAX;
volatile uint64_t t65 = 4342359319378775812LLU;
volatile int32_t x294 = INT32_MAX;
uint8_t x304 = UINT8_MAX;
int64_t t70 = 747817668371003LL;
uint64_t x311 = 102724567791397LLU;
volatile int8_t x314 = -2;
int32_t x324 = INT32_MIN;
int16_t x330 = INT16_MIN;
volatile int32_t t78 = 1083699;
int32_t t81 = -8;
int64_t x364 = INT64_MAX;
uint8_t x365 = 3U;
int32_t x366 = -1;
static volatile int32_t t83 = 902308;
uint64_t x371 = 66280636LLU;
uint64_t x374 = UINT64_MAX;
volatile uint32_t t86 = 1142727385U;
int16_t x381 = INT16_MIN;
int8_t x382 = 7;
volatile int32_t t87 = 736946;
int32_t x385 = INT32_MIN;
volatile int32_t t88 = -15;
int32_t x389 = INT32_MIN;
int8_t x390 = INT8_MIN;
int32_t x391 = INT32_MIN;
int32_t x396 = INT32_MIN;
static int64_t t90 = 2414758LL;
int64_t x397 = -1LL;
uint8_t x398 = 17U;
static uint16_t x399 = 46U;
int32_t x400 = INT32_MIN;
int32_t x406 = -1;
int16_t x413 = -1;
volatile int8_t x415 = INT8_MAX;
int16_t x430 = -203;
int8_t x440 = INT8_MIN;


void f0(void) {
	uint8_t x1 = 40U;
	static int16_t x2 = -1;
	volatile int8_t x3 = -18;
	static uint16_t x4 = 56U;

	t0 = ((x1%x2)-(x3&x4));

	if (t0 != -40) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = INT16_MIN;
	uint16_t x11 = 44U;
	int8_t x12 = 4;
	int64_t t1 = -109274LL;

	t1 = ((x9%x10)-(x11&x12));

	if (t1 != -941LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x15 = 10430578539070LLU;
	static uint64_t x16 = UINT64_MAX;
	uint64_t t2 = 115286943244787LLU;

	t2 = ((x13%x14)-(x15&x16));

	if (t2 != 18446733647425979841LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x19 = -1;
	int64_t x20 = INT64_MAX;
	volatile uint64_t t3 = 212562872912459LLU;

	t3 = ((x17%x18)-(x19&x20));

	if (t3 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 179391LL;
	volatile int32_t x22 = -1;
	uint8_t x23 = 1U;

	t4 = ((x21%x22)-(x23&x24));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int64_t x27 = INT64_MIN;
	uint32_t x28 = 25U;
	volatile int64_t t5 = -1LL;

	t5 = ((x25%x26)-(x27&x28));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -5;
	uint8_t x30 = 17U;
	int8_t x31 = 28;
	int64_t x32 = INT64_MIN;

	t6 = ((x29%x30)-(x31&x32));

	if (t6 != -5LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = 1;
	uint8_t x34 = 65U;
	int32_t x35 = 6;
	static int32_t x36 = 2;
	volatile int32_t t7 = 5;

	t7 = ((x33%x34)-(x35&x36));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 7U;
	uint32_t x42 = 1014775121U;
	uint16_t x43 = UINT16_MAX;
	int8_t x44 = -18;
	volatile uint32_t t8 = 66637U;

	t8 = ((x41%x42)-(x43&x44));

	if (t8 != 4294901785U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x47 = UINT64_MAX;
	uint32_t x48 = 96U;
	uint64_t t9 = 2LLU;

	t9 = ((x45%x46)-(x47&x48));

	if (t9 != 84LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MAX;
	int32_t x51 = INT32_MIN;
	int8_t x52 = -1;
	static int32_t t10 = -191138;

	t10 = ((x49%x50)-(x51&x52));

	if (t10 != 2147483646) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 2U;
	static int16_t x54 = -1;
	static int8_t x55 = INT8_MIN;
	static int8_t x56 = -1;

	t11 = ((x53%x54)-(x55&x56));

	if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = 345;
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = INT8_MIN;

	t12 = ((x57%x58)-(x59&x60));

	if (t12 != 33113) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = -45;
	int8_t x64 = INT8_MAX;
	volatile uint64_t t13 = 26932623418LLU;

	t13 = ((x61%x62)-(x63&x64));

	if (t13 != 18446744073709551510LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x68 = 7194500280833LLU;
	uint64_t t14 = 53787414451019943LLU;

	t14 = ((x65%x66)-(x67&x68));

	if (t14 != 18446744073709539178LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	volatile int8_t x70 = 1;
	int8_t x71 = INT8_MIN;
	int16_t x72 = 56;

	t15 = ((x69%x70)-(x71&x72));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = -1LL;
	int8_t x79 = INT8_MIN;
	volatile int32_t x80 = INT32_MAX;

	t16 = ((x77%x78)-(x79&x80));

	if (t16 != -2147483520LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	static int64_t x84 = 22856486LL;
	volatile int64_t t17 = -34280250LL;

	t17 = ((x81%x82)-(x83&x84));

	if (t17 != 125LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	volatile uint16_t x86 = 328U;
	static uint8_t x87 = 2U;
	uint32_t x88 = UINT32_MAX;
	uint32_t t18 = 4826335U;

	t18 = ((x85%x86)-(x87&x88));

	if (t18 != 125U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = INT64_MIN;
	int8_t x90 = -5;
	int32_t x91 = INT32_MAX;
	static uint32_t x92 = UINT32_MAX;

	t19 = ((x89%x90)-(x91&x92));

	if (t19 != -2147483650LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	static volatile uint8_t x96 = 1U;
	volatile int32_t t20 = -14344281;

	t20 = ((x93%x94)-(x95&x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = -15;
	uint16_t x99 = 0U;
	static int8_t x100 = -1;
	static uint32_t t21 = 111953479U;

	t21 = ((x97%x98)-(x99&x100));

	if (t21 != 14U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = INT32_MIN;
	uint16_t x103 = 10U;
	volatile uint16_t x104 = 32U;
	int64_t t22 = -166LL;

	t22 = ((x101%x102)-(x103&x104));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -1;
	static int32_t x106 = -1;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t23 = 147223130460723811LLU;

	t23 = ((x105%x106)-(x107&x108));

	if (t23 != 32768LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x109 = -1132;
	int16_t x110 = INT16_MIN;
	int32_t t24 = -583;

	t24 = ((x109%x110)-(x111&x112));

	if (t24 != -1132) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	int64_t x114 = -187573553LL;
	static uint32_t x116 = 114U;

	t25 = ((x113%x114)-(x115&x116));

	if (t25 != -102449055LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 3U;
	static volatile uint8_t x120 = 1U;
	int64_t t26 = -1981935LL;

	t26 = ((x117%x118)-(x119&x120));

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	volatile uint64_t x122 = UINT64_MAX;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t27 = 6789416311233478941LLU;

	t27 = ((x121%x122)-(x123&x124));

	if (t27 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = UINT32_MAX;
	uint64_t x126 = 1533187056706120481LLU;
	volatile int8_t x128 = 7;
	uint64_t t28 = 1700659066701386668LLU;

	t28 = ((x125%x126)-(x127&x128));

	if (t28 != 4294967295LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MAX;
	volatile uint64_t x131 = 192538910LLU;
	static uint64_t t29 = 5LLU;

	t29 = ((x129%x130)-(x131&x132));

	if (t29 != 18446744073703208677LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x138 = INT32_MIN;
	int32_t x140 = INT32_MIN;
	static int64_t t30 = -131239158874910LL;

	t30 = ((x137%x138)-(x139&x140));

	if (t30 != 2147483649LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = -438688425;
	int32_t x142 = -1988453;
	int32_t x143 = INT32_MIN;
	int64_t x144 = 1LL;
	volatile int64_t t31 = -10640090599LL;

	t31 = ((x141%x142)-(x143&x144));

	if (t31 != -1228765LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = -786537890411094LL;
	uint32_t x146 = UINT32_MAX;
	int32_t x147 = 3;
	int64_t t32 = -53322513937254LL;

	t32 = ((x145%x146)-(x147&x148));

	if (t32 != -529677747LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MAX;
	uint64_t x150 = 28LLU;
	int16_t x151 = INT16_MAX;
	volatile int64_t x152 = INT64_MAX;
	uint64_t t33 = 614527541179203LLU;

	t33 = ((x149%x150)-(x151&x152));

	if (t33 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = UINT32_MAX;
	static int16_t x154 = 7932;
	int16_t x155 = -1;
	volatile int32_t x156 = -1;
	uint32_t t34 = 2857U;

	t34 = ((x153%x154)-(x155&x156));

	if (t34 != 3460U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x158 = -6;
	int16_t x159 = INT16_MIN;
	static volatile int64_t t35 = 444862525307699622LL;

	t35 = ((x157%x158)-(x159&x160));

	if (t35 != 32769LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x161 = 1LL;
	int16_t x162 = 11;
	int8_t x163 = INT8_MAX;
	uint16_t x164 = UINT16_MAX;
	volatile int64_t t36 = -1126LL;

	t36 = ((x161%x162)-(x163&x164));

	if (t36 != -126LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 6U;
	uint16_t x166 = 12U;
	uint32_t x168 = UINT32_MAX;
	volatile int64_t t37 = -122430569501LL;

	t37 = ((x165%x166)-(x167&x168));

	if (t37 != -1235563350LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x169 = 4115863LLU;
	volatile int16_t x170 = INT16_MIN;
	uint16_t x171 = 25U;
	static int64_t x172 = INT64_MIN;

	t38 = ((x169%x170)-(x171&x172));

	if (t38 != 4115863LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x173 = 71180659860306877LLU;
	int16_t x175 = INT16_MIN;
	volatile uint64_t t39 = 73887256423138LLU;

	t39 = ((x173%x174)-(x175&x176));

	if (t39 != 71180659860339645LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = 52;
	uint16_t x179 = UINT16_MAX;
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t40 = 8426LLU;

	t40 = ((x177%x178)-(x179&x180));

	if (t40 != 18446744073709486133LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = 605013659823098LLU;
	int16_t x182 = 1085;
	int64_t x183 = INT64_MIN;
	volatile uint64_t t41 = 6269682LLU;

	t41 = ((x181%x182)-(x183&x184));

	if (t41 != 9223372036854776516LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x186 = 1804U;
	volatile int64_t x187 = INT64_MIN;
	volatile int32_t x188 = 12;
	static volatile int64_t t42 = -1974657490161LL;

	t42 = ((x185%x186)-(x187&x188));

	if (t42 != 487LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = UINT64_MAX;
	static int64_t x190 = INT64_MAX;
	int16_t x191 = -1;
	static int32_t x192 = -1;
	volatile uint64_t t43 = 2101759770803048419LLU;

	t43 = ((x189%x190)-(x191&x192));

	if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x195 = -1;
	static int8_t x196 = -1;
	volatile int64_t t44 = 27055945LL;

	t44 = ((x193%x194)-(x195&x196));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x198 = -1LL;
	int16_t x199 = INT16_MAX;
	uint64_t x200 = 0LLU;
	volatile uint64_t t45 = 502664831465LLU;

	t45 = ((x197%x198)-(x199&x200));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 45653U;
	uint32_t x202 = UINT32_MAX;
	int32_t x204 = 2;
	volatile int64_t t46 = -1112903665712697LL;

	t46 = ((x201%x202)-(x203&x204));

	if (t46 != 45651LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = UINT16_MAX;
	int64_t x206 = INT64_MIN;
	volatile int64_t x207 = -1LL;
	uint16_t x208 = UINT16_MAX;
	volatile int64_t t47 = 308331969LL;

	t47 = ((x205%x206)-(x207&x208));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x209 = INT32_MIN;
	volatile uint64_t x210 = 16354923LLU;
	uint8_t x211 = 3U;
	uint64_t x212 = 1992058270764LLU;
	static volatile uint64_t t48 = 5LLU;

	t48 = ((x209%x210)-(x211&x212));

	if (t48 != 4969307LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x214 = 904678091U;
	uint16_t x215 = 27U;
	volatile uint32_t t49 = 21714597U;

	t49 = ((x213%x214)-(x215&x216));

	if (t49 != 4294967284U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	static uint8_t x218 = 30U;
	uint64_t x219 = 5807232251643LLU;
	uint8_t x220 = UINT8_MAX;
	uint64_t t50 = 1LLU;

	t50 = ((x217%x218)-(x219&x220));

	if (t50 != 18446744073709551357LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	static volatile int16_t x226 = -1;
	volatile int32_t x227 = INT32_MIN;
	int32_t x228 = 3094;
	static int32_t t51 = -6298557;

	t51 = ((x225%x226)-(x227&x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = -2695139LL;
	int64_t x230 = 323486917991LL;
	uint8_t x231 = UINT8_MAX;
	uint16_t x232 = UINT16_MAX;
	volatile int64_t t52 = -24352023748LL;

	t52 = ((x229%x230)-(x231&x232));

	if (t52 != -2695394LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x235 = INT16_MIN;
	uint64_t t53 = 1868418990332662LLU;

	t53 = ((x233%x234)-(x235&x236));

	if (t53 != 32773LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x239 = INT16_MIN;
	uint32_t x240 = 7493503U;
	uint32_t t54 = 1004U;

	t54 = ((x237%x238)-(x239&x240));

	if (t54 != 4287496192U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x242 = UINT32_MAX;
	int64_t x243 = -1LL;
	volatile int8_t x244 = -1;

	t55 = ((x241%x242)-(x243&x244));

	if (t55 != 2147483649LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x247 = UINT8_MAX;
	int16_t x248 = -1;

	t56 = ((x245%x246)-(x247&x248));

	if (t56 != -255LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = INT64_MIN;
	uint8_t x250 = 29U;
	static uint8_t x251 = 100U;
	uint8_t x252 = 39U;
	volatile int64_t t57 = 1333LL;

	t57 = ((x249%x250)-(x251&x252));

	if (t57 != -48LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = 29520935;
	uint32_t x254 = 2143479U;
	volatile uint64_t x255 = 12102546999879063LLU;
	static uint16_t x256 = UINT16_MAX;
	volatile uint64_t t58 = 1780470473LLU;

	t58 = ((x253%x254)-(x255&x256));

	if (t58 != 1646085LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x257 = 9317650U;
	uint32_t x258 = 7399465U;
	uint64_t x259 = 9377439381416LLU;
	int16_t x260 = -1;
	uint64_t t59 = 17972LLU;

	t59 = ((x257%x258)-(x259&x260));

	if (t59 != 18446734696272088385LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x262 = -1;
	static int32_t x263 = -1;
	int32_t x264 = INT32_MAX;

	t60 = ((x261%x262)-(x263&x264));

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -1;
	static int64_t x270 = INT64_MAX;
	static uint64_t x271 = UINT64_MAX;
	int64_t x272 = -1LL;

	t61 = ((x269%x270)-(x271&x272));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x273 = 89;
	static int32_t x274 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	static volatile uint32_t t62 = 286966001U;

	t62 = ((x273%x274)-(x275&x276));

	if (t62 != 89U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x277 = 72618373U;
	uint8_t x278 = 2U;
	volatile int8_t x279 = INT8_MAX;
	int32_t x280 = -53574;
	volatile uint32_t t63 = 117U;

	t63 = ((x277%x278)-(x279&x280));

	if (t63 != 4294967239U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x281 = UINT16_MAX;
	int32_t x282 = -5;
	volatile int8_t x284 = INT8_MIN;
	volatile uint32_t t64 = 17511097U;

	t64 = ((x281%x282)-(x283&x284));

	if (t64 != 128U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = 84061LL;
	int8_t x286 = -42;
	uint64_t x287 = 12900992542546014LLU;
	uint64_t x288 = UINT64_MAX;

	t65 = ((x285%x286)-(x287&x288));

	if (t65 != 18433843081167005621LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = INT8_MIN;
	static int64_t x290 = -1LL;
	volatile int8_t x291 = -53;
	uint8_t x292 = 103U;
	volatile int64_t t66 = -15684135696403460LL;

	t66 = ((x289%x290)-(x291&x292));

	if (t66 != -67LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = INT32_MIN;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = 122U;
	int32_t t67 = 820;

	t67 = ((x293%x294)-(x295&x296));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x297 = INT64_MIN;
	int64_t x298 = 32451276536607716LL;
	volatile int8_t x299 = INT8_MIN;
	static volatile uint16_t x300 = UINT16_MAX;
	int64_t t68 = 10335176312LL;

	t68 = ((x297%x298)-(x299&x300));

	if (t68 != -7209500458249872LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x301 = 2U;
	static int8_t x302 = INT8_MIN;
	int16_t x303 = -153;
	volatile int32_t t69 = -36;

	t69 = ((x301%x302)-(x303&x304));

	if (t69 != -101) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x305 = INT64_MIN;
	static int32_t x306 = INT32_MIN;
	int64_t x307 = -180LL;
	int16_t x308 = -8953;

	t70 = ((x305%x306)-(x307&x308));

	if (t70 != 8956LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = 281441957988LL;
	volatile int16_t x310 = INT16_MAX;
	uint16_t x312 = 228U;
	volatile uint64_t t71 = 8LLU;

	t71 = ((x309%x310)-(x311&x312));

	if (t71 != 1989LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = -846316363431793439LL;
	int32_t x315 = -65416488;
	uint8_t x316 = 127U;
	int64_t t72 = -480739263LL;

	t72 = ((x313%x314)-(x315&x316));

	if (t72 != -89LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = -10;
	volatile int32_t x318 = 62;
	int64_t x319 = -50036LL;
	static int8_t x320 = -1;
	int64_t t73 = 237348LL;

	t73 = ((x317%x318)-(x319&x320));

	if (t73 != 50026LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x321 = -5;
	int32_t x322 = -1;
	int8_t x323 = 7;
	static volatile int32_t t74 = -837;

	t74 = ((x321%x322)-(x323&x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = -1LL;
	static volatile int64_t x326 = INT64_MIN;
	uint8_t x327 = 103U;
	volatile int8_t x328 = INT8_MIN;
	static volatile int64_t t75 = 1527661998741370143LL;

	t75 = ((x325%x326)-(x327&x328));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x329 = UINT64_MAX;
	uint8_t x331 = 26U;
	int64_t x332 = INT64_MIN;
	uint64_t t76 = 150866135050LLU;

	t76 = ((x329%x330)-(x331&x332));

	if (t76 != 32767LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x333 = 265250U;
	static volatile int16_t x334 = INT16_MAX;
	int8_t x335 = -1;
	static int16_t x336 = -1;
	volatile uint32_t t77 = 4018U;

	t77 = ((x333%x334)-(x335&x336));

	if (t77 != 3115U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = -1;
	static uint16_t x338 = 3U;
	static uint16_t x339 = 3U;
	static int8_t x340 = -1;

	t78 = ((x337%x338)-(x339&x340));

	if (t78 != -4) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x345 = UINT32_MAX;
	int32_t x346 = -1;
	volatile int32_t x347 = INT32_MIN;
	static volatile int16_t x348 = 5020;
	volatile uint32_t t79 = 1936U;

	t79 = ((x345%x346)-(x347&x348));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x353 = 14233;
	int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MIN;
	int32_t x356 = 18;
	int64_t t80 = 227381145LL;

	t80 = ((x353%x354)-(x355&x356));

	if (t80 != 25LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x357 = UINT8_MAX;
	volatile int16_t x358 = INT16_MIN;
	volatile int16_t x359 = INT16_MIN;
	uint8_t x360 = 30U;

	t81 = ((x357%x358)-(x359&x360));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = -200;
	int16_t x363 = INT16_MIN;
	static volatile int64_t t82 = -664299LL;

	t82 = ((x361%x362)-(x363&x364));

	if (t82 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x367 = -21;
	uint8_t x368 = 0U;

	t83 = ((x365%x366)-(x367&x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = UINT64_MAX;
	static int16_t x370 = INT16_MIN;
	volatile uint32_t x372 = UINT32_MAX;
	uint64_t t84 = 62832LLU;

	t84 = ((x369%x370)-(x371&x372));

	if (t84 != 18446744073643303747LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x373 = INT32_MIN;
	volatile int8_t x375 = -1;
	uint16_t x376 = 14U;
	volatile uint64_t t85 = 37238LLU;

	t85 = ((x373%x374)-(x375&x376));

	if (t85 != 18446744071562067954LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x377 = 1020U;
	int16_t x378 = 2;
	uint8_t x379 = 1U;
	int32_t x380 = INT32_MIN;

	t86 = ((x377%x378)-(x379&x380));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x383 = INT32_MIN;
	uint16_t x384 = 7U;

	t87 = ((x381%x382)-(x383&x384));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x386 = 45U;
	volatile uint16_t x387 = UINT16_MAX;
	int32_t x388 = 1;

	t88 = ((x385%x386)-(x387&x388));

	if (t88 != -39) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x392 = INT32_MAX;
	static volatile int32_t t89 = -108075432;

	t89 = ((x389%x390)-(x391&x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x393 = INT64_MIN;
	int16_t x394 = -1;
	volatile int8_t x395 = INT8_MIN;

	t90 = ((x393%x394)-(x395&x396));

	if (t90 != 2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t t91 = 4568208883985645445LL;

	t91 = ((x397%x398)-(x399&x400));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x401 = 1;
	int8_t x402 = INT8_MAX;
	uint32_t x403 = 519U;
	int8_t x404 = INT8_MAX;
	uint32_t t92 = 5248568U;

	t92 = ((x401%x402)-(x403&x404));

	if (t92 != 4294967290U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x405 = 198;
	static uint8_t x407 = 125U;
	uint8_t x408 = 1U;
	volatile int32_t t93 = -14156423;

	t93 = ((x405%x406)-(x407&x408));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x414 = 2963467U;
	uint32_t x416 = UINT32_MAX;
	uint32_t t94 = 3769460U;

	t94 = ((x413%x414)-(x415&x416));

	if (t94 != 903485U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x417 = INT16_MIN;
	int64_t x418 = -1LL;
	uint64_t x419 = 3LLU;
	int32_t x420 = -439076544;
	volatile uint64_t t95 = 27614026148600LLU;

	t95 = ((x417%x418)-(x419&x420));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x421 = INT32_MAX;
	int16_t x422 = INT16_MIN;
	static int8_t x423 = INT8_MIN;
	int32_t x424 = -1;
	int32_t t96 = -749192;

	t96 = ((x421%x422)-(x423&x424));

	if (t96 != 32895) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x425 = UINT32_MAX;
	int64_t x426 = INT64_MIN;
	static int64_t x427 = 2074451312512LL;
	volatile int16_t x428 = INT16_MIN;
	int64_t t97 = 438327639LL;

	t97 = ((x425%x426)-(x427&x428));

	if (t97 != -2070156312577LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x429 = UINT64_MAX;
	uint8_t x431 = UINT8_MAX;
	uint64_t x432 = 3721185163501LLU;
	uint64_t t98 = 132732509115591LLU;

	t98 = ((x429%x430)-(x431&x432));

	if (t98 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x437 = 79U;
	uint16_t x438 = UINT16_MAX;
	volatile uint16_t x439 = 13U;
	volatile int32_t t99 = -1;

	t99 = ((x437%x438)-(x439&x440));

	if (t99 != 79) { NG(); } else { ; }
	
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

