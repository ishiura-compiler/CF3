#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -14259;
int32_t x9 = INT32_MAX;
uint32_t x20 = UINT32_MAX;
volatile int32_t t4 = -76907995;
int16_t x21 = INT16_MIN;
static uint16_t x27 = UINT16_MAX;
int64_t x29 = -1LL;
int8_t x31 = INT8_MIN;
volatile uint16_t x35 = 21186U;
int16_t x45 = INT16_MIN;
volatile int32_t t11 = 10668;
uint16_t x49 = UINT16_MAX;
uint8_t x66 = 1U;
volatile int32_t t15 = -21269;
uint8_t x74 = 125U;
volatile int32_t x75 = INT32_MIN;
volatile int8_t x76 = -27;
int8_t x79 = INT8_MIN;
uint16_t x80 = 24529U;
int64_t x81 = INT64_MIN;
int16_t x88 = -75;
uint32_t x92 = UINT32_MAX;
static volatile int32_t t21 = 843810;
volatile int16_t x94 = INT16_MAX;
int32_t t24 = INT32_MIN;
uint32_t x110 = UINT32_MAX;
int16_t x112 = INT16_MIN;
volatile int32_t t26 = INT32_MIN;
volatile int64_t t27 = INT64_MIN;
static int16_t x119 = INT16_MIN;
int32_t t29 = -28159115;
int32_t t30 = -11;
int64_t x135 = INT64_MIN;
static volatile int64_t x136 = 476610499405264425LL;
volatile int64_t t34 = 51846570652121910LL;
static int64_t x148 = INT64_MIN;
volatile int64_t x150 = 63LL;
int8_t x153 = INT8_MIN;
int32_t t37 = 5109081;
int8_t x158 = -14;
static volatile int16_t x167 = 157;
volatile int16_t x170 = INT16_MIN;
volatile int32_t t41 = -737;
volatile uint64_t x174 = UINT64_MAX;
static int64_t x177 = -7190614869580142LL;
static int16_t x179 = -1;
int8_t x182 = -1;
int32_t x183 = 1;
static int64_t x191 = -14742910941590LL;
int32_t t46 = -39827;
volatile uint64_t x193 = 20LLU;
int32_t x197 = -145436207;
int8_t x202 = 6;
int32_t t50 = -76467;
int32_t x210 = -1;
static volatile int32_t t53 = 2888126;
volatile int32_t x228 = -32615104;
static volatile int32_t t56 = -287328577;
volatile int8_t x243 = -1;
int32_t x244 = INT32_MIN;
volatile int8_t x245 = -15;
int16_t x251 = -1;
static uint16_t x257 = 3U;
volatile int32_t t64 = 17598375;
uint32_t x276 = 7787274U;
static uint64_t x277 = 39959156949LLU;
int8_t x288 = INT8_MAX;
uint32_t x295 = 1816052187U;
uint8_t x303 = UINT8_MAX;
static int32_t x304 = -1;
int32_t t72 = 0;
int16_t x305 = INT16_MIN;
int64_t x307 = INT64_MAX;
uint32_t x308 = 2U;
static volatile int32_t t73 = -407295007;
int32_t x319 = INT32_MIN;
int16_t x320 = 1;
uint32_t x321 = 65307U;
uint8_t x323 = UINT8_MAX;
volatile int32_t t77 = -2;
int8_t x330 = 1;
int16_t x338 = INT16_MIN;
uint32_t x343 = 2123335792U;
int8_t x357 = 3;
static uint32_t x364 = UINT32_MAX;
int8_t x374 = -1;
uint16_t x378 = UINT16_MAX;
uint8_t x379 = 3U;
uint64_t x380 = 814714LLU;
static volatile int32_t t89 = 340;
static uint64_t x388 = 25157117LLU;
uint64_t x393 = UINT64_MAX;
volatile int32_t x394 = INT32_MAX;
int32_t x396 = INT32_MAX;
volatile int32_t x397 = INT32_MIN;
int32_t t93 = INT32_MIN;
uint16_t x401 = 8975U;
volatile int32_t t94 = -969973582;
uint32_t x411 = 117825091U;
static uint8_t x417 = 1U;
volatile uint16_t x418 = 1U;
uint32_t x422 = 212794U;
int32_t t99 = 11735;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int64_t x2 = -1LL;
	int16_t x3 = -5874;
	int16_t x4 = 841;
	static uint64_t t0 = UINT64_MAX;

	t0 = (x1-((x2%x3)==x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MIN;
	uint8_t x7 = UINT8_MAX;
	uint32_t x8 = 179263U;
	int32_t t1 = INT32_MIN;

	t1 = (x5-((x6%x7)==x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x10 = -16167;
	int8_t x11 = INT8_MIN;
	int32_t x12 = INT32_MAX;
	static volatile int32_t t2 = INT32_MAX;

	t2 = (x9-((x10%x11)==x12));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = 15U;
	int32_t x14 = -1;
	static int32_t x15 = -97;
	int8_t x16 = INT8_MAX;
	volatile uint32_t t3 = 280U;

	t3 = (x13-((x14%x15)==x16));

	if (t3 != 15U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int64_t x18 = 1132268588LL;
	uint32_t x19 = 7402U;

	t4 = (x17-((x18%x19)==x20));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = INT32_MAX;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = -259416;

	t5 = (x21-((x22%x23)==x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -11;
	int16_t x26 = -1;
	static int32_t x28 = 1502;
	static volatile int32_t t6 = 3656;

	t6 = (x25-((x26%x27)==x28));

	if (t6 != -11) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 544124326524115LLU;
	int32_t x32 = -645;
	static int64_t t7 = 326951274906141LL;

	t7 = (x29-((x30%x31)==x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 11352LL;
	int16_t x34 = 1685;
	int8_t x36 = INT8_MAX;
	volatile int64_t t8 = 28624190104665686LL;

	t8 = (x33-((x34%x35)==x36));

	if (t8 != 11352LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MIN;
	int16_t x39 = INT16_MIN;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = INT32_MIN;

	t9 = (x37-((x38%x39)==x40));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 4U;
	static volatile uint8_t x42 = 2U;
	int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MIN;
	static uint32_t t10 = 154U;

	t10 = (x41-((x42%x43)==x44));

	if (t10 != 4U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x46 = 125049051382LL;
	int8_t x47 = INT8_MAX;
	volatile int64_t x48 = INT64_MAX;

	t11 = (x45-((x46%x47)==x48));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	int16_t x51 = -1;
	int32_t x52 = -203614;
	static volatile int32_t t12 = 1460;

	t12 = (x49-((x50%x51)==x52));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 146U;
	int32_t x58 = -457;
	uint32_t x59 = UINT32_MAX;
	uint8_t x60 = 0U;
	volatile int32_t t13 = -2736048;

	t13 = (x57-((x58%x59)==x60));

	if (t13 != 146) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 0U;
	int16_t x62 = INT16_MAX;
	uint16_t x63 = UINT16_MAX;
	static int32_t x64 = -193;
	static volatile uint32_t t14 = 28U;

	t14 = (x61-((x62%x63)==x64));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -22;
	int32_t x67 = INT32_MAX;
	int32_t x68 = INT32_MAX;

	t15 = (x65-((x66%x67)==x68));

	if (t15 != -22) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = -26592;
	uint8_t x71 = UINT8_MAX;
	volatile int32_t x72 = -54217;
	int32_t t16 = 3219697;

	t16 = (x69-((x70%x71)==x72));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = INT16_MIN;
	int32_t t17 = 61332;

	t17 = (x73-((x74%x75)==x76));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = 0U;
	int8_t x78 = -1;
	int32_t t18 = 16201539;

	t18 = (x77-((x78%x79)==x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = INT16_MIN;
	uint32_t x83 = 8088782U;
	int8_t x84 = -1;
	int64_t t19 = INT64_MIN;

	t19 = (x81-((x82%x83)==x84));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x85 = UINT64_MAX;
	uint8_t x86 = UINT8_MAX;
	static int32_t x87 = INT32_MIN;
	uint64_t t20 = UINT64_MAX;

	t20 = (x85-((x86%x87)==x88));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = 38;
	volatile uint64_t x91 = UINT64_MAX;

	t21 = (x89-((x90%x91)==x92));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	static volatile int64_t x95 = INT64_MIN;
	int32_t x96 = INT32_MIN;
	int32_t t22 = INT32_MIN;

	t22 = (x93-((x94%x95)==x96));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 10;
	static uint8_t x98 = 1U;
	static int16_t x99 = INT16_MIN;
	static volatile int16_t x100 = -5;
	int32_t t23 = -27;

	t23 = (x97-((x98%x99)==x100));

	if (t23 != 10) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	uint8_t x102 = 3U;
	int64_t x103 = 5387950783LL;
	uint8_t x104 = UINT8_MAX;

	t24 = (x101-((x102%x103)==x104));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	int8_t x106 = -1;
	int32_t x107 = 60;
	uint64_t x108 = UINT64_MAX;
	static volatile int32_t t25 = 1819;

	t25 = (x105-((x106%x107)==x108));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	int64_t x111 = -979609154862LL;

	t26 = (x109-((x110%x111)==x112));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MIN;
	int32_t x114 = INT32_MIN;
	static volatile int32_t x115 = -1;
	volatile int32_t x116 = INT32_MIN;

	t27 = (x113-((x114%x115)==x116));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = INT16_MIN;
	int64_t x118 = -1LL;
	int16_t x120 = INT16_MIN;
	int32_t t28 = 248;

	t28 = (x117-((x118%x119)==x120));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = UINT16_MAX;
	int8_t x122 = 3;
	static volatile uint32_t x123 = 61992U;
	uint16_t x124 = UINT16_MAX;

	t29 = (x121-((x122%x123)==x124));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	int64_t x126 = -14475LL;
	int16_t x127 = INT16_MIN;
	static int8_t x128 = -18;

	t30 = (x125-((x126%x127)==x128));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x129 = UINT64_MAX;
	int8_t x130 = 44;
	int32_t x131 = -96127;
	uint8_t x132 = UINT8_MAX;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x129-((x130%x131)==x132));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MAX;
	volatile int32_t t32 = -450086269;

	t32 = (x133-((x134%x135)==x136));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 4U;
	static int32_t x138 = INT32_MIN;
	static int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	volatile int32_t t33 = 219815726;

	t33 = (x137-((x138%x139)==x140));

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = -1LL;
	static int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	int8_t x144 = 12;

	t34 = (x141-((x142%x143)==x144));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 4U;
	int16_t x146 = -1;
	uint64_t x147 = 445LLU;
	volatile int32_t t35 = 0;

	t35 = (x145-((x146%x147)==x148));

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = UINT16_MAX;
	static volatile uint8_t x151 = UINT8_MAX;
	int8_t x152 = -1;
	static volatile int32_t t36 = -114;

	t36 = (x149-((x150%x151)==x152));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x154 = INT32_MAX;
	int32_t x155 = 30196;
	static uint64_t x156 = 653LLU;

	t37 = (x153-((x154%x155)==x156));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -1;
	static int32_t x159 = -1;
	int64_t x160 = -1LL;
	int32_t t38 = -534410;

	t38 = (x157-((x158%x159)==x160));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 354364109152053099LLU;
	uint64_t x162 = 16259291198893LLU;
	int16_t x163 = -1;
	int64_t x164 = -1LL;
	uint64_t t39 = 22119268321393LLU;

	t39 = (x161-((x162%x163)==x164));

	if (t39 != 354364109152053099LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MAX;
	uint8_t x166 = UINT8_MAX;
	static int64_t x168 = -1LL;
	int64_t t40 = INT64_MAX;

	t40 = (x165-((x166%x167)==x168));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x169 = 2U;
	uint32_t x171 = UINT32_MAX;
	static int16_t x172 = INT16_MIN;

	t41 = (x169-((x170%x171)==x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x173 = 978557152956102LLU;
	int16_t x175 = INT16_MIN;
	volatile int16_t x176 = INT16_MAX;
	volatile uint64_t t42 = 208421304463337LLU;

	t42 = (x173-((x174%x175)==x176));

	if (t42 != 978557152956101LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x178 = 99U;
	int16_t x180 = INT16_MAX;
	int64_t t43 = -3836342489363828378LL;

	t43 = (x177-((x178%x179)==x180));

	if (t43 != -7190614869580142LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = -153;
	static int8_t x184 = -55;
	volatile int32_t t44 = -333923880;

	t44 = (x181-((x182%x183)==x184));

	if (t44 != -153) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -15531;
	int32_t x186 = -1;
	volatile int16_t x187 = INT16_MIN;
	uint16_t x188 = 382U;
	volatile int32_t t45 = -46;

	t45 = (x185-((x186%x187)==x188));

	if (t45 != -15531) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = UINT8_MAX;
	int64_t x190 = -1LL;
	int8_t x192 = INT8_MIN;

	t46 = (x189-((x190%x191)==x192));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x194 = 20U;
	volatile uint16_t x195 = 401U;
	uint16_t x196 = 9759U;
	static volatile uint64_t t47 = 5020LLU;

	t47 = (x193-((x194%x195)==x196));

	if (t47 != 20LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x198 = INT16_MIN;
	uint64_t x199 = 10LLU;
	static int64_t x200 = -1LL;
	static int32_t t48 = -30;

	t48 = (x197-((x198%x199)==x200));

	if (t48 != -145436207) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = -1LL;
	int8_t x203 = -42;
	uint64_t x204 = 820780LLU;
	int64_t t49 = -193596054594102240LL;

	t49 = (x201-((x202%x203)==x204));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x205 = 0;
	int64_t x206 = -1LL;
	volatile int64_t x207 = -255461914231LL;
	volatile int64_t x208 = INT64_MIN;

	t50 = (x205-((x206%x207)==x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = 15;
	int8_t x211 = 8;
	static int8_t x212 = 0;
	volatile int32_t t51 = -3;

	t51 = (x209-((x210%x211)==x212));

	if (t51 != 15) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x213 = -454041638;
	volatile int8_t x214 = INT8_MAX;
	int8_t x215 = -1;
	static int16_t x216 = INT16_MIN;
	static int32_t t52 = -99330263;

	t52 = (x213-((x214%x215)==x216));

	if (t52 != -454041638) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MAX;
	static uint16_t x222 = 115U;
	static int64_t x223 = INT64_MAX;
	uint16_t x224 = 2U;

	t53 = (x221-((x222%x223)==x224));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = 2;
	int8_t x226 = -1;
	uint16_t x227 = 57U;
	int32_t t54 = -1833783;

	t54 = (x225-((x226%x227)==x228));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = 781221288896030LL;
	static uint8_t x230 = 4U;
	uint32_t x231 = 4842485U;
	static volatile uint64_t x232 = UINT64_MAX;
	volatile int64_t t55 = -6418488931111248LL;

	t55 = (x229-((x230%x231)==x232));

	if (t55 != 781221288896030LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MIN;
	int32_t x234 = -1;
	uint16_t x235 = 1U;
	static volatile uint64_t x236 = UINT64_MAX;

	t56 = (x233-((x234%x235)==x236));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = -30036;
	int32_t x238 = INT32_MAX;
	int8_t x239 = INT8_MAX;
	uint64_t x240 = 18551040805879544LLU;
	int32_t t57 = 1555868;

	t57 = (x237-((x238%x239)==x240));

	if (t57 != -30036) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x241 = 7190;
	int32_t x242 = -988;
	volatile int32_t t58 = -401956;

	t58 = (x241-((x242%x243)==x244));

	if (t58 != 7190) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x246 = 195321LLU;
	volatile uint64_t x247 = 15668003035552LLU;
	int32_t x248 = -1;
	static int32_t t59 = 112380;

	t59 = (x245-((x246%x247)==x248));

	if (t59 != -15) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = -1LL;
	uint64_t x252 = 136333370110914LLU;
	volatile int32_t t60 = INT32_MIN;

	t60 = (x249-((x250%x251)==x252));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = 454653479412633174LL;
	int32_t x254 = INT32_MIN;
	int32_t x255 = 172365;
	int64_t x256 = INT64_MAX;
	int64_t t61 = 64LL;

	t61 = (x253-((x254%x255)==x256));

	if (t61 != 454653479412633174LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x258 = INT32_MIN;
	volatile uint32_t x259 = 97U;
	uint16_t x260 = 0U;
	static int32_t t62 = 287197;

	t62 = (x257-((x258%x259)==x260));

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MAX;
	volatile int32_t x263 = INT32_MIN;
	uint8_t x264 = UINT8_MAX;
	int32_t t63 = INT32_MIN;

	t63 = (x261-((x262%x263)==x264));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = 54;
	volatile int16_t x266 = INT16_MIN;
	volatile int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;

	t64 = (x265-((x266%x267)==x268));

	if (t64 != 54) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x269 = INT8_MIN;
	uint32_t x270 = UINT32_MAX;
	int16_t x271 = -1;
	int64_t x272 = INT64_MIN;
	int32_t t65 = -116714;

	t65 = (x269-((x270%x271)==x272));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = -1LL;
	int32_t x274 = -10663320;
	static int8_t x275 = 4;
	int64_t t66 = -119524015856240LL;

	t66 = (x273-((x274%x275)==x276));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x278 = 704480093LL;
	int64_t x279 = -3671392LL;
	static int8_t x280 = INT8_MIN;
	volatile uint64_t t67 = 3675LLU;

	t67 = (x277-((x278%x279)==x280));

	if (t67 != 39959156949LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x281 = -1;
	uint32_t x282 = UINT32_MAX;
	static volatile uint64_t x283 = 24582121LLU;
	uint64_t x284 = 7972122734291556LLU;
	int32_t t68 = 502708862;

	t68 = (x281-((x282%x283)==x284));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = -144890504936LL;
	int64_t x286 = 0LL;
	uint16_t x287 = 7U;
	volatile int64_t t69 = -208741125806LL;

	t69 = (x285-((x286%x287)==x288));

	if (t69 != -144890504936LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = 31U;
	uint32_t x294 = UINT32_MAX;
	int64_t x296 = INT64_MIN;
	volatile int32_t t70 = -30251;

	t70 = (x293-((x294%x295)==x296));

	if (t70 != 31) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x297 = INT64_MIN;
	uint8_t x298 = 99U;
	int64_t x299 = INT64_MIN;
	uint64_t x300 = 94024LLU;
	int64_t t71 = INT64_MIN;

	t71 = (x297-((x298%x299)==x300));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = -1;
	int64_t x302 = INT64_MIN;

	t72 = (x301-((x302%x303)==x304));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x306 = INT32_MAX;

	t73 = (x305-((x306%x307)==x308));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = -1LL;
	uint64_t x314 = 61085001854861LLU;
	int16_t x315 = INT16_MAX;
	uint64_t x316 = UINT64_MAX;
	int64_t t74 = 519659055001182LL;

	t74 = (x313-((x314%x315)==x316));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = 44U;
	int16_t x318 = INT16_MIN;
	static volatile int32_t t75 = -10618879;

	t75 = (x317-((x318%x319)==x320));

	if (t75 != 44) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x322 = INT16_MAX;
	static int32_t x324 = 170698229;
	volatile uint32_t t76 = 8064461U;

	t76 = (x321-((x322%x323)==x324));

	if (t76 != 65307U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = -29;
	int64_t x326 = -90LL;
	static int16_t x327 = INT16_MAX;
	uint16_t x328 = UINT16_MAX;

	t77 = (x325-((x326%x327)==x328));

	if (t77 != -29) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = 12;
	volatile int64_t x331 = INT64_MAX;
	uint64_t x332 = 72496429LLU;
	int32_t t78 = -152179;

	t78 = (x329-((x330%x331)==x332));

	if (t78 != 12) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = 483;
	int16_t x334 = -1;
	static int8_t x335 = 1;
	int64_t x336 = INT64_MAX;
	int32_t t79 = -2;

	t79 = (x333-((x334%x335)==x336));

	if (t79 != 483) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x337 = INT32_MAX;
	int64_t x339 = 80247062LL;
	int8_t x340 = -1;
	int32_t t80 = INT32_MAX;

	t80 = (x337-((x338%x339)==x340));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x341 = INT32_MAX;
	static volatile uint32_t x342 = UINT32_MAX;
	uint8_t x344 = 6U;
	int32_t t81 = INT32_MAX;

	t81 = (x341-((x342%x343)==x344));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 1357498786U;
	int16_t x346 = INT16_MIN;
	volatile int16_t x347 = INT16_MIN;
	static uint64_t x348 = 1772LLU;
	volatile uint32_t t82 = 29057U;

	t82 = (x345-((x346%x347)==x348));

	if (t82 != 1357498786U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MIN;
	static int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MAX;
	volatile int32_t t83 = -22;

	t83 = (x349-((x350%x351)==x352));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x353 = INT8_MAX;
	int64_t x354 = -1LL;
	int64_t x355 = -1LL;
	uint64_t x356 = UINT64_MAX;
	static volatile int32_t t84 = 45;

	t84 = (x353-((x354%x355)==x356));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x358 = -16;
	int16_t x359 = 12227;
	static volatile int64_t x360 = INT64_MIN;
	int32_t t85 = -2376;

	t85 = (x357-((x358%x359)==x360));

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = -1LL;
	int16_t x363 = INT16_MAX;
	volatile int32_t t86 = 1712;

	t86 = (x361-((x362%x363)==x364));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = INT8_MIN;
	static int64_t x370 = -1LL;
	volatile uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MIN;
	volatile int32_t t87 = -4;

	t87 = (x369-((x370%x371)==x372));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = 2434752;
	static volatile int16_t x375 = INT16_MIN;
	volatile uint8_t x376 = 6U;
	volatile int32_t t88 = 1;

	t88 = (x373-((x374%x375)==x376));

	if (t88 != 2434752) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = INT8_MIN;

	t89 = (x377-((x378%x379)==x380));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x385 = -631LL;
	int16_t x386 = 1970;
	int16_t x387 = INT16_MIN;
	static volatile int64_t t90 = 104614LL;

	t90 = (x385-((x386%x387)==x388));

	if (t90 != -631LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = INT16_MAX;
	uint64_t x390 = 181241585592LLU;
	static uint16_t x391 = 55U;
	int8_t x392 = INT8_MIN;
	static int32_t t91 = -102595;

	t91 = (x389-((x390%x391)==x392));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x395 = INT32_MIN;
	static uint64_t t92 = 1740298737119698541LLU;

	t92 = (x393-((x394%x395)==x396));

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x398 = 39LLU;
	uint8_t x399 = UINT8_MAX;
	uint64_t x400 = 7081377937286LLU;

	t93 = (x397-((x398%x399)==x400));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x402 = INT8_MIN;
	static int8_t x403 = -1;
	int32_t x404 = INT32_MAX;

	t94 = (x401-((x402%x403)==x404));

	if (t94 != 8975) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = -5;
	static volatile uint8_t x406 = UINT8_MAX;
	int32_t x407 = INT32_MIN;
	uint32_t x408 = UINT32_MAX;
	static int32_t t95 = 380033617;

	t95 = (x405-((x406%x407)==x408));

	if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = INT64_MAX;
	uint32_t x410 = 933471U;
	int32_t x412 = INT32_MIN;
	static int64_t t96 = INT64_MAX;

	t96 = (x409-((x410%x411)==x412));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x413 = UINT16_MAX;
	int8_t x414 = 0;
	int8_t x415 = INT8_MIN;
	volatile int64_t x416 = 555928523991439LL;
	volatile int32_t t97 = -44437;

	t97 = (x413-((x414%x415)==x416));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x419 = -29651266290999LL;
	int32_t x420 = INT32_MAX;
	volatile int32_t t98 = -77599;

	t98 = (x417-((x418%x419)==x420));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = -1;
	uint8_t x423 = UINT8_MAX;
	static int16_t x424 = -38;

	t99 = (x421-((x422%x423)==x424));

	if (t99 != -1) { NG(); } else { ; }
	
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

