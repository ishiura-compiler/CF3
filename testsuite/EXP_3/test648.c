#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 175499472663378LLU;
static int64_t x9 = INT64_MIN;
int16_t x11 = -2269;
volatile int8_t x12 = 24;
uint32_t x13 = UINT32_MAX;
volatile int16_t x18 = -19;
uint32_t t4 = 1543596U;
int16_t x38 = -5;
volatile int64_t t9 = INT64_MIN;
int32_t x46 = INT32_MIN;
volatile uint64_t x54 = UINT64_MAX;
uint64_t x57 = 278LLU;
volatile uint8_t x59 = 1U;
uint32_t x60 = 45U;
uint64_t t14 = 8785230533025775949LLU;
int16_t x62 = INT16_MIN;
static int8_t x73 = -1;
int8_t x75 = -1;
volatile uint64_t t17 = 12825296761946LLU;
int32_t x81 = -11805;
int8_t x87 = 2;
int32_t t20 = 12;
static uint32_t x89 = 476101739U;
uint16_t x91 = UINT16_MAX;
int64_t t21 = -231199798948LL;
static volatile int64_t x93 = INT64_MIN;
uint64_t x101 = 750150910323340576LLU;
static int16_t x103 = -1;
int8_t x104 = INT8_MIN;
int32_t x132 = -1;
volatile int64_t t30 = -204452LL;
int64_t x134 = INT64_MIN;
int8_t x136 = INT8_MAX;
uint32_t x142 = 7421679U;
uint32_t t33 = 13204713U;
uint8_t x149 = 94U;
static int64_t x151 = INT64_MIN;
int64_t t36 = 151LL;
volatile uint64_t x158 = 5502906056617109LLU;
int64_t x164 = -1LL;
volatile uint64_t t39 = 5336LLU;
volatile int64_t x172 = -30LL;
volatile int8_t x182 = 1;
uint64_t x184 = 97638220942LLU;
uint64_t x191 = 82320149LLU;
volatile uint64_t t48 = 253741735274121LLU;
int64_t x205 = INT64_MAX;
uint32_t x212 = 75530813U;
static uint32_t x221 = 2978U;
int16_t x222 = -2375;
int16_t x225 = INT16_MIN;
int8_t x228 = -23;
volatile int64_t t52 = -506669020119437982LL;
int32_t x237 = 13;
static int8_t x244 = INT8_MIN;
static volatile uint64_t x245 = 535LLU;
int32_t x248 = INT32_MIN;
volatile int32_t x249 = INT32_MIN;
volatile int64_t t59 = 1243215687839LL;
int64_t x257 = INT64_MAX;
static volatile uint8_t x258 = 0U;
int32_t x259 = INT32_MIN;
int16_t x261 = INT16_MAX;
static int64_t x264 = -1LL;
static int16_t x268 = -1;
volatile uint64_t x271 = UINT64_MAX;
static int32_t x274 = INT32_MIN;
uint16_t x275 = 115U;
static volatile int32_t t64 = 2252;
volatile int16_t x283 = -20;
int32_t x284 = INT32_MIN;
int16_t x287 = INT16_MIN;
int16_t x288 = INT16_MIN;
int16_t x290 = INT16_MIN;
static volatile int16_t x292 = INT16_MIN;
uint32_t x304 = 3827479U;
volatile int64_t t71 = 50633444780291675LL;
uint32_t x311 = 2U;
volatile uint64_t t73 = 8LLU;
uint64_t t74 = 370699834118LLU;
int64_t x324 = INT64_MAX;
int8_t x326 = INT8_MAX;
uint64_t t77 = 86388957LLU;
int8_t x329 = -23;
int64_t t78 = 1LL;
static volatile int64_t x340 = 58669LL;
static int8_t x341 = INT8_MAX;
int8_t x352 = INT8_MIN;
int8_t x354 = -1;
int16_t x358 = INT16_MIN;
uint64_t x361 = UINT64_MAX;
uint64_t t86 = 692037249747698259LLU;
volatile int32_t x365 = -1;
uint32_t x367 = UINT32_MAX;
volatile int64_t t87 = 82652389001745LL;
int64_t t88 = 437757633LL;
int32_t x373 = INT32_MAX;
int16_t x374 = INT16_MIN;
int64_t x382 = 81425406LL;
static int16_t x384 = 1096;
uint8_t x397 = UINT8_MAX;
static int32_t x398 = 70377;
uint32_t x400 = 24U;
volatile uint32_t t93 = 562838U;
int32_t x402 = INT32_MIN;
static int32_t x406 = INT32_MAX;
int16_t x410 = -1;
volatile uint8_t x413 = 6U;
uint64_t t98 = 297481459966LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	volatile uint64_t x4 = 237LLU;

	t0 = ((x1&x2)&(x3/x4));

	if (t0 != 2147483648LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MIN;
	int64_t x7 = -51293695943901LL;
	static uint32_t x8 = UINT32_MAX;
	volatile int64_t t1 = INT64_MIN;

	t1 = ((x5&x6)&(x7/x8));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x10 = -1;
	static volatile int64_t t2 = INT64_MIN;

	t2 = ((x9&x10)&(x11/x12));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -53;
	volatile int32_t x15 = 0;
	int64_t x16 = INT64_MIN;
	int64_t t3 = 1144381940732299491LL;

	t3 = ((x13&x14)&(x15/x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 35U;
	int32_t x19 = -1;
	uint32_t x20 = 93461028U;

	t4 = ((x17&x18)&(x19/x20));

	if (t4 != 33U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 40U;
	uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MAX;
	uint16_t x24 = UINT16_MAX;
	int64_t t5 = -50869991180LL;

	t5 = ((x21&x22)&(x23/x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int64_t x26 = INT64_MIN;
	int32_t x27 = INT32_MIN;
	volatile int64_t x28 = 364LL;
	volatile int64_t t6 = INT64_MIN;

	t6 = ((x25&x26)&(x27/x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	static volatile uint16_t x30 = 1890U;
	uint16_t x31 = UINT16_MAX;
	static int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -5624601;

	t7 = ((x29&x30)&(x31/x32));

	if (t7 != 1536) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	uint32_t x34 = 224024328U;
	int8_t x35 = -1;
	int64_t x36 = INT64_MIN;
	int64_t t8 = 23172LL;

	t8 = ((x33&x34)&(x35/x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile int32_t x39 = INT32_MIN;
	uint8_t x40 = 6U;

	t9 = ((x37&x38)&(x39/x40));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = 3U;
	int16_t x43 = 156;
	volatile int16_t x44 = INT16_MIN;
	volatile uint32_t t10 = 6924507U;

	t10 = ((x41&x42)&(x43/x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x47 = INT64_MIN;
	uint8_t x48 = UINT8_MAX;
	volatile uint64_t t11 = 6995644561LLU;

	t11 = ((x45&x46)&(x47/x48));

	if (t11 != 18410573985151451136LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	uint64_t x50 = UINT64_MAX;
	static int8_t x51 = -7;
	int8_t x52 = -1;
	static uint64_t t12 = 56250261819371LLU;

	t12 = ((x49&x50)&(x51/x52));

	if (t12 != 7LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 4U;
	int64_t x55 = -2435639980515809LL;
	static int8_t x56 = INT8_MIN;
	uint64_t t13 = 2234872137373406349LLU;

	t13 = ((x53&x54)&(x55/x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = INT8_MAX;

	t14 = ((x57&x58)&(x59/x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 0U;
	int16_t x63 = INT16_MIN;
	static uint8_t x64 = UINT8_MAX;
	static volatile int32_t t15 = -98;

	t15 = ((x61&x62)&(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int8_t x66 = 15;
	int8_t x67 = INT8_MIN;
	static int16_t x68 = INT16_MIN;
	int32_t t16 = -19738;

	t16 = ((x65&x66)&(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x74 = 1735201041325121446LLU;
	int64_t x76 = INT64_MIN;

	t17 = ((x73&x74)&(x75/x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x77 = INT8_MIN;
	int8_t x78 = -1;
	int8_t x79 = 1;
	int64_t x80 = INT64_MAX;
	volatile int64_t t18 = -819LL;

	t18 = ((x77&x78)&(x79/x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x82 = INT64_MIN;
	volatile int16_t x83 = INT16_MAX;
	int8_t x84 = -1;
	volatile int64_t t19 = INT64_MIN;

	t19 = ((x81&x82)&(x83/x84));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	int32_t x86 = INT32_MAX;
	int32_t x88 = INT32_MIN;

	t20 = ((x85&x86)&(x87/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x90 = 1753;
	int64_t x92 = INT64_MIN;

	t21 = ((x89&x90)&(x91/x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x94 = UINT8_MAX;
	uint8_t x95 = 1U;
	int32_t x96 = 2;
	volatile int64_t t22 = 1674LL;

	t22 = ((x93&x94)&(x95/x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = UINT64_MAX;
	volatile int64_t x98 = INT64_MAX;
	int64_t x99 = -10251151LL;
	uint16_t x100 = 8967U;
	uint64_t t23 = 20LLU;

	t23 = ((x97&x98)&(x99/x100));

	if (t23 != 9223372036854774665LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x102 = -1;
	uint64_t t24 = 380317LLU;

	t24 = ((x101&x102)&(x103/x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 3U;
	static int32_t x106 = INT32_MIN;
	uint32_t x107 = 694546U;
	volatile int32_t x108 = -1;
	uint32_t t25 = 36992533U;

	t25 = ((x105&x106)&(x107/x108));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = INT32_MAX;
	int64_t x110 = -1LL;
	volatile uint8_t x111 = UINT8_MAX;
	volatile int16_t x112 = 2936;
	volatile int64_t t26 = -64453380005LL;

	t26 = ((x109&x110)&(x111/x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = 1078153;
	int8_t x114 = INT8_MIN;
	int16_t x115 = -55;
	volatile uint64_t x116 = 572239LLU;
	volatile uint64_t t27 = 2393026842058999LLU;

	t27 = ((x113&x114)&(x115/x116));

	if (t27 != 20864LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MIN;
	static uint16_t x119 = UINT16_MAX;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t28 = 247406297991285978LL;

	t28 = ((x117&x118)&(x119/x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MAX;
	int64_t x122 = -1LL;
	int16_t x123 = INT16_MIN;
	int16_t x124 = -140;
	volatile int64_t t29 = 3391298121762344LL;

	t29 = ((x121&x122)&(x123/x124));

	if (t29 != 234LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = 5454636LL;
	int16_t x130 = -3272;
	volatile int8_t x131 = INT8_MAX;

	t30 = ((x129&x130)&(x131/x132));

	if (t30 != 5452544LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x135 = UINT8_MAX;
	volatile int64_t t31 = 559191259610568983LL;

	t31 = ((x133&x134)&(x135/x136));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x137 = 755U;
	volatile uint16_t x138 = 10U;
	static int8_t x139 = INT8_MIN;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t32 = 13345;

	t32 = ((x137&x138)&(x139/x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int32_t x143 = -1;
	int16_t x144 = INT16_MIN;

	t33 = ((x141&x142)&(x143/x144));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = 0;
	volatile int8_t x146 = INT8_MIN;
	uint8_t x147 = 111U;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t34 = 136U;

	t34 = ((x145&x146)&(x147/x148));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x150 = UINT8_MAX;
	int64_t x152 = 532LL;
	volatile int64_t t35 = 1691940016008666026LL;

	t35 = ((x149&x150)&(x151/x152));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	int64_t x154 = -1LL;
	int16_t x155 = INT16_MIN;
	static uint32_t x156 = 87264U;

	t36 = ((x153&x154)&(x155/x156));

	if (t36 != 49217LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MAX;
	int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	volatile uint64_t t37 = 97LLU;

	t37 = ((x157&x158)&(x159/x160));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = 192134665210118282LL;
	int8_t x162 = -1;
	volatile int32_t x163 = INT32_MIN;
	volatile int64_t t38 = -55LL;

	t38 = ((x161&x162)&(x163/x164));

	if (t38 != 2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x166 = 290363044U;
	uint64_t x167 = UINT64_MAX;
	static volatile int32_t x168 = -326805733;

	t39 = ((x165&x166)&(x167/x168));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = UINT8_MAX;
	uint32_t x170 = 357269549U;
	static int8_t x171 = 1;
	int64_t t40 = 1573LL;

	t40 = ((x169&x170)&(x171/x172));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = 0;
	int8_t x174 = INT8_MIN;
	volatile int16_t x175 = -1;
	int16_t x176 = INT16_MAX;
	volatile int32_t t41 = -298;

	t41 = ((x173&x174)&(x175/x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 7243138532364045LLU;
	static volatile int32_t x178 = INT32_MIN;
	volatile int8_t x179 = -1;
	int64_t x180 = INT64_MAX;
	uint64_t t42 = 0LLU;

	t42 = ((x177&x178)&(x179/x180));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 4013U;
	volatile uint8_t x183 = 0U;
	uint64_t t43 = 6271LLU;

	t43 = ((x181&x182)&(x183/x184));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -1;
	static int16_t x186 = -1;
	static uint64_t x187 = UINT64_MAX;
	uint16_t x188 = 71U;
	uint64_t t44 = 652654107511524LLU;

	t44 = ((x185&x186)&(x187/x188));

	if (t44 != 259813296812810586LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = 1963877;
	int32_t x190 = INT32_MAX;
	volatile int16_t x192 = -1;
	volatile uint64_t t45 = 9031457LLU;

	t45 = ((x189&x190)&(x191/x192));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = 117319;
	uint64_t x194 = UINT64_MAX;
	uint16_t x195 = 0U;
	int64_t x196 = INT64_MIN;
	static volatile uint64_t t46 = 13861LLU;

	t46 = ((x193&x194)&(x195/x196));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	int32_t x198 = -1;
	volatile int64_t x199 = INT64_MAX;
	volatile uint32_t x200 = 111439441U;
	int64_t t47 = -4982218LL;

	t47 = ((x197&x198)&(x199/x200));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x201 = UINT32_MAX;
	int32_t x202 = INT32_MIN;
	uint16_t x203 = 0U;
	volatile uint64_t x204 = 21LLU;

	t48 = ((x201&x202)&(x203/x204));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x206 = INT64_MAX;
	uint16_t x207 = 917U;
	static int8_t x208 = -6;
	volatile int64_t t49 = 463939936LL;

	t49 = ((x205&x206)&(x207/x208));

	if (t49 != 9223372036854775656LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = INT16_MAX;
	static int8_t x210 = INT8_MIN;
	static int32_t x211 = INT32_MIN;
	volatile uint32_t t50 = 570813U;

	t50 = ((x209&x210)&(x211/x212));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x223 = INT8_MIN;
	uint16_t x224 = 3U;
	volatile uint32_t t51 = 54515071U;

	t51 = ((x221&x222)&(x223/x224));

	if (t51 != 640U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x226 = INT64_MAX;
	volatile int16_t x227 = INT16_MIN;

	t52 = ((x225&x226)&(x227/x228));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = -52;
	uint8_t x231 = 26U;
	static int64_t x232 = -1LL;
	int64_t t53 = 26LL;

	t53 = ((x229&x230)&(x231/x232));

	if (t53 != 196LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = INT32_MIN;
	uint16_t x234 = UINT16_MAX;
	uint32_t x235 = 4867317U;
	uint8_t x236 = 87U;
	volatile uint32_t t54 = 3465U;

	t54 = ((x233&x234)&(x235/x236));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x238 = 273U;
	static uint16_t x239 = UINT16_MAX;
	int64_t x240 = -130257107LL;
	int64_t t55 = -14318LL;

	t55 = ((x237&x238)&(x239/x240));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = -616878529;
	int8_t x242 = INT8_MIN;
	static uint16_t x243 = 144U;
	volatile int32_t t56 = 5829729;

	t56 = ((x241&x242)&(x243/x244));

	if (t56 != -616878592) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x246 = INT16_MAX;
	int64_t x247 = 672986093LL;
	uint64_t t57 = 495952734LLU;

	t57 = ((x245&x246)&(x247/x248));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x250 = INT8_MAX;
	uint16_t x251 = 726U;
	int8_t x252 = -1;
	volatile int32_t t58 = -5;

	t58 = ((x249&x250)&(x251/x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x253 = -128824;
	int64_t x254 = INT64_MIN;
	int32_t x255 = 62;
	volatile int32_t x256 = INT32_MIN;

	t59 = ((x253&x254)&(x255/x256));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x260 = INT8_MIN;
	volatile int64_t t60 = -1143837335963105413LL;

	t60 = ((x257&x258)&(x259/x260));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x262 = 4044U;
	static int8_t x263 = -37;
	static int64_t t61 = -1LL;

	t61 = ((x261&x262)&(x263/x264));

	if (t61 != 4LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = -159;
	int64_t x266 = INT64_MIN;
	uint8_t x267 = UINT8_MAX;
	volatile int64_t t62 = INT64_MIN;

	t62 = ((x265&x266)&(x267/x268));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = UINT64_MAX;
	static int32_t x270 = INT32_MIN;
	uint8_t x272 = 7U;
	volatile uint64_t t63 = 2323173487257LLU;

	t63 = ((x269&x270)&(x271/x272));

	if (t63 != 2635249153080295424LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MAX;
	uint16_t x276 = 3U;

	t64 = ((x273&x274)&(x275/x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = INT8_MIN;
	uint64_t x279 = 943858459400LLU;
	int8_t x280 = -1;
	volatile uint64_t t65 = 2450095LLU;

	t65 = ((x277&x278)&(x279/x280));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = UINT8_MAX;
	int64_t x282 = 428451156435538LL;
	int64_t t66 = 41747508736106LL;

	t66 = ((x281&x282)&(x283/x284));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x285 = UINT16_MAX;
	uint64_t x286 = 1974035LLU;
	static uint64_t t67 = 3938365742LLU;

	t67 = ((x285&x286)&(x287/x288));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	static volatile int16_t x291 = -722;
	static int32_t t68 = 1541700;

	t68 = ((x289&x290)&(x291/x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = 8335U;
	int8_t x294 = -1;
	uint64_t x295 = 0LLU;
	static volatile int64_t x296 = INT64_MIN;
	static volatile uint64_t t69 = 8LLU;

	t69 = ((x293&x294)&(x295/x296));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x297 = 6;
	uint8_t x298 = 88U;
	volatile int64_t x299 = INT64_MAX;
	static volatile int16_t x300 = -10364;
	static int64_t t70 = 1LL;

	t70 = ((x297&x298)&(x299/x300));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = -16670667610983LL;
	static uint8_t x303 = UINT8_MAX;

	t71 = ((x301&x302)&(x303/x304));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = INT32_MIN;
	static volatile int8_t x306 = INT8_MIN;
	int16_t x307 = INT16_MAX;
	static volatile uint8_t x308 = 5U;
	static volatile int32_t t72 = -60431;

	t72 = ((x305&x306)&(x307/x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = 53U;
	volatile uint64_t x310 = UINT64_MAX;
	volatile uint64_t x312 = 188250210LLU;

	t73 = ((x309&x310)&(x311/x312));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x313 = 3U;
	static uint64_t x314 = UINT64_MAX;
	static uint8_t x315 = UINT8_MAX;
	static int64_t x316 = -166530255349164LL;

	t74 = ((x313&x314)&(x315/x316));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = 12U;
	int16_t x318 = -105;
	uint64_t x319 = UINT64_MAX;
	volatile uint32_t x320 = UINT32_MAX;
	uint64_t t75 = 258LLU;

	t75 = ((x317&x318)&(x319/x320));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x321 = UINT8_MAX;
	int8_t x322 = -40;
	static uint32_t x323 = UINT32_MAX;
	static int64_t t76 = 46355717777672LL;

	t76 = ((x321&x322)&(x323/x324));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x327 = -1LL;
	int16_t x328 = INT16_MIN;

	t77 = ((x325&x326)&(x327/x328));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x330 = UINT16_MAX;
	static int32_t x331 = 670;
	int64_t x332 = -1LL;

	t78 = ((x329&x330)&(x331/x332));

	if (t78 != 64864LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x333 = 47426U;
	int64_t x334 = 459225379427LL;
	int16_t x335 = INT16_MIN;
	volatile int8_t x336 = -1;
	volatile int64_t t79 = 1LL;

	t79 = ((x333&x334)&(x335/x336));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MAX;
	static volatile uint32_t x338 = 186413305U;
	uint16_t x339 = 3993U;
	int64_t t80 = -2377003411833LL;

	t80 = ((x337&x338)&(x339/x340));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x342 = UINT32_MAX;
	int32_t x343 = INT32_MIN;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t81 = 24770LLU;

	t81 = ((x341&x342)&(x343/x344));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = -382590670607LL;
	volatile uint8_t x346 = 3U;
	static int16_t x347 = -1;
	static int64_t x348 = -750756LL;
	volatile int64_t t82 = -1LL;

	t82 = ((x345&x346)&(x347/x348));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x349 = 83U;
	int32_t x350 = INT32_MIN;
	static volatile uint32_t x351 = UINT32_MAX;
	volatile uint32_t t83 = 3915U;

	t83 = ((x349&x350)&(x351/x352));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x353 = 7034U;
	int16_t x355 = INT16_MIN;
	static volatile uint32_t x356 = UINT32_MAX;
	uint32_t t84 = 29387U;

	t84 = ((x353&x354)&(x355/x356));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x357 = 1922U;
	int16_t x359 = -11;
	static uint64_t x360 = 247621328705LLU;
	static volatile uint64_t t85 = 888791118332LLU;

	t85 = ((x357&x358)&(x359/x360));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x362 = INT16_MAX;
	int16_t x363 = INT16_MIN;
	int32_t x364 = 227097791;

	t86 = ((x361&x362)&(x363/x364));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x366 = INT16_MAX;
	int64_t x368 = -1LL;

	t87 = ((x365&x366)&(x367/x368));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MAX;
	volatile uint8_t x371 = UINT8_MAX;
	static uint8_t x372 = 120U;

	t88 = ((x369&x370)&(x371/x372));

	if (t88 != 2LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x375 = 0;
	uint8_t x376 = 65U;
	int32_t t89 = 3672135;

	t89 = ((x373&x374)&(x375/x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x377 = -13;
	int8_t x378 = -1;
	volatile int8_t x379 = INT8_MAX;
	uint16_t x380 = 131U;
	int32_t t90 = -182;

	t90 = ((x377&x378)&(x379/x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = UINT16_MAX;
	int32_t x383 = -1;
	volatile int64_t t91 = 425LL;

	t91 = ((x381&x382)&(x383/x384));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x393 = -1;
	volatile int32_t x394 = INT32_MIN;
	int8_t x395 = -14;
	static uint8_t x396 = 3U;
	int32_t t92 = INT32_MIN;

	t92 = ((x393&x394)&(x395/x396));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x399 = 43788989U;

	t93 = ((x397&x398)&(x399/x400));

	if (t93 != 9U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x401 = 83LLU;
	static int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MAX;
	volatile uint64_t t94 = 1647LLU;

	t94 = ((x401&x402)&(x403/x404));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = -1;
	int32_t x407 = -504178;
	int16_t x408 = -8;
	int32_t t95 = -2622;

	t95 = ((x405&x406)&(x407/x408));

	if (t95 != 63022) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = -6;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = -1;
	volatile int32_t t96 = -67;

	t96 = ((x409&x410)&(x411/x412));

	if (t96 != -65536) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x414 = 0LL;
	int32_t x415 = INT32_MIN;
	int64_t x416 = -1LL;
	int64_t t97 = -58LL;

	t97 = ((x413&x414)&(x415/x416));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x417 = INT32_MIN;
	int16_t x418 = INT16_MAX;
	int16_t x419 = 1;
	static uint64_t x420 = 25LLU;

	t98 = ((x417&x418)&(x419/x420));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = 3LLU;
	int64_t x422 = -145264LL;
	uint64_t x423 = 2811271546753576LLU;
	int16_t x424 = INT16_MIN;
	uint64_t t99 = 546287LLU;

	t99 = ((x421&x422)&(x423/x424));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

