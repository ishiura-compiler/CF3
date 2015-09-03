#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 386747417328663LLU;
int16_t x7 = INT16_MIN;
volatile int64_t t3 = -937310486828LL;
int8_t x26 = INT8_MIN;
volatile uint32_t x27 = 1400794231U;
uint64_t x30 = 3568315159139LLU;
uint64_t x36 = 214950LLU;
int32_t x40 = INT32_MAX;
int32_t t9 = 8;
int32_t t10 = 3898261;
int32_t t11 = 1167567;
uint16_t x53 = UINT16_MAX;
int64_t t13 = 1854LL;
int32_t x58 = INT32_MAX;
volatile int32_t x60 = INT32_MIN;
int32_t x69 = 1018;
uint8_t x72 = UINT8_MAX;
uint64_t x74 = 4758676846797LLU;
static uint16_t x78 = UINT16_MAX;
int8_t x82 = INT8_MAX;
uint8_t x91 = 8U;
static volatile int64_t t22 = -32084949230LL;
volatile int64_t t24 = -735836766938LL;
volatile uint32_t t26 = 959163760U;
int8_t x111 = -63;
uint64_t x112 = 83580LLU;
uint64_t t27 = 87560LLU;
int8_t x119 = -2;
static int64_t x120 = INT64_MAX;
int16_t x124 = INT16_MIN;
int16_t x143 = -1;
volatile uint64_t x146 = 68745070824828009LLU;
volatile uint32_t t35 = 52415940U;
int64_t t36 = -7LL;
volatile int32_t x154 = -1;
int64_t x161 = -82LL;
int64_t x173 = INT64_MIN;
volatile int8_t x175 = -1;
static int32_t x180 = INT32_MIN;
int8_t x188 = 50;
uint8_t x192 = 78U;
uint64_t t46 = 31380385305362LLU;
static uint32_t x205 = 43132U;
static uint32_t t48 = 2674568U;
uint16_t x216 = 684U;
uint32_t x219 = 125949U;
static int8_t x220 = INT8_MIN;
int8_t x231 = -1;
uint16_t x233 = 12803U;
volatile int16_t x249 = INT16_MIN;
static int16_t x251 = -1;
volatile int64_t x256 = -1LL;
uint64_t x263 = UINT64_MAX;
static uint64_t x267 = 26479111407606LLU;
volatile int32_t t63 = -315;
int64_t x270 = -7547LL;
int16_t x272 = -1;
static uint32_t t64 = 22U;
int8_t x281 = -9;
int64_t x282 = -1LL;
volatile int16_t x286 = INT16_MIN;
volatile int64_t t67 = 90533316040LL;
int64_t x289 = -1LL;
volatile int8_t x290 = -1;
uint8_t x291 = 12U;
int64_t x296 = INT64_MAX;
int16_t x298 = INT16_MIN;
int64_t t70 = -13197160572008LL;
volatile int16_t x301 = INT16_MIN;
uint64_t x308 = 99LLU;
static volatile uint64_t t72 = 2974888590021537LLU;
int16_t x310 = -149;
volatile int32_t t73 = 43720961;
static int8_t x313 = 14;
int32_t x316 = -1;
static int32_t x325 = 696512;
int32_t x326 = INT32_MAX;
volatile uint32_t t76 = 332U;
int16_t x329 = INT16_MAX;
volatile int16_t x331 = 0;
volatile int32_t t77 = -86992158;
int8_t x333 = INT8_MIN;
int8_t x340 = 31;
static volatile int64_t x342 = -77714439695826LL;
int16_t x350 = INT16_MIN;
uint64_t x351 = 267008085775856942LLU;
volatile int16_t x352 = INT16_MAX;
int8_t x363 = INT8_MIN;
uint8_t x365 = 9U;
int8_t x370 = -1;
int64_t x371 = INT64_MAX;
uint16_t x380 = UINT16_MAX;
uint32_t x387 = UINT32_MAX;
static volatile uint32_t x391 = UINT32_MAX;
int16_t x395 = INT16_MAX;
uint32_t x403 = 227100283U;
static uint64_t t93 = 12261253LLU;
volatile uint16_t x405 = 285U;
static volatile int64_t x409 = INT64_MIN;
static volatile uint64_t x410 = UINT64_MAX;
volatile int8_t x416 = INT8_MAX;
uint16_t x417 = 2U;
uint64_t x423 = 147625668437513138LLU;
uint64_t x426 = 4722381145900470LLU;


