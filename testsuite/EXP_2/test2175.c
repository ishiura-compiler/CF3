#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
int8_t x5 = 3;
static volatile int32_t t1 = 0;
static uint32_t x9 = 126265U;
volatile uint64_t t3 = 2016575503373LLU;
int8_t x19 = INT8_MAX;
static int64_t x35 = -1LL;
volatile uint32_t x47 = UINT32_MAX;
int8_t x53 = 4;
int32_t x57 = INT32_MIN;
volatile int64_t t14 = -194177774104288871LL;
static int8_t x65 = INT8_MIN;
static int16_t x67 = -1;
int16_t x71 = INT16_MIN;
static uint64_t t17 = 301046363398LLU;
int64_t x81 = -500LL;
int64_t x85 = INT64_MIN;
volatile int64_t t20 = 1LL;
uint32_t t21 = 1U;
static uint64_t x94 = 15LLU;
int8_t x96 = INT8_MIN;
uint64_t x105 = 485936714356945230LLU;
int16_t x114 = INT16_MIN;
static int64_t x121 = 3LL;
int64_t x122 = INT64_MIN;
int64_t x124 = -1LL;
int64_t x125 = INT64_MIN;
uint8_t x130 = UINT8_MAX;
uint64_t t31 = 7279710954LLU;
volatile uint64_t t32 = 33685139688839LLU;
uint16_t x138 = 1203U;
int16_t x145 = INT16_MAX;
static uint64_t x146 = 743046581LLU;
static uint16_t x147 = 1760U;
volatile uint64_t t35 = 16046881755LLU;
int64_t x154 = INT64_MIN;
int64_t x155 = INT64_MIN;
int8_t x162 = INT8_MAX;
static uint32_t x164 = 3884U;
int64_t x168 = 62159LL;
static uint64_t t43 = 1205839924949186LLU;
int64_t x183 = -1LL;
volatile uint64_t t44 = 13597715859LLU;
uint64_t x187 = 5000643378883689LLU;
volatile uint64_t t45 = 4LLU;
static int16_t x190 = -1;
volatile int64_t x192 = -1LL;
int8_t x206 = -1;
int32_t x213 = INT32_MIN;
volatile uint64_t x214 = UINT64_MAX;
uint64_t x217 = UINT64_MAX;
int16_t x220 = INT16_MIN;
uint64_t x224 = 247685901714388194LLU;
uint64_t t54 = 44141031LLU;
static int8_t x225 = -1;
int64_t x229 = -1LL;
int32_t x232 = -28;
volatile uint64_t t57 = 9767840456156LLU;
uint64_t x238 = UINT64_MAX;
static uint16_t x239 = UINT16_MAX;
int16_t x240 = INT16_MIN;
int64_t x246 = 29560962258LL;
uint16_t x247 = 2U;
volatile uint64_t t63 = 44965071LLU;
int32_t x263 = -1;
int8_t x265 = INT8_MIN;
uint64_t t66 = 12826548023841874LLU;
int64_t x275 = INT64_MAX;
int32_t x276 = 121135;
volatile int64_t t67 = -28232242LL;
int16_t x279 = -113;
volatile int64_t t68 = -979LL;
static uint16_t x284 = 1U;
int16_t x285 = 1009;
static int8_t x288 = -1;
int64_t x295 = INT64_MIN;
int64_t t72 = -44387449648456LL;
volatile int64_t x301 = -1LL;
int16_t x305 = INT16_MAX;
uint16_t x307 = 3U;
int32_t x310 = INT32_MAX;
static int32_t x311 = 119872099;
uint64_t t78 = 26471224953489LLU;
int32_t x324 = INT32_MIN;
static int32_t t79 = -1683627;
int32_t x326 = -1;
uint64_t x331 = 1697416520068LLU;
volatile int64_t t82 = 13385287891LL;
static int16_t x337 = INT16_MIN;
int16_t x340 = INT16_MIN;
volatile uint8_t x342 = 36U;
uint64_t x344 = 449396653LLU;
int32_t x345 = INT32_MIN;
volatile int8_t x353 = -1;
volatile uint8_t x358 = UINT8_MAX;
int8_t x376 = INT8_MIN;
int16_t x381 = INT16_MAX;
volatile uint32_t x384 = 777216U;
uint16_t x392 = 11893U;
volatile int8_t x398 = INT8_MAX;
int8_t x402 = INT8_MIN;
int32_t t99 = -6736;


