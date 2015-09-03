#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
uint8_t x9 = UINT8_MAX;
static int8_t x27 = INT8_MIN;
static int32_t x34 = INT32_MIN;
static volatile int16_t x36 = INT16_MIN;
uint16_t x43 = 2561U;
volatile int64_t t8 = -36480063LL;
int16_t x53 = INT16_MIN;
int8_t x66 = 0;
static int32_t x73 = INT32_MIN;
static int64_t x74 = 362294768544LL;
static volatile int64_t t14 = -21116079291907263LL;
static volatile int16_t x78 = INT16_MIN;
static int8_t x82 = -13;
int16_t x84 = INT16_MIN;
int64_t x93 = -1LL;
uint64_t x100 = 1462805LLU;
int32_t x102 = -1;
int16_t x104 = INT16_MAX;
volatile int16_t x110 = -1;
int8_t x111 = INT8_MIN;
int64_t x112 = INT64_MIN;
volatile int16_t x114 = INT16_MIN;
int64_t t24 = 0LL;
int32_t x118 = -31238312;
static int64_t x119 = INT64_MIN;
volatile int64_t t25 = -130847545591338LL;
static volatile int8_t x134 = INT8_MAX;
volatile uint8_t x139 = UINT8_MAX;
int16_t x141 = INT16_MIN;
static int32_t t31 = -20824;
static int8_t x146 = INT8_MIN;
uint64_t t32 = 2LLU;
static int32_t t33 = -61;
int32_t x160 = INT32_MAX;
static uint32_t t35 = 10802562U;
int8_t x162 = -1;
static int64_t x164 = INT64_MIN;
int16_t x165 = INT16_MIN;
static volatile uint64_t x173 = 59988008053424LLU;
int16_t x177 = -1;
int64_t t40 = -7398LL;
static int16_t x185 = INT16_MAX;
volatile int64_t t42 = -409LL;
int8_t x190 = -1;
uint64_t x194 = UINT64_MAX;
int32_t t45 = 5;
uint8_t x219 = 125U;
volatile int64_t t49 = -1548310085448LL;
uint64_t t50 = 7LLU;
int8_t x237 = INT8_MIN;
uint16_t x246 = UINT16_MAX;
volatile uint32_t x248 = 1710557U;
int32_t x252 = INT32_MAX;
static volatile uint32_t t59 = 106268738U;
volatile uint32_t x264 = 14U;
int64_t t61 = -2555LL;
int64_t x269 = INT64_MAX;
int64_t x272 = 2245LL;
volatile uint64_t x273 = 122401442858LLU;
volatile int64_t x276 = -3825LL;
uint16_t x277 = 29676U;
volatile int32_t x278 = INT32_MIN;
volatile int16_t x279 = -1;
volatile int64_t x283 = 938334055524513LL;
volatile int64_t t65 = -51643350366406LL;
int64_t x290 = -3610LL;
static uint32_t x291 = UINT32_MAX;
static uint32_t x296 = 2818U;
volatile int32_t x300 = INT32_MIN;
volatile uint64_t x304 = 31LLU;
uint64_t x311 = 7895090564886746181LLU;
volatile int32_t x312 = INT32_MAX;
static int32_t x315 = INT32_MIN;
volatile uint32_t t74 = 2074188152U;
static uint64_t x334 = UINT64_MAX;
volatile int8_t x342 = INT8_MAX;
int64_t x344 = 1342488311566583LL;
volatile int64_t t82 = 13498410129LL;
uint16_t x366 = 0U;
volatile uint16_t x377 = 352U;
int8_t x390 = 4;
static int8_t x392 = 5;
uint32_t t89 = 73152U;
int64_t x408 = INT64_MAX;
int64_t x414 = -1LL;
int64_t x425 = INT64_MIN;
uint32_t x426 = 325131U;


