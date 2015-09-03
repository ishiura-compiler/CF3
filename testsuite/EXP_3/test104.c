#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
int32_t t0 = -31;
int32_t x5 = -1;
uint8_t x15 = UINT8_MAX;
int16_t x16 = -1;
int64_t x17 = -5944156LL;
volatile uint8_t x19 = 1U;
int8_t x23 = -1;
static int32_t t5 = -132226;
static int64_t x25 = INT64_MAX;
static volatile uint64_t x31 = 7607LLU;
uint8_t x38 = UINT8_MAX;
volatile uint16_t x57 = 338U;
int64_t x62 = INT64_MIN;
int8_t x65 = -1;
uint16_t x67 = UINT16_MAX;
volatile int32_t t16 = -545;
static volatile int64_t x74 = 24220227599LL;
int16_t x77 = 556;
int64_t x78 = INT64_MIN;
volatile int64_t x80 = -1LL;
uint32_t x81 = 14944950U;
int8_t x83 = INT8_MIN;
volatile int32_t t19 = 220378;
uint16_t x87 = 444U;
volatile int32_t t20 = -882;
static int64_t x98 = INT64_MAX;
static int16_t x101 = -1;
int32_t x105 = INT32_MIN;
uint16_t x114 = 688U;
uint32_t x115 = UINT32_MAX;
int16_t x120 = -1;
int64_t x123 = INT64_MIN;
static int8_t x127 = 24;
int32_t x128 = INT32_MIN;
int32_t t29 = 196910279;
int64_t x137 = INT64_MIN;
uint32_t x142 = 3744871U;
volatile int64_t t33 = 1LL;
volatile int32_t t34 = 13;
uint32_t t35 = 132181736U;
static uint16_t x157 = 223U;
int64_t x163 = INT64_MIN;
static int64_t t38 = -267521519215514461LL;
int32_t x167 = 354;
static int32_t t40 = -221;
int64_t x173 = INT64_MIN;
int32_t t41 = -99790562;
uint16_t x187 = 0U;
int32_t x195 = 59;
volatile int32_t t46 = 3330618;
volatile uint64_t t47 = 8412954615593577LLU;
static volatile int32_t x202 = INT32_MAX;
int16_t x212 = -1;
int32_t t50 = -50900051;
uint8_t x217 = 20U;
static int64_t x222 = INT64_MIN;
uint64_t x225 = 47372763204015298LLU;
static int32_t t54 = -59;
static int8_t x231 = INT8_MAX;
int8_t x235 = INT8_MIN;
uint64_t x236 = 4874332243092420921LLU;
int32_t x238 = INT32_MIN;
uint16_t x240 = UINT16_MAX;
int16_t x250 = -1;
static int32_t x253 = -1;
uint32_t x263 = 938U;
int32_t x264 = -1;
int8_t x268 = INT8_MIN;
int64_t x272 = INT64_MIN;
int8_t x280 = INT8_MIN;
uint16_t x288 = UINT16_MAX;
uint8_t x293 = UINT8_MAX;
uint32_t x294 = 728935860U;
int64_t x298 = -705339521228LL;
uint8_t x312 = 14U;
volatile int32_t t74 = -119059934;
int8_t x325 = INT8_MIN;
int8_t x327 = INT8_MIN;
int64_t x329 = INT64_MIN;
int16_t x337 = INT16_MIN;
volatile uint64_t x341 = 4656360LLU;
volatile int16_t x342 = INT16_MAX;
volatile uint64_t t81 = 110LLU;
static int8_t x345 = INT8_MIN;
static uint64_t x347 = UINT64_MAX;
uint64_t x348 = 4633LLU;
uint16_t x353 = UINT16_MAX;
int8_t x366 = 5;
int8_t x375 = 1;
static int16_t x380 = INT16_MIN;
uint32_t x381 = 3176U;
volatile int16_t x387 = 13;
volatile int8_t x396 = -1;
int16_t x399 = -111;
int32_t x403 = -1;
uint32_t x404 = 40U;
volatile int64_t t94 = -47336070485168016LL;
int64_t x418 = INT64_MIN;
uint8_t x420 = UINT8_MAX;
static volatile int8_t x425 = INT8_MAX;
uint32_t x426 = 87118915U;
static int16_t x432 = -1;
static volatile uint8_t x433 = UINT8_MAX;
int32_t x434 = 6695;
uint64_t x439 = 2015LLU;
volatile int8_t x440 = INT8_MIN;
uint64_t t99 = 17837409326855LLU;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int8_t x3 = INT8_MAX;
	int16_t x4 = INT16_MIN;

	t0 = ((x1==x2)^(x3+x4));

	if (t0 != -32641) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	volatile int32_t x7 = INT32_MIN;
	static uint8_t x8 = 8U;
	volatile int32_t t1 = 14206;

	t1 = ((x5==x6)^(x7+x8));

	if (t1 != -2147483639) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static int16_t x10 = INT16_MIN;
	volatile int64_t x11 = -125336LL;
	static volatile int8_t x12 = INT8_MIN;
	volatile int64_t t2 = -14016442646881LL;

	t2 = ((x9==x10)^(x11+x12));

	if (t2 != -125464LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	static uint64_t x14 = 1465205LLU;
	volatile int32_t t3 = 106;

	t3 = ((x13==x14)^(x15+x16));

	if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -1LL;
	int8_t x20 = -54;
	int32_t t4 = 116952625;

	t4 = ((x17==x18)^(x19+x20));

	if (t4 != -53) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 30568813U;
	uint8_t x22 = 0U;
	uint16_t x24 = 30165U;

	t5 = ((x21==x22)^(x23+x24));

	if (t5 != 30164) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1;
	int16_t x27 = INT16_MIN;
	volatile uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 1188674923LLU;

	t6 = ((x25==x26)^(x27+x28));

	if (t6 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint32_t x30 = UINT32_MAX;
	uint64_t x32 = UINT64_MAX;
	static uint64_t t7 = 1091565754LLU;

	t7 = ((x29==x30)^(x31+x32));

	if (t7 != 7606LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	volatile int64_t x34 = 2903LL;
	int16_t x35 = -31;
	static int16_t x36 = -1;
	volatile int32_t t8 = -14;

	t8 = ((x33==x34)^(x35+x36));

	if (t8 != -32) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 944708LLU;
	volatile uint32_t x39 = 1759088472U;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = 4436600769332LL;

	t9 = ((x37==x38)^(x39+x40));

	if (t9 != -9223372035095687336LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	volatile int8_t x43 = INT8_MIN;
	int8_t x44 = 0;
	volatile int32_t t10 = 181768535;

	t10 = ((x41==x42)^(x43+x44));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 288077257840270794LLU;
	int8_t x50 = 2;
	static int8_t x51 = INT8_MAX;
	uint16_t x52 = 908U;
	int32_t t11 = 3;

	t11 = ((x49==x50)^(x51+x52));

	if (t11 != 1035) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 780;
	static int64_t x54 = -474942LL;
	uint64_t x55 = UINT64_MAX;
	volatile uint32_t x56 = 11U;
	volatile uint64_t t12 = 13326511LLU;

	t12 = ((x53==x54)^(x55+x56));

	if (t12 != 10LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x58 = -2;
	static uint64_t x59 = UINT64_MAX;
	int32_t x60 = INT32_MAX;
	uint64_t t13 = 4LLU;

	t13 = ((x57==x58)^(x59+x60));

	if (t13 != 2147483646LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = -1014;
	volatile uint8_t x63 = UINT8_MAX;
	uint64_t x64 = 12400LLU;
	uint64_t t14 = 108655LLU;

	t14 = ((x61==x62)^(x63+x64));

	if (t14 != 12655LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x66 = INT16_MIN;
	volatile int16_t x68 = INT16_MAX;
	volatile int32_t t15 = 3344;

	t15 = ((x65==x66)^(x67+x68));

	if (t15 != 98302) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	uint16_t x70 = 101U;
	uint16_t x71 = 3391U;
	int8_t x72 = INT8_MAX;

	t16 = ((x69==x70)^(x71+x72));

	if (t16 != 3518) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	volatile int32_t x75 = INT32_MIN;
	uint64_t x76 = 18700960453LLU;
	volatile uint64_t t17 = 724853208LLU;

	t17 = ((x73==x74)^(x75+x76));

	if (t17 != 16553476805LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x79 = INT32_MAX;
	volatile int64_t t18 = 32053130403728LL;

	t18 = ((x77==x78)^(x79+x80));

	if (t18 != 2147483646LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x82 = 2;
	int8_t x84 = -9;

	t19 = ((x81==x82)^(x83+x84));

	if (t19 != -137) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = -1;
	int32_t x86 = -1;
	int16_t x88 = INT16_MAX;

	t20 = ((x85==x86)^(x87+x88));

	if (t20 != 33210) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MAX;
	uint64_t x95 = 30176LLU;
	int64_t x96 = 6LL;
	volatile uint64_t t21 = 40574538LLU;

	t21 = ((x93==x94)^(x95+x96));

	if (t21 != 30182LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = -1;
	volatile int32_t x99 = 60;
	volatile int64_t x100 = -567959LL;
	int64_t t22 = -1855404LL;

	t22 = ((x97==x98)^(x99+x100));

	if (t22 != -567899LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x102 = 606;
	uint16_t x103 = UINT16_MAX;
	int64_t x104 = INT64_MIN;
	static volatile int64_t t23 = 849056675541604LL;

	t23 = ((x101==x102)^(x103+x104));

	if (t23 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x106 = 25U;
	int16_t x107 = -1;
	int16_t x108 = 39;
	int32_t t24 = 32177422;

	t24 = ((x105==x106)^(x107+x108));

	if (t24 != 38) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MIN;
	int32_t x110 = -9053021;
	int64_t x111 = INT64_MIN;
	static int32_t x112 = 61562263;
	int64_t t25 = -35736LL;

	t25 = ((x109==x110)^(x111+x112));

	if (t25 != -9223372036793213545LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = UINT32_MAX;
	static uint8_t x116 = 0U;
	uint32_t t26 = UINT32_MAX;

	t26 = ((x113==x114)^(x115+x116));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -30;
	int8_t x118 = INT8_MIN;
	static uint8_t x119 = 66U;
	volatile int32_t t27 = 6;

	t27 = ((x117==x118)^(x119+x120));

	if (t27 != 65) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = INT8_MAX;
	uint64_t x122 = UINT64_MAX;
	uint16_t x124 = 3U;
	int64_t t28 = 170501903711344LL;

	t28 = ((x121==x122)^(x123+x124));

	if (t28 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = INT32_MAX;
	uint8_t x126 = UINT8_MAX;

	t29 = ((x125==x126)^(x127+x128));

	if (t29 != -2147483624) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 4927370U;
	volatile uint32_t x130 = UINT32_MAX;
	int64_t x131 = -14229885LL;
	static int16_t x132 = INT16_MIN;
	volatile int64_t t30 = 281032162194LL;

	t30 = ((x129==x130)^(x131+x132));

	if (t30 != -14262653LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	static int32_t x134 = INT32_MIN;
	int64_t x135 = INT64_MIN;
	int32_t x136 = 5392;
	volatile int64_t t31 = -21633139044165LL;

	t31 = ((x133==x134)^(x135+x136));

	if (t31 != -9223372036854770416LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x138 = INT16_MIN;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = 0;
	static volatile int32_t t32 = 403949787;

	t32 = ((x137==x138)^(x139+x140));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = INT64_MIN;
	static int64_t x143 = -140179938078818LL;
	volatile int8_t x144 = INT8_MAX;

	t33 = ((x141==x142)^(x143+x144));

	if (t33 != -140179938078691LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x145 = INT8_MIN;
	uint8_t x146 = 1U;
	static int32_t x147 = 12862;
	static volatile int8_t x148 = INT8_MIN;

	t34 = ((x145==x146)^(x147+x148));

	if (t34 != 12734) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x149 = INT16_MAX;
	volatile int16_t x150 = INT16_MIN;
	static volatile int16_t x151 = -138;
	uint32_t x152 = UINT32_MAX;

	t35 = ((x149==x150)^(x151+x152));

	if (t35 != 4294967157U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 0U;
	int64_t x154 = 327403959705199377LL;
	volatile int16_t x155 = INT16_MIN;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t36 = 269734;

	t36 = ((x153==x154)^(x155+x156));

	if (t36 != -32896) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x158 = -1;
	uint32_t x159 = 265480059U;
	int32_t x160 = INT32_MAX;
	uint32_t t37 = 12U;

	t37 = ((x157==x158)^(x159+x160));

	if (t37 != 2412963706U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = UINT16_MAX;
	static int32_t x162 = -1;
	static int32_t x164 = INT32_MAX;

	t38 = ((x161==x162)^(x163+x164));

	if (t38 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x165 = -1;
	volatile int8_t x166 = INT8_MIN;
	static int16_t x168 = INT16_MIN;
	int32_t t39 = -8996;

	t39 = ((x165==x166)^(x167+x168));

	if (t39 != -32414) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = 2869U;
	uint8_t x170 = UINT8_MAX;
	int16_t x171 = INT16_MIN;
	int16_t x172 = 174;

	t40 = ((x169==x170)^(x171+x172));

	if (t40 != -32594) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	int8_t x176 = -11;

	t41 = ((x173==x174)^(x175+x176));

	if (t41 != -32780) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 1;
	int16_t x178 = 1;
	volatile uint32_t x179 = 16290898U;
	int64_t x180 = INT64_MIN;
	int64_t t42 = -4178290LL;

	t42 = ((x177==x178)^(x179+x180));

	if (t42 != -9223372036838484909LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x181 = -1;
	volatile uint32_t x182 = 20163U;
	int16_t x183 = 114;
	int32_t x184 = 1381262;
	int32_t t43 = 3955;

	t43 = ((x181==x182)^(x183+x184));

	if (t43 != 1381376) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = INT16_MAX;
	static int64_t x188 = -244240504830630LL;
	int64_t t44 = 3234779336396464192LL;

	t44 = ((x185==x186)^(x187+x188));

	if (t44 != -244240504830629LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	int8_t x190 = -14;
	int16_t x191 = -1;
	uint16_t x192 = 30878U;
	int32_t t45 = -4;

	t45 = ((x189==x190)^(x191+x192));

	if (t45 != 30877) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = 1;
	int16_t x194 = INT16_MAX;
	int8_t x196 = 0;

	t46 = ((x193==x194)^(x195+x196));

	if (t46 != 59) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MAX;
	uint64_t x198 = 41604916087432252LLU;
	int16_t x199 = INT16_MIN;
	static volatile uint64_t x200 = UINT64_MAX;

	t47 = ((x197==x198)^(x199+x200));

	if (t47 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -282;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = INT8_MIN;
	volatile int32_t t48 = -8936221;

	t48 = ((x201==x202)^(x203+x204));

	if (t48 != 65407) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -579688;
	uint8_t x206 = 80U;
	volatile int32_t x207 = 1335093;
	uint32_t x208 = 146045891U;
	static volatile uint32_t t49 = 3331198U;

	t49 = ((x205==x206)^(x207+x208));

	if (t49 != 147380984U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 3U;
	int32_t x210 = 394783766;
	uint16_t x211 = 4367U;

	t50 = ((x209==x210)^(x211+x212));

	if (t50 != 4366) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = 14;
	volatile uint32_t x214 = UINT32_MAX;
	static int64_t x215 = INT64_MIN;
	int16_t x216 = 2009;
	int64_t t51 = -6081LL;

	t51 = ((x213==x214)^(x215+x216));

	if (t51 != -9223372036854773799LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x218 = INT16_MAX;
	int32_t x219 = INT32_MIN;
	uint16_t x220 = 0U;
	int32_t t52 = INT32_MIN;

	t52 = ((x217==x218)^(x219+x220));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x221 = INT8_MAX;
	int16_t x223 = INT16_MAX;
	int8_t x224 = INT8_MIN;
	static int32_t t53 = 79800768;

	t53 = ((x221==x222)^(x223+x224));

	if (t53 != 32639) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x226 = -57;
	int32_t x227 = INT32_MAX;
	volatile int32_t x228 = INT32_MIN;

	t54 = ((x225==x226)^(x227+x228));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = UINT16_MAX;
	static volatile int8_t x230 = -1;
	static volatile int64_t x232 = -1LL;
	int64_t t55 = -378471LL;

	t55 = ((x229==x230)^(x231+x232));

	if (t55 != 126LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x233 = 0U;
	int16_t x234 = -25;
	static uint64_t t56 = 873LLU;

	t56 = ((x233==x234)^(x235+x236));

	if (t56 != 4874332243092420793LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x237 = INT16_MIN;
	int8_t x239 = INT8_MIN;
	volatile int32_t t57 = -69431;

	t57 = ((x237==x238)^(x239+x240));

	if (t57 != 65407) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = 221;
	int8_t x246 = -1;
	int16_t x247 = -1;
	volatile int8_t x248 = INT8_MAX;
	volatile int32_t t58 = 2;

	t58 = ((x245==x246)^(x247+x248));

	if (t58 != 126) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MIN;
	int32_t x251 = -1;
	int16_t x252 = -1;
	int32_t t59 = -19;

	t59 = ((x249==x250)^(x251+x252));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x254 = 28;
	static uint32_t x255 = 268U;
	int16_t x256 = INT16_MAX;
	uint32_t t60 = 429U;

	t60 = ((x253==x254)^(x255+x256));

	if (t60 != 33035U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = -1;
	int8_t x258 = -1;
	int16_t x259 = -1;
	static int64_t x260 = -1931206446504796LL;
	int64_t t61 = 162LL;

	t61 = ((x257==x258)^(x259+x260));

	if (t61 != -1931206446504798LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x261 = 87616LLU;
	uint8_t x262 = UINT8_MAX;
	uint32_t t62 = 3658076U;

	t62 = ((x261==x262)^(x263+x264));

	if (t62 != 937U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = 33U;
	int32_t x266 = -1476636;
	static volatile int64_t x267 = INT64_MAX;
	volatile int64_t t63 = 8719816850LL;

	t63 = ((x265==x266)^(x267+x268));

	if (t63 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MAX;
	int32_t x270 = INT32_MIN;
	uint8_t x271 = 4U;
	volatile int64_t t64 = -57679077725320LL;

	t64 = ((x269==x270)^(x271+x272));

	if (t64 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MAX;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = 190U;
	volatile int32_t t65 = -705398;

	t65 = ((x277==x278)^(x279+x280));

	if (t65 != 62) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x281 = 0;
	uint16_t x282 = UINT16_MAX;
	int16_t x283 = 1;
	int8_t x284 = 3;
	int32_t t66 = 15;

	t66 = ((x281==x282)^(x283+x284));

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MAX;
	static int32_t x286 = INT32_MIN;
	int32_t x287 = -1;
	int32_t t67 = 1;

	t67 = ((x285==x286)^(x287+x288));

	if (t67 != 65534) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = UINT8_MAX;
	int16_t x290 = -7952;
	int8_t x291 = INT8_MIN;
	static volatile int32_t x292 = 414310;
	volatile int32_t t68 = -4009;

	t68 = ((x289==x290)^(x291+x292));

	if (t68 != 414182) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x295 = UINT8_MAX;
	uint32_t x296 = 19810U;
	volatile uint32_t t69 = 752U;

	t69 = ((x293==x294)^(x295+x296));

	if (t69 != 20065U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x297 = UINT16_MAX;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = INT16_MAX;
	static uint32_t t70 = 11U;

	t70 = ((x297==x298)^(x299+x300));

	if (t70 != 32766U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x301 = 1878386LL;
	int64_t x302 = INT64_MIN;
	static uint64_t x303 = UINT64_MAX;
	volatile int32_t x304 = -7;
	volatile uint64_t t71 = 42LLU;

	t71 = ((x301==x302)^(x303+x304));

	if (t71 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = -1;
	int16_t x306 = 2;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = 3U;
	int32_t t72 = 12569;

	t72 = ((x305==x306)^(x307+x308));

	if (t72 != -125) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = INT64_MAX;
	int8_t x310 = INT8_MIN;
	static uint32_t x311 = 640U;
	uint32_t t73 = 22154U;

	t73 = ((x309==x310)^(x311+x312));

	if (t73 != 654U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = 21471U;
	static int64_t x314 = -1LL;
	volatile int8_t x315 = 3;
	int32_t x316 = -1;

	t74 = ((x313==x314)^(x315+x316));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MIN;
	uint16_t x318 = UINT16_MAX;
	int64_t x319 = -876435521074LL;
	static volatile int8_t x320 = INT8_MIN;
	static int64_t t75 = -2466824815LL;

	t75 = ((x317==x318)^(x319+x320));

	if (t75 != -876435521202LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = -20663300;
	int16_t x322 = INT16_MIN;
	static volatile int16_t x323 = INT16_MIN;
	int32_t x324 = INT32_MAX;
	int32_t t76 = 803393747;

	t76 = ((x321==x322)^(x323+x324));

	if (t76 != 2147450879) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x326 = 4074696U;
	uint64_t x328 = 3153399LLU;
	uint64_t t77 = 30188593LLU;

	t77 = ((x325==x326)^(x327+x328));

	if (t77 != 3153271LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x330 = -1LL;
	int32_t x331 = -1;
	uint16_t x332 = 945U;
	static int32_t t78 = -49914;

	t78 = ((x329==x330)^(x331+x332));

	if (t78 != 944) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = UINT8_MAX;
	int64_t x334 = 4567311660658892149LL;
	static int64_t x335 = INT64_MIN;
	uint64_t x336 = 588457008LLU;
	uint64_t t79 = 443395238962LLU;

	t79 = ((x333==x334)^(x335+x336));

	if (t79 != 9223372037443232816LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x338 = 3881;
	int16_t x339 = -1;
	volatile uint8_t x340 = 1U;
	static int32_t t80 = -28559;

	t80 = ((x337==x338)^(x339+x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x343 = 1992575LLU;
	volatile int16_t x344 = -1;

	t81 = ((x341==x342)^(x343+x344));

	if (t81 != 1992574LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x346 = UINT16_MAX;
	volatile uint64_t t82 = 1580869092185819LLU;

	t82 = ((x345==x346)^(x347+x348));

	if (t82 != 4632LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x349 = INT8_MIN;
	static uint8_t x350 = 41U;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = 317;
	volatile int32_t t83 = -2276;

	t83 = ((x349==x350)^(x351+x352));

	if (t83 != 65852) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x354 = 7U;
	volatile int64_t x355 = 16771148LL;
	int16_t x356 = -20;
	int64_t t84 = 400427649985395406LL;

	t84 = ((x353==x354)^(x355+x356));

	if (t84 != 16771128LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x365 = INT16_MIN;
	volatile int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MAX;
	int32_t t85 = 181660;

	t85 = ((x365==x366)^(x367+x368));

	if (t85 != -2147450881) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x373 = INT8_MIN;
	uint16_t x374 = 3008U;
	int16_t x376 = -1;
	static int32_t t86 = 314;

	t86 = ((x373==x374)^(x375+x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = INT32_MAX;
	static uint32_t x378 = 36536452U;
	uint8_t x379 = UINT8_MAX;
	int32_t t87 = 444550;

	t87 = ((x377==x378)^(x379+x380));

	if (t87 != -32513) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x382 = -1;
	int8_t x383 = INT8_MIN;
	uint64_t x384 = 572677021319LLU;
	static uint64_t t88 = 18098LLU;

	t88 = ((x381==x382)^(x383+x384));

	if (t88 != 572677021191LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x385 = 15U;
	uint64_t x386 = 2100054LLU;
	static uint8_t x388 = 2U;
	volatile int32_t t89 = 444386355;

	t89 = ((x385==x386)^(x387+x388));

	if (t89 != 15) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x390 = 2891750U;
	static volatile int32_t x391 = INT32_MAX;
	int8_t x392 = INT8_MIN;
	int32_t t90 = -913896;

	t90 = ((x389==x390)^(x391+x392));

	if (t90 != 2147483519) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x393 = UINT64_MAX;
	int16_t x394 = 546;
	static volatile int16_t x395 = INT16_MAX;
	int32_t t91 = -1;

	t91 = ((x393==x394)^(x395+x396));

	if (t91 != 32766) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x397 = 494760296771LL;
	int8_t x398 = INT8_MAX;
	uint16_t x400 = 9765U;
	int32_t t92 = 22;

	t92 = ((x397==x398)^(x399+x400));

	if (t92 != 9654) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x401 = INT64_MAX;
	volatile uint32_t x402 = UINT32_MAX;
	static volatile uint32_t t93 = 279515889U;

	t93 = ((x401==x402)^(x403+x404));

	if (t93 != 39U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x405 = -1LL;
	uint16_t x406 = 2U;
	uint16_t x407 = 163U;
	static int64_t x408 = INT64_MIN;

	t94 = ((x405==x406)^(x407+x408));

	if (t94 != -9223372036854775645LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x417 = 100;
	int16_t x419 = 193;
	volatile int32_t t95 = -2597184;

	t95 = ((x417==x418)^(x419+x420));

	if (t95 != 448) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x427 = -1;
	int32_t x428 = 15;
	int32_t t96 = -4051;

	t96 = ((x425==x426)^(x427+x428));

	if (t96 != 14) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = 10;
	static int32_t x430 = 0;
	static uint8_t x431 = UINT8_MAX;
	int32_t t97 = -56284191;

	t97 = ((x429==x430)^(x431+x432));

	if (t97 != 254) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x435 = INT16_MIN;
	uint16_t x436 = 5939U;
	volatile int32_t t98 = 122;

	t98 = ((x433==x434)^(x435+x436));

	if (t98 != -26829) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x437 = 11802U;
	volatile uint32_t x438 = 1060U;

	t99 = ((x437==x438)^(x439+x440));

	if (t99 != 1887LLU) { NG(); } else { ; }
	
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

