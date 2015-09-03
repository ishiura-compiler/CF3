#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
volatile int64_t t0 = -4283384962507089369LL;
int64_t x6 = 939LL;
static volatile int64_t t1 = 3758901819220154132LL;
uint16_t x9 = 10078U;
static uint16_t x10 = UINT16_MAX;
int32_t x17 = INT32_MIN;
uint64_t t3 = 2286904472645550372LLU;
int16_t x22 = INT16_MIN;
volatile int16_t x25 = 0;
static int32_t x27 = 48967;
volatile int8_t x29 = INT8_MIN;
static volatile int64_t x30 = INT64_MIN;
int32_t x33 = 7250;
static int8_t x36 = INT8_MIN;
int32_t x41 = INT32_MIN;
int16_t x48 = -3;
volatile uint32_t t11 = 4835881U;
uint32_t x58 = 106851U;
volatile uint32_t t14 = 117600U;
int64_t t16 = -11879334560709825LL;
int8_t x77 = -1;
int64_t x90 = -2388765823229LL;
static uint64_t x94 = UINT64_MAX;
static int64_t x96 = INT64_MIN;
volatile uint64_t t21 = 59912676914652619LLU;
int16_t x97 = INT16_MIN;
uint8_t x98 = 0U;
uint16_t x102 = UINT16_MAX;
static uint64_t x105 = UINT64_MAX;
int32_t x108 = 2324995;
volatile int32_t x109 = 12203;
volatile int32_t t25 = -274063;
volatile int32_t x113 = INT32_MIN;
uint64_t x119 = 81058208734LLU;
static int64_t x122 = INT64_MIN;
int32_t x124 = INT32_MIN;
int64_t t28 = 4227500865LL;
volatile int16_t x125 = INT16_MIN;
volatile int64_t t29 = 8287382436406125LL;
uint16_t x130 = 1821U;
int8_t x141 = 0;
int8_t x143 = INT8_MIN;
int8_t x144 = 0;
static uint64_t x152 = 757762249768LLU;
int8_t x162 = 3;
static int8_t x166 = -1;
int64_t t39 = 19626191LL;
uint16_t x173 = 91U;
static volatile int16_t x178 = INT16_MIN;
uint64_t x179 = UINT64_MAX;
int64_t x180 = -1LL;
volatile uint64_t t41 = 57813016412899LLU;
int16_t x187 = -2;
volatile uint32_t x191 = UINT32_MAX;
volatile uint64_t x194 = 354465730LLU;
int32_t x195 = INT32_MIN;
static volatile uint64_t t45 = 4175217067883065LLU;
static int8_t x202 = INT8_MAX;
uint16_t x203 = 3U;
int64_t t46 = -158119740865LL;
volatile int8_t x205 = INT8_MAX;
static int8_t x208 = 1;
uint8_t x210 = 2U;
volatile uint32_t t48 = 899U;
int8_t x213 = INT8_MIN;
int16_t x214 = -1;
uint64_t x216 = UINT64_MAX;
int32_t x224 = -1;
static uint64_t x234 = 1869014153702LLU;
static int8_t x236 = -1;
static volatile uint64_t t55 = 9150324LLU;
volatile int16_t x248 = 1406;
int8_t x263 = -24;
volatile uint64_t t59 = 350366487775913477LLU;
static int8_t x275 = -54;
volatile int16_t x278 = INT16_MIN;
uint32_t x287 = 1216527U;
volatile int8_t x294 = INT8_MIN;
int64_t t66 = 90946356995LL;
volatile int16_t x298 = 3937;
uint64_t x299 = 54249885506831LLU;
int64_t x300 = -1LL;
int8_t x305 = -1;
volatile uint64_t x306 = 6577103908LLU;
volatile uint16_t x311 = 24222U;
static volatile uint64_t t69 = 3845231LLU;
volatile uint32_t x313 = 162527233U;
volatile int8_t x314 = -1;
volatile int16_t x319 = -1;
volatile int64_t t71 = 146042LL;
static int16_t x333 = -1;
int8_t x335 = -1;
volatile int32_t t74 = 363058;
volatile int16_t x338 = -1;
static uint64_t x346 = 1763353126LLU;
uint8_t x359 = 7U;
static uint16_t x376 = 1U;
int16_t x378 = -279;
int16_t x380 = 3;
int16_t x386 = INT16_MIN;
volatile int32_t t84 = -25;
static int64_t x394 = -1LL;
int16_t x401 = -1059;
static uint16_t x402 = UINT16_MAX;
uint64_t x408 = UINT64_MAX;
int16_t x410 = INT16_MIN;
uint32_t t88 = 3510U;
static int16_t x423 = -1;
volatile int64_t t91 = INT64_MAX;
static volatile int8_t x427 = -1;
static uint64_t x433 = 1097307027779582LLU;
int8_t x440 = INT8_MIN;
int64_t x456 = INT64_MAX;


