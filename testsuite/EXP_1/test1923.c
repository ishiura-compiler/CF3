#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x12 = 5287;
static int8_t x16 = -1;
volatile int64_t t3 = -15656691379747LL;
static volatile int8_t x18 = -1;
static volatile uint8_t x34 = 97U;
int64_t x36 = -1LL;
int64_t x44 = 138LL;
uint64_t x53 = UINT64_MAX;
int64_t x54 = INT64_MAX;
int16_t x58 = INT16_MAX;
uint32_t x68 = 280505U;
int8_t x70 = -1;
int64_t x80 = INT64_MAX;
int16_t x90 = INT16_MAX;
int64_t x93 = INT64_MIN;
int16_t x94 = -4;
int32_t x95 = -16;
static int32_t x100 = 9445;
uint16_t x104 = 3U;
volatile uint64_t t25 = 247LLU;
volatile uint16_t x107 = 4638U;
volatile uint32_t t26 = UINT32_MAX;
uint64_t x114 = 621382795882373LLU;
int16_t x120 = INT16_MIN;
int32_t x122 = INT32_MIN;
int64_t t30 = -3956LL;
static volatile uint32_t t32 = 41392U;
uint8_t x134 = 29U;
uint32_t x135 = UINT32_MAX;
int8_t x141 = INT8_MIN;
int32_t x143 = INT32_MAX;
uint32_t x151 = 19430080U;
int32_t x152 = INT32_MIN;
volatile int64_t x154 = INT64_MIN;
int64_t x155 = -1LL;
uint64_t t38 = UINT64_MAX;
static int32_t x164 = 1;
volatile int32_t x168 = INT32_MAX;
volatile int64_t t41 = -2631261LL;
volatile uint32_t x174 = UINT32_MAX;
int64_t x175 = -1LL;
static int8_t x176 = -1;
int64_t t43 = -171407343LL;
int64_t x177 = 137274004207868497LL;
uint16_t x185 = 30933U;
int32_t x186 = INT32_MIN;
uint16_t x189 = UINT16_MAX;
int16_t x200 = -30;
uint16_t x205 = UINT16_MAX;
int64_t t52 = -184LL;
int8_t x213 = INT8_MIN;
int64_t x221 = INT64_MAX;
uint16_t x241 = 248U;
int32_t t61 = 228;
static int64_t x254 = INT64_MIN;
int32_t x255 = 1560;
volatile int16_t x257 = INT16_MIN;
volatile int64_t t64 = 26112694LL;
static int8_t x274 = -23;
static volatile int64_t t67 = 47735381619802LL;
static uint64_t t69 = 166083368LLU;
int8_t x287 = INT8_MIN;
volatile uint32_t t70 = 4U;
volatile int64_t t73 = -2293651934258188672LL;
uint8_t x301 = 14U;
static volatile uint8_t x309 = UINT8_MAX;
int16_t x316 = INT16_MIN;
volatile int64_t x318 = -16214326970LL;
static volatile uint64_t x327 = 3LLU;
int8_t x332 = INT8_MIN;
static volatile int64_t x338 = 243068265895LL;
volatile uint64_t t84 = 528528705631082921LLU;
int8_t x362 = INT8_MAX;
int32_t x363 = -1;
static int8_t x364 = INT8_MAX;
int8_t x367 = INT8_MIN;
int32_t x370 = -1;
uint8_t x373 = 4U;
volatile uint32_t x377 = 465405U;
int64_t x380 = INT64_MAX;
int64_t t93 = INT64_MAX;
static volatile uint32_t x381 = 14085431U;
int8_t x388 = -2;
uint8_t x389 = UINT8_MAX;
int64_t x390 = -8708335905LL;
int64_t t96 = 79874438640901266LL;
int64_t t97 = 2199579367LL;
int32_t x397 = -1;
uint32_t x399 = 507097U;
uint16_t x404 = UINT16_MAX;
static uint32_t t99 = 11844U;


