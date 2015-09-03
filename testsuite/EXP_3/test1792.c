#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x9 = -1;
int8_t x16 = -1;
static uint64_t t4 = 378LLU;
static int32_t x30 = INT32_MIN;
int32_t x33 = INT32_MIN;
static int32_t x37 = -1708;
static uint16_t x40 = 20U;
int16_t x41 = -1;
uint8_t x42 = 10U;
uint64_t t10 = 430LLU;
int16_t x51 = 2;
int16_t x54 = INT16_MIN;
int64_t t13 = -2704759466977LL;
static volatile int16_t x63 = INT16_MIN;
volatile int32_t x67 = 22678;
int8_t x68 = INT8_MIN;
volatile int32_t t16 = 372;
int8_t x69 = INT8_MAX;
int8_t x70 = INT8_MAX;
uint64_t x75 = 4888431LLU;
volatile int16_t x79 = INT16_MIN;
int32_t x84 = 682;
static int8_t x89 = -1;
static int32_t x90 = INT32_MAX;
int32_t x93 = INT32_MIN;
static uint8_t x94 = UINT8_MAX;
static uint32_t x97 = UINT32_MAX;
int32_t x98 = 9;
int8_t x105 = -1;
int8_t x107 = INT8_MIN;
volatile uint32_t t26 = 5623763U;
volatile int8_t x110 = INT8_MIN;
static uint16_t x112 = UINT16_MAX;
static int32_t x115 = INT32_MIN;
int64_t x116 = INT64_MAX;
uint64_t t29 = 172420817015LLU;
int16_t x121 = INT16_MAX;
int16_t x122 = INT16_MAX;
static int8_t x123 = -61;
volatile int32_t t31 = -72716;
volatile uint32_t x136 = 13069468U;
volatile int32_t x138 = -1;
uint8_t x144 = UINT8_MAX;
uint16_t x150 = 0U;
volatile int8_t x155 = -1;
int64_t x159 = -6048LL;
uint8_t x161 = UINT8_MAX;
int16_t x168 = -1;
uint8_t x169 = 4U;
volatile int32_t x172 = -1;
volatile uint32_t x193 = 26759U;
int8_t x197 = INT8_MIN;
static uint8_t x203 = 12U;
static volatile uint32_t t50 = 629788U;
int64_t x209 = -1LL;
uint32_t x212 = UINT32_MAX;
uint32_t x213 = 5000U;
static int16_t x217 = -13;
static int64_t x218 = -62LL;
int32_t x228 = INT32_MIN;
uint8_t x232 = 1U;
static int32_t t57 = -23;
volatile uint32_t x233 = UINT32_MAX;
static volatile int64_t t58 = -725839191764LL;
uint32_t x238 = 136U;
int8_t x248 = INT8_MAX;
uint64_t t63 = 26673LLU;
int32_t x259 = 30624947;
int64_t x260 = -1LL;
uint32_t x269 = 35487568U;
volatile uint32_t x273 = 49U;
int64_t x279 = 22921558LL;
volatile uint32_t t70 = 3075399U;
volatile int64_t t71 = 1LL;
static int8_t x295 = INT8_MIN;
volatile uint32_t x296 = 0U;
static int8_t x298 = INT8_MIN;
int64_t x301 = -46623284691118435LL;
int32_t t76 = -352417;
static volatile uint64_t t77 = 14068538018LLU;
int32_t x313 = 98456526;
int32_t x317 = 6322;
static int8_t x318 = INT8_MIN;
uint16_t x325 = 14596U;
int32_t x334 = INT32_MAX;
int64_t t83 = -2LL;
uint32_t x338 = 1020U;
int8_t x339 = 7;
uint32_t x344 = 105U;
int64_t x347 = INT64_MAX;
static volatile uint32_t x350 = 176871U;
uint64_t x360 = UINT64_MAX;
volatile int64_t x368 = INT64_MAX;
int64_t t91 = -289517340349971094LL;
int8_t x376 = INT8_MAX;
int16_t x377 = INT16_MIN;
int64_t x379 = INT64_MIN;
uint64_t x381 = UINT64_MAX;
static int32_t x382 = INT32_MIN;
static volatile int32_t x392 = -1;
int32_t t97 = 15997;
int32_t x398 = INT32_MAX;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	uint32_t x2 = 53262U;
	static uint8_t x3 = 1U;
	int64_t x4 = -757880924771391690LL;
	volatile int64_t t0 = 23945964723499891LL;

	t0 = ((x1==x2)&(x3&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 3U;
	static int16_t x6 = INT16_MIN;
	uint64_t x7 = 2377LLU;
	volatile int32_t x8 = -106580096;
	uint64_t t1 = 60979288883181861LLU;

	t1 = ((x5==x6)&(x7&x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int64_t x11 = -1LL;
	int16_t x12 = INT16_MAX;
	volatile int64_t t2 = -481344LL;

	t2 = ((x9==x10)&(x11&x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 627916007U;
	int32_t x14 = INT32_MAX;
	uint64_t x15 = 357372LLU;
	volatile uint64_t t3 = 12044LLU;

	t3 = ((x13==x14)&(x15&x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = -1;
	int64_t x19 = -1LL;
	volatile uint64_t x20 = UINT64_MAX;

	t4 = ((x17==x18)&(x19&x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile uint8_t x22 = 0U;
	volatile uint8_t x23 = 1U;
	int64_t x24 = INT64_MAX;
	int64_t t5 = -2244906717714695191LL;

	t5 = ((x21==x22)&(x23&x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -226774;
	volatile int16_t x26 = INT16_MAX;
	volatile uint16_t x27 = UINT16_MAX;
	static int16_t x28 = -16;
	int32_t t6 = -4599;

	t6 = ((x25==x26)&(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 29343;
	int8_t x31 = 1;
	int64_t x32 = INT64_MAX;
	volatile int64_t t7 = -1353996534221LL;

	t7 = ((x29==x30)&(x31&x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	int32_t x35 = -1;
	static int64_t x36 = INT64_MIN;
	volatile int64_t t8 = -950308389LL;

	t8 = ((x33==x34)&(x35&x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = 1874102736052789248LLU;
	int16_t x39 = INT16_MIN;
	volatile int32_t t9 = 47228418;

	t9 = ((x37==x38)&(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x43 = 2LLU;
	int64_t x44 = -1LL;

	t10 = ((x41==x42)&(x43&x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static int64_t x46 = INT64_MIN;
	static uint8_t x47 = 8U;
	int64_t x48 = INT64_MIN;
	int64_t t11 = 2487919294705614LL;

	t11 = ((x45==x46)&(x47&x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = 594LL;
	static volatile int8_t x50 = 1;
	int16_t x52 = -13122;
	volatile int32_t t12 = -204;

	t12 = ((x49==x50)&(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 1U;
	int64_t x55 = -1168676209194598480LL;
	int8_t x56 = -11;

	t13 = ((x53==x54)&(x55&x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	int16_t x58 = INT16_MAX;
	int16_t x59 = -932;
	static int64_t x60 = INT64_MIN;
	int64_t t14 = 59761LL;

	t14 = ((x57==x58)&(x59&x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 5350LLU;
	uint16_t x62 = 2U;
	volatile uint64_t x64 = 1190845737242LLU;
	uint64_t t15 = 21LLU;

	t15 = ((x61==x62)&(x63&x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 121;
	uint16_t x66 = UINT16_MAX;

	t16 = ((x65==x66)&(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x71 = INT32_MAX;
	uint32_t x72 = 14U;
	static uint32_t t17 = 70885U;

	t17 = ((x69==x70)&(x71&x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	uint64_t x74 = 25746444LLU;
	int8_t x76 = 0;
	uint64_t t18 = 6LLU;

	t18 = ((x73==x74)&(x75&x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = 216745;
	volatile int8_t x80 = -1;
	int32_t t19 = -1644;

	t19 = ((x77==x78)&(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	static int64_t x82 = -324212338285415781LL;
	int16_t x83 = 0;
	int32_t t20 = -1;

	t20 = ((x81==x82)&(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MAX;
	uint64_t x87 = 255613979239LLU;
	uint8_t x88 = 13U;
	volatile uint64_t t21 = 3578451080LLU;

	t21 = ((x85==x86)&(x87&x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x91 = INT64_MAX;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = -1475863618271114221LL;

	t22 = ((x89==x90)&(x91&x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x95 = INT64_MIN;
	static int16_t x96 = -1;
	volatile int64_t t23 = 1606LL;

	t23 = ((x93==x94)&(x95&x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x99 = UINT32_MAX;
	uint8_t x100 = UINT8_MAX;
	uint32_t t24 = 23U;

	t24 = ((x97==x98)&(x99&x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	int32_t x102 = -1;
	int8_t x103 = 1;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = -5765;

	t25 = ((x101==x102)&(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MAX;
	uint32_t x108 = 10U;

	t26 = ((x105==x106)&(x107&x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	int64_t x111 = 1246960407665LL;
	static int64_t t27 = -6LL;

	t27 = ((x109==x110)&(x111&x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static int16_t x114 = INT16_MAX;
	volatile int64_t t28 = -3537581381LL;

	t28 = ((x113==x114)&(x115&x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	volatile int32_t x118 = -324291753;
	volatile uint64_t x119 = 41255869989666211LLU;
	int64_t x120 = -748LL;

	t29 = ((x117==x118)&(x119&x120));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x124 = INT32_MIN;
	static int32_t t30 = 88;

	t30 = ((x121==x122)&(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint8_t x126 = 2U;
	uint8_t x127 = 2U;
	volatile int8_t x128 = 1;

	t31 = ((x125==x126)&(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	uint32_t x130 = 41U;
	uint32_t x131 = 2932U;
	int16_t x132 = INT16_MIN;
	uint32_t t32 = 14U;

	t32 = ((x129==x130)&(x131&x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 699478043LLU;
	static volatile int16_t x134 = INT16_MIN;
	int16_t x135 = 2782;
	volatile uint32_t t33 = 1557683199U;

	t33 = ((x133==x134)&(x135&x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x139 = INT64_MAX;
	uint64_t x140 = UINT64_MAX;
	static volatile uint64_t t34 = 8106740LLU;

	t34 = ((x137==x138)&(x139&x140));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 22U;
	int32_t x142 = -5988;
	static int8_t x143 = -1;
	int32_t t35 = -87021302;

	t35 = ((x141==x142)&(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	int64_t x146 = INT64_MAX;
	volatile uint32_t x147 = UINT32_MAX;
	int16_t x148 = INT16_MIN;
	static volatile uint32_t t36 = 29982U;

	t36 = ((x145==x146)&(x147&x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	uint16_t x151 = 7U;
	volatile int8_t x152 = INT8_MAX;
	static volatile int32_t t37 = 22665;

	t37 = ((x149==x150)&(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MIN;
	static int32_t x154 = INT32_MAX;
	int64_t x156 = 34099933762643LL;
	static int64_t t38 = 270270317110LL;

	t38 = ((x153==x154)&(x155&x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	static volatile int16_t x158 = INT16_MIN;
	volatile int16_t x160 = -120;
	volatile int64_t t39 = 319258003307LL;

	t39 = ((x157==x158)&(x159&x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = 50U;
	volatile int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;
	int64_t t40 = 16035905450LL;

	t40 = ((x161==x162)&(x163&x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	static uint16_t x166 = UINT16_MAX;
	volatile int64_t x167 = INT64_MIN;
	int64_t t41 = 24303LL;

	t41 = ((x165==x166)&(x167&x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = 0U;
	uint8_t x171 = 38U;
	volatile int32_t t42 = -213262580;

	t42 = ((x169==x170)&(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 0;
	int16_t x174 = 0;
	int32_t x175 = 0;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 0;

	t43 = ((x173==x174)&(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -67925LL;
	int8_t x178 = -5;
	volatile uint32_t x179 = 6038U;
	uint16_t x180 = 795U;
	volatile uint32_t t44 = 34U;

	t44 = ((x177==x178)&(x179&x180));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -4431230841LL;
	uint16_t x182 = 760U;
	static int8_t x183 = -1;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t45 = -443876288;

	t45 = ((x181==x182)&(x183&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	uint16_t x186 = 1099U;
	int16_t x187 = -7;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t46 = 31190079;

	t46 = ((x185==x186)&(x187&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 61280514U;
	static uint32_t x190 = 351207427U;
	int32_t x191 = INT32_MIN;
	static int32_t x192 = -426186376;
	volatile int32_t t47 = 3;

	t47 = ((x189==x190)&(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = 130977510857LL;
	int64_t x195 = INT64_MAX;
	int32_t x196 = 919127795;
	volatile int64_t t48 = -999559LL;

	t48 = ((x193==x194)&(x195&x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = 48;
	uint32_t x199 = 260624899U;
	volatile uint16_t x200 = 1U;
	volatile uint32_t t49 = 348591251U;

	t49 = ((x197==x198)&(x199&x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	int16_t x202 = -1;
	static uint32_t x204 = 566457U;

	t50 = ((x201==x202)&(x203&x204));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 50148738235LLU;
	uint32_t x206 = 40U;
	int64_t x207 = -2024LL;
	static int16_t x208 = INT16_MAX;
	int64_t t51 = -1563305685066LL;

	t51 = ((x205==x206)&(x207&x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = -1LL;
	int32_t x211 = INT32_MAX;
	static volatile uint32_t t52 = 1U;

	t52 = ((x209==x210)&(x211&x212));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = -314533LL;
	volatile int32_t x215 = -131619964;
	int32_t x216 = INT32_MIN;
	int32_t t53 = 29;

	t53 = ((x213==x214)&(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x219 = INT32_MIN;
	uint64_t x220 = 66207183LLU;
	volatile uint64_t t54 = 427LLU;

	t54 = ((x217==x218)&(x219&x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 4U;
	int64_t x222 = INT64_MAX;
	int64_t x223 = 1728256633050LL;
	static int32_t x224 = INT32_MIN;
	volatile int64_t t55 = 4590306982049549304LL;

	t55 = ((x221==x222)&(x223&x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 1373LL;
	int16_t x226 = 1;
	uint16_t x227 = 0U;
	int32_t t56 = -119844;

	t56 = ((x225==x226)&(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MIN;
	int16_t x231 = 0;

	t57 = ((x229==x230)&(x231&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -1LL;
	static int8_t x235 = INT8_MAX;
	volatile int64_t x236 = INT64_MIN;

	t58 = ((x233==x234)&(x235&x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -81559LL;
	int8_t x239 = INT8_MAX;
	uint16_t x240 = UINT16_MAX;
	int32_t t59 = -78;

	t59 = ((x237==x238)&(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 6250777492312081733LLU;
	int8_t x242 = -26;
	volatile uint64_t x243 = 1LLU;
	uint64_t x244 = 415009951825511565LLU;
	static volatile uint64_t t60 = 1290LLU;

	t60 = ((x241==x242)&(x243&x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = -14LL;
	int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	static int32_t t61 = -3;

	t61 = ((x245==x246)&(x247&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	uint8_t x250 = 3U;
	static int16_t x251 = -1;
	static int32_t x252 = INT32_MIN;
	int32_t t62 = 91;

	t62 = ((x249==x250)&(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 26U;
	int16_t x254 = -1;
	volatile uint64_t x255 = 226400701045952LLU;
	volatile int8_t x256 = INT8_MIN;

	t63 = ((x253==x254)&(x255&x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	static int16_t x258 = -4;
	int64_t t64 = -13LL;

	t64 = ((x257==x258)&(x259&x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	static int8_t x262 = -17;
	uint8_t x263 = UINT8_MAX;
	uint64_t x264 = 14150LLU;
	volatile uint64_t t65 = 20240159930LLU;

	t65 = ((x261==x262)&(x263&x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = 9;
	uint32_t x266 = UINT32_MAX;
	static int32_t x267 = 1;
	volatile int64_t x268 = -486997940186774181LL;
	volatile int64_t t66 = -545615LL;

	t66 = ((x265==x266)&(x267&x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x270 = 1004268123430882493LLU;
	uint32_t x271 = UINT32_MAX;
	static int16_t x272 = INT16_MAX;
	uint32_t t67 = 8160594U;

	t67 = ((x269==x270)&(x271&x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = 11LL;
	static uint32_t x275 = UINT32_MAX;
	int16_t x276 = 8;
	uint32_t t68 = 39912735U;

	t68 = ((x273==x274)&(x275&x276));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int16_t x278 = 540;
	int64_t x280 = INT64_MAX;
	static int64_t t69 = 1193311049101077LL;

	t69 = ((x277==x278)&(x279&x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = UINT32_MAX;
	int64_t x282 = INT64_MAX;
	int32_t x283 = -1;
	static volatile uint32_t x284 = UINT32_MAX;

	t70 = ((x281==x282)&(x283&x284));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	int16_t x286 = INT16_MIN;
	volatile int8_t x287 = 1;
	volatile int64_t x288 = INT64_MIN;

	t71 = ((x285==x286)&(x287&x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = UINT8_MAX;
	volatile int16_t x290 = 0;
	int8_t x291 = 0;
	int16_t x292 = -9;
	int32_t t72 = 117;

	t72 = ((x289==x290)&(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 11029U;
	int8_t x294 = INT8_MIN;
	static volatile uint32_t t73 = 17U;

	t73 = ((x293==x294)&(x295&x296));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x297 = 46;
	volatile uint32_t x299 = 15092U;
	int16_t x300 = -1;
	uint32_t t74 = 837599215U;

	t74 = ((x297==x298)&(x299&x300));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = 27;
	volatile int8_t x303 = 26;
	uint16_t x304 = 9U;
	volatile int32_t t75 = 14228;

	t75 = ((x301==x302)&(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -13;
	uint64_t x306 = 17658546LLU;
	int16_t x307 = -3211;
	int32_t x308 = 23855209;

	t76 = ((x305==x306)&(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 1394164737LLU;
	static volatile int16_t x310 = -346;
	uint16_t x311 = UINT16_MAX;
	uint64_t x312 = 11LLU;

	t77 = ((x309==x310)&(x311&x312));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x314 = UINT64_MAX;
	volatile uint8_t x315 = 7U;
	int8_t x316 = -1;
	int32_t t78 = -168307199;

	t78 = ((x313==x314)&(x315&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x319 = 53586902539271LL;
	int8_t x320 = 3;
	volatile int64_t t79 = -2503917113136601587LL;

	t79 = ((x317==x318)&(x319&x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = UINT32_MAX;
	static uint32_t x322 = UINT32_MAX;
	int32_t x323 = INT32_MAX;
	int32_t x324 = INT32_MIN;
	int32_t t80 = 404362;

	t80 = ((x321==x322)&(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	int32_t x328 = -1;
	volatile int64_t t81 = 49447486695LL;

	t81 = ((x325==x326)&(x327&x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 1U;
	static int32_t x330 = INT32_MAX;
	uint16_t x331 = 15U;
	volatile int8_t x332 = INT8_MAX;
	int32_t t82 = 137;

	t82 = ((x329==x330)&(x331&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = 2;
	int32_t x335 = 7811;
	int64_t x336 = INT64_MAX;

	t83 = ((x333==x334)&(x335&x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	int16_t x340 = INT16_MAX;
	volatile int32_t t84 = -72833178;

	t84 = ((x337==x338)&(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	int64_t x342 = INT64_MAX;
	static int16_t x343 = INT16_MAX;
	volatile uint32_t t85 = 1U;

	t85 = ((x341==x342)&(x343&x344));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	int64_t x346 = -1LL;
	volatile uint32_t x348 = 17U;
	int64_t t86 = 242359505130364LL;

	t86 = ((x345==x346)&(x347&x348));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 111U;
	int8_t x351 = -33;
	static int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -422853682;

	t87 = ((x349==x350)&(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int64_t x354 = INT64_MAX;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = -1;
	static uint64_t t88 = 12160LLU;

	t88 = ((x353==x354)&(x355&x356));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	static int64_t x358 = -1LL;
	int8_t x359 = INT8_MIN;
	volatile uint64_t t89 = 2271064952883584809LLU;

	t89 = ((x357==x358)&(x359&x360));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	volatile int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -168014608;

	t90 = ((x361==x362)&(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x365 = INT16_MIN;
	uint16_t x366 = 1684U;
	int32_t x367 = INT32_MIN;

	t91 = ((x365==x366)&(x367&x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = -1;
	uint32_t x371 = 0U;
	int8_t x372 = INT8_MIN;
	volatile uint32_t t92 = 5307967U;

	t92 = ((x369==x370)&(x371&x372));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -11;
	int64_t x374 = -256117448884322364LL;
	static volatile int64_t x375 = INT64_MIN;
	int64_t t93 = -3005419886605127LL;

	t93 = ((x373==x374)&(x375&x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x378 = INT16_MIN;
	static int8_t x380 = -23;
	volatile int64_t t94 = -381LL;

	t94 = ((x377==x378)&(x379&x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x383 = -1;
	volatile int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -69090;

	t95 = ((x381==x382)&(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -187;
	volatile int8_t x386 = INT8_MAX;
	volatile int16_t x387 = -1;
	int64_t x388 = INT64_MIN;
	volatile int64_t t96 = -617829327LL;

	t96 = ((x385==x386)&(x387&x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MIN;
	static volatile int16_t x391 = INT16_MAX;

	t97 = ((x389==x390)&(x391&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 18961U;
	uint32_t x394 = 221570256U;
	volatile int8_t x395 = INT8_MIN;
	int32_t x396 = 50390;
	volatile int32_t t98 = 5710;

	t98 = ((x393==x394)&(x395&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MAX;
	int16_t x399 = INT16_MIN;
	volatile int8_t x400 = -1;
	static int32_t t99 = 4;

	t99 = ((x397==x398)&(x399&x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

