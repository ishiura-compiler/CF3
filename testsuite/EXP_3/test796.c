#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 112U;
uint8_t x4 = 27U;
uint8_t x7 = UINT8_MAX;
int8_t x10 = -15;
int64_t x11 = INT64_MAX;
static int32_t t3 = 48;
int32_t x17 = INT32_MIN;
uint8_t x20 = 30U;
static volatile int32_t t4 = -3886300;
int32_t x31 = -1;
volatile int16_t x33 = INT16_MIN;
static volatile int32_t x34 = INT32_MAX;
static int64_t x35 = INT64_MIN;
int16_t x38 = -192;
uint32_t x40 = UINT32_MAX;
uint8_t x43 = UINT8_MAX;
volatile int32_t x45 = 16092108;
volatile int32_t x46 = INT32_MAX;
int8_t x47 = INT8_MIN;
int64_t x52 = -13251159101164LL;
int32_t t13 = 23;
static volatile uint8_t x73 = UINT8_MAX;
int8_t x75 = INT8_MIN;
uint64_t x88 = 26LLU;
static int64_t x89 = 1362648414844LL;
int32_t x90 = INT32_MAX;
int32_t x92 = -8;
int64_t t21 = -290832808259227LL;
uint16_t x96 = 69U;
volatile int64_t t22 = -215083369LL;
volatile int64_t t23 = -23LL;
int64_t x101 = INT64_MIN;
int32_t x102 = INT32_MIN;
uint8_t x109 = 18U;
static int64_t x112 = INT64_MIN;
int64_t x114 = INT64_MAX;
int64_t t28 = -107LL;
volatile uint64_t x129 = 167313LLU;
int16_t x130 = INT16_MIN;
uint16_t x133 = UINT16_MAX;
int32_t x139 = -1;
static int64_t x145 = INT64_MIN;
uint64_t x152 = 2023LLU;
static int32_t x155 = INT32_MIN;
int32_t x156 = INT32_MIN;
volatile int32_t t36 = 5572;
static uint32_t x160 = 19031U;
int32_t x162 = 337390;
int32_t t38 = 466;
volatile uint64_t t40 = 26176823055LLU;
uint32_t t42 = 474266011U;
static int32_t x182 = INT32_MIN;
volatile int64_t t43 = 30657LL;
volatile uint32_t x189 = UINT32_MAX;
int16_t x190 = 528;
static int32_t x191 = 2258;
static volatile uint64_t x195 = UINT64_MAX;
int64_t x196 = INT64_MAX;
volatile int16_t x200 = 3960;
int8_t x210 = -1;
static int64_t t50 = 209825680455071144LL;
uint8_t x213 = 14U;
volatile int8_t x222 = INT8_MAX;
int16_t x223 = INT16_MAX;
volatile int8_t x229 = -1;
volatile int64_t t55 = -7471904810LL;
uint16_t x242 = UINT16_MAX;
static int16_t x243 = INT16_MIN;
volatile int32_t t57 = 27;
static int16_t x246 = INT16_MAX;
int64_t t59 = 914185423772687270LL;
volatile int64_t x259 = 5796LL;
uint8_t x268 = 5U;
volatile int32_t t63 = -5;
volatile uint64_t t64 = 2775LLU;
int32_t t68 = -195129817;
static int64_t x290 = 134438604008474LL;
int8_t x295 = 6;
int64_t x311 = -1LL;
int32_t t75 = 26;
int64_t t77 = 466364559436991552LL;
int64_t x330 = -1LL;
volatile int8_t x331 = INT8_MAX;
uint64_t x333 = 46546LLU;
int16_t x347 = INT16_MIN;
uint8_t x349 = 4U;
int32_t x350 = INT32_MAX;
uint8_t x351 = 28U;
int64_t t83 = 1890461344436327254LL;
int16_t x356 = INT16_MAX;
uint64_t t85 = 14528LLU;
int8_t x361 = 12;
static int32_t x362 = INT32_MIN;
static volatile int16_t x367 = INT16_MIN;
uint8_t x371 = 2U;
static volatile int32_t t89 = 0;
uint64_t x377 = UINT64_MAX;
int8_t x379 = 1;
int32_t x383 = 81055250;
uint16_t x386 = UINT16_MAX;
uint32_t x389 = 255U;
volatile uint16_t x391 = 58U;
int32_t x394 = INT32_MIN;
int64_t x399 = INT64_MIN;
int64_t x401 = -27697147687037LL;
static int8_t x402 = -1;
int8_t x409 = -1;
int32_t t98 = 5369;
int16_t x414 = 16095;


