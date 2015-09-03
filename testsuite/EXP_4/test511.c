#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
static volatile uint8_t x17 = UINT8_MAX;
static volatile uint64_t x20 = 1669LLU;
uint64_t x26 = 166139518LLU;
volatile uint8_t x28 = UINT8_MAX;
int8_t x30 = -1;
volatile int32_t t5 = 1941;
volatile int64_t t8 = 194872001LL;
int16_t x45 = -1;
uint16_t x46 = 495U;
int64_t x47 = 42LL;
int16_t x48 = INT16_MIN;
uint32_t x52 = 3340918U;
int64_t x53 = INT64_MAX;
uint64_t x55 = 72323198622LLU;
uint64_t x56 = UINT64_MAX;
volatile int8_t x58 = INT8_MIN;
int16_t x63 = -1;
int16_t x68 = -244;
int8_t x70 = INT8_MIN;
int64_t x71 = INT64_MIN;
static int16_t x77 = -1;
uint32_t x80 = 102137767U;
int32_t x94 = -1118;
int8_t x98 = -1;
int64_t t23 = -3470LL;
volatile int32_t x105 = INT32_MIN;
static int64_t x107 = -351LL;
volatile int64_t t24 = -1323677422677452681LL;
volatile int16_t x109 = INT16_MAX;
int16_t x119 = 6361;
int8_t x120 = INT8_MIN;
volatile uint32_t t27 = 12U;
int8_t x121 = INT8_MIN;
int8_t x125 = INT8_MAX;
uint64_t x126 = 16LLU;
static int8_t x132 = 29;
static int64_t t31 = 18453784859433LL;
int16_t x138 = 36;
uint64_t t33 = 56416793586LLU;
static int64_t x147 = INT64_MAX;
int16_t x151 = INT16_MIN;
static int64_t x152 = -1LL;
int32_t x155 = INT32_MIN;
volatile int64_t t36 = -416LL;
volatile int32_t t37 = -28786882;
uint16_t x170 = 5U;
volatile int32_t t40 = -2061;
uint32_t x183 = 1785797124U;
uint32_t x190 = 4677895U;
volatile int16_t x194 = 44;
uint64_t t45 = 3116LLU;
int8_t x204 = INT8_MIN;
static int64_t t47 = -79273049764LL;
int64_t x205 = INT64_MIN;
uint16_t x233 = 27U;
uint64_t t57 = 300769039295586LLU;
int32_t x261 = 716875472;
uint32_t x263 = UINT32_MAX;
int32_t x274 = INT32_MIN;
int8_t x277 = INT8_MIN;
uint64_t t65 = 15569173LLU;
int32_t x300 = INT32_MAX;
volatile int16_t x309 = INT16_MIN;
static uint64_t x324 = 44189LLU;
int64_t t77 = 1LL;
volatile uint16_t x337 = 1U;
static volatile uint64_t x338 = 17385041LLU;
int64_t t79 = -107LL;
static volatile int64_t t80 = -41917798663654452LL;
int32_t x359 = 222444731;
volatile int16_t x360 = INT16_MAX;
uint64_t x373 = 41660427088LLU;
volatile int8_t x375 = 16;
uint16_t x378 = 1820U;
static int64_t x380 = 848427LL;
uint64_t t86 = 3002815107112LLU;
int64_t x391 = -140486019767850LL;
int8_t x393 = INT8_MIN;
int16_t x397 = -4961;
int8_t x404 = -1;
volatile int16_t x412 = 1;
uint8_t x419 = 17U;
uint8_t x425 = 93U;
static volatile int64_t t98 = -342410092309332LL;
int16_t x440 = 668;


