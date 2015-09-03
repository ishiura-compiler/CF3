#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 3U;
volatile int64_t t0 = -134407933LL;
uint8_t x6 = 26U;
int16_t x17 = -1;
static int16_t x27 = -225;
volatile int64_t t7 = INT64_MIN;
int32_t x43 = 295;
uint8_t x46 = 4U;
int32_t x47 = INT32_MIN;
static uint64_t t10 = 1454131666LLU;
int16_t x64 = -1;
volatile uint64_t t12 = 41103807518169LLU;
int8_t x73 = INT8_MAX;
volatile int16_t x78 = -1;
static volatile int64_t t17 = -30372514813450LL;
int32_t x89 = INT32_MIN;
static volatile int32_t t19 = INT32_MIN;
int8_t x97 = INT8_MAX;
volatile int64_t x101 = -1LL;
static uint8_t x105 = 29U;
static int8_t x107 = -5;
volatile int64_t x108 = -1LL;
volatile uint64_t t24 = 2234181663766LLU;
volatile uint16_t x119 = 26U;
static int32_t t25 = 4;
static int16_t x122 = INT16_MIN;
volatile uint64_t x123 = 9503342LLU;
int16_t x137 = INT16_MAX;
static int16_t x140 = INT16_MIN;
uint32_t t30 = 289U;
volatile uint8_t x141 = 19U;
uint16_t x142 = UINT16_MAX;
static uint32_t x146 = 18791U;
volatile uint32_t x147 = UINT32_MAX;
int32_t x150 = 2;
uint16_t x160 = 87U;
volatile uint64_t x166 = 1219162713849057249LLU;
uint16_t x169 = 11U;
volatile int64_t t37 = -2LL;
volatile int64_t x175 = INT64_MIN;
uint8_t x188 = 0U;
int64_t t42 = 3717224183120LL;
int32_t x194 = INT32_MIN;
static uint64_t x198 = UINT64_MAX;
volatile int8_t x213 = INT8_MAX;
int64_t x214 = -38LL;
int32_t x219 = -1;
int16_t x225 = -1;
static volatile int64_t t48 = -146801661480470963LL;
uint64_t x232 = UINT64_MAX;
static int64_t x236 = -1143802377508LL;
volatile int32_t x239 = 233405531;
int8_t x240 = INT8_MIN;
uint32_t t51 = 8U;
volatile uint16_t x245 = UINT16_MAX;
int16_t x249 = 7987;
volatile uint32_t t56 = 94U;
int8_t x272 = -1;
int16_t x276 = INT16_MAX;
uint16_t x291 = UINT16_MAX;
int64_t x314 = 21237929393436670LL;
int8_t x316 = -1;
volatile int64_t t70 = 12019805LL;
uint8_t x319 = 24U;
uint16_t x324 = 7U;
uint64_t t72 = 653LLU;
volatile int8_t x325 = INT8_MAX;
static int8_t x328 = INT8_MAX;
static volatile int32_t t73 = -257821;
int64_t x332 = INT64_MIN;
volatile uint8_t x335 = UINT8_MAX;
uint8_t x347 = UINT8_MAX;
int32_t x355 = 46956461;
int32_t x356 = INT32_MIN;
volatile int32_t t81 = -185420;
int16_t x363 = INT16_MIN;
volatile int64_t x376 = -8488094331LL;
volatile int64_t t85 = 145199842508015417LL;
static volatile uint32_t t87 = 4345012U;
int8_t x386 = 1;
uint16_t x391 = UINT16_MAX;
uint64_t x392 = 51LLU;
static volatile uint64_t t89 = 12967219217567698LLU;
uint8_t x395 = UINT8_MAX;
uint32_t x397 = UINT32_MAX;
static int64_t t91 = 124LL;
static volatile int32_t x416 = INT32_MIN;
uint32_t x420 = 57006U;
uint8_t x421 = 20U;
int32_t x424 = INT32_MIN;
uint64_t t98 = 232549LLU;
uint8_t x430 = 1U;


