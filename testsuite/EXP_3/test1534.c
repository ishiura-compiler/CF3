#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 51;
uint32_t x6 = UINT32_MAX;
uint16_t x7 = 101U;
volatile int32_t x8 = INT32_MIN;
uint32_t x19 = 45252U;
int8_t x29 = 0;
uint32_t x30 = 178U;
int8_t x31 = INT8_MAX;
static uint8_t x32 = UINT8_MAX;
int64_t t8 = -1LL;
int16_t x42 = 344;
uint32_t x51 = 4872813U;
uint32_t t12 = UINT32_MAX;
uint64_t x65 = 7818LLU;
int64_t x66 = 39400121270723LL;
static volatile int32_t t15 = 619220257;
int16_t x77 = INT16_MIN;
int16_t x87 = INT16_MAX;
static int16_t x92 = -2;
uint8_t x96 = UINT8_MAX;
uint16_t x104 = UINT16_MAX;
volatile int32_t x105 = -1;
volatile int64_t x107 = 1003625600344186440LL;
volatile uint16_t x112 = 4U;
int32_t t24 = -243358809;
volatile int32_t x121 = INT32_MIN;
int8_t x125 = 1;
uint8_t x126 = UINT8_MAX;
int64_t t29 = 450583716763485LL;
int32_t t30 = -11;
uint32_t x138 = 5870U;
uint64_t x139 = UINT64_MAX;
uint16_t x143 = UINT16_MAX;
static volatile int32_t x148 = INT32_MIN;
int8_t x155 = -1;
int16_t x157 = INT16_MIN;
int64_t x161 = -501711809568LL;
int32_t x172 = INT32_MAX;
uint32_t t39 = 11746550U;
volatile int32_t t40 = 687197932;
volatile int16_t x183 = 165;
static int32_t x185 = -23;
uint32_t x194 = 1U;
int64_t t44 = 22971LL;
volatile uint32_t t45 = 877U;
volatile int16_t x209 = INT16_MIN;
static int16_t x217 = -1;
int32_t t48 = -22621614;
int8_t x222 = INT8_MAX;
uint32_t x223 = UINT32_MAX;
int16_t x226 = INT16_MIN;
volatile uint32_t x245 = UINT32_MAX;
static volatile uint32_t x256 = 448672194U;
volatile uint64_t x260 = 22382217LLU;
uint32_t x261 = 613U;
int8_t x266 = INT8_MIN;
int32_t x270 = INT32_MIN;
uint32_t x273 = 1U;
int32_t x285 = INT32_MAX;
int8_t x288 = INT8_MIN;
uint64_t x293 = 7446708604LLU;
uint16_t x314 = UINT16_MAX;
int8_t x315 = 1;
static volatile int32_t t69 = 102823;
volatile int8_t x322 = -1;
int8_t x328 = -1;
volatile uint64_t t72 = 233423144LLU;
int32_t t73 = -1;
static int32_t x334 = -1;
volatile int32_t t74 = 291576;
static int64_t x343 = -1028771955398LL;
volatile int64_t t75 = 2113492804866LL;
static int8_t x347 = INT8_MIN;
uint16_t x349 = 217U;
int64_t x351 = INT64_MIN;
int64_t x355 = -1723344306LL;
int16_t x359 = INT16_MAX;
int16_t x362 = INT16_MIN;
int16_t x367 = -1619;
int32_t x369 = -1;
int32_t x372 = INT32_MAX;
int32_t t83 = 830524414;
static int8_t x382 = 0;
static int32_t t84 = 54;
volatile uint32_t x390 = 3U;
int64_t x398 = INT64_MIN;
int8_t x402 = INT8_MIN;
int8_t x404 = INT8_MIN;
volatile int64_t t89 = 2155LL;
volatile int8_t x412 = -2;
int32_t t91 = -6918612;
int64_t x414 = -418202LL;
int64_t t92 = 6655718509466LL;
uint16_t x423 = 11881U;
int8_t x430 = -17;
volatile int64_t x433 = INT64_MAX;
uint64_t x434 = UINT64_MAX;
volatile int64_t x435 = 44466LL;
volatile uint32_t x445 = 155U;
volatile uint32_t t99 = 5857U;


