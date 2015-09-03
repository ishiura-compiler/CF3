#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 21U;
volatile int64_t x4 = INT64_MIN;
int8_t x5 = -62;
static int32_t x15 = 1;
int64_t x19 = INT64_MAX;
int64_t t4 = 123445LL;
int32_t x27 = 452425;
static int8_t x40 = INT8_MIN;
static volatile int64_t x42 = INT64_MIN;
volatile int8_t x45 = 31;
int64_t x46 = -1LL;
static uint16_t x48 = 51U;
uint64_t x56 = UINT64_MAX;
int32_t x59 = INT32_MIN;
static int64_t t14 = -2318415212192996829LL;
int16_t x64 = -1;
int64_t x73 = INT64_MIN;
int64_t x76 = INT64_MIN;
int64_t t17 = -2365LL;
int32_t x81 = INT32_MIN;
uint32_t x82 = 0U;
int32_t x84 = 17563010;
uint32_t x90 = 12U;
uint8_t x94 = 6U;
volatile int16_t x107 = 25;
int64_t x108 = -1LL;
int64_t x109 = INT64_MIN;
volatile int16_t x110 = 3;
volatile int16_t x115 = 0;
int16_t x122 = -1;
int32_t x126 = -1;
volatile int64_t t30 = 332558208352686LL;
uint8_t x132 = UINT8_MAX;
int16_t x135 = INT16_MIN;
uint8_t x137 = UINT8_MAX;
int32_t x140 = 15826157;
static int64_t x141 = INT64_MIN;
volatile int64_t x145 = INT64_MIN;
uint32_t x147 = UINT32_MAX;
static volatile int8_t x148 = -7;
static int32_t x153 = -1;
static volatile int32_t t37 = 3;
volatile int64_t x157 = -21278726890920414LL;
static volatile int8_t x160 = 14;
static uint8_t x170 = UINT8_MAX;
volatile int32_t t40 = 62;
int32_t x181 = -15;
static int64_t x187 = INT64_MIN;
volatile uint64_t t43 = 2418919630821526918LLU;
uint64_t x197 = 423378602212LLU;
uint64_t x204 = UINT64_MAX;
int8_t x207 = -1;
int64_t x212 = INT64_MAX;
int64_t x220 = INT64_MIN;
int64_t t51 = 52770556565709357LL;
int64_t t52 = 1LL;
volatile int16_t x227 = 5;
uint8_t x239 = UINT8_MAX;
static int16_t x241 = -1;
volatile int16_t x243 = INT16_MIN;
int64_t x246 = INT64_MIN;
int64_t x247 = INT64_MIN;
static int8_t x252 = INT8_MIN;
volatile int16_t x255 = 0;
int8_t x258 = -1;
volatile int32_t t61 = -61663;
uint16_t x268 = 0U;
volatile uint16_t x271 = 2758U;
int32_t x277 = INT32_MIN;
volatile uint8_t x284 = 2U;
int32_t x297 = INT32_MIN;
int8_t x302 = -6;
uint64_t x305 = 111391LLU;
uint64_t t71 = 2777918858LLU;
uint32_t x315 = UINT32_MAX;
int64_t t73 = 42984674733889LL;
volatile int32_t x321 = -1;
int8_t x324 = INT8_MIN;
volatile uint64_t x335 = UINT64_MAX;
static uint64_t t77 = 29938LLU;
uint8_t x338 = 39U;
volatile uint32_t t82 = 175184442U;
int16_t x361 = -14946;
uint16_t x362 = 0U;
volatile uint32_t x363 = 506578U;
uint64_t x370 = 7494152486LLU;
static int32_t x380 = INT32_MIN;
uint16_t x387 = UINT16_MAX;
volatile int16_t x393 = -1;
int32_t x394 = -10068;
uint32_t t91 = 25U;
volatile int64_t x404 = -60330841LL;
uint8_t x406 = 28U;
int16_t x407 = -10018;
volatile uint64_t x417 = UINT64_MAX;
static volatile uint64_t t96 = 11309933104LLU;
static volatile uint32_t x427 = UINT32_MAX;


