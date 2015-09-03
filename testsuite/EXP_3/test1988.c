#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = 1;
int16_t x14 = INT16_MAX;
static int64_t x15 = INT64_MIN;
volatile int8_t x20 = INT8_MIN;
uint16_t x23 = 204U;
int64_t x28 = -1LL;
int16_t x31 = INT16_MIN;
uint32_t x34 = UINT32_MAX;
int8_t x36 = INT8_MIN;
uint64_t x41 = 206444433545682LLU;
static volatile int32_t t11 = 108571374;
int64_t x50 = 695LL;
int32_t x53 = INT32_MIN;
int8_t x57 = INT8_MIN;
volatile int8_t x59 = -18;
int32_t t15 = 99847;
int16_t x67 = INT16_MIN;
int8_t x68 = INT8_MAX;
static volatile int32_t t16 = -6627669;
static int8_t x70 = -1;
uint8_t x72 = 0U;
int32_t x80 = -1;
static uint16_t x83 = 69U;
volatile int8_t x95 = INT8_MIN;
uint64_t x96 = 10689899067140LLU;
volatile int16_t x98 = -1;
volatile int16_t x99 = -1;
volatile uint16_t x101 = UINT16_MAX;
int64_t x103 = INT64_MIN;
int16_t x104 = INT16_MIN;
static uint64_t x106 = 8165320671642LLU;
static volatile int32_t x108 = 288397;
int32_t x110 = INT32_MIN;
volatile int32_t x112 = -1;
volatile int16_t x118 = INT16_MIN;
volatile uint64_t x122 = 247932775541LLU;
static int8_t x125 = -1;
int32_t x127 = INT32_MIN;
uint16_t x137 = 4841U;
volatile int8_t x140 = INT8_MIN;
int64_t x144 = INT64_MIN;
static int64_t x146 = 789970707604LL;
static int32_t x150 = -1;
int8_t x152 = INT8_MIN;
int64_t x156 = 4689LL;
int64_t x170 = -464LL;
int32_t x176 = 36177702;
uint16_t x177 = UINT16_MAX;
int16_t x186 = 59;
uint32_t x187 = 152U;
uint8_t x188 = UINT8_MAX;
int32_t x190 = -1;
uint64_t x193 = 215353222412097LLU;
volatile int32_t t49 = -18989;
static int64_t x202 = INT64_MIN;
static int32_t x208 = -1;
uint32_t x210 = 3804318U;
volatile int8_t x211 = INT8_MAX;
volatile int64_t x213 = -1LL;
int64_t x222 = -107733396471309858LL;
int8_t x224 = 0;
static volatile int32_t t56 = INT32_MAX;
uint64_t x240 = UINT64_MAX;
static uint16_t x241 = 16710U;
int8_t x244 = 57;
int32_t t60 = 1;
uint8_t x245 = 84U;
static volatile uint32_t t63 = UINT32_MAX;
int8_t x262 = INT8_MIN;
int8_t x265 = -1;
int8_t x267 = -1;
uint16_t x281 = 218U;
int32_t x282 = INT32_MAX;
static volatile uint64_t t70 = UINT64_MAX;
uint32_t x286 = 731597262U;
uint8_t x289 = 0U;
uint16_t x299 = 228U;
int16_t x301 = -1;
static int8_t x303 = 41;
int32_t x313 = INT32_MIN;
int16_t x319 = -1;
int32_t t81 = 2427466;
uint32_t x335 = UINT32_MAX;
uint8_t x338 = 6U;
static int16_t x340 = INT16_MIN;
int64_t t84 = -691908740010LL;
uint16_t x342 = UINT16_MAX;
uint16_t x343 = 1U;
int32_t x344 = INT32_MIN;
int32_t t85 = 175;
int32_t t86 = -6769;
volatile int64_t t91 = -76384207LL;
volatile uint64_t x372 = 15260LLU;
uint64_t x376 = 12550743777971LLU;
int64_t x389 = -1LL;
static int64_t t97 = 757930540455405522LL;
static volatile int8_t x394 = INT8_MIN;
volatile int32_t x396 = INT32_MIN;
static uint32_t x400 = 4631U;


