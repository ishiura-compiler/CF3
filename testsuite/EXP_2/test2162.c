#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int32_t x6 = INT32_MIN;
volatile int16_t x9 = INT16_MAX;
uint64_t t2 = 566159555574024645LLU;
static volatile uint32_t x16 = 28U;
volatile uint64_t t3 = 1302841841320LLU;
int16_t x17 = INT16_MAX;
volatile int32_t t4 = 435;
uint64_t x21 = UINT64_MAX;
int64_t x25 = INT64_MAX;
volatile int64_t x28 = -28LL;
int64_t x31 = INT64_MAX;
int16_t x34 = 0;
int64_t x39 = -31046526627682LL;
static volatile int64_t t9 = 1LL;
volatile uint64_t t10 = 394558822299LLU;
int32_t x53 = 150890786;
uint32_t x55 = 803U;
volatile int64_t t13 = 68078381571LL;
int16_t x59 = -41;
uint8_t x61 = 13U;
int16_t x67 = -1;
static uint32_t x79 = 94U;
volatile int16_t x81 = 238;
volatile int8_t x86 = INT8_MAX;
int8_t x88 = INT8_MAX;
int32_t x91 = INT32_MIN;
volatile uint64_t x93 = UINT64_MAX;
static int16_t x98 = 0;
volatile uint64_t t24 = 20663357LLU;
static uint8_t x109 = UINT8_MAX;
volatile uint64_t t27 = 7LLU;
int16_t x115 = -187;
volatile uint16_t x116 = 1U;
static volatile uint16_t x117 = UINT16_MAX;
uint32_t x119 = UINT32_MAX;
int32_t x123 = INT32_MAX;
int64_t t30 = -288514632LL;
uint32_t x125 = 1U;
int32_t x129 = INT32_MIN;
volatile int64_t t32 = 12774913LL;
int64_t x133 = -12957375809497320LL;
volatile int16_t x135 = 25;
static uint32_t x136 = 20654U;
static volatile int64_t t33 = -41016LL;
volatile int64_t t35 = -980757811580077667LL;
int8_t x145 = -14;
int64_t x148 = 139LL;
int32_t x163 = 1945;
uint16_t x164 = 11U;
volatile int32_t x167 = -1;
volatile uint64_t t41 = 2093696575261126LLU;
volatile int8_t x169 = INT8_MIN;
int8_t x176 = -1;
int64_t x177 = INT64_MIN;
uint16_t x181 = UINT16_MAX;
volatile uint8_t x182 = UINT8_MAX;
volatile int64_t t46 = -23683207618LL;
volatile int64_t t48 = 411LL;
int32_t x200 = INT32_MIN;
static volatile uint8_t x206 = UINT8_MAX;
int64_t x222 = INT64_MAX;
uint64_t t54 = 104LLU;
volatile int32_t t55 = 39331;
int16_t x232 = -1254;
int64_t t56 = -2150593087749LL;
uint32_t x236 = UINT32_MAX;
static volatile uint32_t t57 = 3890301U;
uint8_t x238 = 1U;
int32_t x246 = -94460;
uint64_t x247 = 19859725532LLU;
volatile uint64_t t60 = 31LLU;
int32_t x258 = -1;
int16_t x259 = INT16_MIN;
static volatile int64_t t63 = 15443583048067331LL;
int64_t x261 = INT64_MAX;
uint8_t x264 = UINT8_MAX;
volatile int64_t t64 = -373846LL;
int32_t t65 = -13032814;
volatile uint64_t t66 = 16699LLU;
int8_t x274 = INT8_MAX;
volatile int64_t x278 = INT64_MIN;
volatile int64_t x284 = 32294LL;
uint64_t t70 = 1LLU;
volatile int16_t x293 = INT16_MIN;
volatile int8_t x300 = 3;
uint64_t x304 = UINT64_MAX;
volatile uint64_t t74 = 111806459719201LLU;
int16_t x305 = -1;
int64_t x318 = 39282835186661LL;
volatile uint64_t x324 = UINT64_MAX;
int64_t x326 = -1LL;
int64_t x327 = -302LL;
int16_t x335 = -46;
int8_t x336 = INT8_MIN;
uint64_t t81 = 2047928435860LLU;
volatile uint32_t x337 = 1403542201U;
static volatile uint32_t t82 = 74478U;
volatile uint8_t x342 = UINT8_MAX;
volatile int64_t x343 = INT64_MIN;
uint16_t x344 = 5160U;
uint64_t x345 = 67739023699LLU;
static int8_t x349 = 36;
int8_t x359 = -1;
int8_t x363 = INT8_MIN;
static int16_t x371 = INT16_MIN;
uint32_t t89 = 1U;
uint32_t x374 = 5190U;
volatile uint64_t t91 = 86LLU;
int64_t x381 = INT64_MAX;
static uint8_t x384 = 1U;
static volatile int64_t t92 = 389229771LL;
int16_t x386 = INT16_MIN;
volatile int16_t x387 = INT16_MAX;
int64_t t93 = -14738313865598LL;
int32_t x390 = INT32_MIN;
volatile int64_t t94 = 292LL;
int64_t x393 = INT64_MIN;
int64_t x396 = 42402479005351LL;
volatile int64_t t95 = -4471LL;
uint16_t x399 = 8065U;
uint32_t x406 = 13553045U;
volatile int32_t x408 = INT32_MIN;
int32_t x412 = -660488;


