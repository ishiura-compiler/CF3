#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = INT64_MIN;
uint32_t x10 = 520U;
static int64_t x12 = 18537389450363564LL;
static uint16_t x13 = 545U;
static volatile int32_t x18 = -23257;
int16_t x19 = -1;
static volatile int64_t t4 = 610LL;
int8_t x24 = INT8_MAX;
int8_t x28 = INT8_MIN;
uint8_t x29 = UINT8_MAX;
uint64_t x30 = 7LLU;
uint32_t x35 = UINT32_MAX;
int8_t x43 = INT8_MAX;
int8_t x45 = INT8_MAX;
int8_t x50 = INT8_MAX;
static int8_t x64 = INT8_MIN;
int16_t x82 = -5662;
volatile int64_t x83 = INT64_MIN;
int32_t x91 = INT32_MIN;
static int16_t x92 = -473;
int32_t x94 = INT32_MAX;
static uint32_t x102 = UINT32_MAX;
uint32_t x106 = 12486120U;
int32_t x111 = INT32_MAX;
volatile int64_t t26 = 30852LL;
static int32_t x114 = 0;
int16_t x115 = INT16_MAX;
volatile int32_t x121 = INT32_MAX;
volatile int16_t x125 = -1;
static uint8_t x137 = UINT8_MAX;
volatile uint64_t t33 = 23873537LLU;
uint64_t x142 = 31665553LLU;
static uint16_t x143 = 15839U;
int16_t x153 = INT16_MIN;
volatile int32_t t37 = 20775154;
volatile int64_t x159 = -1LL;
int64_t x160 = INT64_MIN;
static int32_t x161 = INT32_MAX;
static int16_t x166 = -1;
static int8_t x172 = INT8_MAX;
static volatile uint8_t x182 = 1U;
static volatile int64_t x183 = INT64_MAX;
int16_t x184 = INT16_MAX;
static int64_t t44 = 44273376288230618LL;
int64_t x195 = -1LL;
uint16_t x196 = 3U;
uint16_t x198 = 34U;
volatile uint16_t x204 = 11U;
static int32_t t48 = -39100;
int64_t t51 = 431339229437LL;
int64_t x221 = 189LL;
static volatile int64_t t54 = 122521023941LL;
int16_t x233 = 13942;
volatile int8_t x234 = INT8_MAX;
int32_t x236 = 135895;
uint8_t x240 = UINT8_MAX;
static uint16_t x241 = UINT16_MAX;
int64_t x243 = -1LL;
int8_t x244 = INT8_MIN;
static uint8_t x251 = 39U;
int8_t x253 = INT8_MIN;
int32_t x263 = INT32_MAX;
int16_t x266 = INT16_MIN;
int8_t x273 = -15;
int16_t x280 = -1;
volatile uint16_t x287 = 21U;
int16_t x293 = INT16_MIN;
int32_t t69 = 0;
uint64_t t73 = 505537270931972543LLU;
int32_t x325 = INT32_MIN;
int64_t x326 = -293540540463509LL;
uint8_t x347 = UINT8_MAX;
static int8_t x348 = INT8_MIN;
volatile int32_t t78 = 1323;
int32_t x352 = 6257811;
volatile uint32_t t79 = 1U;
int32_t x354 = -1;
int16_t x358 = -67;
uint8_t x360 = UINT8_MAX;
int64_t x362 = INT64_MAX;
volatile int64_t t82 = INT64_MAX;
int16_t x371 = -134;
volatile uint64_t x383 = UINT64_MAX;
int32_t x385 = INT32_MIN;
uint8_t x386 = 1U;
int8_t x388 = -1;
int64_t x390 = -48796341638361LL;
int8_t x397 = 24;
static int32_t x407 = INT32_MIN;
volatile int64_t x414 = INT64_MIN;
static uint8_t x418 = UINT8_MAX;
static int32_t x420 = INT32_MIN;
volatile int32_t t94 = 5;
volatile int32_t t96 = -5781;