void f0(void) {
	int8_t x1 = -1;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = UINT64_MAX;
	uint8_t x4 = 37U;
	volatile uint64_t t0 = 41430653110655LLU;

	t0 = (((x1|x2)%x3)|x4);

	if (t0 != 37LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 3114825;
	volatile uint32_t x6 = 308201U;
	volatile int64_t x7 = -8712921LL;
	static volatile int8_t x8 = -1;
	volatile int64_t t1 = -6937361376408792LL;

	t1 = (((x5|x6)%x7)|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static uint8_t x10 = 60U;
	int64_t x11 = INT64_MIN;
	volatile int64_t t2 = -301942052167LL;

	t2 = (((x9|x10)%x11)|x12);

	if (t2 != -9223372036854770497LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static int32_t x14 = 93818;
	int64_t x15 = -3373717149088910747LL;

	t3 = (((x13|x14)%x15)|x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 114200U;
	int32_t x19 = -233624;
	int32_t x20 = -1;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (((x17|x18)%x19)|x20);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 90119076U;
	static int8_t x22 = INT8_MAX;
	uint64_t x23 = 365878476983330960LLU;
	int64_t x24 = -513LL;
	static uint64_t t5 = UINT64_MAX;

	t5 = (((x21|x22)%x23)|x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile uint16_t x26 = 152U;
	int64_t x27 = INT64_MAX;
	uint8_t x28 = 0U;
	static volatile int64_t t6 = 21018125268067688LL;

	t6 = (((x25|x26)%x27)|x28);

	if (t6 != -104LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	volatile int64_t x30 = INT64_MAX;
	int8_t x31 = 39;
	static volatile int8_t x32 = -1;
	volatile int64_t t7 = 90669296059092LL;

	t7 = (((x29|x30)%x31)|x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 34088814U;
	int16_t x35 = INT16_MIN;
	int64_t t8 = 30551692124LL;

	t8 = (((x33|x34)%x35)|x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 3;
	int8_t x38 = 3;
	static int64_t x39 = -7LL;
	volatile uint32_t x40 = 1698991346U;
	volatile int64_t t9 = -4384623748216LL;

	t9 = (((x37|x38)%x39)|x40);

	if (t9 != 1698991347LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint32_t x42 = 1344U;
	uint8_t x43 = 3U;
	int64_t t10 = 2LL;

	t10 = (((x41|x42)%x43)|x44);

	if (t10 != 138LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 2910LL;
	static int8_t x46 = -1;
	int8_t x47 = INT8_MIN;
	uint16_t x48 = 5120U;
	int64_t t11 = 1LL;

	t11 = (((x45|x46)%x47)|x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 700828030829LLU;
	static int32_t x50 = -1;
	static int32_t x51 = INT32_MIN;
	static volatile int64_t x52 = 13923670LL;
	uint64_t t12 = 1642984118316563LLU;

	t12 = (((x49|x50)%x51)|x52);

	if (t12 != 2147483647LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x55 = -327136LL;
	int32_t x56 = INT32_MAX;
	volatile uint64_t t13 = 4602975LLU;

	t13 = (((x53|x54)%x55)|x56);

	if (t13 != 2147483647LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = UINT16_MAX;
	volatile int32_t x59 = INT32_MIN;
	int32_t x60 = 5465502;
	volatile int32_t t14 = -369914901;

	t14 = (((x57|x58)%x59)|x60);

	if (t14 != 5505023) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = 12LL;
	volatile uint32_t x62 = UINT32_MAX;
	volatile uint8_t x63 = 2U;
	int64_t x64 = -1LL;
	static volatile int64_t t15 = -504918862LL;

	t15 = (((x61|x62)%x63)|x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = -1;
	int8_t x67 = -11;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (((x65|x66)%x67)|x68);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MIN;
	int64_t t17 = -4016LL;

	t17 = (((x69|x70)%x71)|x72);

	if (t17 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 17U;
	int32_t x74 = 13052;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MIN;
	uint64_t t18 = 1270117206049839LLU;

	t18 = (((x73|x74)%x75)|x76);

	if (t18 != 18446744073709531901LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 21U;
	int32_t x78 = INT32_MAX;
	int32_t x79 = INT32_MIN;
	int64_t t19 = INT64_MAX;

	t19 = (((x77|x78)%x79)|x80);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 569U;
	int16_t x82 = 5926;
	int32_t x83 = -1;
	uint32_t x84 = 107149215U;
	static uint32_t t20 = 30792U;

	t20 = (((x81|x82)%x83)|x84);

	if (t20 != 107149215U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 114025LLU;
	uint8_t x86 = 12U;
	static int64_t x87 = -322924LL;
	int8_t x88 = INT8_MIN;
	uint64_t t21 = 447LLU;

	t21 = (((x85|x86)%x87)|x88);

	if (t21 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	int16_t x91 = INT16_MAX;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = -5433474071697907LL;

	t22 = (((x89|x90)%x91)|x92);

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x96 = UINT32_MAX;
	volatile int64_t t23 = -3363103365887265LL;

	t23 = (((x93|x94)%x95)|x96);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 41186219420641LL;
	volatile int32_t x98 = -1;
	uint32_t x99 = 3141U;
	static int64_t t24 = 157063265633583LL;

	t24 = (((x97|x98)%x99)|x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 78836717462833LLU;
	uint16_t x102 = UINT16_MAX;
	static int64_t x103 = 4LL;

	t25 = (((x101|x102)%x103)|x104);

	if (t25 != 3LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -1;
	volatile uint8_t x106 = 3U;
	uint32_t x108 = 991678U;

	t26 = (((x105|x106)%x107)|x108);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 49962864U;
	uint8_t x110 = 9U;
	volatile int16_t x111 = -1;
	int64_t x112 = -1LL;
	volatile int64_t t27 = 57807273809639294LL;

	t27 = (((x109|x110)%x111)|x112);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -1LL;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MAX;
	volatile uint64_t t28 = 2278845480326590590LLU;

	t28 = (((x113|x114)%x115)|x116);

	if (t28 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -8820;
	volatile int16_t x118 = -1;
	int64_t x119 = INT64_MIN;
	volatile int64_t t29 = -92789LL;

	t29 = (((x117|x118)%x119)|x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = -1LL;
	int64_t x123 = -1LL;
	volatile int8_t x124 = INT8_MIN;

	t30 = (((x121|x122)%x123)|x124);

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	volatile int64_t x126 = INT64_MIN;
	volatile uint64_t x127 = 382381984377711348LLU;
	int8_t x128 = -3;
	static uint64_t t31 = UINT64_MAX;

	t31 = (((x125|x126)%x127)|x128);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	uint32_t x130 = 305U;
	int8_t x131 = -56;
	static int32_t x132 = INT32_MIN;

	t32 = (((x129|x130)%x131)|x132);

	if (t32 != 4294967217U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x133 = INT32_MIN;
	uint64_t x136 = 23790LLU;
	volatile uint64_t t33 = 2205994LLU;

	t33 = (((x133|x134)%x135)|x136);

	if (t33 != 2147507455LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	static uint32_t x138 = 27U;
	volatile int32_t x139 = -1;
	static uint32_t x140 = 292824000U;
	volatile uint32_t t34 = 2049U;

	t34 = (((x137|x138)%x139)|x140);

	if (t34 != 4294967259U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = -1LL;
	volatile uint8_t x144 = 33U;
	volatile int64_t t35 = 37733896164606LL;

	t35 = (((x141|x142)%x143)|x144);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MIN;
	volatile uint16_t x146 = UINT16_MAX;
	static int16_t x147 = -1;
	static int16_t x148 = INT16_MIN;
	int64_t t36 = -32177LL;

	t36 = (((x145|x146)%x147)|x148);

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = UINT32_MAX;
	uint64_t x150 = 677741LLU;
	volatile uint64_t t37 = 1687LLU;

	t37 = (((x149|x150)%x151)|x152);

	if (t37 != 18446744071562987583LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 66999482817LLU;
	int32_t x156 = -1;

	t38 = (((x153|x154)%x155)|x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	static uint64_t x158 = 6LLU;
	uint32_t x159 = 549372772U;
	int64_t x160 = 869442463LL;
	uint64_t t39 = 47840153700595LLU;

	t39 = (((x157|x158)%x159)|x160);

	if (t39 != 936552415LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	volatile int16_t x162 = 502;
	volatile int64_t x163 = 16579590LL;
	static int64_t t40 = 64886456236544LL;

	t40 = (((x161|x162)%x163)|x164);

	if (t40 != -15322065LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1139;
	int64_t x166 = INT64_MIN;
	volatile uint8_t x167 = 70U;

	t41 = (((x165|x166)%x167)|x168);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	int8_t x170 = INT8_MAX;
	volatile uint64_t x171 = UINT64_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (((x169|x170)%x171)|x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = 6539U;

	t43 = (((x173|x174)%x175)|x176);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = 1;
	int16_t x179 = -4;
	int16_t x180 = INT16_MIN;
	volatile int64_t t44 = -59507737LL;

	t44 = (((x177|x178)%x179)|x180);

	if (t44 != -32767LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 56U;
	static uint32_t x182 = UINT32_MAX;
	int8_t x183 = INT8_MAX;
	volatile int64_t x184 = -1LL;
	int64_t t45 = 16761LL;

	t45 = (((x181|x182)%x183)|x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x187 = -1;
	static uint64_t x188 = UINT64_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = (((x185|x186)%x187)|x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (((x189|x190)%x191)|x192);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 104U;
	uint16_t x194 = 13U;
	int16_t x195 = -1;
	static int64_t x196 = INT64_MAX;
	int64_t t48 = INT64_MAX;

	t48 = (((x193|x194)%x195)|x196);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 2217075411LL;
	int8_t x198 = -1;
	static int32_t x199 = INT32_MIN;
	volatile int64_t t49 = -7740234312LL;

	t49 = (((x197|x198)%x199)|x200);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile int16_t x202 = 1;
	int64_t x203 = INT64_MIN;
	int16_t x204 = 486;
	volatile int64_t t50 = 3626888379LL;

	t50 = (((x201|x202)%x203)|x204);

	if (t50 != -32281LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = 1U;
	int8_t x207 = INT8_MAX;
	uint64_t x208 = UINT64_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = (((x205|x206)%x207)|x208);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 222LL;
	volatile int16_t x210 = 9;
	volatile int16_t x211 = -1;
	uint8_t x212 = UINT8_MAX;

	t52 = (((x209|x210)%x211)|x212);

	if (t52 != 255LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = INT8_MIN;
	volatile int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t53 = 54;

	t53 = (((x213|x214)%x215)|x216);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = UINT8_MAX;
	int16_t x218 = INT16_MIN;
	static int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;
	volatile int64_t t54 = -496547471573672LL;

	t54 = (((x217|x218)%x219)|x220);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = -1;
	uint16_t x223 = UINT16_MAX;
	int32_t x224 = -23601;
	volatile int64_t t55 = -9407670878LL;

	t55 = (((x221|x222)%x223)|x224);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	int64_t x226 = INT64_MAX;
	static int64_t x227 = -1LL;
	uint16_t x228 = UINT16_MAX;
	int64_t t56 = 1270LL;

	t56 = (((x225|x226)%x227)|x228);

	if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 2U;
	uint32_t x230 = 21526U;
	int32_t x231 = INT32_MAX;
	int32_t x232 = INT32_MAX;
	uint32_t t57 = 1532467024U;

	t57 = (((x229|x230)%x231)|x232);

	if (t57 != 2147483647U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	volatile int8_t x234 = INT8_MIN;
	uint8_t x235 = 1U;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = -61;

	t58 = (((x233|x234)%x235)|x236);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MAX;
	volatile uint8_t x238 = 29U;
	int64_t x239 = -2092497751114LL;
	volatile uint32_t x240 = 11U;
	static int64_t t59 = -56LL;

	t59 = (((x237|x238)%x239)|x240);

	if (t59 != 32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x242 = UINT64_MAX;
	int32_t x243 = INT32_MIN;
	int16_t x244 = -1;
	uint64_t t60 = UINT64_MAX;

	t60 = (((x241|x242)%x243)|x244);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = UINT8_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	volatile int32_t x247 = -1;
	uint8_t x248 = 115U;

	t61 = (((x245|x246)%x247)|x248);

	if (t61 != 115) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	static int32_t x250 = INT32_MIN;
	static int8_t x251 = -52;
	uint8_t x252 = 57U;
	volatile int32_t t62 = -137796460;

	t62 = (((x249|x250)%x251)|x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = 4723391699684LL;
	int64_t x256 = -97472LL;
	volatile int64_t t63 = 111929870LL;

	t63 = (((x253|x254)%x255)|x256);

	if (t63 != -1084LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = -2933003403281LL;
	static int32_t x259 = -254970685;
	static volatile int64_t x260 = -1LL;

	t64 = (((x257|x258)%x259)|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 24U;
	uint64_t x262 = 27115193113521809LLU;
	int8_t x263 = -1;
	volatile int32_t x264 = -1;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (((x261|x262)%x263)|x264);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 40;
	int32_t x266 = -1;
	int64_t x267 = INT64_MIN;
	static int8_t x268 = 24;
	volatile int64_t t66 = -20608698477253023LL;

	t66 = (((x265|x266)%x267)|x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -1;
	volatile int64_t x275 = INT64_MIN;
	static int32_t x276 = INT32_MIN;

	t67 = (((x273|x274)%x275)|x276);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = 0;
	static uint8_t x278 = UINT8_MAX;
	static int32_t x279 = INT32_MIN;
	static int32_t x280 = INT32_MAX;
	int32_t t68 = INT32_MAX;

	t68 = (((x277|x278)%x279)|x280);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = -1;
	uint32_t x282 = 9U;
	uint32_t x283 = UINT32_MAX;
	uint64_t x284 = 30268140202170LLU;

	t69 = (((x281|x282)%x283)|x284);

	if (t69 != 30268140202170LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x285 = 7560U;
	int8_t x286 = INT8_MIN;
	int32_t x288 = INT32_MAX;

	t70 = (((x285|x286)%x287)|x288);

	if (t70 != 2147483647U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x290 = -1;
	static int8_t x291 = -1;
	static volatile int16_t x292 = 1;
	static volatile uint64_t t71 = 194961LLU;

	t71 = (((x289|x290)%x291)|x292);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = 1158623LL;
	int32_t x294 = -1;
	int32_t x295 = INT32_MAX;
	static int32_t x296 = 12779836;
	static int64_t t72 = 55367811LL;

	t72 = (((x293|x294)%x295)|x296);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = -12;
	static int64_t x298 = INT64_MIN;
	volatile int64_t x299 = -1LL;
	int16_t x300 = INT16_MIN;

	t73 = (((x297|x298)%x299)|x300);

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x302 = 0U;
	int64_t x303 = -2871628633LL;
	int8_t x304 = -41;
	int64_t t74 = -1362044335082LL;

	t74 = (((x301|x302)%x303)|x304);

	if (t74 != -33LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x305 = 0U;
	int8_t x306 = 3;
	uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MIN;
	uint32_t t75 = 172U;

	t75 = (((x305|x306)%x307)|x308);

	if (t75 != 4294934531U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x310 = 1440644LLU;
	int8_t x311 = INT8_MIN;
	uint32_t x312 = 1U;
	volatile uint64_t t76 = 4303222815713298433LLU;

	t76 = (((x309|x310)%x311)|x312);

	if (t76 != 1440767LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = UINT8_MAX;
	volatile uint16_t x314 = UINT16_MAX;
	int8_t x315 = INT8_MAX;
	volatile int32_t t77 = -52;

	t77 = (((x313|x314)%x315)|x316);

	if (t77 != -32765) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MIN;
	static uint16_t x319 = 48U;
	int64_t x320 = -364289595727897LL;
	volatile int64_t t78 = 1613LL;

	t78 = (((x317|x318)%x319)|x320);

	if (t78 != -9LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	uint64_t x323 = 128837751085638272LLU;
	static volatile uint64_t x324 = 663LLU;
	uint64_t t79 = 32510LLU;

	t79 = (((x321|x322)%x323)|x324);

	if (t79 != 22945668463278847LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x325 = INT64_MIN;
	static int64_t x326 = 1459551094LL;
	uint8_t x328 = 40U;
	uint64_t t80 = 390068LLU;

	t80 = (((x325|x326)%x327)|x328);

	if (t80 != 40LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = -11;
	int16_t x330 = INT16_MIN;
	int16_t x331 = INT16_MIN;
	int32_t t81 = 1;

	t81 = (((x329|x330)%x331)|x332);

	if (t81 != -11) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = INT32_MIN;
	volatile int64_t x334 = -62118813LL;
	int16_t x335 = -13834;
	int64_t x336 = -112491661LL;
	int64_t t82 = 2649168LL;

	t82 = (((x333|x334)%x335)|x336);

	if (t82 != -4105LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x337 = 17LLU;
	uint32_t x339 = 58568670U;
	int16_t x340 = INT16_MIN;
	uint64_t t83 = 151520705158LLU;

	t83 = (((x337|x338)%x339)|x340);

	if (t83 != 18446744073709546723LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x341 = 977203315U;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = -1;
	uint64_t x344 = 37LLU;

	t84 = (((x341|x342)%x343)|x344);

	if (t84 != 37LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x345 = 110;
	uint32_t x346 = UINT32_MAX;
	volatile int8_t x347 = -12;
	int64_t x348 = INT64_MIN;
	volatile int64_t t85 = 245562LL;

	t85 = (((x345|x346)%x347)|x348);

	if (t85 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = 38;
	static uint64_t x350 = 363288622LLU;
	static int64_t x351 = 33312956439268420LL;
	uint16_t x352 = UINT16_MAX;
	volatile uint64_t t86 = 2328561181027413000LLU;

	t86 = (((x349|x350)%x351)|x352);

	if (t86 != 363331583LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = 3;
	uint8_t x354 = 0U;
	int16_t x355 = 2174;
	int32_t x356 = INT32_MIN;
	int32_t t87 = -32317;

	t87 = (((x353|x354)%x355)|x356);

	if (t87 != -2147483645) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = 207U;
	volatile uint16_t x358 = UINT16_MAX;
	int16_t x359 = -1;
	static uint16_t x360 = 21U;
	int32_t t88 = 11738890;

	t88 = (((x357|x358)%x359)|x360);

	if (t88 != 21) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x361 = INT64_MIN;
	volatile int64_t t89 = 199459708803185242LL;

	t89 = (((x361|x362)%x363)|x364);

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x365 = UINT16_MAX;
	volatile int32_t x366 = -1;
	int64_t x368 = 15593675432154541LL;
	static int64_t t90 = 132724LL;

	t90 = (((x365|x366)%x367)|x368);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = -2884LL;
	uint16_t x371 = 2858U;
	int8_t x372 = 24;
	volatile int64_t t91 = 1LL;

	t91 = (((x369|x370)%x371)|x372);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x374 = INT16_MAX;
	static int16_t x375 = 7;
	volatile int8_t x376 = -1;
	int32_t t92 = -55558161;

	t92 = (((x373|x374)%x375)|x376);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x378 = 1425U;
	uint8_t x379 = 2U;

	t93 = (((x377|x378)%x379)|x380);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x382 = UINT16_MAX;
	volatile int32_t x383 = INT32_MIN;
	uint16_t x384 = UINT16_MAX;
	uint32_t t94 = 31813U;

	t94 = (((x381|x382)%x383)|x384);

	if (t94 != 14090239U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x385 = 2;
	uint32_t x386 = 8U;
	static uint32_t x387 = 44U;
	volatile uint32_t t95 = 5484U;

	t95 = (((x385|x386)%x387)|x388);

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x391 = INT64_MIN;
	volatile int64_t x392 = -1LL;

	t96 = (((x389|x390)%x391)|x392);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x393 = INT64_MAX;
	int8_t x394 = INT8_MIN;
	volatile int8_t x395 = INT8_MAX;
	int32_t x396 = -1;

	t97 = (((x393|x394)%x395)|x396);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x398 = 576637;
	int8_t x400 = -1;
	uint32_t t98 = UINT32_MAX;

	t98 = (((x397|x398)%x399)|x400);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = -1;
	int16_t x402 = -1;
	static uint32_t x403 = 116U;

	t99 = (((x401|x402)%x403)|x404);

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