void f0(void) {
	int64_t x1 = -1LL;
	int64_t x3 = 1235126931LL;
	static int64_t x4 = 10LL;
	static volatile int64_t t0 = 0LL;

	t0 = ((x1&(x2^x3))/x4);

	if (t0 != -123515428LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 46U;
	static int16_t x7 = INT16_MIN;
	int32_t x8 = -3557;
	int32_t t1 = 11;

	t1 = ((x5&(x6^x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 457371478LLU;
	int64_t x11 = -10919656552000LL;
	uint16_t x12 = 883U;

	t2 = ((x9&(x10^x11))/x12);

	if (t2 != 29LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint64_t x14 = 41LLU;
	static int64_t x15 = -1LL;

	t3 = ((x13&(x14^x15))/x16);

	if (t3 != 658812288346769699LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = 3;
	int8_t x19 = 2;
	int8_t x20 = -1;

	t4 = ((x17&(x18^x19))/x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -8;
	int8_t x23 = INT8_MIN;
	static uint16_t x24 = 14U;
	static uint64_t t5 = 1041188922443LLU;

	t5 = ((x21&(x22^x23))/x24);

	if (t5 != 8LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	int64_t x27 = -210624779470408290LL;
	volatile int64_t t6 = -963702782LL;

	t6 = ((x25&(x26^x27))/x28);

	if (t6 != -321883830766147386LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	static volatile int16_t x30 = -7081;
	int16_t x32 = INT16_MIN;
	volatile int64_t t7 = 1719603LL;

	t7 = ((x29&(x30^x31))/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	int16_t x35 = -292;
	int64_t x36 = INT64_MIN;
	int64_t t8 = -189197247103641LL;

	t8 = ((x33&(x34^x35))/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 1;
	uint16_t x38 = 873U;
	int64_t x40 = -1LL;

	t9 = ((x37&(x38^x39))/x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	uint64_t x42 = 7LLU;
	int16_t x43 = 0;
	volatile int64_t x44 = INT64_MIN;

	t10 = ((x41&(x42^x43))/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -4420402218702128LL;
	uint64_t x46 = 152253915299942LLU;
	int16_t x47 = INT16_MAX;
	volatile int64_t x48 = INT64_MAX;
	uint64_t t11 = 411161396471LLU;

	t11 = ((x45&(x46^x47))/x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint32_t x50 = 545461U;
	int8_t x51 = INT8_MAX;
	int8_t x52 = -1;
	int64_t t12 = -2LL;

	t12 = ((x49&(x50^x51))/x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MAX;
	int64_t x56 = -218860345525173LL;

	t13 = ((x53&(x54^x55))/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	uint8_t x58 = 7U;
	int32_t x60 = -165891236;
	static int32_t t14 = -3295;

	t14 = ((x57&(x58^x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = INT16_MAX;
	volatile int8_t x63 = -1;
	uint64_t x64 = 17246156463887LLU;
	uint64_t t15 = 1LLU;

	t15 = ((x61&(x62^x63))/x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	uint16_t x68 = 2090U;
	volatile int64_t t16 = 11614890163800LL;

	t16 = ((x65&(x66^x67))/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	uint32_t x71 = 9676265U;
	volatile uint16_t x72 = 46U;
	volatile uint32_t t17 = 1021200U;

	t17 = ((x69&(x70^x71))/x72);

	if (t17 != 93158208U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint16_t x74 = UINT16_MAX;
	int16_t x75 = INT16_MIN;
	int16_t x76 = INT16_MAX;
	int32_t t18 = -304423082;

	t18 = ((x73&(x74^x75))/x76);

	if (t18 != -65538) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static uint64_t x78 = UINT64_MAX;
	int32_t x80 = INT32_MIN;
	volatile uint64_t t19 = 65468LLU;

	t19 = ((x77&(x78^x79))/x80);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = UINT64_MAX;
	uint16_t x83 = 1U;
	static int16_t x84 = 190;
	uint64_t t20 = 13LLU;

	t20 = ((x81&(x82^x83))/x84);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 7383U;
	static int16_t x87 = INT16_MAX;
	volatile int32_t t21 = -10;

	t21 = ((x85&(x86^x87))/x88);

	if (t21 != 57) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	volatile int32_t x90 = INT32_MIN;
	int64_t x92 = 1151375LL;
	volatile int64_t t22 = -335010029LL;

	t22 = ((x89&(x90^x91))/x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = 44U;
	uint64_t x95 = 17LLU;
	uint64_t x96 = UINT64_MAX;
	static uint64_t t23 = 2052086290496646871LLU;

	t23 = ((x93&(x94^x95))/x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	volatile uint64_t x100 = 210039439040LLU;

	t24 = ((x97&(x98^x99))/x100);

	if (t24 != 43912572LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 1U;
	int32_t x102 = INT32_MAX;
	int64_t x103 = INT64_MIN;
	static int16_t x104 = -1;
	static int64_t t25 = -1503587236207728009LL;

	t25 = ((x101&(x102^x103))/x104);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = -1;
	volatile uint8_t x107 = 62U;
	int64_t x108 = 850391585403214513LL;
	int64_t t26 = 69244806924LL;

	t26 = ((x105&(x106^x107))/x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x110 = UINT8_MAX;
	uint64_t x111 = UINT64_MAX;
	uint8_t x112 = UINT8_MAX;

	t27 = ((x109&(x110^x111))/x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	int32_t x114 = INT32_MIN;
	static volatile int32_t t28 = 587956;

	t28 = ((x113&(x114^x115))/x116);

	if (t28 != 2147483461) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = 57U;
	int32_t x120 = INT32_MIN;
	volatile uint32_t t29 = 1221977721U;

	t29 = ((x117&(x118^x119))/x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -2651;
	volatile int64_t x122 = -917LL;
	int16_t x124 = INT16_MIN;

	t30 = ((x121&(x122^x123))/x124);

	if (t30 != 65535LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = UINT64_MAX;
	uint8_t x127 = UINT8_MAX;
	static int32_t x128 = INT32_MAX;
	uint64_t t31 = 122334LLU;

	t31 = ((x125&(x126^x127))/x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = INT16_MAX;
	static int64_t x131 = INT64_MIN;
	int32_t x132 = -24152;

	t32 = ((x129&(x130^x131))/x132);

	if (t32 != 381888540777359LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x134 = INT16_MIN;

	t33 = ((x133&(x134^x135))/x136);

	if (t33 != -627354304711LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x137 = 2;
	volatile int64_t x138 = -1LL;
	volatile uint8_t x139 = UINT8_MAX;
	volatile int8_t x140 = INT8_MAX;
	static int64_t t34 = -1LL;

	t34 = ((x137&(x138^x139))/x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 16U;
	int64_t x142 = INT64_MIN;
	volatile int16_t x143 = INT16_MAX;
	volatile int16_t x144 = INT16_MIN;

	t35 = ((x141&(x142^x143))/x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = 0U;
	int8_t x147 = INT8_MAX;
	static volatile int64_t t36 = 1016606810715942702LL;

	t36 = ((x145&(x146^x147))/x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int32_t x150 = INT32_MAX;
	static int8_t x151 = INT8_MIN;
	uint32_t x152 = 12834U;
	volatile uint32_t t37 = 5190U;

	t37 = ((x149&(x150^x151))/x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = UINT64_MAX;
	int16_t x154 = INT16_MAX;
	int16_t x155 = 2;
	int32_t x156 = 10;
	volatile uint64_t t38 = 603LLU;

	t38 = ((x153&(x154^x155))/x156);

	if (t38 != 3276LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	uint64_t x158 = 8451019858780513LLU;
	uint32_t x159 = UINT32_MAX;
	volatile uint32_t x160 = 13U;
	uint64_t t39 = 271341517749LLU;

	t39 = ((x157&(x158^x159))/x160);

	if (t39 != 650078521211010LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 524119840U;
	volatile uint16_t x162 = UINT16_MAX;
	uint32_t t40 = 70U;

	t40 = ((x161&(x162^x163))/x164);

	if (t40 != 2423U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	uint64_t x166 = 69875LLU;
	int8_t x168 = -1;

	t41 = ((x165&(x166^x167))/x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = 1;
	uint8_t x171 = UINT8_MAX;
	int32_t x172 = INT32_MIN;
	int32_t t42 = 5;

	t42 = ((x169&(x170^x171))/x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = 476141U;
	int32_t x174 = -1;
	uint16_t x175 = 2172U;
	uint32_t t43 = 7U;

	t43 = ((x173&(x174^x175))/x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MAX;
	int32_t x179 = 29242;
	int64_t x180 = -1LL;
	volatile int64_t t44 = 45928833LL;

	t44 = ((x177&(x178^x179))/x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x183 = 2LLU;
	static int64_t x184 = 30104240364111868LL;
	volatile uint64_t t45 = 6640234246685LLU;

	t45 = ((x181&(x182^x183))/x184);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile uint8_t x186 = 0U;
	int64_t x187 = INT64_MAX;
	uint16_t x188 = 4700U;

	t46 = ((x185&(x186^x187))/x188);

	if (t46 != 1962419581852615LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	volatile int8_t x190 = 45;
	uint64_t x191 = UINT64_MAX;
	volatile int16_t x192 = INT16_MIN;
	uint64_t t47 = 28245260941715LLU;

	t47 = ((x189&(x190^x191))/x192);

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	int64_t x194 = -1LL;
	volatile uint16_t x195 = 10782U;
	volatile int16_t x196 = 1198;

	t48 = ((x193&(x194^x195))/x196);

	if (t48 != -7698974989027358LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	static int8_t x198 = INT8_MIN;
	int64_t x199 = -1LL;
	int64_t t49 = 209LL;

	t49 = ((x197&(x198^x199))/x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = -3;
	int32_t x207 = -1;
	int8_t x208 = 1;
	int32_t t50 = 994478;

	t50 = ((x205&(x206^x207))/x208);

	if (t50 != -256) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	uint8_t x210 = UINT8_MAX;
	volatile int16_t x211 = 236;
	volatile uint16_t x212 = 6778U;
	int32_t t51 = 62615984;

	t51 = ((x209&(x210^x211))/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = 14;
	uint8_t x214 = 0U;
	uint16_t x215 = 1939U;
	int32_t x216 = -1;
	static int32_t t52 = 18638788;

	t52 = ((x213&(x214^x215))/x216);

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x217 = 7452218U;
	int64_t x218 = -939896119378689LL;
	int16_t x219 = INT16_MIN;
	static int8_t x220 = INT8_MIN;
	static int64_t t53 = -271415136553LL;

	t53 = ((x217&(x218^x219))/x220);

	if (t53 != -41064LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = UINT32_MAX;
	volatile uint32_t x223 = UINT32_MAX;
	uint64_t x224 = 2118LLU;

	t54 = ((x221&(x222^x223))/x224);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = 7U;
	int8_t x226 = INT8_MIN;
	volatile int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MAX;

	t55 = ((x225&(x226^x227))/x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -1LL;
	static uint8_t x230 = 2U;
	volatile int8_t x231 = INT8_MIN;

	t56 = ((x229&(x230^x231))/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x233 = INT16_MAX;
	int32_t x234 = -1;
	static int8_t x235 = INT8_MAX;

	t57 = ((x233&(x234^x235))/x236);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x237 = INT8_MIN;
	static volatile uint16_t x239 = 21U;
	uint8_t x240 = 42U;
	volatile int32_t t58 = 159744292;

	t58 = ((x237&(x238^x239))/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	volatile int32_t x242 = 104;
	int32_t x243 = -24;
	volatile uint16_t x244 = 7011U;
	int32_t t59 = 52;

	t59 = ((x241&(x242^x243))/x244);

	if (t59 != -4) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MIN;
	int8_t x248 = INT8_MIN;

	t60 = ((x245&(x246^x247))/x248);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x249 = INT64_MAX;
	int32_t x250 = INT32_MAX;
	volatile int32_t x251 = -155282333;
	static volatile int64_t x252 = -1LL;
	static volatile int64_t t61 = 3733263858224972832LL;

	t61 = ((x249&(x250^x251))/x252);

	if (t61 != -9223372034862574492LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x253 = -1;
	volatile int64_t x254 = -254506997592205289LL;
	int32_t x255 = INT32_MIN;
	volatile uint8_t x256 = UINT8_MAX;
	static int64_t t62 = -1667898618866LL;

	t62 = ((x253&(x254^x255))/x256);

	if (t62 != 998066663496435LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MIN;
	volatile int32_t x260 = -2020;

	t63 = ((x257&(x258^x259))/x260);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x262 = -1LL;
	int8_t x263 = -1;

	t64 = ((x261&(x262^x263))/x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x265 = 0U;
	int32_t x266 = 16;
	uint8_t x267 = 0U;
	int8_t x268 = 46;

	t65 = ((x265&(x266^x267))/x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = INT8_MIN;
	int8_t x271 = -2;
	volatile uint32_t x272 = UINT32_MAX;

	t66 = ((x269&(x270^x271))/x272);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x273 = -1LL;
	int16_t x275 = INT16_MAX;
	static int8_t x276 = 31;
	int64_t t67 = -394210776586728937LL;

	t67 = ((x273&(x274^x275))/x276);

	if (t67 != 1052LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = -125701893;
	uint16_t x279 = UINT16_MAX;
	static int32_t x280 = INT32_MIN;
	int64_t t68 = -675999138371LL;

	t68 = ((x277&(x278^x279))/x280);

	if (t68 != 4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = INT16_MIN;
	uint32_t x282 = 40U;
	int32_t x283 = -212;
	volatile int64_t t69 = -3441476565013LL;

	t69 = ((x281&(x282^x283))/x284);

	if (t69 != 132994LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = 85103140733LLU;
	int64_t x286 = INT64_MIN;
	uint16_t x287 = UINT16_MAX;
	int64_t x288 = 17503543LL;

	t70 = ((x285&(x286^x287))/x288);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = -1;
	int16_t x290 = -1;
	volatile int64_t x291 = INT64_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile int64_t t71 = 1679418326425LL;

	t71 = ((x289&(x290^x291))/x292);

	if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x294 = INT16_MAX;
	volatile int64_t x295 = -1LL;
	volatile uint32_t x296 = 1617891U;
	int64_t t72 = 325592606183846986LL;

	t72 = ((x293&(x294^x295))/x296);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x297 = 33U;
	int64_t x298 = 31LL;
	int16_t x299 = -1;
	volatile int64_t t73 = 56532413318730LL;

	t73 = ((x297&(x298^x299))/x300);

	if (t73 != 10LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x301 = -1;
	int64_t x302 = -5404813186952LL;
	int16_t x303 = 1219;

	t74 = ((x301&(x302^x303))/x304);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x306 = 499U;
	uint32_t x307 = 255643224U;
	int64_t x308 = -1LL;
	volatile int64_t t75 = -11LL;

	t75 = ((x305&(x306^x307))/x308);

	if (t75 != -255643563LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x309 = 31578018U;
	int16_t x310 = -52;
	uint64_t x311 = UINT64_MAX;
	static int32_t x312 = -1;
	volatile uint64_t t76 = 857203943034898118LLU;

	t76 = ((x309&(x310^x311))/x312);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 5U;
	static int16_t x319 = -1;
	int64_t x320 = -11657951LL;
	int64_t t77 = -4448732LL;

	t77 = ((x317&(x318^x319))/x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x321 = -15;
	static int32_t x322 = -69367;
	int8_t x323 = -1;
	volatile uint64_t t78 = 2LLU;

	t78 = ((x321&(x322^x323))/x324);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = -1;
	int16_t x328 = 26;
	int64_t t79 = -153742946326483596LL;

	t79 = ((x325&(x326^x327))/x328);

	if (t79 != 11LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x329 = INT32_MAX;
	uint64_t x330 = UINT64_MAX;
	int16_t x331 = INT16_MIN;
	uint32_t x332 = UINT32_MAX;
	volatile uint64_t t80 = 11LLU;

	t80 = ((x329&(x330^x331))/x332);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = -1;
	uint64_t x334 = 3766679069LLU;

	t81 = ((x333&(x334^x335))/x336);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	uint32_t x340 = 7U;

	t82 = ((x337&(x338^x339))/x340);

	if (t82 != 200502710U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x341 = 19746U;
	int64_t t83 = -11997230025992LL;

	t83 = ((x341&(x342^x343))/x344);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = INT16_MIN;
	uint8_t x348 = UINT8_MAX;
	volatile uint64_t t84 = 2153386480865LLU;

	t84 = ((x345&(x346^x347))/x348);

	if (t84 != 265643108LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	uint32_t x352 = 334U;
	volatile uint32_t t85 = 2U;

	t85 = ((x349&(x350^x351))/x352);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = 16U;
	static int64_t x358 = 57459LL;
	int16_t x360 = -1;
	volatile int64_t t86 = -43122834LL;

	t86 = ((x357&(x358^x359))/x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = 2482792LLU;
	volatile int32_t x362 = -416430587;
	int16_t x364 = 629;
	uint64_t t87 = 4668539590302052710LLU;

	t87 = ((x361&(x362^x363))/x364);

	if (t87 != 13LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = 8;
	int8_t x366 = -1;
	int8_t x367 = INT8_MAX;
	int16_t x368 = -1;
	static int32_t t88 = -552432310;

	t88 = ((x365&(x366^x367))/x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int32_t x370 = INT32_MAX;
	int16_t x372 = INT16_MIN;

	t89 = ((x369&(x370^x371))/x372);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = -934047;
	volatile int64_t x375 = INT64_MAX;
	int8_t x376 = -13;
	int64_t t90 = -4044746376956LL;

	t90 = ((x373&(x374^x375))/x376);

	if (t90 != -709490156681064352LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = -1;
	int8_t x378 = 63;
	int8_t x379 = 8;
	uint64_t x380 = UINT64_MAX;

	t91 = ((x377&(x378^x379))/x380);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x382 = -2042122595145LL;
	int16_t x383 = -1;

	t92 = ((x381&(x382^x383))/x384);

	if (t92 != 2042122595144LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x385 = INT64_MAX;
	int8_t x388 = INT8_MAX;

	t93 = ((x385&(x386^x387))/x388);

	if (t93 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x389 = 470;
	int64_t x391 = 10811LL;
	int16_t x392 = INT16_MIN;

	t94 = ((x389&(x390^x391))/x392);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x394 = INT8_MIN;
	volatile int8_t x395 = 0;

	t95 = ((x393&(x394^x395))/x396);

	if (t95 != -217519LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = INT16_MAX;
	int8_t x398 = INT8_MIN;
	volatile int8_t x400 = -1;
	int32_t t96 = -8306024;

	t96 = ((x397&(x398^x399))/x400);

	if (t96 != -24577) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 8762106390028314718LLU;
	int16_t x402 = INT16_MIN;
	uint8_t x403 = 38U;
	int64_t x404 = -1LL;
	volatile uint64_t t97 = 457LLU;

	t97 = ((x401&(x402^x403))/x404);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x405 = 17900416939844892LLU;
	int32_t x407 = 1;
	static uint64_t t98 = 230991LLU;

	t98 = ((x405&(x406^x407))/x408);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x409 = 0U;
	volatile int8_t x410 = -7;
	uint16_t x411 = 24135U;
	static volatile int32_t t99 = 2707634;

	t99 = ((x409&(x410^x411))/x412);

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