void f0(void) {
	uint64_t x1 = 1778251409LLU;
	int8_t x2 = -1;
	volatile int16_t x3 = -487;
	int8_t x4 = -1;

	t0 = ((x1*(x2<=x3))%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static uint64_t x6 = UINT64_MAX;
	static int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 144;

	t1 = ((x5*(x6<=x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int16_t x10 = 259;
	int32_t x11 = INT32_MIN;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 78LL;

	t2 = ((x9*(x10<=x11))%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 21104203235034LL;
	uint8_t x14 = UINT8_MAX;
	int16_t x15 = 1936;
	volatile int32_t x16 = INT32_MAX;

	t3 = ((x13*(x14<=x15))%x16);

	if (t3 != 881435965LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -2;
	static int64_t x18 = -1LL;
	int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 1285176;

	t4 = ((x17*(x18<=x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 858LLU;
	static volatile int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MAX;
	int16_t x24 = 51;
	static uint64_t t5 = 1552144205LLU;

	t5 = ((x21*(x22<=x23))%x24);

	if (t5 != 42LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 14421960809LL;
	int64_t x28 = 5804319505LL;
	static volatile int64_t t6 = -13403005209263LL;

	t6 = ((x25*(x26<=x27))%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x29 = -3240;
	int8_t x31 = -1;
	int16_t x32 = -172;
	volatile int32_t t7 = -216028191;

	t7 = ((x29*(x30<=x31))%x32);

	if (t7 != -144) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 21U;
	int64_t x34 = INT64_MIN;
	int64_t x35 = INT64_MIN;
	uint64_t t8 = 1925282414LLU;

	t8 = ((x33*(x34<=x35))%x36);

	if (t8 != 21LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1084;
	uint64_t x38 = 1786701369LLU;
	int64_t x39 = INT64_MIN;

	t9 = ((x37*(x38<=x39))%x40);

	if (t9 != -1084) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 1U;
	uint64_t x42 = 215532813153201LLU;
	uint8_t x43 = 1U;
	uint8_t x44 = 11U;

	t10 = ((x41*(x42<=x43))%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 2;
	uint32_t x46 = 893688104U;
	int8_t x47 = -13;
	int8_t x48 = INT8_MAX;

	t11 = ((x45*(x46<=x47))%x48);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	volatile int16_t x50 = INT16_MIN;
	int8_t x51 = -10;
	int64_t x52 = INT64_MIN;
	int64_t t12 = -5316525LL;

	t12 = ((x49*(x50<=x51))%x52);

	if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MAX;
	int32_t x55 = INT32_MIN;
	volatile int64_t x56 = -144542LL;

	t13 = ((x53*(x54<=x55))%x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 432356;
	int8_t x59 = -1;
	volatile int32_t t14 = -232170043;

	t14 = ((x57*(x58<=x59))%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MAX;
	int8_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	static int64_t t15 = 1LL;

	t15 = ((x61*(x62<=x63))%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static uint64_t x66 = 2887443308059212735LLU;
	int16_t x67 = 1917;
	volatile int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = -168166458;

	t16 = ((x65*(x66<=x67))%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MIN;
	uint8_t x71 = 12U;
	static volatile int32_t t17 = 1;

	t17 = ((x69*(x70<=x71))%x72);

	if (t17 != 253) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 0;
	int8_t x75 = INT8_MIN;
	uint64_t x76 = 449900586317846LLU;
	static volatile uint64_t t18 = 0LLU;

	t18 = ((x73*(x74<=x75))%x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 1855891845LLU;
	static uint64_t x79 = 13844313LLU;
	uint16_t x80 = 2U;
	volatile uint64_t t19 = 26943690LLU;

	t19 = ((x77*(x78<=x79))%x80);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = UINT16_MAX;
	volatile uint8_t x83 = 120U;
	volatile int32_t x84 = 1424931;
	volatile int32_t t20 = -8177009;

	t20 = ((x81*(x82<=x83))%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -985;
	int32_t x86 = 754335;
	volatile uint32_t x87 = UINT32_MAX;
	static int16_t x88 = INT16_MAX;
	volatile int32_t t21 = -955238845;

	t21 = ((x85*(x86<=x87))%x88);

	if (t21 != -985) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x90 = -158581601627LL;
	int64_t x92 = INT64_MIN;

	t22 = ((x89*(x90<=x91))%x92);

	if (t22 != 4294967295LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = 6;
	int16_t x95 = -1;
	int64_t x96 = INT64_MIN;
	int64_t t23 = -4416563580375873LL;

	t23 = ((x93*(x94<=x95))%x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x97 = -8;
	uint8_t x98 = UINT8_MAX;
	static volatile int32_t x99 = -1;
	volatile int64_t x100 = -1LL;

	t24 = ((x97*(x98<=x99))%x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = UINT64_MAX;
	volatile uint16_t x102 = 148U;
	int64_t x103 = INT64_MAX;
	volatile int16_t x104 = INT16_MIN;
	uint64_t t25 = 74LLU;

	t25 = ((x101*(x102<=x103))%x104);

	if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = UINT16_MAX;
	int32_t x106 = INT32_MIN;
	volatile int16_t x107 = 529;
	uint32_t x108 = 1725306U;

	t26 = ((x105*(x106<=x107))%x108);

	if (t26 != 65535U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	uint32_t x110 = 3696U;

	t27 = ((x109*(x110<=x111))%x112);

	if (t27 != 2115LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 10492U;
	int32_t x114 = -1;
	static uint8_t x115 = 8U;
	uint32_t x116 = 116545104U;
	volatile uint32_t t28 = 808766302U;

	t28 = ((x113*(x114<=x115))%x116);

	if (t28 != 10492U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 1;
	volatile uint64_t x118 = 8341220034311818858LLU;
	volatile int64_t t29 = -14537646621653903LL;

	t29 = ((x117*(x118<=x119))%x120);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MIN;
	int16_t x123 = INT16_MAX;
	volatile int64_t t30 = 45498690LL;

	t30 = ((x121*(x122<=x123))%x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	static uint16_t x126 = UINT16_MAX;
	int64_t x127 = INT64_MIN;
	uint8_t x128 = 57U;
	volatile int64_t t31 = -1287321LL;

	t31 = ((x125*(x126<=x127))%x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1765191LL;
	volatile int32_t x130 = INT32_MIN;
	int8_t x131 = -1;
	int16_t x132 = INT16_MIN;
	static int64_t t32 = -12LL;

	t32 = ((x129*(x130<=x131))%x132);

	if (t32 != -28487LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int8_t x134 = 9;
	int32_t x135 = -1045;
	volatile int8_t x136 = 36;
	int64_t t33 = 3113734621387290LL;

	t33 = ((x133*(x134<=x135))%x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1800995455559047083LL;
	volatile int16_t x142 = INT16_MIN;
	int32_t x144 = -254241;
	volatile int64_t t34 = 58473447LL;

	t34 = ((x141*(x142<=x143))%x144);

	if (t34 != -137967LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = UINT32_MAX;
	uint64_t x147 = UINT64_MAX;
	static int16_t x148 = 70;

	t35 = ((x145*(x146<=x147))%x148);

	if (t35 != 45U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -54020352LL;
	int8_t x150 = INT8_MIN;
	static int8_t x151 = INT8_MAX;
	uint32_t x152 = 865526U;

	t36 = ((x149*(x150<=x151))%x152);

	if (t36 != -357740LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	int8_t x155 = INT8_MIN;
	static int16_t x156 = -15;
	int32_t t37 = 32244;

	t37 = ((x153*(x154<=x155))%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -29167385443183430LL;
	int32_t x158 = -5;
	int64_t x159 = 106393083631230485LL;
	int64_t x160 = INT64_MIN;
	volatile int64_t t38 = -5040LL;

	t38 = ((x157*(x158<=x159))%x160);

	if (t38 != -29167385443183430LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x162 = INT16_MIN;
	volatile int16_t x163 = -11;
	volatile int32_t x164 = INT32_MAX;
	static int64_t t39 = 3LL;

	t39 = ((x161*(x162<=x163))%x164);

	if (t39 != -82LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	static volatile uint16_t x170 = UINT16_MAX;
	static int64_t x171 = -965337929095610LL;
	int16_t x172 = INT16_MIN;
	volatile int64_t t40 = -4432LL;

	t40 = ((x169*(x170<=x171))%x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x174 = 97U;
	static int32_t x176 = INT32_MAX;
	static volatile int64_t t41 = -1396346194112205LL;

	t41 = ((x173*(x174<=x175))%x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = -1;
	static uint16_t x178 = 1U;
	static volatile uint8_t x179 = UINT8_MAX;
	int32_t t42 = -26944442;

	t42 = ((x177*(x178<=x179))%x180);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MIN;
	volatile uint32_t x186 = 19444U;
	volatile int8_t x187 = 11;
	volatile int64_t t43 = 5015030793879791LL;

	t43 = ((x185*(x186<=x187))%x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x189 = INT16_MIN;
	uint32_t x190 = 18414U;
	int8_t x191 = INT8_MIN;
	static volatile int32_t t44 = -46;

	t44 = ((x189*(x190<=x191))%x192);

	if (t44 != -8) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = 18U;
	static int8_t x194 = 0;
	volatile uint32_t x195 = UINT32_MAX;
	uint16_t x196 = 1039U;
	int32_t t45 = 499;

	t45 = ((x193*(x194<=x195))%x196);

	if (t45 != 18) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 318597237435243693LLU;
	int64_t x198 = 10450451LL;
	int32_t x199 = INT32_MAX;
	static uint64_t x200 = UINT64_MAX;

	t46 = ((x197*(x198<=x199))%x200);

	if (t46 != 318597237435243693LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -1;
	int16_t x202 = -995;
	int64_t x203 = INT64_MAX;
	int32_t x204 = 164520;
	volatile int32_t t47 = -97397483;

	t47 = ((x201*(x202<=x203))%x204);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MAX;
	uint8_t x208 = 4U;

	t48 = ((x205*(x206<=x207))%x208);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x209 = UINT32_MAX;
	uint64_t x210 = UINT64_MAX;
	int64_t x211 = -1LL;
	volatile int8_t x212 = INT8_MAX;
	volatile uint32_t t49 = 168U;

	t49 = ((x209*(x210<=x211))%x212);

	if (t49 != 15U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x213 = 23U;
	int64_t x214 = INT64_MIN;
	volatile uint8_t x215 = UINT8_MAX;
	static uint32_t t50 = 588068110U;

	t50 = ((x213*(x214<=x215))%x216);

	if (t50 != 23U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x217 = -1;
	uint32_t x218 = UINT32_MAX;
	int32_t t51 = 3;

	t51 = ((x217*(x218<=x219))%x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = 27LLU;
	int8_t x222 = INT8_MAX;
	uint64_t x223 = UINT64_MAX;
	int32_t x224 = -1;
	volatile uint64_t t52 = 13579LLU;

	t52 = ((x221*(x222<=x223))%x224);

	if (t52 != 27LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x225 = 5U;
	static int8_t x226 = INT8_MIN;
	static int32_t x227 = -933492;
	static int8_t x228 = -25;
	volatile int32_t t53 = -11636;

	t53 = ((x225*(x226<=x227))%x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = -1;
	int16_t x230 = -450;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t54 = -898676;

	t54 = ((x229*(x230<=x231))%x232);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x234 = INT16_MIN;
	static volatile int32_t x235 = INT32_MIN;
	static uint32_t x236 = 450864123U;
	uint32_t t55 = 2U;

	t55 = ((x233*(x234<=x235))%x236);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = UINT64_MAX;
	int8_t x238 = INT8_MIN;
	int16_t x239 = 5118;
	int16_t x240 = INT16_MAX;
	uint64_t t56 = 1LLU;

	t56 = ((x237*(x238<=x239))%x240);

	if (t56 != 15LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x241 = 52720687U;
	volatile int64_t x242 = -1453180LL;
	volatile int8_t x243 = -1;
	uint8_t x244 = UINT8_MAX;
	static uint32_t t57 = 866794169U;

	t57 = ((x241*(x242<=x243))%x244);

	if (t57 != 202U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x245 = 3528934870518591LL;
	uint32_t x246 = UINT32_MAX;
	int8_t x247 = -1;
	int64_t x248 = -1LL;
	int64_t t58 = 2111269701LL;

	t58 = ((x245*(x246<=x247))%x248);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x250 = 236483;
	uint64_t x252 = 136LLU;
	volatile uint64_t t59 = 297101LLU;

	t59 = ((x249*(x250<=x251))%x252);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = 44676402U;
	int8_t x254 = -1;
	int64_t x255 = INT64_MIN;
	volatile int64_t t60 = -6633058581847404LL;

	t60 = ((x253*(x254<=x255))%x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = 4173776;
	static volatile int8_t x258 = INT8_MIN;
	int32_t x259 = 98;
	static int16_t x260 = -50;
	int32_t t61 = -3608;

	t61 = ((x257*(x258<=x259))%x260);

	if (t61 != 26) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x261 = 8659605615735615268LLU;
	volatile int8_t x262 = 17;
	int16_t x264 = -740;
	static uint64_t t62 = 46030LLU;

	t62 = ((x261*(x262<=x263))%x264);

	if (t62 != 8659605615735615268LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x265 = -1;
	uint32_t x266 = 25U;
	int8_t x268 = INT8_MIN;

	t63 = ((x265*(x266<=x267))%x268);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = UINT32_MAX;
	uint8_t x271 = UINT8_MAX;

	t64 = ((x269*(x270<=x271))%x272);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MIN;
	volatile int8_t x274 = INT8_MIN;
	static int16_t x275 = -2589;
	static volatile int8_t x276 = -1;
	volatile int32_t t65 = 662;

	t65 = ((x273*(x274<=x275))%x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x283 = 45343319213476186LLU;
	int32_t x284 = INT32_MAX;
	static int32_t t66 = -3630;

	t66 = ((x281*(x282<=x283))%x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = 331837766403LL;
	int8_t x287 = 0;
	int8_t x288 = 50;

	t67 = ((x285*(x286<=x287))%x288);

	if (t67 != 3LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x292 = UINT8_MAX;
	int64_t t68 = -17776843674092354LL;

	t68 = ((x289*(x290<=x291))%x292);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x293 = INT64_MAX;
	int64_t x294 = -1LL;
	int8_t x295 = 0;
	volatile int64_t t69 = -51784LL;

	t69 = ((x293*(x294<=x295))%x296);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = 31U;
	int16_t x299 = -1179;
	int64_t x300 = -1LL;

	t70 = ((x297*(x298<=x299))%x300);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x302 = -1;
	int32_t x303 = 1179965;
	static int8_t x304 = 38;
	volatile int32_t t71 = -1;

	t71 = ((x301*(x302<=x303))%x304);

	if (t71 != -12) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = INT16_MIN;
	volatile int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;

	t72 = ((x305*(x306<=x307))%x308);

	if (t72 != 17LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MIN;
	int8_t x311 = INT8_MIN;
	static int16_t x312 = INT16_MIN;

	t73 = ((x309*(x310<=x311))%x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x314 = INT16_MIN;
	int8_t x315 = 5;
	int32_t t74 = 13953649;

	t74 = ((x313*(x314<=x315))%x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x321 = 1U;
	volatile uint16_t x322 = 10U;
	static int64_t x323 = -9471175125725LL;
	uint32_t x324 = 310U;
	static uint32_t t75 = 26U;

	t75 = ((x321*(x322<=x323))%x324);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x327 = UINT64_MAX;
	volatile uint32_t x328 = 12388U;

	t76 = ((x325*(x326<=x327))%x328);

	if (t76 != 2784U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x330 = INT16_MIN;
	int8_t x332 = INT8_MIN;

	t77 = ((x329*(x330<=x331))%x332);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x334 = UINT16_MAX;
	static uint64_t x335 = 724500436398LLU;
	int8_t x336 = INT8_MIN;
	int32_t t78 = 945437487;

	t78 = ((x333*(x334<=x335))%x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = -27;
	static uint32_t x338 = 11288U;
	static int64_t x339 = INT64_MIN;
	volatile int32_t t79 = -13881;

	t79 = ((x337*(x338<=x339))%x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = -1LL;
	volatile int8_t x343 = 33;
	volatile int32_t x344 = INT32_MIN;
	int64_t t80 = 804LL;

	t80 = ((x341*(x342<=x343))%x344);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x345 = INT64_MIN;
	volatile int32_t x346 = -1;
	static volatile int16_t x347 = -1;
	uint16_t x348 = 26U;
	volatile int64_t t81 = -4988051005042LL;

	t81 = ((x345*(x346<=x347))%x348);

	if (t81 != -8LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x349 = INT16_MIN;
	int32_t t82 = 266424242;

	t82 = ((x349*(x350<=x351))%x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x353 = 6U;
	static int8_t x354 = -17;
	volatile uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 120441003LLU;
	volatile uint64_t t83 = 8268827037537521LLU;

	t83 = ((x353*(x354<=x355))%x356);

	if (t83 != 6LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = 0;
	static int64_t x358 = INT64_MIN;
	volatile uint16_t x359 = 5U;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t84 = 0;

	t84 = ((x357*(x358<=x359))%x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = -1;
	int16_t x362 = 0;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t85 = 231840;

	t85 = ((x361*(x362<=x363))%x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x366 = INT8_MIN;
	volatile int16_t x367 = -6;
	int32_t x368 = INT32_MIN;
	int32_t t86 = -1;

	t86 = ((x365*(x366<=x367))%x368);

	if (t86 != 9) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x369 = 30U;
	int32_t x372 = INT32_MIN;
	int32_t t87 = -26;

	t87 = ((x369*(x370<=x371))%x372);

	if (t87 != 30) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x377 = UINT32_MAX;
	int64_t x378 = INT64_MAX;
	int16_t x379 = INT16_MIN;
	volatile uint32_t t88 = 19U;

	t88 = ((x377*(x378<=x379))%x380);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MAX;
	int64_t x383 = -1LL;
	int32_t x384 = -1;
	int32_t t89 = -100783451;

	t89 = ((x381*(x382<=x383))%x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = -1LL;
	int32_t x388 = -2994;
	volatile int32_t t90 = -1;

	t90 = ((x385*(x386<=x387))%x388);

	if (t90 != -1220) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x389 = 84U;
	uint8_t x390 = 0U;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t91 = -27205;

	t91 = ((x389*(x390<=x391))%x392);

	if (t91 != 84) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x393 = -1;
	int16_t x394 = INT16_MAX;
	volatile int32_t x396 = -1723290;
	int32_t t92 = 97;

	t92 = ((x393*(x394<=x395))%x396);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x401 = 311443610440LLU;
	int16_t x402 = INT16_MIN;
	uint8_t x404 = 14U;

	t93 = ((x401*(x402<=x403))%x404);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x406 = -208;
	volatile uint16_t x407 = 1U;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t94 = 1148;

	t94 = ((x405*(x406<=x407))%x408);

	if (t94 != 285) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x411 = -1;
	int64_t x412 = INT64_MIN;
	int64_t t95 = -1981169679223LL;

	t95 = ((x409*(x410<=x411))%x412);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x413 = UINT32_MAX;
	int16_t x414 = INT16_MIN;
	int64_t x415 = INT64_MIN;
	volatile uint32_t t96 = 107469U;

	t96 = ((x413*(x414<=x415))%x416);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x418 = 13U;
	int64_t x419 = INT64_MIN;
	uint16_t x420 = 3668U;
	int32_t t97 = -1350985;

	t97 = ((x417*(x418<=x419))%x420);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x421 = UINT16_MAX;
	uint32_t x422 = 21993409U;
	int32_t x424 = -1;
	int32_t t98 = 350484;

	t98 = ((x421*(x422<=x423))%x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = -1LL;
	int32_t x427 = INT32_MAX;
	int64_t x428 = INT64_MAX;
	int64_t t99 = -61285061770289277LL;

	t99 = ((x425*(x426<=x427))%x428);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

