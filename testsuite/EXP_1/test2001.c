#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x1 = 16U;
static uint8_t x6 = UINT8_MAX;
int64_t t4 = -35690827472675LL;
volatile int64_t x26 = INT64_MIN;
int16_t x29 = INT16_MIN;
uint64_t x30 = 2465LLU;
int8_t x31 = -2;
int8_t x38 = INT8_MAX;
int16_t x42 = -1;
int64_t x43 = INT64_MAX;
static volatile uint64_t t13 = 2900351000104LLU;
int8_t x66 = INT8_MAX;
int16_t x69 = INT16_MIN;
static uint32_t x70 = 1622020400U;
uint32_t x74 = 0U;
volatile uint64_t x78 = 4302368758590373LLU;
int64_t x81 = -1LL;
volatile int16_t x87 = 10;
uint32_t x89 = 544U;
int32_t x90 = INT32_MIN;
volatile uint32_t t23 = UINT32_MAX;
uint8_t x98 = 0U;
static uint16_t x106 = 6U;
int64_t x108 = INT64_MIN;
static volatile uint32_t x111 = 251356U;
static uint32_t t27 = 11633U;
volatile int8_t x113 = -1;
int64_t x115 = 541761235347LL;
int32_t x122 = -20670260;
int64_t x123 = -1LL;
volatile int8_t x129 = -1;
volatile int8_t x138 = -1;
uint8_t x139 = UINT8_MAX;
int8_t x145 = 1;
int64_t x148 = 411LL;
int8_t x149 = INT8_MAX;
int16_t x150 = INT16_MIN;
int16_t x155 = INT16_MIN;
int64_t x157 = -1LL;
int32_t x158 = INT32_MAX;
int64_t t39 = -180632LL;
static int32_t x163 = 790717;
volatile int16_t x164 = INT16_MAX;
int64_t t40 = 114250616LL;
uint8_t x165 = UINT8_MAX;
int64_t x171 = INT64_MIN;
int32_t x174 = 945551297;
static volatile int16_t x180 = 1;
int64_t t44 = -841LL;
int64_t x181 = INT64_MIN;
int64_t t46 = 25021278606498LL;
int64_t t47 = -115653498LL;
int16_t x193 = 234;
uint64_t t48 = UINT64_MAX;
uint64_t x210 = 911LLU;
static int32_t x211 = -9;
uint32_t x224 = UINT32_MAX;
volatile int64_t x227 = 393907140333779451LL;
static int64_t x232 = INT64_MIN;
uint32_t x237 = UINT32_MAX;
uint8_t x238 = 13U;
volatile int8_t x239 = INT8_MAX;
volatile uint8_t x245 = 48U;
static int8_t x252 = INT8_MAX;
uint32_t t62 = 2129462498U;
volatile uint32_t t63 = 20U;
uint8_t x258 = UINT8_MAX;
int32_t x260 = INT32_MIN;
static int64_t x261 = INT64_MIN;
int32_t x264 = -24;
static volatile uint16_t x274 = 252U;
static volatile int8_t x278 = INT8_MIN;
int8_t x281 = 1;
volatile int64_t t70 = 99456490LL;
volatile uint64_t x290 = 3LLU;
int64_t x304 = 0LL;
int32_t x307 = -12109789;
int8_t x311 = 0;
int32_t x313 = 420004865;
volatile uint16_t x314 = 2U;
int32_t x321 = -1;
volatile int8_t x326 = INT8_MAX;
int16_t x327 = INT16_MIN;
int16_t x334 = INT16_MAX;
int32_t t86 = -657286249;
uint16_t x349 = 29077U;
int64_t x352 = INT64_MIN;
int8_t x355 = INT8_MAX;
uint8_t x356 = 4U;
uint8_t x361 = UINT8_MAX;
volatile int16_t x362 = INT16_MAX;
volatile int16_t x365 = INT16_MAX;
volatile uint64_t x373 = 12635684LLU;
int32_t x375 = INT32_MIN;
int32_t x384 = INT32_MIN;
static int64_t x385 = -109678640LL;
volatile int64_t t96 = 193764419001061529LL;
int64_t x389 = -1LL;
volatile uint8_t x393 = 0U;
int8_t x400 = 1;


