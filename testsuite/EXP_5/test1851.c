#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
volatile int8_t x5 = 0;
volatile int64_t t1 = -24LL;
int16_t x9 = INT16_MIN;
static volatile uint32_t x17 = 884557996U;
int8_t x22 = -7;
int32_t x29 = INT32_MAX;
int32_t x31 = INT32_MAX;
uint64_t t8 = 5683278229LLU;
int8_t x37 = 3;
volatile uint8_t x42 = 37U;
int32_t x52 = -1;
uint32_t t12 = 470784657U;
static int16_t x60 = INT16_MIN;
volatile int32_t t14 = 68;
volatile int8_t x64 = -28;
int64_t x66 = INT64_MIN;
uint64_t x79 = 853291LLU;
int8_t x86 = 59;
int8_t x87 = INT8_MIN;
int32_t x89 = -1;
uint64_t x92 = 3958849992LLU;
uint16_t x110 = 40U;
static volatile uint16_t x120 = UINT16_MAX;
int64_t x122 = -13287805280512LL;
uint16_t x150 = UINT16_MAX;
int64_t x154 = INT64_MIN;
uint32_t x156 = UINT32_MAX;
int64_t t38 = -260647940LL;
static volatile uint8_t x159 = 67U;
volatile int8_t x162 = -56;
static int8_t x164 = INT8_MIN;
int16_t x167 = INT16_MIN;
static int64_t x168 = -1LL;
volatile int64_t x170 = -13583329312381LL;
int8_t x172 = 1;
int16_t x179 = INT16_MIN;
int64_t x190 = INT64_MIN;
uint8_t x191 = UINT8_MAX;
volatile int64_t x193 = INT64_MAX;
static int8_t x198 = INT8_MAX;
uint16_t x199 = 63U;
static uint16_t x210 = UINT16_MAX;
uint8_t x219 = 13U;
volatile int64_t x221 = INT64_MAX;
volatile int64_t t55 = -699663879641LL;
int8_t x228 = -13;
static int8_t x237 = INT8_MIN;
static int64_t x239 = INT64_MIN;
volatile int64_t t60 = 3280666LL;
int64_t x246 = INT64_MIN;
int8_t x248 = -1;
int8_t x255 = INT8_MAX;
uint64_t t65 = 575870421999LLU;
uint8_t x271 = 0U;
static volatile int16_t x275 = -1;
static uint8_t x282 = 0U;
static volatile uint64_t x285 = 3589533LLU;
int32_t x291 = -6;
uint8_t x296 = 23U;
int8_t x300 = -46;
int64_t x304 = 49669425282LL;
uint64_t x311 = 5487764672567LLU;
int32_t x314 = -227;
volatile uint64_t x316 = UINT64_MAX;
int8_t x321 = INT8_MIN;
int32_t x326 = INT32_MAX;
int32_t x330 = INT32_MAX;
uint64_t t83 = 16759469434612LLU;
static uint16_t x339 = UINT16_MAX;
volatile int32_t t84 = 1909;
int64_t x349 = INT64_MIN;
uint32_t x352 = 1417085U;
int32_t x358 = 28805;
int64_t x361 = 38LL;
volatile int64_t t89 = -9LL;
uint32_t x372 = UINT32_MAX;
volatile int64_t t91 = 2727800LL;
int32_t x374 = -1;
static int8_t x378 = INT8_MAX;
volatile uint16_t x383 = 1U;
int16_t x389 = INT16_MIN;
uint64_t x394 = 94776LLU;
uint64_t t97 = 8659582LLU;
int16_t x397 = INT16_MAX;
uint64_t t98 = 1938218663944735LLU;
volatile int32_t x404 = -2447;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int32_t x2 = -1;
	static int16_t x4 = 658;
	static uint64_t t0 = 0LLU;

	t0 = (x1%((x2&x3)^x4));

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	volatile uint16_t x7 = 28U;
	int64_t x8 = INT64_MIN;

	t1 = (x5%((x6&x7)^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 1727LLU;
	int16_t x11 = INT16_MIN;
	int16_t x12 = 12;
	volatile uint64_t t2 = 15LLU;

	t2 = (x9%((x10&x11)^x12));

	if (t2 != 8LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 0U;
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = INT8_MIN;
	int32_t x16 = -497615;
	static volatile int32_t t3 = 322519253;

	t3 = (x13%((x14&x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = UINT8_MAX;
	int64_t x19 = INT64_MAX;
	volatile int16_t x20 = INT16_MAX;
	volatile int64_t t4 = 85231234228LL;

	t4 = (x17%((x18&x19)^x20));

	if (t4 != 4012LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 63011762LLU;
	static volatile int32_t x23 = INT32_MIN;
	uint16_t x24 = 5221U;
	static volatile uint64_t t5 = 17691295120115602LLU;

	t5 = (x21%((x22&x23)^x24));

	if (t5 != 63011762LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MAX;
	int64_t t6 = 3LL;

	t6 = (x25%((x26&x27)^x28));

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 249674LLU;
	int64_t x32 = 96881481LL;
	volatile uint64_t t7 = 825567731781LLU;

	t7 = (x29%((x30&x31)^x32));

	if (t7 != 17213373LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int8_t x34 = 15;
	static int32_t x35 = 1149306;
	uint64_t x36 = 119791553LLU;

	t8 = (x33%((x34&x35)^x36));

	if (t8 != 102262590LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MIN;
	static int8_t x39 = -1;
	volatile uint8_t x40 = 1U;
	static volatile int32_t t9 = -10;

	t9 = (x37%((x38&x39)^x40));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = 1LL;
	volatile int8_t x43 = INT8_MAX;
	volatile int16_t x44 = INT16_MAX;
	int64_t t10 = -4763LL;

	t10 = (x41%((x42&x43)^x44));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint64_t x46 = UINT64_MAX;
	static int64_t x47 = INT64_MIN;
	volatile int8_t x48 = INT8_MIN;
	static volatile uint64_t t11 = 21LLU;

	t11 = (x45%((x46&x47)^x48));

	if (t11 != 9223372036854743168LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -47971;
	volatile uint32_t x50 = 107U;
	uint8_t x51 = 5U;

	t12 = (x49%((x50&x51)^x52));

	if (t12 != 4294919325U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 24;
	int8_t x54 = INT8_MAX;
	int64_t x55 = -1LL;
	int16_t x56 = 1;
	volatile int64_t t13 = -1065454429147615198LL;

	t13 = (x53%((x54&x55)^x56));

	if (t13 != 24LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 0;
	int32_t x58 = INT32_MIN;
	volatile int16_t x59 = INT16_MAX;

	t14 = (x57%((x58&x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 22;
	volatile int64_t x62 = INT64_MIN;
	int8_t x63 = INT8_MAX;
	int64_t t15 = -46449039LL;

	t15 = (x61%((x62&x63)^x64));

	if (t15 != 22LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	static uint8_t x67 = 0U;
	static int8_t x68 = 6;
	volatile int64_t t16 = -97258LL;

	t16 = (x65%((x66&x67)^x68));

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 63U;
	int64_t x70 = INT64_MIN;
	uint32_t x71 = 3U;
	int16_t x72 = -468;
	int64_t t17 = 1744328154544LL;

	t17 = (x69%((x70&x71)^x72));

	if (t17 != 63LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	int16_t x74 = INT16_MIN;
	static uint16_t x75 = 12753U;
	uint16_t x76 = UINT16_MAX;
	int64_t t18 = 105832358697LL;

	t18 = (x73%((x74&x75)^x76));

	if (t18 != 32767LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = -6837;
	static volatile int16_t x80 = -5;
	volatile uint64_t t19 = 203880332426003LLU;

	t19 = (x77%((x78&x79)^x80));

	if (t19 != 853136LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -1LL;
	int8_t x82 = INT8_MIN;
	int32_t x83 = INT32_MIN;
	uint32_t x84 = UINT32_MAX;
	volatile int64_t t20 = -588377524245213LL;

	t20 = (x81%((x82&x83)^x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = 14187864;
	static int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 1;

	t21 = (x85%((x86&x87)^x88));

	if (t21 != 32088) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x90 = -14;
	static int32_t x91 = -154444736;
	static uint64_t t22 = 4027247366LLU;

	t22 = (x89%((x90&x91)^x92));

	if (t22 != 3804488311LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -4953;
	static int8_t x94 = -1;
	volatile int8_t x95 = INT8_MIN;
	int16_t x96 = 102;
	int32_t t23 = 7;

	t23 = (x93%((x94&x95)^x96));

	if (t23 != -13) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -7137;
	uint32_t x98 = UINT32_MAX;
	static uint8_t x99 = UINT8_MAX;
	volatile int64_t x100 = -4LL;
	int64_t t24 = 25869784008LL;

	t24 = (x97%((x98&x99)^x100));

	if (t24 != -53LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 1343905;
	int16_t x102 = INT16_MIN;
	int64_t x103 = -4079813337127441684LL;
	static int16_t x104 = -2;
	int64_t t25 = -39155LL;

	t25 = (x101%((x102&x103)^x104));

	if (t25 != 1343905LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 324774U;
	static uint64_t x106 = UINT64_MAX;
	static volatile uint32_t x107 = 49913U;
	uint8_t x108 = UINT8_MAX;
	static uint64_t t26 = 820LLU;

	t26 = (x105%((x106&x107)^x108));

	if (t26 != 26754LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	int64_t x111 = INT64_MIN;
	volatile int64_t x112 = INT64_MAX;
	volatile int64_t t27 = -15325510699LL;

	t27 = (x109%((x110&x111)^x112));

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = 111584113629591LL;
	int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MAX;
	volatile int64_t x116 = INT64_MIN;
	static volatile int64_t t28 = -49301615LL;

	t28 = (x113%((x114&x115)^x116));

	if (t28 != 111584113629591LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	int64_t x118 = -1LL;
	uint64_t x119 = 3278LLU;
	uint64_t t29 = 21LLU;

	t29 = (x117%((x118&x119)^x120));

	if (t29 != 57423LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 0;
	volatile int16_t x123 = INT16_MAX;
	volatile int64_t x124 = -1LL;
	static volatile int64_t t30 = 57577LL;

	t30 = (x121%((x122&x123)^x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MAX;
	int8_t x126 = 1;
	int32_t x127 = -1;
	uint64_t x128 = 7063LLU;
	uint64_t t31 = 2LLU;

	t31 = (x125%((x126&x127)^x128));

	if (t31 != 127LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	volatile int16_t x130 = -1;
	volatile uint32_t x131 = 54U;
	static int32_t x132 = 59;
	uint32_t t32 = 318U;

	t32 = (x129%((x130&x131)^x132));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 31407583633202LLU;
	volatile int8_t x134 = -1;
	static volatile int64_t x135 = INT64_MIN;
	int8_t x136 = 1;
	uint64_t t33 = 96748LLU;

	t33 = (x133%((x134&x135)^x136));

	if (t33 != 31407583633202LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	uint64_t x138 = 2144488LLU;
	int16_t x139 = 213;
	static int32_t x140 = -1;
	volatile uint64_t t34 = 410889847LLU;

	t34 = (x137%((x138&x139)^x140));

	if (t34 != 4294967295LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 661LLU;
	int8_t x142 = INT8_MIN;
	uint16_t x143 = 192U;
	int32_t x144 = -3024475;
	uint64_t t35 = 537809317540077435LLU;

	t35 = (x141%((x142&x143)^x144));

	if (t35 != 661LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x145 = -1LL;
	volatile uint16_t x146 = UINT16_MAX;
	int64_t x147 = -1LL;
	uint16_t x148 = 20712U;
	static int64_t t36 = 44832466LL;

	t36 = (x145%((x146&x147)^x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	static int32_t x151 = -7490;
	static uint64_t x152 = UINT64_MAX;
	static volatile uint64_t t37 = 50226918LLU;

	t37 = (x149%((x150&x151)^x152));

	if (t37 != 255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -44;
	uint32_t x155 = 108679947U;

	t38 = (x153%((x154&x155)^x156));

	if (t38 != -44LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 163LLU;
	static int64_t x158 = -34LL;
	static uint8_t x160 = UINT8_MAX;
	volatile uint64_t t39 = 2619863265552395064LLU;

	t39 = (x157%((x158&x159)^x160));

	if (t39 != 163LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 1U;
	int32_t x163 = -2039;
	int32_t t40 = -130667700;

	t40 = (x161%((x162&x163)^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -42;
	volatile int32_t x166 = INT32_MIN;
	volatile int64_t t41 = -2117236453847LL;

	t41 = (x165%((x166&x167)^x168));

	if (t41 != -42LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = 305286247860607567LL;
	static volatile int16_t x171 = 4;
	static int64_t t42 = 24426611LL;

	t42 = (x169%((x170&x171)^x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	volatile uint32_t x174 = 1069464685U;
	int64_t x175 = -1LL;
	static int32_t x176 = INT32_MIN;
	volatile int64_t t43 = -72972624174716LL;

	t43 = (x173%((x174&x175)^x176));

	if (t43 != 255LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 1;
	int32_t x178 = 64208;
	static int8_t x180 = 1;
	volatile int32_t t44 = -21226232;

	t44 = (x177%((x178&x179)^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MAX;
	int8_t x183 = INT8_MAX;
	uint64_t x184 = 18945548994LLU;
	static volatile uint64_t t45 = 517628218272024257LLU;

	t45 = (x181%((x182&x183)^x184));

	if (t45 != 13613312184LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	int64_t x186 = 6467960293LL;
	static int8_t x187 = INT8_MIN;
	uint32_t x188 = 182836U;
	int64_t t46 = 3643LL;

	t46 = (x185%((x186&x187)^x188));

	if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 3155046LL;
	uint64_t x192 = 90LLU;
	volatile uint64_t t47 = 2035022LLU;

	t47 = (x189%((x190&x191)^x192));

	if (t47 != 6LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x194 = -1;
	static volatile int16_t x195 = INT16_MIN;
	uint8_t x196 = UINT8_MAX;
	volatile int64_t t48 = -2052381720559834LL;

	t48 = (x193%((x194&x195)^x196));

	if (t48 != 7LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	uint32_t x200 = UINT32_MAX;
	uint32_t t49 = 3U;

	t49 = (x197%((x198&x199)^x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	static int32_t x202 = -58271;
	uint8_t x203 = 53U;
	int8_t x204 = -1;
	volatile int32_t t50 = -196;

	t50 = (x201%((x202&x203)^x204));

	if (t50 != 25) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	uint32_t x206 = 1878394256U;
	int16_t x207 = INT16_MAX;
	static uint8_t x208 = 19U;
	uint32_t t51 = 4U;

	t51 = (x205%((x206&x207)^x208));

	if (t51 != 408U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	volatile int64_t x211 = INT64_MIN;
	int8_t x212 = -1;
	volatile uint64_t t52 = 2206650677080847LLU;

	t52 = (x209%((x210&x211)^x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -19;
	static int16_t x214 = -194;
	uint8_t x215 = 20U;
	volatile int8_t x216 = INT8_MIN;
	int32_t t53 = 167;

	t53 = (x213%((x214&x215)^x216));

	if (t53 != -19) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 2682076LLU;
	static int8_t x218 = INT8_MAX;
	volatile uint32_t x220 = 1557U;
	volatile uint64_t t54 = 1696222459494LLU;

	t54 = (x217%((x218&x219)^x220));

	if (t54 != 436LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MIN;
	int16_t x223 = 119;
	int64_t x224 = 112LL;

	t55 = (x221%((x222&x223)^x224));

	if (t55 != 63LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MAX;
	volatile int32_t t56 = 43170048;

	t56 = (x225%((x226&x227)^x228));

	if (t56 != 10) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 1U;
	static int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MIN;
	int8_t x232 = -1;
	volatile int32_t t57 = -636211450;

	t57 = (x229%((x230&x231)^x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	int8_t x234 = INT8_MIN;
	volatile uint32_t x235 = UINT32_MAX;
	static int64_t x236 = -1LL;
	volatile int64_t t58 = 46059337LL;

	t58 = (x233%((x234&x235)^x236));

	if (t58 != 65535LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	static uint32_t x240 = 13100029U;
	volatile int64_t t59 = 15553661493680LL;

	t59 = (x237%((x238&x239)^x240));

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 9136514LL;
	static int16_t x242 = INT16_MAX;
	int8_t x243 = -1;
	static int32_t x244 = INT32_MIN;

	t60 = (x241%((x242&x243)^x244));

	if (t60 != 9136514LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int64_t x247 = -1LL;
	static volatile int64_t t61 = 3175686080371331LL;

	t61 = (x245%((x246&x247)^x248));

	if (t61 != -32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 32U;
	int32_t x250 = -507473;
	uint16_t x251 = UINT16_MAX;
	volatile int64_t x252 = INT64_MAX;
	int64_t t62 = -17047767417888LL;

	t62 = (x249%((x250&x251)^x252));

	if (t62 != 32LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	uint64_t x254 = 1041008736870LLU;
	uint16_t x256 = 378U;
	volatile uint64_t t63 = 24173136805LLU;

	t63 = (x253%((x254&x255)^x256));

	if (t63 != 151LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 533493962624LLU;
	volatile uint64_t x258 = 3307842LLU;
	static volatile int16_t x259 = 1;
	static int32_t x260 = -7;
	volatile uint64_t t64 = 754583274LLU;

	t64 = (x257%((x258&x259)^x260));

	if (t64 != 533493962624LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 20802LLU;
	volatile uint32_t x262 = 53306778U;
	int8_t x263 = INT8_MIN;
	int32_t x264 = -336;

	t65 = (x261%((x262&x263)^x264));

	if (t65 != 20802LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 4056240843LLU;
	static int32_t x266 = INT32_MIN;
	uint16_t x267 = UINT16_MAX;
	int64_t x268 = INT64_MAX;
	uint64_t t66 = 1314716LLU;

	t66 = (x265%((x266&x267)^x268));

	if (t66 != 4056240843LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MIN;
	int32_t x270 = INT32_MAX;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = -1;

	t67 = (x269%((x270&x271)^x272));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 1;
	uint8_t x274 = UINT8_MAX;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t68 = -665565239LL;

	t68 = (x273%((x274&x275)^x276));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	int16_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	int16_t x280 = 6;
	int64_t t69 = -32990323629672LL;

	t69 = (x277%((x278&x279)^x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 1014579U;
	uint32_t x283 = 9645U;
	static uint8_t x284 = 38U;
	static volatile uint32_t t70 = 6297U;

	t70 = (x281%((x282&x283)^x284));

	if (t70 != 17U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = 41U;
	volatile int32_t x287 = 416061989;
	volatile int8_t x288 = -1;
	volatile uint64_t t71 = 66694719LLU;

	t71 = (x285%((x286&x287)^x288));

	if (t71 != 3589533LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	uint16_t x292 = 11U;
	static volatile int32_t t72 = -4451;

	t72 = (x289%((x290&x291)^x292));

	if (t72 != 10) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	int32_t x294 = INT32_MIN;
	int32_t x295 = 12;
	int32_t t73 = 0;

	t73 = (x293%((x294&x295)^x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MAX;
	static volatile uint8_t x298 = UINT8_MAX;
	int32_t x299 = INT32_MAX;
	int64_t t74 = 5154372531867LL;

	t74 = (x297%((x298&x299)^x300));

	if (t74 != 139LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 45557U;
	static uint16_t x302 = UINT16_MAX;
	int32_t x303 = -1;
	static int64_t t75 = -327322827954147LL;

	t75 = (x301%((x302&x303)^x304));

	if (t75 != 45557LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MIN;
	static int64_t x306 = 29LL;
	int16_t x307 = INT16_MAX;
	int8_t x308 = -29;
	volatile int64_t t76 = -182775624022804LL;

	t76 = (x305%((x306&x307)^x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = 538341000LL;
	int16_t x310 = -1;
	uint32_t x312 = UINT32_MAX;
	uint64_t t77 = 230761LLU;

	t77 = (x309%((x310&x311)^x312));

	if (t77 != 538341000LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MIN;
	static int16_t x315 = -1;
	static volatile uint64_t t78 = 1637LLU;

	t78 = (x313%((x314&x315)^x316));

	if (t78 != 32LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 0U;
	int64_t x318 = -1LL;
	int32_t x319 = 1806;
	int16_t x320 = -816;
	static int64_t t79 = -677164968034LL;

	t79 = (x317%((x318&x319)^x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = INT64_MIN;
	int32_t x323 = -1;
	int64_t x324 = -407526938798LL;
	int64_t t80 = -32628703LL;

	t80 = (x321%((x322&x323)^x324));

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -395070648LL;
	static volatile int16_t x327 = 4086;
	int8_t x328 = 20;
	static volatile int64_t t81 = -3186823LL;

	t81 = (x325%((x326&x327)^x328));

	if (t81 != -1824LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	static volatile int32_t x331 = INT32_MAX;
	int64_t x332 = INT64_MAX;
	int64_t t82 = -106407054952LL;

	t82 = (x329%((x330&x331)^x332));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	volatile uint32_t x334 = 16284941U;
	uint64_t x335 = 40364124902LLU;
	int64_t x336 = INT64_MAX;

	t83 = (x333%((x334&x335)^x336));

	if (t83 != 29380490LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 37U;
	int16_t x338 = INT16_MAX;
	static uint8_t x340 = UINT8_MAX;

	t84 = (x337%((x338&x339)^x340));

	if (t84 != 37) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	volatile uint16_t x342 = UINT16_MAX;
	static volatile int16_t x343 = -1;
	volatile int32_t x344 = INT32_MIN;
	int32_t t85 = -2818;

	t85 = (x341%((x342&x343)^x344));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x350 = INT64_MIN;
	int8_t x351 = -10;
	int64_t t86 = 466LL;

	t86 = (x349%((x350&x351)^x352));

	if (t86 != -1417085LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = 416830786;
	int16_t x354 = INT16_MIN;
	volatile int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MIN;
	volatile int64_t t87 = 14912016113948LL;

	t87 = (x353%((x354&x355)^x356));

	if (t87 != 416830786LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x357 = INT16_MIN;
	uint16_t x359 = UINT16_MAX;
	static int8_t x360 = 6;
	volatile int32_t t88 = -3445;

	t88 = (x357%((x358&x359)^x360));

	if (t88 != -3965) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x362 = INT16_MAX;
	int32_t x363 = INT32_MIN;
	volatile uint32_t x364 = 961620U;

	t89 = (x361%((x362&x363)^x364));

	if (t89 != 38LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x365 = INT16_MIN;
	static int16_t x366 = INT16_MAX;
	int64_t x367 = INT64_MIN;
	uint64_t x368 = 29827LLU;
	volatile uint64_t t90 = 107154LLU;

	t90 = (x365%((x366&x367)^x368));

	if (t90 != 7120LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = -1LL;
	int64_t x370 = -94515131361LL;
	int64_t x371 = INT64_MIN;

	t91 = (x369%((x370&x371)^x372));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x373 = 115U;
	volatile uint64_t x375 = 2096641277566465636LLU;
	int8_t x376 = INT8_MAX;
	static uint64_t t92 = 358585306462839601LLU;

	t92 = (x373%((x374&x375)^x376));

	if (t92 != 115LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x377 = INT64_MIN;
	uint16_t x379 = 344U;
	int16_t x380 = -1;
	volatile int64_t t93 = 451297329552637727LL;

	t93 = (x377%((x378&x379)^x380));

	if (t93 != -78LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x381 = INT32_MAX;
	static int64_t x382 = INT64_MIN;
	int8_t x384 = INT8_MIN;
	volatile int64_t t94 = -497760490284864907LL;

	t94 = (x381%((x382&x383)^x384));

	if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = INT8_MIN;
	static int32_t x386 = INT32_MAX;
	uint16_t x387 = 118U;
	int16_t x388 = INT16_MAX;
	int32_t t95 = 8;

	t95 = (x385%((x386&x387)^x388));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x390 = -11021809;
	int32_t x391 = INT32_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t96 = 3378;

	t96 = (x389%((x390&x391)^x392));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = -1LL;
	int32_t x395 = 1888200;
	uint64_t x396 = 2027LLU;

	t97 = (x393%((x394&x395)^x396));

	if (t97 != 8677LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x398 = 22U;
	int32_t x399 = -97874;
	uint64_t x400 = UINT64_MAX;

	t98 = (x397%((x398&x399)^x400));

	if (t98 != 32767LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x401 = 3U;
	int16_t x402 = -1;
	uint32_t x403 = 406008819U;
	uint32_t t99 = 0U;

	t99 = (x401%((x402&x403)^x404));

	if (t99 != 3U) { NG(); } else { ; }
	
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