void f0(void) {
	int32_t x1 = -610313;
	int64_t x2 = -2728301232LL;
	int32_t x4 = 721233466;

	t0 = (x1-((x2%x3)*x4));

	if (t0 != 16235685942813LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -45438708LL;
	int8_t x7 = INT8_MAX;
	int16_t x8 = 99;

	t1 = (x5-((x6%x7)*x8));

	if (t1 != -45443658LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x11 = UINT8_MAX;
	int8_t x12 = -31;
	volatile int32_t t2 = -913;

	t2 = (x9-((x10%x11)*x12));

	if (t2 != 10078) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MIN;
	static int64_t x19 = -1LL;
	uint64_t x20 = 5343960069836969909LLU;

	t3 = (x17-((x18%x19)*x20));

	if (t3 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 0LLU;
	static uint64_t x23 = 232722015893559864LLU;
	volatile int32_t x24 = -1;
	volatile uint64_t t4 = 9283LLU;

	t4 = (x21-((x22%x23)*x24));

	if (t4 != 61704818118289592LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x26 = INT64_MAX;
	volatile int16_t x28 = INT16_MAX;
	static int64_t t5 = 3665386781LL;

	t5 = (x25-((x26%x27)*x28));

	if (t5 != -788374020LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x31 = -1;
	uint16_t x32 = 459U;
	int64_t t6 = 2410798795LL;

	t6 = (x29-((x30%x31)*x32));

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x34 = INT32_MAX;
	uint32_t x35 = UINT32_MAX;
	volatile uint32_t t7 = 592110348U;

	t7 = (x33-((x34%x35)*x36));

	if (t7 != 7122U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 8093004075557LL;
	int32_t x38 = INT32_MAX;
	int8_t x39 = INT8_MAX;
	uint8_t x40 = 43U;
	volatile int64_t t8 = -7761022LL;

	t8 = (x37-((x38%x39)*x40));

	if (t8 != 8093004075256LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = 576;
	int16_t x43 = 466;
	volatile uint32_t x44 = 353U;
	static uint32_t t9 = 4178869U;

	t9 = (x41-((x42%x43)*x44));

	if (t9 != 2147444818U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	volatile uint8_t x46 = 2U;
	volatile uint8_t x47 = UINT8_MAX;
	volatile int64_t t10 = 662LL;

	t10 = (x45-((x46%x47)*x48));

	if (t10 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	uint32_t x50 = 164U;
	uint8_t x51 = UINT8_MAX;
	int8_t x52 = INT8_MIN;

	t11 = (x49-((x50%x51)*x52));

	if (t11 != 20991U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x53 = -511320;
	volatile int64_t x54 = -643667LL;
	uint32_t x55 = UINT32_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile int64_t t12 = -1451096311371102902LL;

	t12 = (x53-((x54%x55)*x56));

	if (t12 != 2764528713359445LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 373U;
	volatile int16_t x59 = INT16_MAX;
	static int16_t x60 = INT16_MIN;
	uint32_t t13 = 417028U;

	t13 = (x57-((x58%x59)*x60));

	if (t13 != 280166773U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 1U;
	int32_t x62 = INT32_MIN;
	static volatile uint16_t x63 = 29U;
	uint32_t x64 = 5445U;

	t14 = (x61-((x62%x63)*x64));

	if (t14 != 43561U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x65 = 883U;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = -1;
	uint32_t x68 = 12U;
	volatile uint64_t t15 = 12894LLU;

	t15 = (x65-((x66%x67)*x68));

	if (t15 != 883LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	int64_t x70 = 1LL;
	static int16_t x71 = -1;
	volatile uint32_t x72 = 2512U;

	t16 = (x69-((x70%x71)*x72));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = 0;
	int8_t x79 = -1;
	int16_t x80 = INT16_MIN;
	volatile int32_t t17 = -2030313;

	t17 = (x77-((x78%x79)*x80));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x81 = UINT32_MAX;
	static volatile int32_t x82 = INT32_MAX;
	static int32_t x83 = 17;
	static int16_t x84 = -10;
	uint32_t t18 = 77201U;

	t18 = (x81-((x82%x83)*x84));

	if (t18 != 79U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x85 = INT32_MAX;
	uint64_t x86 = 1758LLU;
	uint64_t x87 = 22598205LLU;
	int8_t x88 = INT8_MIN;
	uint64_t t19 = 45098982460623LLU;

	t19 = (x85-((x86%x87)*x88));

	if (t19 != 2147708671LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	uint64_t x91 = 25130LLU;
	int16_t x92 = INT16_MIN;
	uint64_t t20 = 8950652737936LLU;

	t20 = (x89-((x90%x91)*x92));

	if (t20 != 9223372036978868224LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x93 = 20337U;
	uint16_t x95 = 4U;

	t21 = (x93-((x94%x95)*x96));

	if (t21 != 9223372036854796145LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x99 = 6U;
	int8_t x100 = -1;
	uint32_t t22 = 10U;

	t22 = (x97-((x98%x99)*x100));

	if (t22 != 4294934528U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = -1LL;
	volatile int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MAX;
	static volatile int64_t t23 = 256050LL;

	t23 = (x101-((x102%x103)*x104));

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x106 = INT8_MIN;
	volatile int64_t x107 = 3LL;
	volatile uint64_t t24 = 987948697111LLU;

	t24 = (x105-((x106%x107)*x108));

	if (t24 != 4649989LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x110 = UINT8_MAX;
	static volatile uint8_t x111 = UINT8_MAX;
	int8_t x112 = -1;

	t25 = (x109-((x110%x111)*x112));

	if (t25 != 12203) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x114 = -1;
	int16_t x115 = -62;
	volatile uint32_t x116 = 152899U;
	volatile uint32_t t26 = 16U;

	t26 = (x113-((x114%x115)*x116));

	if (t26 != 2147636547U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	int8_t x118 = 1;
	int64_t x120 = INT64_MIN;
	volatile uint64_t t27 = 389LLU;

	t27 = (x117-((x118%x119)*x120));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MAX;
	static int64_t x123 = INT64_MIN;

	t28 = (x121-((x122%x123)*x124));

	if (t28 != 127LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	static int64_t x128 = INT64_MAX;

	t29 = (x125-((x126%x127)*x128));

	if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 3853254U;
	static int64_t x131 = -1LL;
	static volatile int32_t x132 = 52964865;
	volatile int64_t t30 = -916LL;

	t30 = (x129-((x130%x131)*x132));

	if (t30 != 3853254LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 1344184069182LLU;
	int32_t x134 = -1;
	volatile uint8_t x135 = 11U;
	volatile int8_t x136 = INT8_MAX;
	volatile uint64_t t31 = 2665979898747120761LLU;

	t31 = (x133-((x134%x135)*x136));

	if (t31 != 1344184069309LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 135615532773224LLU;
	int8_t x138 = INT8_MIN;
	volatile int8_t x139 = INT8_MIN;
	int16_t x140 = -1;
	static uint64_t t32 = 1175946035667LLU;

	t32 = (x137-((x138%x139)*x140));

	if (t32 != 135615532773224LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = 547661;
	int32_t t33 = -36;

	t33 = (x141-((x142%x143)*x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x149 = INT16_MIN;
	uint8_t x150 = 0U;
	int64_t x151 = INT64_MAX;
	uint64_t t34 = 1459867099987227LLU;

	t34 = (x149-((x150%x151)*x152));

	if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = -13628879;
	volatile uint16_t x154 = 6425U;
	int64_t x155 = -1LL;
	volatile int16_t x156 = -1;
	int64_t t35 = -30845126276135140LL;

	t35 = (x153-((x154%x155)*x156));

	if (t35 != -13628879LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = -1;
	volatile int16_t x158 = -1;
	int64_t x159 = INT64_MIN;
	int16_t x160 = -58;
	static volatile int64_t t36 = -2717368LL;

	t36 = (x157-((x158%x159)*x160));

	if (t36 != -59LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = -1;
	uint8_t x163 = 1U;
	int64_t x164 = INT64_MIN;
	int64_t t37 = 14LL;

	t37 = (x161-((x162%x163)*x164));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = -190;
	uint64_t x167 = 240743928633LLU;
	volatile int8_t x168 = INT8_MAX;
	uint64_t t38 = 16712325LLU;

	t38 = (x165-((x166%x167)*x168));

	if (t38 != 18446735925263441823LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 281193U;
	volatile int64_t x170 = -1920126859326LL;
	uint16_t x171 = 3926U;
	int64_t x172 = -117451649556LL;

	t39 = (x169-((x170%x171)*x172));

	if (t39 != -36644914380279LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x174 = 0U;
	static int64_t x175 = INT64_MIN;
	volatile int8_t x176 = 24;
	volatile int64_t t40 = 3698548LL;

	t40 = (x173-((x174%x175)*x176));

	if (t40 != 91LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 2U;

	t41 = (x177-((x178%x179)*x180));

	if (t41 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = -2372995606553255044LL;
	int8_t x182 = INT8_MIN;
	int32_t x183 = -1;
	int64_t x184 = INT64_MIN;
	static volatile int64_t t42 = 388403013147298982LL;

	t42 = (x181-((x182%x183)*x184));

	if (t42 != -2372995606553255044LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = 45;
	static int32_t x186 = 87152327;
	volatile uint64_t x188 = 144972LLU;
	static uint64_t t43 = 41992494LLU;

	t43 = (x185-((x186%x187)*x188));

	if (t43 != 18446744073709406689LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = 1U;
	int16_t x190 = -3;
	int16_t x192 = -1;
	static volatile uint32_t t44 = 57617422U;

	t44 = (x189-((x190%x191)*x192));

	if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x196 = INT64_MIN;

	t45 = (x193-((x194%x195)*x196));

	if (t45 != 65535LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x201 = -1LL;
	int32_t x204 = INT32_MIN;

	t46 = (x201-((x202%x203)*x204));

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x206 = INT8_MIN;
	int32_t x207 = -1;
	int32_t t47 = 1912;

	t47 = (x205-((x206%x207)*x208));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x209 = -5886;
	uint32_t x211 = UINT32_MAX;
	static int8_t x212 = -41;

	t48 = (x209-((x210%x211)*x212));

	if (t48 != 4294961492U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x215 = INT64_MAX;
	static volatile uint64_t t49 = 3LLU;

	t49 = (x213-((x214%x215)*x216));

	if (t49 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = INT8_MIN;
	static int64_t x222 = 3706128938858LL;
	uint16_t x223 = UINT16_MAX;
	volatile int64_t t50 = 282110474072516747LL;

	t50 = (x221-((x222%x223)*x224));

	if (t50 != 41160LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x225 = UINT32_MAX;
	int64_t x226 = -13014LL;
	uint64_t x227 = 3824781LLU;
	volatile int16_t x228 = INT16_MIN;
	static uint64_t t51 = 172781693639900647LLU;

	t51 = (x225-((x226%x227)*x228));

	if (t51 != 36986290175LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x229 = 137178079406394939LLU;
	int64_t x230 = 7370LL;
	uint32_t x231 = 64U;
	static int64_t x232 = -1LL;
	volatile uint64_t t52 = 112LLU;

	t52 = (x229-((x230%x231)*x232));

	if (t52 != 137178079406394949LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = INT64_MIN;
	int16_t x235 = -1;
	volatile uint64_t t53 = 2933LLU;

	t53 = (x233-((x234%x235)*x236));

	if (t53 != 9223373905868929510LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = 9979164124807690LLU;
	static uint32_t x238 = 1U;
	uint32_t x239 = 204U;
	int64_t x240 = -1LL;
	volatile uint64_t t54 = 47267LLU;

	t54 = (x237-((x238%x239)*x240));

	if (t54 != 9979164124807691LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MAX;
	uint32_t x243 = 876U;
	uint64_t x244 = 9955181LLU;

	t55 = (x241-((x242%x243)*x244));

	if (t55 != 9223372031767678317LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = -1LL;
	int16_t x246 = INT16_MIN;
	int64_t x247 = -1LL;
	volatile int64_t t56 = -4LL;

	t56 = (x245-((x246%x247)*x248));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = 208U;
	uint64_t x250 = UINT64_MAX;
	volatile int8_t x251 = -1;
	int16_t x252 = INT16_MIN;
	volatile uint64_t t57 = 29840105LLU;

	t57 = (x249-((x250%x251)*x252));

	if (t57 != 208LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x261 = 763541405LLU;
	uint16_t x262 = 1305U;
	volatile int8_t x264 = 0;
	static volatile uint64_t t58 = 348LLU;

	t58 = (x261-((x262%x263)*x264));

	if (t58 != 763541405LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x265 = 0;
	uint64_t x266 = UINT64_MAX;
	uint16_t x267 = 422U;
	static volatile int16_t x268 = INT16_MIN;

	t59 = (x265-((x266%x267)*x268));

	if (t59 != 9142272LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x269 = INT64_MAX;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = 1U;
	volatile int64_t x272 = 23637246850784LL;
	volatile int64_t t60 = INT64_MAX;

	t60 = (x269-((x270%x271)*x272));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = 148519614152033810LLU;
	static int64_t x274 = INT64_MAX;
	static int8_t x276 = 25;
	static uint64_t t61 = 53955949LLU;

	t61 = (x273-((x274%x275)*x276));

	if (t61 != 148519614152033185LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = UINT32_MAX;
	static volatile int32_t x279 = -34806081;
	static uint8_t x280 = UINT8_MAX;
	volatile uint32_t t62 = 6166073U;

	t62 = (x277-((x278%x279)*x280));

	if (t62 != 8355839U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x281 = 795U;
	volatile int16_t x282 = INT16_MAX;
	int16_t x283 = INT16_MAX;
	volatile uint16_t x284 = 73U;
	static uint32_t t63 = 0U;

	t63 = (x281-((x282%x283)*x284));

	if (t63 != 795U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = 3;
	int16_t x286 = -1;
	volatile uint32_t x288 = 199274U;
	uint32_t t64 = 1075561U;

	t64 = (x285-((x286%x287)*x288));

	if (t64 != 3907209993U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MAX;
	int16_t x291 = 2;
	uint64_t x292 = 5424143630085306LLU;
	volatile uint64_t t65 = 419719LLU;

	t65 = (x289-((x290%x291)*x292));

	if (t65 != 18441319930079433542LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = -1;
	int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MIN;

	t66 = (x293-((x294%x295)*x296));

	if (t66 != -4194305LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = -1;
	uint64_t t67 = 29267620077827672LLU;

	t67 = (x297-((x298%x299)*x300));

	if (t67 != 3936LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x307 = INT16_MIN;
	int64_t x308 = -175802350889226LL;
	uint64_t t68 = 186285LLU;

	t68 = (x305-((x306%x307)*x308));

	if (t68 != 9963784927194852711LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = 1586LLU;
	uint8_t x310 = 1U;
	static volatile uint64_t x312 = 760771060312779838LLU;

	t69 = (x309-((x310%x311)*x312));

	if (t69 != 17685973013396773364LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x315 = INT16_MIN;
	uint16_t x316 = UINT16_MAX;
	uint32_t t70 = 10U;

	t70 = (x313-((x314%x315)*x316));

	if (t70 != 162592768U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x317 = -949261;
	int64_t x318 = -15549213315181591LL;
	static int8_t x320 = -1;

	t71 = (x317-((x318%x319)*x320));

	if (t71 != -949261LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x321 = 2U;
	int8_t x322 = -1;
	int16_t x323 = 15;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t72 = 536050LLU;

	t72 = (x321-((x322%x323)*x324));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x329 = 13833385786LL;
	static int64_t x330 = -1LL;
	volatile int16_t x331 = INT16_MIN;
	int64_t x332 = -67062042215385LL;
	int64_t t73 = 8470708LL;

	t73 = (x329-((x330%x331)*x332));

	if (t73 != -67048208829599LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x334 = INT32_MAX;
	static uint16_t x336 = 25731U;

	t74 = (x333-((x334%x335)*x336));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = 780436560;
	volatile int8_t x339 = -7;
	volatile int8_t x340 = -1;
	int32_t t75 = -1457753;

	t75 = (x337-((x338%x339)*x340));

	if (t75 != 780436559) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x341 = -1;
	int8_t x342 = 6;
	uint64_t x343 = 320472145020LLU;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t76 = 11232LLU;

	t76 = (x341-((x342%x343)*x344));

	if (t76 != 12884901887LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = INT64_MIN;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = INT8_MAX;
	uint64_t t77 = 63454938494433814LLU;

	t77 = (x345-((x346%x347)*x348));

	if (t77 != 9223371812908928806LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	uint64_t x360 = UINT64_MAX;
	uint64_t t78 = 2LLU;

	t78 = (x357-((x358%x359)*x360));

	if (t78 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = INT32_MIN;
	static int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	volatile int16_t x364 = -1;
	int64_t t79 = 44254975095LL;

	t79 = (x361-((x362%x363)*x364));

	if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = INT16_MAX;
	int8_t x370 = INT8_MAX;
	static uint32_t x371 = 213U;
	uint8_t x372 = 0U;
	volatile uint32_t t80 = 24668958U;

	t80 = (x369-((x370%x371)*x372));

	if (t80 != 32767U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x373 = 104LLU;
	int64_t x374 = -1LL;
	int16_t x375 = INT16_MIN;
	static uint64_t t81 = 44774469473782497LLU;

	t81 = (x373-((x374%x375)*x376));

	if (t81 != 105LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x377 = 5732002U;
	int64_t x379 = 1094057959LL;
	volatile int64_t t82 = 2436967973LL;

	t82 = (x377-((x378%x379)*x380));

	if (t82 != 5732839LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x381 = UINT64_MAX;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = -1LL;
	static uint64_t x384 = 66844139818LLU;
	uint64_t t83 = UINT64_MAX;

	t83 = (x381-((x382%x383)*x384));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x385 = INT32_MIN;
	int16_t x387 = INT16_MAX;
	int16_t x388 = INT16_MAX;

	t84 = (x385-((x386%x387)*x388));

	if (t84 != -2147450881) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x393 = 15564U;
	int8_t x395 = INT8_MIN;
	static int16_t x396 = INT16_MIN;
	volatile int64_t t85 = 12LL;

	t85 = (x393-((x394%x395)*x396));

	if (t85 != -17204LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x403 = -608LL;
	int16_t x404 = 1;
	int64_t t86 = -649311337296006485LL;

	t86 = (x401-((x402%x403)*x404));

	if (t86 != -1538LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x405 = -2089;
	int64_t x406 = INT64_MIN;
	uint64_t x407 = 37764928484313LLU;
	volatile uint64_t t87 = 29186LLU;

	t87 = (x405-((x406%x407)*x408));

	if (t87 != 5788202525416LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x409 = UINT8_MAX;
	int8_t x411 = 5;
	volatile uint32_t x412 = 3U;

	t88 = (x409-((x410%x411)*x412));

	if (t88 != 264U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x413 = 39123369247187124LLU;
	static int32_t x414 = 18308;
	int64_t x415 = INT64_MIN;
	static int32_t x416 = -2399209;
	volatile uint64_t t89 = 11LLU;

	t89 = (x413-((x414%x415)*x416));

	if (t89 != 39123413171905496LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x417 = INT32_MIN;
	int32_t x418 = INT32_MIN;
	static int32_t x419 = -1;
	int8_t x420 = -23;
	volatile int32_t t90 = INT32_MIN;

	t90 = (x417-((x418%x419)*x420));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = INT64_MAX;
	uint8_t x422 = UINT8_MAX;
	volatile int16_t x424 = -1;

	t91 = (x421-((x422%x423)*x424));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x425 = INT8_MIN;
	volatile uint16_t x426 = 257U;
	int32_t x428 = INT32_MIN;
	int32_t t92 = 268819;

	t92 = (x425-((x426%x427)*x428));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x429 = UINT32_MAX;
	int8_t x430 = 51;
	int16_t x431 = INT16_MIN;
	static int32_t x432 = 1025;
	static uint32_t t93 = 72711U;

	t93 = (x429-((x430%x431)*x432));

	if (t93 != 4294915020U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x434 = UINT64_MAX;
	int32_t x435 = -208;
	int16_t x436 = INT16_MAX;
	volatile uint64_t t94 = 20232208255838LLU;

	t94 = (x433-((x434%x435)*x436));

	if (t94 != 1097307020996813LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x437 = 1;
	volatile int8_t x438 = 1;
	int8_t x439 = INT8_MAX;
	int32_t t95 = -1286;

	t95 = (x437-((x438%x439)*x440));

	if (t95 != 129) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x441 = -1397488;
	uint64_t x442 = 38152170101568LLU;
	int8_t x443 = 8;
	volatile int32_t x444 = -1016244;
	static uint64_t t96 = 3596LLU;

	t96 = (x441-((x442%x443)*x444));

	if (t96 != 18446744073708154128LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x445 = 4776U;
	int64_t x446 = INT64_MAX;
	static int8_t x447 = INT8_MIN;
	uint16_t x448 = 1U;
	volatile int64_t t97 = -49LL;

	t97 = (x445-((x446%x447)*x448));

	if (t97 != 4649LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = INT16_MIN;
	int8_t x450 = 0;
	uint8_t x451 = UINT8_MAX;
	int16_t x452 = INT16_MIN;
	volatile int32_t t98 = 734;

	t98 = (x449-((x450%x451)*x452));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = -296925833373299LL;
	int16_t x454 = INT16_MIN;
	int8_t x455 = 7;
	static volatile int64_t t99 = -569595787064LL;

	t99 = (x453-((x454%x455)*x456));

	if (t99 != 9223075111021402508LL) { NG(); } else { ; }
	
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

