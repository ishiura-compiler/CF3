#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int16_t x5 = INT16_MIN;
static int8_t x15 = INT8_MIN;
int16_t x16 = -4083;
int64_t x18 = 163506297862598LL;
volatile int64_t x20 = INT64_MIN;
static int64_t t4 = -63776556579LL;
uint32_t x21 = 2861U;
int64_t x29 = INT64_MIN;
uint16_t x30 = 193U;
static int64_t x31 = INT64_MIN;
uint64_t x33 = UINT64_MAX;
int64_t x42 = INT64_MIN;
static int8_t x45 = -1;
static int32_t x46 = -760;
int8_t x47 = INT8_MIN;
static uint32_t x50 = UINT32_MAX;
static int32_t t13 = 66064451;
uint64_t x65 = UINT64_MAX;
int8_t x66 = INT8_MIN;
static volatile int32_t x71 = INT32_MIN;
uint32_t t17 = 28805U;
static int8_t x73 = INT8_MAX;
int32_t x75 = INT32_MIN;
volatile uint64_t x76 = 352862509249862330LLU;
static uint64_t t19 = UINT64_MAX;
static volatile int16_t x83 = INT16_MIN;
int16_t x84 = INT16_MAX;
int64_t x98 = INT64_MAX;
uint64_t x99 = 29LLU;
static volatile uint16_t x107 = 117U;
static int8_t x112 = INT8_MIN;
int8_t x118 = -1;
int8_t x121 = INT8_MIN;
int32_t x122 = INT32_MIN;
int16_t x137 = INT16_MIN;
int32_t x138 = -1;
int32_t x140 = INT32_MIN;
uint64_t t34 = 380242230024483LLU;
volatile uint32_t x143 = 15226U;
uint64_t x151 = 933716369685LLU;
int8_t x154 = INT8_MAX;
int64_t t39 = 850261599105LL;
static int8_t x169 = 13;
static int32_t t40 = -31145;
int32_t x178 = 133820;
int8_t x179 = -48;
int32_t t42 = -1787399;
volatile uint32_t x181 = UINT32_MAX;
int16_t x182 = INT16_MIN;
volatile int64_t x184 = 1580577863423LL;
uint32_t t44 = 54U;
static uint64_t x190 = UINT64_MAX;
uint64_t x191 = 1528057LLU;
volatile uint64_t x196 = UINT64_MAX;
int16_t x198 = -1;
uint32_t t47 = 413736U;
int64_t x209 = INT64_MIN;
int64_t t50 = -37656LL;
int16_t x219 = INT16_MIN;
volatile int8_t x230 = -1;
volatile uint16_t x234 = UINT16_MAX;
int8_t x235 = 7;
int64_t t56 = 1595600418740951LL;
static uint32_t x237 = 324717229U;
uint16_t x244 = 5U;
int64_t x248 = INT64_MIN;
uint8_t x249 = 13U;
int32_t t63 = -3;
uint64_t x272 = 7011241647179026129LLU;
int16_t x273 = INT16_MAX;
volatile uint32_t x275 = 274443U;
static int8_t x277 = -1;
static int16_t x278 = INT16_MIN;
volatile int64_t t68 = -502987414736LL;
uint64_t t71 = 3LLU;
static int32_t x300 = -1;
int64_t x316 = -1755757691689LL;
static volatile int64_t x317 = -1LL;
uint8_t x324 = UINT8_MAX;
static uint64_t t79 = UINT64_MAX;
static uint64_t x330 = 2336076035914LLU;
int64_t x349 = INT64_MIN;
int32_t x352 = 15528006;
uint64_t x354 = UINT64_MAX;
volatile int64_t x358 = -1LL;
int8_t x375 = -1;
volatile uint64_t t90 = 8LLU;
uint16_t x379 = 7U;
uint64_t t92 = 0LLU;
uint8_t x386 = 2U;
int64_t t95 = -83933349LL;
uint32_t x404 = UINT32_MAX;
static volatile uint64_t x408 = 619217533455270LLU;
uint64_t x410 = 3LLU;
int64_t x412 = INT64_MAX;