void f0(void) {
	uint16_t x2 = UINT16_MAX;
	int8_t x3 = -9;
	uint8_t x4 = 124U;
	volatile int32_t t0 = 893;

	t0 = (x1/(x2+(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 1161LL;
	int8_t x6 = -1;
	uint8_t x7 = 5U;
	int64_t x8 = INT64_MAX;
	volatile int64_t t1 = -3483809270836052LL;

	t1 = (x5/(x6+(x7/x8)));

	if (t1 != -1161LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint32_t x10 = UINT32_MAX;
	static int16_t x11 = -2;
	int16_t x12 = 5843;
	volatile uint32_t t2 = 2U;

	t2 = (x9/(x10+(x11/x12)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = UINT32_MAX;
	volatile int16_t x19 = -3658;
	static uint64_t t3 = 374128LLU;

	t3 = (x17/(x18+(x19/x20)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MAX;
	int32_t x27 = INT32_MIN;
	static uint64_t t4 = 6167980126LLU;

	t4 = (x25/(x26+(x27/x28)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	static uint8_t x32 = 57U;

	t5 = (x29/(x30+(x31/x32)));

	if (t5 != 42) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = INT32_MIN;
	uint8_t x34 = 0U;
	int8_t x35 = INT8_MIN;
	uint32_t x36 = 178U;
	volatile uint32_t t6 = 7767U;

	t6 = (x33/(x34+(x35/x36)));

	if (t6 != 89U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x37 = 92U;
	int32_t x38 = INT32_MAX;
	int32_t x39 = 0;
	uint32_t x40 = UINT32_MAX;
	static uint32_t t7 = 40473U;

	t7 = (x37/(x38+(x39/x40)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = INT64_MIN;
	int64_t x42 = 175197674LL;
	int16_t x43 = 1;
	volatile int64_t x44 = INT64_MIN;

	t8 = (x41/(x42+(x43/x44)));

	if (t8 != -52645516497LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t t9 = -2337898023464LL;

	t9 = (x45/(x46+(x47/x48)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = 3;
	static int32_t x51 = -1;
	uint32_t t10 = 79820U;

	t10 = (x49/(x50+(x51/x52)));

	if (t10 != 1667300U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x54 = INT16_MIN;
	static volatile uint64_t t11 = 17352914747637LLU;

	t11 = (x53/(x54+(x55/x56)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = INT8_MAX;
	uint8_t x59 = UINT8_MAX;
	int8_t x60 = 7;
	volatile int32_t t12 = 54245321;

	t12 = (x57/(x58+(x59/x60)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 3U;
	static volatile uint32_t x62 = 1959497719U;
	volatile int32_t x64 = -1;
	static volatile uint32_t t13 = 38U;

	t13 = (x61/(x62+(x63/x64)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x65 = 9;
	int64_t x66 = -276134LL;
	int8_t x67 = -22;
	volatile int64_t t14 = -203872443494557638LL;

	t14 = (x65/(x66+(x67/x68)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x69 = UINT32_MAX;
	volatile int32_t x72 = -6;
	int64_t t15 = -3452LL;

	t15 = (x69/(x70+(x71/x72)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 2U;
	static uint16_t x74 = 3U;
	static int32_t x75 = 317;
	int32_t x76 = -1;
	int32_t t16 = 65726623;

	t16 = (x73/(x74+(x75/x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x78 = 2428287U;
	uint32_t x79 = 52083U;
	uint32_t t17 = 45120U;

	t17 = (x77/(x78+(x79/x80)));

	if (t17 != 1768U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	uint16_t x82 = 104U;
	static int32_t x83 = -806;
	uint16_t x84 = UINT16_MAX;
	int32_t t18 = -43566;

	t18 = (x81/(x82+(x83/x84)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -365477221LL;
	int32_t x86 = INT32_MAX;
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MIN;
	volatile int64_t t19 = 2799930356LL;

	t19 = (x85/(x86+(x87/x88)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = UINT64_MAX;
	int64_t x90 = -47556LL;
	int16_t x91 = 421;
	int16_t x92 = -1241;
	static uint64_t t20 = 1417845680663736412LLU;

	t20 = (x89/(x90+(x91/x92)));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	uint8_t x95 = 1U;
	static int32_t x96 = INT32_MAX;
	int32_t t21 = -10981319;

	t21 = (x93/(x94+(x95/x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x97 = INT8_MIN;
	static uint32_t x99 = 75879456U;
	int8_t x100 = -59;
	uint32_t t22 = 0U;

	t22 = (x97/(x98+(x99/x100)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	volatile int64_t x102 = -4363LL;
	int16_t x103 = 167;
	uint32_t x104 = 4029016U;

	t23 = (x101/(x102+(x103/x104)));

	if (t23 != 2113997716446201LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x106 = INT64_MIN;
	uint32_t x108 = 2058619U;

	t24 = (x105/(x106+(x107/x108)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = 91443LL;
	int16_t x111 = -63;
	volatile int32_t x112 = 183;
	int64_t t25 = 270453059894307LL;

	t25 = (x109/(x110+(x111/x112)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 6134;
	int64_t x114 = -1LL;
	static uint8_t x115 = 101U;
	static volatile int64_t x116 = INT64_MAX;
	int64_t t26 = 112407LL;

	t26 = (x113/(x114+(x115/x116)));

	if (t26 != -6134LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 12U;
	uint16_t x118 = UINT16_MAX;

	t27 = (x117/(x118+(x119/x120)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x122 = 11433815LLU;
	int8_t x123 = -1;
	int16_t x124 = INT16_MIN;
	uint64_t t28 = 9584281969LLU;

	t28 = (x121/(x122+(x123/x124)));

	if (t28 != 1613349881357LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x127 = -1;
	uint8_t x128 = UINT8_MAX;
	volatile uint64_t t29 = 496144053LLU;

	t29 = (x125/(x126+(x127/x128)));

	if (t29 != 7LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MAX;
	int32_t x130 = INT32_MIN;
	uint16_t x131 = 1U;
	int32_t t30 = 11857;

	t30 = (x129/(x130+(x131/x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -1;
	int64_t x134 = INT64_MIN;
	uint32_t x135 = UINT32_MAX;
	static int16_t x136 = -377;

	t31 = (x133/(x134+(x135/x136)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	volatile int32_t x139 = -10756193;
	int32_t x140 = 208;
	volatile int32_t t32 = 44;

	t32 = (x137/(x138+(x139/x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MAX;
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = -1;
	static int32_t x144 = -7919691;

	t33 = (x141/(x142+(x143/x144)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = 3384;
	uint8_t x146 = 7U;
	int64_t x148 = INT64_MIN;
	volatile int64_t t34 = -12254690146504015LL;

	t34 = (x145/(x146+(x147/x148)));

	if (t34 != 483LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	uint8_t x150 = 27U;
	volatile int64_t t35 = 193LL;

	t35 = (x149/(x150+(x151/x152)));

	if (t35 != -281243239422313LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = 1409276;
	static volatile int8_t x154 = INT8_MIN;
	static int64_t x156 = 482790887266LL;

	t36 = (x153/(x154+(x155/x156)));

	if (t36 != -11009LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 374U;
	int16_t x158 = INT16_MIN;
	static uint16_t x159 = UINT16_MAX;
	uint16_t x160 = 3108U;

	t37 = (x157/(x158+(x159/x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x161 = UINT32_MAX;
	uint16_t x162 = 1U;
	int32_t x163 = -1;
	uint32_t x164 = 4707027U;
	static volatile uint32_t t38 = 0U;

	t38 = (x161/(x162+(x163/x164)));

	if (t38 != 4704235U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -1;
	uint8_t x166 = 3U;
	static uint32_t x167 = 71952U;
	int16_t x168 = INT16_MIN;
	uint32_t t39 = 524968081U;

	t39 = (x165/(x166+(x167/x168)));

	if (t39 != 1431655765U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = UINT8_MAX;
	static int8_t x171 = 4;
	int32_t x172 = -243;

	t40 = (x169/(x170+(x171/x172)));

	if (t40 != 51) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x173 = UINT8_MAX;
	int16_t x174 = -1;
	int8_t x175 = INT8_MIN;
	uint64_t x176 = 874879LLU;
	uint64_t t41 = 7611306375021392118LLU;

	t41 = (x173/(x174+(x175/x176)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x181 = 1;
	volatile uint16_t x182 = 2291U;
	int8_t x184 = -18;
	uint32_t t42 = 1241979U;

	t42 = (x181/(x182+(x183/x184)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = -939903LL;
	uint16_t x186 = 211U;
	int8_t x187 = 28;
	int16_t x188 = INT16_MIN;
	int64_t t43 = -17554414LL;

	t43 = (x185/(x186+(x187/x188)));

	if (t43 != -4454LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = INT16_MIN;
	int32_t x191 = INT32_MAX;
	int64_t x192 = -1LL;
	volatile int64_t t44 = 2624225025767LL;

	t44 = (x189/(x190+(x191/x192)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = 460U;
	uint32_t x195 = UINT32_MAX;
	uint64_t x196 = UINT64_MAX;

	t45 = (x193/(x194+(x195/x196)));

	if (t45 != 10LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = 0;
	int8_t x198 = -1;
	int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MAX;
	int32_t t46 = 8804;

	t46 = (x197/(x198+(x199/x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = -1;
	int64_t x203 = INT64_MAX;

	t47 = (x201/(x202+(x203/x204)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x206 = 0;
	volatile uint64_t x207 = UINT64_MAX;
	uint8_t x208 = 2U;
	volatile uint64_t t48 = 91927LLU;

	t48 = (x205/(x206+(x207/x208)));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = UINT32_MAX;
	static volatile int16_t x210 = INT16_MIN;
	static int64_t x211 = INT64_MAX;
	static int64_t x212 = INT64_MIN;
	static int64_t t49 = 3710624856LL;

	t49 = (x209/(x210+(x211/x212)));

	if (t49 != -131071LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = 977806LL;
	volatile int32_t x215 = INT32_MIN;
	volatile uint16_t x216 = 2U;
	int64_t t50 = -1LL;

	t50 = (x213/(x214+(x215/x216)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x221 = 31;
	int32_t x222 = -9279536;
	static uint8_t x223 = 37U;
	volatile int32_t x224 = -1;
	int32_t t51 = -203158474;

	t51 = (x221/(x222+(x223/x224)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x225 = INT8_MIN;
	int8_t x226 = -1;
	volatile uint8_t x227 = 2U;
	int32_t x228 = -1;
	volatile int32_t t52 = 334;

	t52 = (x225/(x226+(x227/x228)));

	if (t52 != 42) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x230 = -3760;
	uint32_t x231 = 78197745U;
	uint32_t x232 = 560788620U;
	volatile uint64_t t53 = 15184631173LLU;

	t53 = (x229/(x230+(x231/x232)));

	if (t53 != 4294971056LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x234 = 243377U;
	volatile int8_t x235 = -1;
	int8_t x236 = 1;
	volatile uint32_t t54 = 21540U;

	t54 = (x233/(x234+(x235/x236)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x237 = UINT32_MAX;
	int8_t x238 = INT8_MAX;
	int64_t x239 = INT64_MIN;
	int32_t x240 = 3435;
	volatile int64_t t55 = -2754746512LL;

	t55 = (x237/(x238+(x239/x240)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = 0;
	static int64_t x242 = -1LL;
	int16_t x243 = 443;
	int64_t x244 = 92120LL;
	int64_t t56 = -238254LL;

	t56 = (x241/(x242+(x243/x244)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = UINT8_MAX;
	uint64_t x246 = UINT64_MAX;
	uint16_t x247 = 7777U;
	volatile int64_t x248 = -1LL;

	t57 = (x245/(x246+(x247/x248)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = 274537894LL;
	int32_t x250 = 21604;
	int16_t x251 = 88;
	volatile int32_t x252 = INT32_MAX;
	static volatile int64_t t58 = 765486318976753119LL;

	t58 = (x249/(x250+(x251/x252)));

	if (t58 != 12707LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x253 = 1U;
	int64_t x254 = 590015272LL;
	int16_t x255 = -673;
	int32_t x256 = INT32_MIN;
	volatile int64_t t59 = -813525854609598LL;

	t59 = (x253/(x254+(x255/x256)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = -1470LL;
	volatile int32_t x258 = INT32_MIN;
	uint32_t x259 = 5U;
	static uint64_t x260 = UINT64_MAX;
	volatile uint64_t t60 = 7LLU;

	t60 = (x257/(x258+(x259/x260)));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x262 = -1;
	int64_t x264 = INT64_MIN;
	volatile int64_t t61 = -13271LL;

	t61 = (x261/(x262+(x263/x264)));

	if (t61 != -716875472LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x265 = 594767096924770LL;
	volatile uint64_t x266 = UINT64_MAX;
	int32_t x267 = INT32_MIN;
	int64_t x268 = 7660824849LL;
	uint64_t t62 = 369LLU;

	t62 = (x265/(x266+(x267/x268)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = INT64_MAX;
	int16_t x275 = -1;
	int8_t x276 = 3;
	volatile int64_t t63 = 6352182988081593LL;

	t63 = (x273/(x274+(x275/x276)));

	if (t63 != -4294967295LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x278 = -44;
	static int8_t x279 = INT8_MIN;
	static int32_t x280 = -142714200;
	static volatile int32_t t64 = -19913369;

	t64 = (x277/(x278+(x279/x280)));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x281 = -1;
	int8_t x282 = -1;
	int64_t x283 = 199681687LL;
	uint64_t x284 = 810018904LLU;

	t65 = (x281/(x282+(x283/x284)));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x285 = INT64_MIN;
	uint32_t x286 = 552U;
	static int16_t x287 = -1;
	int32_t x288 = -1;
	volatile int64_t t66 = -44046150928935LL;

	t66 = (x285/(x286+(x287/x288)));

	if (t66 != -16678792110044802LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = INT16_MAX;
	int64_t x290 = INT64_MIN;
	static int16_t x291 = INT16_MIN;
	int64_t x292 = -994672LL;
	volatile int64_t t67 = 21205038LL;

	t67 = (x289/(x290+(x291/x292)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x293 = INT16_MIN;
	int8_t x294 = -1;
	int8_t x295 = -1;
	int64_t x296 = 184220384LL;
	volatile int64_t t68 = 2678790460LL;

	t68 = (x293/(x294+(x295/x296)));

	if (t68 != 32768LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x297 = 2833U;
	int8_t x298 = INT8_MAX;
	volatile int16_t x299 = -1;
	volatile int32_t t69 = 135213202;

	t69 = (x297/(x298+(x299/x300)));

	if (t69 != 22) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = 2;
	volatile int64_t x302 = INT64_MIN;
	static int64_t x303 = INT64_MAX;
	static volatile uint16_t x304 = UINT16_MAX;
	int64_t t70 = 7625628LL;

	t70 = (x301/(x302+(x303/x304)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x310 = UINT16_MAX;
	uint64_t x311 = 343009718100271LLU;
	int32_t x312 = INT32_MAX;
	volatile uint64_t t71 = 32307755242047LLU;

	t71 = (x309/(x310+(x311/x312)));

	if (t71 != 81890536194501LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x313 = INT8_MIN;
	int8_t x314 = -5;
	uint64_t x315 = 19742755LLU;
	uint16_t x316 = 877U;
	volatile uint64_t t72 = 1942663744LLU;

	t72 = (x313/(x314+(x315/x316)));

	if (t72 != 819636722372236LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x317 = 1U;
	uint64_t x318 = 3121279LLU;
	volatile uint16_t x319 = UINT16_MAX;
	static uint32_t x320 = 1745U;
	uint64_t t73 = 4022540166LLU;

	t73 = (x317/(x318+(x319/x320)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = 876276LLU;
	int32_t x322 = -503156;
	static uint8_t x323 = 2U;
	uint64_t t74 = 299646063558448LLU;

	t74 = (x321/(x322+(x323/x324)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x325 = INT32_MIN;
	uint16_t x326 = 0U;
	int8_t x327 = -8;
	int64_t x328 = -1LL;
	volatile int64_t t75 = 64LL;

	t75 = (x325/(x326+(x327/x328)));

	if (t75 != -268435456LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MIN;
	static int8_t x331 = INT8_MAX;
	int64_t x332 = -1LL;
	int64_t t76 = -7LL;

	t76 = (x329/(x330+(x331/x332)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = 7U;
	volatile int16_t x334 = -1;
	int32_t x335 = INT32_MIN;
	int64_t x336 = -1LL;

	t77 = (x333/(x334+(x335/x336)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x339 = INT16_MAX;
	int8_t x340 = 2;
	volatile uint64_t t78 = 10598402402457LLU;

	t78 = (x337/(x338+(x339/x340)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = INT64_MAX;
	static int64_t x350 = 188LL;
	volatile uint32_t x351 = 781U;
	static int8_t x352 = -1;

	t79 = (x349/(x350+(x351/x352)));

	if (t79 != 49060489557738169LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x353 = INT64_MIN;
	uint32_t x354 = UINT32_MAX;
	static uint32_t x355 = UINT32_MAX;
	uint32_t x356 = 3U;

	t80 = (x353/(x354+(x355/x356)));

	if (t80 != -6442450950LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = INT64_MAX;
	uint64_t x358 = UINT64_MAX;
	uint64_t t81 = 8LLU;

	t81 = (x357/(x358+(x359/x360)));

	if (t81 != 1358976283609072LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x361 = 65U;
	int32_t x362 = INT32_MAX;
	uint64_t x363 = 203972662117706LLU;
	volatile uint32_t x364 = UINT32_MAX;
	uint64_t t82 = 971360LLU;

	t82 = (x361/(x362+(x363/x364)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x374 = INT32_MIN;
	uint8_t x376 = 1U;
	uint64_t t83 = 1395408771024017244LLU;

	t83 = (x373/(x374+(x375/x376)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x377 = UINT8_MAX;
	uint8_t x379 = 118U;
	volatile int64_t t84 = 5576572LL;

	t84 = (x377/(x378+(x379/x380)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	int32_t x384 = INT32_MIN;
	static int32_t t85 = -4433277;

	t85 = (x381/(x382+(x383/x384)));

	if (t85 != 16777216) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x385 = -826272170;
	int16_t x386 = INT16_MAX;
	int64_t x387 = INT64_MAX;
	uint64_t x388 = 192288123224997459LLU;

	t86 = (x385/(x386+(x387/x388)));

	if (t86 != 562160787251882LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = -1;
	int32_t x390 = INT32_MIN;
	static int16_t x392 = INT16_MIN;
	volatile int64_t t87 = 367042234928577LL;

	t87 = (x389/(x390+(x391/x392)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x394 = INT16_MIN;
	int16_t x395 = -1;
	int8_t x396 = INT8_MAX;
	static int32_t t88 = -89;

	t88 = (x393/(x394+(x395/x396)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x398 = INT8_MIN;
	uint8_t x399 = 44U;
	uint32_t x400 = 4005227U;
	volatile uint32_t t89 = 28816U;

	t89 = (x397/(x398+(x399/x400)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x401 = -1;
	volatile int8_t x402 = -4;
	static uint16_t x403 = UINT16_MAX;
	int32_t t90 = 6;

	t90 = (x401/(x402+(x403/x404)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x405 = UINT32_MAX;
	volatile int16_t x406 = INT16_MIN;
	static volatile int64_t x407 = INT64_MAX;
	uint8_t x408 = UINT8_MAX;
	static int64_t t91 = 0LL;

	t91 = (x405/(x406+(x407/x408)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = INT16_MIN;
	uint16_t x410 = 5409U;
	int16_t x411 = INT16_MIN;
	int32_t t92 = -11952652;

	t92 = (x409/(x410+(x411/x412)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x413 = INT64_MIN;
	int32_t x414 = -1;
	volatile uint16_t x415 = 7U;
	int16_t x416 = -7;
	static volatile int64_t t93 = -1LL;

	t93 = (x413/(x414+(x415/x416)));

	if (t93 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = 23;
	uint64_t x418 = 208LLU;
	uint64_t x420 = 62967928394002LLU;
	static volatile uint64_t t94 = 6LLU;

	t94 = (x417/(x418+(x419/x420)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x421 = -124189146163595005LL;
	static int8_t x422 = 1;
	int8_t x423 = INT8_MIN;
	uint32_t x424 = 2U;
	volatile int64_t t95 = -941897034072LL;

	t95 = (x421/(x422+(x423/x424)));

	if (t95 != -57830079LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x426 = INT64_MIN;
	volatile uint8_t x427 = UINT8_MAX;
	volatile uint64_t x428 = UINT64_MAX;
	volatile uint64_t t96 = 2582223257LLU;

	t96 = (x425/(x426+(x427/x428)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x429 = 1;
	int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;
	int64_t t97 = -123LL;

	t97 = (x429/(x430+(x431/x432)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x433 = INT64_MIN;
	int16_t x434 = -1;
	uint16_t x435 = 230U;
	uint32_t x436 = UINT32_MAX;

	t98 = (x433/(x434+(x435/x436)));

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = INT8_MAX;
	uint8_t x438 = UINT8_MAX;
	int16_t x439 = INT16_MAX;
	static volatile int32_t t99 = 261193;

	t99 = (x437/(x438+(x439/x440)));

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