void f0(void) {
	uint32_t x2 = 1U;
	uint16_t x3 = 2949U;
	int16_t x4 = INT16_MAX;
	uint32_t t0 = 438U;

	t0 = ((x1+x2)&(x3|x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = INT8_MAX;
	int16_t x11 = INT16_MIN;
	static int64_t x12 = INT64_MAX;
	volatile int64_t t1 = -636LL;

	t1 = ((x9+x10)&(x11|x12));

	if (t1 != 382LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = UINT16_MAX;
	static int8_t x18 = 1;
	int32_t x19 = -16;
	int16_t x20 = INT16_MIN;
	int32_t t2 = 11596390;

	t2 = ((x17+x18)&(x19|x20));

	if (t2 != 65536) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = 16425925096090LL;
	int8_t x26 = -51;
	uint32_t x28 = UINT32_MAX;
	volatile int64_t t3 = 110824502LL;

	t3 = ((x25+x26)&(x27|x28));

	if (t3 != 1970156135LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x29 = -1LL;
	static uint8_t x30 = 4U;
	volatile int64_t x31 = -1LL;
	volatile int64_t x32 = INT64_MIN;
	volatile int64_t t4 = 2LL;

	t4 = ((x29+x30)&(x31|x32));

	if (t4 != 3LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x33 = UINT32_MAX;
	static int32_t x35 = -1;
	static uint32_t t5 = 1547829U;

	t5 = ((x33+x34)&(x35|x36));

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x41 = -1;
	int8_t x42 = INT8_MIN;
	uint32_t x44 = 407914U;
	volatile uint32_t t6 = 334114378U;

	t6 = ((x41+x42)&(x43|x44));

	if (t6 != 408427U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MIN;
	uint64_t x46 = UINT64_MAX;
	int16_t x47 = 98;
	uint8_t x48 = 46U;
	static volatile uint64_t t7 = 250900431LLU;

	t7 = ((x45+x46)&(x47|x48));

	if (t7 != 110LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MAX;
	uint8_t x51 = 58U;
	int64_t x52 = -1LL;

	t8 = ((x49+x50)&(x51|x52));

	if (t8 != 2147483519LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x54 = 36;
	int8_t x55 = INT8_MIN;
	static int8_t x56 = -1;
	volatile int32_t t9 = -971868;

	t9 = ((x53+x54)&(x55|x56));

	if (t9 != -32732) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x57 = UINT16_MAX;
	volatile int8_t x58 = INT8_MIN;
	int32_t x59 = INT32_MAX;
	int16_t x60 = -1;
	static int32_t t10 = -12283;

	t10 = ((x57+x58)&(x59|x60));

	if (t10 != 65407) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x61 = 0U;
	int16_t x62 = 12590;
	int32_t x63 = INT32_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t11 = -23124928;

	t11 = ((x61+x62)&(x63|x64));

	if (t11 != 12544) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = 14875LL;
	uint32_t x67 = 25U;
	int8_t x68 = INT8_MIN;
	int64_t t12 = -44039669570LL;

	t12 = ((x65+x66)&(x67|x68));

	if (t12 != 14873LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = UINT64_MAX;
	static int16_t x70 = 110;
	uint16_t x71 = 6011U;
	int32_t x72 = INT32_MAX;
	uint64_t t13 = 17400957LLU;

	t13 = ((x69+x70)&(x71|x72));

	if (t13 != 109LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x75 = -1LL;
	static int64_t x76 = INT64_MAX;

	t14 = ((x73+x74)&(x75|x76));

	if (t14 != 360147284896LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 2LLU;
	volatile int32_t x79 = INT32_MIN;
	int8_t x80 = INT8_MAX;
	static volatile uint64_t t15 = 53056LLU;

	t15 = ((x77+x78)&(x79|x80));

	if (t15 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	volatile int8_t x83 = -1;
	volatile int32_t t16 = -87721;

	t16 = ((x81+x82)&(x83|x84));

	if (t16 != -141) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -14;
	volatile int32_t x86 = -1;
	int8_t x87 = -35;
	int64_t x88 = INT64_MIN;
	static volatile int64_t t17 = -80781LL;

	t17 = ((x85+x86)&(x87|x88));

	if (t17 != -47LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x89 = 112U;
	volatile int64_t x90 = 633529219533LL;
	int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MIN;
	int64_t t18 = 24139075305204LL;

	t18 = ((x89+x90)&(x91|x92));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x94 = -1;
	static int8_t x95 = -1;
	static int64_t x96 = -2640LL;
	int64_t t19 = -28746477429700LL;

	t19 = ((x93+x94)&(x95|x96));

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = 0;
	int16_t x99 = -1;
	uint64_t t20 = 901LLU;

	t20 = ((x97+x98)&(x99|x100));

	if (t20 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -1;
	static volatile uint8_t x103 = 22U;
	volatile int32_t t21 = 118453668;

	t21 = ((x101+x102)&(x103|x104));

	if (t21 != 32766) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x105 = 5U;
	uint16_t x106 = UINT16_MAX;
	int64_t x107 = INT64_MAX;
	volatile int64_t x108 = -1LL;
	volatile int64_t t22 = -297502272042643LL;

	t22 = ((x105+x106)&(x107|x108));

	if (t22 != 65540LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x109 = 10229;
	int64_t t23 = -670117859666LL;

	t23 = ((x109+x110)&(x111|x112));

	if (t23 != 10112LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x113 = UINT8_MAX;
	int16_t x115 = 8;
	int64_t x116 = INT64_MAX;

	t24 = ((x113+x114)&(x115|x116));

	if (t24 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x117 = -1;
	int16_t x120 = -6781;

	t25 = ((x117+x118)&(x119|x120));

	if (t25 != -31243005LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	static volatile uint8_t x122 = 0U;
	uint16_t x123 = 7854U;
	int8_t x124 = INT8_MIN;
	int32_t t26 = -33219220;

	t26 = ((x121+x122)&(x123|x124));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = -1;
	uint8_t x126 = 0U;
	int16_t x127 = INT16_MIN;
	int8_t x128 = -1;
	int32_t t27 = -15090;

	t27 = ((x125+x126)&(x127|x128));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = 252518LLU;
	int8_t x130 = INT8_MIN;
	static int32_t x131 = -1;
	static int8_t x132 = INT8_MIN;
	volatile uint64_t t28 = 63LLU;

	t28 = ((x129+x130)&(x131|x132));

	if (t28 != 252390LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x133 = 2879U;
	volatile uint16_t x135 = UINT16_MAX;
	static uint8_t x136 = 4U;
	volatile int32_t t29 = -1107149;

	t29 = ((x133+x134)&(x135|x136));

	if (t29 != 3006) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -1;
	int64_t x138 = 325LL;
	uint32_t x140 = 8023U;
	int64_t t30 = -169404357LL;

	t30 = ((x137+x138)&(x139|x140));

	if (t30 != 324LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x142 = INT8_MIN;
	uint8_t x143 = 4U;
	int8_t x144 = INT8_MIN;

	t31 = ((x141+x142)&(x143|x144));

	if (t31 != -32896) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x145 = 204LL;
	volatile int32_t x147 = -139203;
	uint64_t x148 = 1906105415LLU;

	t32 = ((x145+x146)&(x147|x148));

	if (t32 != 76LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x149 = 101U;
	uint16_t x150 = UINT16_MAX;
	int16_t x151 = 128;
	static uint8_t x152 = UINT8_MAX;

	t33 = ((x149+x150)&(x151|x152));

	if (t33 != 100) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -1;
	int32_t x154 = 115;
	int32_t x155 = -435069924;
	static int32_t x156 = -963;
	volatile int32_t t34 = 24;

	t34 = ((x153+x154)&(x155|x156));

	if (t34 != 48) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x157 = 1;
	uint32_t x158 = UINT32_MAX;
	uint16_t x159 = 1U;

	t35 = ((x157+x158)&(x159|x160));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MAX;
	int32_t x163 = -1;
	volatile int64_t t36 = -51237583703376734LL;

	t36 = ((x161+x162)&(x163|x164));

	if (t36 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x166 = 42U;
	static int64_t x167 = -491191664471051LL;
	static volatile uint64_t x168 = 145354LLU;
	static uint64_t t37 = 698998655LLU;

	t37 = ((x165+x166)&(x167|x168));

	if (t37 != 18446252882045075498LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x169 = INT16_MIN;
	uint32_t x170 = UINT32_MAX;
	static int64_t x171 = -1LL;
	int32_t x172 = INT32_MAX;
	static volatile int64_t t38 = -65289LL;

	t38 = ((x169+x170)&(x171|x172));

	if (t38 != 4294934527LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x174 = INT16_MIN;
	uint32_t x175 = UINT32_MAX;
	volatile int16_t x176 = -1;
	static uint64_t t39 = 433251662LLU;

	t39 = ((x173+x174)&(x175|x176));

	if (t39 != 199797424LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x178 = 2474645057057501473LL;
	int16_t x179 = -1;
	int16_t x180 = INT16_MAX;

	t40 = ((x177+x178)&(x179|x180));

	if (t40 != 2474645057057501472LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x181 = -207445468814151LL;
	int16_t x182 = -1;
	int32_t x183 = -222724;
	static int64_t x184 = 847400691LL;
	volatile int64_t t41 = -25586534954330407LL;

	t41 = ((x181+x182)&(x183|x184));

	if (t41 != -207445468887880LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x186 = INT8_MIN;
	uint8_t x187 = 26U;
	int64_t x188 = -1LL;

	t42 = ((x185+x186)&(x187|x188));

	if (t42 != 32639LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MAX;
	int64_t x191 = INT64_MIN;
	static int64_t x192 = INT64_MIN;
	volatile int64_t t43 = 24050493111913928LL;

	t43 = ((x189+x190)&(x191|x192));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = 0;
	int32_t x195 = INT32_MIN;
	volatile int8_t x196 = INT8_MAX;
	volatile uint64_t t44 = 13768LLU;

	t44 = ((x193+x194)&(x195|x196));

	if (t44 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MAX;
	int8_t x198 = 0;
	int8_t x199 = -14;
	int8_t x200 = INT8_MIN;

	t45 = ((x197+x198)&(x199|x200));

	if (t45 != 32754) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 722020LLU;
	int32_t x202 = INT32_MIN;
	int64_t x203 = INT64_MIN;
	int32_t x204 = -1;
	static volatile uint64_t t46 = 1011958442LLU;

	t46 = ((x201+x202)&(x203|x204));

	if (t46 != 18446744071562789988LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = 22461035U;
	volatile int8_t x210 = -1;
	int8_t x211 = INT8_MAX;
	uint16_t x212 = UINT16_MAX;
	uint32_t t47 = 941103U;

	t47 = ((x209+x210)&(x211|x212));

	if (t47 != 47722U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x213 = 7645725407LL;
	int32_t x214 = -252676060;
	static volatile int8_t x215 = INT8_MIN;
	static int32_t x216 = INT32_MIN;
	int64_t t48 = -412749808115355LL;

	t48 = ((x213+x214)&(x215|x216));

	if (t48 != 7393049344LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = 48LL;
	volatile int8_t x218 = -1;
	volatile int64_t x220 = INT64_MIN;

	t49 = ((x217+x218)&(x219|x220));

	if (t49 != 45LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 456859LLU;
	uint32_t x222 = 9340U;
	int32_t x223 = 617;
	int16_t x224 = -1;

	t50 = ((x221+x222)&(x223|x224));

	if (t50 != 466199LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x225 = -5933698;
	static uint32_t x226 = UINT32_MAX;
	int16_t x227 = -4;
	int64_t x228 = INT64_MIN;
	volatile int64_t t51 = -16027368983638LL;

	t51 = ((x225+x226)&(x227|x228));

	if (t51 != 4289033596LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = 1;
	static int16_t x230 = INT16_MIN;
	uint8_t x231 = 2U;
	int16_t x232 = -1;
	int32_t t52 = -18;

	t52 = ((x229+x230)&(x231|x232));

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = -95;
	static int32_t x234 = 782934;
	int32_t x235 = -3124;
	uint32_t x236 = 1327566913U;
	uint32_t t53 = 103232024U;

	t53 = ((x233+x234)&(x235|x236));

	if (t53 != 782789U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x238 = 2989U;
	int16_t x239 = INT16_MIN;
	int8_t x240 = -1;
	volatile int32_t t54 = 1027598164;

	t54 = ((x237+x238)&(x239|x240));

	if (t54 != 2861) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = UINT64_MAX;
	uint32_t x242 = 4U;
	static uint32_t x243 = 626469U;
	int32_t x244 = INT32_MIN;
	uint64_t t55 = 35798424290309LLU;

	t55 = ((x241+x242)&(x243|x244));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = -1;
	static uint16_t x247 = 33U;
	volatile uint32_t t56 = 7U;

	t56 = ((x245+x246)&(x247|x248));

	if (t56 != 6652U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x249 = 1899216121635465LLU;
	static int16_t x250 = -1;
	int16_t x251 = INT16_MAX;
	uint64_t t57 = 1736137796LLU;

	t57 = ((x249+x250)&(x251|x252));

	if (t57 != 910697096LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = 23553U;
	int32_t x254 = 73245;
	volatile uint32_t x255 = 85202U;
	int8_t x256 = 13;
	uint32_t t58 = 21424382U;

	t58 = ((x253+x254)&(x255|x256));

	if (t58 != 83998U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x257 = 1U;
	uint8_t x258 = 2U;
	static int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MIN;

	t59 = ((x257+x258)&(x259|x260));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x261 = 296069440LLU;
	volatile int8_t x262 = INT8_MAX;
	static int32_t x263 = INT32_MIN;
	uint64_t t60 = 4342454727026877LLU;

	t60 = ((x261+x262)&(x263|x264));

	if (t60 != 14LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = 872355582689561LL;
	int16_t x266 = INT16_MIN;
	static volatile int16_t x267 = INT16_MIN;
	static volatile int16_t x268 = -1;

	t61 = ((x265+x266)&(x267|x268));

	if (t61 != 872355582656793LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x270 = -1336921;
	uint32_t x271 = UINT32_MAX;
	volatile int64_t t62 = 47142904LL;

	t62 = ((x269+x270)&(x271|x272));

	if (t62 != 4293630374LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x274 = -1LL;
	uint64_t x275 = UINT64_MAX;
	uint64_t t63 = 46023579808265207LLU;

	t63 = ((x273+x274)&(x275|x276));

	if (t63 != 122401442857LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x280 = INT32_MIN;
	volatile int32_t t64 = -1;

	t64 = ((x277+x278)&(x279|x280));

	if (t64 != -2147453972) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x281 = INT16_MIN;
	static int8_t x282 = INT8_MIN;
	static volatile uint32_t x284 = UINT32_MAX;

	t65 = ((x281+x282)&(x283|x284));

	if (t65 != 938334390026112LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x285 = UINT16_MAX;
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MAX;
	int8_t x288 = INT8_MAX;
	volatile int64_t t66 = 1647978641LL;

	t66 = ((x285+x286)&(x287|x288));

	if (t66 != 65535LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x289 = -1;
	int32_t x292 = 121605996;
	int64_t t67 = 29949422413738871LL;

	t67 = ((x289+x290)&(x291|x292));

	if (t67 != 4294963685LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = UINT32_MAX;
	volatile int64_t x294 = INT64_MIN;
	int16_t x295 = 1;
	volatile int64_t t68 = 853888LL;

	t68 = ((x293+x294)&(x295|x296));

	if (t68 != 2819LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x297 = 14718030461801954LL;
	static int16_t x298 = -1;
	uint8_t x299 = UINT8_MAX;
	volatile int64_t t69 = -7LL;

	t69 = ((x297+x298)&(x299|x300));

	if (t69 != 14718030437155041LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = -1;
	static int32_t x302 = -29;
	int32_t x303 = 124420979;
	volatile uint64_t t70 = 6522133528105080LLU;

	t70 = ((x301+x302)&(x303|x304));

	if (t70 != 124420962LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = INT16_MIN;
	volatile uint32_t x306 = 24375U;
	int32_t x307 = INT32_MAX;
	int8_t x308 = INT8_MIN;
	static volatile uint32_t t71 = 13384970U;

	t71 = ((x305+x306)&(x307|x308));

	if (t71 != 4294958903U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	static int16_t x310 = -1;
	volatile uint64_t t72 = 128651511LLU;

	t72 = ((x309+x310)&(x311|x312));

	if (t72 != 7895090565195235199LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 10U;
	uint16_t x314 = 1101U;
	int8_t x316 = INT8_MIN;
	int32_t t73 = -3082976;

	t73 = ((x313+x314)&(x315|x316));

	if (t73 != 1024) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x317 = UINT16_MAX;
	int32_t x318 = INT32_MIN;
	int8_t x319 = -1;
	volatile uint32_t x320 = 597418527U;

	t74 = ((x317+x318)&(x319|x320));

	if (t74 != 2147549183U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = 32160321LL;
	uint8_t x322 = UINT8_MAX;
	uint8_t x323 = 5U;
	int16_t x324 = INT16_MIN;
	volatile int64_t t75 = 8065044763LL;

	t75 = ((x321+x322)&(x323|x324));

	if (t75 != 32145408LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x325 = 81U;
	volatile uint16_t x326 = 307U;
	uint32_t x327 = 679U;
	int64_t x328 = INT64_MAX;
	int64_t t76 = 1LL;

	t76 = ((x325+x326)&(x327|x328));

	if (t76 != 388LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x329 = -1;
	uint16_t x330 = 90U;
	static uint64_t x331 = 546LLU;
	int64_t x332 = INT64_MIN;
	volatile uint64_t t77 = 61004464642LLU;

	t77 = ((x329+x330)&(x331|x332));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x333 = -1;
	static volatile int64_t x335 = INT64_MAX;
	int32_t x336 = INT32_MIN;
	static uint64_t t78 = 190458752LLU;

	t78 = ((x333+x334)&(x335|x336));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x337 = 2U;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = -1;
	static uint32_t x340 = 2020770614U;
	uint32_t t79 = 1U;

	t79 = ((x337+x338)&(x339|x340));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MIN;
	int16_t x343 = INT16_MAX;
	static int64_t t80 = -1032964129LL;

	t80 = ((x341+x342)&(x343|x344));

	if (t80 != 1342488311562367LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x349 = 116679078500493304LLU;
	uint64_t x350 = UINT64_MAX;
	static int32_t x351 = -133155180;
	uint32_t x352 = 19053717U;
	uint64_t t81 = 10889664819554LLU;

	t81 = ((x349+x350)&(x351|x352));

	if (t81 != 4029720213LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = -1LL;
	volatile int8_t x358 = -1;
	int8_t x359 = -12;
	int64_t x360 = INT64_MIN;

	t82 = ((x357+x358)&(x359|x360));

	if (t82 != -12LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x365 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t83 = -710325605;

	t83 = ((x365+x366)&(x367|x368));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x369 = UINT8_MAX;
	volatile uint64_t x370 = 0LLU;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MIN;
	uint64_t t84 = 8044219607LLU;

	t84 = ((x369+x370)&(x371|x372));

	if (t84 != 255LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x373 = -227;
	int64_t x374 = INT64_MAX;
	int32_t x375 = -121;
	uint16_t x376 = 6U;
	int64_t t85 = 1593454LL;

	t85 = ((x373+x374)&(x375|x376));

	if (t85 != 9223372036854775556LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x378 = INT16_MIN;
	int8_t x379 = -1;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t86 = 362834;

	t86 = ((x377+x378)&(x379|x380));

	if (t86 != -32416) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x381 = UINT64_MAX;
	int8_t x382 = 1;
	uint8_t x383 = UINT8_MAX;
	static int32_t x384 = INT32_MIN;
	uint64_t t87 = 239144LLU;

	t87 = ((x381+x382)&(x383|x384));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x385 = 454958766;
	static uint8_t x386 = 6U;
	static int16_t x387 = 1128;
	uint16_t x388 = 2U;
	volatile int32_t t88 = 12165242;

	t88 = ((x385+x386)&(x387|x388));

	if (t88 != 1056) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x389 = 4175646U;
	volatile int16_t x391 = INT16_MIN;

	t89 = ((x389+x390)&(x391|x392));

	if (t89 != 4161536U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x393 = 33863846U;
	volatile uint8_t x394 = 1U;
	uint8_t x395 = 37U;
	uint8_t x396 = UINT8_MAX;
	static volatile uint32_t t90 = 440145U;

	t90 = ((x393+x394)&(x395|x396));

	if (t90 != 167U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = INT16_MAX;
	int8_t x398 = INT8_MAX;
	volatile int8_t x399 = INT8_MAX;
	static int32_t x400 = -14481246;
	static int32_t t91 = -209641;

	t91 = ((x397+x398)&(x399|x400));

	if (t91 != 126) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x401 = 27U;
	int8_t x402 = 9;
	int16_t x403 = -1;
	int32_t x404 = 2252126;
	volatile int32_t t92 = -25337969;

	t92 = ((x401+x402)&(x403|x404));

	if (t92 != 36) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x405 = -1;
	uint8_t x406 = 84U;
	int8_t x407 = 0;
	static volatile int64_t t93 = -10902064324LL;

	t93 = ((x405+x406)&(x407|x408));

	if (t93 != 83LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = INT16_MIN;
	int16_t x410 = -1;
	uint16_t x411 = 387U;
	int32_t x412 = 432618893;
	volatile int32_t t94 = 0;

	t94 = ((x409+x410)&(x411|x412));

	if (t94 != 432618895) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = UINT8_MAX;
	static volatile int64_t x415 = INT64_MIN;
	int16_t x416 = -198;
	int64_t t95 = -54363923LL;

	t95 = ((x413+x414)&(x415|x416));

	if (t95 != 58LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = INT8_MIN;
	int16_t x418 = -1;
	volatile int16_t x419 = INT16_MIN;
	int32_t x420 = INT32_MIN;
	volatile int32_t t96 = -105;

	t96 = ((x417+x418)&(x419|x420));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x421 = 10U;
	uint16_t x422 = 1U;
	static int64_t x423 = INT64_MAX;
	int8_t x424 = INT8_MIN;
	int64_t t97 = 431501474920840LL;

	t97 = ((x421+x422)&(x423|x424));

	if (t97 != 11LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x427 = 1240945LLU;
	int16_t x428 = INT16_MAX;
	static volatile uint64_t t98 = 1LLU;

	t98 = ((x425+x426)&(x427|x428));

	if (t98 != 62987LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x429 = INT64_MAX;
	volatile int64_t x430 = -1071950613724394LL;
	static int16_t x431 = INT16_MIN;
	int8_t x432 = 1;
	volatile int64_t t99 = 49941275062LL;

	t99 = ((x429+x430)&(x431|x432));

	if (t99 != 9222300086241034241LL) { NG(); } else { ; }
	
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

