#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x4 = UINT8_MAX;
static volatile uint64_t t0 = 911453LLU;
int32_t t1 = 14350241;
int64_t x11 = INT64_MAX;
int64_t x12 = 1510123634626364LL;
volatile uint64_t t7 = 4399311791279351LLU;
uint16_t x33 = 3U;
static int16_t x38 = INT16_MIN;
volatile uint32_t t9 = 1052U;
volatile int8_t x41 = INT8_MAX;
int64_t t12 = 83279155583LL;
int8_t x53 = -1;
int8_t x55 = -1;
volatile int16_t x58 = -1;
volatile int32_t x60 = -2005936;
static int64_t t14 = 8612342LL;
uint32_t x64 = UINT32_MAX;
int16_t x65 = INT16_MAX;
static uint8_t x79 = UINT8_MAX;
int64_t t19 = 1LL;
volatile int32_t x88 = INT32_MAX;
static volatile int32_t x89 = INT32_MIN;
uint8_t x92 = 0U;
uint64_t t23 = UINT64_MAX;
uint16_t x98 = UINT16_MAX;
int64_t x102 = 4149822445978LL;
static uint32_t t26 = 1668898277U;
static volatile uint32_t x109 = 220508752U;
volatile int16_t x111 = INT16_MIN;
int64_t t27 = -822970658LL;
int16_t x118 = -6777;
int32_t x123 = INT32_MAX;
int32_t x131 = -3;
int32_t x133 = 59267;
static uint32_t x145 = 41U;
int64_t x146 = -7LL;
int64_t x147 = -1LL;
int8_t x148 = INT8_MIN;
volatile int64_t x154 = INT64_MIN;
uint16_t x161 = 78U;
uint32_t x168 = UINT32_MAX;
int64_t x170 = INT64_MIN;
int32_t x177 = -1;
static int16_t x183 = INT16_MIN;
static int16_t x188 = INT16_MIN;
volatile uint64_t t49 = 101LLU;
uint64_t x204 = 6783750LLU;
int64_t x206 = INT64_MIN;
int16_t x218 = INT16_MAX;
int8_t x219 = -1;
int64_t x224 = -118831LL;
uint64_t t54 = 6683845734767LLU;
uint8_t x227 = UINT8_MAX;
int64_t x228 = INT64_MAX;
int8_t x231 = INT8_MAX;
uint16_t x237 = UINT16_MAX;
uint8_t x246 = UINT8_MAX;
int8_t x247 = INT8_MAX;
uint64_t t61 = 1391658LLU;
volatile uint16_t x261 = 12945U;
volatile uint16_t x262 = 5553U;
volatile int32_t x265 = 4828;
int8_t x269 = INT8_MIN;
int8_t x272 = -1;
int8_t x277 = -1;
int32_t x279 = INT32_MIN;
int16_t x294 = INT16_MIN;
volatile int64_t x295 = INT64_MIN;
uint64_t x299 = UINT64_MAX;
int8_t x301 = INT8_MAX;
static int16_t x309 = INT16_MAX;
int16_t x316 = INT16_MIN;
static uint8_t x320 = 9U;
static uint32_t t78 = 3521984U;
static volatile int32_t x330 = -1;
volatile uint32_t x332 = 22568U;
int64_t x334 = INT64_MIN;
static int32_t x337 = INT32_MAX;
int64_t x345 = 21648429550944759LL;
int16_t x359 = -1;
int64_t x360 = -138958795LL;
int8_t x373 = 1;
volatile int64_t t92 = 414731LL;
int8_t x380 = INT8_MAX;
volatile int8_t x386 = INT8_MIN;