void f0(void) {
	uint8_t x1 = 0U;
	static volatile int64_t x3 = INT64_MIN;
	int8_t x4 = -10;
	int32_t t0 = -129;

	t0 = ((x1+x2)^(x3<=x4));

	if (t0 != 50) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint32_t t1 = 1897U;

	t1 = ((x5+x6)^(x7<=x8));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 27U;
	volatile uint16_t x14 = 6U;
	volatile uint8_t x15 = UINT8_MAX;
	uint32_t x16 = UINT32_MAX;
	static volatile int32_t t2 = -33;

	t2 = ((x13+x14)^(x15<=x16));

	if (t2 != 32) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = -62445570556460LL;
	volatile uint16_t x18 = UINT16_MAX;
	int8_t x20 = -1;
	volatile int64_t t3 = 4441153856025000508LL;

	t3 = ((x17+x18)^(x19<=x20));

	if (t3 != -62445570490926LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 40981LLU;
	uint64_t x22 = 457LLU;
	static int16_t x23 = -1;
	int64_t x24 = INT64_MAX;
	uint64_t t4 = 467327117538803LLU;

	t4 = ((x21+x22)^(x23<=x24));

	if (t4 != 41439LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = -1;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = 48870;

	t5 = ((x25+x26)^(x27<=x28));

	if (t5 != -130) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t t6 = 311232302U;

	t6 = ((x29+x30)^(x31<=x32));

	if (t6 != 179U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 5803264715371LLU;
	int8_t x34 = 4;
	int16_t x35 = -44;
	uint32_t x36 = 3U;
	uint64_t t7 = 61565068LLU;

	t7 = ((x33+x34)^(x35<=x36));

	if (t7 != 5803264715375LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x37 = 0U;
	int64_t x38 = 13995966894919LL;
	int16_t x39 = INT16_MAX;
	static uint64_t x40 = 2LLU;

	t8 = ((x37+x38)^(x39<=x40));

	if (t8 != 13995966894919LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 5U;
	static uint16_t x43 = 310U;
	uint64_t x44 = UINT64_MAX;
	volatile int32_t t9 = 10;

	t9 = ((x41+x42)^(x43<=x44));

	if (t9 != 348) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = 34777LL;
	int8_t x46 = INT8_MIN;
	static int32_t x47 = -1;
	uint8_t x48 = UINT8_MAX;
	int64_t t10 = 54893570954525LL;

	t10 = ((x45+x46)^(x47<=x48));

	if (t10 != 34648LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	volatile int16_t x50 = INT16_MIN;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t11 = 50029;

	t11 = ((x49+x50)^(x51<=x52));

	if (t11 != 2147450879) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x57 = UINT32_MAX;
	int16_t x58 = -1;
	uint64_t x59 = 45LLU;
	uint64_t x60 = 16654LLU;

	t12 = ((x57+x58)^(x59<=x60));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1;
	uint8_t x62 = 1U;
	volatile int64_t x63 = -1LL;
	int32_t x64 = 99330260;
	volatile int32_t t13 = -357739612;

	t13 = ((x61+x62)^(x63<=x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x67 = 69501197;
	int16_t x68 = 2789;
	uint64_t t14 = 5731304LLU;

	t14 = ((x65+x66)^(x67<=x68));

	if (t14 != 39400121278541LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = INT16_MIN;
	volatile int32_t x70 = INT32_MAX;
	static int16_t x71 = -1;
	int64_t x72 = INT64_MIN;

	t15 = ((x69+x70)^(x71<=x72));

	if (t15 != 2147450879) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x78 = UINT16_MAX;
	volatile int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MIN;
	volatile int32_t t16 = -1469;

	t16 = ((x77+x78)^(x79<=x80));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	static uint32_t x82 = 22U;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MAX;
	volatile uint32_t t17 = 2U;

	t17 = ((x81+x82)^(x83<=x84));

	if (t17 != 4294934551U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x85 = UINT16_MAX;
	volatile int32_t x86 = INT32_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t18 = 367387970;

	t18 = ((x85+x86)^(x87<=x88));

	if (t18 != -2147418114) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	volatile int16_t x90 = 0;
	static volatile int32_t x91 = INT32_MIN;
	int64_t t19 = 3LL;

	t19 = ((x89+x90)^(x91<=x92));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x93 = 1U;
	uint32_t x94 = UINT32_MAX;
	static int32_t x95 = INT32_MIN;
	uint32_t t20 = 1096U;

	t20 = ((x93+x94)^(x95<=x96));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = -1LL;
	static int32_t x98 = INT32_MAX;
	volatile int64_t x99 = -1LL;
	int64_t x100 = INT64_MIN;
	static int64_t t21 = -120LL;

	t21 = ((x97+x98)^(x99<=x100));

	if (t21 != 2147483646LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x101 = INT64_MIN;
	uint8_t x102 = 19U;
	static int64_t x103 = -1LL;
	volatile int64_t t22 = -6219LL;

	t22 = ((x101+x102)^(x103<=x104));

	if (t22 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x106 = -31;
	int64_t x108 = -9797LL;
	volatile int32_t t23 = -102222030;

	t23 = ((x105+x106)^(x107<=x108));

	if (t23 != -32) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	uint8_t x110 = UINT8_MAX;
	int64_t x111 = INT64_MAX;

	t24 = ((x109+x110)^(x111<=x112));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = 1;
	int16_t x115 = -1;
	int32_t x116 = INT32_MIN;
	int32_t t25 = -275;

	t25 = ((x113+x114)^(x115<=x116));

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = -1;
	volatile uint32_t x118 = 34U;
	volatile int16_t x119 = -1;
	int8_t x120 = INT8_MIN;
	uint32_t t26 = 7619U;

	t26 = ((x117+x118)^(x119<=x120));

	if (t26 != 33U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x122 = -1LL;
	int8_t x123 = INT8_MIN;
	static volatile int8_t x124 = INT8_MIN;
	volatile int64_t t27 = -87738LL;

	t27 = ((x121+x122)^(x123<=x124));

	if (t27 != -2147483650LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x127 = INT16_MAX;
	uint8_t x128 = 3U;
	volatile int32_t t28 = -866;

	t28 = ((x125+x126)^(x127<=x128));

	if (t28 != 256) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -38210LL;
	int32_t x130 = -3650855;
	uint32_t x131 = 103562U;
	static volatile uint16_t x132 = 14U;

	t29 = ((x129+x130)^(x131<=x132));

	if (t29 != -3689065LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x133 = INT8_MAX;
	int16_t x134 = INT16_MIN;
	static uint32_t x135 = UINT32_MAX;
	int32_t x136 = -1;

	t30 = ((x133+x134)^(x135<=x136));

	if (t30 != -32642) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	volatile uint16_t x140 = 709U;
	volatile uint32_t t31 = 292624U;

	t31 = ((x137+x138)^(x139<=x140));

	if (t31 != 4294940398U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 10069U;
	volatile int64_t x142 = INT64_MIN;
	uint8_t x144 = 99U;
	int64_t t32 = -1046698631466902343LL;

	t32 = ((x141+x142)^(x143<=x144));

	if (t32 != -9223372036854765739LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	int8_t x146 = 0;
	static uint64_t x147 = 2382LLU;
	int32_t t33 = -169158;

	t33 = ((x145+x146)^(x147<=x148));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = 0;
	static volatile uint32_t x151 = 130U;
	int64_t x152 = -12644530065661LL;
	int64_t t34 = INT64_MIN;

	t34 = ((x149+x150)^(x151<=x152));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x153 = INT8_MAX;
	uint64_t x154 = UINT64_MAX;
	int32_t x156 = INT32_MAX;
	volatile uint64_t t35 = 102676381282930LLU;

	t35 = ((x153+x154)^(x155<=x156));

	if (t35 != 127LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x158 = -1;
	static int32_t x159 = INT32_MIN;
	int8_t x160 = -26;
	int32_t t36 = 59003150;

	t36 = ((x157+x158)^(x159<=x160));

	if (t36 != -32770) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x162 = -590;
	int16_t x163 = 515;
	static uint64_t x164 = 7861038LLU;
	static volatile int64_t t37 = -2006005913966569LL;

	t37 = ((x161+x162)^(x163<=x164));

	if (t37 != -501711810157LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x169 = -1LL;
	int16_t x170 = 2;
	uint32_t x171 = 0U;
	volatile int64_t t38 = -1148052071LL;

	t38 = ((x169+x170)^(x171<=x172));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x173 = -1;
	static uint32_t x174 = 2121192U;
	int8_t x175 = INT8_MIN;
	static uint32_t x176 = 11671887U;

	t39 = ((x173+x174)^(x175<=x176));

	if (t39 != 2121191U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MIN;
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = INT64_MAX;

	t40 = ((x177+x178)^(x179<=x180));

	if (t40 != -65535) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = -1;
	int8_t x182 = INT8_MIN;
	static volatile int8_t x184 = 0;
	volatile int32_t t41 = 2345;

	t41 = ((x181+x182)^(x183<=x184));

	if (t41 != -129) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x186 = INT16_MIN;
	uint8_t x187 = 35U;
	int8_t x188 = 18;
	int32_t t42 = -14;

	t42 = ((x185+x186)^(x187<=x188));

	if (t42 != -32791) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = 80400654LLU;
	static int32_t x190 = INT32_MAX;
	uint8_t x191 = 3U;
	uint64_t x192 = 346781139LLU;
	volatile uint64_t t43 = 2686996517783705LLU;

	t43 = ((x189+x190)^(x191<=x192));

	if (t43 != 2227884300LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = -1LL;
	int8_t x195 = INT8_MAX;
	static int32_t x196 = -229457031;

	t44 = ((x193+x194)^(x195<=x196));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x201 = UINT32_MAX;
	int32_t x202 = INT32_MAX;
	int16_t x203 = INT16_MAX;
	volatile int8_t x204 = -40;

	t45 = ((x201+x202)^(x203<=x204));

	if (t45 != 2147483646U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x205 = 1U;
	uint32_t x206 = UINT32_MAX;
	volatile int64_t x207 = INT64_MAX;
	int8_t x208 = -1;
	uint32_t t46 = 354106010U;

	t46 = ((x205+x206)^(x207<=x208));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x210 = 153353LLU;
	int32_t x211 = INT32_MIN;
	int16_t x212 = 8;
	uint64_t t47 = 4710946LLU;

	t47 = ((x209+x210)^(x211<=x212));

	if (t47 != 120584LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x218 = INT8_MIN;
	int16_t x219 = INT16_MAX;
	volatile int8_t x220 = -4;

	t48 = ((x217+x218)^(x219<=x220));

	if (t48 != -129) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x221 = UINT32_MAX;
	static volatile uint16_t x224 = UINT16_MAX;
	static uint32_t t49 = 737265363U;

	t49 = ((x221+x222)^(x223<=x224));

	if (t49 != 126U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x225 = 747U;
	uint8_t x227 = 0U;
	uint8_t x228 = 23U;
	volatile int32_t t50 = 881980;

	t50 = ((x225+x226)^(x227<=x228));

	if (t50 != -32022) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = INT16_MAX;
	uint64_t x230 = 14135807LLU;
	int32_t x231 = -1;
	uint64_t x232 = 0LLU;
	volatile uint64_t t51 = 7321317LLU;

	t51 = ((x229+x230)^(x231<=x232));

	if (t51 != 14168574LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x233 = 31U;
	int64_t x234 = INT64_MIN;
	int32_t x235 = -1;
	static uint8_t x236 = 1U;
	int64_t t52 = -11686299LL;

	t52 = ((x233+x234)^(x235<=x236));

	if (t52 != -9223372036854775778LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = -1;
	static int8_t x238 = INT8_MAX;
	volatile uint8_t x239 = UINT8_MAX;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t53 = -196043456;

	t53 = ((x237+x238)^(x239<=x240));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x241 = INT16_MAX;
	int64_t x242 = INT64_MIN;
	int8_t x243 = -15;
	int64_t x244 = 463684449LL;
	volatile int64_t t54 = -170225217LL;

	t54 = ((x241+x242)^(x243<=x244));

	if (t54 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x246 = -1;
	volatile int8_t x247 = 3;
	static volatile int32_t x248 = -1;
	uint32_t t55 = 4313U;

	t55 = ((x245+x246)^(x247<=x248));

	if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = 456333328906550LL;
	static int16_t x250 = -1;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MAX;
	int64_t t56 = 0LL;

	t56 = ((x249+x250)^(x251<=x252));

	if (t56 != 456333328906548LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x253 = 5U;
	uint32_t x254 = 237490U;
	int8_t x255 = -1;
	uint32_t t57 = 39251U;

	t57 = ((x253+x254)^(x255<=x256));

	if (t57 != 237495U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = -1;
	int32_t x258 = 6;
	uint32_t x259 = UINT32_MAX;
	int32_t t58 = 489;

	t58 = ((x257+x258)^(x259<=x260));

	if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x262 = 864170U;
	int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MIN;
	uint32_t t59 = 900772U;

	t59 = ((x261+x262)^(x263<=x264));

	if (t59 != 864783U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x265 = 58U;
	int32_t x267 = -1;
	int16_t x268 = 31;
	static uint32_t t60 = 11808497U;

	t60 = ((x265+x266)^(x267<=x268));

	if (t60 != 4294967227U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x269 = UINT8_MAX;
	volatile int64_t x271 = INT64_MIN;
	int8_t x272 = 6;
	volatile int32_t t61 = 258856461;

	t61 = ((x269+x270)^(x271<=x272));

	if (t61 != -2147483394) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x274 = UINT32_MAX;
	volatile uint8_t x275 = 75U;
	int8_t x276 = INT8_MIN;
	volatile uint32_t t62 = 1U;

	t62 = ((x273+x274)^(x275<=x276));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x277 = -172;
	int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	uint64_t x280 = 2291809LLU;
	int32_t t63 = 0;

	t63 = ((x277+x278)^(x279<=x280));

	if (t63 != -32940) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x286 = INT64_MIN;
	uint16_t x287 = UINT16_MAX;
	int64_t t64 = 515122LL;

	t64 = ((x285+x286)^(x287<=x288));

	if (t64 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x294 = 19796780LLU;
	int64_t x295 = INT64_MAX;
	static volatile uint32_t x296 = 853U;
	volatile uint64_t t65 = 1LLU;

	t65 = ((x293+x294)^(x295<=x296));

	if (t65 != 7466505384LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = -1;
	int32_t x302 = 201;
	int8_t x303 = -1;
	volatile int32_t x304 = -1426;
	volatile int32_t t66 = -55636765;

	t66 = ((x301+x302)^(x303<=x304));

	if (t66 != 200) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x305 = -1105;
	int32_t x306 = -38879;
	static volatile uint16_t x307 = 2U;
	int8_t x308 = INT8_MAX;
	volatile int32_t t67 = 22621;

	t67 = ((x305+x306)^(x307<=x308));

	if (t67 != -39983) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = INT8_MAX;
	int16_t x310 = INT16_MIN;
	volatile int8_t x311 = INT8_MAX;
	static int64_t x312 = INT64_MAX;
	int32_t t68 = 208338;

	t68 = ((x309+x310)^(x311<=x312));

	if (t68 != -32642) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x313 = -1;
	volatile int16_t x316 = -1;

	t69 = ((x313+x314)^(x315<=x316));

	if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = -375993LL;
	int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	int32_t x320 = 3481;
	int64_t t70 = -410LL;

	t70 = ((x317+x318)^(x319<=x320));

	if (t70 != -376122LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = 4;
	volatile int8_t x323 = INT8_MAX;
	static volatile int32_t x324 = -1;
	static int32_t t71 = 297756052;

	t71 = ((x321+x322)^(x323<=x324));

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x325 = UINT64_MAX;
	uint16_t x326 = 5U;
	static volatile int64_t x327 = 55858754LL;

	t72 = ((x325+x326)^(x327<=x328));

	if (t72 != 4LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x330 = 55U;
	uint16_t x331 = 65U;
	int32_t x332 = 26;

	t73 = ((x329+x330)^(x331<=x332));

	if (t73 != -2147483593) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = INT16_MAX;
	int64_t x335 = INT64_MAX;
	uint16_t x336 = 204U;

	t74 = ((x333+x334)^(x335<=x336));

	if (t74 != 32766) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = 41LL;
	int16_t x342 = -11;
	volatile uint64_t x344 = 222682077963LLU;

	t75 = ((x341+x342)^(x343<=x344));

	if (t75 != 30LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MIN;
	int32_t x348 = -1;
	static volatile uint32_t t76 = 110159781U;

	t76 = ((x345+x346)^(x347<=x348));

	if (t76 != 4294934526U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x350 = INT32_MIN;
	volatile uint16_t x352 = 5U;
	int32_t t77 = -5;

	t77 = ((x349+x350)^(x351<=x352));

	if (t77 != -2147483432) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x353 = INT32_MAX;
	int16_t x354 = INT16_MIN;
	int64_t x356 = -1LL;
	int32_t t78 = 8524;

	t78 = ((x353+x354)^(x355<=x356));

	if (t78 != 2147450878) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = 287334784;
	volatile int64_t x358 = INT64_MIN;
	static int8_t x360 = INT8_MIN;
	static volatile int64_t t79 = -790LL;

	t79 = ((x357+x358)^(x359<=x360));

	if (t79 != -9223372036567441024LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x361 = UINT16_MAX;
	static int16_t x363 = 9606;
	volatile int64_t x364 = -1LL;
	int32_t t80 = 1;

	t80 = ((x361+x362)^(x363<=x364));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x365 = -1;
	int64_t x366 = 1LL;
	static int16_t x368 = INT16_MAX;
	volatile int64_t t81 = -850816014197LL;

	t81 = ((x365+x366)^(x367<=x368));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x370 = INT8_MIN;
	volatile uint64_t x371 = 315LLU;
	int32_t t82 = -343;

	t82 = ((x369+x370)^(x371<=x372));

	if (t82 != -130) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x377 = -1;
	int16_t x378 = -36;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = 43U;

	t83 = ((x377+x378)^(x379<=x380));

	if (t83 != -38) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x381 = 11U;
	volatile int8_t x383 = INT8_MIN;
	int64_t x384 = -1LL;

	t84 = ((x381+x382)^(x383<=x384));

	if (t84 != 10) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = INT32_MAX;
	int8_t x386 = INT8_MIN;
	static int32_t x387 = INT32_MAX;
	uint64_t x388 = 5443259638870351904LLU;
	volatile int32_t t85 = -7619834;

	t85 = ((x385+x386)^(x387<=x388));

	if (t85 != 2147483518) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x389 = INT64_MIN;
	static int32_t x391 = INT32_MAX;
	volatile uint8_t x392 = UINT8_MAX;
	volatile int64_t t86 = -42441199733826LL;

	t86 = ((x389+x390)^(x391<=x392));

	if (t86 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x393 = INT64_MIN;
	volatile int8_t x394 = 2;
	int64_t x395 = -1LL;
	static uint16_t x396 = UINT16_MAX;
	volatile int64_t t87 = 282379287613665LL;

	t87 = ((x393+x394)^(x395<=x396));

	if (t87 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x397 = 0U;
	int8_t x399 = INT8_MIN;
	int8_t x400 = -1;
	volatile int64_t t88 = 51734LL;

	t88 = ((x397+x398)^(x399<=x400));

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = -40941277778887739LL;
	int8_t x403 = -24;

	t89 = ((x401+x402)^(x403<=x404));

	if (t89 != -40941277778887867LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int64_t x407 = -78545152899509530LL;
	uint16_t x408 = 8U;
	volatile int32_t t90 = 37772;

	t90 = ((x405+x406)^(x407<=x408));

	if (t90 != -32770) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x409 = INT32_MIN;
	uint8_t x410 = 110U;
	int64_t x411 = INT64_MAX;

	t91 = ((x409+x410)^(x411<=x412));

	if (t91 != -2147483538) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x413 = INT32_MIN;
	static uint16_t x415 = 30U;
	int16_t x416 = INT16_MIN;

	t92 = ((x413+x414)^(x415<=x416));

	if (t92 != -2147901850LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x417 = 4290164U;
	static int64_t x418 = -1LL;
	int16_t x419 = 1;
	uint16_t x420 = UINT16_MAX;
	int64_t t93 = -4823019849955LL;

	t93 = ((x417+x418)^(x419<=x420));

	if (t93 != 4290162LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x421 = INT16_MIN;
	uint16_t x422 = 9670U;
	uint16_t x424 = UINT16_MAX;
	int32_t t94 = 6167;

	t94 = ((x421+x422)^(x423<=x424));

	if (t94 != -23097) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x425 = INT8_MAX;
	uint8_t x426 = UINT8_MAX;
	volatile int8_t x427 = INT8_MIN;
	uint16_t x428 = 217U;
	static volatile int32_t t95 = -3888966;

	t95 = ((x425+x426)^(x427<=x428));

	if (t95 != 383) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x429 = 86U;
	int8_t x431 = -1;
	static volatile int16_t x432 = INT16_MAX;
	volatile int32_t t96 = 0;

	t96 = ((x429+x430)^(x431<=x432));

	if (t96 != 68) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x436 = 8181U;
	uint64_t t97 = 6576673218203531LLU;

	t97 = ((x433+x434)^(x435<=x436));

	if (t97 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x441 = 1;
	volatile int32_t x442 = INT32_MIN;
	uint16_t x443 = 2398U;
	static int16_t x444 = -1;
	int32_t t98 = 62;

	t98 = ((x441+x442)^(x443<=x444));

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x446 = 39680U;
	uint64_t x447 = UINT64_MAX;
	int64_t x448 = INT64_MAX;

	t99 = ((x445+x446)^(x447<=x448));

	if (t99 != 39835U) { NG(); } else { ; }
	
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

