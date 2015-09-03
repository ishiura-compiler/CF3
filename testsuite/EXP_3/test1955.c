#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
uint16_t x6 = 133U;
static int8_t x18 = -11;
static int8_t x19 = -1;
volatile int8_t x22 = INT8_MAX;
int16_t x25 = 1;
int32_t x28 = INT32_MIN;
static volatile int64_t t7 = -113939LL;
int64_t x33 = -1LL;
static int16_t x36 = 1;
static uint64_t x54 = 447096730941LLU;
int64_t t15 = -3624491045231LL;
int32_t x68 = -225776594;
volatile int32_t t18 = -1;
int16_t x78 = -8758;
volatile uint64_t t19 = 14391581362022343LLU;
int64_t x83 = INT64_MIN;
uint16_t x84 = 3U;
int32_t x85 = 17;
static int8_t x90 = -1;
volatile int32_t t23 = 14930002;
static int8_t x100 = INT8_MIN;
static int32_t x111 = INT32_MIN;
uint64_t x123 = 6876477890530005LLU;
uint8_t x124 = UINT8_MAX;
int16_t x126 = 0;
volatile int32_t x129 = -78541;
int64_t x136 = INT64_MIN;
volatile int64_t x142 = INT64_MIN;
volatile int16_t x159 = -1;
int64_t x161 = -1LL;
static int32_t x163 = -1;
uint64_t x167 = 94293695035678LLU;
int64_t x171 = 5946LL;
int16_t x175 = INT16_MAX;
volatile int32_t x183 = -349134870;
volatile uint8_t x185 = 2U;
int32_t x187 = -1;
int32_t t48 = 100;
int32_t t49 = 20;
uint16_t x202 = 30U;
static volatile uint8_t x203 = UINT8_MAX;
uint32_t x204 = 29354U;
int16_t x205 = INT16_MIN;
int16_t x210 = INT16_MAX;
uint8_t x214 = 58U;
static int64_t x217 = 1523956671163732LL;
volatile int64_t t54 = 500074950693LL;
uint16_t x224 = 807U;
uint8_t x225 = 15U;
volatile int32_t t56 = -327821611;
static volatile int32_t t57 = 17;
static volatile int32_t x240 = -2185;
int16_t x242 = -1;
int64_t x246 = 2177692622203LL;
uint16_t x248 = UINT16_MAX;
int32_t t62 = -266;
uint16_t x258 = 2U;
volatile uint16_t x266 = UINT16_MAX;
int32_t x283 = INT32_MIN;
int64_t x285 = -6390304506302LL;
int16_t x291 = INT16_MIN;
int64_t x295 = INT64_MIN;
volatile int64_t t73 = 3LL;
int16_t x297 = 10737;
uint16_t x302 = UINT16_MAX;
static int64_t x310 = INT64_MIN;
uint8_t x311 = 53U;
uint64_t x315 = 442118305843LLU;
uint64_t t78 = 1831906382538639LLU;
static int64_t x318 = -362772LL;
volatile int16_t x321 = -1;
int64_t x327 = -1LL;
static uint32_t x328 = UINT32_MAX;
int8_t x338 = INT8_MIN;
uint32_t x340 = UINT32_MAX;
int8_t x344 = -1;
int16_t x347 = -1;
int32_t x351 = INT32_MIN;
volatile int64_t x356 = INT64_MIN;
static int64_t x357 = INT64_MIN;
uint8_t x358 = UINT8_MAX;
volatile uint64_t x364 = UINT64_MAX;
uint64_t x366 = 319608649481453LLU;
static int32_t x371 = INT32_MIN;
int32_t t92 = -64;
uint16_t x382 = 236U;
volatile int32_t x385 = -1;
int8_t x388 = -3;
volatile uint16_t x396 = UINT16_MAX;
static int32_t t98 = -1;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	volatile int32_t x2 = INT32_MAX;
	static int64_t x3 = -51368307529801319LL;
	uint64_t x4 = 23224869514LLU;
	uint64_t t0 = 124485LLU;

	t0 = ((x1==x2)%(x3|x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x7 = 3547U;
	volatile int16_t x8 = 13515;
	volatile uint32_t t1 = 367869U;

	t1 = ((x5==x6)%(x7|x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	static volatile int8_t x10 = INT8_MAX;
	int8_t x11 = -1;
	uint8_t x12 = 9U;
	int32_t t2 = -31;

	t2 = ((x9==x10)%(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static int64_t x14 = INT64_MIN;
	uint32_t x15 = UINT32_MAX;
	volatile uint16_t x16 = UINT16_MAX;
	volatile uint32_t t3 = 1U;

	t3 = ((x13==x14)%(x15|x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x20 = 555768830LL;
	volatile int64_t t4 = 5845562347LL;

	t4 = ((x17==x18)%(x19|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MAX;
	volatile int8_t x23 = -9;
	int32_t x24 = -1;
	volatile int32_t t5 = -173;

	t5 = ((x21==x22)%(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = INT8_MAX;
	static int16_t x27 = -1;
	static volatile int32_t t6 = -27;

	t6 = ((x25==x26)%(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	volatile uint32_t x30 = 12U;
	int8_t x31 = 42;
	int64_t x32 = INT64_MIN;

	t7 = ((x29==x30)%(x31|x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -1;
	int8_t x35 = INT8_MAX;
	int32_t t8 = -7863471;

	t8 = ((x33==x34)%(x35|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MAX;
	uint8_t x39 = 14U;
	int8_t x40 = 5;
	int32_t t9 = 10365;

	t9 = ((x37==x38)%(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = UINT16_MAX;
	volatile int16_t x42 = -1;
	volatile int64_t x43 = INT64_MIN;
	static uint16_t x44 = UINT16_MAX;
	volatile int64_t t10 = 2LL;

	t10 = ((x41==x42)%(x43|x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int64_t x46 = INT64_MIN;
	int16_t x47 = 15;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 0;

	t11 = ((x45==x46)%(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -66999;
	static int8_t x50 = -1;
	static int8_t x51 = -1;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -8200776;

	t12 = ((x49==x50)%(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int32_t x55 = -13;
	uint8_t x56 = 46U;
	static int32_t t13 = -154;

	t13 = ((x53==x54)%(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 27753U;
	int64_t x58 = -552LL;
	int16_t x59 = -1;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = -577708079;

	t14 = ((x57==x58)%(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	static int64_t x63 = INT64_MIN;
	int64_t x64 = 318103LL;

	t15 = ((x61==x62)%(x63|x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	volatile uint32_t x67 = UINT32_MAX;
	volatile uint32_t t16 = 14U;

	t16 = ((x65==x66)%(x67|x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint16_t x70 = 1U;
	int64_t x71 = INT64_MAX;
	uint16_t x72 = 182U;
	static int64_t t17 = 1026825158723373676LL;

	t17 = ((x69==x70)%(x71|x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 2093U;
	static volatile int32_t x74 = -279;
	int32_t x75 = -1;
	int16_t x76 = INT16_MAX;

	t18 = ((x73==x74)%(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 14256U;
	uint32_t x79 = 441U;
	volatile uint64_t x80 = 23947003405159037LLU;

	t19 = ((x77==x78)%(x79|x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	static volatile uint64_t x82 = 387LLU;
	static volatile int64_t t20 = -3LL;

	t20 = ((x81==x82)%(x83|x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = 51;
	volatile int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 0;

	t21 = ((x85==x86)%(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static int8_t x91 = -19;
	uint64_t x92 = 7991509883LLU;
	volatile uint64_t t22 = 65LLU;

	t22 = ((x89==x90)%(x91|x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MAX;
	int32_t x94 = 14;
	int16_t x95 = INT16_MAX;
	static int32_t x96 = INT32_MAX;

	t23 = ((x93==x94)%(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int32_t x98 = -1;
	int64_t x99 = INT64_MIN;
	int64_t t24 = 0LL;

	t24 = ((x97==x98)%(x99|x100));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	static int8_t x102 = 4;
	int32_t x103 = INT32_MIN;
	uint16_t x104 = 183U;
	int32_t t25 = 637987;

	t25 = ((x101==x102)%(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	volatile int16_t x106 = INT16_MIN;
	int32_t x107 = INT32_MAX;
	int32_t x108 = 66209779;
	int32_t t26 = -3336;

	t26 = ((x105==x106)%(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	uint32_t x110 = 1475269069U;
	int16_t x112 = -4568;
	static volatile int32_t t27 = 1514;

	t27 = ((x109==x110)%(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -9;
	int32_t x114 = INT32_MIN;
	int32_t x115 = -2205584;
	volatile uint8_t x116 = UINT8_MAX;
	int32_t t28 = 80;

	t28 = ((x113==x114)%(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int64_t x118 = INT64_MIN;
	int16_t x119 = INT16_MAX;
	int64_t x120 = -673678962444784LL;
	volatile int64_t t29 = -7421LL;

	t29 = ((x117==x118)%(x119|x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 39646;
	int64_t x122 = -25LL;
	volatile uint64_t t30 = 7977692616398812LLU;

	t30 = ((x121==x122)%(x123|x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = INT8_MAX;
	int16_t x127 = INT16_MIN;
	int64_t x128 = -1LL;
	int64_t t31 = -181LL;

	t31 = ((x125==x126)%(x127|x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x130 = INT64_MIN;
	uint16_t x131 = UINT16_MAX;
	uint16_t x132 = 7769U;
	volatile int32_t t32 = 3114889;

	t32 = ((x129==x130)%(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 3828063LL;
	int8_t x134 = -1;
	uint32_t x135 = 100648U;
	int64_t t33 = 29370324LL;

	t33 = ((x133==x134)%(x135|x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile int64_t x138 = INT64_MIN;
	uint32_t x139 = 51148562U;
	uint8_t x140 = 5U;
	uint32_t t34 = 3U;

	t34 = ((x137==x138)%(x139|x140));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MAX;
	int64_t x143 = INT64_MIN;
	static int8_t x144 = 1;
	static volatile int64_t t35 = -1LL;

	t35 = ((x141==x142)%(x143|x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	static volatile int64_t x146 = -150174LL;
	int16_t x147 = INT16_MAX;
	int8_t x148 = INT8_MIN;
	int32_t t36 = -15642;

	t36 = ((x145==x146)%(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -159551998376LL;
	int8_t x150 = -3;
	uint8_t x151 = UINT8_MAX;
	volatile uint32_t x152 = UINT32_MAX;
	volatile uint32_t t37 = 52531305U;

	t37 = ((x149==x150)%(x151|x152));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x153 = UINT64_MAX;
	static int32_t x154 = -1;
	static int32_t x155 = INT32_MIN;
	volatile uint64_t x156 = 34177857572504LLU;
	uint64_t t38 = 982133LLU;

	t38 = ((x153==x154)%(x155|x156));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 1996U;
	int32_t x158 = INT32_MIN;
	int8_t x160 = 1;
	volatile int32_t t39 = 4432;

	t39 = ((x157==x158)%(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = 6953;
	volatile uint32_t x164 = 5730U;
	volatile uint32_t t40 = 974046U;

	t40 = ((x161==x162)%(x163|x164));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	volatile int64_t x166 = INT64_MIN;
	int8_t x168 = -1;
	uint64_t t41 = 698313924586437034LLU;

	t41 = ((x165==x166)%(x167|x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = 44164;
	int64_t x170 = INT64_MAX;
	volatile uint8_t x172 = 59U;
	static volatile int64_t t42 = -34838740LL;

	t42 = ((x169==x170)%(x171|x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	uint16_t x174 = UINT16_MAX;
	volatile int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -14;

	t43 = ((x173==x174)%(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = UINT64_MAX;
	uint32_t x178 = 162687135U;
	int32_t x179 = INT32_MIN;
	int64_t x180 = -1LL;
	volatile int64_t t44 = 1501LL;

	t44 = ((x177==x178)%(x179|x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 1U;
	int64_t x182 = INT64_MIN;
	volatile int32_t x184 = INT32_MAX;
	int32_t t45 = 1353914;

	t45 = ((x181==x182)%(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x186 = INT8_MIN;
	int32_t x188 = 10726409;
	volatile int32_t t46 = -64366994;

	t46 = ((x185==x186)%(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = -2149800310LL;
	int64_t x190 = -1LL;
	static uint32_t x191 = 57964U;
	static volatile uint16_t x192 = 14228U;
	uint32_t t47 = 2940U;

	t47 = ((x189==x190)%(x191|x192));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 2U;
	int8_t x194 = INT8_MIN;
	volatile int32_t x195 = 2008;
	int32_t x196 = -52235;

	t48 = ((x193==x194)%(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	volatile uint16_t x198 = 248U;
	static volatile int16_t x199 = INT16_MIN;
	volatile uint8_t x200 = UINT8_MAX;

	t49 = ((x197==x198)%(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x201 = 1827LLU;
	volatile uint32_t t50 = 4900454U;

	t50 = ((x201==x202)%(x203|x204));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x206 = INT8_MIN;
	static int8_t x207 = 42;
	int32_t x208 = -1;
	int32_t t51 = 81;

	t51 = ((x205==x206)%(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = 15292383243LL;
	uint32_t x211 = 509541433U;
	int16_t x212 = 59;
	volatile uint32_t t52 = 4U;

	t52 = ((x209==x210)%(x211|x212));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = UINT32_MAX;
	static int8_t x215 = 56;
	int64_t x216 = -1LL;
	int64_t t53 = 0LL;

	t53 = ((x213==x214)%(x215|x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x218 = INT8_MIN;
	static int64_t x219 = INT64_MIN;
	volatile int32_t x220 = INT32_MIN;

	t54 = ((x217==x218)%(x219|x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = 1053479331934441397LL;
	static int32_t x222 = INT32_MAX;
	uint32_t x223 = UINT32_MAX;
	volatile uint32_t t55 = 195326775U;

	t55 = ((x221==x222)%(x223|x224));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x226 = -1;
	static int16_t x227 = 942;
	static int32_t x228 = -1;

	t56 = ((x225==x226)%(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MAX;
	static int16_t x231 = INT16_MIN;
	uint8_t x232 = 3U;

	t57 = ((x229==x230)%(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -2161;
	int64_t x234 = INT64_MIN;
	static int64_t x235 = -1LL;
	uint8_t x236 = 0U;
	int64_t t58 = -979252374157LL;

	t58 = ((x233==x234)%(x235|x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 616U;
	int64_t x238 = INT64_MIN;
	int16_t x239 = -1;
	volatile int32_t t59 = 2;

	t59 = ((x237==x238)%(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile uint32_t x243 = 77U;
	uint32_t x244 = 58787285U;
	volatile uint32_t t60 = 129486U;

	t60 = ((x241==x242)%(x243|x244));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 12879874885564LLU;
	volatile int8_t x247 = -2;
	int32_t t61 = -32151158;

	t61 = ((x245==x246)%(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 3841U;
	static int8_t x250 = INT8_MIN;
	uint16_t x251 = 173U;
	int8_t x252 = -1;

	t62 = ((x249==x250)%(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = -191;
	uint64_t x254 = 8551LLU;
	int16_t x255 = INT16_MIN;
	volatile int64_t x256 = -1LL;
	volatile int64_t t63 = 1387878605107492261LL;

	t63 = ((x253==x254)%(x255|x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int8_t x259 = -1;
	int32_t x260 = -1;
	int32_t t64 = 39012;

	t64 = ((x257==x258)%(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = 5;
	uint64_t x263 = UINT64_MAX;
	int16_t x264 = INT16_MIN;
	uint64_t t65 = 88LLU;

	t65 = ((x261==x262)%(x263|x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 0U;
	static int64_t x267 = -1690087670095LL;
	static int32_t x268 = -1;
	static int64_t t66 = 20327LL;

	t66 = ((x265==x266)%(x267|x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 21U;
	int16_t x270 = INT16_MIN;
	int8_t x271 = -8;
	int32_t x272 = INT32_MIN;
	volatile int32_t t67 = -13;

	t67 = ((x269==x270)%(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -25142159LL;
	int8_t x274 = INT8_MIN;
	uint16_t x275 = 0U;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = 9602;

	t68 = ((x273==x274)%(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	uint64_t x278 = 25547LLU;
	int64_t x279 = INT64_MIN;
	uint16_t x280 = UINT16_MAX;
	volatile int64_t t69 = 3662890000LL;

	t69 = ((x277==x278)%(x279|x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	int64_t x282 = INT64_MIN;
	int32_t x284 = 60;
	int32_t t70 = 13113768;

	t70 = ((x281==x282)%(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x286 = UINT64_MAX;
	volatile int16_t x287 = INT16_MAX;
	volatile int16_t x288 = INT16_MIN;
	static int32_t t71 = 7813498;

	t71 = ((x285==x286)%(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 53165LLU;
	int32_t x290 = -265;
	uint32_t x292 = 654589586U;
	uint32_t t72 = 1995210U;

	t72 = ((x289==x290)%(x291|x292));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	int32_t x294 = 466;
	static uint8_t x296 = 1U;

	t73 = ((x293==x294)%(x295|x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x298 = 83041U;
	int64_t x299 = -1764950853LL;
	int32_t x300 = -1;
	volatile int64_t t74 = -1LL;

	t74 = ((x297==x298)%(x299|x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 18LLU;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MAX;
	int32_t t75 = 11734320;

	t75 = ((x301==x302)%(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MIN;
	volatile int8_t x306 = INT8_MIN;
	uint16_t x307 = 2341U;
	int16_t x308 = 147;
	volatile int32_t t76 = -600710803;

	t76 = ((x305==x306)%(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	uint8_t x312 = 106U;
	volatile int32_t t77 = 1969;

	t77 = ((x309==x310)%(x311|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 21784721U;
	volatile uint8_t x314 = 3U;
	int64_t x316 = -1523914104729877612LL;

	t78 = ((x313==x314)%(x315|x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 1U;
	volatile int64_t x319 = INT64_MAX;
	int64_t x320 = 12778751LL;
	volatile int64_t t79 = 1LL;

	t79 = ((x317==x318)%(x319|x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MIN;
	int16_t x323 = -1;
	static int16_t x324 = INT16_MIN;
	int32_t t80 = 129514167;

	t80 = ((x321==x322)%(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	volatile int8_t x326 = INT8_MAX;
	volatile int64_t t81 = 33313173348809LL;

	t81 = ((x325==x326)%(x327|x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 0U;
	volatile uint8_t x330 = 93U;
	int32_t x331 = INT32_MIN;
	int32_t x332 = -1;
	int32_t t82 = -581705;

	t82 = ((x329==x330)%(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	volatile uint32_t x334 = 666913U;
	int8_t x335 = 23;
	volatile uint8_t x336 = UINT8_MAX;
	int32_t t83 = 1;

	t83 = ((x333==x334)%(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 30U;
	uint64_t x339 = UINT64_MAX;
	uint64_t t84 = 4098983725LLU;

	t84 = ((x337==x338)%(x339|x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	uint8_t x342 = UINT8_MAX;
	int64_t x343 = INT64_MIN;
	int64_t t85 = -5475019831523LL;

	t85 = ((x341==x342)%(x343|x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	static uint16_t x346 = 921U;
	volatile int8_t x348 = -1;
	int32_t t86 = 67419;

	t86 = ((x345==x346)%(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = 51U;
	volatile uint16_t x350 = UINT16_MAX;
	volatile int16_t x352 = -1803;
	volatile int32_t t87 = 52192;

	t87 = ((x349==x350)%(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = UINT32_MAX;
	static int32_t x354 = INT32_MIN;
	volatile int16_t x355 = 2585;
	int64_t t88 = 6797573477LL;

	t88 = ((x353==x354)%(x355|x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x359 = INT8_MAX;
	uint32_t x360 = 1178U;
	uint32_t t89 = 15U;

	t89 = ((x357==x358)%(x359|x360));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = UINT32_MAX;
	int32_t x362 = 16710142;
	static int16_t x363 = -339;
	volatile uint64_t t90 = 89194188733LLU;

	t90 = ((x361==x362)%(x363|x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int8_t x367 = INT8_MAX;
	uint64_t x368 = 511702LLU;
	static volatile uint64_t t91 = 12545176LLU;

	t91 = ((x365==x366)%(x367|x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	static volatile uint64_t x370 = UINT64_MAX;
	static volatile int8_t x372 = INT8_MIN;

	t92 = ((x369==x370)%(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	uint64_t x374 = 19707435LLU;
	int16_t x375 = 4996;
	uint8_t x376 = 13U;
	static volatile int32_t t93 = -6236804;

	t93 = ((x373==x374)%(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	static volatile int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MAX;
	int8_t x380 = 9;
	static int32_t t94 = -114;

	t94 = ((x377==x378)%(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = -1;
	uint64_t x383 = UINT64_MAX;
	int8_t x384 = INT8_MAX;
	uint64_t t95 = 1171257LLU;

	t95 = ((x381==x382)%(x383|x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x386 = UINT32_MAX;
	volatile uint16_t x387 = 44U;
	volatile int32_t t96 = 2056;

	t96 = ((x385==x386)%(x387|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	uint32_t x390 = 2114U;
	int64_t x391 = -396LL;
	int8_t x392 = -3;
	volatile int64_t t97 = -28502607LL;

	t97 = ((x389==x390)%(x391|x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = INT8_MIN;
	int8_t x394 = -1;
	uint16_t x395 = 6U;

	t98 = ((x393==x394)%(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = UINT16_MAX;
	static uint32_t x398 = 19U;
	uint8_t x399 = 76U;
	static int8_t x400 = 0;
	int32_t t99 = 36;

	t99 = ((x397==x398)%(x399|x400));

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

