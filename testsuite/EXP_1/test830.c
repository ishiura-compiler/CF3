#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint64_t x12 = UINT64_MAX;
volatile int64_t t4 = 1745264568848490581LL;
int16_t x21 = INT16_MAX;
int64_t x23 = INT64_MIN;
int64_t t5 = -43382785316719768LL;
int64_t t6 = -105841627556LL;
volatile int32_t x35 = INT32_MIN;
volatile uint64_t x61 = 1LLU;
int16_t x62 = -1;
volatile uint16_t x72 = 1374U;
static volatile int32_t x76 = INT32_MIN;
static int16_t x77 = INT16_MIN;
int8_t x78 = 1;
static int8_t x81 = -26;
static int8_t x82 = -1;
static int32_t x87 = INT32_MIN;
int8_t x97 = INT8_MIN;
uint8_t x102 = 33U;
int32_t t25 = -14427;
static int16_t x105 = -20;
uint8_t x107 = 125U;
volatile int16_t x108 = INT16_MAX;
static uint32_t x112 = UINT32_MAX;
static int16_t x116 = -1;
volatile int32_t x121 = 2947677;
volatile int64_t t30 = 61429LL;
int32_t t31 = 0;
int8_t x134 = INT8_MIN;
int8_t x137 = INT8_MIN;
int8_t x138 = INT8_MAX;
int64_t t35 = -42927428LL;
static volatile int64_t t39 = 365648LL;
uint16_t x161 = 3093U;
int16_t x169 = 0;
static uint32_t x181 = UINT32_MAX;
uint32_t t46 = 1U;
static int64_t x194 = INT64_MIN;
int8_t x207 = INT8_MAX;
static int32_t t49 = 42;
int64_t t50 = 2190712790548LL;
int32_t x223 = INT32_MIN;
int8_t x224 = INT8_MAX;
static int8_t x240 = 1;
static int64_t x241 = -1LL;
static volatile int8_t x243 = -9;
volatile uint16_t x245 = 1802U;
int64_t t59 = INT64_MIN;
volatile uint32_t x252 = 5070U;
static int64_t t60 = -277199866348039LL;
int16_t x259 = INT16_MAX;
int64_t x264 = 6LL;
int64_t t64 = 1074383LL;
uint32_t x273 = 1U;
int32_t x276 = INT32_MIN;
static uint32_t t66 = 57U;
volatile int8_t x281 = -1;
volatile int16_t x292 = 5492;
int32_t x297 = INT32_MIN;
int8_t x299 = INT8_MAX;
int32_t x302 = -1;
volatile uint32_t x308 = UINT32_MAX;
uint32_t t73 = 1285410627U;
static int16_t x312 = -1;
int32_t x314 = INT32_MIN;
static int16_t x315 = 3;
int64_t x320 = -2143086661917LL;
static volatile int16_t x323 = 80;
int64_t x336 = -1LL;
int64_t t80 = 421082352LL;
static int16_t x337 = INT16_MIN;
int16_t x339 = -3962;
int32_t t81 = 43;
int8_t x342 = -1;
int8_t x344 = -1;
volatile int32_t t82 = -2520;
int32_t x347 = INT32_MIN;
int32_t t83 = -223774889;
int16_t x352 = -1;
int16_t x359 = INT16_MIN;
int16_t x360 = INT16_MIN;
volatile int32_t t86 = -194356;
int8_t x361 = INT8_MIN;
volatile int8_t x362 = -19;
volatile uint16_t x367 = 21286U;
int64_t x376 = INT64_MIN;
static int32_t x384 = INT32_MIN;
int64_t t92 = -90LL;
int32_t x385 = 1825882;
static int32_t x386 = INT32_MAX;
int64_t x387 = INT64_MIN;
int64_t t93 = INT64_MIN;
uint64_t x396 = 1569282920172LLU;
static volatile uint64_t t98 = 372LLU;