void f0(void) {
	int32_t x1 = -64119486;
	int64_t x2 = INT64_MIN;
	volatile int32_t x3 = -1;
	static int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -472;

	t0 = ((x1<=x2)|(x3|x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 32969342232456LL;
	int64_t x6 = -108298970426937LL;
	volatile uint64_t x7 = 80284376774LLU;
	static uint16_t x8 = UINT16_MAX;
	volatile uint64_t t1 = 57LLU;

	t1 = ((x5<=x6)|(x7|x8));

	if (t1 != 80284418047LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int64_t x11 = -1LL;
	uint64_t x12 = 114LLU;
	uint64_t t2 = UINT64_MAX;

	t2 = ((x9<=x10)|(x11|x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 12U;
	static int16_t x16 = INT16_MIN;
	int64_t t3 = -1969468LL;

	t3 = ((x13<=x14)|(x15|x16));

	if (t3 != -32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -903;
	static uint32_t x18 = UINT32_MAX;
	static int16_t x19 = -3;
	volatile int32_t t4 = -43190607;

	t4 = ((x17<=x18)|(x19|x20));

	if (t4 != -3) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	volatile int16_t x22 = INT16_MIN;
	int8_t x24 = -1;
	int32_t t5 = 31993347;

	t5 = ((x21<=x22)|(x23|x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	int64_t x26 = INT64_MIN;
	volatile int64_t x27 = INT64_MIN;
	int64_t t6 = -27165LL;

	t6 = ((x25<=x26)|(x27|x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint16_t x30 = UINT16_MAX;
	int32_t x32 = 903154435;
	static volatile int32_t t7 = -44;

	t7 = ((x29<=x30)|(x31|x32));

	if (t7 != -29949) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -1LL;
	int32_t x35 = INT32_MIN;
	volatile int32_t t8 = 1;

	t8 = ((x33<=x34)|(x35|x36));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int8_t x38 = 31;
	static uint64_t x39 = 7044LLU;
	static int16_t x40 = INT16_MIN;
	uint64_t t9 = 1402805204LLU;

	t9 = ((x37<=x38)|(x39|x40));

	if (t9 != 18446744073709525893LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x42 = 708343U;
	uint8_t x43 = 32U;
	int64_t x44 = -33743226416339120LL;
	volatile int64_t t10 = -28712LL;

	t10 = ((x41<=x42)|(x43|x44));

	if (t10 != -33743226416339088LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 13;
	uint16_t x46 = 1U;
	static int32_t x47 = 12449;
	volatile int32_t x48 = INT32_MIN;

	t11 = ((x45<=x46)|(x47|x48));

	if (t11 != -2147471199) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x49 = UINT16_MAX;
	uint64_t x51 = 582464532919LLU;
	int8_t x52 = -26;
	uint64_t t12 = 310747618873375049LLU;

	t12 = ((x49<=x50)|(x51|x52));

	if (t12 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = 106002U;
	int8_t x55 = 1;
	static uint8_t x56 = 1U;
	static int32_t t13 = -1819;

	t13 = ((x53<=x54)|(x55|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x58 = 20U;
	int16_t x60 = -231;
	static volatile int32_t t14 = 223;

	t14 = ((x57<=x58)|(x59|x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int64_t x62 = -1LL;
	static int8_t x63 = INT8_MIN;
	static volatile int8_t x64 = -1;

	t15 = ((x61<=x62)|(x63|x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	int32_t x66 = 7;

	t16 = ((x65<=x66)|(x67|x68));

	if (t16 != -32641) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 2U;
	static volatile int64_t x71 = INT64_MIN;
	static int64_t t17 = INT64_MIN;

	t17 = ((x69<=x70)|(x71|x72));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 21U;
	static int8_t x74 = 3;
	uint8_t x75 = 14U;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 44316824;

	t18 = ((x73<=x74)|(x75|x76));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = 0U;
	int8_t x78 = INT8_MIN;
	int64_t x79 = 260877523LL;
	int64_t t19 = -4LL;

	t19 = ((x77<=x78)|(x79|x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint64_t x82 = 1872LLU;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -125;

	t20 = ((x81<=x82)|(x83|x84));

	if (t20 != -2147483579) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 173U;
	uint64_t x86 = UINT64_MAX;
	int32_t x87 = 9;
	int8_t x88 = -1;
	int32_t t21 = -5099752;

	t21 = ((x85<=x86)|(x87|x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int64_t x90 = -2144961LL;
	static int8_t x91 = INT8_MIN;
	int16_t x92 = -1;
	static volatile int32_t t22 = -5;

	t22 = ((x89<=x90)|(x91|x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	volatile int32_t x94 = -1;
	volatile uint64_t t23 = 3198744559689698553LLU;

	t23 = ((x93<=x94)|(x95|x96));

	if (t23 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	static int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -63546;

	t24 = ((x97<=x98)|(x99|x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x102 = 2U;
	volatile int64_t t25 = -10656191472744LL;

	t25 = ((x101<=x102)|(x103|x104));

	if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint8_t x107 = 3U;
	int32_t t26 = 19234;

	t26 = ((x105<=x106)|(x107|x108));

	if (t26 != 288399) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MAX;
	volatile uint16_t x111 = UINT16_MAX;
	volatile int32_t t27 = -101779726;

	t27 = ((x109<=x110)|(x111|x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 70751249834618518LLU;
	int64_t x114 = 13012811LL;
	volatile uint8_t x115 = 10U;
	uint64_t x116 = 9649LLU;
	uint64_t t28 = 213LLU;

	t28 = ((x113<=x114)|(x115|x116));

	if (t28 != 9659LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 111176061746125343LLU;
	static volatile int8_t x119 = -1;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -296774;

	t29 = ((x117<=x118)|(x119|x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 32029LLU;
	static int64_t x123 = INT64_MIN;
	volatile int32_t x124 = -1;
	int64_t t30 = 134286592561LL;

	t30 = ((x121<=x122)|(x123|x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x126 = UINT32_MAX;
	int16_t x128 = -7;
	int32_t t31 = -17;

	t31 = ((x125<=x126)|(x127|x128));

	if (t31 != -7) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 1;
	int8_t x130 = 61;
	int8_t x131 = 1;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = -11056045;

	t32 = ((x129<=x130)|(x131|x132));

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -7;
	static int16_t x134 = -15964;
	int8_t x135 = -14;
	int8_t x136 = 14;
	int32_t t33 = 181474;

	t33 = ((x133<=x134)|(x135|x136));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x138 = 288027U;
	int16_t x139 = 4;
	int32_t t34 = -90323;

	t34 = ((x137<=x138)|(x139|x140));

	if (t34 != -123) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 1952977LLU;
	volatile uint16_t x142 = 9358U;
	int64_t x143 = -1LL;
	static int64_t t35 = -109662540112353515LL;

	t35 = ((x141<=x142)|(x143|x144));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	static uint64_t x147 = 4641975940270133890LLU;
	volatile uint64_t x148 = 200091416577LLU;
	volatile uint64_t t36 = 23LLU;

	t36 = ((x145<=x146)|(x147|x148));

	if (t36 != 4641976120662997635LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile uint16_t x151 = 274U;
	int32_t t37 = -679957559;

	t37 = ((x149<=x150)|(x151|x152));

	if (t37 != -109) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = 1;
	volatile uint8_t x155 = UINT8_MAX;
	volatile int64_t t38 = -579847LL;

	t38 = ((x153<=x154)|(x155|x156));

	if (t38 != 4863LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	uint8_t x158 = 0U;
	int8_t x159 = 4;
	static volatile int64_t x160 = INT64_MAX;
	int64_t t39 = INT64_MAX;

	t39 = ((x157<=x158)|(x159|x160));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 39031394U;
	uint32_t x162 = UINT32_MAX;
	static int64_t x163 = INT64_MIN;
	uint32_t x164 = 2034813421U;
	volatile int64_t t40 = 1378626680403484LL;

	t40 = ((x161<=x162)|(x163|x164));

	if (t40 != -9223372034819962387LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = -9;
	int16_t x166 = INT16_MAX;
	volatile int32_t x167 = -372283;
	uint32_t x168 = 7407U;
	uint32_t t41 = 27U;

	t41 = ((x165<=x166)|(x167|x168));

	if (t41 != 4294598127U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = UINT16_MAX;
	volatile int64_t x171 = -1LL;
	uint8_t x172 = 57U;
	volatile int64_t t42 = -441899181158382LL;

	t42 = ((x169<=x170)|(x171|x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x173 = 3470086857LLU;
	static int8_t x174 = INT8_MAX;
	int8_t x175 = INT8_MIN;
	volatile int32_t t43 = -1835148;

	t43 = ((x173<=x174)|(x175|x176));

	if (t43 != -90) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -1;
	uint64_t x179 = 49837958LLU;
	uint16_t x180 = 2551U;
	volatile uint64_t t44 = 24667148LLU;

	t44 = ((x177<=x178)|(x179|x180));

	if (t44 != 49840119LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int8_t x182 = INT8_MAX;
	int8_t x183 = INT8_MIN;
	uint64_t x184 = 3499366661089LLU;
	uint64_t t45 = 306200283447882195LLU;

	t45 = ((x181<=x182)|(x183|x184));

	if (t45 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x185 = UINT64_MAX;
	volatile uint32_t t46 = 601547U;

	t46 = ((x185<=x186)|(x187|x188));

	if (t46 != 255U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -1;
	int32_t x191 = -2657;
	static int16_t x192 = INT16_MAX;
	static volatile int32_t t47 = -134138102;

	t47 = ((x189<=x190)|(x191|x192));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x194 = INT32_MIN;
	volatile int32_t x195 = INT32_MAX;
	volatile uint8_t x196 = 20U;
	static int32_t t48 = INT32_MAX;

	t48 = ((x193<=x194)|(x195|x196));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = 15105;
	int64_t x198 = INT64_MIN;
	static int16_t x199 = 325;
	static int16_t x200 = -4;

	t49 = ((x197<=x198)|(x199|x200));

	if (t49 != -3) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	volatile int16_t x203 = 7748;
	int64_t x204 = INT64_MAX;
	int64_t t50 = INT64_MAX;

	t50 = ((x201<=x202)|(x203|x204));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = -1LL;
	int64_t x207 = INT64_MAX;
	static volatile int64_t t51 = -1027870791794659LL;

	t51 = ((x205<=x206)|(x207|x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	int8_t x212 = INT8_MAX;
	volatile int32_t t52 = 12054001;

	t52 = ((x209<=x210)|(x211|x212));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = -1LL;
	uint16_t x215 = 8256U;
	static int64_t x216 = -1LL;
	volatile int64_t t53 = 2141797217271583LL;

	t53 = ((x213<=x214)|(x215|x216));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	static int64_t x218 = INT64_MAX;
	int32_t x219 = INT32_MAX;
	volatile int64_t x220 = -595252LL;
	volatile int64_t t54 = -1836125978456775LL;

	t54 = ((x217<=x218)|(x219|x220));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int64_t x223 = INT64_MAX;
	int64_t t55 = INT64_MAX;

	t55 = ((x221<=x222)|(x223|x224));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 32510U;
	int16_t x226 = -6259;
	uint8_t x227 = UINT8_MAX;
	int32_t x228 = INT32_MAX;

	t56 = ((x225<=x226)|(x227|x228));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -37;
	int32_t x230 = 13599540;
	uint16_t x231 = UINT16_MAX;
	int32_t x232 = INT32_MAX;
	volatile int32_t t57 = INT32_MAX;

	t57 = ((x229<=x230)|(x231|x232));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	uint8_t x234 = UINT8_MAX;
	volatile int16_t x235 = -1;
	uint16_t x236 = 8U;
	static volatile int32_t t58 = 8892;

	t58 = ((x233<=x234)|(x235|x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x237 = -1;
	int16_t x238 = INT16_MAX;
	uint32_t x239 = 11U;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = ((x237<=x238)|(x239|x240));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = 122U;
	int32_t x243 = INT32_MIN;

	t60 = ((x241<=x242)|(x243|x244));

	if (t60 != -2147483591) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x246 = UINT8_MAX;
	volatile int16_t x247 = -1;
	volatile int16_t x248 = 8677;
	int32_t t61 = 47;

	t61 = ((x245<=x246)|(x247|x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int32_t x250 = INT32_MIN;
	int8_t x251 = -1;
	int8_t x252 = 2;
	volatile int32_t t62 = 60061;

	t62 = ((x249<=x250)|(x251|x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	static volatile uint8_t x254 = 0U;
	int32_t x255 = -245;
	uint32_t x256 = UINT32_MAX;

	t63 = ((x253<=x254)|(x255|x256));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = 380;
	uint16_t x258 = 38U;
	static int32_t x259 = 1;
	volatile int32_t x260 = -1;
	volatile int32_t t64 = -6581;

	t64 = ((x257<=x258)|(x259|x260));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -6;
	uint8_t x263 = 22U;
	static int16_t x264 = INT16_MIN;
	int32_t t65 = 7141;

	t65 = ((x261<=x262)|(x263|x264));

	if (t65 != -32746) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = 0;
	uint64_t x268 = 6476893LLU;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x265<=x266)|(x267|x268));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -3091441;
	int32_t x270 = -1;
	volatile int64_t x271 = 29588717942428222LL;
	int8_t x272 = INT8_MIN;
	int64_t t67 = 6LL;

	t67 = ((x269<=x270)|(x271|x272));

	if (t67 != -65LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = 106;
	int16_t x275 = INT16_MIN;
	volatile int8_t x276 = -1;
	int32_t t68 = 74155299;

	t68 = ((x273<=x274)|(x275|x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint64_t x278 = 1LLU;
	int8_t x279 = -28;
	volatile int32_t x280 = INT32_MIN;
	int32_t t69 = 2;

	t69 = ((x277<=x278)|(x279|x280));

	if (t69 != -28) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x283 = UINT64_MAX;
	uint8_t x284 = 1U;

	t70 = ((x281<=x282)|(x283|x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	static volatile int32_t x287 = INT32_MAX;
	uint8_t x288 = 88U;
	static int32_t t71 = INT32_MAX;

	t71 = ((x285<=x286)|(x287|x288));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MIN;
	volatile int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MAX;
	volatile int64_t t72 = 1399927906724030LL;

	t72 = ((x289<=x290)|(x291|x292));

	if (t72 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MIN;
	uint16_t x295 = 54U;
	uint8_t x296 = 14U;
	volatile int32_t t73 = -1;

	t73 = ((x293<=x294)|(x295|x296));

	if (t73 != 63) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	uint32_t x298 = 10059681U;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t74 = 246;

	t74 = ((x297<=x298)|(x299|x300));

	if (t74 != -2147483420) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	int64_t t75 = 664791508LL;

	t75 = ((x301<=x302)|(x303|x304));

	if (t75 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = INT32_MIN;
	volatile uint32_t x307 = 58001U;
	int16_t x308 = INT16_MIN;
	static volatile uint32_t t76 = 7280369U;

	t76 = ((x305<=x306)|(x307|x308));

	if (t76 != 4294959761U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 0;
	int32_t x310 = INT32_MAX;
	uint8_t x311 = UINT8_MAX;
	volatile uint32_t x312 = 2273107U;
	volatile uint32_t t77 = 68973132U;

	t77 = ((x309<=x310)|(x311|x312));

	if (t77 != 2273279U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = 23LL;
	volatile int16_t x315 = -112;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t78 = 12;

	t78 = ((x313<=x314)|(x315|x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 31U;
	uint64_t x318 = 100LLU;
	int8_t x320 = INT8_MAX;
	volatile int32_t t79 = -7383360;

	t79 = ((x317<=x318)|(x319|x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	int64_t x322 = INT64_MIN;
	uint8_t x323 = 19U;
	int16_t x324 = -1514;
	static int32_t t80 = 480;

	t80 = ((x321<=x322)|(x323|x324));

	if (t80 != -1513) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MIN;

	t81 = ((x325<=x326)|(x327|x328));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	static int16_t x330 = -60;
	static int16_t x331 = -53;
	int32_t x332 = 201862;
	static int32_t t82 = -1;

	t82 = ((x329<=x330)|(x331|x332));

	if (t82 != -49) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x333 = UINT32_MAX;
	volatile int32_t x334 = -6;
	volatile int16_t x336 = INT16_MAX;
	uint32_t t83 = UINT32_MAX;

	t83 = ((x333<=x334)|(x335|x336));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MIN;
	static int64_t x339 = INT64_MIN;

	t84 = ((x337<=x338)|(x339|x340));

	if (t84 != -32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x341 = 0;

	t85 = ((x341<=x342)|(x343|x344));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	uint16_t x346 = 2613U;
	uint16_t x347 = 128U;
	int8_t x348 = INT8_MIN;

	t86 = ((x345<=x346)|(x347|x348));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	int32_t x350 = -1;
	static volatile int8_t x351 = INT8_MIN;
	int64_t x352 = INT64_MIN;
	static volatile int64_t t87 = -1LL;

	t87 = ((x349<=x350)|(x351|x352));

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MAX;
	int16_t x354 = INT16_MAX;
	int16_t x355 = INT16_MAX;
	uint8_t x356 = 12U;
	static volatile int32_t t88 = 238;

	t88 = ((x353<=x354)|(x355|x356));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	int64_t x358 = -1LL;
	int16_t x359 = 63;
	uint16_t x360 = 373U;
	int32_t t89 = 1443629;

	t89 = ((x357<=x358)|(x359|x360));

	if (t89 != 383) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = -60;
	int64_t x363 = 28LL;
	uint64_t x364 = 1LLU;
	static volatile uint64_t t90 = 11446991480LLU;

	t90 = ((x361<=x362)|(x363|x364));

	if (t90 != 29LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 37U;
	static int8_t x366 = INT8_MAX;
	uint32_t x367 = UINT32_MAX;
	volatile int64_t x368 = INT64_MIN;

	t91 = ((x365<=x366)|(x367|x368));

	if (t91 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	static uint32_t x370 = 184359676U;
	int8_t x371 = INT8_MIN;
	volatile uint64_t t92 = 4781336842196515654LLU;

	t92 = ((x369<=x370)|(x371|x372));

	if (t92 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = INT64_MIN;
	int32_t x375 = -1;
	uint64_t t93 = UINT64_MAX;

	t93 = ((x373<=x374)|(x375|x376));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1549726;
	int64_t x378 = INT64_MIN;
	uint16_t x379 = 29U;
	static uint16_t x380 = 4738U;
	volatile int32_t t94 = -1;

	t94 = ((x377<=x378)|(x379|x380));

	if (t94 != 4767) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 30368U;
	static uint8_t x382 = 2U;
	uint32_t x383 = UINT32_MAX;
	int8_t x384 = INT8_MAX;
	uint32_t t95 = UINT32_MAX;

	t95 = ((x381<=x382)|(x383|x384));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = 4;
	static int64_t x386 = INT64_MIN;
	uint16_t x387 = 7820U;
	int64_t x388 = INT64_MIN;
	volatile int64_t t96 = -7LL;

	t96 = ((x385<=x386)|(x387|x388));

	if (t96 != -9223372036854767988LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = 5328;
	volatile int64_t x391 = INT64_MIN;
	static uint16_t x392 = 14U;

	t97 = ((x389<=x390)|(x391|x392));

	if (t97 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 8;
	int32_t x395 = -23603;
	volatile int32_t t98 = -12;

	t98 = ((x393<=x394)|(x395|x396));

	if (t98 != -23603) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	uint32_t x398 = 195255U;
	int64_t x399 = INT64_MAX;
	volatile int64_t t99 = INT64_MAX;

	t99 = ((x397<=x398)|(x399|x400));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

