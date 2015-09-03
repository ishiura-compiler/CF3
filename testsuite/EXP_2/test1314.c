#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x2 = 0U;
static int64_t x8 = 20106743897922LL;
volatile int64_t t2 = INT64_MIN;
int32_t x13 = INT32_MAX;
int32_t x14 = -281232814;
int32_t x17 = 1870;
static int32_t x20 = -1;
volatile uint64_t x24 = UINT64_MAX;
uint8_t x26 = 45U;
volatile int64_t x32 = -1LL;
static volatile uint64_t t8 = 9375172LLU;
volatile int16_t x44 = -3574;
volatile int32_t t12 = INT32_MAX;
int16_t x54 = -62;
volatile int64_t t13 = 0LL;
static int8_t x58 = INT8_MIN;
int16_t x60 = 0;
static int32_t x62 = INT32_MIN;
int16_t x64 = 3432;
int32_t t15 = 236;
int16_t x67 = 9;
static volatile uint32_t x73 = 1076946152U;
static uint32_t x75 = 126U;
int64_t t19 = -498LL;
uint32_t x91 = 726238401U;
int64_t x92 = -1LL;
volatile int64_t t23 = 3302LL;
volatile int32_t x97 = INT32_MIN;
static uint64_t x101 = 24209180LLU;
int32_t x102 = 2565;
int64_t x112 = INT64_MIN;
uint64_t x115 = UINT64_MAX;
int8_t x133 = INT8_MIN;
volatile int32_t t33 = 12;
int32_t x138 = INT32_MIN;
int64_t t34 = 84971155328LL;
int16_t x141 = -1;
int16_t x144 = INT16_MIN;
volatile uint16_t x150 = UINT16_MAX;
int64_t x152 = INT64_MIN;
volatile int64_t t37 = INT64_MIN;
uint8_t x172 = UINT8_MAX;
static int8_t x179 = 63;
volatile int64_t x184 = -1LL;
static int32_t t46 = 833426;
volatile int32_t t47 = -144;
volatile uint8_t x198 = UINT8_MAX;
int8_t x203 = INT8_MAX;
uint64_t x208 = UINT64_MAX;
uint32_t x213 = 1679U;
uint64_t x214 = 103696LLU;
static int32_t x217 = INT32_MIN;
int16_t x228 = -1;
static uint32_t x230 = 19755228U;
static uint32_t x236 = 1762U;
static int32_t t60 = -1;
int32_t x245 = -12510;
volatile int64_t t61 = INT64_MIN;
uint64_t t62 = 21158602LLU;
int64_t x254 = INT64_MIN;
int64_t x272 = INT64_MAX;
int32_t x274 = -1;
uint8_t x279 = UINT8_MAX;
static uint64_t x281 = 74449742LLU;
int8_t x284 = INT8_MIN;
volatile int32_t t72 = 435887;
int32_t t74 = 2849687;
uint16_t x305 = 0U;
int8_t x309 = INT8_MIN;
int8_t x310 = INT8_MAX;
static uint8_t x312 = 5U;
volatile int32_t t77 = 120886038;
int8_t x315 = 1;
uint8_t x316 = UINT8_MAX;
uint64_t x327 = 28575970602LLU;
int64_t t81 = 92977590464078LL;
int32_t x336 = INT32_MIN;
int8_t x337 = 2;
volatile uint64_t t84 = 2598710691453821LLU;
int32_t t86 = -1280;
volatile int32_t t87 = 995260;
static int32_t t88 = -4992272;
int64_t x362 = -1LL;
int32_t t90 = 2;
volatile uint32_t x369 = UINT32_MAX;
static int16_t x372 = -128;
uint32_t t92 = 7U;
int8_t x378 = -1;
int8_t x380 = -31;
static volatile int16_t x382 = INT16_MAX;
static int32_t x384 = 1;
volatile int32_t t96 = -107;


