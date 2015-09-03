#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MIN;
int64_t x9 = 6994341LL;
int32_t t2 = 55105;
uint32_t x17 = 3104830U;
static uint16_t x31 = UINT16_MAX;
volatile int32_t t8 = -1;
volatile int16_t x37 = -15;
uint16_t x42 = 376U;
int64_t x43 = -1322905889510LL;
uint8_t x44 = 24U;
uint8_t x59 = 1U;
static volatile int8_t x64 = INT8_MIN;
int32_t t15 = -86562;
static int32_t x72 = INT32_MIN;
volatile int32_t t17 = -249;
uint16_t x74 = UINT16_MAX;
static int8_t x77 = INT8_MIN;
static volatile int16_t x81 = 326;
uint32_t x87 = 6305976U;
static volatile int32_t t21 = -2457009;
int16_t x96 = -1;
static volatile int32_t t23 = -24989647;
static int64_t x98 = -32032LL;
int32_t t24 = 0;
int32_t x106 = -2154;
int8_t x108 = INT8_MIN;
volatile uint16_t x116 = 27U;
volatile uint64_t x128 = 238885706952500974LLU;
int32_t t31 = -56619;
static int32_t t33 = -23996963;
volatile int8_t x138 = -15;
volatile uint16_t x141 = 73U;
int16_t x142 = -1;
uint32_t x150 = 8255372U;
int64_t x158 = INT64_MAX;
int16_t x160 = INT16_MAX;
static int16_t x162 = 0;
volatile uint8_t x166 = 7U;
static volatile int32_t t43 = 353;
uint8_t x183 = 9U;
int32_t t50 = 128888254;
static uint8_t x205 = 104U;
volatile int64_t x207 = 13445LL;
uint16_t x211 = 83U;
volatile int32_t x217 = INT32_MIN;
int32_t x220 = INT32_MIN;
int16_t x225 = INT16_MIN;
int32_t x228 = 41122643;
uint64_t x236 = 92884LLU;
int32_t t59 = -2672;
volatile uint8_t x244 = UINT8_MAX;
int64_t x246 = INT64_MIN;
int16_t x248 = INT16_MIN;
int64_t x251 = INT64_MAX;
int8_t x252 = 10;
int32_t x254 = 234193;
static int32_t t64 = 54157048;
uint64_t x261 = 341304933LLU;
int32_t t68 = 24739;
int32_t t69 = -802;
uint32_t x281 = 33U;
static uint64_t x283 = 21063397891001LLU;
uint64_t x284 = 13327981LLU;
int32_t t70 = -153;
volatile uint8_t x285 = UINT8_MAX;
uint8_t x287 = 3U;
volatile int32_t t71 = -5;
volatile int64_t x298 = INT64_MAX;
volatile int32_t t74 = 941740113;
int32_t x311 = INT32_MIN;
int64_t x315 = INT64_MIN;
volatile int16_t x326 = -1;
static int8_t x327 = INT8_MAX;
int32_t x330 = INT32_MIN;
uint8_t x331 = 59U;
uint8_t x334 = UINT8_MAX;
int64_t x338 = 329082LL;
int32_t x342 = INT32_MIN;
int32_t x347 = -1;
volatile int64_t x351 = INT64_MIN;
int16_t x352 = -7;
int32_t t87 = -4256;
int8_t x361 = INT8_MAX;
static volatile int32_t x362 = INT32_MIN;
int16_t x364 = INT16_MIN;
int32_t x365 = INT32_MIN;
uint32_t x369 = 961946924U;
int16_t x372 = INT16_MIN;
int64_t x382 = INT64_MIN;
static uint32_t x392 = UINT32_MAX;
int8_t x397 = 13;
int32_t x404 = -1;
static int32_t x406 = -1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = INT32_MIN;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = 1U;
	int32_t t0 = -845622;

	t0 = (x1==((x2<=x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 761912260U;
	static int8_t x6 = -1;
	int32_t x7 = INT32_MAX;
	volatile int32_t t1 = -34366898;

	t1 = (x5==((x6<=x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x10 = INT16_MIN;
	volatile uint8_t x11 = 71U;
	int8_t x12 = -3;

	t2 = (x9==((x10<=x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = -14108;
	static int64_t x15 = INT64_MIN;
	static int64_t x16 = INT64_MAX;
	int32_t t3 = 3;

	t3 = (x13==((x14<=x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 25533U;
	uint32_t x19 = 5079U;
	int64_t x20 = 6LL;
	int32_t t4 = 60;

	t4 = (x17==((x18<=x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 259371LLU;
	int64_t x22 = INT64_MIN;
	uint8_t x23 = 62U;
	static volatile int8_t x24 = -1;
	static int32_t t5 = 7;

	t5 = (x21==((x22<=x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 28U;
	volatile int32_t x26 = INT32_MIN;
	static int64_t x27 = INT64_MIN;
	static int16_t x28 = 8;
	volatile int32_t t6 = 14374;

	t6 = (x25==((x26<=x27)%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int64_t x30 = INT64_MIN;
	volatile uint8_t x32 = 25U;
	int32_t t7 = 7326;

	t7 = (x29==((x30<=x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = -82;
	uint64_t x35 = 1743762553478604LLU;
	volatile uint32_t x36 = 8185620U;

	t8 = (x33==((x34<=x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 27024U;
	int32_t x39 = 137;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -440475498;

	t9 = (x37==((x38<=x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	volatile int32_t t10 = 6590;

	t10 = (x41==((x42<=x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	static int16_t x46 = INT16_MAX;
	volatile int32_t x47 = INT32_MIN;
	static int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = 156750;

	t11 = (x45==((x46<=x47)%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = INT32_MIN;
	volatile int8_t x51 = -1;
	volatile uint32_t x52 = 27143889U;
	static int32_t t12 = 26;

	t12 = (x49==((x50<=x51)%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x54 = INT64_MIN;
	static volatile int16_t x55 = INT16_MAX;
	int8_t x56 = -1;
	static volatile int32_t t13 = -1;

	t13 = (x53==((x54<=x55)%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 242900650LL;
	int8_t x58 = INT8_MIN;
	volatile uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -259014562;

	t14 = (x57==((x58<=x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint64_t x62 = UINT64_MAX;
	volatile int32_t x63 = INT32_MAX;

	t15 = (x61==((x62<=x63)%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1U;
	static uint64_t x66 = 12450559934LLU;
	uint16_t x67 = UINT16_MAX;
	int64_t x68 = -11759LL;
	volatile int32_t t16 = -103;

	t16 = (x65==((x66<=x67)%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 4223009825188390LL;
	static uint8_t x70 = 3U;
	int64_t x71 = INT64_MAX;

	t17 = (x69==((x70<=x71)%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -154LL;
	static volatile int32_t x75 = 24567110;
	volatile int64_t x76 = 7517128705221963LL;
	int32_t t18 = 0;

	t18 = (x73==((x74<=x75)%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 4LLU;
	volatile uint32_t x79 = 3464326U;
	volatile int64_t x80 = INT64_MAX;
	int32_t t19 = -6612779;

	t19 = (x77==((x78<=x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x82 = 3046469LL;
	uint16_t x83 = UINT16_MAX;
	int32_t x84 = -1;
	volatile int32_t t20 = -278587644;

	t20 = (x81==((x82<=x83)%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	int16_t x86 = INT16_MAX;
	uint16_t x88 = UINT16_MAX;

	t21 = (x85==((x86<=x87)%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	static volatile uint32_t x90 = 3595U;
	int8_t x91 = 0;
	uint64_t x92 = 1726LLU;
	int32_t t22 = -836;

	t22 = (x89==((x90<=x91)%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 29U;
	static int64_t x94 = -2132446081067833LL;
	int8_t x95 = INT8_MAX;

	t23 = (x93==((x94<=x95)%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -9;
	static int8_t x99 = -1;
	int16_t x100 = -1;

	t24 = (x97==((x98<=x99)%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = 1;
	int32_t t25 = 250084;

	t25 = (x101==((x102<=x103)%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 53U;
	int64_t x107 = 10LL;
	volatile int32_t t26 = 596072;

	t26 = (x105==((x106<=x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 104U;
	uint8_t x110 = 43U;
	int16_t x111 = -627;
	uint32_t x112 = 376758U;
	int32_t t27 = 0;

	t27 = (x109==((x110<=x111)%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	uint16_t x114 = UINT16_MAX;
	uint64_t x115 = UINT64_MAX;
	volatile int32_t t28 = 43128911;

	t28 = (x113==((x114<=x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 2U;
	volatile int64_t x118 = INT64_MAX;
	static uint16_t x119 = 8336U;
	uint64_t x120 = 242115745395705120LLU;
	volatile int32_t t29 = 30;

	t29 = (x117==((x118<=x119)%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MAX;
	uint64_t x123 = 2006597305858199906LLU;
	volatile int8_t x124 = INT8_MIN;
	int32_t t30 = 0;

	t30 = (x121==((x122<=x123)%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = 33U;
	static int8_t x126 = INT8_MIN;
	static int32_t x127 = INT32_MIN;

	t31 = (x125==((x126<=x127)%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 2894370079LLU;
	int8_t x130 = INT8_MAX;
	static volatile uint32_t x131 = 17720U;
	int64_t x132 = 15169242LL;
	int32_t t32 = -1860;

	t32 = (x129==((x130<=x131)%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -1;
	int8_t x134 = -1;
	int16_t x135 = -3096;
	int32_t x136 = INT32_MAX;

	t33 = (x133==((x134<=x135)%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 1768;
	static int16_t x139 = -8979;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = 16267;

	t34 = (x137==((x138<=x139)%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x143 = -15;
	uint64_t x144 = 6747877391LLU;
	volatile int32_t t35 = 93123;

	t35 = (x141==((x142<=x143)%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	static int32_t x146 = -1;
	volatile uint32_t x147 = UINT32_MAX;
	int32_t x148 = -25588;
	volatile int32_t t36 = 126;

	t36 = (x145==((x146<=x147)%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MAX;
	int64_t x151 = INT64_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -2;

	t37 = (x149==((x150<=x151)%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MIN;
	volatile uint64_t x155 = 20141865151483417LLU;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = -1;

	t38 = (x153==((x154<=x155)%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	static uint8_t x159 = 1U;
	int32_t t39 = 342;

	t39 = (x157==((x158<=x159)%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = UINT8_MAX;
	int16_t x163 = INT16_MIN;
	static volatile int16_t x164 = -15;
	static volatile int32_t t40 = 296;

	t40 = (x161==((x162<=x163)%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	int16_t x167 = -1;
	int16_t x168 = INT16_MAX;
	static int32_t t41 = -2723;

	t41 = (x165==((x166<=x167)%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 790399U;
	int32_t x170 = INT32_MAX;
	uint32_t x171 = UINT32_MAX;
	static int8_t x172 = -12;
	static volatile int32_t t42 = -1691;

	t42 = (x169==((x170<=x171)%x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 462083972;
	int32_t x174 = -1;
	int16_t x175 = -11;
	static int8_t x176 = -1;

	t43 = (x173==((x174<=x175)%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x178 = -1;
	static volatile int32_t x179 = INT32_MIN;
	int64_t x180 = INT64_MIN;
	volatile int32_t t44 = -320208259;

	t44 = (x177==((x178<=x179)%x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int32_t x182 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = -307377;

	t45 = (x181==((x182<=x183)%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = -491543935891228517LL;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -40175;

	t46 = (x185==((x186<=x187)%x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	int32_t x190 = INT32_MIN;
	uint16_t x191 = UINT16_MAX;
	volatile int16_t x192 = -1627;
	int32_t t47 = 517096304;

	t47 = (x189==((x190<=x191)%x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 8030142656858LLU;
	int32_t x194 = INT32_MAX;
	volatile uint8_t x195 = UINT8_MAX;
	volatile int8_t x196 = 1;
	static volatile int32_t t48 = -1465;

	t48 = (x193==((x194<=x195)%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	static uint64_t x198 = UINT64_MAX;
	int8_t x199 = INT8_MIN;
	volatile int8_t x200 = -1;
	int32_t t49 = 38427;

	t49 = (x197==((x198<=x199)%x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	static int8_t x202 = INT8_MIN;
	static int16_t x203 = INT16_MAX;
	uint64_t x204 = 1082881358623568650LLU;

	t50 = (x201==((x202<=x203)%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x206 = UINT16_MAX;
	static int16_t x208 = -1;
	volatile int32_t t51 = 637;

	t51 = (x205==((x206<=x207)%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = 28347423713LL;
	static uint8_t x210 = 3U;
	volatile uint8_t x212 = UINT8_MAX;
	static volatile int32_t t52 = -8162253;

	t52 = (x209==((x210<=x211)%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 5;
	volatile int32_t x214 = INT32_MIN;
	static int64_t x215 = -1LL;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 421236;

	t53 = (x213==((x214<=x215)%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = -1;
	static int8_t x219 = -1;
	static volatile int32_t t54 = 2388;

	t54 = (x217==((x218<=x219)%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = 3;
	int16_t x223 = -1;
	int32_t x224 = -114;
	volatile int32_t t55 = -95;

	t55 = (x221==((x222<=x223)%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = -5250;
	int8_t x227 = 0;
	volatile int32_t t56 = -79711;

	t56 = (x225==((x226<=x227)%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	int16_t x230 = -3172;
	volatile int16_t x231 = 1566;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = 1060954267;

	t57 = (x229==((x230<=x231)%x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	static volatile int64_t x234 = -1LL;
	int16_t x235 = -804;
	volatile int32_t t58 = -3151;

	t58 = (x233==((x234<=x235)%x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -89800078;
	static int8_t x238 = -1;
	volatile int32_t x239 = -143480206;
	static uint8_t x240 = 2U;

	t59 = (x237==((x238<=x239)%x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 1U;
	static int8_t x242 = -1;
	int16_t x243 = -6761;
	volatile int32_t t60 = -28;

	t60 = (x241==((x242<=x243)%x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MIN;
	int32_t x247 = INT32_MIN;
	static int32_t t61 = -4255229;

	t61 = (x245==((x246<=x247)%x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = UINT64_MAX;
	static volatile int16_t x250 = 0;
	static volatile int32_t t62 = -20830;

	t62 = (x249==((x250<=x251)%x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = 2U;
	uint8_t x255 = 0U;
	volatile int32_t x256 = -1;
	int32_t t63 = -38249375;

	t63 = (x253==((x254<=x255)%x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 38594765056LLU;
	uint32_t x258 = UINT32_MAX;
	static int32_t x259 = -5715161;
	static uint16_t x260 = 3930U;

	t64 = (x257==((x258<=x259)%x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = 42U;
	int32_t x263 = INT32_MAX;
	static uint32_t x264 = UINT32_MAX;
	int32_t t65 = -14;

	t65 = (x261==((x262<=x263)%x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = 0;
	int32_t x266 = INT32_MAX;
	uint32_t x267 = 616132U;
	static int64_t x268 = INT64_MIN;
	int32_t t66 = -1842;

	t66 = (x265==((x266<=x267)%x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int64_t x270 = 67942061649805818LL;
	static volatile int32_t x271 = INT32_MIN;
	uint64_t x272 = UINT64_MAX;
	int32_t t67 = 24;

	t67 = (x269==((x270<=x271)%x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 25238239179305LLU;
	int64_t x274 = -3517988LL;
	static uint64_t x275 = UINT64_MAX;
	volatile uint32_t x276 = UINT32_MAX;

	t68 = (x273==((x274<=x275)%x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	static volatile int64_t x278 = INT64_MIN;
	uint32_t x279 = 63371U;
	uint8_t x280 = 2U;

	t69 = (x277==((x278<=x279)%x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x282 = 20778313U;

	t70 = (x281==((x282<=x283)%x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	int16_t x288 = INT16_MIN;

	t71 = (x285==((x286<=x287)%x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = -2;
	int64_t x290 = 39154895998LL;
	uint64_t x291 = 9072334543201732659LLU;
	int32_t x292 = INT32_MIN;
	int32_t t72 = -25;

	t72 = (x289==((x290<=x291)%x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	static int32_t x299 = -1;
	int32_t x300 = INT32_MIN;
	volatile int32_t t73 = 50363;

	t73 = (x297==((x298<=x299)%x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = -520;
	int32_t x306 = INT32_MAX;
	volatile int64_t x307 = -35147611989034705LL;
	static int16_t x308 = -1;

	t74 = (x305==((x306<=x307)%x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	int8_t x312 = -1;
	volatile int32_t t75 = 52557;

	t75 = (x309==((x310<=x311)%x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x313 = INT16_MIN;
	volatile int64_t x314 = INT64_MIN;
	int64_t x316 = INT64_MAX;
	int32_t t76 = -1135106;

	t76 = (x313==((x314<=x315)%x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -1LL;
	int8_t x318 = INT8_MIN;
	static int32_t x319 = -1;
	volatile int8_t x320 = -1;
	volatile int32_t t77 = -101394604;

	t77 = (x317==((x318<=x319)%x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x321 = 13LLU;
	static int32_t x322 = -4;
	uint64_t x323 = 5LLU;
	int16_t x324 = 35;
	volatile int32_t t78 = 1;

	t78 = (x321==((x322<=x323)%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x325 = 220U;
	static uint8_t x328 = 36U;
	int32_t t79 = 821120615;

	t79 = (x325==((x326<=x327)%x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x329 = INT64_MAX;
	volatile uint32_t x332 = UINT32_MAX;
	int32_t t80 = -329011;

	t80 = (x329==((x330<=x331)%x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = UINT8_MAX;
	static int16_t x335 = INT16_MIN;
	uint8_t x336 = 9U;
	int32_t t81 = -321084;

	t81 = (x333==((x334<=x335)%x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = -244337745LL;
	volatile int64_t x339 = INT64_MIN;
	int64_t x340 = -2LL;
	volatile int32_t t82 = -451521;

	t82 = (x337==((x338<=x339)%x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = INT8_MIN;
	static int32_t x343 = INT32_MIN;
	volatile int32_t x344 = 25605;
	int32_t t83 = 1829411;

	t83 = (x341==((x342<=x343)%x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = 7671;
	volatile int64_t x346 = INT64_MIN;
	int32_t x348 = INT32_MAX;
	volatile int32_t t84 = 207700;

	t84 = (x345==((x346<=x347)%x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = 1156099;
	int8_t x350 = -28;
	volatile int32_t t85 = -1;

	t85 = (x349==((x350<=x351)%x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = 432265377382LLU;
	int16_t x354 = INT16_MAX;
	static int64_t x355 = -22881374LL;
	volatile int32_t x356 = INT32_MAX;
	volatile int32_t t86 = 1201384;

	t86 = (x353==((x354<=x355)%x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x357 = UINT32_MAX;
	static int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = 3U;

	t87 = (x357==((x358<=x359)%x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x363 = 290U;
	volatile int32_t t88 = 349934355;

	t88 = (x361==((x362<=x363)%x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x366 = 332789U;
	static int32_t x367 = INT32_MIN;
	uint16_t x368 = UINT16_MAX;
	int32_t t89 = -755768;

	t89 = (x365==((x366<=x367)%x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x370 = 38878719716677094LL;
	int8_t x371 = INT8_MIN;
	int32_t t90 = 7955382;

	t90 = (x369==((x370<=x371)%x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = 7833LL;
	volatile int8_t x374 = -1;
	static uint32_t x375 = 326209492U;
	static int8_t x376 = -12;
	int32_t t91 = -188259;

	t91 = (x373==((x374<=x375)%x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MAX;
	int8_t x378 = INT8_MAX;
	int16_t x379 = -1;
	int32_t x380 = 107;
	int32_t t92 = -11;

	t92 = (x377==((x378<=x379)%x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x381 = 10;
	int8_t x383 = INT8_MAX;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t93 = 326;

	t93 = (x381==((x382<=x383)%x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x385 = UINT64_MAX;
	uint64_t x386 = UINT64_MAX;
	static int64_t x387 = -1LL;
	volatile uint16_t x388 = 1U;
	volatile int32_t t94 = 89901671;

	t94 = (x385==((x386<=x387)%x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x389 = INT16_MIN;
	volatile int32_t x390 = -1;
	int8_t x391 = -1;
	int32_t t95 = -84;

	t95 = (x389==((x390<=x391)%x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x393 = UINT32_MAX;
	uint16_t x394 = 4U;
	int16_t x395 = INT16_MAX;
	int16_t x396 = -1;
	volatile int32_t t96 = 8120368;

	t96 = (x393==((x394<=x395)%x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MIN;
	uint32_t x400 = UINT32_MAX;
	static volatile int32_t t97 = -746;

	t97 = (x397==((x398<=x399)%x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = -1;
	int8_t x403 = INT8_MIN;
	int32_t t98 = -124;

	t98 = (x401==((x402<=x403)%x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x405 = -7860;
	int8_t x407 = INT8_MIN;
	uint8_t x408 = 66U;
	static int32_t t99 = -1;

	t99 = (x405==((x406<=x407)%x408));

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

