#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -1;
int64_t x3 = INT64_MIN;
volatile int16_t x7 = -439;
static volatile uint16_t x10 = 2633U;
int8_t x11 = INT8_MAX;
int32_t x19 = INT32_MIN;
static int64_t x25 = 3785415487349LL;
static uint8_t x31 = 5U;
volatile uint32_t x34 = 21U;
static int32_t x36 = -1;
int64_t x41 = INT64_MIN;
int16_t x42 = INT16_MIN;
uint8_t x44 = 1U;
static volatile int64_t x46 = -347323459000667LL;
int16_t x49 = INT16_MAX;
static int64_t x53 = -12121762374666LL;
int8_t x61 = INT8_MAX;
int64_t x62 = INT64_MIN;
volatile uint32_t x68 = 4909542U;
uint32_t t16 = 2781818U;
volatile int8_t x71 = -1;
int64_t t17 = 1685764285135569936LL;
int32_t x77 = -1663789;
int32_t x78 = -1;
static uint64_t t20 = 56751003534080LLU;
volatile uint64_t t21 = 180LLU;
static uint32_t x90 = UINT32_MAX;
uint64_t t22 = 66175007624294506LLU;
int32_t x96 = INT32_MAX;
static uint16_t x97 = 2U;
static int8_t x102 = 25;
int16_t x104 = INT16_MIN;
int32_t x113 = INT32_MIN;
static uint32_t t28 = 1U;
volatile int64_t x118 = -521674102LL;
volatile uint64_t t29 = 13012839038LLU;
int16_t x121 = INT16_MIN;
int64_t x134 = INT64_MAX;
int64_t x148 = INT64_MAX;
volatile int64_t x151 = 700201LL;
int16_t x159 = 14;
static int32_t x160 = -1;
int32_t t39 = -29838;
int64_t t40 = 1736097951615856LL;
int32_t x167 = INT32_MIN;
uint8_t x169 = UINT8_MAX;
int64_t t42 = 260374765640241174LL;
int64_t x180 = INT64_MAX;
volatile int32_t x185 = 2453;
static int8_t x186 = INT8_MIN;
volatile int8_t x189 = -1;
int16_t x190 = 805;
int64_t x193 = INT64_MIN;
uint64_t x194 = 44583LLU;
int32_t x197 = 8035;
uint32_t t49 = 79125525U;
volatile uint64_t t51 = 89640157951697913LLU;
uint8_t x209 = 9U;
uint32_t x212 = UINT32_MAX;
volatile int8_t x227 = 18;
int16_t x228 = 6;
volatile uint64_t t55 = 26870801396813LLU;
volatile int64_t t58 = 15668192136LL;
uint8_t x250 = 3U;
static volatile uint32_t t60 = 9353093U;
int64_t t61 = 253160778271LL;
static int8_t x260 = 1;
int32_t x283 = INT32_MIN;
static uint8_t x288 = 6U;
int64_t t69 = 2658027032483LL;
static uint16_t x290 = 2658U;
int8_t x291 = 15;
int64_t x292 = INT64_MIN;
static volatile int32_t t72 = -6;
uint16_t x310 = 12U;
int8_t x312 = 21;
static volatile int8_t x332 = 4;
uint64_t t80 = 165261736916LLU;
int8_t x343 = 55;
volatile int64_t t83 = -142LL;
int16_t x353 = -1;
int16_t x355 = INT16_MIN;
int8_t x358 = -1;
uint64_t x359 = 947556405LLU;
int64_t x361 = INT64_MAX;
volatile int8_t x363 = INT8_MIN;
uint64_t x366 = 25570910086496LLU;
static volatile uint64_t x370 = 14LLU;
int8_t x372 = 47;
int32_t x373 = INT32_MAX;
static int8_t x375 = INT8_MIN;
static int8_t x387 = 0;
int64_t t93 = 15432207444918LL;
int32_t x393 = INT32_MAX;
int16_t x394 = -1;
uint8_t x395 = UINT8_MAX;
uint8_t x396 = 11U;
static int64_t x399 = -380507LL;
static int8_t x402 = INT8_MAX;
int64_t t97 = -7791365864LL;
uint8_t x410 = 3U;
volatile uint64_t t98 = 1966018492LLU;
uint16_t x415 = UINT16_MAX;