void f0(void) {
	static int64_t x1 = -903402LL;
	volatile int8_t x3 = INT8_MAX;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = INT64_MIN;

	t0 = ((x1&(x2==x3))+x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x6 = INT16_MIN;
	static int64_t x7 = INT64_MAX;
	int64_t t1 = 213472351675002LL;

	t1 = ((x5&(x6==x7))+x8);

	if (t1 != 20106743897922LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 95U;
	uint16_t x10 = 10380U;
	volatile int8_t x11 = INT8_MAX;
	volatile int64_t x12 = INT64_MIN;

	t2 = ((x9&(x10==x11))+x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x15 = 22U;
	static int16_t x16 = -1;
	int32_t t3 = -508687606;

	t3 = ((x13&(x14==x15))+x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	int8_t x19 = 21;
	volatile int32_t t4 = -87;

	t4 = ((x17&(x18==x19))+x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int32_t x22 = 3;
	int16_t x23 = -1;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = ((x21&(x22==x23))+x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int64_t x27 = 118LL;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = ((x25&(x26==x27))+x28);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -7;
	static volatile int8_t x30 = -1;
	volatile int32_t x31 = INT32_MIN;
	volatile int64_t t7 = 492925736597LL;

	t7 = ((x29&(x30==x31))+x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 1550LLU;
	int16_t x34 = INT16_MAX;
	static int16_t x35 = INT16_MAX;
	int64_t x36 = 662311661LL;

	t8 = ((x33&(x34==x35))+x36);

	if (t8 != 662311661LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 1;
	uint16_t x38 = 17111U;
	int64_t x39 = -1LL;
	int64_t x40 = INT64_MAX;
	int64_t t9 = INT64_MAX;

	t9 = ((x37&(x38==x39))+x40);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint8_t x42 = 0U;
	uint8_t x43 = UINT8_MAX;
	int32_t t10 = 5145;

	t10 = ((x41&(x42==x43))+x44);

	if (t10 != -3574) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 29915139;
	uint32_t x46 = 24U;
	uint64_t x47 = 2LLU;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

	t11 = ((x45&(x46==x47))+x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	static int32_t x50 = INT32_MIN;
	volatile uint8_t x51 = 16U;
	volatile int32_t x52 = INT32_MAX;

	t12 = ((x49&(x50==x51))+x52);

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 659554138885780LL;
	uint32_t x55 = 723112U;
	static int32_t x56 = -1;

	t13 = ((x53&(x54==x55))+x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	uint64_t x59 = 28597691LLU;
	int64_t t14 = -22LL;

	t14 = ((x57&(x58==x59))+x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	uint8_t x63 = 4U;

	t15 = ((x61&(x62==x63))+x64);

	if (t15 != 3432) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	uint16_t x66 = 32678U;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = ((x65&(x66==x67))+x68);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -1;
	uint32_t x70 = 533668027U;
	volatile int64_t x71 = 7092269892033LL;
	uint64_t x72 = 681629699687411LLU;
	static volatile uint64_t t17 = 133186492128002584LLU;

	t17 = ((x69&(x70==x71))+x72);

	if (t17 != 681629699687411LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = -1;
	int8_t x76 = -1;
	uint32_t t18 = UINT32_MAX;

	t18 = ((x73&(x74==x75))+x76);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MAX;
	int8_t x78 = 1;
	static int64_t x79 = INT64_MAX;
	volatile int16_t x80 = -1;

	t19 = ((x77&(x78==x79))+x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -2LL;
	volatile uint8_t x82 = 23U;
	int32_t x83 = -192;
	int64_t x84 = 18194661792336988LL;
	int64_t t20 = -1027262108417458LL;

	t20 = ((x81&(x82==x83))+x84);

	if (t20 != 18194661792336988LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = -49;
	volatile int64_t x86 = -1LL;
	int32_t x87 = 751356;
	int32_t x88 = INT32_MIN;
	int32_t t21 = INT32_MIN;

	t21 = ((x85&(x86==x87))+x88);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = 10LLU;
	static int32_t x90 = INT32_MAX;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = ((x89&(x90==x91))+x92);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	uint8_t x94 = UINT8_MAX;
	volatile int16_t x95 = INT16_MAX;
	static int8_t x96 = INT8_MIN;

	t23 = ((x93&(x94==x95))+x96);

	if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -9;
	int32_t x99 = -40956456;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -7098403;

	t24 = ((x97&(x98==x99))+x100);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x103 = UINT64_MAX;
	int64_t x104 = 7913252727LL;
	uint64_t t25 = 6920LLU;

	t25 = ((x101&(x102==x103))+x104);

	if (t25 != 7913252727LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile int32_t x106 = INT32_MIN;
	static int8_t x107 = -59;
	static int32_t x108 = INT32_MIN;
	int64_t t26 = -35152218965012LL;

	t26 = ((x105&(x106==x107))+x108);

	if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 69LLU;
	volatile int8_t x110 = -1;
	static uint8_t x111 = 12U;
	volatile uint64_t t27 = 120432LLU;

	t27 = ((x109&(x110==x111))+x112);

	if (t27 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	uint8_t x114 = UINT8_MAX;
	static int16_t x116 = INT16_MIN;
	static int32_t t28 = 1548945;

	t28 = ((x113&(x114==x115))+x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 3121;
	static uint64_t x118 = 17LLU;
	volatile uint8_t x119 = 0U;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -1967328;

	t29 = ((x117&(x118==x119))+x120);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 378658LLU;
	uint8_t x122 = UINT8_MAX;
	int8_t x123 = 1;
	volatile int8_t x124 = INT8_MAX;
	uint64_t t30 = 8635LLU;

	t30 = ((x121&(x122==x123))+x124);

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = UINT16_MAX;
	static uint32_t x126 = UINT32_MAX;
	static int32_t x127 = INT32_MIN;
	int16_t x128 = 160;
	volatile int32_t t31 = 86198395;

	t31 = ((x125&(x126==x127))+x128);

	if (t31 != 160) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	static uint8_t x130 = 1U;
	volatile int16_t x131 = -22;
	volatile int16_t x132 = INT16_MIN;
	volatile uint32_t t32 = 3246U;

	t32 = ((x129&(x130==x131))+x132);

	if (t32 != 4294934528U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = -1LL;
	uint32_t x135 = UINT32_MAX;
	static int8_t x136 = 1;

	t33 = ((x133&(x134==x135))+x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 13001497830906LL;
	volatile uint32_t x139 = 1U;
	volatile int16_t x140 = INT16_MIN;

	t34 = ((x137&(x138==x139))+x140);

	if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = 420906775;
	uint16_t x143 = UINT16_MAX;
	volatile int32_t t35 = 991830;

	t35 = ((x141&(x142==x143))+x144);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 1U;
	int8_t x146 = INT8_MIN;
	int8_t x147 = 3;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = ((x145&(x146==x147))+x148);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = -1LL;
	static int64_t x151 = 178639LL;

	t37 = ((x149&(x150==x151))+x152);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 49LLU;
	volatile int16_t x154 = INT16_MIN;
	uint8_t x155 = UINT8_MAX;
	volatile int8_t x156 = -1;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x153&(x154==x155))+x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = UINT8_MAX;
	static uint16_t x158 = 2815U;
	int64_t x159 = -1LL;
	int16_t x160 = -1;
	int32_t t39 = -1;

	t39 = ((x157&(x158==x159))+x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 23171U;
	int8_t x162 = -17;
	volatile int16_t x163 = 4477;
	int8_t x164 = INT8_MIN;
	volatile uint32_t t40 = 70191251U;

	t40 = ((x161&(x162==x163))+x164);

	if (t40 != 4294967168U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MAX;
	int64_t x167 = INT64_MIN;
	int64_t x168 = 56180269880906LL;
	volatile int64_t t41 = 179779922LL;

	t41 = ((x165&(x166==x167))+x168);

	if (t41 != 56180269880906LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = 0;
	int8_t x170 = 1;
	volatile uint16_t x171 = 13U;
	static int32_t t42 = -53903093;

	t42 = ((x169&(x170==x171))+x172);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 4300926498153950LLU;
	static int8_t x174 = -60;
	uint32_t x175 = 2540069U;
	int16_t x176 = INT16_MIN;
	volatile uint64_t t43 = 110270682LLU;

	t43 = ((x173&(x174==x175))+x176);

	if (t43 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int64_t x178 = INT64_MAX;
	static volatile uint64_t x180 = 66178707982LLU;
	static volatile uint64_t t44 = 687LLU;

	t44 = ((x177&(x178==x179))+x180);

	if (t44 != 66178707982LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 12U;
	static uint16_t x182 = 6345U;
	static int16_t x183 = 4814;
	volatile int64_t t45 = 772LL;

	t45 = ((x181&(x182==x183))+x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	uint64_t x187 = 8957276167LLU;
	volatile int16_t x188 = INT16_MIN;

	t46 = ((x185&(x186==x187))+x188);

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	uint16_t x190 = 1U;
	uint64_t x191 = UINT64_MAX;
	int8_t x192 = INT8_MIN;

	t47 = ((x189&(x190==x191))+x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 20U;
	static int8_t x194 = 14;
	static uint16_t x195 = UINT16_MAX;
	int16_t x196 = INT16_MIN;
	static volatile int32_t t48 = 120990317;

	t48 = ((x193&(x194==x195))+x196);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 120U;
	int8_t x199 = 2;
	uint64_t x200 = 676LLU;
	uint64_t t49 = 1713013530LLU;

	t49 = ((x197&(x198==x199))+x200);

	if (t49 != 676LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	volatile int64_t x202 = 6721647930LL;
	int8_t x204 = INT8_MAX;
	int32_t t50 = -3984;

	t50 = ((x201&(x202==x203))+x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	uint16_t x206 = 1100U;
	static int64_t x207 = INT64_MIN;
	static volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x205&(x206==x207))+x208);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 3;
	int8_t x210 = -1;
	static volatile int8_t x211 = -2;
	int16_t x212 = 0;
	int32_t t52 = -5572;

	t52 = ((x209&(x210==x211))+x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x215 = 1U;
	volatile int16_t x216 = INT16_MIN;
	volatile uint32_t t53 = 1457U;

	t53 = ((x213&(x214==x215))+x216);

	if (t53 != 4294934528U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x218 = -1;
	static uint64_t x219 = UINT64_MAX;
	int8_t x220 = -1;
	int32_t t54 = 1033649;

	t54 = ((x217&(x218==x219))+x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	int8_t x222 = INT8_MIN;
	static int32_t x223 = INT32_MAX;
	volatile uint8_t x224 = 93U;
	volatile int32_t t55 = 1102;

	t55 = ((x221&(x222==x223))+x224);

	if (t55 != 93) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 1U;
	int32_t x226 = INT32_MIN;
	uint8_t x227 = UINT8_MAX;
	int32_t t56 = 58;

	t56 = ((x225&(x226==x227))+x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = -48994LL;
	int8_t x231 = -1;
	uint16_t x232 = 2379U;
	static int64_t t57 = 917LL;

	t57 = ((x229&(x230==x231))+x232);

	if (t57 != 2379LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	volatile int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	volatile uint64_t t58 = 0LLU;

	t58 = ((x233&(x234==x235))+x236);

	if (t58 != 1762LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 430500LL;
	static volatile int64_t x238 = -486046416002LL;
	uint16_t x239 = 2427U;
	uint8_t x240 = 78U;
	int64_t t59 = 8889239246482LL;

	t59 = ((x237&(x238==x239))+x240);

	if (t59 != 78LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x241 = INT32_MIN;
	volatile int64_t x242 = 0LL;
	volatile int64_t x243 = INT64_MAX;
	int8_t x244 = 3;

	t60 = ((x241&(x242==x243))+x244);

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = UINT32_MAX;
	int64_t x247 = INT64_MIN;
	int64_t x248 = INT64_MIN;

	t61 = ((x245&(x246==x247))+x248);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	volatile int16_t x250 = INT16_MIN;
	static int8_t x251 = INT8_MIN;
	static uint64_t x252 = 133211664731600LLU;

	t62 = ((x249&(x250==x251))+x252);

	if (t62 != 133211664731600LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	int32_t x255 = 940;
	static volatile int32_t x256 = INT32_MAX;
	int64_t t63 = 848338147024LL;

	t63 = ((x253&(x254==x255))+x256);

	if (t63 != 2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 1631937LLU;
	int32_t x258 = -1;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	volatile uint64_t t64 = 261734LLU;

	t64 = ((x257&(x258==x259))+x260);

	if (t64 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -2042838;
	volatile uint64_t x262 = 34246713505104997LLU;
	int16_t x263 = -73;
	volatile uint16_t x264 = 2740U;
	volatile int32_t t65 = -3;

	t65 = ((x261&(x262==x263))+x264);

	if (t65 != 2740) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	int16_t x266 = 0;
	volatile uint16_t x267 = 522U;
	int16_t x268 = INT16_MAX;
	static int32_t t66 = 42064268;

	t66 = ((x265&(x266==x267))+x268);

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -29133714652LL;
	int64_t x270 = -36LL;
	int8_t x271 = 30;
	volatile int64_t t67 = INT64_MAX;

	t67 = ((x269&(x270==x271))+x272);

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = 96U;
	int32_t x275 = INT32_MIN;
	volatile int32_t x276 = INT32_MAX;
	volatile int32_t t68 = INT32_MAX;

	t68 = ((x273&(x274==x275))+x276);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 0U;
	volatile int16_t x278 = 0;
	static uint64_t x280 = 1247197548392LLU;
	volatile uint64_t t69 = 5LLU;

	t69 = ((x277&(x278==x279))+x280);

	if (t69 != 1247197548392LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x282 = INT8_MAX;
	int8_t x283 = INT8_MIN;
	uint64_t t70 = 2LLU;

	t70 = ((x281&(x282==x283))+x284);

	if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	uint8_t x286 = UINT8_MAX;
	static uint64_t x287 = 22732849526277LLU;
	static uint64_t x288 = UINT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x285&(x286==x287))+x288);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int16_t x290 = INT16_MIN;
	int8_t x291 = 9;
	int16_t x292 = INT16_MIN;

	t72 = ((x289&(x290==x291))+x292);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MAX;
	int16_t x294 = INT16_MIN;
	uint32_t x295 = 746U;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t73 = 8057;

	t73 = ((x293&(x294==x295))+x296);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int32_t x298 = INT32_MAX;
	int8_t x299 = -55;
	int8_t x300 = INT8_MAX;

	t74 = ((x297&(x298==x299))+x300);

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = INT32_MAX;
	int64_t x303 = -1LL;
	static int64_t x304 = -1LL;
	static volatile int64_t t75 = 1240697152648415LL;

	t75 = ((x301&(x302==x303))+x304);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x306 = 50U;
	int64_t x307 = 37947557LL;
	uint32_t x308 = 214869U;
	volatile uint32_t t76 = 22U;

	t76 = ((x305&(x306==x307))+x308);

	if (t76 != 214869U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x311 = INT32_MIN;

	t77 = ((x309&(x310==x311))+x312);

	if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 19570LLU;
	int16_t x314 = INT16_MIN;
	volatile uint64_t t78 = 128082996861104288LLU;

	t78 = ((x313&(x314==x315))+x316);

	if (t78 != 255LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	static uint16_t x318 = UINT16_MAX;
	static int64_t x319 = INT64_MAX;
	uint8_t x320 = 104U;
	static int32_t t79 = 243;

	t79 = ((x317&(x318==x319))+x320);

	if (t79 != 104) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	uint64_t x322 = UINT64_MAX;
	int8_t x323 = -1;
	static uint32_t x324 = 4484U;
	uint32_t t80 = 19696367U;

	t80 = ((x321&(x322==x323))+x324);

	if (t80 != 4484U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	int8_t x326 = INT8_MAX;
	int8_t x328 = 32;

	t81 = ((x325&(x326==x327))+x328);

	if (t81 != 32LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	uint64_t x330 = UINT64_MAX;
	int16_t x331 = INT16_MIN;
	int8_t x332 = -6;
	volatile int32_t t82 = -683786954;

	t82 = ((x329&(x330==x331))+x332);

	if (t82 != -6) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 112509410630LLU;
	uint64_t x334 = 145LLU;
	uint8_t x335 = 2U;
	static volatile uint64_t t83 = 1598013364133486LLU;

	t83 = ((x333&(x334==x335))+x336);

	if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x338 = INT8_MIN;
	static int8_t x339 = -8;
	uint64_t x340 = 41072981LLU;

	t84 = ((x337&(x338==x339))+x340);

	if (t84 != 41072981LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 97U;
	int8_t x342 = 12;
	int64_t x343 = INT64_MIN;
	volatile int64_t x344 = -1LL;
	volatile int64_t t85 = 1492219LL;

	t85 = ((x341&(x342==x343))+x344);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	int16_t x346 = 223;
	volatile int32_t x347 = INT32_MIN;
	int16_t x348 = INT16_MIN;

	t86 = ((x345&(x346==x347))+x348);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	int32_t x350 = -1;
	int8_t x351 = -1;
	uint8_t x352 = 15U;

	t87 = ((x349&(x350==x351))+x352);

	if (t87 != 16) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	static int8_t x354 = INT8_MIN;
	static int32_t x355 = 42589844;
	int8_t x356 = -1;

	t88 = ((x353&(x354==x355))+x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 340U;
	volatile uint8_t x358 = 6U;
	uint64_t x359 = 4458863123878399267LLU;
	int8_t x360 = INT8_MIN;
	int32_t t89 = 1623;

	t89 = ((x357&(x358==x359))+x360);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -12;
	uint8_t x363 = UINT8_MAX;
	uint16_t x364 = UINT16_MAX;

	t90 = ((x361&(x362==x363))+x364);

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 2439;
	int64_t x366 = INT64_MIN;
	static uint16_t x367 = 1U;
	int16_t x368 = INT16_MAX;
	int32_t t91 = -26;

	t91 = ((x365&(x366==x367))+x368);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x370 = 1;
	int16_t x371 = INT16_MIN;

	t92 = ((x369&(x370==x371))+x372);

	if (t92 != 4294967168U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = 85182162LLU;
	int64_t x374 = INT64_MIN;
	volatile uint16_t x375 = 6732U;
	uint32_t x376 = 72U;
	volatile uint64_t t93 = 290159957153652LLU;

	t93 = ((x373&(x374==x375))+x376);

	if (t93 != 72LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MIN;
	int8_t x379 = 0;
	int32_t t94 = 1;

	t94 = ((x377&(x378==x379))+x380);

	if (t94 != -31) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -170;
	int64_t x383 = INT64_MIN;
	volatile int32_t t95 = -3105995;

	t95 = ((x381&(x382==x383))+x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 2U;
	uint16_t x386 = 2U;
	int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MAX;

	t96 = ((x385&(x386==x387))+x388);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	int8_t x390 = -2;
	int8_t x391 = 0;
	volatile int32_t x392 = -1;
	int32_t t97 = -50;

	t97 = ((x389&(x390==x391))+x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = 21;
	uint8_t x395 = UINT8_MAX;
	int32_t x396 = INT32_MAX;
	int32_t t98 = INT32_MAX;

	t98 = ((x393&(x394==x395))+x396);

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = INT64_MIN;
	volatile int64_t x398 = INT64_MIN;
	static int16_t x399 = -1;
	int16_t x400 = -342;
	static int64_t t99 = 193845LL;

	t99 = ((x397&(x398==x399))+x400);

	if (t99 != -342LL) { NG(); } else { ; }
	
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