void f0(void) {
	static int64_t x1 = 953732LL;
	int32_t x2 = -1;
	volatile int64_t x4 = 848793136LL;
	int64_t t0 = -9166562LL;

	t0 = (((x1%x2)|x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	uint8_t x6 = UINT8_MAX;
	uint16_t x7 = 9U;
	volatile int64_t x8 = INT64_MAX;
	volatile int64_t t1 = 269040320159315LL;

	t1 = (((x5%x6)|x7)&x8);

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 874933861;
	int8_t x10 = -1;
	static int32_t x11 = -2015552;
	static volatile uint64_t t2 = 16632152928LLU;

	t2 = (((x9%x10)|x11)&x12);

	if (t2 != 18446744073707536064LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 7U;
	uint16_t x14 = 431U;
	int32_t x15 = -4094;
	uint32_t x16 = 7U;
	volatile uint32_t t3 = 796406U;

	t3 = (((x13%x14)|x15)&x16);

	if (t3 != 7U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	uint32_t x18 = UINT32_MAX;
	uint32_t x19 = UINT32_MAX;
	int16_t x20 = -1;

	t4 = (((x17%x18)|x19)&x20);

	if (t4 != 4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = 610686LL;
	volatile uint32_t x24 = UINT32_MAX;

	t5 = (((x21%x22)|x23)&x24);

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	volatile int64_t x26 = -1LL;
	int32_t x27 = INT32_MIN;
	volatile int16_t x28 = INT16_MIN;

	t6 = (((x25%x26)|x27)&x28);

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	volatile uint32_t x31 = UINT32_MAX;
	int8_t x32 = INT8_MAX;
	volatile uint32_t t7 = 6U;

	t7 = (((x29%x30)|x31)&x32);

	if (t7 != 127U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 12;
	static volatile uint8_t x34 = UINT8_MAX;
	uint16_t x36 = UINT16_MAX;
	static int32_t t8 = 74332789;

	t8 = (((x33%x34)|x35)&x36);

	if (t8 != 12) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile int64_t x38 = 441280952538371692LL;
	int32_t x39 = 24;
	volatile uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 4097402273863LLU;

	t9 = (((x37%x38)|x39)&x40);

	if (t9 != 18446744071562067992LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int32_t x42 = -31124;
	uint8_t x43 = UINT8_MAX;
	int16_t x44 = 1;
	volatile int32_t t10 = -2774302;

	t10 = (((x41%x42)|x43)&x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -58934;
	volatile int32_t x46 = -400572737;
	static uint32_t x47 = UINT32_MAX;
	uint64_t x48 = 506883567797729LLU;
	static uint64_t t11 = 992311143LLU;

	t11 = (((x45%x46)|x47)&x48);

	if (t11 != 117458401LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -11;
	volatile uint16_t x50 = UINT16_MAX;
	static volatile uint8_t x51 = 1U;
	int16_t x52 = INT16_MAX;
	static int32_t t12 = -7142417;

	t12 = (((x49%x50)|x51)&x52);

	if (t12 != 32757) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -36;
	uint16_t x54 = UINT16_MAX;
	uint64_t x55 = 31378224931253968LLU;
	int8_t x56 = INT8_MIN;
	uint64_t t13 = 1080533685717086474LLU;

	t13 = (((x53%x54)|x55)&x56);

	if (t13 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 28051653872883799LLU;
	volatile int16_t x58 = 613;
	int64_t x59 = -1LL;
	uint8_t x60 = 50U;
	volatile uint64_t t14 = 26636752729LLU;

	t14 = (((x57%x58)|x59)&x60);

	if (t14 != 50LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = -1;
	static volatile uint64_t t15 = 9921791455286969LLU;

	t15 = (((x61%x62)|x63)&x64);

	if (t15 != 4294967295LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 569466U;
	uint16_t x66 = 13U;
	volatile uint16_t x67 = UINT16_MAX;
	int32_t x68 = INT32_MIN;
	uint32_t t16 = 0U;

	t16 = (((x65%x66)|x67)&x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 15U;
	volatile uint64_t x70 = 1469974107246LLU;
	uint16_t x71 = 105U;
	uint64_t t17 = 780783LLU;

	t17 = (((x69%x70)|x71)&x72);

	if (t17 != 78LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 2901135324980507212LL;
	int16_t x74 = INT16_MIN;
	int32_t x75 = -1;
	int64_t t18 = 6LL;

	t18 = (((x73%x74)|x75)&x76);

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x79 = INT32_MIN;
	static volatile int8_t x80 = -1;
	static int32_t t19 = INT32_MIN;

	t19 = (((x77%x78)|x79)&x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x83 = INT64_MAX;
	int64_t x84 = -1LL;
	volatile int64_t t20 = INT64_MAX;

	t20 = (((x81%x82)|x83)&x84);

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 34;
	volatile int8_t x86 = -7;
	int32_t x88 = -1;
	int32_t t21 = -75;

	t21 = (((x85%x86)|x87)&x88);

	if (t21 != -2147483642) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 276673729232843765LL;
	int16_t x90 = -6;
	uint16_t x91 = 5461U;
	static int16_t x92 = 36;
	volatile int64_t t22 = -18289LL;

	t22 = (((x89%x90)|x91)&x92);

	if (t22 != 4LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = 649U;
	int8_t x96 = -1;
	uint32_t t23 = 4077149U;

	t23 = (((x93%x94)|x95)&x96);

	if (t23 != 767U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = 7222;
	uint8_t x99 = UINT8_MAX;
	static volatile uint8_t x100 = 2U;
	volatile int32_t t24 = -328;

	t24 = (((x97%x98)|x99)&x100);

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int16_t x103 = -24;
	static int8_t x104 = INT8_MIN;

	t25 = (((x101%x102)|x103)&x104);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = -1LL;
	static volatile int64_t t26 = -34715LL;

	t26 = (((x105%x106)|x107)&x108);

	if (t26 != 125LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -68024;
	volatile int8_t x110 = INT8_MIN;
	volatile uint16_t x111 = 413U;
	uint32_t t27 = 112909871U;

	t27 = (((x109%x110)|x111)&x112);

	if (t27 != 4294967261U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 47;
	uint16_t x114 = 1U;
	int8_t x115 = 0;
	int32_t t28 = 0;

	t28 = (((x113%x114)|x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 0;
	int8_t x118 = 1;
	static volatile int32_t x119 = INT32_MAX;
	static volatile int16_t x120 = -1;
	volatile int32_t t29 = INT32_MAX;

	t29 = (((x117%x118)|x119)&x120);

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x122 = 1U;
	int64_t x123 = 15303312957613563LL;
	static int16_t x124 = INT16_MIN;

	t30 = (((x121%x122)|x123)&x124);

	if (t30 != 15303312957603840LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 0;
	static int32_t x126 = INT32_MIN;
	volatile int8_t x127 = INT8_MAX;
	int8_t x128 = INT8_MIN;

	t31 = (((x125%x126)|x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	static int8_t x130 = INT8_MIN;
	uint8_t x131 = 1U;
	volatile int16_t x132 = 2545;
	static uint32_t t32 = 202U;

	t32 = (((x129%x130)|x131)&x132);

	if (t32 != 113U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MIN;
	int64_t x135 = -1LL;
	int16_t x136 = 0;
	volatile int64_t t33 = 60845131858LL;

	t33 = (((x133%x134)|x135)&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x139 = INT32_MIN;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = 2417538;

	t34 = (((x137%x138)|x139)&x140);

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -167626;
	int8_t x142 = INT8_MAX;
	int64_t x143 = INT64_MAX;
	int32_t x144 = 26338819;

	t35 = (((x141%x142)|x143)&x144);

	if (t35 != 26338819LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -6;
	volatile int8_t x146 = INT8_MAX;
	static int8_t x147 = INT8_MIN;
	volatile uint64_t x148 = 158454155252LLU;
	uint64_t t36 = 749718543692LLU;

	t36 = (((x145%x146)|x147)&x148);

	if (t36 != 158454155248LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int64_t x150 = -1LL;
	int16_t x151 = -2;
	int32_t x152 = INT32_MIN;
	int64_t t37 = -1179LL;

	t37 = (((x149%x150)|x151)&x152);

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = UINT16_MAX;
	volatile int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MAX;
	volatile int16_t x156 = 228;
	volatile int64_t t38 = 99744419892LL;

	t38 = (((x153%x154)|x155)&x156);

	if (t38 != 228LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -2154629478261136314LL;
	uint8_t x158 = 119U;
	static uint8_t x159 = UINT8_MAX;
	uint16_t x160 = 21U;

	t39 = (((x157%x158)|x159)&x160);

	if (t39 != 21LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x162 = INT64_MIN;
	static uint16_t x163 = UINT16_MAX;
	int16_t x164 = -21;
	int64_t t40 = 96071962LL;

	t40 = (((x161%x162)|x163)&x164);

	if (t40 != 65515LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 37U;
	int8_t x166 = -11;
	int32_t x167 = INT32_MIN;
	static uint32_t x168 = UINT32_MAX;
	uint32_t t41 = 3881817U;

	t41 = (((x165%x166)|x167)&x168);

	if (t41 != 2147483652U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x170 = UINT16_MAX;
	static volatile uint64_t x171 = 10563570428195177LLU;
	uint64_t x172 = UINT64_MAX;
	uint64_t t42 = 1LLU;

	t42 = (((x169%x170)|x171)&x172);

	if (t42 != 10563570428195177LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	int16_t x174 = 14;
	static uint64_t x175 = 34LLU;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t43 = 23450LLU;

	t43 = (((x173%x174)|x175)&x176);

	if (t43 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 40;
	uint16_t x178 = 16U;
	int64_t x179 = -1LL;
	int32_t x180 = -1012257325;
	volatile int64_t t44 = 3804856LL;

	t44 = (((x177%x178)|x179)&x180);

	if (t44 != -1012257325LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	volatile int16_t x183 = INT16_MIN;
	uint16_t x184 = 117U;
	volatile uint32_t t45 = 5632048U;

	t45 = (((x181%x182)|x183)&x184);

	if (t45 != 117U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x189 = 106U;
	int16_t x190 = 6;
	int8_t x191 = -1;
	uint32_t x192 = 300258U;

	t46 = (((x189%x190)|x191)&x192);

	if (t46 != 300258U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = UINT8_MAX;
	volatile uint16_t x195 = 790U;
	static uint32_t x196 = 333U;
	volatile int64_t t47 = -94536940770LL;

	t47 = (((x193%x194)|x195)&x196);

	if (t47 != 333LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -297605;
	volatile uint64_t x198 = 292934LLU;
	uint64_t x199 = UINT64_MAX;
	uint8_t x200 = UINT8_MAX;
	static volatile uint64_t t48 = 208657LLU;

	t48 = (((x197%x198)|x199)&x200);

	if (t48 != 255LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x205 = 1U;
	int16_t x206 = 3;
	int32_t x208 = INT32_MIN;

	t49 = (((x205%x206)|x207)&x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = 43226LL;
	int32_t x210 = INT32_MIN;
	uint32_t x211 = UINT32_MAX;
	int16_t x212 = INT16_MIN;

	t50 = (((x209%x210)|x211)&x212);

	if (t50 != 4294934528LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x213 = UINT32_MAX;
	int8_t x214 = INT8_MIN;
	uint16_t x215 = 0U;
	int8_t x216 = 0;
	static volatile uint32_t t51 = 839U;

	t51 = (((x213%x214)|x215)&x216);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x217 = 3;
	uint8_t x218 = 33U;
	static int32_t x219 = INT32_MIN;
	static uint32_t x220 = 226U;
	volatile uint32_t t52 = 8002U;

	t52 = (((x217%x218)|x219)&x220);

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x221 = INT64_MIN;
	static int32_t x222 = INT32_MIN;
	volatile int64_t t53 = 33LL;

	t53 = (((x221%x222)|x223)&x224);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = 5552;
	int16_t x226 = INT16_MAX;
	uint32_t x227 = UINT32_MAX;
	uint64_t x228 = UINT64_MAX;
	static volatile uint64_t t54 = 17571LLU;

	t54 = (((x225%x226)|x227)&x228);

	if (t54 != 4294967295LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = 896780473LLU;
	int8_t x230 = -1;
	static int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MAX;
	volatile uint64_t t55 = 1LLU;

	t55 = (((x229%x230)|x231)&x232);

	if (t55 != 18617LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = 11;
	static volatile int64_t x234 = -1047LL;
	uint16_t x235 = 6U;
	int8_t x236 = INT8_MAX;
	int64_t t56 = 373380121931893LL;

	t56 = (((x233%x234)|x235)&x236);

	if (t56 != 15LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 52U;
	static int16_t x238 = 10;
	static volatile uint8_t x239 = UINT8_MAX;
	static int32_t t57 = 1;

	t57 = (((x237%x238)|x239)&x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x242 = INT16_MIN;
	int64_t x244 = -93600LL;
	int64_t t58 = -16242980155589LL;

	t58 = (((x241%x242)|x243)&x244);

	if (t58 != -93600LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x246 = INT32_MIN;
	int32_t x247 = -910566;
	int64_t x248 = INT64_MIN;

	t59 = (((x245%x246)|x247)&x248);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x249 = INT64_MIN;
	volatile int64_t x250 = INT64_MAX;
	uint8_t x251 = 122U;

	t60 = (((x249%x250)|x251)&x252);

	if (t60 != 5070LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MAX;
	static uint32_t x254 = UINT32_MAX;
	static int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	volatile uint32_t t61 = 0U;

	t61 = (((x253%x254)|x255)&x256);

	if (t61 != 2147483648U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	int64_t x258 = 419120LL;
	int64_t x260 = -60613566LL;
	static int64_t t62 = 136303434619545LL;

	t62 = (((x257%x258)|x259)&x260);

	if (t62 != -60613566LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = INT16_MAX;
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = -1;
	volatile int64_t t63 = -23729LL;

	t63 = (((x261%x262)|x263)&x264);

	if (t63 != 6LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = -144591835862851250LL;
	int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MIN;
	int16_t x268 = -1;

	t64 = (((x265%x266)|x267)&x268);

	if (t64 != -50LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MIN;
	static uint32_t x270 = 53448695U;
	volatile uint8_t x271 = 40U;
	volatile int64_t x272 = INT64_MAX;
	int64_t t65 = -12645LL;

	t65 = (((x269%x270)|x271)&x272);

	if (t65 != 19071608LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = -13576;
	uint16_t x275 = UINT16_MAX;

	t66 = (((x273%x274)|x275)&x276);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = UINT8_MAX;
	volatile uint32_t x278 = 588136100U;
	static int16_t x279 = INT16_MAX;
	uint32_t x280 = 877688U;
	uint32_t t67 = 3U;

	t67 = (((x277%x278)|x279)&x280);

	if (t67 != 25720U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x282 = INT32_MAX;
	uint64_t x283 = UINT64_MAX;
	static int32_t x284 = -1;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (((x281%x282)|x283)&x284);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = UINT16_MAX;
	int64_t x286 = INT64_MAX;
	int32_t x287 = -2;
	static int64_t x288 = -1LL;
	volatile int64_t t69 = -4306LL;

	t69 = (((x285%x286)|x287)&x288);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 0U;
	volatile int16_t x290 = -1;
	int8_t x291 = INT8_MIN;
	int32_t t70 = 30;

	t70 = (((x289%x290)|x291)&x292);

	if (t70 != 5376) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x298 = UINT32_MAX;
	int8_t x300 = -1;
	uint32_t t71 = 1067844U;

	t71 = (((x297%x298)|x299)&x300);

	if (t71 != 2147483775U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = 6040448;
	int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MAX;
	volatile int32_t t72 = 35;

	t72 = (((x301%x302)|x303)&x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x305 = INT8_MAX;
	static uint32_t x306 = UINT32_MAX;
	int32_t x307 = INT32_MIN;

	t73 = (((x305%x306)|x307)&x308);

	if (t73 != 2147483775U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x309 = INT16_MIN;
	int64_t x310 = INT64_MAX;
	static int8_t x311 = INT8_MIN;
	static int64_t t74 = -7230601LL;

	t74 = (((x309%x310)|x311)&x312);

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x313 = 984342U;
	uint8_t x316 = UINT8_MAX;
	volatile uint32_t t75 = 865886U;

	t75 = (((x313%x314)|x315)&x316);

	if (t75 != 23U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = INT16_MIN;
	volatile uint32_t x318 = 45168U;
	int32_t x319 = INT32_MAX;
	int64_t t76 = -106133LL;

	t76 = (((x317%x318)|x319)&x320);

	if (t76 != 102018787LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t77 = -694029;

	t77 = (((x321%x322)|x323)&x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x325 = 104574;
	int32_t x326 = -7;
	int8_t x327 = INT8_MIN;
	static int32_t x328 = -862102189;
	volatile int32_t t78 = -3;

	t78 = (((x325%x326)|x327)&x328);

	if (t78 != -862102271) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x330 = 16481613U;
	int64_t x331 = -68525291671573LL;
	int32_t x332 = INT32_MIN;
	volatile int64_t t79 = 1277150880401LL;

	t79 = (((x329%x330)|x331)&x332);

	if (t79 != -68526203207680LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x333 = UINT32_MAX;
	uint8_t x334 = 11U;
	volatile int32_t x335 = INT32_MAX;

	t80 = (((x333%x334)|x335)&x336);

	if (t80 != 2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x338 = UINT8_MAX;
	static int8_t x340 = INT8_MIN;

	t81 = (((x337%x338)|x339)&x340);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MAX;
	static int8_t x343 = INT8_MAX;

	t82 = (((x341%x342)|x343)&x344);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = 12U;
	int16_t x346 = -1;
	uint16_t x348 = 28U;

	t83 = (((x345%x346)|x347)&x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x349 = -70;
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = INT16_MAX;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = (((x349%x350)|x351)&x352);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	volatile int16_t x354 = INT16_MIN;
	static volatile int64_t x355 = -1614920797211805LL;
	uint32_t x356 = 68419287U;
	static volatile int64_t t85 = 14196425LL;

	t85 = (((x353%x354)|x355)&x356);

	if (t85 != 68419287LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = INT32_MAX;
	int16_t x358 = INT16_MIN;

	t86 = (((x357%x358)|x359)&x360);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x363 = INT64_MAX;
	uint16_t x364 = UINT16_MAX;
	static int64_t t87 = -53814510812674917LL;

	t87 = (((x361%x362)|x363)&x364);

	if (t87 != 65535LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x365 = INT32_MIN;
	static volatile uint64_t x366 = UINT64_MAX;
	volatile int8_t x368 = INT8_MAX;
	uint64_t t88 = 1720291417162581LLU;

	t88 = (((x365%x366)|x367)&x368);

	if (t88 != 38LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x370 = -4;
	int64_t x371 = INT64_MIN;
	int32_t x372 = -1;
	static volatile uint64_t t89 = 6506LLU;

	t89 = (((x369%x370)|x371)&x372);

	if (t89 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = 2434;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = 3206U;
	int64_t t90 = -244453LL;

	t90 = (((x373%x374)|x375)&x376);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x377 = INT64_MIN;
	volatile int8_t x378 = -9;
	volatile int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	int64_t t91 = 21LL;

	t91 = (((x377%x378)|x379)&x380);

	if (t91 != -8LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -1;
	volatile int8_t x382 = 5;
	int64_t x383 = -247511603507LL;

	t92 = (((x381%x382)|x383)&x384);

	if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x388 = INT32_MIN;

	t93 = (((x385%x386)|x387)&x388);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = UINT16_MAX;
	static int8_t x390 = INT8_MIN;
	static uint8_t x391 = 11U;
	uint8_t x392 = 21U;
	int32_t t94 = 491971247;

	t94 = (((x389%x390)|x391)&x392);

	if (t94 != 21) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = -1;
	int64_t x394 = -1307829903025LL;
	uint64_t x395 = 5585229186109LLU;
	uint64_t t95 = 44883083LLU;

	t95 = (((x393%x394)|x395)&x396);

	if (t95 != 1569282920172LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x397 = INT32_MIN;
	volatile int64_t x398 = -1LL;
	int32_t x399 = INT32_MAX;
	int8_t x400 = -31;
	int64_t t96 = 62308006LL;

	t96 = (((x397%x398)|x399)&x400);

	if (t96 != 2147483617LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = INT32_MAX;
	int8_t x402 = INT8_MIN;
	uint32_t x403 = 60U;
	uint64_t x404 = UINT64_MAX;
	static volatile uint64_t t97 = 148525365807LLU;

	t97 = (((x401%x402)|x403)&x404);

	if (t97 != 127LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 2007550LLU;
	int32_t x406 = INT32_MIN;
	int64_t x407 = -1LL;
	static volatile int8_t x408 = INT8_MIN;

	t98 = (((x405%x406)|x407)&x408);

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 897035060142784LLU;
	int16_t x410 = INT16_MIN;
	static uint64_t x411 = UINT64_MAX;
	volatile uint64_t x412 = 8LLU;
	uint64_t t99 = 16344LLU;

	t99 = (((x409%x410)|x411)&x412);

	if (t99 != 8LLU) { NG(); } else { ; }
	
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