void f0(void) {
	uint64_t x1 = 112400177905LLU;
	int32_t x2 = INT32_MIN;
	int64_t x3 = -1LL;

	t0 = (((x1&x2)%x3)|x4);

	if (t0 != 111669149951LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint16_t x6 = 76U;
	int8_t x7 = -1;
	int32_t x8 = -1;

	t1 = (((x5&x6)%x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x10 = -1;
	int64_t t2 = -240976259211LL;

	t2 = (((x9&x10)%x11)|x12);

	if (t2 != -1899032772LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	int64_t x14 = INT64_MAX;
	volatile int32_t x15 = INT32_MIN;
	volatile int16_t x16 = 5750;
	static int64_t t3 = -35LL;

	t3 = (((x13&x14)%x15)|x16);

	if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 95U;
	uint8_t x18 = 2U;
	int32_t x19 = 771850745;
	int8_t x20 = 0;
	static int32_t t4 = -4;

	t4 = (((x17&x18)%x19)|x20);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 7U;
	int16_t x22 = -1;
	int32_t x23 = -1;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -681622478;

	t5 = (((x21&x22)%x23)|x24);

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 2U;
	volatile int32_t x26 = INT32_MIN;
	uint8_t x27 = 30U;
	int8_t x28 = -6;
	volatile int32_t t6 = -71;

	t6 = (((x25&x26)%x27)|x28);

	if (t6 != -6) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MAX;
	int8_t x30 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;
	volatile uint64_t x32 = 20230LLU;

	t7 = (((x29&x30)%x31)|x32);

	if (t7 != 20351LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	static uint64_t x35 = UINT64_MAX;
	int32_t x36 = INT32_MAX;
	volatile uint64_t t8 = 4117312LLU;

	t8 = (((x33&x34)%x35)|x36);

	if (t8 != 2147483647LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = UINT32_MAX;
	int8_t x39 = -1;
	uint16_t x40 = 942U;

	t9 = (((x37&x38)%x39)|x40);

	if (t9 != 4294935470U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MIN;
	uint64_t x43 = UINT64_MAX;
	uint64_t x44 = 10302LLU;
	static volatile uint64_t t10 = 11813LLU;

	t10 = (((x41&x42)%x43)|x44);

	if (t10 != 10302LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 0;
	static int16_t x46 = INT16_MAX;
	static uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 4U;
	uint64_t t11 = 180537LLU;

	t11 = (((x45&x46)%x47)|x48);

	if (t11 != 4LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -1;
	int64_t x50 = INT64_MIN;
	int16_t x51 = -1;
	volatile uint16_t x52 = 26U;

	t12 = (((x49&x50)%x51)|x52);

	if (t12 != 26LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = UINT32_MAX;
	uint16_t x56 = 2572U;
	uint32_t t13 = 34U;

	t13 = (((x53&x54)%x55)|x56);

	if (t13 != 2572U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = INT64_MIN;
	int8_t x59 = INT8_MIN;

	t14 = (((x57&x58)%x59)|x60);

	if (t14 != -2005936LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int16_t x62 = -5947;
	static volatile int64_t x63 = INT64_MIN;
	int64_t t15 = -21786783153LL;

	t15 = (((x61&x62)%x63)|x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 749613U;
	int16_t x67 = -28;
	static int8_t x68 = INT8_MIN;
	volatile uint32_t t16 = 329032932U;

	t16 = (((x65&x66)%x67)|x68);

	if (t16 != 4294967213U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	uint32_t x70 = 4493358U;
	int16_t x71 = INT16_MIN;
	static int64_t x72 = INT64_MIN;
	volatile int64_t t17 = INT64_MIN;

	t17 = (((x69&x70)%x71)|x72);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 22LLU;
	static int16_t x74 = 13;
	int16_t x75 = INT16_MAX;
	int64_t x76 = INT64_MAX;
	static uint64_t t18 = 615629924971466205LLU;

	t18 = (((x73&x74)%x75)|x76);

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int8_t x78 = INT8_MIN;
	uint8_t x80 = 0U;

	t19 = (((x77&x78)%x79)|x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = UINT32_MAX;
	int64_t x82 = INT64_MIN;
	uint8_t x83 = UINT8_MAX;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = INT64_MIN;

	t20 = (((x81&x82)%x83)|x84);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MIN;
	static uint8_t x86 = 92U;
	int8_t x87 = INT8_MIN;
	volatile int32_t t21 = INT32_MAX;

	t21 = (((x85&x86)%x87)|x88);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MAX;
	static int32_t x91 = INT32_MAX;
	volatile int32_t t22 = -407110621;

	t22 = (((x89&x90)%x91)|x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -75695614;
	volatile int8_t x94 = INT8_MIN;
	uint64_t x95 = 312002LLU;
	static int64_t x96 = -1LL;

	t23 = (((x93&x94)%x95)|x96);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 1U;
	uint64_t x99 = 33LLU;
	int16_t x100 = INT16_MIN;
	volatile uint64_t t24 = 50440LLU;

	t24 = (((x97&x98)%x99)|x100);

	if (t24 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int64_t x103 = -1LL;
	int64_t x104 = INT64_MIN;
	uint64_t t25 = 3LLU;

	t25 = (((x101&x102)%x103)|x104);

	if (t25 != 9223376186677221786LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	uint32_t x106 = 2799U;
	int16_t x107 = -2273;
	volatile uint16_t x108 = UINT16_MAX;

	t26 = (((x105&x106)%x107)|x108);

	if (t26 != 65535U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x110 = -1993270LL;
	static int32_t x112 = -607933795;

	t27 = (((x109&x110)%x111)|x112);

	if (t27 != -607929635LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int16_t x114 = 3775;
	uint8_t x115 = 100U;
	int8_t x116 = INT8_MIN;
	uint64_t t28 = 31592964122LLU;

	t28 = (((x113&x114)%x115)|x116);

	if (t28 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 10U;
	int16_t x119 = 1;
	int16_t x120 = INT16_MIN;
	static int32_t t29 = 112926;

	t29 = (((x117&x118)%x119)|x120);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = 18;
	int16_t x124 = -1;
	static volatile int32_t t30 = -31;

	t30 = (((x121&x122)%x123)|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int16_t x126 = INT16_MAX;
	static uint64_t x127 = 22178511LLU;
	int16_t x128 = -1;
	uint64_t t31 = UINT64_MAX;

	t31 = (((x125&x126)%x127)|x128);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -1;
	static uint16_t x130 = 85U;
	volatile int16_t x132 = -54;
	int32_t t32 = -2;

	t32 = (((x129&x130)%x131)|x132);

	if (t32 != -53) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = 7U;
	uint32_t x135 = 2794U;
	int32_t x136 = 1083;
	uint32_t t33 = 469U;

	t33 = (((x133&x134)%x135)|x136);

	if (t33 != 1083U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	volatile int64_t x139 = INT64_MIN;
	volatile int8_t x140 = INT8_MIN;
	volatile int64_t t34 = -380372791978219256LL;

	t34 = (((x137&x138)%x139)|x140);

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = UINT8_MAX;
	uint32_t x142 = 1U;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = 5U;
	uint32_t t35 = 1U;

	t35 = (((x141&x142)%x143)|x144);

	if (t35 != 5U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t t36 = -2998063LL;

	t36 = (((x145&x146)%x147)|x148);

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	static uint64_t x150 = UINT64_MAX;
	int64_t x151 = INT64_MAX;
	static volatile int64_t x152 = INT64_MAX;
	uint64_t t37 = 0LLU;

	t37 = (((x149&x150)%x151)|x152);

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -1LL;
	int8_t x155 = 22;
	uint32_t x156 = UINT32_MAX;
	volatile int64_t t38 = -367441LL;

	t38 = (((x153&x154)%x155)|x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -1;
	static volatile uint64_t x158 = 17855139437319395LLU;
	static int8_t x159 = -1;
	int64_t x160 = INT64_MAX;
	uint64_t t39 = 331215837LLU;

	t39 = (((x157&x158)%x159)|x160);

	if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = 40;
	uint64_t x163 = UINT64_MAX;
	uint64_t x164 = 416308168600068LLU;
	uint64_t t40 = 236521322LLU;

	t40 = (((x161&x162)%x163)|x164);

	if (t40 != 416308168600076LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = 20;
	uint16_t x167 = 1233U;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (((x165&x166)%x167)|x168);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int32_t x171 = -1;
	static volatile int64_t x172 = -1LL;
	static volatile int64_t t42 = 3633365718450375LL;

	t42 = (((x169&x170)%x171)|x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	uint32_t x174 = 1722291459U;
	int32_t x175 = INT32_MIN;
	int32_t x176 = 26333;
	volatile uint32_t t43 = 117153U;

	t43 = (((x173&x174)%x175)|x176);

	if (t43 != 1722312413U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = 0U;
	uint32_t x179 = 1944122383U;
	int32_t x180 = INT32_MIN;
	static volatile uint32_t t44 = 8230838U;

	t44 = (((x177&x178)%x179)|x180);

	if (t44 != 2147483648U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MAX;
	static int64_t x182 = -1LL;
	static uint32_t x184 = 7U;
	volatile int64_t t45 = 45120LL;

	t45 = (((x181&x182)%x183)|x184);

	if (t45 != 32767LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	uint32_t x186 = 30U;
	int32_t x187 = INT32_MAX;
	int64_t t46 = 8947149LL;

	t46 = (((x185&x186)%x187)|x188);

	if (t46 != -32738LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = UINT8_MAX;
	int64_t x190 = INT64_MAX;
	int32_t x191 = INT32_MIN;
	uint8_t x192 = UINT8_MAX;
	int64_t t47 = -10700004LL;

	t47 = (((x189&x190)%x191)|x192);

	if (t47 != 255LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint32_t x194 = 2688U;
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = -3367;
	static int64_t t48 = -4218636238315LL;

	t48 = (((x193&x194)%x195)|x196);

	if (t48 != -3367LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 48246707751421LLU;
	uint16_t x198 = 2043U;
	volatile int16_t x199 = INT16_MIN;
	int64_t x200 = 85524713441067340LL;

	t49 = (((x197&x198)%x199)|x200);

	if (t49 != 85524713441067517LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = INT32_MAX;
	static uint8_t x202 = 0U;
	int32_t x203 = INT32_MAX;
	static volatile uint64_t t50 = 10LLU;

	t50 = (((x201&x202)%x203)|x204);

	if (t50 != 6783750LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	uint8_t x207 = 116U;
	volatile int16_t x208 = INT16_MIN;
	volatile uint64_t t51 = 3LLU;

	t51 = (((x205&x206)%x207)|x208);

	if (t51 != 18446744073709518860LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 2070310966196LLU;
	int64_t x214 = -1LL;
	volatile int64_t x215 = -1LL;
	static int32_t x216 = INT32_MIN;
	volatile uint64_t t52 = 675119787860LLU;

	t52 = (((x213&x214)%x215)|x216);

	if (t52 != 18446744071698797492LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	volatile int8_t x220 = -1;
	int32_t t53 = -130520;

	t53 = (((x217&x218)%x219)|x220);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x221 = INT64_MAX;
	static volatile int64_t x222 = 98LL;
	uint64_t x223 = 60193LLU;

	t54 = (((x221&x222)%x223)|x224);

	if (t54 != 18446744073709432819LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x225 = -210732283557056LL;
	static int16_t x226 = INT16_MAX;
	volatile int64_t t55 = INT64_MAX;

	t55 = (((x225&x226)%x227)|x228);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x229 = INT32_MIN;
	int32_t x230 = -1;
	int64_t x232 = -45LL;
	volatile int64_t t56 = 1059641378261446769LL;

	t56 = (((x229&x230)%x231)|x232);

	if (t56 != -5LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = 988012572150LL;
	int8_t x235 = -1;
	int64_t x236 = 4567631543568629297LL;
	volatile int64_t t57 = -13030745LL;

	t57 = (((x233&x234)%x235)|x236);

	if (t57 != 4567631543568629297LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MIN;
	int32_t x240 = 1597749;
	int64_t t58 = 1293512155998LL;

	t58 = (((x237&x238)%x239)|x240);

	if (t58 != 1597749LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = INT64_MAX;
	static int64_t x242 = INT64_MIN;
	uint16_t x243 = 60U;
	int32_t x244 = -1;
	int64_t t59 = -9994396215975LL;

	t59 = (((x241&x242)%x243)|x244);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MIN;
	volatile int8_t x248 = INT8_MIN;
	static int64_t t60 = -1800769896LL;

	t60 = (((x245&x246)%x247)|x248);

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MIN;
	uint8_t x250 = 0U;
	volatile int32_t x251 = 1;
	uint64_t x252 = 16734317LLU;

	t61 = (((x249&x250)%x251)|x252);

	if (t61 != 16734317LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 52U;
	static int8_t x254 = -1;
	static uint32_t x255 = 338U;
	int64_t x256 = -18764014152529627LL;
	volatile int64_t t62 = 2789379537134775LL;

	t62 = (((x253&x254)%x255)|x256);

	if (t62 != -18764014152529611LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = 1;
	int8_t x258 = INT8_MIN;
	uint16_t x259 = 226U;
	int16_t x260 = -1;
	static int32_t t63 = 6;

	t63 = (((x257&x258)%x259)|x260);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x263 = UINT16_MAX;
	int8_t x264 = -14;
	static int32_t t64 = 460549;

	t64 = (((x261&x262)%x263)|x264);

	if (t64 != -13) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x266 = INT8_MIN;
	static int16_t x267 = INT16_MIN;
	volatile uint32_t x268 = 19U;
	uint32_t t65 = 29860991U;

	t65 = (((x265&x266)%x267)|x268);

	if (t65 != 4755U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x270 = INT32_MIN;
	int8_t x271 = 5;
	int32_t t66 = 104169387;

	t66 = (((x269&x270)%x271)|x272);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x273 = 10U;
	int32_t x274 = -76490036;
	int8_t x275 = INT8_MIN;
	uint32_t x276 = 326447604U;
	static uint32_t t67 = 5176U;

	t67 = (((x273&x274)%x275)|x276);

	if (t67 != 326447612U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x278 = -1LL;
	volatile uint16_t x280 = 18U;
	int64_t t68 = 64246158409871LL;

	t68 = (((x277&x278)%x279)|x280);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = INT64_MAX;
	static int64_t x282 = -76414LL;
	uint8_t x283 = UINT8_MAX;
	static volatile int32_t x284 = INT32_MAX;
	volatile int64_t t69 = 22469LL;

	t69 = (((x281&x282)%x283)|x284);

	if (t69 != 2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = INT16_MAX;
	int64_t x286 = INT64_MIN;
	int16_t x287 = INT16_MIN;
	static int8_t x288 = -17;
	volatile int64_t t70 = 3360994022LL;

	t70 = (((x285&x286)%x287)|x288);

	if (t70 != -17LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x289 = INT64_MIN;
	uint64_t x290 = 55173LLU;
	uint32_t x291 = 1305302278U;
	uint32_t x292 = UINT32_MAX;
	uint64_t t71 = 2259756129LLU;

	t71 = (((x289&x290)%x291)|x292);

	if (t71 != 4294967295LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	uint8_t x296 = 3U;
	int64_t t72 = 1189LL;

	t72 = (((x293&x294)%x295)|x296);

	if (t72 != -32765LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x297 = -1;
	int32_t x298 = -977171242;
	int16_t x300 = INT16_MIN;
	volatile uint64_t t73 = 22821222745526005LLU;

	t73 = (((x297&x298)%x299)|x300);

	if (t73 != 18446744073709522134LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x302 = -1;
	uint64_t x303 = 12225610LLU;
	uint64_t x304 = 23LLU;
	volatile uint64_t t74 = 507928240430LLU;

	t74 = (((x301&x302)%x303)|x304);

	if (t74 != 127LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = -1LL;
	int64_t x307 = -1924LL;
	uint16_t x308 = 238U;
	volatile int64_t t75 = -331444138409846211LL;

	t75 = (((x305&x306)%x307)|x308);

	if (t75 != -1298LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x310 = -1;
	int16_t x311 = INT16_MAX;
	int64_t x312 = -2806169522255LL;
	int64_t t76 = -20237373LL;

	t76 = (((x309&x310)%x311)|x312);

	if (t76 != -2806169522255LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x313 = INT16_MIN;
	uint16_t x314 = 26U;
	static int64_t x315 = -1LL;
	volatile int64_t t77 = -154522757LL;

	t77 = (((x313&x314)%x315)|x316);

	if (t77 != -32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = -8315;
	volatile uint32_t x318 = 5190U;
	int32_t x319 = INT32_MIN;

	t78 = (((x317&x318)%x319)|x320);

	if (t78 != 5133U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -1;
	uint64_t x322 = UINT64_MAX;
	static int32_t x323 = INT32_MIN;
	static int64_t x324 = -1LL;
	static uint64_t t79 = UINT64_MAX;

	t79 = (((x321&x322)%x323)|x324);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = UINT64_MAX;
	volatile uint32_t x326 = 42U;
	static uint64_t x327 = UINT64_MAX;
	volatile uint32_t x328 = 2U;
	static uint64_t t80 = 30128LLU;

	t80 = (((x325&x326)%x327)|x328);

	if (t80 != 42LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MAX;
	volatile int16_t x331 = INT16_MIN;
	static volatile uint32_t t81 = 109756U;

	t81 = (((x329&x330)%x331)|x332);

	if (t81 != 32767U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = -2;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = 31LLU;
	volatile uint64_t t82 = 4592887962802LLU;

	t82 = (((x333&x334)%x335)|x336);

	if (t82 != 31LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x338 = INT32_MIN;
	volatile int16_t x339 = 1;
	int8_t x340 = -1;
	volatile int32_t t83 = -903701;

	t83 = (((x337&x338)%x339)|x340);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x341 = INT8_MAX;
	int8_t x342 = -1;
	int32_t x343 = -1;
	int32_t x344 = 9736;
	volatile int32_t t84 = -6398304;

	t84 = (((x341&x342)%x343)|x344);

	if (t84 != 9736) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x346 = INT64_MIN;
	volatile uint8_t x347 = UINT8_MAX;
	int8_t x348 = -1;
	volatile int64_t t85 = -15399167LL;

	t85 = (((x345&x346)%x347)|x348);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = -736409285792LL;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = 273704419549696999LL;
	int32_t x352 = INT32_MIN;
	uint64_t t86 = 125LLU;

	t86 = (((x349&x350)%x351)|x352);

	if (t86 != 18446744073017267691LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MAX;
	static int16_t x355 = -3166;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t87 = -84;

	t87 = (((x353&x354)%x355)|x356);

	if (t87 != -114) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = -4401661457LL;
	volatile int32_t x358 = INT32_MIN;
	volatile int64_t t88 = 5563413014337LL;

	t88 = (((x357&x358)%x359)|x360);

	if (t88 != -138958795LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x361 = 1791U;
	int16_t x362 = -2;
	int32_t x363 = -1;
	volatile int32_t x364 = 1980;
	static int32_t t89 = 113;

	t89 = (((x361&x362)%x363)|x364);

	if (t89 != 1980) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x365 = INT8_MAX;
	uint8_t x366 = 3U;
	int32_t x367 = INT32_MAX;
	int64_t x368 = INT64_MIN;
	int64_t t90 = -864209570LL;

	t90 = (((x365&x366)%x367)|x368);

	if (t90 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = -17;
	int16_t x370 = 0;
	static uint32_t x371 = 25652U;
	volatile uint64_t x372 = UINT64_MAX;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (((x369&x370)%x371)|x372);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x374 = INT64_MIN;
	volatile int32_t x375 = INT32_MAX;
	volatile int8_t x376 = INT8_MAX;

	t92 = (((x373&x374)%x375)|x376);

	if (t92 != 127LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x377 = UINT8_MAX;
	uint64_t x378 = 2096523241LLU;
	static int32_t x379 = INT32_MAX;
	static volatile uint64_t t93 = 1LLU;

	t93 = (((x377&x378)%x379)|x380);

	if (t93 != 255LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = INT16_MAX;
	int32_t x382 = 488122872;
	static volatile int8_t x383 = INT8_MIN;
	volatile int16_t x384 = -5;
	int32_t t94 = -139;

	t94 = (((x381&x382)%x383)|x384);

	if (t94 != -5) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = 0;
	volatile int32_t x387 = INT32_MAX;
	int8_t x388 = -1;
	volatile int32_t t95 = -1060500;

	t95 = (((x385&x386)%x387)|x388);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = -3;
	uint64_t x390 = UINT64_MAX;
	int8_t x391 = -1;
	int64_t x392 = INT64_MIN;
	uint64_t t96 = 637869058306271LLU;

	t96 = (((x389&x390)%x391)|x392);

	if (t96 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x393 = 3U;
	volatile uint16_t x394 = 14U;
	uint32_t x395 = 16028640U;
	static uint8_t x396 = 15U;
	volatile uint32_t t97 = 2076U;

	t97 = (((x393&x394)%x395)|x396);

	if (t97 != 15U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = INT32_MIN;
	volatile int64_t x398 = INT64_MAX;
	int64_t x399 = -1LL;
	uint16_t x400 = UINT16_MAX;
	int64_t t98 = 1632751349346LL;

	t98 = (((x397&x398)%x399)|x400);

	if (t98 != 65535LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x401 = 8U;
	int32_t x402 = -1;
	int64_t x403 = -489467221LL;
	volatile int8_t x404 = INT8_MIN;
	int64_t t99 = 6426308146315593LL;

	t99 = (((x401&x402)%x403)|x404);

	if (t99 != -120LL) { NG(); } else { ; }
	
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