void f0(void) {
	int32_t x2 = -1;
	int64_t x3 = INT64_MIN;
	int8_t x4 = -47;
	volatile int64_t t0 = -172LL;

	t0 = (((x1|x2)&x3)|x4);

	if (t0 != -47LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 21U;
	volatile int64_t x7 = INT64_MAX;
	int8_t x8 = 62;
	int64_t t1 = 197693285868763LL;

	t1 = (((x5|x6)&x7)|x8);

	if (t1 != 255LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 4U;
	uint8_t x10 = 7U;
	volatile int64_t x11 = -1LL;
	int8_t x12 = INT8_MIN;
	int64_t t2 = 33485771187LL;

	t2 = (((x9|x10)&x11)|x12);

	if (t2 != -121LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1;
	static uint32_t x14 = 1543U;
	static volatile uint64_t x15 = 1505LLU;
	uint16_t x16 = 1374U;
	volatile uint64_t t3 = 14164LLU;

	t3 = (((x13|x14)&x15)|x16);

	if (t3 != 1375LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = -2;
	static int64_t x19 = 62749597832603LL;
	volatile uint32_t x20 = 3U;

	t4 = (((x17|x18)&x19)|x20);

	if (t4 != 62749597832603LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	static int16_t x22 = INT16_MIN;
	uint64_t x23 = 812916780LLU;
	int32_t x24 = INT32_MIN;
	uint64_t t5 = 58222352LLU;

	t5 = (((x21|x22)&x23)|x24);

	if (t5 != 18446744072374984748LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	static volatile int64_t x27 = INT64_MIN;
	uint32_t x28 = UINT32_MAX;
	static int64_t t6 = -16706141LL;

	t6 = (((x25|x26)&x27)|x28);

	if (t6 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x32 = -791848LL;
	volatile uint64_t t7 = 59LLU;

	t7 = (((x29|x30)&x31)|x32);

	if (t7 != 18446744073709546488LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	volatile int32_t x34 = INT32_MIN;
	int8_t x35 = -27;
	uint64_t x36 = 128615083330LLU;
	static volatile uint64_t t8 = 153LLU;

	t8 = (((x33|x34)&x35)|x36);

	if (t8 != 18446744073475616066LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x37 = INT64_MIN;
	static volatile uint32_t x39 = UINT32_MAX;
	static volatile int64_t x40 = -1LL;
	static int64_t t9 = -123599555639400287LL;

	t9 = (((x37|x38)&x39)|x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int64_t x44 = INT64_MAX;
	volatile int64_t t10 = INT64_MAX;

	t10 = (((x41|x42)&x43)|x44);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	volatile uint64_t x46 = 12539LLU;
	int8_t x47 = -6;
	int8_t x48 = INT8_MIN;
	static volatile uint64_t t11 = 5028514LLU;

	t11 = (((x45|x46)&x47)|x48);

	if (t11 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int8_t x50 = -1;
	int64_t x51 = INT64_MAX;
	int16_t x52 = -8968;
	volatile int64_t t12 = 17470302139LL;

	t12 = (((x49|x50)&x51)|x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MAX;
	int16_t x54 = INT16_MAX;
	static volatile uint32_t x55 = UINT32_MAX;
	uint64_t x56 = 1592798416LLU;

	t13 = (((x53|x54)&x55)|x56);

	if (t13 != 4294967295LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 18675U;
	volatile uint32_t x58 = 340218895U;
	volatile uint8_t x59 = 1U;
	int16_t x60 = INT16_MIN;
	uint32_t t14 = 1738439U;

	t14 = (((x57|x58)&x59)|x60);

	if (t14 != 4294934529U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int16_t x62 = 13057;
	int32_t x63 = INT32_MAX;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 8548;

	t15 = (((x61|x62)&x63)|x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int8_t x67 = 48;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t16 = -7;

	t16 = (((x65|x66)&x67)|x68);

	if (t16 != -32720) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x71 = 21;
	int64_t x72 = -1LL;
	volatile int64_t t17 = -8LL;

	t17 = (((x69|x70)&x71)|x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 1;
	int8_t x75 = INT8_MAX;
	volatile int64_t x76 = 13650LL;
	volatile int64_t t18 = -3269570290LL;

	t18 = (((x73|x74)&x75)|x76);

	if (t18 != 13651LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = 2099;
	int32_t x79 = INT32_MIN;
	static uint32_t x80 = UINT32_MAX;
	volatile uint64_t t19 = 1353463021906904LLU;

	t19 = (((x77|x78)&x79)|x80);

	if (t19 != 4302371819618303LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -253324722723822473LL;
	volatile uint16_t x83 = 7U;
	int16_t x84 = 53;
	int64_t t20 = 1518012925551501LL;

	t20 = (((x81|x82)&x83)|x84);

	if (t20 != 55LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 648530173245LLU;
	volatile uint32_t x86 = 747U;
	volatile int16_t x88 = -1;
	uint64_t t21 = UINT64_MAX;

	t21 = (((x85|x86)&x87)|x88);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x91 = UINT16_MAX;
	int64_t x92 = -1LL;
	int64_t t22 = 8009638262LL;

	t22 = (((x89|x90)&x91)|x92);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -1;
	volatile int8_t x94 = INT8_MIN;
	uint32_t x95 = 15285150U;
	uint32_t x96 = UINT32_MAX;

	t23 = (((x93|x94)&x95)|x96);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	volatile int8_t x99 = 0;
	volatile uint64_t x100 = 4887316358223092LLU;
	uint64_t t24 = 905385LLU;

	t24 = (((x97|x98)&x99)|x100);

	if (t24 != 4887316358223092LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 13U;
	volatile int64_t x102 = INT64_MIN;
	uint8_t x103 = 0U;
	volatile uint32_t x104 = UINT32_MAX;
	volatile int64_t t25 = -20082LL;

	t25 = (((x101|x102)&x103)|x104);

	if (t25 != 4294967295LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	static volatile int64_t t26 = 358LL;

	t26 = (((x105|x106)&x107)|x108);

	if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MAX;
	uint32_t x112 = 12471498U;

	t27 = (((x109|x110)&x111)|x112);

	if (t27 != 12574174U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MAX;
	uint8_t x116 = 3U;
	volatile int64_t t28 = -83968436547351LL;

	t28 = (((x113|x114)&x115)|x116);

	if (t28 != 541761235347LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x117 = 24U;
	int8_t x118 = INT8_MAX;
	int64_t x119 = INT64_MIN;
	uint8_t x120 = UINT8_MAX;
	int64_t t29 = 3LL;

	t29 = (((x117|x118)&x119)|x120);

	if (t29 != 255LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x124 = INT16_MAX;
	volatile int64_t t30 = 327132132172LL;

	t30 = (((x121|x122)&x123)|x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static int8_t x126 = INT8_MAX;
	static int8_t x127 = INT8_MIN;
	uint16_t x128 = 8547U;
	int32_t t31 = 23128691;

	t31 = (((x125|x126)&x127)|x128);

	if (t31 != -2147475101) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x130 = INT32_MAX;
	volatile int16_t x131 = 64;
	int32_t x132 = -81739;
	static volatile int32_t t32 = -258610;

	t32 = (((x129|x130)&x131)|x132);

	if (t32 != -81675) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 15541802795LLU;
	int32_t x134 = 11;
	static int64_t x135 = -1LL;
	static int64_t x136 = INT64_MAX;
	uint64_t t33 = 37393784005120LLU;

	t33 = (((x133|x134)&x135)|x136);

	if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 0;
	static int8_t x140 = INT8_MIN;
	static volatile int32_t t34 = 29923;

	t34 = (((x137|x138)&x139)|x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static volatile int16_t x142 = INT16_MIN;
	static uint32_t x143 = UINT32_MAX;
	uint16_t x144 = 1519U;
	volatile uint64_t t35 = 50LLU;

	t35 = (((x141|x142)&x143)|x144);

	if (t35 != 4294967295LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MIN;
	volatile int64_t x147 = -29LL;
	volatile int64_t t36 = -2100LL;

	t36 = (((x145|x146)&x147)|x148);

	if (t36 != -32357LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x151 = UINT32_MAX;
	uint8_t x152 = 0U;
	uint32_t t37 = 109932944U;

	t37 = (((x149|x150)&x151)|x152);

	if (t37 != 4294934655U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 35U;
	int32_t x154 = -1;
	volatile int16_t x156 = -1;
	static int32_t t38 = -1;

	t38 = (((x153|x154)&x155)|x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x159 = 12U;
	int32_t x160 = -1;

	t39 = (((x157|x158)&x159)|x160);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x161 = INT32_MIN;
	volatile int64_t x162 = -1738396173416523328LL;

	t40 = (((x161|x162)&x163)|x164);

	if (t40 != 819199LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x166 = 395873U;
	volatile uint8_t x167 = UINT8_MAX;
	int32_t x168 = INT32_MIN;
	volatile uint32_t t41 = 1365033U;

	t41 = (((x165|x166)&x167)|x168);

	if (t41 != 2147483903U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = INT8_MIN;
	uint32_t x172 = 27006121U;
	int64_t t42 = 31855555537832LL;

	t42 = (((x169|x170)&x171)|x172);

	if (t42 != -9223372036827769687LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = -1;
	int32_t x175 = INT32_MIN;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t43 = -286674LL;

	t43 = (((x173|x174)&x175)|x176);

	if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -661LL;
	uint16_t x178 = 0U;
	uint8_t x179 = 5U;

	t44 = (((x177|x178)&x179)|x180);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x182 = -1;
	int64_t x183 = -8679481LL;
	static uint16_t x184 = 241U;
	int64_t t45 = -64LL;

	t45 = (((x181|x182)&x183)|x184);

	if (t45 != -8679433LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 74U;
	static int16_t x186 = -1;
	volatile int32_t x187 = 0;
	static int64_t x188 = -89320664313LL;

	t46 = (((x185|x186)&x187)|x188);

	if (t46 != -89320664313LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	uint8_t x190 = UINT8_MAX;
	uint8_t x191 = UINT8_MAX;
	static uint32_t x192 = 5173260U;

	t47 = (((x189|x190)&x191)|x192);

	if (t47 != 5173503LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -648431008290109LL;
	int64_t x195 = 3380652226LL;
	uint64_t x196 = UINT64_MAX;

	t48 = (((x193|x194)&x195)|x196);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	static int64_t x198 = INT64_MIN;
	int8_t x199 = -1;
	uint64_t x200 = 102673815LLU;
	volatile uint64_t t49 = 1305225333632LLU;

	t49 = (((x197|x198)&x199)|x200);

	if (t49 != 18446744071664741783LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MIN;
	volatile int64_t x202 = 988744175406324044LL;
	volatile int16_t x203 = -1939;
	static uint8_t x204 = UINT8_MAX;
	volatile int64_t t50 = 319LL;

	t50 = (((x201|x202)&x203)|x204);

	if (t50 != -992700161LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int16_t x206 = -293;
	uint32_t x207 = 2U;
	int64_t x208 = -433817551LL;
	volatile int64_t t51 = -681907029LL;

	t51 = (((x205|x206)&x207)|x208);

	if (t51 != -433817549LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MIN;
	int8_t x212 = 11;
	volatile uint64_t t52 = 57695LLU;

	t52 = (((x209|x210)&x211)|x212);

	if (t52 != 18446744071562068879LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	volatile int32_t x214 = INT32_MIN;
	uint16_t x215 = 6U;
	volatile uint64_t x216 = 42654535322236LLU;
	uint64_t t53 = 63904061828565494LLU;

	t53 = (((x213|x214)&x215)|x216);

	if (t53 != 42654535322238LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	static volatile uint8_t x218 = 2U;
	volatile uint32_t x219 = 10440U;
	static uint16_t x220 = UINT16_MAX;
	volatile uint32_t t54 = 464894541U;

	t54 = (((x217|x218)&x219)|x220);

	if (t54 != 65535U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = INT8_MIN;
	volatile uint8_t x222 = 34U;
	int64_t x223 = 10856639LL;
	volatile int64_t t55 = -72428LL;

	t55 = (((x221|x222)&x223)|x224);

	if (t55 != 4294967295LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x225 = UINT8_MAX;
	int64_t x226 = INT64_MAX;
	int16_t x228 = -258;
	static int64_t t56 = 2005600LL;

	t56 = (((x225|x226)&x227)|x228);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 1U;
	int32_t x230 = -1;
	int32_t x231 = INT32_MIN;
	volatile int64_t t57 = 459374300LL;

	t57 = (((x229|x230)&x231)|x232);

	if (t57 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -1;
	static uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MIN;
	uint8_t x236 = UINT8_MAX;
	uint32_t t58 = UINT32_MAX;

	t58 = (((x233|x234)&x235)|x236);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x240 = INT16_MIN;
	volatile uint32_t t59 = 122945U;

	t59 = (((x237|x238)&x239)|x240);

	if (t59 != 4294934655U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	static uint16_t x242 = 29U;
	int16_t x243 = -125;
	int32_t x244 = INT32_MIN;
	volatile int32_t t60 = -21016;

	t60 = (((x241|x242)&x243)|x244);

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MIN;
	uint32_t x247 = 0U;
	static int8_t x248 = INT8_MIN;
	int64_t t61 = -3012438635LL;

	t61 = (((x245|x246)&x247)|x248);

	if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	uint32_t x250 = 9U;
	static int8_t x251 = 10;

	t62 = (((x249|x250)&x251)|x252);

	if (t62 != 127U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 253777117U;
	static int32_t x254 = -2993444;
	static uint8_t x255 = 55U;
	volatile int32_t x256 = INT32_MIN;

	t63 = (((x253|x254)&x255)|x256);

	if (t63 != 2147483669U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -133165624394869160LL;
	uint32_t x259 = 8280299U;
	static int64_t t64 = -3423LL;

	t64 = (((x257|x258)&x259)|x260);

	if (t64 != -2144988949LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x262 = 3604LLU;
	uint16_t x263 = UINT16_MAX;
	volatile uint64_t t65 = 8537966225LLU;

	t65 = (((x261|x262)&x263)|x264);

	if (t65 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	uint64_t x266 = 16LLU;
	int8_t x267 = INT8_MIN;
	int8_t x268 = 1;
	uint64_t t66 = 91802692LLU;

	t66 = (((x265|x266)&x267)|x268);

	if (t66 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x269 = INT8_MAX;
	int32_t x270 = INT32_MIN;
	uint32_t x271 = 428264U;
	uint16_t x272 = 0U;
	volatile uint32_t t67 = 7842232U;

	t67 = (((x269|x270)&x271)|x272);

	if (t67 != 104U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint8_t x275 = 56U;
	int64_t x276 = -364004LL;
	int64_t t68 = -1858003397600830LL;

	t68 = (((x273|x274)&x275)|x276);

	if (t68 != -363972LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = UINT64_MAX;
	int32_t x279 = -1;
	int64_t x280 = INT64_MIN;
	static uint64_t t69 = UINT64_MAX;

	t69 = (((x277|x278)&x279)|x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = 183362291LL;
	static int32_t x283 = -1;
	volatile int64_t x284 = INT64_MIN;

	t70 = (((x281|x282)&x283)|x284);

	if (t70 != -9223372036671413517LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 3U;
	int8_t x286 = INT8_MAX;
	static volatile uint32_t x287 = 1454264U;
	int64_t x288 = INT64_MIN;
	static int64_t t71 = -28066417473747575LL;

	t71 = (((x285|x286)&x287)|x288);

	if (t71 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int16_t x291 = INT16_MIN;
	volatile int16_t x292 = -1;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (((x289|x290)&x291)|x292);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 13U;
	int16_t x294 = 2559;
	int16_t x295 = -1;
	int8_t x296 = -1;
	int32_t t73 = 7615617;

	t73 = (((x293|x294)&x295)|x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = INT64_MIN;
	uint16_t x299 = 7U;
	static int32_t x300 = INT32_MIN;
	static int64_t t74 = -84289277507648LL;

	t74 = (((x297|x298)&x299)|x300);

	if (t74 != -2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile int64_t x302 = -491LL;
	int64_t x303 = INT64_MIN;
	static volatile int64_t t75 = INT64_MIN;

	t75 = (((x301|x302)&x303)|x304);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	static int16_t x306 = INT16_MAX;
	int8_t x308 = INT8_MAX;
	static volatile int32_t t76 = -3780;

	t76 = (((x305|x306)&x307)|x308);

	if (t76 != 14463) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MIN;
	int32_t x310 = -1;
	static int32_t x312 = -6654;
	static volatile int32_t t77 = -1;

	t77 = (((x309|x310)&x311)|x312);

	if (t77 != -6654) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x315 = 451;
	int32_t x316 = INT32_MAX;
	static int32_t t78 = INT32_MAX;

	t78 = (((x313|x314)&x315)|x316);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = UINT16_MAX;
	int32_t x318 = INT32_MAX;
	static uint8_t x319 = UINT8_MAX;
	volatile int32_t x320 = -1;
	volatile int32_t t79 = 230613;

	t79 = (((x317|x318)&x319)|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = -1LL;
	int8_t x323 = INT8_MIN;
	static int64_t x324 = 204722940LL;
	int64_t t80 = -679856LL;

	t80 = (((x321|x322)&x323)|x324);

	if (t80 != -4LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	volatile uint64_t x328 = 9956401132097LLU;
	uint64_t t81 = 5LLU;

	t81 = (((x325|x326)&x327)|x328);

	if (t81 != 18446744073709531713LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = 71224860298905477LLU;
	uint64_t x330 = 2424LLU;
	volatile int32_t x331 = INT32_MIN;
	volatile uint64_t x332 = 11LLU;
	static volatile uint64_t t82 = 68LLU;

	t82 = (((x329|x330)&x331)|x332);

	if (t82 != 71224860008775691LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MIN;
	static int8_t x335 = -1;
	int32_t x336 = -10135635;
	volatile int64_t t83 = -16346470807189LL;

	t83 = (((x333|x334)&x335)|x336);

	if (t83 != -10125313LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = 8689301619517080192LLU;
	uint64_t x338 = UINT64_MAX;
	volatile uint32_t x339 = 147U;
	int8_t x340 = INT8_MIN;
	volatile uint64_t t84 = 68558783031LLU;

	t84 = (((x337|x338)&x339)|x340);

	if (t84 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -162;
	static int8_t x342 = INT8_MIN;
	uint16_t x343 = 155U;
	int32_t x344 = -1;
	int32_t t85 = -166503;

	t85 = (((x341|x342)&x343)|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 2U;
	int8_t x346 = INT8_MAX;
	int8_t x347 = INT8_MIN;
	int8_t x348 = -2;

	t86 = (((x345|x346)&x347)|x348);

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = UINT64_MAX;
	volatile int16_t x351 = INT16_MAX;
	uint64_t t87 = 31319946LLU;

	t87 = (((x349|x350)&x351)|x352);

	if (t87 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 509812643362419338LLU;
	int16_t x354 = 1021;
	uint64_t t88 = 241929LLU;

	t88 = (((x353|x354)&x355)|x356);

	if (t88 != 127LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = UINT64_MAX;
	uint8_t x358 = 23U;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MIN;
	static uint64_t t89 = 11734485168LLU;

	t89 = (((x357|x358)&x359)|x360);

	if (t89 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x363 = -1;
	int32_t x364 = INT32_MIN;
	static volatile int32_t t90 = -1070963;

	t90 = (((x361|x362)&x363)|x364);

	if (t90 != -2147450881) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = -1;
	volatile int64_t x367 = -1LL;
	int16_t x368 = -1;
	static int64_t t91 = -20579350LL;

	t91 = (((x365|x366)&x367)|x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 3;
	int16_t x370 = INT16_MIN;
	static uint8_t x371 = UINT8_MAX;
	uint64_t x372 = 27571379LLU;
	volatile uint64_t t92 = 193LLU;

	t92 = (((x369|x370)&x371)|x372);

	if (t92 != 27571379LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x374 = UINT8_MAX;
	uint64_t x376 = 5116979236LLU;
	volatile uint64_t t93 = 1649LLU;

	t93 = (((x373|x374)&x375)|x376);

	if (t93 != 5116979236LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -1;
	int64_t x378 = 21766954931LL;
	static int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MIN;
	int64_t t94 = -4LL;

	t94 = (((x377|x378)&x379)|x380);

	if (t94 != -32768LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 0LL;
	volatile uint8_t x382 = 37U;
	volatile int32_t x383 = INT32_MIN;
	static int64_t t95 = 6289LL;

	t95 = (((x381|x382)&x383)|x384);

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x386 = -1;
	int32_t x387 = INT32_MIN;
	int32_t x388 = INT32_MAX;

	t96 = (((x385|x386)&x387)|x388);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x390 = UINT64_MAX;
	volatile int32_t x391 = -1;
	volatile uint16_t x392 = 21U;
	uint64_t t97 = UINT64_MAX;

	t97 = (((x389|x390)&x391)|x392);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = UINT16_MAX;
	static int64_t x395 = -1LL;
	volatile int8_t x396 = -1;
	volatile int64_t t98 = 49LL;

	t98 = (((x393|x394)&x395)|x396);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x397 = 33131728LL;
	int16_t x398 = INT16_MIN;
	int32_t x399 = 0;
	int64_t t99 = -11LL;

	t99 = (((x397|x398)&x399)|x400);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