void f0(void) {
	volatile uint8_t x1 = 1U;
	int64_t x2 = INT64_MAX;
	int64_t x3 = 25930961241982472LL;
	volatile int64_t t0 = -24522633406659475LL;

	t0 = (x1-((x2/x3)+x4));

	if (t0 != 9223372036854775454LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	int8_t x6 = -1;
	static int64_t x7 = INT64_MAX;
	int8_t x8 = 1;
	int64_t t1 = 2079491215140958LL;

	t1 = (x5-((x6/x7)+x8));

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int64_t x11 = INT64_MAX;
	volatile int64_t t2 = -22665939340565LL;

	t2 = (x9-((x10/x11)+x12));

	if (t2 != -18537389450363565LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	int32_t x15 = INT32_MAX;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 4154LLU;

	t3 = (x13-((x14/x15)+x16));

	if (t3 != 546LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 2U;
	int64_t x20 = -3939779LL;

	t4 = (x17-((x18/x19)+x20));

	if (t4 != 3916524LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	int64_t x22 = INT64_MAX;
	volatile uint64_t x23 = 75491050LLU;
	static uint64_t t5 = 31158766LLU;

	t5 = (x21-((x22/x23)+x24));

	if (t5 != 18446743951531200057LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 5969U;
	uint32_t x26 = UINT32_MAX;
	int8_t x27 = 13;
	uint32_t t6 = 417U;

	t6 = (x25-((x26/x27)+x28));

	if (t6 != 3964591294U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x31 = -1;
	int16_t x32 = INT16_MIN;
	volatile uint64_t t7 = 239468181LLU;

	t7 = (x29-((x30/x31)+x32));

	if (t7 != 33023LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MAX;
	static int64_t x34 = INT64_MIN;
	int32_t x36 = INT32_MIN;
	int64_t t8 = 1368LL;

	t8 = (x33-((x34/x35)+x36));

	if (t8 != 4295000063LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int64_t x38 = INT64_MIN;
	int8_t x39 = INT8_MAX;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 157732109952LLU;

	t9 = (x37-((x38/x39)+x40));

	if (t9 != 72624976668180609LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x41 = 516766991LLU;
	int32_t x42 = 124;
	int32_t x44 = 1521177;
	uint64_t t10 = 20707LLU;

	t10 = (x41-((x42/x43)+x44));

	if (t10 != 515245814LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = -7;
	int16_t x47 = INT16_MAX;
	uint32_t x48 = 159U;
	volatile uint32_t t11 = 47167211U;

	t11 = (x45-((x46/x47)+x48));

	if (t11 != 4294967264U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int8_t x51 = -1;
	int8_t x52 = 19;
	static int32_t t12 = -21;

	t12 = (x49-((x50/x51)+x52));

	if (t12 != 235) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	uint32_t x54 = 8175339U;
	int64_t x55 = 3385215446474955450LL;
	uint32_t x56 = 5807U;
	volatile int64_t t13 = 458207450588LL;

	t13 = (x53-((x54/x55)+x56));

	if (t13 != -5552LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = UINT16_MAX;
	int16_t x58 = 12234;
	static int64_t x59 = INT64_MAX;
	uint16_t x60 = 120U;
	volatile int64_t t14 = -876LL;

	t14 = (x57-((x58/x59)+x60));

	if (t14 != 65415LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int64_t x62 = INT64_MIN;
	uint64_t x63 = UINT64_MAX;
	volatile uint64_t t15 = 88052750404353357LLU;

	t15 = (x61-((x62/x63)+x64));

	if (t15 != 127LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	volatile uint8_t x66 = 4U;
	static int8_t x67 = 2;
	uint64_t x68 = 560479872LLU;
	volatile uint64_t t16 = 4944235678658823677LLU;

	t16 = (x65-((x66/x67)+x68));

	if (t16 != 9223372036294295934LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 58215165169717LLU;
	int16_t x70 = INT16_MIN;
	int32_t x71 = INT32_MAX;
	static volatile uint16_t x72 = UINT16_MAX;
	volatile uint64_t t17 = 19550462356LLU;

	t17 = (x69-((x70/x71)+x72));

	if (t17 != 58215165104182LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 0U;
	int32_t x74 = -1;
	volatile uint64_t x75 = UINT64_MAX;
	static volatile int16_t x76 = -1;
	uint64_t t18 = 69LLU;

	t18 = (x73-((x74/x75)+x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x81 = -1796;
	int16_t x84 = INT16_MAX;
	volatile int64_t t19 = 233523742396199LL;

	t19 = (x81-((x82/x83)+x84));

	if (t19 != -34563LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 7444005U;
	uint32_t x86 = 3582665U;
	volatile int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MIN;
	int64_t t20 = 56728446133LL;

	t20 = (x85-((x86/x87)+x88));

	if (t20 != 7444133LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	uint16_t x90 = 130U;
	volatile int32_t t21 = -113;

	t21 = (x89-((x90/x91)+x92));

	if (t21 != -32295) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	int32_t x95 = INT32_MAX;
	uint64_t x96 = 126LLU;
	volatile uint64_t t22 = 319087628083LLU;

	t22 = (x93-((x94/x95)+x96));

	if (t22 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 2122U;
	int32_t x98 = -80544;
	int32_t x99 = INT32_MAX;
	int64_t x100 = -1LL;
	volatile int64_t t23 = -28378410448LL;

	t23 = (x97-((x98/x99)+x100));

	if (t23 != 2123LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	uint64_t x104 = 60924901128528LLU;
	volatile uint64_t t24 = 7042LLU;

	t24 = (x101-((x102/x103)+x104));

	if (t24 != 18446683148808422959LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	static int32_t x107 = -1;
	int16_t x108 = 10658;
	volatile uint32_t t25 = 584U;

	t25 = (x105-((x106/x107)+x108));

	if (t25 != 2147472990U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 3U;
	volatile int64_t x110 = INT64_MAX;
	int16_t x112 = INT16_MAX;

	t26 = (x109-((x110/x111)+x112));

	if (t26 != -4295000062LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x113 = 6LLU;
	static int16_t x116 = -1;
	uint64_t t27 = 626177776785LLU;

	t27 = (x113-((x114/x115)+x116));

	if (t27 != 7LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x117 = -1879;
	int16_t x118 = INT16_MAX;
	int32_t x119 = 2597;
	int16_t x120 = INT16_MAX;
	volatile int32_t t28 = -4;

	t28 = (x117-((x118/x119)+x120));

	if (t28 != -34658) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x122 = -121968071;
	static int16_t x123 = -1;
	static volatile int8_t x124 = INT8_MIN;
	int32_t t29 = -3030243;

	t29 = (x121-((x122/x123)+x124));

	if (t29 != 2025515704) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x126 = UINT32_MAX;
	uint32_t x127 = 1439U;
	uint64_t x128 = UINT64_MAX;
	uint64_t t30 = 967425338250LLU;

	t30 = (x125-((x126/x127)+x128));

	if (t30 != 18446744073706566928LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 767U;
	uint64_t x130 = 472932157517236259LLU;
	static uint64_t x131 = 22LLU;
	int16_t x132 = -1;
	volatile uint64_t t31 = 20583645963LLU;

	t31 = (x129-((x130/x131)+x132));

	if (t31 != 18425247157458768918LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MIN;
	volatile uint32_t x134 = UINT32_MAX;
	volatile int64_t x135 = INT64_MIN;
	int32_t x136 = -11;
	volatile int64_t t32 = -100860063232LL;

	t32 = (x133-((x134/x135)+x136));

	if (t32 != -117LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x138 = 201080LLU;
	int64_t x139 = INT64_MIN;
	static int64_t x140 = INT64_MIN;

	t33 = (x137-((x138/x139)+x140));

	if (t33 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = -1;
	int64_t x144 = -7181500LL;
	uint64_t t34 = 23349545454547LLU;

	t34 = (x141-((x142/x143)+x144));

	if (t34 != 7179500LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = -3951781438760LL;
	static int32_t x146 = INT32_MIN;
	static int32_t x147 = INT32_MAX;
	volatile uint16_t x148 = 1U;
	int64_t t35 = -85250294402LL;

	t35 = (x145-((x146/x147)+x148));

	if (t35 != -3951781438760LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 0U;
	volatile int32_t x150 = INT32_MIN;
	int8_t x151 = 48;
	int64_t x152 = -13374730541228LL;
	volatile int64_t t36 = -87918427752390206LL;

	t36 = (x149-((x150/x151)+x152));

	if (t36 != 13374775280470LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x154 = 47U;
	int32_t x155 = INT32_MIN;
	int32_t x156 = INT32_MIN;

	t37 = (x153-((x154/x155)+x156));

	if (t37 != 2147450880) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x157 = -1;
	volatile uint64_t x158 = 272LLU;
	volatile uint64_t t38 = 157941915548LLU;

	t38 = (x157-((x158/x159)+x160));

	if (t38 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x162 = UINT16_MAX;
	uint64_t x163 = 4494068658680081LLU;
	volatile uint32_t x164 = UINT32_MAX;
	uint64_t t39 = 2483931674LLU;

	t39 = (x161-((x162/x163)+x164));

	if (t39 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = -1;
	int16_t x167 = -4494;
	int64_t x168 = INT64_MIN;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x165-((x166/x167)+x168));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = INT32_MIN;
	volatile int32_t x170 = -117863527;
	int64_t x171 = INT64_MIN;
	volatile int64_t t41 = 34439146023444203LL;

	t41 = (x169-((x170/x171)+x172));

	if (t41 != -2147483775LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x173 = 0LL;
	static uint8_t x174 = UINT8_MAX;
	int32_t x175 = -1;
	int32_t x176 = INT32_MAX;
	int64_t t42 = 748649LL;

	t42 = (x173-((x174/x175)+x176));

	if (t42 != -2147483392LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = 30U;
	uint64_t t43 = 955885436690751054LLU;

	t43 = (x177-((x178/x179)+x180));

	if (t43 != 224LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x181 = INT32_MIN;

	t44 = (x181-((x182/x183)+x184));

	if (t44 != -2147516415LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x189 = UINT8_MAX;
	volatile uint64_t x190 = 85884985198517872LLU;
	int32_t x191 = 1535107;
	int8_t x192 = -1;
	static volatile uint64_t t45 = 36466020LLU;

	t45 = (x189-((x190/x191)+x192));

	if (t45 != 18446744017762321355LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	volatile int8_t x194 = -1;
	int64_t t46 = 30LL;

	t46 = (x193-((x194/x195)+x196));

	if (t46 != -32772LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = 56U;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = -1;
	uint32_t t47 = 20328288U;

	t47 = (x197-((x198/x199)+x200));

	if (t47 != 57U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 7178U;
	int8_t x202 = 1;
	int32_t x203 = INT32_MIN;

	t48 = (x201-((x202/x203)+x204));

	if (t48 != 7167) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x205 = -1;
	uint16_t x206 = 156U;
	static uint16_t x207 = 18U;
	int8_t x208 = 3;
	int32_t t49 = 388018;

	t49 = (x205-((x206/x207)+x208));

	if (t49 != -12) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x209 = -1;
	uint32_t x210 = 13833634U;
	int16_t x211 = INT16_MAX;
	int32_t x212 = 58;
	static volatile uint32_t t50 = 307192878U;

	t50 = (x209-((x210/x211)+x212));

	if (t50 != 4294966815U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x213 = INT32_MIN;
	int8_t x214 = -51;
	volatile int16_t x215 = -1;
	int64_t x216 = 1793379398595641LL;

	t51 = (x213-((x214/x215)+x216));

	if (t51 != -1793381546079340LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x217 = UINT16_MAX;
	volatile int8_t x218 = INT8_MIN;
	volatile uint64_t x219 = 3479615419660505LLU;
	volatile int8_t x220 = INT8_MIN;
	uint64_t t52 = 2727LLU;

	t52 = (x217-((x218/x219)+x220));

	if (t52 != 60362LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x222 = INT32_MIN;
	int8_t x223 = 10;
	uint32_t x224 = 70349975U;
	volatile int64_t t53 = 1931LL;

	t53 = (x221-((x222/x223)+x224));

	if (t53 != -4150568718LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x229 = 397;
	int16_t x230 = INT16_MIN;
	int32_t x231 = 1222177;
	int64_t x232 = 8511682049LL;

	t54 = (x229-((x230/x231)+x232));

	if (t54 != -8511681652LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x235 = UINT32_MAX;
	uint32_t t55 = 34347698U;

	t55 = (x233-((x234/x235)+x236));

	if (t55 != 4294845343U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x237 = -4;
	volatile uint64_t x238 = UINT64_MAX;
	int16_t x239 = -1;
	static uint64_t t56 = 667223344545210787LLU;

	t56 = (x237-((x238/x239)+x240));

	if (t56 != 18446744073709551356LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x242 = -1;
	int64_t t57 = -834LL;

	t57 = (x241-((x242/x243)+x244));

	if (t57 != 65662LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = 3;
	int16_t x250 = -1;
	int16_t x252 = 957;
	static volatile int32_t t58 = -1013;

	t58 = (x249-((x250/x251)+x252));

	if (t58 != -954) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x254 = -91084;
	uint8_t x255 = 4U;
	int8_t x256 = INT8_MAX;
	int32_t t59 = -112759;

	t59 = (x253-((x254/x255)+x256));

	if (t59 != 22516) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x257 = 2;
	static uint16_t x258 = 333U;
	int64_t x259 = INT64_MAX;
	static int64_t x260 = 4LL;
	int64_t t60 = -3LL;

	t60 = (x257-((x258/x259)+x260));

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = -1;
	static volatile int64_t x262 = INT64_MIN;
	uint16_t x264 = 19U;
	int64_t t61 = -3735289375925366LL;

	t61 = (x261-((x262/x263)+x264));

	if (t61 != 4294967278LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x265 = -19;
	int64_t x267 = INT64_MIN;
	int32_t x268 = 36905;
	int64_t t62 = 4840566234228275LL;

	t62 = (x265-((x266/x267)+x268));

	if (t62 != -36924LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x269 = 39U;
	static uint16_t x270 = 2U;
	int16_t x271 = INT16_MIN;
	uint8_t x272 = 3U;
	volatile int32_t t63 = -1152023;

	t63 = (x269-((x270/x271)+x272));

	if (t63 != 36) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x274 = -1;
	static uint16_t x275 = 10484U;
	static int64_t x276 = -1LL;
	int64_t t64 = -777215822611LL;

	t64 = (x273-((x274/x275)+x276));

	if (t64 != -14LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x277 = UINT8_MAX;
	volatile uint16_t x278 = 1U;
	uint32_t x279 = UINT32_MAX;
	uint32_t t65 = 1107955U;

	t65 = (x277-((x278/x279)+x280));

	if (t65 != 256U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x281 = 7233;
	static int16_t x282 = INT16_MIN;
	static int32_t x283 = INT32_MIN;
	static int32_t x284 = 6532;
	int32_t t66 = 100;

	t66 = (x281-((x282/x283)+x284));

	if (t66 != 701) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MAX;
	uint64_t x286 = UINT64_MAX;
	volatile uint64_t x288 = 2369LLU;
	volatile uint64_t t67 = 75LLU;

	t67 = (x285-((x286/x287)+x288));

	if (t67 != 17568327691394673294LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x289 = -39;
	static int8_t x290 = 0;
	int64_t x291 = INT64_MIN;
	int8_t x292 = -1;
	int64_t t68 = -96530095263291LL;

	t68 = (x289-((x290/x291)+x292));

	if (t68 != -38LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x294 = -1;
	int8_t x295 = 7;
	uint8_t x296 = UINT8_MAX;

	t69 = (x293-((x294/x295)+x296));

	if (t69 != -33023) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = UINT16_MAX;
	uint32_t x298 = 0U;
	int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MAX;
	uint32_t t70 = 34148102U;

	t70 = (x297-((x298/x299)+x300));

	if (t70 != 65408U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = INT64_MAX;
	static int8_t x302 = -37;
	int32_t x303 = -794959;
	uint16_t x304 = UINT16_MAX;
	volatile int64_t t71 = -295295371627157786LL;

	t71 = (x301-((x302/x303)+x304));

	if (t71 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = -1LL;
	volatile uint8_t x306 = 7U;
	volatile uint32_t x307 = 66490850U;
	static uint8_t x308 = 115U;
	static volatile int64_t t72 = 5LL;

	t72 = (x305-((x306/x307)+x308));

	if (t72 != -116LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = 19;
	int64_t x310 = INT64_MAX;
	uint32_t x311 = UINT32_MAX;
	volatile uint64_t x312 = 37LLU;

	t73 = (x309-((x310/x311)+x312));

	if (t73 != 18446744071562067950LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x317 = 1LLU;
	int64_t x318 = -1LL;
	uint8_t x319 = 1U;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t74 = 8671019885152192LLU;

	t74 = (x317-((x318/x319)+x320));

	if (t74 != 3LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x321 = -1;
	int16_t x322 = INT16_MAX;
	static int32_t x323 = INT32_MAX;
	volatile int16_t x324 = -13;
	static volatile int32_t t75 = -127;

	t75 = (x321-((x322/x323)+x324));

	if (t75 != 12) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x327 = INT8_MAX;
	volatile int32_t x328 = -39500;
	int64_t t76 = 13LL;

	t76 = (x325-((x326/x327)+x328));

	if (t76 != 2309195394147LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = 13874;
	int32_t x342 = INT32_MIN;
	int16_t x343 = -1624;
	int64_t x344 = -616101859797681LL;
	int64_t t77 = 196888649152047631LL;

	t77 = (x341-((x342/x343)+x344));

	if (t77 != 616101858489213LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = 25;
	int8_t x346 = INT8_MAX;

	t78 = (x345-((x346/x347)+x348));

	if (t78 != 153) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x349 = 56U;
	int16_t x350 = -2;
	static int32_t x351 = INT32_MAX;

	t79 = (x349-((x350/x351)+x352));

	if (t79 != 4288709541U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x353 = 33U;
	int8_t x355 = INT8_MIN;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t80 = 1LLU;

	t80 = (x353-((x354/x355)+x356));

	if (t80 != 34LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = -171587980392868LL;
	int16_t x359 = -1;
	volatile int64_t t81 = 61681162996LL;

	t81 = (x357-((x358/x359)+x360));

	if (t81 != -171587980393190LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x361 = -1;
	int16_t x363 = -1;
	static volatile int32_t x364 = -1;

	t82 = (x361-((x362/x363)+x364));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MIN;
	volatile uint64_t x372 = UINT64_MAX;
	uint64_t t83 = 207LLU;

	t83 = (x369-((x370/x371)+x372));

	if (t83 != 9223372036838749812LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = -47;
	uint32_t x375 = UINT32_MAX;
	static uint64_t x376 = 3935572287LLU;
	uint64_t t84 = 59500738992464216LLU;

	t84 = (x373-((x374/x375)+x376));

	if (t84 != 18446744067626495681LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = 3217;
	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MAX;
	uint64_t x380 = UINT64_MAX;
	static uint64_t t85 = 2514626LLU;

	t85 = (x377-((x378/x379)+x380));

	if (t85 != 281483566910618LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = -1;
	volatile int32_t x382 = 435095;
	int32_t x384 = 59067;
	uint64_t t86 = 6147405529345900759LLU;

	t86 = (x381-((x382/x383)+x384));

	if (t86 != 18446744073709492548LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x387 = 607235853U;
	volatile uint32_t t87 = 15796273U;

	t87 = (x385-((x386/x387)+x388));

	if (t87 != 2147483649U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x389 = 9;
	static int16_t x391 = INT16_MIN;
	int64_t x392 = -1LL;
	static volatile int64_t t88 = 1871834394031546176LL;

	t88 = (x389-((x390/x391)+x392));

	if (t88 != -1489146158LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x393 = 9652305U;
	static uint32_t x394 = UINT32_MAX;
	static int32_t x395 = INT32_MAX;
	uint8_t x396 = UINT8_MAX;
	uint32_t t89 = 98264U;

	t89 = (x393-((x394/x395)+x396));

	if (t89 != 9652048U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x398 = -46113007984423LL;
	static int8_t x399 = -1;
	int8_t x400 = -1;
	static int64_t t90 = -3632767543524LL;

	t90 = (x397-((x398/x399)+x400));

	if (t90 != -46113007984398LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = -1;
	int32_t x402 = -1;
	int32_t x403 = INT32_MAX;
	static int64_t x404 = -1LL;
	volatile int64_t t91 = -2LL;

	t91 = (x401-((x402/x403)+x404));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x405 = UINT32_MAX;
	static uint8_t x406 = 66U;
	int16_t x408 = INT16_MIN;
	volatile uint32_t t92 = 1036453789U;

	t92 = (x405-((x406/x407)+x408));

	if (t92 != 32767U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x413 = -199LL;
	uint16_t x415 = 28361U;
	uint64_t x416 = 5985777846564LLU;
	volatile uint64_t t93 = 57923306907LLU;

	t93 = (x413-((x414/x415)+x416));

	if (t93 != 319227438783637LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x417 = INT32_MIN;
	volatile int32_t x419 = -41426;

	t94 = (x417-((x418/x419)+x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = -1;
	static volatile int16_t x422 = INT16_MIN;
	uint32_t x423 = 22U;
	int32_t x424 = -1;
	uint32_t t95 = 111U;

	t95 = (x421-((x422/x423)+x424));

	if (t95 != 4099743000U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x425 = -1;
	int16_t x426 = 696;
	int32_t x427 = -3184;
	uint16_t x428 = UINT16_MAX;

	t96 = (x425-((x426/x427)+x428));

	if (t96 != -65536) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x433 = UINT32_MAX;
	int32_t x434 = INT32_MAX;
	static int16_t x435 = 869;
	volatile int8_t x436 = INT8_MAX;
	volatile uint32_t t97 = 38U;

	t97 = (x433-((x434/x435)+x436));

	if (t97 != 4292495956U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x441 = 799183814LLU;
	static int16_t x442 = INT16_MIN;
	static int8_t x443 = 15;
	static volatile int64_t x444 = 1LL;
	static uint64_t t98 = 255852628LLU;

	t98 = (x441-((x442/x443)+x444));

	if (t98 != 799185997LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x445 = UINT16_MAX;
	volatile int8_t x446 = -1;
	static int8_t x447 = INT8_MIN;
	int16_t x448 = INT16_MAX;
	static int32_t t99 = -8054;

	t99 = (x445-((x446/x447)+x448));

	if (t99 != 32768) { NG(); } else { ; }
	
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

