#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x3 = UINT16_MAX;
int64_t x8 = INT64_MIN;
volatile int32_t x11 = -1;
int32_t t2 = 1244;
uint8_t x21 = 13U;
static int16_t x23 = INT16_MIN;
uint64_t x27 = 32858436310LLU;
int64_t x28 = INT64_MIN;
static int8_t x31 = INT8_MIN;
static uint64_t x40 = UINT64_MAX;
volatile int8_t x43 = INT8_MIN;
static uint32_t x44 = 5720939U;
volatile uint64_t x47 = 2672130962LLU;
int32_t x54 = 2;
static volatile int32_t t14 = 1108;
int16_t x61 = -2;
volatile int64_t x68 = -1LL;
int32_t t17 = -8451;
static int16_t x84 = INT16_MAX;
uint16_t x92 = 2704U;
int16_t x93 = -1;
volatile int32_t t23 = -778;
int16_t x97 = -1;
static uint32_t x99 = 102214190U;
static uint16_t x100 = UINT16_MAX;
static volatile int32_t t24 = 4;
int8_t x107 = INT8_MIN;
static uint16_t x110 = 15U;
uint16_t x111 = 8U;
int32_t x115 = -1;
static int8_t x117 = 1;
uint16_t x119 = 27154U;
static uint32_t x124 = 78U;
int32_t x125 = INT32_MIN;
int64_t x130 = INT64_MAX;
int32_t x132 = -1;
int32_t t32 = 588202;
int16_t x136 = INT16_MAX;
int64_t x140 = INT64_MIN;
int64_t x142 = INT64_MIN;
static volatile int64_t x144 = INT64_MAX;
static int32_t t35 = -43566711;
int8_t x145 = INT8_MIN;
int8_t x147 = INT8_MAX;
volatile int8_t x150 = INT8_MAX;
volatile int32_t t37 = 443;
int8_t x154 = INT8_MAX;
volatile uint8_t x159 = 1U;
static int64_t x160 = INT64_MAX;
uint32_t x163 = 134698763U;
int8_t x184 = 0;
int32_t t47 = -7904;
volatile int32_t t48 = -10008738;
uint8_t x197 = 1U;
uint16_t x200 = 153U;
volatile int32_t x202 = INT32_MIN;
int8_t x205 = INT8_MIN;
static int32_t t51 = 29;
uint64_t x211 = 96940500876369207LLU;
uint8_t x217 = 1U;
int16_t x218 = -1;
volatile int64_t x226 = INT64_MAX;
int32_t t59 = -61166;
uint32_t x243 = UINT32_MAX;
int32_t x247 = -9;
int16_t x249 = INT16_MIN;
int64_t x251 = 15828325793311881LL;
int8_t x252 = -1;
int8_t x261 = INT8_MIN;
int8_t x264 = INT8_MIN;
uint16_t x268 = 7289U;
static int32_t t66 = 6062;
uint16_t x274 = 0U;
int64_t x275 = -3635162188LL;
static uint64_t x276 = 2596LLU;
uint32_t x277 = 863184U;
static int64_t x279 = INT64_MAX;
int32_t t69 = -210564925;
int32_t t70 = 0;
uint32_t x293 = 22U;
int32_t t73 = 50626;
int16_t x307 = -1;
int16_t x308 = -4673;
int32_t t77 = -1;
int8_t x315 = INT8_MIN;
int32_t x318 = INT32_MAX;
int16_t x322 = INT16_MAX;
int32_t x342 = -315507200;
int64_t x345 = -1LL;
uint32_t x351 = 161578U;
static volatile int16_t x352 = -1;
int32_t x359 = INT32_MIN;
int8_t x360 = -1;
int64_t x363 = -5614LL;
static volatile int32_t t90 = -6391592;
int8_t x367 = -1;
uint64_t x370 = UINT64_MAX;
int16_t x380 = -1;
static int32_t t97 = 209;
volatile uint16_t x393 = 27330U;
uint8_t x394 = 1U;
volatile int32_t t99 = -367639846;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int64_t x2 = -512052249142563LL;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -20137296;

	t0 = (x1==(x2*(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t x6 = INT32_MIN;
	uint16_t x7 = 697U;
	static int32_t t1 = -7957;

	t1 = (x5==(x6*(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 55U;
	uint16_t x10 = 23198U;
	volatile uint8_t x12 = UINT8_MAX;

	t2 = (x9==(x10*(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	volatile int32_t x14 = 10;
	volatile int16_t x15 = INT16_MIN;
	uint64_t x16 = 353LLU;
	volatile int32_t t3 = -4976496;

	t3 = (x13==(x14*(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -392039162;
	uint64_t x18 = 82LLU;
	volatile uint16_t x19 = UINT16_MAX;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = 1254;

	t4 = (x17==(x18*(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = INT64_MIN;
	static uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 108563212;

	t5 = (x21==(x22*(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	static volatile int32_t x26 = INT32_MIN;
	volatile int32_t t6 = -857;

	t6 = (x25==(x26*(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 10867147798090LL;
	volatile int32_t x30 = INT32_MIN;
	int32_t x32 = -1;
	static volatile int32_t t7 = 13875;

	t7 = (x29==(x30*(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int16_t x34 = INT16_MAX;
	int16_t x35 = INT16_MIN;
	int32_t x36 = 23594662;
	int32_t t8 = 122064;

	t8 = (x33==(x34*(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int8_t x38 = -1;
	volatile int64_t x39 = -36956323363642354LL;
	volatile int32_t t9 = 411222239;

	t9 = (x37==(x38*(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int16_t x42 = -1;
	int32_t t10 = 1334;

	t10 = (x41==(x42*(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -11989;
	int64_t x46 = 27489957LL;
	static uint16_t x48 = 18514U;
	static int32_t t11 = 1;

	t11 = (x45==(x46*(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 4;
	uint16_t x50 = 2U;
	volatile uint16_t x51 = 167U;
	int16_t x52 = -594;
	int32_t t12 = 195402389;

	t12 = (x49==(x50*(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = UINT16_MAX;
	static uint8_t x55 = 1U;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = 414233;

	t13 = (x53==(x54*(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -5212388LL;
	uint32_t x58 = 1U;
	static uint8_t x59 = UINT8_MAX;
	volatile int8_t x60 = INT8_MIN;

	t14 = (x57==(x58*(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = 3680109U;
	uint16_t x63 = 3126U;
	uint32_t x64 = UINT32_MAX;
	int32_t t15 = 478207;

	t15 = (x61==(x62*(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	uint32_t x66 = UINT32_MAX;
	uint64_t x67 = UINT64_MAX;
	static volatile int32_t t16 = -2;

	t16 = (x65==(x66*(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int16_t x70 = 1879;
	int8_t x71 = INT8_MAX;
	static int32_t x72 = INT32_MIN;

	t17 = (x69==(x70*(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 5532U;
	int32_t x74 = -3652977;
	static int16_t x75 = 0;
	volatile int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 1;

	t18 = (x73==(x74*(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	int32_t x78 = INT32_MAX;
	uint32_t x79 = 500U;
	static int8_t x80 = -1;
	volatile int32_t t19 = 3185;

	t19 = (x77==(x78*(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	int32_t x82 = INT32_MIN;
	static int64_t x83 = -1320434267414LL;
	int32_t t20 = -63062604;

	t20 = (x81==(x82*(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static int32_t x86 = INT32_MIN;
	static int64_t x87 = 8127LL;
	static uint16_t x88 = 182U;
	int32_t t21 = -558337;

	t21 = (x85==(x86*(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 52;
	volatile int32_t x90 = INT32_MAX;
	uint16_t x91 = UINT16_MAX;
	int32_t t22 = 0;

	t22 = (x89==(x90*(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x94 = 1773U;
	volatile int16_t x95 = -1274;
	uint16_t x96 = 353U;

	t23 = (x93==(x94*(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = 55081870;

	t24 = (x97==(x98*(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	static uint8_t x102 = 0U;
	volatile int32_t x103 = 17143331;
	int16_t x104 = -1;
	int32_t t25 = 14838133;

	t25 = (x101==(x102*(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = -7611;
	int16_t x106 = -30;
	int32_t x108 = INT32_MIN;
	int32_t t26 = -927460;

	t26 = (x105==(x106*(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 23898U;
	int8_t x112 = 1;
	volatile int32_t t27 = 9406;

	t27 = (x109==(x110*(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -42;
	static uint64_t x114 = 15778881LLU;
	int64_t x116 = -32764LL;
	int32_t t28 = 95;

	t28 = (x113==(x114*(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MIN;
	static int64_t x120 = INT64_MIN;
	int32_t t29 = -3;

	t29 = (x117==(x118*(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	static volatile uint64_t x122 = 218LLU;
	int16_t x123 = INT16_MIN;
	int32_t t30 = -1996;

	t30 = (x121==(x122*(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 116U;
	int16_t x127 = -7281;
	int32_t x128 = INT32_MAX;
	int32_t t31 = 402115;

	t31 = (x125==(x126*(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 93U;
	uint32_t x131 = 69301682U;

	t32 = (x129==(x130*(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 2;
	int32_t x134 = INT32_MIN;
	int8_t x135 = -1;
	int32_t t33 = 14481;

	t33 = (x133==(x134*(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x137 = UINT8_MAX;
	int64_t x138 = INT64_MAX;
	int32_t x139 = -1;
	int32_t t34 = 1057;

	t34 = (x137==(x138*(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 79515951;
	int8_t x143 = INT8_MIN;

	t35 = (x141==(x142*(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = 0U;
	volatile uint32_t x148 = 558393987U;
	static volatile int32_t t36 = 24903;

	t36 = (x145==(x146*(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = UINT64_MAX;
	int64_t x151 = -12058553303191LL;
	int16_t x152 = INT16_MAX;

	t37 = (x149==(x150*(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	static volatile int8_t x155 = 0;
	volatile int8_t x156 = -1;
	volatile int32_t t38 = 16030;

	t38 = (x153==(x154*(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	static int16_t x158 = INT16_MAX;
	int32_t t39 = 735058461;

	t39 = (x157==(x158*(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 75U;
	volatile int64_t x162 = -1LL;
	int16_t x164 = 0;
	volatile int32_t t40 = -846378;

	t40 = (x161==(x162*(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = 1;
	int16_t x166 = 38;
	int16_t x167 = -2854;
	int16_t x168 = INT16_MAX;
	int32_t t41 = 2077;

	t41 = (x165==(x166*(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MIN;
	int16_t x170 = -1;
	volatile uint64_t x171 = 159590628646756LLU;
	int32_t x172 = 1;
	volatile int32_t t42 = 1;

	t42 = (x169==(x170*(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile int8_t x174 = INT8_MAX;
	volatile int32_t x175 = -1;
	uint32_t x176 = 28385U;
	int32_t t43 = 5111;

	t43 = (x173==(x174*(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 1U;
	volatile uint64_t x178 = UINT64_MAX;
	int16_t x179 = INT16_MIN;
	volatile uint16_t x180 = 396U;
	volatile int32_t t44 = -252434139;

	t44 = (x177==(x178*(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x181 = 1;
	uint32_t x182 = 2008921819U;
	uint16_t x183 = UINT16_MAX;
	int32_t t45 = -975987555;

	t45 = (x181==(x182*(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 1;
	volatile int16_t x186 = -6786;
	volatile int8_t x187 = -1;
	static volatile int16_t x188 = INT16_MIN;
	int32_t t46 = -235584;

	t46 = (x185==(x186*(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = -1LL;
	volatile uint16_t x190 = 358U;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = INT64_MIN;

	t47 = (x189==(x190*(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = UINT16_MAX;
	static int8_t x194 = INT8_MIN;
	int64_t x195 = -79395872241472238LL;
	static volatile int64_t x196 = INT64_MIN;

	t48 = (x193==(x194*(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = INT16_MAX;
	volatile uint32_t x199 = 39U;
	volatile int32_t t49 = -5073430;

	t49 = (x197==(x198*(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = 0;
	uint16_t x203 = 9192U;
	uint64_t x204 = 202953LLU;
	volatile int32_t t50 = 1;

	t50 = (x201==(x202*(x203==x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = INT32_MAX;
	volatile int32_t x208 = INT32_MAX;

	t51 = (x205==(x206*(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 7LL;
	static int32_t x210 = INT32_MIN;
	static uint16_t x212 = 9U;
	volatile int32_t t52 = 7228327;

	t52 = (x209==(x210*(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MIN;
	static int64_t x214 = INT64_MAX;
	int16_t x215 = 15;
	static int8_t x216 = INT8_MIN;
	static volatile int32_t t53 = -201625;

	t53 = (x213==(x214*(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x219 = 3846;
	static int16_t x220 = INT16_MAX;
	volatile int32_t t54 = 8;

	t54 = (x217==(x218*(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x221 = 447641892U;
	int8_t x222 = -1;
	int64_t x223 = 446LL;
	static int8_t x224 = INT8_MAX;
	volatile int32_t t55 = -818;

	t55 = (x221==(x222*(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x227 = INT8_MIN;
	int8_t x228 = -1;
	int32_t t56 = -47731;

	t56 = (x225==(x226*(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = 7LLU;
	static int8_t x230 = INT8_MAX;
	static int16_t x231 = INT16_MAX;
	uint8_t x232 = 3U;
	int32_t t57 = 18040520;

	t57 = (x229==(x230*(x231==x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = UINT8_MAX;
	volatile uint8_t x234 = UINT8_MAX;
	int16_t x235 = INT16_MIN;
	int8_t x236 = -1;
	volatile int32_t t58 = 3039;

	t58 = (x233==(x234*(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = UINT64_MAX;
	static uint64_t x238 = 15387343859578348LLU;
	uint32_t x239 = 4801839U;
	uint64_t x240 = 29517217088178LLU;

	t59 = (x237==(x238*(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MIN;
	uint32_t x242 = 5155U;
	volatile int64_t x244 = INT64_MAX;
	int32_t t60 = -43580987;

	t60 = (x241==(x242*(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	static int32_t t61 = -36;

	t61 = (x245==(x246*(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x250 = -5;
	int32_t t62 = 1331;

	t62 = (x249==(x250*(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int32_t x254 = INT32_MAX;
	volatile uint64_t x255 = 65756LLU;
	int32_t x256 = -11892004;
	volatile int32_t t63 = -7;

	t63 = (x253==(x254*(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = -62;
	volatile uint8_t x259 = UINT8_MAX;
	volatile int8_t x260 = 1;
	int32_t t64 = -181;

	t64 = (x257==(x258*(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x262 = INT64_MIN;
	static int32_t x263 = INT32_MIN;
	static volatile int32_t t65 = -236378;

	t65 = (x261==(x262*(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	int8_t x266 = INT8_MAX;
	int16_t x267 = 38;

	t66 = (x265==(x266*(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x270 = INT32_MIN;
	volatile int64_t x271 = -1LL;
	static uint64_t x272 = 36034740LLU;
	int32_t t67 = -46;

	t67 = (x269==(x270*(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 0;
	static int32_t t68 = -17;

	t68 = (x273==(x274*(x275==x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MIN;
	int16_t x280 = -1;

	t69 = (x277==(x278*(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MAX;
	int32_t x282 = -1;
	static int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MAX;

	t70 = (x281==(x282*(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x285 = UINT64_MAX;
	int16_t x286 = INT16_MIN;
	static volatile uint32_t x287 = UINT32_MAX;
	uint16_t x288 = 1982U;
	volatile int32_t t71 = 3829756;

	t71 = (x285==(x286*(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	static int64_t x290 = -11LL;
	static int16_t x291 = -1;
	int32_t x292 = -7;
	volatile int32_t t72 = -99;

	t72 = (x289==(x290*(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = 0;
	volatile int64_t x295 = 6876569717LL;
	int16_t x296 = INT16_MIN;

	t73 = (x293==(x294*(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MAX;
	static volatile int64_t x298 = INT64_MIN;
	int8_t x299 = 8;
	static uint64_t x300 = UINT64_MAX;
	int32_t t74 = 88;

	t74 = (x297==(x298*(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 84U;
	int8_t x302 = INT8_MIN;
	int8_t x303 = -1;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 4423;

	t75 = (x301==(x302*(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -13;
	volatile uint64_t x306 = 321543798086916LLU;
	volatile int32_t t76 = 5;

	t76 = (x305==(x306*(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x309 = UINT32_MAX;
	int32_t x310 = -1;
	uint32_t x311 = 7126768U;
	int32_t x312 = -1;

	t77 = (x309==(x310*(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 235815U;
	int8_t x314 = INT8_MAX;
	int8_t x316 = INT8_MIN;
	volatile int32_t t78 = 0;

	t78 = (x313==(x314*(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 35;
	static int64_t x319 = INT64_MAX;
	volatile int64_t x320 = INT64_MIN;
	volatile int32_t t79 = 7458;

	t79 = (x317==(x318*(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	int16_t x323 = INT16_MIN;
	static uint64_t x324 = 45080694260LLU;
	volatile int32_t t80 = -514118517;

	t80 = (x321==(x322*(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = 97;
	static uint64_t x326 = UINT64_MAX;
	volatile int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	int32_t t81 = 3430;

	t81 = (x325==(x326*(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 94U;
	volatile uint8_t x330 = 106U;
	uint32_t x331 = 950208970U;
	uint64_t x332 = 30766064970LLU;
	static int32_t t82 = -2173;

	t82 = (x329==(x330*(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	volatile uint16_t x334 = UINT16_MAX;
	int32_t x335 = INT32_MIN;
	static int32_t x336 = -693479;
	int32_t t83 = -459910454;

	t83 = (x333==(x334*(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MAX;
	int8_t x338 = -4;
	int32_t x339 = INT32_MAX;
	static int32_t x340 = 384901;
	int32_t t84 = 67;

	t84 = (x337==(x338*(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MAX;
	int64_t x343 = -1LL;
	int16_t x344 = -144;
	static volatile int32_t t85 = 220;

	t85 = (x341==(x342*(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = 1;
	static int32_t t86 = -623772;

	t86 = (x345==(x346*(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -1;
	int32_t x350 = 242220;
	int32_t t87 = -89;

	t87 = (x349==(x350*(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	uint32_t x354 = 422U;
	int32_t x355 = INT32_MIN;
	static int32_t x356 = -1;
	volatile int32_t t88 = -170;

	t88 = (x353==(x354*(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	static int8_t x358 = INT8_MIN;
	int32_t t89 = 15;

	t89 = (x357==(x358*(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x361 = 4U;
	uint64_t x362 = UINT64_MAX;
	int8_t x364 = INT8_MIN;

	t90 = (x361==(x362*(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -421;
	int32_t x366 = INT32_MIN;
	static uint64_t x368 = 513900LLU;
	int32_t t91 = 495520;

	t91 = (x365==(x366*(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	uint64_t x371 = 1328857LLU;
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = 328892;

	t92 = (x369==(x370*(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -49533555252LL;
	int64_t x374 = INT64_MIN;
	static int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MAX;
	volatile int32_t t93 = -726;

	t93 = (x373==(x374*(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 1;
	int64_t x378 = INT64_MAX;
	int32_t x379 = -2953;
	int32_t t94 = -1;

	t94 = (x377==(x378*(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 122U;
	int32_t x382 = 36250440;
	int32_t x383 = -251;
	int8_t x384 = -1;
	volatile int32_t t95 = 1;

	t95 = (x381==(x382*(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	uint64_t x386 = 1862002161057927934LLU;
	int64_t x387 = INT64_MAX;
	static int16_t x388 = INT16_MIN;
	int32_t t96 = -1;

	t96 = (x385==(x386*(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 3U;
	static int8_t x390 = -1;
	int32_t x391 = INT32_MIN;
	static int8_t x392 = -1;

	t97 = (x389==(x390*(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x395 = 16LLU;
	int8_t x396 = -1;
	int32_t t98 = 61941220;

	t98 = (x393==(x394*(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x398 = UINT8_MAX;
	uint32_t x399 = UINT32_MAX;
	static int64_t x400 = -1LL;

	t99 = (x397==(x398*(x399==x400)));

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

