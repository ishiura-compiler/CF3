#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1LL;
volatile int32_t t1 = -89025;
uint16_t x9 = 190U;
static volatile uint16_t x15 = 3677U;
static int32_t t3 = -810369;
volatile int32_t x17 = -1;
int32_t t5 = 17;
static int16_t x28 = INT16_MIN;
static int32_t t9 = -8291822;
int8_t x44 = 3;
int32_t t10 = 66302258;
volatile int32_t t11 = -1;
int32_t x52 = INT32_MIN;
uint8_t x62 = 1U;
int8_t x63 = INT8_MAX;
uint64_t x65 = UINT64_MAX;
volatile int32_t t16 = -9264;
volatile int32_t t17 = -22;
int32_t x74 = INT32_MIN;
int32_t x85 = INT32_MIN;
volatile uint64_t x89 = UINT64_MAX;
static int32_t t22 = 746;
static int64_t x95 = -1LL;
volatile int32_t t23 = 244;
uint64_t x102 = UINT64_MAX;
static int8_t x105 = -4;
int32_t t27 = 319;
volatile int64_t x132 = -1LL;
static int32_t x134 = INT32_MIN;
int32_t t33 = 1063;
int64_t x139 = INT64_MIN;
int8_t x145 = 1;
int64_t x154 = -31478513162101LL;
volatile int8_t x155 = 3;
uint8_t x161 = 125U;
int64_t x164 = -1LL;
volatile int8_t x166 = INT8_MAX;
volatile int32_t t41 = 30551542;
int16_t x171 = INT16_MIN;
static int32_t t43 = -3506202;
uint64_t x180 = UINT64_MAX;
uint32_t x182 = 3318U;
uint8_t x188 = 2U;
volatile int32_t x208 = INT32_MIN;
volatile int32_t t52 = 4;
int8_t x217 = INT8_MIN;
int64_t x220 = 68959851LL;
int32_t t54 = -65946;
int8_t x226 = -1;
int32_t x227 = -201962348;
int64_t x241 = -1LL;
uint16_t x257 = 314U;
uint8_t x262 = UINT8_MAX;
volatile int32_t x263 = INT32_MIN;
int32_t t64 = -393;
int8_t x267 = -1;
volatile int16_t x275 = -1;
static volatile int64_t x278 = 795LL;
static uint32_t x279 = UINT32_MAX;
static int16_t x280 = 11508;
uint32_t x287 = 3054033U;
volatile int32_t t70 = 23346;
uint8_t x293 = UINT8_MAX;
static uint16_t x295 = UINT16_MAX;
static uint16_t x299 = 1584U;
volatile int16_t x301 = -1;
int16_t x302 = -10154;
int32_t x303 = -1;
int64_t x306 = INT64_MIN;
int16_t x307 = -1;
int32_t x308 = 1877;
static volatile int32_t x313 = INT32_MIN;
uint32_t x315 = UINT32_MAX;
static int16_t x319 = 2245;
uint64_t x320 = 3839432831LLU;
uint16_t x339 = 508U;
volatile int64_t x340 = INT64_MIN;
volatile int32_t t82 = -14264;
int32_t x342 = -1;
static int32_t x348 = -1;
int32_t t87 = 8318690;
static int16_t x370 = INT16_MIN;
uint64_t x374 = 24886929501244LLU;
volatile int32_t x380 = -1;
int64_t x384 = INT64_MIN;
int64_t x388 = INT64_MIN;
static int16_t x391 = -1;
int32_t x392 = INT32_MAX;
static int8_t x393 = -1;
int64_t x394 = INT64_MIN;
static uint16_t x403 = 1431U;
uint16_t x404 = UINT16_MAX;
volatile int64_t x407 = INT64_MAX;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int32_t x2 = INT32_MIN;
	uint16_t x3 = 359U;
	volatile int32_t t0 = -97014;

	t0 = ((x1|x2)==(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = -1LL;
	volatile uint32_t x7 = UINT32_MAX;
	int16_t x8 = INT16_MIN;

	t1 = ((x5|x6)==(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = INT8_MIN;
	uint8_t x11 = UINT8_MAX;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 53395;

	t2 = ((x9|x10)==(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = 105376751145LL;
	volatile int16_t x14 = INT16_MIN;
	static int16_t x16 = INT16_MIN;

	t3 = ((x13|x14)==(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x18 = INT32_MIN;
	volatile int16_t x19 = 16163;
	volatile int64_t x20 = 8569LL;
	int32_t t4 = -1;

	t4 = ((x17|x18)==(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int8_t x22 = 0;
	static uint16_t x23 = 23126U;
	int16_t x24 = INT16_MIN;

	t5 = ((x21|x22)==(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 1U;
	volatile int32_t x26 = -830245588;
	int16_t x27 = -7;
	int32_t t6 = -5913869;

	t6 = ((x25|x26)==(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 395;
	int8_t x30 = 1;
	volatile uint64_t x31 = 510151927LLU;
	int8_t x32 = 13;
	volatile int32_t t7 = 1;

	t7 = ((x29|x30)==(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = 0;
	int16_t x34 = -1;
	int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 90227;

	t8 = ((x33|x34)==(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int64_t x38 = INT64_MAX;
	static uint8_t x39 = UINT8_MAX;
	uint16_t x40 = 281U;

	t9 = ((x37|x38)==(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static int16_t x42 = 4059;
	volatile int32_t x43 = INT32_MIN;

	t10 = ((x41|x42)==(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x45 = -1LL;
	static int32_t x46 = -70004;
	volatile int32_t x47 = INT32_MIN;
	int16_t x48 = 5;

	t11 = ((x45|x46)==(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = -3;
	int8_t x51 = -16;
	int32_t t12 = -20175760;

	t12 = ((x49|x50)==(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 3;
	static uint16_t x54 = 24583U;
	int16_t x55 = INT16_MAX;
	int16_t x56 = -1309;
	volatile int32_t t13 = 839182;

	t13 = ((x53|x54)==(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 60557744U;
	static uint8_t x58 = 125U;
	static uint16_t x59 = 24003U;
	uint32_t x60 = 8756149U;
	static int32_t t14 = -299;

	t14 = ((x57|x58)==(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x61 = UINT16_MAX;
	int32_t x64 = INT32_MAX;
	int32_t t15 = 3;

	t15 = ((x61|x62)==(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MIN;
	static int8_t x68 = INT8_MIN;

	t16 = ((x65|x66)==(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	uint32_t x70 = 11321U;
	static int64_t x71 = -1LL;
	int8_t x72 = INT8_MAX;

	t17 = ((x69|x70)==(x71%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 1714479LLU;
	static int64_t x75 = INT64_MIN;
	static int8_t x76 = -1;
	int32_t t18 = 54;

	t18 = ((x73|x74)==(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 714699075LLU;
	int64_t x78 = INT64_MIN;
	uint64_t x79 = 498480268394LLU;
	uint64_t x80 = UINT64_MAX;
	int32_t t19 = 613996;

	t19 = ((x77|x78)==(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 63584U;
	int16_t x82 = -11;
	static uint16_t x83 = 6499U;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -74249;

	t20 = ((x81|x82)==(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = 127661;
	volatile uint32_t x87 = 1011U;
	static volatile int8_t x88 = -1;
	static int32_t t21 = 91164;

	t21 = ((x85|x86)==(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 3U;
	volatile int32_t x91 = INT32_MIN;
	static int32_t x92 = -1;

	t22 = ((x89|x90)==(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	uint64_t x94 = UINT64_MAX;
	int16_t x96 = -738;

	t23 = ((x93|x94)==(x95%x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint8_t x98 = 1U;
	volatile int16_t x99 = 53;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -23680;

	t24 = ((x97|x98)==(x99%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int16_t x103 = -1;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -1455;

	t25 = ((x101|x102)==(x103%x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x106 = 20U;
	volatile uint16_t x107 = UINT16_MAX;
	uint8_t x108 = 1U;
	volatile int32_t t26 = 30;

	t26 = ((x105|x106)==(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int64_t x110 = -26LL;
	int32_t x111 = INT32_MAX;
	uint64_t x112 = 2497293365875LLU;

	t27 = ((x109|x110)==(x111%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MAX;
	int16_t x114 = -57;
	volatile uint64_t x115 = 292LLU;
	int8_t x116 = INT8_MIN;
	int32_t t28 = -176800179;

	t28 = ((x113|x114)==(x115%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	static int64_t x118 = INT64_MIN;
	uint64_t x119 = 17582LLU;
	volatile int64_t x120 = 4011690795LL;
	int32_t t29 = -37578;

	t29 = ((x117|x118)==(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MAX;
	volatile uint8_t x124 = 2U;
	int32_t t30 = 3;

	t30 = ((x121|x122)==(x123%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	static int32_t x126 = INT32_MAX;
	volatile int32_t x127 = -1;
	int16_t x128 = -1;
	volatile int32_t t31 = -850027;

	t31 = ((x125|x126)==(x127%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MAX;
	uint16_t x130 = 754U;
	int8_t x131 = INT8_MAX;
	int32_t t32 = 26;

	t32 = ((x129|x130)==(x131%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x135 = 5474U;
	int64_t x136 = -1LL;

	t33 = ((x133|x134)==(x135%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 26U;
	static int32_t x138 = INT32_MAX;
	uint32_t x140 = 3U;
	int32_t t34 = 1960251;

	t34 = ((x137|x138)==(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 29U;
	uint64_t x142 = 7702LLU;
	uint16_t x143 = 12U;
	int8_t x144 = -2;
	static int32_t t35 = 3435;

	t35 = ((x141|x142)==(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x146 = INT16_MIN;
	volatile int8_t x147 = INT8_MIN;
	volatile uint16_t x148 = 31U;
	static volatile int32_t t36 = 12;

	t36 = ((x145|x146)==(x147%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x149 = 19819U;
	int8_t x150 = -1;
	static volatile int16_t x151 = INT16_MAX;
	uint16_t x152 = 241U;
	volatile int32_t t37 = -121;

	t37 = ((x149|x150)==(x151%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int64_t x156 = INT64_MAX;
	static int32_t t38 = -343372377;

	t38 = ((x153|x154)==(x155%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 2820U;
	volatile int8_t x158 = 1;
	uint32_t x159 = 128204U;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -13477896;

	t39 = ((x157|x158)==(x159%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MAX;
	int32_t t40 = -143357;

	t40 = ((x161|x162)==(x163%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int32_t x167 = INT32_MIN;
	int64_t x168 = -26063710197LL;

	t41 = ((x165|x166)==(x167%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = UINT64_MAX;
	uint8_t x170 = 5U;
	int32_t x172 = INT32_MIN;
	int32_t t42 = -188060;

	t42 = ((x169|x170)==(x171%x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1438565945883566LL;
	volatile int16_t x174 = 703;
	int16_t x175 = INT16_MIN;
	uint16_t x176 = 2U;

	t43 = ((x173|x174)==(x175%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	volatile int32_t x178 = -482819;
	int8_t x179 = INT8_MIN;
	int32_t t44 = 23;

	t44 = ((x177|x178)==(x179%x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	uint8_t x183 = 8U;
	int8_t x184 = -1;
	static int32_t t45 = -320293;

	t45 = ((x181|x182)==(x183%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	int16_t x186 = INT16_MIN;
	int16_t x187 = -1;
	int32_t t46 = 7689167;

	t46 = ((x185|x186)==(x187%x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 7U;
	static int8_t x190 = INT8_MIN;
	int32_t x191 = -1;
	int64_t x192 = 1200050751740264LL;
	volatile int32_t t47 = -851347348;

	t47 = ((x189|x190)==(x191%x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	static uint16_t x194 = 881U;
	int8_t x195 = -1;
	int16_t x196 = INT16_MIN;
	volatile int32_t t48 = -176;

	t48 = ((x193|x194)==(x195%x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -1;
	volatile int64_t x198 = -1LL;
	uint64_t x199 = 1501171098077055755LLU;
	uint64_t x200 = 233158236444LLU;
	int32_t t49 = -1389928;

	t49 = ((x197|x198)==(x199%x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	static int8_t x202 = 2;
	static int64_t x203 = INT64_MIN;
	uint64_t x204 = 10LLU;
	int32_t t50 = -501914;

	t50 = ((x201|x202)==(x203%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 1836076966363531LLU;
	int8_t x206 = 59;
	static uint32_t x207 = 464507269U;
	volatile int32_t t51 = 1369158;

	t51 = ((x205|x206)==(x207%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int32_t x210 = INT32_MIN;
	int32_t x211 = -1;
	int64_t x212 = INT64_MAX;

	t52 = ((x209|x210)==(x211%x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = -1LL;
	int16_t x215 = INT16_MAX;
	static volatile int8_t x216 = -1;
	volatile int32_t t53 = -6182;

	t53 = ((x213|x214)==(x215%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = -1;
	uint8_t x219 = UINT8_MAX;

	t54 = ((x217|x218)==(x219%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 2U;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MAX;
	uint32_t x224 = 1730324U;
	static volatile int32_t t55 = 29;

	t55 = ((x221|x222)==(x223%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int16_t x228 = 16298;
	int32_t t56 = 1056092665;

	t56 = ((x225|x226)==(x227%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 203U;
	volatile int16_t x230 = -53;
	volatile int32_t x231 = INT32_MIN;
	int64_t x232 = -1LL;
	volatile int32_t t57 = -1126;

	t57 = ((x229|x230)==(x231%x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MAX;
	uint32_t x238 = 9628U;
	uint16_t x239 = UINT16_MAX;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t58 = -1;

	t58 = ((x237|x238)==(x239%x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x242 = -40;
	int64_t x243 = 6134384710204LL;
	volatile int32_t x244 = 7137507;
	int32_t t59 = -1110723;

	t59 = ((x241|x242)==(x243%x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = -1;
	static uint8_t x246 = 0U;
	int8_t x247 = INT8_MIN;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t60 = -30897602;

	t60 = ((x245|x246)==(x247%x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x249 = 78168258U;
	static int32_t x250 = INT32_MIN;
	volatile int16_t x251 = INT16_MIN;
	volatile int32_t x252 = INT32_MIN;
	volatile int32_t t61 = -1869287;

	t61 = ((x249|x250)==(x251%x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = 1;
	int64_t x255 = -3951405068997973LL;
	int16_t x256 = -148;
	volatile int32_t t62 = 219;

	t62 = ((x253|x254)==(x255%x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x258 = 1LLU;
	int16_t x259 = INT16_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t63 = -10;

	t63 = ((x257|x258)==(x259%x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = 33389042;
	uint32_t x264 = 150034085U;

	t64 = ((x261|x262)==(x263%x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x265 = -14058;
	static int32_t x266 = -127014;
	volatile uint32_t x268 = UINT32_MAX;
	int32_t t65 = 701;

	t65 = ((x265|x266)==(x267%x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	volatile int8_t x274 = INT8_MIN;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t66 = 1314916;

	t66 = ((x273|x274)==(x275%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x277 = UINT16_MAX;
	static volatile int32_t t67 = -30;

	t67 = ((x277|x278)==(x279%x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MIN;
	uint32_t x282 = 148003U;
	volatile int64_t x283 = -1LL;
	volatile int64_t x284 = -1LL;
	volatile int32_t t68 = -31;

	t68 = ((x281|x282)==(x283%x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MIN;
	static volatile uint64_t x286 = UINT64_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t69 = 1651;

	t69 = ((x285|x286)==(x287%x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x289 = INT32_MIN;
	volatile int64_t x290 = -1LL;
	int16_t x291 = 156;
	static int16_t x292 = INT16_MIN;

	t70 = ((x289|x290)==(x291%x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x294 = 5;
	int64_t x296 = INT64_MIN;
	int32_t t71 = -135;

	t71 = ((x293|x294)==(x295%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x297 = 6112908;
	int8_t x298 = INT8_MIN;
	static int16_t x300 = INT16_MIN;
	static int32_t t72 = -474531454;

	t72 = ((x297|x298)==(x299%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x304 = 120;
	int32_t t73 = -19;

	t73 = ((x301|x302)==(x303%x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x305 = 0;
	int32_t t74 = -147;

	t74 = ((x305|x306)==(x307%x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = 43;
	volatile int8_t x310 = 1;
	int8_t x311 = -15;
	int8_t x312 = INT8_MAX;
	int32_t t75 = 84188;

	t75 = ((x309|x310)==(x311%x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x314 = INT16_MIN;
	uint8_t x316 = 38U;
	volatile int32_t t76 = -1;

	t76 = ((x313|x314)==(x315%x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = UINT8_MAX;
	volatile uint8_t x318 = 1U;
	int32_t t77 = -207283010;

	t77 = ((x317|x318)==(x319%x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = INT64_MIN;
	uint8_t x322 = 15U;
	uint16_t x323 = 4U;
	static volatile int16_t x324 = -1;
	volatile int32_t t78 = -15;

	t78 = ((x321|x322)==(x323%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	static int64_t x326 = -546598263353LL;
	int64_t x327 = -1LL;
	int16_t x328 = INT16_MIN;
	volatile int32_t t79 = 0;

	t79 = ((x325|x326)==(x327%x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x329 = UINT8_MAX;
	int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MIN;
	uint8_t x332 = UINT8_MAX;
	int32_t t80 = 33274635;

	t80 = ((x329|x330)==(x331%x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = -1;
	uint64_t x334 = 56825567757088643LLU;
	volatile uint64_t x335 = UINT64_MAX;
	uint8_t x336 = 14U;
	int32_t t81 = -7213334;

	t81 = ((x333|x334)==(x335%x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x337 = 0LLU;
	volatile int64_t x338 = INT64_MIN;

	t82 = ((x337|x338)==(x339%x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x341 = 3U;
	int32_t x343 = INT32_MAX;
	volatile int16_t x344 = -1;
	int32_t t83 = 30933673;

	t83 = ((x341|x342)==(x343%x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x345 = 73U;
	uint8_t x346 = UINT8_MAX;
	int8_t x347 = -1;
	int32_t t84 = -52010;

	t84 = ((x345|x346)==(x347%x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x349 = 469216738LL;
	int16_t x350 = -2;
	int8_t x351 = INT8_MIN;
	static volatile int32_t x352 = 1;
	volatile int32_t t85 = -2940106;

	t85 = ((x349|x350)==(x351%x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = -1LL;
	static uint32_t x355 = 3U;
	int16_t x356 = INT16_MIN;
	int32_t t86 = -16681975;

	t86 = ((x353|x354)==(x355%x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = -1;
	int16_t x358 = INT16_MAX;
	static uint32_t x359 = UINT32_MAX;
	volatile int8_t x360 = -1;

	t87 = ((x357|x358)==(x359%x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x361 = -54;
	static int8_t x362 = INT8_MIN;
	int32_t x363 = -386901;
	uint64_t x364 = 3584597LLU;
	volatile int32_t t88 = 9;

	t88 = ((x361|x362)==(x363%x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = -1;
	int16_t x367 = INT16_MIN;
	volatile int16_t x368 = INT16_MIN;
	int32_t t89 = 52;

	t89 = ((x365|x366)==(x367%x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = INT64_MAX;
	volatile int16_t x371 = INT16_MAX;
	int32_t x372 = -28793;
	int32_t t90 = 246671;

	t90 = ((x369|x370)==(x371%x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x373 = -1;
	uint8_t x375 = 90U;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t91 = 64;

	t91 = ((x373|x374)==(x375%x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = -1;
	static int32_t x378 = INT32_MAX;
	uint32_t x379 = 3626U;
	volatile int32_t t92 = 2;

	t92 = ((x377|x378)==(x379%x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x381 = UINT8_MAX;
	int8_t x382 = -1;
	uint32_t x383 = 15342U;
	static volatile int32_t t93 = 2154;

	t93 = ((x381|x382)==(x383%x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x385 = 1098U;
	uint32_t x386 = 2U;
	int8_t x387 = 0;
	static int32_t t94 = -242;

	t94 = ((x385|x386)==(x387%x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = 718876304838751835LL;
	int16_t x390 = -39;
	int32_t t95 = 32283;

	t95 = ((x389|x390)==(x391%x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x395 = INT64_MIN;
	int16_t x396 = INT16_MAX;
	volatile int32_t t96 = 122;

	t96 = ((x393|x394)==(x395%x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x397 = 660339671764LLU;
	static uint32_t x398 = 511U;
	int64_t x399 = -2549793539324LL;
	int64_t x400 = -1LL;
	volatile int32_t t97 = 0;

	t97 = ((x397|x398)==(x399%x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x401 = UINT64_MAX;
	int16_t x402 = INT16_MIN;
	int32_t t98 = -941990639;

	t98 = ((x401|x402)==(x403%x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x405 = INT32_MAX;
	uint8_t x406 = 0U;
	int16_t x408 = INT16_MAX;
	volatile int32_t t99 = 0;

	t99 = ((x405|x406)==(x407%x408));

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