void f0(void) {
	int8_t x1 = -7;
	int16_t x3 = -8578;
	int64_t x4 = -387LL;

	t0 = (((x1+x2)^x3)&x4);

	if (t0 != 8192LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 14U;
	volatile int16_t x7 = 3;
	static volatile int64_t x8 = INT64_MIN;
	int64_t t1 = 21097143LL;

	t1 = (((x5+x6)^x7)&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MAX;
	static int16_t x10 = -29;
	int16_t x11 = -1831;
	uint32_t x12 = UINT32_MAX;
	static volatile int64_t t2 = 8087656976727LL;

	t2 = (((x9+x10)^x11)&x12);

	if (t2 != 1851LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = 411U;
	uint32_t x19 = 1U;
	static int16_t x20 = INT16_MAX;
	volatile uint32_t t3 = 860523U;

	t3 = (((x17+x18)^x19)&x20);

	if (t3 != 411U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -1;
	int32_t x22 = INT32_MAX;
	static volatile uint32_t x23 = 5252U;
	static int16_t x24 = INT16_MIN;
	uint32_t t4 = 108420U;

	t4 = (((x21+x22)^x23)&x24);

	if (t4 != 2147450880U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	int64_t x26 = 10323LL;
	static int64_t x28 = -1LL;
	static volatile uint64_t t5 = 2985620009LLU;

	t5 = (((x25+x26)^x27)&x28);

	if (t5 != 18446744073709541197LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = INT32_MIN;
	static int8_t x34 = 14;
	uint8_t x35 = 8U;
	int64_t x36 = 208411343LL;
	volatile int64_t t6 = 3431124318641915LL;

	t6 = (((x33+x34)^x35)&x36);

	if (t6 != 6LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x37 = UINT32_MAX;
	int64_t x38 = INT64_MIN;
	static int16_t x39 = INT16_MAX;
	static int64_t x40 = INT64_MIN;

	t7 = (((x37+x38)^x39)&x40);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	uint64_t x42 = 23962LLU;
	static volatile uint32_t x44 = UINT32_MAX;
	static volatile uint64_t t8 = 1970509884336343LLU;

	t8 = (((x41+x42)^x43)&x44);

	if (t8 != 23742LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = INT16_MIN;
	volatile int32_t x48 = INT32_MAX;
	static int32_t t9 = -4636069;

	t9 = (((x45+x46)^x47)&x48);

	if (t9 != 2147450884) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	int8_t x50 = -1;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = UINT64_MAX;

	t10 = (((x49+x50)^x51)&x52);

	if (t10 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x57 = UINT64_MAX;
	int32_t x58 = -101099;
	static int16_t x59 = INT16_MIN;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t11 = 14733031092576LLU;

	t11 = (((x57+x58)^x59)&x60);

	if (t11 != 128276LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -12;
	int16_t x62 = 9697;
	uint64_t x63 = 2077462683966499LLU;

	t12 = (((x61+x62)^x63)&x64);

	if (t12 != 2077462683974134LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = UINT32_MAX;
	int32_t x66 = INT32_MIN;
	volatile int64_t x67 = INT64_MIN;
	static volatile uint8_t x68 = UINT8_MAX;
	volatile int64_t t13 = 2050315375332984007LL;

	t13 = (((x65+x66)^x67)&x68);

	if (t13 != 255LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 59U;
	uint32_t x71 = 38028U;
	int16_t x72 = -1;
	static uint32_t t14 = 14021U;

	t14 = (((x69+x70)^x71)&x72);

	if (t14 != 38326U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x74 = INT64_MIN;
	static int8_t x75 = 8;
	static int8_t x76 = INT8_MAX;
	volatile int64_t t15 = -58LL;

	t15 = (((x73+x74)^x75)&x76);

	if (t15 != 119LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x77 = 290755644977283LL;
	uint32_t x79 = 26452812U;
	int64_t x80 = INT64_MIN;
	static volatile int64_t t16 = 284388LL;

	t16 = (((x77+x78)^x79)&x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x81 = INT64_MIN;
	static uint8_t x82 = 6U;
	volatile int8_t x83 = INT8_MAX;
	static uint8_t x84 = UINT8_MAX;

	t17 = (((x81+x82)^x83)&x84);

	if (t17 != 121LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = 1;
	int64_t x86 = -1LL;
	volatile uint8_t x87 = 25U;
	int64_t x88 = -3287LL;
	volatile int64_t t18 = 4447294194500903101LL;

	t18 = (((x85+x86)^x87)&x88);

	if (t18 != 9LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = INT16_MAX;
	uint16_t x91 = 187U;
	volatile int32_t x92 = INT32_MIN;

	t19 = (((x89+x90)^x91)&x92);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int32_t x94 = INT32_MIN;
	uint64_t x95 = UINT64_MAX;
	static volatile int8_t x96 = -13;
	uint64_t t20 = 44062385LLU;

	t20 = (((x93+x94)^x95)&x96);

	if (t20 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = INT64_MIN;
	static int16_t x99 = INT16_MAX;
	uint8_t x100 = 15U;
	static volatile int64_t t21 = 12168LL;

	t21 = (((x97+x98)^x99)&x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MIN;
	volatile int32_t x104 = -1;
	volatile int64_t t22 = -8399675091LL;

	t22 = (((x101+x102)^x103)&x104);

	if (t22 != 2147483775LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x106 = INT16_MAX;
	volatile int64_t t23 = -524584965728LL;

	t23 = (((x105+x106)^x107)&x108);

	if (t23 != -32793LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = -1LL;
	volatile uint64_t x114 = 584312584111LLU;
	volatile uint8_t x115 = UINT8_MAX;
	uint32_t x116 = 76U;

	t24 = (((x113+x114)^x115)&x116);

	if (t24 != 64LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = -1;
	int16_t x118 = -14;
	int16_t x120 = INT16_MIN;

	t25 = (((x117+x118)^x119)&x120);

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -45264700670133LL;
	int16_t x124 = 4590;
	uint64_t t26 = 22944LLU;

	t26 = (((x121+x122)^x123)&x124);

	if (t26 != 4388LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x125 = 7U;
	uint32_t x126 = 92915270U;
	int64_t x127 = -2086263LL;
	int8_t x128 = INT8_MIN;
	static int64_t t27 = -1LL;

	t27 = (((x125+x126)^x127)&x128);

	if (t27 != -93721472LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x129 = 14301040782LLU;
	volatile int8_t x130 = INT8_MAX;
	int16_t x131 = -1757;
	int8_t x132 = INT8_MIN;
	volatile uint64_t t28 = 5778087298LLU;

	t28 = (((x129+x130)^x131)&x132);

	if (t28 != 18446744059408508928LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MAX;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = 0U;
	volatile int64_t x136 = INT64_MIN;
	static int64_t t29 = INT64_MIN;

	t29 = (((x133+x134)^x135)&x136);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x138 = UINT32_MAX;
	static int16_t x139 = 5;

	t30 = (((x137+x138)^x139)&x140);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x143 = -1;
	int32_t x144 = -63969;
	volatile int32_t t31 = 6928;

	t31 = (((x141+x142)^x143)&x144);

	if (t31 != -129523) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x145 = 398971760371189LLU;
	int8_t x148 = INT8_MIN;
	uint64_t t32 = 8898254868941367LLU;

	t32 = (((x145+x146)^x147)&x148);

	if (t32 != 398968738697344LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x149 = 7U;
	volatile int64_t x151 = INT64_MIN;
	static int16_t x152 = 3494;
	volatile int64_t t33 = -7LL;

	t33 = (((x149+x150)^x151)&x152);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = -13895969;
	int64_t x154 = -239170LL;
	int64_t x155 = 144524139543LL;
	int16_t x156 = INT16_MIN;
	static int64_t t34 = -172846LL;

	t34 = (((x153+x154)^x155)&x156);

	if (t34 != -144528965632LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 14U;
	volatile uint8_t x158 = 10U;
	volatile int32_t x159 = -2759006;
	volatile int32_t t35 = -2748;

	t35 = (((x157+x158)^x159)&x160);

	if (t35 != 18) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x165 = -828;
	int16_t x167 = INT16_MIN;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t36 = 45708612738748LLU;

	t36 = (((x165+x166)^x167)&x168);

	if (t36 != 17227581359860501669LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x170 = UINT16_MAX;
	int64_t x171 = INT64_MAX;
	static int8_t x172 = INT8_MIN;

	t37 = (((x169+x170)^x171)&x172);

	if (t37 != 9223372036854710144LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -1;
	uint64_t x174 = UINT64_MAX;
	static int8_t x176 = -7;
	volatile uint64_t t38 = 88LLU;

	t38 = (((x173+x174)^x175)&x176);

	if (t38 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x177 = INT32_MIN;
	uint8_t x178 = 0U;
	volatile uint16_t x179 = 303U;
	int64_t x180 = -53671LL;
	volatile int64_t t39 = 62191538613LL;

	t39 = (((x177+x178)^x179)&x180);

	if (t39 != -2147483639LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 34420302572756900LLU;
	uint16_t x182 = 16517U;
	int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MIN;
	uint64_t t40 = 5074LLU;

	t40 = (((x181+x182)^x183)&x184);

	if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = UINT8_MAX;
	static int64_t x186 = INT64_MIN;
	volatile int8_t x187 = INT8_MAX;
	volatile int64_t t41 = 14884862482LL;

	t41 = (((x185+x186)^x187)&x188);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = UINT16_MAX;
	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MAX;
	int32_t x192 = INT32_MAX;

	t42 = (((x189+x190)^x191)&x192);

	if (t42 != 65408LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x193 = 75U;
	int16_t x195 = -1;
	uint64_t x196 = UINT64_MAX;
	uint64_t t43 = 851LLU;

	t43 = (((x193+x194)^x195)&x196);

	if (t43 != 2147483572LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = INT32_MIN;
	int16_t x199 = -1;
	uint16_t x200 = 1U;
	volatile uint64_t t44 = 115863905594LLU;

	t44 = (((x197+x198)^x199)&x200);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x215 = 5;
	int64_t x216 = -8LL;
	int64_t t45 = -3144970390LL;

	t45 = (((x213+x214)^x215)&x216);

	if (t45 != 88LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x217 = 255077249739LLU;
	int32_t x218 = INT32_MIN;
	uint32_t x220 = UINT32_MAX;
	uint64_t t46 = 33661913LLU;

	t46 = (((x217+x218)^x219)&x220);

	if (t46 != 473304372LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x221 = -3;
	static uint32_t x222 = UINT32_MAX;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = 0;
	uint32_t t47 = 4606974U;

	t47 = (((x221+x222)^x223)&x224);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x226 = INT64_MAX;
	volatile int64_t x227 = -1LL;
	int32_t x228 = 972;

	t48 = (((x225+x226)^x227)&x228);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = -31;
	uint8_t x230 = 5U;
	uint64_t x231 = UINT64_MAX;
	uint64_t t49 = 1053237913720785412LLU;

	t49 = (((x229+x230)^x231)&x232);

	if (t49 != 25LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x233 = 1U;
	static int16_t x234 = -1;
	uint64_t x235 = 31205597LLU;
	volatile uint64_t t50 = 17421003333681680LLU;

	t50 = (((x233+x234)^x235)&x236);

	if (t50 != 1050844LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MAX;
	uint32_t x238 = 0U;

	t51 = (((x237+x238)^x239)&x240);

	if (t51 != 233405440U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x241 = 969LL;
	int64_t x242 = INT64_MIN;
	uint16_t x243 = 781U;
	static int64_t x244 = INT64_MIN;
	static volatile int64_t t52 = INT64_MIN;

	t52 = (((x241+x242)^x243)&x244);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x246 = 1775845709661310LLU;
	int64_t x247 = INT64_MIN;
	uint16_t x248 = 1688U;
	volatile uint64_t t53 = 20723099LLU;

	t53 = (((x245+x246)^x247)&x248);

	if (t53 != 1048LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x250 = INT32_MIN;
	static volatile int8_t x251 = INT8_MIN;
	volatile int8_t x252 = -6;
	volatile int32_t t54 = 812427;

	t54 = (((x249+x250)^x251)&x252);

	if (t54 != 2147475634) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x253 = 24U;
	volatile int64_t x254 = -1LL;
	uint8_t x255 = UINT8_MAX;
	uint8_t x256 = UINT8_MAX;
	int64_t t55 = -202277921006553589LL;

	t55 = (((x253+x254)^x255)&x256);

	if (t55 != 232LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x257 = 1;
	uint32_t x258 = UINT32_MAX;
	volatile uint8_t x259 = UINT8_MAX;
	volatile int16_t x260 = INT16_MIN;

	t56 = (((x257+x258)^x259)&x260);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x261 = 19U;
	int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MIN;
	static uint64_t x264 = 55120276231LLU;
	uint64_t t57 = 165660930198LLU;

	t57 = (((x261+x262)^x263)&x264);

	if (t57 != 3580668675LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x265 = 146U;
	volatile int64_t x266 = INT64_MIN;
	static volatile int32_t x267 = INT32_MAX;
	volatile int16_t x268 = -6;
	int64_t t58 = -350712LL;

	t58 = (((x265+x266)^x267)&x268);

	if (t58 != -9223372034707292312LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int32_t x270 = INT32_MAX;
	int16_t x271 = INT16_MIN;
	uint64_t t59 = 6587593705875018LLU;

	t59 = (((x269+x270)^x271)&x272);

	if (t59 != 18446744071562100734LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x273 = -1;
	static uint32_t x274 = 719U;
	uint8_t x275 = 2U;
	static uint32_t t60 = 8116U;

	t60 = (((x273+x274)^x275)&x276);

	if (t60 != 716U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x277 = 11U;
	volatile int16_t x278 = 293;
	static uint64_t x279 = 313046684958116722LLU;
	uint8_t x280 = UINT8_MAX;
	volatile uint64_t t61 = 32420732396573LLU;

	t61 = (((x277+x278)^x279)&x280);

	if (t61 != 66LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = 1;
	int16_t x282 = -1;
	uint32_t x283 = 94602U;
	volatile int8_t x284 = 59;
	volatile uint32_t t62 = 84U;

	t62 = (((x281+x282)^x283)&x284);

	if (t62 != 10U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int64_t x286 = 95305560176329121LL;
	volatile uint16_t x287 = UINT16_MAX;
	int16_t x288 = INT16_MAX;
	volatile int64_t t63 = 8LL;

	t63 = (((x285+x286)^x287)&x288);

	if (t63 != 32351LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x289 = UINT16_MAX;
	int16_t x290 = 1351;
	int8_t x292 = INT8_MIN;
	volatile int32_t t64 = -372925088;

	t64 = (((x289+x290)^x291)&x292);

	if (t64 != 129664) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = INT16_MAX;
	uint32_t x294 = UINT32_MAX;
	static int64_t x295 = INT64_MAX;
	volatile int16_t x296 = INT16_MAX;
	int64_t t65 = -8374697958612295LL;

	t65 = (((x293+x294)^x295)&x296);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x297 = 635U;
	int32_t x298 = -1;
	int8_t x299 = -8;
	int16_t x300 = -1;
	volatile uint32_t t66 = 108019U;

	t66 = (((x297+x298)^x299)&x300);

	if (t66 != 4294966658U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x301 = 25070U;
	uint64_t x302 = 1434LLU;
	static int8_t x303 = 0;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t67 = 40LLU;

	t67 = (((x301+x302)^x303)&x304);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x305 = -471459;
	static int32_t x306 = INT32_MAX;
	uint8_t x307 = 1U;
	int16_t x308 = -1;
	static volatile int32_t t68 = 24;

	t68 = (((x305+x306)^x307)&x308);

	if (t68 != 2147012189) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MIN;
	uint16_t x310 = 2157U;
	volatile int32_t x311 = INT32_MIN;
	static int8_t x312 = INT8_MIN;
	int32_t t69 = 25;

	t69 = (((x309+x310)^x311)&x312);

	if (t69 != -2147481728) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x313 = UINT16_MAX;
	uint8_t x315 = 9U;

	t70 = (((x313+x314)^x315)&x316);

	if (t70 != 21237929393502196LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x317 = INT8_MIN;
	uint8_t x318 = UINT8_MAX;
	static int8_t x320 = INT8_MIN;
	volatile int32_t t71 = -30710;

	t71 = (((x317+x318)^x319)&x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MAX;
	uint64_t x322 = 800815647355827LLU;
	uint8_t x323 = 116U;

	t72 = (((x321+x322)^x323)&x324);

	if (t72 != 6LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x326 = UINT8_MAX;
	static int16_t x327 = INT16_MIN;

	t73 = (((x325+x326)^x327)&x328);

	if (t73 != 126) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x329 = -195955LL;
	uint16_t x330 = 728U;
	int64_t x331 = INT64_MAX;
	int64_t t74 = INT64_MIN;

	t74 = (((x329+x330)^x331)&x332);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x333 = 30U;
	static int8_t x334 = INT8_MAX;
	volatile int64_t x336 = -21146269949314891LL;
	volatile int64_t t75 = -686419604405LL;

	t75 = (((x333+x334)^x335)&x336);

	if (t75 != 32LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = 2622U;
	static uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 10575LLU;
	volatile uint64_t t76 = 247221723886717LLU;

	t76 = (((x337+x338)^x339)&x340);

	if (t76 != 8205LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x341 = -21;
	uint64_t x342 = 2573696626222LLU;
	static uint8_t x343 = 1U;
	static int64_t x344 = -32166305LL;
	uint64_t t77 = 242LLU;

	t77 = (((x341+x342)^x343)&x344);

	if (t77 != 2573692382744LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = -1;
	int16_t x346 = -6;
	int32_t x348 = -4084643;
	int32_t t78 = -1;

	t78 = (((x345+x346)^x347)&x348);

	if (t78 != -4084732) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x349 = 7U;
	int32_t x350 = INT32_MIN;
	volatile uint64_t x351 = UINT64_MAX;
	uint64_t x352 = 230881LLU;
	volatile uint64_t t79 = 9768986960714597LLU;

	t79 = (((x349+x350)^x351)&x352);

	if (t79 != 230880LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x353 = INT8_MIN;
	int16_t x354 = 0;
	static int32_t t80 = INT32_MIN;

	t80 = (((x353+x354)^x355)&x356);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x357 = INT32_MIN;
	static int32_t x358 = INT32_MAX;
	int8_t x359 = INT8_MIN;
	volatile uint16_t x360 = 3U;

	t81 = (((x357+x358)^x359)&x360);

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MIN;
	uint64_t x362 = 6316235861LLU;
	static uint64_t x364 = UINT64_MAX;
	volatile uint64_t t82 = 17232876LLU;

	t82 = (((x361+x362)^x363)&x364);

	if (t82 != 18446744067393297365LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x365 = 1;
	int16_t x366 = INT16_MIN;
	uint16_t x367 = 1U;
	static volatile int64_t x368 = 460866146139LL;
	volatile int64_t t83 = 200547996LL;

	t83 = (((x365+x366)^x367)&x368);

	if (t83 != 460866125824LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x369 = 1U;
	int8_t x370 = -21;
	int64_t x371 = 1043420904LL;
	uint64_t x372 = 10156510LLU;
	volatile uint64_t t84 = 956LLU;

	t84 = (((x369+x370)^x371)&x372);

	if (t84 != 9087236LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -377;
	uint16_t x374 = UINT16_MAX;
	int32_t x375 = 3;

	t85 = (((x373+x374)^x375)&x376);

	if (t85 != 62597LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x377 = 0U;
	static volatile int32_t x378 = INT32_MIN;
	uint16_t x379 = UINT16_MAX;
	static int8_t x380 = INT8_MAX;
	int32_t t86 = -59637302;

	t86 = (((x377+x378)^x379)&x380);

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x381 = INT16_MIN;
	uint8_t x382 = UINT8_MAX;
	static int16_t x383 = INT16_MIN;
	uint32_t x384 = UINT32_MAX;

	t87 = (((x381+x382)^x383)&x384);

	if (t87 != 255U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x385 = -160;
	static int64_t x387 = INT64_MIN;
	uint32_t x388 = 171814933U;
	int64_t t88 = -8670150043338736LL;

	t88 = (((x385+x386)^x387)&x388);

	if (t88 != 171814913LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x389 = 4742U;
	int64_t x390 = INT64_MIN;

	t89 = (((x389+x390)^x391)&x392);

	if (t89 != 49LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x393 = 39U;
	int16_t x394 = INT16_MIN;
	volatile int8_t x396 = INT8_MAX;
	volatile int32_t t90 = -23370001;

	t90 = (((x393+x394)^x395)&x396);

	if (t90 != 88) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	int64_t x400 = INT64_MIN;

	t91 = (((x397+x398)^x399)&x400);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = -1;
	volatile int16_t x402 = 1;
	int8_t x403 = -1;
	int32_t x404 = INT32_MIN;
	int32_t t92 = INT32_MIN;

	t92 = (((x401+x402)^x403)&x404);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x405 = -1;
	int8_t x406 = -1;
	static int16_t x407 = INT16_MAX;
	int64_t x408 = INT64_MAX;
	int64_t t93 = 1082183677946LL;

	t93 = (((x405+x406)^x407)&x408);

	if (t93 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x409 = UINT64_MAX;
	volatile int32_t x410 = INT32_MIN;
	volatile int16_t x411 = INT16_MAX;
	int16_t x412 = 0;
	uint64_t t94 = 20415727907505LLU;

	t94 = (((x409+x410)^x411)&x412);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x413 = 458U;
	static volatile int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MIN;
	int32_t t95 = 3945;

	t95 = (((x413+x414)^x415)&x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int32_t x418 = INT32_MAX;
	int16_t x419 = 1439;
	volatile uint64_t t96 = 1914802886308010422LLU;

	t96 = (((x417+x418)^x419)&x420);

	if (t96 != 55840LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x422 = 437628LLU;
	int64_t x423 = -1LL;
	volatile uint64_t t97 = 43LLU;

	t97 = (((x421+x422)^x423)&x424);

	if (t97 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x425 = 6760153775526LLU;
	int16_t x426 = 15;
	int8_t x427 = 0;
	volatile int8_t x428 = -1;

	t98 = (((x425+x426)^x427)&x428);

	if (t98 != 6760153775541LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x429 = UINT64_MAX;
	int64_t x431 = -1LL;
	static int8_t x432 = INT8_MAX;
	static volatile uint64_t t99 = 4068513562LLU;

	t99 = (((x429+x430)^x431)&x432);

	if (t99 != 127LLU) { NG(); } else { ; }
	
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