void f0(void) {
	int32_t x1 = -251714750;
	static uint64_t x2 = UINT64_MAX;
	int32_t x3 = 219326;
	uint64_t t0 = 972940LLU;

	t0 = ((x1|x2)-(x3%x4));

	if (t0 != 18446744073709528897LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 266U;
	static uint8_t x7 = 57U;
	int32_t x8 = INT32_MAX;
	static volatile int32_t t1 = -105736543;

	t1 = ((x5|x6)-(x7%x8));

	if (t1 != -32559) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -53;
	static int64_t x10 = INT64_MIN;
	volatile uint32_t x11 = UINT32_MAX;
	int16_t x12 = INT16_MIN;
	volatile int64_t t2 = 2408811LL;

	t2 = ((x9|x10)-(x11%x12));

	if (t2 != -32820LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	volatile uint32_t t3 = 814336941U;

	t3 = ((x13|x14)-(x15%x16));

	if (t3 != 127U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile uint32_t x19 = 55U;

	t4 = ((x17|x18)-(x19%x20));

	if (t4 != -113LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x22 = -3;
	int32_t x23 = -1;
	static int32_t x24 = INT32_MIN;
	volatile uint32_t t5 = 12U;

	t5 = ((x21|x22)-(x23%x24));

	if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -20826603;
	int64_t x26 = INT64_MIN;
	int8_t x27 = 25;
	volatile uint16_t x28 = UINT16_MAX;
	static int64_t t6 = 124415787093LL;

	t6 = ((x25|x26)-(x27%x28));

	if (t6 != -20826628LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x32 = INT32_MAX;
	volatile int64_t t7 = 2602662LL;

	t7 = ((x29|x30)-(x31%x32));

	if (t7 != -9223372036854775613LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x34 = INT64_MIN;
	uint64_t x35 = UINT64_MAX;
	uint32_t x36 = 11691379U;
	uint64_t t8 = 4LLU;

	t8 = ((x33|x34)-(x35%x36));

	if (t8 != 18446744073709535381LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile int32_t x38 = -215436181;
	uint8_t x39 = 24U;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -1;

	t9 = ((x37|x38)-(x39%x40));

	if (t9 != -25) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -14;
	volatile int32_t x43 = -1;
	int32_t x44 = INT32_MIN;
	volatile int64_t t10 = -10330268LL;

	t10 = ((x41|x42)-(x43%x44));

	if (t10 != -13LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x48 = 1006702253U;
	uint32_t t11 = 28U;

	t11 = ((x45|x46)-(x47%x48));

	if (t11 != 4026809139U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 33;
	static uint64_t x51 = 242645377LLU;
	static int16_t x52 = -1;
	uint64_t t12 = 4253LLU;

	t12 = ((x49|x50)-(x51%x52));

	if (t12 != 4052321918LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 2U;
	int16_t x54 = INT16_MIN;
	uint16_t x55 = UINT16_MAX;
	uint8_t x56 = 17U;

	t13 = ((x53|x54)-(x55%x56));

	if (t13 != -32766) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 61817493003989985LLU;
	uint8_t x58 = 28U;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = 47LLU;
	static uint64_t t14 = 476076611LLU;

	t14 = ((x57|x58)-(x59%x60));

	if (t14 != 61817493003989997LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	volatile uint16_t x62 = 12U;
	uint8_t x63 = 100U;
	int64_t x64 = INT64_MAX;
	int64_t t15 = 92094640529537902LL;

	t15 = ((x61|x62)-(x63%x64));

	if (t15 != -101LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x67 = 3U;
	int32_t x68 = -1701953;
	volatile uint64_t t16 = 1602085135434955722LLU;

	t16 = ((x65|x66)-(x67%x68));

	if (t16 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 488437074U;
	static int8_t x70 = INT8_MAX;
	int16_t x72 = INT16_MIN;

	t17 = ((x69|x70)-(x71%x72));

	if (t17 != 488437119U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = UINT64_MAX;
	static volatile uint64_t t18 = 2539823635385911960LLU;

	t18 = ((x73|x74)-(x75%x76));

	if (t18 != 18348850483140324807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 202360468LLU;
	uint64_t x78 = UINT64_MAX;
	uint32_t x79 = 497U;
	uint8_t x80 = 1U;

	t19 = ((x77|x78)-(x79%x80));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	int16_t x82 = -51;
	int32_t t20 = -205278;

	t20 = ((x81|x82)-(x83%x84));

	if (t20 != -50) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MAX;
	int64_t x86 = 63052805961LL;
	static volatile uint16_t x87 = UINT16_MAX;
	volatile uint64_t x88 = 81766441701664463LLU;
	uint64_t t21 = 1126LLU;

	t21 = ((x85|x86)-(x87%x88));

	if (t21 != 63052740480LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = 7U;
	int16_t x91 = INT16_MIN;
	static uint16_t x92 = UINT16_MAX;
	int32_t t22 = 1365;

	t22 = ((x89|x90)-(x91%x92));

	if (t22 != 32647) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static int16_t x94 = INT16_MAX;
	int8_t x95 = 1;
	volatile int32_t x96 = INT32_MIN;
	int32_t t23 = -1;

	t23 = ((x93|x94)-(x95%x96));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = 1;
	volatile uint16_t x100 = 1U;
	uint64_t t24 = 1521LLU;

	t24 = ((x97|x98)-(x99%x100));

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int16_t x102 = INT16_MAX;
	int8_t x103 = -63;
	int64_t x104 = 6596LL;
	static int64_t t25 = 44980LL;

	t25 = ((x101|x102)-(x103%x104));

	if (t25 != 62LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = -459766;
	uint16_t x108 = 523U;
	volatile int32_t t26 = -283022730;

	t26 = ((x105|x106)-(x107%x108));

	if (t26 != -1131) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	int16_t x110 = -13;
	static int8_t x111 = 0;
	int64_t t27 = -1135559830368LL;

	t27 = ((x109|x110)-(x111%x112));

	if (t27 != -13LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	static volatile int64_t x114 = -1LL;
	uint8_t x115 = UINT8_MAX;
	volatile uint16_t x116 = 31U;
	static int64_t t28 = 1LL;

	t28 = ((x113|x114)-(x115%x116));

	if (t28 != -8LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 1;
	volatile int16_t x119 = -1;
	int64_t x120 = -1952599LL;
	static volatile int64_t t29 = 5871116LL;

	t29 = ((x117|x118)-(x119%x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x123 = INT16_MAX;
	int32_t x124 = -1;
	static volatile int32_t t30 = -20166;

	t30 = ((x121|x122)-(x123%x124));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = UINT64_MAX;
	static int8_t x126 = INT8_MIN;
	uint16_t x127 = 287U;
	static int16_t x128 = -210;
	static uint64_t t31 = 7136827964178914LLU;

	t31 = ((x125|x126)-(x127%x128));

	if (t31 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	uint64_t x131 = 24399LLU;
	uint64_t x132 = 2849463847333072LLU;
	uint64_t t32 = 8797314LLU;

	t32 = ((x129|x130)-(x131%x132));

	if (t32 != 18446744073709494449LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 2U;
	uint64_t x134 = 5763456466LLU;
	volatile int8_t x135 = -28;
	uint64_t x136 = 590586LLU;
	uint64_t t33 = 1997048086528938LLU;

	t33 = ((x133|x134)-(x135%x136));

	if (t33 != 5763375538LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x139 = 177095490115LLU;

	t34 = ((x137|x138)-(x139%x140));

	if (t34 != 18446743896614061500LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 0;
	int8_t x142 = 27;
	uint32_t x144 = UINT32_MAX;
	uint32_t t35 = 28477U;

	t35 = ((x141|x142)-(x143%x144));

	if (t35 != 4294952097U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	static int64_t x146 = -49570967LL;
	int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MIN;
	int64_t t36 = -7561LL;

	t36 = ((x145|x146)-(x147%x148));

	if (t36 != -25751LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MIN;
	int64_t x152 = 3900LL;
	uint64_t t37 = 110983659603762757LLU;

	t37 = ((x149|x150)-(x151%x152));

	if (t37 != 18446744073709548630LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	uint8_t x155 = 29U;
	int16_t x156 = -1;
	int32_t t38 = INT32_MAX;

	t38 = ((x153|x154)-(x155%x156));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = UINT16_MAX;
	static volatile int64_t x162 = -1LL;
	uint8_t x163 = 2U;
	static int8_t x164 = INT8_MIN;

	t39 = ((x161|x162)-(x163%x164));

	if (t39 != -3LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x170 = UINT8_MAX;
	volatile int8_t x171 = 0;
	static int32_t x172 = 2;

	t40 = ((x169|x170)-(x171%x172));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = 0;
	static int64_t x174 = -1LL;
	int8_t x175 = INT8_MIN;
	int32_t x176 = INT32_MIN;
	volatile int64_t t41 = 3718314LL;

	t41 = ((x173|x174)-(x175%x176));

	if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = -247474;
	int32_t x180 = 52167521;

	t42 = ((x177|x178)-(x179%x180));

	if (t42 != -115666) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x183 = -1;
	volatile int64_t t43 = -496841431LL;

	t43 = ((x181|x182)-(x183%x184));

	if (t43 != 4294967296LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -1;
	uint16_t x186 = UINT16_MAX;
	int32_t x187 = 1;
	uint32_t x188 = UINT32_MAX;

	t44 = ((x185|x186)-(x187%x188));

	if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = 18022U;
	int64_t x192 = INT64_MAX;
	uint64_t t45 = 1771557023LLU;

	t45 = ((x189|x190)-(x191%x192));

	if (t45 != 18446744073708023558LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = -28026LL;
	static uint8_t x194 = 0U;
	static volatile int32_t x195 = INT32_MIN;
	volatile uint64_t t46 = 368LLU;

	t46 = ((x193|x194)-(x195%x196));

	if (t46 != 2147455622LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	volatile int16_t x199 = -57;
	volatile uint32_t x200 = UINT32_MAX;

	t47 = ((x197|x198)-(x199%x200));

	if (t47 != 56U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -15;
	int32_t x202 = INT32_MIN;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = 10548U;
	static uint32_t t48 = 62U;

	t48 = ((x201|x202)-(x203%x204));

	if (t48 != 4294961501U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = 914444U;
	static int32_t x206 = INT32_MAX;
	uint64_t x207 = 20884053932407995LLU;
	uint32_t x208 = 47120250U;
	static uint64_t t49 = 2191098LLU;

	t49 = ((x205|x206)-(x207%x208));

	if (t49 != 2118500902LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x210 = 0U;
	int16_t x211 = INT16_MIN;
	volatile int16_t x212 = 91;

	t50 = ((x209|x210)-(x211%x212));

	if (t50 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x213 = UINT64_MAX;
	volatile int16_t x214 = -1;
	int32_t x215 = -1;
	static uint16_t x216 = 24U;
	static volatile uint64_t t51 = 3228LLU;

	t51 = ((x213|x214)-(x215%x216));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = UINT64_MAX;
	static volatile uint64_t x218 = UINT64_MAX;
	static uint64_t x220 = 130909133728LLU;
	uint64_t t52 = 48527751LLU;

	t52 = ((x217|x218)-(x219%x220));

	if (t52 != 18446744040995798463LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x221 = 4470432615910420462LLU;
	uint32_t x222 = 29U;
	volatile uint32_t x223 = 181821U;
	int32_t x224 = -1;
	volatile uint64_t t53 = 4796434466825793714LLU;

	t53 = ((x221|x222)-(x223%x224));

	if (t53 != 4470432615910238658LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = INT16_MIN;
	volatile uint8_t x226 = UINT8_MAX;
	static int8_t x227 = -3;
	int32_t x228 = INT32_MIN;
	volatile int32_t t54 = -12;

	t54 = ((x225|x226)-(x227%x228));

	if (t54 != -32510) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MAX;
	volatile int8_t x231 = INT8_MIN;
	volatile int8_t x232 = INT8_MAX;
	volatile int32_t t55 = -468486;

	t55 = ((x229|x230)-(x231%x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	static int64_t x236 = INT64_MIN;

	t56 = ((x233|x234)-(x235%x236));

	if (t56 != -8LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x238 = -2015662422557LL;
	static volatile int64_t x239 = INT64_MIN;
	int16_t x240 = INT16_MIN;
	int64_t t57 = -1LL;

	t57 = ((x237|x238)-(x239%x240));

	if (t57 != -2015623458833LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x241 = 7U;
	uint16_t x242 = 7U;
	static volatile int32_t x243 = INT32_MAX;
	int32_t t58 = -5;

	t58 = ((x241|x242)-(x243%x244));

	if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	int64_t x246 = -1LL;
	static int32_t x247 = INT32_MIN;
	int64_t t59 = -23709701936315905LL;

	t59 = ((x245|x246)-(x247%x248));

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x250 = 173006382U;
	volatile int64_t x251 = 414056297456115LL;
	volatile uint32_t x252 = UINT32_MAX;
	volatile int64_t t60 = 1370474LL;

	t60 = ((x249|x250)-(x251%x252));

	if (t60 != -4097342552LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MAX;
	int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MIN;
	int16_t x256 = 426;
	int32_t t61 = -104;

	t61 = ((x253|x254)-(x255%x256));

	if (t61 != -32459) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = UINT8_MAX;
	uint16_t x258 = 2U;
	int16_t x259 = INT16_MIN;
	volatile int64_t x260 = INT64_MIN;
	volatile int64_t t62 = -81955260LL;

	t62 = ((x257|x258)-(x259%x260));

	if (t62 != 33023LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -15;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = 15;
	int16_t x264 = INT16_MIN;

	t63 = ((x261|x262)-(x263%x264));

	if (t63 != -16) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = 130687LL;
	int16_t x266 = 6122;
	uint64_t x267 = 243466813LLU;
	int16_t x268 = -872;
	volatile uint64_t t64 = 1510298032009354LLU;

	t64 = ((x265|x266)-(x267%x268));

	if (t64 != 18446744073466215874LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MIN;
	uint16_t x270 = 48U;
	int8_t x271 = -1;
	uint64_t t65 = 858406LLU;

	t65 = ((x269|x270)-(x271%x272));

	if (t65 != 14022483292210568659LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x274 = 0U;
	int64_t x276 = INT64_MAX;
	volatile int64_t t66 = 5396773LL;

	t66 = ((x273|x274)-(x275%x276));

	if (t66 != -241676LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x279 = 7LL;
	int16_t x280 = INT16_MIN;
	volatile int64_t t67 = 3014935716487521LL;

	t67 = ((x277|x278)-(x279%x280));

	if (t67 != -8LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x281 = INT8_MAX;
	int32_t x282 = -27747;
	int64_t x283 = INT64_MIN;
	volatile int8_t x284 = -1;

	t68 = ((x281|x282)-(x283%x284));

	if (t68 != -27649LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = 61979;
	int16_t x286 = 0;
	int32_t x287 = -652;
	int16_t x288 = -45;
	int32_t t69 = -592478494;

	t69 = ((x285|x286)-(x287%x288));

	if (t69 != 62001) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x289 = -1;
	static uint16_t x290 = 236U;
	int8_t x291 = INT8_MIN;
	static uint8_t x292 = UINT8_MAX;
	int32_t t70 = 177573716;

	t70 = ((x289|x290)-(x291%x292));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	int64_t x294 = -1LL;
	static int64_t x295 = -8260LL;
	uint64_t x296 = 23157LLU;

	t71 = ((x293|x294)-(x295%x296));

	if (t71 != 18446744073709544235LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = 1;
	uint32_t x298 = UINT32_MAX;
	int16_t x299 = 1310;
	uint32_t t72 = UINT32_MAX;

	t72 = ((x297|x298)-(x299%x300));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = 1063LLU;
	int8_t x302 = 7;
	int8_t x303 = INT8_MIN;
	uint32_t x304 = UINT32_MAX;
	static uint64_t t73 = 37170117388207805LLU;

	t73 = ((x301|x302)-(x303%x304));

	if (t73 != 18446744069414585511LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int64_t x306 = -1LL;
	uint16_t x307 = 3389U;
	static uint32_t x308 = UINT32_MAX;
	volatile int64_t t74 = 98614739967LL;

	t74 = ((x305|x306)-(x307%x308));

	if (t74 != -3390LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x309 = INT32_MAX;
	int32_t x310 = INT32_MAX;
	uint16_t x311 = 2679U;
	uint8_t x312 = 6U;
	static volatile int32_t t75 = -127;

	t75 = ((x309|x310)-(x311%x312));

	if (t75 != 2147483644) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = INT32_MIN;
	uint8_t x314 = UINT8_MAX;
	static uint32_t x315 = UINT32_MAX;
	volatile int64_t t76 = 85821LL;

	t76 = ((x313|x314)-(x315%x316));

	if (t76 != -6442450688LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x318 = -1;
	int32_t x319 = -97301;
	uint16_t x320 = 15U;
	volatile int64_t t77 = -2077765535944LL;

	t77 = ((x317|x318)-(x319%x320));

	if (t77 != 10LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x321 = UINT8_MAX;
	static int8_t x322 = -4;
	int32_t x323 = INT32_MAX;
	volatile int32_t t78 = 22;

	t78 = ((x321|x322)-(x323%x324));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MAX;
	uint64_t x327 = UINT64_MAX;
	int32_t x328 = -1;

	t79 = ((x325|x326)-(x327%x328));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = -1;
	int8_t x331 = INT8_MIN;
	int64_t x332 = INT64_MAX;
	volatile uint64_t t80 = 634685851321688035LLU;

	t80 = ((x329|x330)-(x331%x332));

	if (t80 != 127LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = INT32_MIN;
	int16_t x334 = -1;
	int16_t x335 = -58;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t81 = -512629;

	t81 = ((x333|x334)-(x335%x336));

	if (t81 != 57) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	uint8_t x340 = UINT8_MAX;
	int32_t t82 = 1809;

	t82 = ((x337|x338)-(x339%x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 0U;
	static uint16_t x342 = UINT16_MAX;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = -1LL;
	int64_t t83 = -18599021LL;

	t83 = ((x341|x342)-(x343%x344));

	if (t83 != 65535LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MAX;
	int8_t x346 = -1;
	uint16_t x347 = 608U;
	volatile uint32_t x348 = 959596956U;
	uint32_t t84 = 91117461U;

	t84 = ((x345|x346)-(x347%x348));

	if (t84 != 4294966687U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x350 = 6691879637452LL;
	volatile int64_t x351 = -1LL;
	volatile int64_t t85 = 574723LL;

	t85 = ((x349|x350)-(x351%x352));

	if (t85 != -9223365344975138355LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x353 = 795655LL;
	int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MIN;
	volatile uint64_t t86 = 14319591952200911LLU;

	t86 = ((x353|x354)-(x355%x356));

	if (t86 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = INT64_MAX;
	int16_t x359 = -1;
	volatile int64_t x360 = INT64_MIN;
	int64_t t87 = 1080543519005344LL;

	t87 = ((x357|x358)-(x359%x360));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x365 = -1;
	uint16_t x366 = 30U;
	volatile uint8_t x367 = 75U;
	volatile uint32_t x368 = UINT32_MAX;
	static uint32_t t88 = 0U;

	t88 = ((x365|x366)-(x367%x368));

	if (t88 != 4294967220U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x369 = UINT64_MAX;
	volatile uint8_t x370 = UINT8_MAX;
	uint16_t x371 = UINT16_MAX;
	int64_t x372 = 1230639428112342411LL;
	volatile uint64_t t89 = 862LLU;

	t89 = ((x369|x370)-(x371%x372));

	if (t89 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = 6LL;
	uint32_t x374 = 245715079U;
	volatile uint64_t x376 = 13457474LLU;

	t90 = ((x373|x374)-(x375%x376));

	if (t90 != 240448606LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x377 = UINT32_MAX;
	uint16_t x378 = 301U;
	uint8_t x380 = 34U;
	static uint32_t t91 = 131345U;

	t91 = ((x377|x378)-(x379%x380));

	if (t91 != 4294967288U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x381 = 22U;
	uint16_t x382 = UINT16_MAX;
	volatile uint64_t x383 = 48528298535106LLU;
	uint32_t x384 = UINT32_MAX;

	t92 = ((x381|x382)-(x383%x384));

	if (t92 != 18446744069951580955LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x385 = 18LLU;
	int32_t x387 = 1;
	volatile int16_t x388 = INT16_MIN;
	volatile uint64_t t93 = 81884224909231519LLU;

	t93 = ((x385|x386)-(x387%x388));

	if (t93 != 17LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = INT8_MAX;
	uint32_t x390 = UINT32_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	int64_t x392 = INT64_MAX;
	int64_t t94 = -100709329963084375LL;

	t94 = ((x389|x390)-(x391%x392));

	if (t94 != 4294901760LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x394 = 3731U;
	int8_t x395 = INT8_MIN;
	static int64_t x396 = -1LL;

	t95 = ((x393|x394)-(x395%x396));

	if (t95 != -29037LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x397 = 14433492U;
	static int8_t x398 = -1;
	int8_t x399 = -1;
	volatile int8_t x400 = -3;
	uint32_t t96 = 3U;

	t96 = ((x397|x398)-(x399%x400));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x401 = UINT16_MAX;
	uint64_t x402 = 7LLU;
	int8_t x403 = INT8_MAX;
	volatile uint64_t t97 = 16842234450LLU;

	t97 = ((x401|x402)-(x403%x404));

	if (t97 != 65408LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = UINT8_MAX;
	volatile int32_t x406 = -5;
	int8_t x407 = INT8_MIN;
	volatile uint64_t t98 = 56LLU;

	t98 = ((x405|x406)-(x407%x408));

	if (t98 != 18446490321632493427LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MIN;
	int64_t x411 = 857417610449679621LL;
	static uint64_t t99 = 198LLU;

	t99 = ((x409|x410)-(x411%x412));

	if (t99 != 8365954426405096190LLU) { NG(); } else { ; }
	
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