void f0(void) {
	int16_t x2 = -1;
	int64_t x3 = INT64_MIN;
	volatile int64_t t0 = 1712254863LL;

	t0 = (((x1+x2)^x3)^x4);

	if (t0 != 20LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = 1;
	static volatile int32_t x7 = INT32_MIN;
	volatile int32_t x8 = INT32_MAX;
	int32_t t1 = -1037020;

	t1 = (((x5+x6)^x7)^x8);

	if (t1 != 60) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = 1095;
	int64_t x10 = -1LL;
	int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = 2293274805268484077LLU;
	uint64_t t2 = 760587814932034LLU;

	t2 = (((x9+x10)^x11)^x12);

	if (t2 != 16153469268441041835LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	static volatile int64_t x14 = INT64_MAX;
	int32_t x16 = -1;
	static volatile int64_t t3 = INT64_MIN;

	t3 = (((x13+x14)^x15)^x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 4181U;
	int8_t x18 = 6;
	int32_t x20 = -368;

	t4 = (((x17+x18)^x19)^x20);

	if (t4 != -9223372036854771404LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	volatile uint32_t x22 = UINT32_MAX;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MAX;
	volatile uint32_t t5 = 30285460U;

	t5 = (((x21+x22)^x23)^x24);

	if (t5 != 32766U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 10736U;
	uint8_t x26 = 13U;
	volatile int32_t x28 = INT32_MAX;
	volatile uint32_t t6 = 126687821U;

	t6 = (((x25+x26)^x27)^x28);

	if (t6 != 2147037515U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	volatile int16_t x30 = INT16_MAX;
	volatile uint8_t x31 = UINT8_MAX;
	static int16_t x32 = 886;
	volatile int32_t t7 = 33;

	t7 = (((x29+x30)^x31)^x32);

	if (t7 != 31990) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int16_t x34 = INT16_MAX;
	volatile int64_t x35 = 37LL;
	static uint8_t x36 = 2U;
	static int64_t t8 = 1418LL;

	t8 = (((x33+x34)^x35)^x36);

	if (t8 != 32729LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 20;
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = -1;
	volatile uint64_t t9 = 588319544306531LLU;

	t9 = (((x37+x38)^x39)^x40);

	if (t9 != 108LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 62U;
	volatile uint8_t x43 = UINT8_MAX;
	volatile int64_t x44 = -1LL;
	int64_t t10 = 0LL;

	t10 = (((x41+x42)^x43)^x44);

	if (t10 != 9223372036854775614LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x47 = 32U;
	volatile int64_t t11 = -118599248999LL;

	t11 = (((x45+x46)^x47)^x48);

	if (t11 != 13LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint64_t x50 = 15332559235057LLU;
	uint64_t x51 = 11922787039595LLU;
	uint8_t x52 = 63U;
	volatile uint64_t t12 = 7230375293632LLU;

	t12 = (((x49+x50)^x51)^x52);

	if (t12 != 7860306239141LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 1U;
	int64_t x54 = -1LL;
	uint32_t x55 = 1142U;
	volatile uint64_t t13 = 23LLU;

	t13 = (((x53+x54)^x55)^x56);

	if (t13 != 18446744073709550473LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 2;
	int32_t x58 = -2871032;
	int64_t x60 = INT64_MIN;

	t14 = (((x57+x58)^x59)^x60);

	if (t14 != -9223372034710163190LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static uint64_t x62 = 1270LLU;
	int64_t x63 = INT64_MIN;
	volatile uint64_t t15 = 352729654LLU;

	t15 = (((x61+x62)^x63)^x64);

	if (t15 != 18446744073709550345LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	volatile int16_t x70 = -2;
	static int16_t x71 = -1;
	volatile int8_t x72 = -1;
	static volatile int32_t t16 = -52895433;

	t16 = (((x69+x70)^x71)^x72);

	if (t16 != -32770) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = 1;
	int8_t x75 = -1;

	t17 = (((x73+x74)^x75)^x76);

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 21956182LLU;
	static volatile int32_t x78 = -110305;
	uint32_t x79 = 3463U;
	volatile int16_t x80 = INT16_MIN;
	uint64_t t18 = 9883574486087LLU;

	t18 = (((x77+x78)^x79)^x80);

	if (t18 != 18446744073687718642LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x83 = INT8_MIN;
	volatile uint32_t t19 = 170515U;

	t19 = (((x81+x82)^x83)^x84);

	if (t19 != 2129920514U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	uint32_t x86 = 362361U;
	int16_t x87 = INT16_MAX;
	uint64_t x88 = UINT64_MAX;
	uint64_t t20 = 20755695457189LLU;

	t20 = (((x85+x86)^x87)^x88);

	if (t20 != 18446744073709160312LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 12U;
	static uint16_t x91 = 2U;
	int8_t x92 = INT8_MIN;
	uint32_t t21 = 1614298959U;

	t21 = (((x89+x90)^x91)^x92);

	if (t21 != 4294967194U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MIN;
	static int32_t x95 = INT32_MIN;
	uint64_t x96 = 7532555945LLU;
	volatile uint64_t t22 = 1LLU;

	t22 = (((x93+x94)^x95)^x96);

	if (t22 != 9223372029354946223LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	static int16_t x98 = INT16_MAX;
	static uint64_t x99 = UINT64_MAX;
	volatile int64_t x100 = -3214860LL;
	static uint64_t t23 = 3042051LLU;

	t23 = (((x97+x98)^x99)^x100);

	if (t23 != 18446744073706336756LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 817412LLU;
	static int16_t x102 = INT16_MIN;
	int64_t x103 = 2889767471613612749LL;
	uint16_t x104 = 18U;
	volatile uint64_t t24 = 5876LLU;

	t24 = (((x101+x102)^x103)^x104);

	if (t24 != 2889767471614127067LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = INT8_MAX;
	uint64_t x106 = 260819594708LLU;
	volatile uint64_t t25 = 81747860681196033LLU;

	t25 = (((x105+x106)^x107)^x108);

	if (t25 != 18446743812889956789LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x111 = INT32_MAX;
	int32_t x112 = INT32_MIN;
	int64_t t26 = 229LL;

	t26 = (((x109+x110)^x111)^x112);

	if (t26 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -152;
	uint8_t x114 = 9U;
	uint16_t x116 = 3158U;
	int32_t t27 = 836418347;

	t27 = (((x113+x114)^x115)^x116);

	if (t27 != -3289) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x117 = -3635;
	volatile int32_t x118 = 34422;
	int64_t x119 = 410805376562026594LL;
	int16_t x120 = -1714;
	int64_t t28 = -73LL;

	t28 = (((x117+x118)^x119)^x120);

	if (t28 != -410805376562013841LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x121 = UINT16_MAX;
	volatile uint16_t x123 = 22U;
	static int8_t x124 = -1;
	int32_t t29 = 57119783;

	t29 = (((x121+x122)^x123)^x124);

	if (t29 != -65513) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	volatile int64_t x128 = -1LL;

	t30 = (((x125+x126)^x127)^x128);

	if (t30 != -32896LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 14;
	uint64_t x130 = 15061196LLU;
	int32_t x131 = INT32_MAX;
	uint64_t t31 = 4434863426498104981LLU;

	t31 = (((x129+x130)^x131)^x132);

	if (t31 != 2132422618LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MAX;
	uint32_t x134 = UINT32_MAX;
	int8_t x136 = INT8_MIN;
	static volatile uint32_t t32 = 0U;

	t32 = (((x133+x134)^x135)^x136);

	if (t32 != 32766U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = INT64_MIN;
	static volatile uint32_t x139 = UINT32_MAX;
	int64_t t33 = -32246880657453LL;

	t33 = (((x137+x138)^x139)^x140);

	if (t33 != -9223372032575634451LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x142 = 4167U;
	static int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	int64_t t34 = -13LL;

	t34 = (((x141+x142)^x143)^x144);

	if (t34 != -9223372036854747193LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x146 = UINT64_MAX;
	uint64_t t35 = 190245963939033941LLU;

	t35 = (((x145+x146)^x147)^x148);

	if (t35 != 9223372041149743097LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -13;
	static int16_t x150 = 53;
	volatile int16_t x151 = 981;
	int32_t x152 = -1;
	int32_t t36 = -92003825;

	t36 = (((x149+x150)^x151)^x152);

	if (t36 != -1022) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x154 = UINT16_MAX;
	int8_t x155 = 25;
	uint8_t x156 = UINT8_MAX;

	t37 = (((x153+x154)^x155)^x156);

	if (t37 != 65304) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x158 = -11525;
	int64_t x159 = -1LL;
	volatile int64_t t38 = -78145591097909LL;

	t38 = (((x157+x158)^x159)^x160);

	if (t38 != 21278726890931948LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x169 = INT16_MAX;
	static uint32_t x171 = 40610158U;
	uint16_t x172 = 12U;
	uint32_t t39 = 45060U;

	t39 = (((x169+x170)^x171)^x172);

	if (t39 != 40577436U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x173 = 11U;
	uint8_t x174 = 18U;
	int32_t x175 = INT32_MAX;
	uint16_t x176 = 133U;

	t40 = (((x173+x174)^x175)^x176);

	if (t40 != 2147483495) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x177 = UINT32_MAX;
	uint32_t x178 = UINT32_MAX;
	int16_t x179 = -207;
	static volatile int8_t x180 = -2;
	static uint32_t t41 = 1606406U;

	t41 = (((x177+x178)^x179)^x180);

	if (t41 != 4294967089U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x182 = INT32_MAX;
	int16_t x183 = -1;
	int32_t x184 = INT32_MIN;
	int32_t t42 = 23041;

	t42 = (((x181+x182)^x183)^x184);

	if (t42 != 15) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x185 = INT8_MAX;
	uint8_t x186 = 76U;
	uint64_t x188 = 71456631563LLU;

	t43 = (((x185+x186)^x187)^x188);

	if (t43 != 9223372108311407552LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 0U;
	volatile uint16_t x190 = 4892U;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = 2U;
	static int32_t t44 = 179538738;

	t44 = (((x189+x190)^x191)^x192);

	if (t44 != -27874) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = 289489;
	int32_t x194 = INT32_MIN;
	static int32_t x195 = 771;
	uint16_t x196 = 9U;
	static volatile int32_t t45 = -18278575;

	t45 = (((x193+x194)^x195)^x196);

	if (t45 != -2147194405) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x198 = 0U;
	volatile int16_t x199 = INT16_MIN;
	volatile int16_t x200 = INT16_MIN;
	uint64_t t46 = 42237644432148877LLU;

	t46 = (((x197+x198)^x199)^x200);

	if (t46 != 423378602212LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 1U;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	volatile uint64_t t47 = 42LLU;

	t47 = (((x201+x202)^x203)^x204);

	if (t47 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x205 = INT64_MIN;
	int16_t x206 = INT16_MAX;
	int64_t x208 = -1198LL;
	volatile int64_t t48 = -42763LL;

	t48 = (((x205+x206)^x207)^x208);

	if (t48 != -9223372036854744238LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = UINT8_MAX;
	int16_t x210 = INT16_MAX;
	int8_t x211 = INT8_MAX;
	volatile int64_t t49 = 1LL;

	t49 = (((x209+x210)^x211)^x212);

	if (t49 != 9223372036854742910LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x213 = UINT16_MAX;
	static uint64_t x214 = 2115467639350169LLU;
	static int32_t x215 = INT32_MIN;
	static int32_t x216 = -3;
	volatile uint64_t t50 = 159320650338912LLU;

	t50 = (((x213+x214)^x215)^x216);

	if (t50 != 2115468136651877LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x218 = 171;
	static uint8_t x219 = UINT8_MAX;

	t51 = (((x217+x218)^x219)^x220);

	if (t51 != -9223372036854710187LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = -1;
	static int64_t x223 = 26034429274811589LL;
	int16_t x224 = INT16_MIN;

	t52 = (((x221+x222)^x223)^x224);

	if (t52 != 26034429274788794LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = 0;
	static int32_t x226 = INT32_MAX;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t53 = 3287291;

	t53 = (((x225+x226)^x227)^x228);

	if (t53 != 2147418117) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = 349110LL;
	int8_t x230 = -1;
	uint64_t x231 = UINT64_MAX;
	uint8_t x232 = 40U;
	uint64_t t54 = 2611190257LLU;

	t54 = (((x229+x230)^x231)^x232);

	if (t54 != 18446744073709202530LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x233 = -9;
	static uint16_t x234 = 17378U;
	int8_t x235 = 1;
	int16_t x236 = 246;
	volatile int32_t t55 = -14164;

	t55 = (((x233+x234)^x235)^x236);

	if (t55 != 17198) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x237 = INT32_MIN;
	static uint64_t x238 = UINT64_MAX;
	uint16_t x240 = 205U;
	static uint64_t t56 = 3113529259686020LLU;

	t56 = (((x237+x238)^x239)^x240);

	if (t56 != 18446744071562067917LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x242 = 620U;
	static int8_t x244 = INT8_MIN;
	volatile uint32_t t57 = 177955431U;

	t57 = (((x241+x242)^x243)^x244);

	if (t57 != 32235U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MAX;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t58 = 1113533223050829450LLU;

	t58 = (((x245+x246)^x247)^x248);

	if (t58 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x249 = INT32_MIN;
	uint16_t x250 = UINT16_MAX;
	static uint32_t x251 = 36401777U;
	uint32_t t59 = 15U;

	t59 = (((x249+x250)^x251)^x252);

	if (t59 != 2111074830U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = -1;
	static int16_t x256 = INT16_MIN;
	volatile int32_t t60 = 1;

	t60 = (((x253+x254)^x255)^x256);

	if (t60 != 32639) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = 3;
	static int8_t x259 = -1;
	int8_t x260 = 0;

	t61 = (((x257+x258)^x259)^x260);

	if (t61 != -3) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x261 = 16U;
	uint16_t x262 = 1U;
	static int64_t x263 = INT64_MIN;
	int64_t x264 = -1482125LL;
	volatile int64_t t62 = 9833181923LL;

	t62 = (((x261+x262)^x263)^x264);

	if (t62 != 9223372036853293666LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = -83049608230139LL;
	volatile int8_t x266 = 36;
	static uint8_t x267 = UINT8_MAX;
	static int64_t t63 = 1812LL;

	t63 = (((x265+x266)^x267)^x268);

	if (t63 != -83049608229930LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x269 = 0;
	int16_t x270 = INT16_MAX;
	uint64_t x272 = UINT64_MAX;
	uint64_t t64 = 622771LLU;

	t64 = (((x269+x270)^x271)^x272);

	if (t64 != 18446744073709521606LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x278 = INT32_MAX;
	int8_t x279 = 59;
	int32_t x280 = -221;
	int32_t t65 = 932936;

	t65 = (((x277+x278)^x279)^x280);

	if (t65 != 231) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = -353;
	int64_t x282 = -251682457575122446LL;
	volatile int64_t x283 = INT64_MIN;
	int64_t t66 = -3606077274886362LL;

	t66 = (((x281+x282)^x283)^x284);

	if (t66 != 8971689579279653011LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = INT64_MIN;
	uint32_t x290 = 423081U;
	static uint16_t x291 = 25U;
	int64_t x292 = 539353508679LL;
	static volatile int64_t t67 = -217LL;

	t67 = (((x289+x290)^x291)^x292);

	if (t67 != -9223371497500893193LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = 200776468861156LL;
	int16_t x294 = -11858;
	uint64_t x295 = 899LLU;
	static uint32_t x296 = UINT32_MAX;
	uint64_t t68 = 1256301LLU;

	t68 = (((x293+x294)^x295)^x296);

	if (t68 != 200772908556014LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x298 = 9058852U;
	volatile int8_t x299 = 2;
	int64_t x300 = -6LL;
	int64_t t69 = 51LL;

	t69 = (((x297+x298)^x299)^x300);

	if (t69 != -2156542500LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x301 = 785525923U;
	static int64_t x303 = INT64_MIN;
	static int64_t x304 = 4488711665800LL;
	int64_t t70 = 7032918LL;

	t70 = (((x301+x302)^x303)^x304);

	if (t70 != -9223367547762355179LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x306 = INT32_MIN;
	uint64_t x307 = 105159518854LLU;
	volatile int8_t x308 = INT8_MIN;

	t71 = (((x305+x306)^x307)^x308);

	if (t71 != 103146366489LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = INT64_MIN;
	volatile int16_t x314 = 66;
	int16_t x316 = INT16_MIN;
	int64_t t72 = 231LL;

	t72 = (((x313+x314)^x315)^x316);

	if (t72 != 9223372032559841213LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x317 = 5U;
	int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MIN;
	uint32_t x320 = 2U;

	t73 = (((x317+x318)^x319)^x320);

	if (t73 != 9223372036854775687LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x322 = 4U;
	uint16_t x323 = 261U;
	volatile int32_t t74 = 37;

	t74 = (((x321+x322)^x323)^x324);

	if (t74 != -378) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MIN;
	static int8_t x328 = INT8_MIN;
	static volatile int32_t t75 = -15;

	t75 = (((x325+x326)^x327)^x328);

	if (t75 != -2147450881) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = -1;
	uint64_t x330 = 1372236135LLU;
	static int8_t x331 = INT8_MAX;
	int8_t x332 = INT8_MAX;
	volatile uint64_t t76 = 92384380746166LLU;

	t76 = (((x329+x330)^x331)^x332);

	if (t76 != 1372236134LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = 19051330979922047LL;
	int64_t x334 = INT64_MIN;
	static int32_t x336 = -1;

	t77 = (((x333+x334)^x335)^x336);

	if (t77 != 9242423367834697855LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = 2;
	int64_t x339 = INT64_MAX;
	int16_t x340 = INT16_MAX;
	int64_t t78 = -7561261676LL;

	t78 = (((x337+x338)^x339)^x340);

	if (t78 != 9223372036854743081LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x341 = 14685942398197350LLU;
	static int32_t x342 = -339114;
	int8_t x343 = 1;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t79 = 3487722LLU;

	t79 = (((x341+x342)^x343)^x344);

	if (t79 != 18432058132781920701LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = -1;
	static uint32_t x346 = UINT32_MAX;
	int64_t x347 = 200173474270359LL;
	int8_t x348 = INT8_MAX;
	static int64_t t80 = 251896220350LL;

	t80 = (((x345+x346)^x347)^x348);

	if (t80 != 200173312291606LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x349 = -1;
	volatile int16_t x350 = -2;
	volatile uint32_t x351 = UINT32_MAX;
	static int32_t x352 = -43250965;
	volatile uint32_t t81 = 7U;

	t81 = (((x349+x350)^x351)^x352);

	if (t81 != 4251716329U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x353 = 183U;
	int8_t x354 = 5;
	int32_t x355 = INT32_MIN;
	int16_t x356 = 2;

	t82 = (((x353+x354)^x355)^x356);

	if (t82 != 2147483838U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x357 = UINT32_MAX;
	volatile uint64_t x358 = 933LLU;
	int32_t x359 = 2741;
	int8_t x360 = -1;
	static uint64_t t83 = 25107LLU;

	t83 = (((x357+x358)^x359)^x360);

	if (t83 != 18446744069414581998LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x364 = -1;
	uint32_t t84 = 423810U;

	t84 = (((x361+x362)^x363)^x364);

	if (t84 != 491699U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x369 = -4957119;
	uint32_t x371 = 153U;
	int32_t x372 = INT32_MIN;
	volatile uint64_t t85 = 82LLU;

	t85 = (((x369+x370)^x371)^x372);

	if (t85 != 18446744066166361598LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x373 = UINT32_MAX;
	int8_t x374 = INT8_MIN;
	int8_t x375 = -47;
	volatile int8_t x376 = INT8_MIN;
	volatile uint32_t t86 = 742584609U;

	t86 = (((x373+x374)^x375)^x376);

	if (t86 != 4294967086U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = -1;
	static int32_t x378 = -1;
	static uint64_t x379 = 942429348LLU;
	volatile uint64_t t87 = 176271445LLU;

	t87 = (((x377+x378)^x379)^x380);

	if (t87 != 1205054298LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x381 = 14;
	static int32_t x382 = INT32_MIN;
	uint64_t x383 = UINT64_MAX;
	static volatile uint16_t x384 = 1898U;
	volatile uint64_t t88 = 20LLU;

	t88 = (((x381+x382)^x383)^x384);

	if (t88 != 2147481755LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x385 = 13340812671085LLU;
	uint32_t x386 = UINT32_MAX;
	static uint8_t x388 = 9U;
	static volatile uint64_t t89 = 40511523LLU;

	t89 = (((x385+x386)^x387)^x388);

	if (t89 != 13345107642266LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = 9295;
	uint16_t x390 = 18U;
	uint32_t x391 = 51U;
	int32_t x392 = INT32_MIN;
	volatile uint32_t t90 = 969715134U;

	t90 = (((x389+x390)^x391)^x392);

	if (t90 != 2147492946U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x395 = 0;
	uint32_t x396 = 161334U;

	t91 = (((x393+x394)^x395)^x396);

	if (t91 != 4294815389U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x397 = 1;
	int16_t x398 = INT16_MIN;
	volatile int32_t x399 = -15482;
	int8_t x400 = -4;
	static volatile int32_t t92 = 1;

	t92 = (((x397+x398)^x399)^x400);

	if (t92 != -17285) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x401 = UINT64_MAX;
	uint8_t x402 = UINT8_MAX;
	volatile int16_t x403 = INT16_MAX;
	volatile uint64_t t93 = 14317862358957LLU;

	t93 = (((x401+x402)^x403)^x404);

	if (t93 != 18446744073649197990LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x405 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	volatile int32_t t94 = 6706;

	t94 = (((x405+x406)^x407)^x408);

	if (t94 != -10046) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = INT16_MAX;
	int32_t x410 = 879878;
	uint64_t x411 = 15LLU;
	int32_t x412 = 86923258;
	static volatile uint64_t t95 = 184LLU;

	t95 = (((x409+x410)^x411)^x412);

	if (t95 != 86227696LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x418 = -1LL;
	int8_t x419 = 25;
	static volatile uint32_t x420 = UINT32_MAX;

	t96 = (((x417+x418)^x419)^x420);

	if (t96 != 18446744069414584344LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x425 = 0U;
	volatile int8_t x426 = INT8_MAX;
	int64_t x428 = -1LL;
	int64_t t97 = 371809180855735LL;

	t97 = (((x425+x426)^x427)^x428);

	if (t97 != -4294967169LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x429 = 17;
	volatile uint64_t x430 = 26627263LLU;
	volatile int32_t x431 = -1;
	volatile uint8_t x432 = 0U;
	uint64_t t98 = 242956608384695LLU;

	t98 = (((x429+x430)^x431)^x432);

	if (t98 != 18446744073682924335LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x437 = UINT32_MAX;
	uint16_t x438 = 317U;
	volatile int32_t x439 = INT32_MIN;
	int8_t x440 = INT8_MIN;
	volatile uint32_t t99 = 64245U;

	t99 = (((x437+x438)^x439)^x440);

	if (t99 != 2147483324U) { NG(); } else { ; }
	
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