void f0(void) {
	int16_t x2 = -1;
	uint8_t x3 = 83U;
	static volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 522;

	t0 = ((x1|(x2^x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 1788765;
	static int32_t x7 = INT32_MIN;
	static int8_t x8 = INT8_MIN;

	t1 = ((x5|(x6^x7))/x8);

	if (t1 != 16763241) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 438U;
	static int8_t x11 = -1;
	uint8_t x12 = 6U;
	uint32_t t2 = 17098U;

	t2 = ((x9|(x10^x11))/x12);

	if (t2 != 715827860U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 5U;
	uint64_t x14 = UINT64_MAX;
	int64_t x15 = INT64_MIN;
	static volatile int64_t x16 = -1LL;

	t3 = ((x13|(x14^x15))/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile uint32_t x18 = 904809U;
	uint8_t x20 = UINT8_MAX;
	volatile int64_t t4 = 1395048441031LL;

	t4 = ((x17|(x18^x19))/x20);

	if (t4 != -36170086419034788LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 16692352709969040LL;
	int32_t x22 = -8129;
	static uint64_t x23 = UINT64_MAX;
	volatile int64_t x24 = -3868373LL;
	volatile uint64_t t5 = 124067775LLU;

	t5 = ((x21|(x22^x23))/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int32_t x26 = INT32_MAX;
	int64_t x27 = 352900679068790881LL;
	static int64_t x28 = -238022633237982984LL;
	volatile int64_t t6 = -70237526611721LL;

	t6 = ((x25|(x26^x27))/x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -12883047;
	int32_t x30 = INT32_MIN;
	int16_t x31 = 4;
	static int64_t x32 = -1LL;
	int64_t t7 = 15732LL;

	t7 = ((x29|(x30^x31))/x32);

	if (t7 != 12883043LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x33 = 3098U;
	int16_t x34 = -1;
	int32_t x36 = -19660449;
	volatile int64_t t8 = -334243LL;

	t8 = ((x33|(x34^x35))/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	uint64_t x42 = UINT64_MAX;
	static int64_t x43 = INT64_MIN;
	int64_t x44 = -14212LL;
	uint64_t t9 = 3LLU;

	t9 = ((x41|(x42^x43))/x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	volatile int8_t x46 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;
	volatile uint32_t t10 = 483787U;

	t10 = ((x45|(x46^x47))/x48);

	if (t10 != 16842881U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 3U;
	static int32_t x50 = 4001827;
	int32_t x51 = -1;
	uint64_t x52 = UINT64_MAX;
	static uint64_t t11 = 132LLU;

	t11 = ((x49|(x50^x51))/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x54 = 3077U;
	static int8_t x55 = INT8_MAX;
	volatile uint8_t x56 = 2U;
	static int32_t t12 = -286;

	t12 = ((x53|(x54^x55))/x56);

	if (t12 != 1599) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x58 = 3U;
	static int16_t x59 = INT16_MIN;
	static int64_t x60 = -147865288637141LL;
	int64_t t13 = -4LL;

	t13 = ((x57|(x58^x59))/x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	int64_t x62 = INT64_MAX;
	volatile int64_t x63 = -1LL;
	int8_t x64 = 3;

	t14 = ((x61|(x62^x63))/x64);

	if (t14 != -3074457345618258560LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x66 = INT32_MIN;
	int32_t x68 = -1;
	int32_t t15 = -504;

	t15 = ((x65|(x66^x67))/x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x69 = 451U;
	volatile int64_t x70 = -1LL;
	uint8_t x72 = 8U;
	volatile int64_t t16 = 2822284532923303394LL;

	t16 = ((x69|(x70^x71))/x72);

	if (t16 != 4095LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MAX;
	int32_t x74 = 1957;
	uint64_t x75 = 210395039094446899LLU;
	int32_t x76 = INT32_MIN;

	t17 = ((x73|(x74^x75))/x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 62423601LLU;
	int64_t x78 = INT64_MIN;
	int64_t x79 = 1844604603299062393LL;
	int32_t x80 = INT32_MIN;
	volatile uint64_t t18 = 0LLU;

	t18 = ((x77|(x78^x79))/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = -1LL;
	volatile uint64_t x83 = 198382LLU;
	volatile uint64_t x84 = UINT64_MAX;
	uint64_t t19 = 4467176524013475008LLU;

	t19 = ((x81|(x82^x83))/x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x86 = UINT8_MAX;
	volatile int32_t x87 = 52132;
	volatile uint32_t x88 = 843537U;

	t20 = ((x85|(x86^x87))/x88);

	if (t20 != -10934164164529LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = 6U;
	static uint32_t x90 = 58390827U;
	static int16_t x91 = -1;
	uint8_t x92 = 126U;

	t21 = ((x89|(x90^x91))/x92);

	if (t21 != 33623622U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	uint64_t t22 = 9LLU;

	t22 = ((x93|(x94^x95))/x96);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	static int32_t x98 = 30697058;
	int8_t x99 = 1;
	int16_t x100 = 3879;
	int64_t t23 = 869LL;

	t23 = ((x97|(x98^x99))/x100);

	if (t23 != -2377770568915720LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 1717LLU;
	int32_t x102 = -1;
	uint32_t x103 = 1875329U;
	uint16_t x104 = UINT16_MAX;
	uint64_t t24 = 3458861609646382LLU;

	t24 = ((x101|(x102^x103))/x104);

	if (t24 != 65508LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x106 = 12278322U;
	int64_t x107 = -1LL;
	int16_t x108 = 569;
	uint64_t t25 = 478066309LLU;

	t25 = ((x105|(x106^x107))/x108);

	if (t25 != 32419585366795660LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	static int64_t x110 = -1LL;
	int16_t x111 = INT16_MIN;
	int8_t x112 = 1;
	int64_t t26 = 0LL;

	t26 = ((x109|(x110^x111))/x112);

	if (t26 != 65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x113 = 127U;
	int8_t x115 = INT8_MAX;
	volatile uint32_t x116 = 23759420U;
	uint32_t t27 = 49924070U;

	t27 = ((x113|(x114^x115))/x116);

	if (t27 != 180U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	static volatile uint64_t x118 = UINT64_MAX;
	int32_t x119 = 5928210;
	volatile int32_t x120 = INT32_MAX;
	volatile uint64_t t28 = 1467228111079992628LLU;

	t28 = ((x117|(x118^x119))/x120);

	if (t28 != 8589934595LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x123 = UINT32_MAX;
	volatile int64_t t29 = -185685LL;

	t29 = ((x121|(x122^x123))/x124);

	if (t29 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x126 = INT8_MAX;
	int16_t x127 = -1;
	int16_t x128 = -1;
	volatile int64_t t30 = 830634781LL;

	t30 = ((x125|(x126^x127))/x128);

	if (t30 != 128LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x129 = UINT64_MAX;
	uint32_t x131 = 26532185U;
	static uint32_t x132 = UINT32_MAX;

	t31 = ((x129|(x130^x131))/x132);

	if (t31 != 4294967297LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x133 = INT64_MAX;
	uint64_t x134 = 177479240425769552LLU;
	volatile uint16_t x135 = 13884U;
	int64_t x136 = INT64_MIN;

	t32 = ((x133|(x134^x135))/x136);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	int16_t x139 = -1;
	int64_t x140 = 528667LL;
	static int64_t t33 = -28748146316LL;

	t33 = ((x137|(x138^x139))/x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	volatile int16_t x142 = INT16_MIN;
	static volatile int8_t x143 = INT8_MAX;
	volatile int32_t x144 = -3560;
	int32_t t34 = -225;

	t34 = ((x141|(x142^x143))/x144);

	if (t34 != 9) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x148 = 1;

	t35 = ((x145|(x146^x147))/x148);

	if (t35 != 743047167LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 124U;
	uint8_t x150 = 40U;
	int32_t x151 = -1;
	volatile int64_t x152 = INT64_MAX;
	int64_t t36 = 680807LL;

	t36 = ((x149|(x150^x151))/x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 30648U;
	int64_t x156 = -2LL;
	int64_t t37 = -7058735638136017LL;

	t37 = ((x153|(x154^x155))/x156);

	if (t37 != -15324LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 1806774635407689LLU;
	volatile int64_t x158 = -1071646113600LL;
	uint64_t x159 = 138943001951724639LLU;
	uint32_t x160 = UINT32_MAX;
	static uint64_t t38 = 38747204242857LLU;

	t38 = ((x157|(x158^x159))/x160);

	if (t38 != 4262882283LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x161 = 6257U;
	volatile int32_t x163 = 1;
	uint32_t t39 = 3U;

	t39 = ((x161|(x162^x163))/x164);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = 0;
	uint64_t x166 = 687316LLU;
	uint8_t x167 = 2U;
	uint64_t t40 = 111221163227LLU;

	t40 = ((x165|(x166^x167))/x168);

	if (t40 != 11LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x169 = UINT32_MAX;
	uint32_t x170 = 194099582U;
	uint16_t x171 = 20U;
	uint8_t x172 = 104U;
	static uint32_t t41 = 15277603U;

	t41 = ((x169|(x170^x171))/x172);

	if (t41 != 41297762U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1;
	volatile int8_t x174 = INT8_MIN;
	volatile int32_t x175 = INT32_MIN;
	int8_t x176 = 4;
	static int32_t t42 = -2;

	t42 = ((x173|(x174^x175))/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -26;
	uint64_t x178 = 27377857742324235LLU;
	static int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MIN;

	t43 = ((x177|(x178^x179))/x180);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x181 = UINT64_MAX;
	uint8_t x182 = 18U;
	int8_t x184 = INT8_MAX;

	t44 = ((x181|(x182^x183))/x184);

	if (t44 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = UINT32_MAX;
	static int64_t x186 = INT64_MIN;
	uint32_t x188 = 1915060061U;

	t45 = ((x185|(x186^x187))/x188);

	if (t45 != 4818842433LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = -1LL;
	static int8_t x191 = INT8_MAX;
	int64_t t46 = -1LL;

	t46 = ((x189|(x190^x191))/x192);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MAX;
	static int64_t x194 = 3351056885LL;
	int8_t x195 = INT8_MIN;
	static int32_t x196 = INT32_MIN;
	int64_t t47 = -1445590550273007587LL;

	t47 = ((x193|(x194^x195))/x196);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 2U;
	int16_t x198 = INT16_MIN;
	volatile int32_t x199 = INT32_MAX;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t48 = -764400;

	t48 = ((x197|(x198^x199))/x200);

	if (t48 != 16776960) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MIN;
	volatile int64_t x204 = INT64_MIN;
	volatile int64_t t49 = 65344545LL;

	t49 = ((x201|(x202^x203))/x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x205 = 0U;
	int32_t x207 = -1;
	int64_t x208 = -12728LL;
	static int64_t t50 = 57403LL;

	t50 = ((x205|(x206^x207))/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x209 = INT8_MIN;
	uint8_t x210 = UINT8_MAX;
	static volatile int16_t x211 = INT16_MIN;
	static uint64_t x212 = 88840319820843319LLU;
	volatile uint64_t t51 = 20LLU;

	t51 = ((x209|(x210^x211))/x212);

	if (t51 != 207LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x215 = INT32_MIN;
	static volatile int8_t x216 = INT8_MIN;
	static volatile uint64_t t52 = 4564796044400174LLU;

	t52 = ((x213|(x214^x215))/x216);

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x218 = 41;
	uint16_t x219 = UINT16_MAX;
	static volatile uint64_t t53 = 4486921857LLU;

	t53 = ((x217|(x218^x219))/x220);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = 13436LL;
	volatile uint8_t x222 = 1U;
	uint8_t x223 = UINT8_MAX;

	t54 = ((x221|(x222^x223))/x224);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x226 = INT8_MIN;
	volatile int64_t x227 = INT64_MAX;
	int16_t x228 = INT16_MAX;
	int64_t t55 = 48453LL;

	t55 = ((x225|(x226^x227))/x228);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x230 = 49649;
	int32_t x231 = INT32_MIN;
	static int64_t t56 = 0LL;

	t56 = ((x229|(x230^x231))/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 62308992810412360LLU;
	int16_t x234 = INT16_MAX;
	int16_t x235 = INT16_MIN;
	int64_t x236 = INT64_MAX;

	t57 = ((x233|(x234^x235))/x236);

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x237 = UINT16_MAX;
	uint64_t t58 = 3392542677396087LLU;

	t58 = ((x237|(x238^x239))/x240);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = 12;
	int64_t x243 = INT64_MIN;
	static int16_t x244 = -47;
	static uint64_t t59 = 7589412LLU;

	t59 = ((x241|(x242^x243))/x244);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	int16_t x248 = INT16_MIN;
	int64_t t60 = 143601LL;

	t60 = ((x245|(x246^x247))/x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = 22;
	uint16_t x250 = 32U;
	uint32_t x251 = 0U;
	uint64_t x252 = 69117130257027LLU;
	uint64_t t61 = 201598LLU;

	t61 = ((x249|(x250^x251))/x252);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = 2936615U;
	int64_t x254 = INT64_MIN;
	uint16_t x255 = 1U;
	static int16_t x256 = INT16_MIN;
	static int64_t t62 = 84LL;

	t62 = ((x253|(x254^x255))/x256);

	if (t62 != 281474976710566LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int16_t x258 = -1;
	int8_t x259 = -17;
	uint8_t x260 = UINT8_MAX;

	t63 = ((x257|(x258^x259))/x260);

	if (t63 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -1;
	int16_t x262 = 49;
	int8_t x264 = 1;
	volatile int32_t t64 = -1;

	t64 = ((x261|(x262^x263))/x264);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = 2U;
	uint32_t t65 = 230213330U;

	t65 = ((x265|(x266^x267))/x268);

	if (t65 != 2147483584U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MIN;
	uint64_t x270 = 753345676272833736LLU;
	int32_t x271 = INT32_MIN;
	volatile uint8_t x272 = UINT8_MAX;

	t66 = ((x269|(x270^x271))/x272);

	if (t66 != 69385876066710601LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -1;
	uint32_t x274 = 1775633U;

	t67 = ((x273|(x274^x275))/x276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = INT64_MAX;
	static uint32_t x278 = 22U;
	int32_t x280 = -1;

	t68 = ((x277|(x278^x279))/x280);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x281 = 177534639U;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MAX;
	volatile int64_t t69 = -134345797486LL;

	t69 = ((x281|(x282^x283))/x284);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x286 = 41;
	int64_t x287 = -1LL;
	int64_t t70 = 1583588487LL;

	t70 = ((x285|(x286^x287))/x288);

	if (t70 != 9LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x289 = UINT8_MAX;
	uint8_t x290 = 1U;
	uint8_t x291 = 28U;
	uint32_t x292 = 844508854U;
	volatile uint32_t t71 = 32826U;

	t71 = ((x289|(x290^x291))/x292);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = 2;
	volatile int32_t x294 = -10841111;
	int16_t x296 = INT16_MIN;

	t72 = ((x293|(x294^x295))/x296);

	if (t72 != -281474976710325LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x297 = INT64_MIN;
	int16_t x298 = -242;
	int8_t x299 = INT8_MIN;
	int32_t x300 = -1;
	int64_t t73 = 26267LL;

	t73 = ((x297|(x298^x299))/x300);

	if (t73 != 9223372036854775666LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x302 = 34U;
	volatile int16_t x303 = INT16_MIN;
	int64_t x304 = 12LL;
	int64_t t74 = -17987596LL;

	t74 = ((x301|(x302^x303))/x304);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x306 = 19378U;
	volatile int64_t x308 = -1LL;
	volatile int64_t t75 = 40620345150593LL;

	t75 = ((x305|(x306^x307))/x308);

	if (t75 != -32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x309 = INT8_MAX;
	int8_t x312 = INT8_MAX;
	int32_t t76 = -2163;

	t76 = ((x309|(x310^x311))/x312);

	if (t76 != 15965446) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x313 = 1546734LLU;
	int8_t x314 = 1;
	int64_t x315 = 3LL;
	uint16_t x316 = UINT16_MAX;
	volatile uint64_t t77 = 11644920LLU;

	t77 = ((x313|(x314^x315))/x316);

	if (t77 != 23LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x317 = 54158613LLU;
	int32_t x318 = -8598;
	int64_t x319 = -1LL;
	uint32_t x320 = 34440950U;

	t78 = ((x317|(x318^x319))/x320);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x321 = UINT8_MAX;
	int32_t x322 = INT32_MAX;
	volatile int32_t x323 = INT32_MIN;

	t79 = ((x321|(x322^x323))/x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MAX;
	int32_t x327 = 3;
	uint16_t x328 = 129U;
	int32_t t80 = 1;

	t80 = ((x325|(x326^x327))/x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x329 = INT16_MIN;
	static uint32_t x330 = 31U;
	uint16_t x332 = 200U;
	volatile uint64_t t81 = 1895799LLU;

	t81 = ((x329|(x330^x331))/x332);

	if (t81 != 92233720368547637LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x333 = UINT32_MAX;
	static int8_t x334 = INT8_MIN;
	volatile int8_t x335 = -3;
	int64_t x336 = INT64_MIN;

	t82 = ((x333|(x334^x335))/x336);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x338 = 78;
	static int16_t x339 = INT16_MIN;
	int32_t t83 = 2045004;

	t83 = ((x337|(x338^x339))/x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x341 = 306LL;
	static uint64_t x343 = UINT64_MAX;
	uint64_t t84 = 7578390771023003711LLU;

	t84 = ((x341|(x342^x343))/x344);

	if (t84 != 41047800313LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x346 = UINT64_MAX;
	uint8_t x347 = 3U;
	int16_t x348 = -97;
	volatile uint64_t t85 = 47090846731866LLU;

	t85 = ((x345|(x346^x347))/x348);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x349 = INT64_MIN;
	uint64_t x350 = UINT64_MAX;
	volatile int32_t x351 = INT32_MIN;
	uint64_t x352 = 75763876LLU;
	uint64_t t86 = 1783745752244LLU;

	t86 = ((x349|(x350^x351))/x352);

	if (t86 != 121738386761LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x354 = INT32_MIN;
	uint8_t x355 = UINT8_MAX;
	static int16_t x356 = INT16_MAX;
	static int32_t t87 = 1859843;

	t87 = ((x353|(x354^x355))/x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x357 = UINT8_MAX;
	volatile int32_t x359 = INT32_MIN;
	static uint32_t x360 = 809133U;
	volatile uint32_t t88 = 11U;

	t88 = ((x357|(x358^x359))/x360);

	if (t88 != 2654U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x361 = 6;
	int64_t x362 = -6262485LL;
	static uint64_t x363 = 235329772631089460LLU;
	static uint32_t x364 = 16U;
	uint64_t t89 = 31236028555853325LLU;

	t89 = ((x361|(x362^x363))/x364);

	if (t89 != 1138213393817270529LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x365 = 107U;
	static volatile uint64_t x366 = 40LLU;
	int16_t x367 = INT16_MIN;
	int16_t x368 = -1;
	uint64_t t90 = 840LLU;

	t90 = ((x365|(x366^x367))/x368);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = -1962362;
	int32_t x370 = INT32_MAX;
	uint64_t x371 = 2061813798LLU;
	static uint8_t x372 = UINT8_MAX;
	uint64_t t91 = 2268309160278973171LLU;

	t91 = ((x369|(x370^x371))/x372);

	if (t91 != 72340172838075452LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = -28;
	static int32_t x374 = -1;
	static volatile int64_t x375 = INT64_MIN;
	volatile int64_t t92 = 19133LL;

	t92 = ((x373|(x374^x375))/x376);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = INT16_MIN;
	uint8_t x378 = 0U;
	int8_t x379 = INT8_MIN;
	static int8_t x380 = -4;
	int32_t t93 = -469;

	t93 = ((x377|(x378^x379))/x380);

	if (t93 != 32) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x382 = INT64_MAX;
	int64_t x383 = INT64_MIN;
	volatile int64_t t94 = 111754LL;

	t94 = ((x381|(x382^x383))/x384);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x385 = -1;
	uint16_t x386 = UINT16_MAX;
	volatile int32_t x387 = -16091;
	int16_t x388 = -163;
	volatile int32_t t95 = -1;

	t95 = ((x385|(x386^x387))/x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = 0;
	volatile int32_t x390 = -1;
	uint8_t x391 = 14U;
	volatile int32_t t96 = -1;

	t96 = ((x389|(x390^x391))/x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x393 = INT64_MIN;
	uint16_t x394 = UINT16_MAX;
	volatile uint16_t x395 = 4109U;
	volatile int64_t x396 = -15LL;
	static volatile int64_t t97 = 131413LL;

	t97 = ((x393|(x394^x395))/x396);

	if (t97 != 614891469123647625LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x397 = INT8_MIN;
	uint8_t x399 = UINT8_MAX;
	static int64_t x400 = -1LL;
	volatile int64_t t98 = 4300765074221224LL;

	t98 = ((x397|(x398^x399))/x400);

	if (t98 != 128LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x401 = INT32_MIN;
	int8_t x403 = 2;
	int8_t x404 = -14;

	t99 = ((x401|(x402^x403))/x404);

	if (t99 != 9) { NG(); } else { ; }
	
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