void f0(void) {
	int16_t x2 = INT16_MAX;
	uint32_t x4 = 0U;
	volatile int64_t t0 = INT64_MAX;

	t0 = ((x1%x2)^(x3|x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 27512132639372LL;
	uint64_t x6 = 3474396424563942832LLU;
	static int32_t x8 = INT32_MIN;
	volatile uint64_t t1 = 61699LLU;

	t1 = ((x5%x6)^(x7|x8));

	if (t1 != 18446716561576912069LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int32_t x12 = 1150;
	volatile int32_t t2 = -1274;

	t2 = ((x9%x10)^(x11|x12));

	if (t2 != 1152) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	int64_t x14 = INT64_MAX;
	static int32_t x15 = INT32_MIN;
	static uint16_t x16 = 1859U;
	int64_t t3 = 1233009212047852LL;

	t3 = ((x13%x14)^(x15|x16));

	if (t3 != -2147481796LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	int32_t x18 = INT32_MAX;
	uint8_t x20 = 103U;
	int32_t t4 = -962043059;

	t4 = ((x17%x18)^(x19|x20));

	if (t4 != 2147483544) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	int8_t x22 = 30;
	int64_t x23 = INT64_MIN;
	volatile int64_t x24 = INT64_MAX;
	int64_t t5 = 961855258LL;

	t5 = ((x21%x22)^(x23|x24));

	if (t5 != 7LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 1U;
	volatile uint32_t x27 = UINT32_MAX;
	int16_t x28 = -1;
	volatile int64_t t6 = -376795LL;

	t6 = ((x25%x26)^(x27|x28));

	if (t6 != 4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	volatile int8_t x30 = INT8_MIN;
	uint16_t x32 = 6017U;
	volatile int32_t t7 = 25;

	t7 = ((x29%x30)^(x31|x32));

	if (t7 != -6022) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 8837499307176783LLU;
	uint64_t x35 = 11021LLU;
	volatile uint64_t t8 = 27105LLU;

	t8 = ((x33%x34)^(x35|x36));

	if (t8 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile int32_t x38 = INT32_MAX;
	volatile int8_t x39 = 2;
	static uint16_t x40 = 0U;
	static int32_t t9 = 27754;

	t9 = ((x37%x38)^(x39|x40));

	if (t9 != -32766) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x43 = INT16_MAX;
	volatile int64_t t10 = 540042731172869LL;

	t10 = ((x41%x42)^(x43|x44));

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = -2793862597897471LL;
	static int8_t x47 = 15;
	volatile int32_t x48 = INT32_MIN;
	volatile int64_t t11 = 747960529471LL;

	t11 = ((x45%x46)^(x47|x48));

	if (t11 != 15273029000662LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	uint8_t x51 = 115U;
	volatile int8_t x52 = INT8_MIN;
	int32_t t12 = 95;

	t12 = ((x49%x50)^(x51|x52));

	if (t12 != -116) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x54 = INT64_MIN;
	static int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	static volatile int64_t t13 = 20585706949240047LL;

	t13 = ((x53%x54)^(x55|x56));

	if (t13 != 12121762374774LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 98990774LLU;
	int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MIN;
	int16_t x60 = -2134;
	volatile uint64_t t14 = 27959LLU;

	t14 = ((x57%x58)^(x59|x60));

	if (t14 != 18446744073610562844LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x63 = INT32_MIN;
	int16_t x64 = INT16_MAX;
	volatile int64_t t15 = -246910LL;

	t15 = ((x61%x62)^(x63|x64));

	if (t15 != -2147451008LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int32_t x66 = INT32_MAX;
	int32_t x67 = -1;

	t16 = ((x65%x66)^(x67|x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x69 = 2U;
	static int64_t x70 = INT64_MAX;
	int32_t x72 = -8681950;

	t17 = ((x69%x70)^(x71|x72));

	if (t17 != -3LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static int8_t x74 = -1;
	static uint16_t x75 = 6168U;
	int64_t x76 = -3LL;
	int64_t t18 = 0LL;

	t18 = ((x73%x74)^(x75|x76));

	if (t18 != -3LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x79 = 11;
	static int64_t x80 = INT64_MIN;
	static int64_t t19 = 7722332LL;

	t19 = ((x77%x78)^(x79|x80));

	if (t19 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -1;
	static int64_t x82 = INT64_MIN;
	static int8_t x83 = INT8_MAX;
	volatile uint64_t x84 = UINT64_MAX;

	t20 = ((x81%x82)^(x83|x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	uint8_t x86 = 1U;
	uint64_t x87 = 13LLU;
	int32_t x88 = INT32_MIN;

	t21 = ((x85%x86)^(x87|x88));

	if (t21 != 18446744071562067981LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 32012689928LLU;
	uint64_t x91 = 2001LLU;
	int16_t x92 = INT16_MIN;

	t22 = ((x89%x90)^(x91|x92));

	if (t22 != 18446744071761651166LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = UINT8_MAX;
	uint64_t x94 = 92109654949LLU;
	int32_t x95 = 297348;
	volatile uint64_t t23 = 3LLU;

	t23 = ((x93%x94)^(x95|x96));

	if (t23 != 2147483392LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 12533594808176LLU;
	volatile int64_t x99 = INT64_MAX;
	volatile uint32_t x100 = 0U;
	static volatile uint64_t t24 = 9LLU;

	t24 = ((x97%x98)^(x99|x100));

	if (t24 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	int32_t t25 = 41602;

	t25 = ((x101%x102)^(x103|x104));

	if (t25 != 32765) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 0;
	uint32_t x106 = UINT32_MAX;
	int32_t x107 = INT32_MAX;
	static int64_t x108 = INT64_MAX;
	int64_t t26 = INT64_MAX;

	t26 = ((x105%x106)^(x107|x108));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	int32_t x110 = 31789;
	int8_t x111 = -1;
	static int64_t x112 = -1009765012366LL;
	int64_t t27 = -153LL;

	t27 = ((x109%x110)^(x111|x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x114 = 3963949U;
	static volatile uint8_t x115 = UINT8_MAX;
	int8_t x116 = -1;

	t28 = ((x113%x114)^(x115|x116));

	if (t28 != 4291980056U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 12632121848LLU;
	int8_t x119 = -1;
	int64_t x120 = -1LL;

	t29 = ((x117%x118)^(x119|x120));

	if (t29 != 18446744061077429767LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = UINT16_MAX;
	static volatile int16_t x123 = 219;
	int64_t x124 = -1LL;
	int64_t t30 = -21536079903006LL;

	t30 = ((x121%x122)^(x123|x124));

	if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 26U;
	uint32_t x126 = 422319894U;
	int32_t x127 = INT32_MIN;
	uint16_t x128 = 1345U;
	static uint32_t t31 = 2U;

	t31 = ((x125%x126)^(x127|x128));

	if (t31 != 2147485019U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x129 = UINT16_MAX;
	int32_t x130 = INT32_MAX;
	uint16_t x131 = UINT16_MAX;
	volatile int64_t x132 = INT64_MIN;
	volatile int64_t t32 = INT64_MIN;

	t32 = ((x129%x130)^(x131|x132));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	uint8_t x135 = 53U;
	uint32_t x136 = UINT32_MAX;
	static volatile int64_t t33 = 143410824488115LL;

	t33 = ((x133%x134)^(x135|x136));

	if (t33 != -4294967296LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = -1;
	static int16_t x139 = 40;
	uint32_t x140 = 574810509U;
	uint32_t t34 = 27922U;

	t34 = ((x137%x138)^(x139|x140));

	if (t34 != 574810541U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MAX;
	int64_t x142 = 58688480974LL;
	volatile int64_t x143 = INT64_MIN;
	uint8_t x144 = UINT8_MAX;
	int64_t t35 = 153016580915LL;

	t35 = ((x141%x142)^(x143|x144));

	if (t35 != -9223371981102899574LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	int64_t x147 = -1426031401LL;
	volatile int64_t t36 = 6522631479LL;

	t36 = ((x145%x146)^(x147|x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int8_t x150 = INT8_MAX;
	static int32_t x152 = -270580;
	int64_t t37 = -644882992LL;

	t37 = ((x149%x150)^(x151|x152));

	if (t37 != 262354LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = 2054672856778652LL;
	int64_t x154 = -1LL;
	int8_t x155 = 0;
	static int8_t x156 = INT8_MIN;
	int64_t t38 = -115047024964768LL;

	t38 = ((x153%x154)^(x155|x156));

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = INT8_MIN;
	uint16_t x158 = 124U;

	t39 = ((x157%x158)^(x159|x160));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -29;
	int64_t x162 = -101732872431LL;
	int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MAX;

	t40 = ((x161%x162)^(x163|x164));

	if (t40 != 28LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 2590559903599LL;
	int64_t x166 = -7582LL;
	volatile int8_t x168 = 17;
	int64_t t41 = -6951984244LL;

	t41 = ((x165%x166)^(x167|x168));

	if (t41 != -2147481824LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MIN;
	int64_t x171 = -1LL;
	static uint32_t x172 = 475185U;

	t42 = ((x169%x170)^(x171|x172));

	if (t42 != -256LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 30U;
	static int32_t x174 = 129;
	int64_t x175 = -1LL;
	volatile uint32_t x176 = 102014U;
	int64_t t43 = -5378597LL;

	t43 = ((x173%x174)^(x175|x176));

	if (t43 != -31LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x177 = 12U;
	int32_t x178 = -145;
	int64_t x179 = INT64_MIN;
	static int64_t t44 = -13LL;

	t44 = ((x177%x178)^(x179|x180));

	if (t44 != -13LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = -1;
	int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MIN;
	volatile int64_t t45 = INT64_MIN;

	t45 = ((x181%x182)^(x183|x184));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x187 = INT64_MIN;
	int64_t x188 = -47337374378LL;
	int64_t t46 = 98623592812267LL;

	t46 = ((x185%x186)^(x187|x188));

	if (t46 != -47337374397LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x191 = INT64_MIN;
	int8_t x192 = -1;
	int64_t t47 = -9972702549817502LL;

	t47 = ((x189%x190)^(x191|x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x195 = -1LL;
	static uint64_t x196 = UINT64_MAX;
	volatile uint64_t t48 = 200LLU;

	t48 = ((x193%x194)^(x195|x196));

	if (t48 != 18446744073709534975LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x198 = 20U;
	uint16_t x199 = 3U;
	volatile int16_t x200 = 1;

	t49 = ((x197%x198)^(x199|x200));

	if (t49 != 12U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = 6;
	int32_t x202 = INT32_MIN;
	int64_t x203 = INT64_MAX;
	uint8_t x204 = UINT8_MAX;
	int64_t t50 = -4700LL;

	t50 = ((x201%x202)^(x203|x204));

	if (t50 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 1034614812285120LLU;
	uint32_t x206 = UINT32_MAX;
	int16_t x207 = -11575;
	uint16_t x208 = 16U;

	t51 = ((x205%x206)^(x207|x208));

	if (t51 != 18446744073568950115LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = INT64_MIN;
	uint64_t x211 = 14042290547242LLU;
	static uint64_t t52 = 7LLU;

	t52 = ((x209%x210)^(x211|x212));

	if (t52 != 14044543057910LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = 595;
	uint32_t x214 = 6051U;
	int8_t x215 = INT8_MIN;
	static int16_t x216 = INT16_MAX;
	volatile uint32_t t53 = 401786U;

	t53 = ((x213%x214)^(x215|x216));

	if (t53 != 4294966700U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x217 = UINT8_MAX;
	volatile int32_t x218 = INT32_MIN;
	static volatile int64_t x219 = INT64_MIN;
	uint32_t x220 = 345023795U;
	int64_t t54 = -1696844072238427377LL;

	t54 = ((x217%x218)^(x219|x220));

	if (t54 != -9223372036509751860LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = UINT8_MAX;
	static uint64_t x226 = 4848309455647934LLU;

	t55 = ((x225%x226)^(x227|x228));

	if (t55 != 233LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = 1063193306582961LLU;
	static volatile int64_t x230 = INT64_MAX;
	volatile uint8_t x231 = 10U;
	volatile int16_t x232 = INT16_MAX;
	uint64_t t56 = 91344079LLU;

	t56 = ((x229%x230)^(x231|x232));

	if (t56 != 1063193306574926LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x237 = INT16_MAX;
	int32_t x238 = INT32_MIN;
	static uint64_t x239 = 1548737LLU;
	volatile int64_t x240 = -1LL;
	uint64_t t57 = 1788LLU;

	t57 = ((x237%x238)^(x239|x240));

	if (t57 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = 0U;
	volatile uint8_t x242 = UINT8_MAX;
	int8_t x243 = -1;
	volatile int64_t x244 = -1LL;

	t58 = ((x241%x242)^(x243|x244));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x245 = UINT16_MAX;
	static int32_t x246 = 55892926;
	volatile int32_t x247 = -255;
	int32_t x248 = -20;
	volatile int32_t t59 = 11;

	t59 = ((x245%x246)^(x247|x248));

	if (t59 != -65518) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = 196;
	int16_t x251 = INT16_MIN;
	static uint32_t x252 = UINT32_MAX;

	t60 = ((x249%x250)^(x251|x252));

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = 4011;
	volatile uint16_t x254 = UINT16_MAX;
	volatile int64_t x255 = -1LL;
	uint16_t x256 = 12U;

	t61 = ((x253%x254)^(x255|x256));

	if (t61 != -4012LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x257 = UINT64_MAX;
	volatile int8_t x258 = -21;
	uint16_t x259 = UINT16_MAX;
	volatile uint64_t t62 = 32259LLU;

	t62 = ((x257%x258)^(x259|x260));

	if (t62 != 65515LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = 19;
	int16_t x262 = INT16_MAX;
	uint8_t x263 = UINT8_MAX;
	volatile int64_t x264 = INT64_MAX;
	int64_t t63 = 8071LL;

	t63 = ((x261%x262)^(x263|x264));

	if (t63 != 9223372036854775788LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = -1;
	int16_t x267 = 162;
	volatile int8_t x268 = INT8_MIN;
	volatile int64_t t64 = 7538763301697LL;

	t64 = ((x265%x266)^(x267|x268));

	if (t64 != -94LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x269 = INT64_MIN;
	int64_t x270 = -1LL;
	int16_t x271 = INT16_MAX;
	static volatile int8_t x272 = INT8_MIN;
	int64_t t65 = 11LL;

	t65 = ((x269%x270)^(x271|x272));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x273 = INT8_MAX;
	int16_t x274 = INT16_MIN;
	uint64_t x275 = 239248610857LLU;
	int16_t x276 = INT16_MAX;
	uint64_t t66 = 537613695093LLU;

	t66 = ((x273%x274)^(x275|x276));

	if (t66 != 239248637824LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	static uint32_t x278 = 15U;
	int16_t x279 = INT16_MAX;
	static volatile int64_t x280 = INT64_MAX;
	int64_t t67 = -768566869LL;

	t67 = ((x277%x278)^(x279|x280));

	if (t67 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = 287138072LLU;
	static int8_t x282 = INT8_MAX;
	static uint8_t x284 = UINT8_MAX;
	uint64_t t68 = 250962821LLU;

	t68 = ((x281%x282)^(x283|x284));

	if (t68 != 18446744071562068134LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x285 = 18U;
	uint32_t x286 = 1127916231U;
	int64_t x287 = -223540896047609347LL;

	t69 = ((x285%x286)^(x287|x288));

	if (t69 != -223540896047609363LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	volatile int64_t t70 = 20742062LL;

	t70 = ((x289%x290)^(x291|x292));

	if (t70 != 9223372036854774153LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = -1;
	volatile int8_t x294 = INT8_MIN;
	volatile uint8_t x295 = UINT8_MAX;
	static int16_t x296 = -1;
	volatile int32_t t71 = 3843268;

	t71 = ((x293%x294)^(x295|x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MAX;
	static volatile int32_t x298 = -1;
	int32_t x299 = -7484;
	int16_t x300 = 74;

	t72 = ((x297%x298)^(x299|x300));

	if (t72 != -7474) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x301 = 7467LLU;
	volatile int8_t x302 = INT8_MIN;
	static volatile uint64_t x303 = 60275994LLU;
	int16_t x304 = INT16_MIN;
	static uint64_t t73 = 35LLU;

	t73 = ((x301%x302)^(x303|x304));

	if (t73 != 18446744073709527089LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = INT32_MAX;
	volatile uint64_t x306 = UINT64_MAX;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;
	static uint64_t t74 = 109059879680478487LLU;

	t74 = ((x305%x306)^(x307|x308));

	if (t74 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = UINT32_MAX;
	volatile uint32_t x311 = 23U;
	volatile uint32_t t75 = 30279U;

	t75 = ((x309%x310)^(x311|x312));

	if (t75 != 20U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x313 = -34011289;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	int64_t x316 = -5477525026796LL;
	volatile int64_t t76 = -10LL;

	t76 = ((x313%x314)^(x315|x316));

	if (t76 != -5478903443597LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x317 = -5799;
	uint64_t x318 = 7781515639099808423LLU;
	int16_t x319 = -7344;
	int8_t x320 = -1;
	volatile uint64_t t77 = 11466174259537LLU;

	t77 = ((x317%x318)^(x319|x320));

	if (t77 != 15563031278199622644LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x325 = 22U;
	uint32_t x326 = 137799479U;
	uint32_t x327 = UINT32_MAX;
	int8_t x328 = INT8_MAX;
	volatile uint32_t t78 = 12278499U;

	t78 = ((x325%x326)^(x327|x328));

	if (t78 != 4294967273U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = 132U;
	static int16_t x330 = INT16_MIN;
	static volatile int8_t x331 = -1;
	uint32_t t79 = 126129U;

	t79 = ((x329%x330)^(x331|x332));

	if (t79 != 4294967163U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MAX;
	static volatile uint64_t x339 = 207LLU;
	uint32_t x340 = UINT32_MAX;

	t80 = ((x337%x338)^(x339|x340));

	if (t80 != 4294967294LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x341 = INT8_MIN;
	uint64_t x342 = 10995191534LLU;
	int8_t x344 = -1;
	uint64_t t81 = 8084244898646061074LLU;

	t81 = ((x341%x342)^(x343|x344));

	if (t81 != 18446744063949358071LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = 27U;
	static int32_t x346 = -1;
	static int8_t x347 = -1;
	static volatile int16_t x348 = INT16_MIN;
	volatile int32_t t82 = -3193;

	t82 = ((x345%x346)^(x347|x348));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = -1;
	int16_t x350 = 42;
	static volatile int64_t x351 = 1LL;
	static int32_t x352 = INT32_MIN;

	t83 = ((x349%x350)^(x351|x352));

	if (t83 != 2147483646LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x354 = INT8_MIN;
	static uint64_t x356 = 546LLU;
	volatile uint64_t t84 = 17580972049104648LLU;

	t84 = ((x353%x354)^(x355|x356));

	if (t84 != 32221LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x357 = INT8_MAX;
	int8_t x360 = INT8_MIN;
	static uint64_t t85 = 255262769303LLU;

	t85 = ((x357%x358)^(x359|x360));

	if (t85 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x362 = 745U;
	static int32_t x364 = INT32_MIN;
	volatile int64_t t86 = -378144087167712896LL;

	t86 = ((x361%x362)^(x363|x364));

	if (t86 != -399LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x365 = INT8_MIN;
	uint64_t x367 = 1207083218LLU;
	int32_t x368 = -1;
	volatile uint64_t t87 = 28495427986LLU;

	t87 = ((x365%x366)^(x367|x368));

	if (t87 != 18446726681847782047LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x369 = 8U;
	int16_t x371 = INT16_MIN;
	volatile uint64_t t88 = 395582LLU;

	t88 = ((x369%x370)^(x371|x372));

	if (t88 != 18446744073709518887LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x374 = -1LL;
	static uint16_t x376 = 3U;
	volatile int64_t t89 = 118405655648601136LL;

	t89 = ((x373%x374)^(x375|x376));

	if (t89 != -125LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = 1LL;
	volatile int64_t x378 = 692LL;
	static volatile int32_t x379 = INT32_MIN;
	static volatile int16_t x380 = INT16_MAX;
	int64_t t90 = -210963385672917LL;

	t90 = ((x377%x378)^(x379|x380));

	if (t90 != -2147450882LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x381 = INT32_MAX;
	static uint32_t x382 = 2726437U;
	uint8_t x383 = 2U;
	uint32_t x384 = 43596636U;
	static volatile uint32_t t91 = 191577U;

	t91 = ((x381%x382)^(x383|x384));

	if (t91 != 42081054U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = -182;
	uint16_t x386 = 6U;
	int32_t x388 = INT32_MIN;
	int32_t t92 = -378407178;

	t92 = ((x385%x386)^(x387|x388));

	if (t92 != 2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x389 = INT64_MAX;
	volatile uint8_t x390 = UINT8_MAX;
	static int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MAX;

	t93 = ((x389%x390)^(x391|x392));

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t t94 = 28;

	t94 = ((x393%x394)^(x395|x396));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = 1LLU;
	static volatile uint16_t x398 = 2693U;
	static volatile uint32_t x400 = UINT32_MAX;
	uint64_t t95 = 28433553572LLU;

	t95 = ((x397%x398)^(x399|x400));

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = 9;
	static int16_t x403 = INT16_MIN;
	static int16_t x404 = INT16_MAX;
	int32_t t96 = -1;

	t96 = ((x401%x402)^(x403|x404));

	if (t96 != -10) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x405 = INT64_MIN;
	int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MIN;
	int32_t x408 = INT32_MIN;

	t97 = ((x405%x406)^(x407|x408));

	if (t97 != -2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x409 = 53366764U;
	uint64_t x411 = 106365003LLU;
	uint64_t x412 = 272410838225891LLU;

	t98 = ((x409%x410)^(x411|x412));

	if (t98 != 272410842485738LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = 0;
	volatile uint32_t x414 = 15833525U;
	int16_t x416 = 1;
	uint32_t t99 = 1844125392U;

	t99 = ((x413%x414)^(x415|x416));

	if (t99 != 65535U) { NG(); } else { ; }
	
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