void f0(void) {
	int32_t x2 = -1;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = -975539929;

	t0 = ((x1<=x2)*(x3%x4));

	if (t0 != -17) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	int64_t x6 = INT64_MAX;
	static volatile int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -431234;

	t1 = ((x5<=x6)*(x7%x8));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	uint32_t x12 = 8823U;
	volatile int64_t t2 = -1LL;

	t2 = ((x9<=x10)*(x11%x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int64_t x14 = -7941LL;
	volatile uint16_t x15 = UINT16_MAX;
	static int32_t x16 = INT32_MIN;

	t3 = ((x13<=x14)*(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	static uint8_t x19 = 63U;

	t4 = ((x17<=x18)*(x19%x20));

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 3088LLU;
	volatile int64_t x26 = INT64_MAX;
	int16_t x27 = -223;
	uint64_t x28 = UINT64_MAX;
	uint64_t t5 = 6956428131829339462LLU;

	t5 = ((x25<=x26)*(x27%x28));

	if (t5 != 18446744073709551393LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	uint8_t x30 = 11U;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = -7;

	t6 = ((x29<=x30)*(x31%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x36 = -3031514414757021924LL;
	int64_t t7 = 27814033245018754LL;

	t7 = ((x33<=x34)*(x35%x36));

	if (t7 != -128828792583710036LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x37 = 22243251027LLU;
	int32_t x39 = 216843;
	uint32_t t8 = 73632U;

	t8 = ((x37<=x38)*(x39%x40));

	if (t8 != 216843U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = 27U;
	volatile uint32_t x42 = 272248062U;
	int32_t x44 = INT32_MAX;
	int32_t t9 = 58;

	t9 = ((x41<=x42)*(x43%x44));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x48 = INT8_MIN;
	int32_t t10 = 30537;

	t10 = ((x45<=x46)*(x47%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = INT16_MIN;
	uint64_t x50 = 6867933205982238411LLU;
	int16_t x51 = 43;
	int64_t t11 = 670057603436657LL;

	t11 = ((x49<=x50)*(x51%x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 167793239202612LLU;
	int8_t x54 = 0;
	int8_t x55 = INT8_MIN;
	static uint32_t x56 = 32843U;
	uint32_t t12 = 824U;

	t12 = ((x53<=x54)*(x55%x56));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MIN;
	volatile int8_t x58 = INT8_MIN;
	int8_t x59 = 2;
	int32_t x60 = -21965;

	t13 = ((x57<=x58)*(x59%x60));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = 5963168580LL;
	static int16_t x62 = INT16_MAX;
	static int64_t x63 = 203LL;
	static uint16_t x64 = 1236U;
	int64_t t14 = 1884619778LL;

	t14 = ((x61<=x62)*(x63%x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MIN;
	static int8_t x68 = -1;
	volatile int32_t t15 = -2962059;

	t15 = ((x65<=x66)*(x67%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 13U;
	int16_t x70 = INT16_MIN;
	static volatile int32_t x71 = -1;
	volatile int64_t x72 = 12882326LL;
	int64_t t16 = 265347121528LL;

	t16 = ((x69<=x70)*(x71%x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = 26U;
	uint32_t x76 = UINT32_MAX;
	uint32_t t17 = 7U;

	t17 = ((x73<=x74)*(x75%x76));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 10307833U;
	int16_t x78 = -19;
	int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t18 = -472879;

	t18 = ((x77<=x78)*(x79%x80));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = 3U;
	int32_t x82 = 314138;
	volatile int32_t x83 = INT32_MIN;
	uint32_t x84 = 2909U;
	volatile uint32_t t19 = 21207242U;

	t19 = ((x81<=x82)*(x83%x84));

	if (t19 != 1668U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -5;
	static int64_t x86 = -1LL;
	int32_t x87 = -1;
	uint64_t t20 = 351615LLU;

	t20 = ((x85<=x86)*(x87%x88));

	if (t20 != 15LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x91 = -1926074089470LL;

	t21 = ((x89<=x90)*(x91%x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = INT64_MAX;
	int8_t x94 = 1;
	volatile int64_t x95 = INT64_MIN;

	t22 = ((x93<=x94)*(x95%x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 917U;
	uint64_t x98 = UINT64_MAX;
	int16_t x99 = INT16_MAX;
	static int64_t x100 = -1329899750205921LL;

	t23 = ((x97<=x98)*(x99%x100));

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x103 = 751;
	uint16_t x104 = 6382U;
	static volatile int32_t t24 = -28;

	t24 = ((x101<=x102)*(x103%x104));

	if (t24 != 751) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x105 = 91U;
	int8_t x106 = -1;
	volatile uint32_t x107 = UINT32_MAX;
	static int16_t x108 = 104;
	uint32_t t25 = 815945860U;

	t25 = ((x105<=x106)*(x107%x108));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = 33;
	uint8_t x111 = UINT8_MAX;
	static int64_t t26 = 532273522736LL;

	t26 = ((x109<=x110)*(x111%x112));

	if (t26 != 255LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	static uint8_t x115 = UINT8_MAX;
	uint16_t x116 = UINT16_MAX;
	static volatile int32_t t27 = 853517344;

	t27 = ((x113<=x114)*(x115%x116));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = INT8_MAX;
	uint8_t x118 = 2U;
	int64_t x119 = -3LL;
	uint8_t x120 = 8U;

	t28 = ((x117<=x118)*(x119%x120));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = 1;
	volatile uint32_t x122 = 9U;
	static int32_t x123 = INT32_MIN;
	int32_t x124 = -987;
	int32_t t29 = 47130;

	t29 = ((x121<=x122)*(x123%x124));

	if (t29 != -632) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = 11604465;
	int32_t t30 = 634;

	t30 = ((x129<=x130)*(x131%x132));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x134 = 42;
	int8_t x135 = 0;
	volatile int32_t x136 = 89488664;
	volatile int32_t t31 = -51216;

	t31 = ((x133<=x134)*(x135%x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -1;
	int32_t x138 = INT32_MAX;
	static int32_t x140 = -1;
	static int32_t t32 = -18138549;

	t32 = ((x137<=x138)*(x139%x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x141 = 16193419461LLU;
	int8_t x142 = -1;
	static int64_t x143 = -601608879019253500LL;
	uint16_t x144 = 818U;
	volatile int64_t t33 = -280LL;

	t33 = ((x141<=x142)*(x143%x144));

	if (t33 != -800LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x146 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;
	static volatile int64_t x148 = -339LL;
	volatile int64_t t34 = -237154LL;

	t34 = ((x145<=x146)*(x147%x148));

	if (t34 != 255LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 11602U;
	static uint32_t x150 = 594U;
	volatile int8_t x151 = 42;
	volatile uint64_t t35 = 65034507506971826LLU;

	t35 = ((x149<=x150)*(x151%x152));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = 2230678LL;
	volatile int8_t x154 = -1;

	t36 = ((x153<=x154)*(x155%x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = 2858095;
	uint16_t x158 = UINT16_MAX;
	int64_t x159 = -12078205314692LL;
	int64_t t37 = -3490043136338463LL;

	t37 = ((x157<=x158)*(x159%x160));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = UINT64_MAX;
	int32_t x163 = 31047;
	static int32_t x164 = -238476035;

	t38 = ((x161<=x162)*(x163%x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x165 = -1;
	int8_t x166 = INT8_MAX;
	int16_t x167 = 6133;
	uint64_t x168 = 120793338LLU;
	volatile uint64_t t39 = 823983088856LLU;

	t39 = ((x165<=x166)*(x167%x168));

	if (t39 != 6133LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 102U;
	int16_t x170 = INT16_MIN;
	uint64_t x171 = 17515080349679LLU;
	int32_t x172 = -3569;

	t40 = ((x169<=x170)*(x171%x172));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x173 = UINT32_MAX;
	static volatile uint16_t x174 = 10703U;
	int32_t x175 = -526;
	uint8_t x176 = 32U;
	int32_t t41 = -222605561;

	t41 = ((x173<=x174)*(x175%x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 1;
	int8_t x178 = INT8_MIN;
	int8_t x179 = -1;
	uint32_t x180 = UINT32_MAX;

	t42 = ((x177<=x178)*(x179%x180));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = -100077386LL;

	t43 = ((x181<=x182)*(x183%x184));

	if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = 93902152661LLU;
	volatile int64_t x186 = -234135124LL;
	int8_t x187 = -1;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t44 = -81;

	t44 = ((x185<=x186)*(x187%x188));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x192 = -1;
	volatile int32_t t45 = -120;

	t45 = ((x189<=x190)*(x191%x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	volatile int64_t x194 = INT64_MIN;
	static volatile uint64_t t46 = 5586440568LLU;

	t46 = ((x193<=x194)*(x195%x196));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	volatile int64_t x198 = INT64_MAX;
	uint16_t x199 = 0U;
	int32_t t47 = 3;

	t47 = ((x197<=x198)*(x199%x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -1;
	int8_t x202 = -1;
	int8_t x203 = INT8_MIN;
	int8_t x204 = -14;
	static int32_t t48 = -55;

	t48 = ((x201<=x202)*(x203%x204));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x205 = -1;
	static int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	uint8_t x208 = 18U;
	int32_t t49 = -1;

	t49 = ((x205<=x206)*(x207%x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x209 = 714U;
	uint8_t x211 = 14U;
	int64_t x212 = INT64_MAX;

	t50 = ((x209<=x210)*(x211%x212));

	if (t50 != 14LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x214 = 42993435LL;
	int16_t x215 = INT16_MIN;
	uint32_t x216 = UINT32_MAX;
	static volatile uint32_t t51 = 15U;

	t51 = ((x213<=x214)*(x215%x216));

	if (t51 != 4294934528U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = 43;
	int64_t x218 = 35051LL;
	static int64_t x219 = -1LL;
	uint8_t x220 = 48U;
	int64_t t52 = 16721573697LL;

	t52 = ((x217<=x218)*(x219%x220));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MAX;
	int64_t x224 = 31LL;
	int64_t t53 = -19808LL;

	t53 = ((x221<=x222)*(x223%x224));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x230 = INT16_MIN;
	uint16_t x231 = UINT16_MAX;
	static int32_t x232 = INT32_MIN;
	int32_t t54 = -13;

	t54 = ((x229<=x230)*(x231%x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	volatile uint32_t x234 = 1U;
	static int64_t x235 = 26428760715460LL;
	volatile int64_t x236 = 835227LL;

	t55 = ((x233<=x234)*(x235%x236));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = 1019123LLU;
	static int64_t x238 = INT64_MIN;
	uint16_t x239 = 5U;
	int8_t x240 = -1;
	volatile int32_t t56 = -6170512;

	t56 = ((x237<=x238)*(x239%x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = -1;
	static uint16_t x244 = 349U;

	t57 = ((x241<=x242)*(x243%x244));

	if (t57 != -311) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x245 = 31U;
	volatile int32_t x247 = 54529;
	int64_t x248 = -1034261LL;
	int64_t t58 = -2968602026346LL;

	t58 = ((x245<=x246)*(x247%x248));

	if (t58 != 54529LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 769519U;
	int64_t x250 = INT64_MIN;
	static int64_t x251 = 173042LL;
	volatile int8_t x252 = -1;

	t59 = ((x249<=x250)*(x251%x252));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x253 = -1;
	uint16_t x254 = 4977U;
	uint64_t x255 = 101790975018LLU;
	int16_t x256 = 142;
	volatile uint64_t t60 = 2293LLU;

	t60 = ((x253<=x254)*(x255%x256));

	if (t60 != 34LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = UINT16_MAX;
	volatile uint16_t x258 = UINT16_MAX;
	uint16_t x260 = UINT16_MAX;
	int64_t t61 = -80221LL;

	t61 = ((x257<=x258)*(x259%x260));

	if (t61 != 5796LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = 117U;
	int8_t x262 = 34;
	int8_t x263 = INT8_MIN;
	int8_t x264 = -1;
	volatile int32_t t62 = 2206765;

	t62 = ((x261<=x262)*(x263%x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x265 = 3340333060335468LLU;
	volatile int32_t x266 = 940061;
	int32_t x267 = INT32_MIN;

	t63 = ((x265<=x266)*(x267%x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x269 = 22U;
	uint16_t x270 = 1013U;
	uint64_t x271 = UINT64_MAX;
	int8_t x272 = -9;

	t64 = ((x269<=x270)*(x271%x272));

	if (t64 != 8LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 7654368LLU;
	volatile uint64_t x274 = UINT64_MAX;
	uint8_t x275 = UINT8_MAX;
	volatile int32_t x276 = -826977351;
	volatile int32_t t65 = 1935;

	t65 = ((x273<=x274)*(x275%x276));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = UINT16_MAX;
	uint32_t x278 = UINT32_MAX;
	uint16_t x279 = UINT16_MAX;
	uint32_t x280 = 26476949U;
	volatile uint32_t t66 = 83397708U;

	t66 = ((x277<=x278)*(x279%x280));

	if (t66 != 65535U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x281 = INT64_MIN;
	int16_t x282 = -1;
	volatile uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MIN;
	int64_t t67 = -193768261793LL;

	t67 = ((x281<=x282)*(x283%x284));

	if (t67 != 255LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = -1;
	static int32_t x286 = INT32_MIN;
	int16_t x287 = -1;
	uint8_t x288 = 25U;

	t68 = ((x285<=x286)*(x287%x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x289 = INT32_MIN;
	volatile int8_t x291 = INT8_MAX;
	static int64_t x292 = INT64_MAX;
	int64_t t69 = -25382LL;

	t69 = ((x289<=x290)*(x291%x292));

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x293 = 1U;
	volatile int16_t x294 = INT16_MAX;
	static int32_t x296 = INT32_MIN;
	int32_t t70 = -15054;

	t70 = ((x293<=x294)*(x295%x296));

	if (t70 != 6) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = -1;
	volatile int32_t x298 = 1607;
	int64_t x299 = INT64_MAX;
	int8_t x300 = 1;
	volatile int64_t t71 = -519619611732LL;

	t71 = ((x297<=x298)*(x299%x300));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x301 = 39175LLU;
	static uint64_t x302 = UINT64_MAX;
	static int8_t x303 = -1;
	static int8_t x304 = -41;
	volatile int32_t t72 = 15932660;

	t72 = ((x301<=x302)*(x303%x304));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x305 = -1;
	volatile int8_t x306 = 1;
	int16_t x307 = -2207;
	static int64_t x308 = INT64_MAX;
	int64_t t73 = -6830583465521676LL;

	t73 = ((x305<=x306)*(x307%x308));

	if (t73 != -2207LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x309 = -1LL;
	volatile int8_t x310 = 6;
	static uint64_t x312 = UINT64_MAX;
	volatile uint64_t t74 = 8437711081451832064LLU;

	t74 = ((x309<=x310)*(x311%x312));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = 343701648184627LL;
	static int64_t x314 = INT64_MAX;
	int32_t x315 = INT32_MAX;
	volatile int8_t x316 = 27;

	t75 = ((x313<=x314)*(x315%x316));

	if (t75 != 10) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x321 = INT32_MIN;
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = INT32_MIN;
	uint64_t x324 = UINT64_MAX;
	uint64_t t76 = 73056879874434687LLU;

	t76 = ((x321<=x322)*(x323%x324));

	if (t76 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x325 = 1;
	int8_t x326 = -3;
	volatile uint16_t x327 = 8U;
	static int64_t x328 = -16616902966515257LL;

	t77 = ((x325<=x326)*(x327%x328));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x329 = -2123695;
	static int64_t x332 = INT64_MIN;
	static int64_t t78 = 0LL;

	t78 = ((x329<=x330)*(x331%x332));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x334 = 13331205742508987LLU;
	int64_t x335 = 419577165LL;
	static uint32_t x336 = UINT32_MAX;
	volatile int64_t t79 = 255575LL;

	t79 = ((x333<=x334)*(x335%x336));

	if (t79 != 419577165LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MIN;
	int64_t x339 = -117372LL;
	static uint64_t x340 = UINT64_MAX;
	static uint64_t t80 = 4532224185272LLU;

	t80 = ((x337<=x338)*(x339%x340));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x341 = UINT8_MAX;
	uint32_t x342 = 7224U;
	volatile int16_t x343 = INT16_MIN;
	static uint8_t x344 = 2U;
	volatile int32_t t81 = 327;

	t81 = ((x341<=x342)*(x343%x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = UINT8_MAX;
	static volatile int64_t x346 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t82 = -18;

	t82 = ((x345<=x346)*(x347%x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x352 = INT64_MIN;

	t83 = ((x349<=x350)*(x351%x352));

	if (t83 != 28LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = 0U;
	static int64_t x354 = -1LL;
	static uint16_t x355 = 9952U;
	volatile int32_t t84 = -13;

	t84 = ((x353<=x354)*(x355%x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = INT32_MAX;
	uint64_t x358 = UINT64_MAX;
	volatile uint64_t x359 = UINT64_MAX;
	volatile uint16_t x360 = UINT16_MAX;

	t85 = ((x357<=x358)*(x359%x360));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x363 = INT32_MIN;
	int64_t x364 = -216594988631424LL;
	volatile int64_t t86 = -1357346LL;

	t86 = ((x361<=x362)*(x363%x364));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = -1;
	volatile uint16_t x366 = UINT16_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t87 = -4413980;

	t87 = ((x365<=x366)*(x367%x368));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x370 = 109U;
	uint32_t x372 = UINT32_MAX;
	uint32_t t88 = 1U;

	t88 = ((x369<=x370)*(x371%x372));

	if (t88 != 2U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x373 = -9;
	uint32_t x374 = 68U;
	int8_t x375 = 1;
	static volatile int32_t x376 = -1;

	t89 = ((x373<=x374)*(x375%x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x378 = UINT16_MAX;
	volatile int64_t x380 = -176LL;
	int64_t t90 = 1LL;

	t90 = ((x377<=x378)*(x379%x380));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x381 = 837;
	volatile int32_t x382 = -1;
	int8_t x384 = INT8_MIN;
	volatile int32_t t91 = -1556263;

	t91 = ((x381<=x382)*(x383%x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x385 = 2110U;
	static int8_t x387 = INT8_MIN;
	static volatile int8_t x388 = -1;
	volatile int32_t t92 = 5;

	t92 = ((x385<=x386)*(x387%x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x390 = 6991;
	volatile uint64_t x392 = 611627062881630066LLU;
	volatile uint64_t t93 = 2537250510LLU;

	t93 = ((x389<=x390)*(x391%x392));

	if (t93 != 58LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MIN;
	volatile int64_t x395 = INT64_MAX;
	int64_t x396 = 940664513433569344LL;
	int64_t t94 = -16212180LL;

	t94 = ((x393<=x394)*(x395%x396));

	if (t94 != 757391415952651711LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int16_t x398 = 1003;
	uint64_t x400 = 105LLU;
	uint64_t t95 = 3919252202389140LLU;

	t95 = ((x397<=x398)*(x399%x400));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x403 = -4562;
	static uint32_t x404 = UINT32_MAX;
	static volatile uint32_t t96 = 852U;

	t96 = ((x401<=x402)*(x403%x404));

	if (t96 != 4294962734U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x405 = INT32_MAX;
	int32_t x406 = -1;
	static int8_t x407 = INT8_MIN;
	int32_t x408 = 170253026;
	static volatile int32_t t97 = 88167083;

	t97 = ((x405<=x406)*(x407%x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x410 = INT32_MIN;
	int32_t x411 = INT32_MIN;
	int16_t x412 = 1;

	t98 = ((x409<=x410)*(x411%x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = INT16_MAX;
	uint64_t x415 = UINT64_MAX;
	static int32_t x416 = -59085835;
	volatile uint64_t t99 = 46483250279760421LLU;

	t99 = ((x413<=x414)*(x415%x416));

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

