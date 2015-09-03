#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -11;
volatile int32_t t3 = -116;
volatile int32_t t4 = -4394;
int64_t x23 = INT64_MAX;
volatile int32_t t5 = -678325557;
int64_t x26 = INT64_MIN;
int64_t x28 = INT64_MIN;
static int64_t x29 = -475397830513548LL;
volatile uint64_t x30 = UINT64_MAX;
volatile int32_t t7 = -6057449;
int64_t x40 = INT64_MIN;
uint8_t x50 = 2U;
volatile int8_t x51 = -1;
volatile int32_t x55 = INT32_MIN;
volatile uint32_t x57 = UINT32_MAX;
static volatile int32_t t15 = -255067;
int8_t x73 = -1;
volatile int32_t t18 = -147;
int64_t x77 = -2LL;
int16_t x79 = 1737;
volatile uint32_t x82 = UINT32_MAX;
uint8_t x89 = UINT8_MAX;
static uint64_t x93 = 2724LLU;
static volatile int32_t t26 = 8;
volatile int32_t t29 = -133;
static uint8_t x125 = UINT8_MAX;
volatile int32_t t31 = 14745309;
static uint64_t x136 = UINT64_MAX;
int32_t x139 = INT32_MIN;
int32_t x140 = INT32_MIN;
int32_t x153 = INT32_MIN;
volatile int16_t x162 = 31;
volatile int32_t t40 = 4423417;
volatile uint64_t x171 = UINT64_MAX;
volatile int32_t t44 = 913274369;
volatile int8_t x187 = INT8_MAX;
int16_t x192 = -1;
int32_t x199 = INT32_MAX;
int32_t t50 = -960681813;
uint16_t x209 = UINT16_MAX;
volatile int32_t t53 = 4890618;
uint8_t x220 = UINT8_MAX;
int64_t x226 = INT64_MIN;
volatile uint32_t x233 = 125954771U;
volatile int32_t t58 = -1;
static int64_t x241 = -3436168221302LL;
volatile int8_t x242 = 2;
uint32_t x243 = UINT32_MAX;
int64_t x251 = INT64_MIN;
volatile int32_t t62 = 27;
int32_t t63 = -342221242;
volatile int32_t t64 = 55196;
int32_t x263 = INT32_MIN;
static volatile int32_t t65 = 3088;
static volatile int16_t x267 = INT16_MIN;
int32_t t66 = 3043159;
volatile int16_t x276 = INT16_MAX;
static uint8_t x279 = UINT8_MAX;
int8_t x283 = 0;
int32_t x284 = INT32_MIN;
uint16_t x285 = UINT16_MAX;
static int64_t x287 = -1LL;
int8_t x288 = -26;
int32_t x290 = -1;
int8_t x302 = INT8_MIN;
volatile int64_t x305 = -46624411142268LL;
static int32_t t78 = 0;
int8_t x321 = INT8_MIN;
int32_t x326 = INT32_MIN;
uint8_t x329 = 30U;
int64_t x330 = 13603381156407874LL;
uint32_t x334 = UINT32_MAX;
int16_t x342 = 4;
uint16_t x343 = UINT16_MAX;
volatile int32_t t83 = 74;
uint32_t x346 = 3U;
int32_t x348 = INT32_MIN;
volatile int64_t x351 = 275467732LL;
int8_t x353 = INT8_MIN;
int32_t t86 = 0;
volatile int8_t x357 = INT8_MIN;
int32_t t87 = 6;
uint64_t x361 = 57588LLU;
int8_t x363 = INT8_MAX;
int64_t x367 = INT64_MIN;
int64_t x370 = INT64_MAX;
volatile int64_t x376 = 279567170599775557LL;
uint8_t x377 = 7U;
int8_t x392 = INT8_MIN;
static int8_t x405 = -1;
int16_t x406 = 3622;


void f0(void) {
	int16_t x1 = 5;
	int16_t x2 = INT16_MIN;
	uint8_t x3 = 1U;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 285;

	t0 = ((x1==x2)<=(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int16_t x6 = INT16_MIN;
	static int16_t x8 = -1;
	int32_t t1 = -353422;

	t1 = ((x5==x6)<=(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = INT16_MAX;
	int8_t x10 = INT8_MIN;
	volatile int64_t x11 = 10LL;
	uint32_t x12 = 202U;
	volatile int32_t t2 = -1;

	t2 = ((x9==x10)<=(x11%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	static int32_t x14 = -1;
	uint8_t x15 = 1U;
	uint8_t x16 = UINT8_MAX;

	t3 = ((x13==x14)<=(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint64_t x18 = 166782350449LLU;
	static int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MIN;

	t4 = ((x17==x18)<=(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	volatile uint32_t x24 = 166352933U;

	t5 = ((x21==x22)<=(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x27 = INT16_MIN;
	static volatile int32_t t6 = 77;

	t6 = ((x25==x26)<=(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x31 = 81;
	static int16_t x32 = -5751;

	t7 = ((x29==x30)<=(x31%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 1LLU;
	static uint32_t x34 = 0U;
	uint64_t x35 = 1LLU;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = 683064772;

	t8 = ((x33==x34)<=(x35%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 4012U;
	int8_t x38 = 46;
	volatile int8_t x39 = -7;
	volatile int32_t t9 = -18772711;

	t9 = ((x37==x38)<=(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	static uint16_t x42 = 10607U;
	static int32_t x43 = INT32_MIN;
	uint32_t x44 = 48595507U;
	static int32_t t10 = 3832;

	t10 = ((x41==x42)<=(x43%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	volatile int8_t x46 = -1;
	int8_t x47 = INT8_MAX;
	volatile int16_t x48 = -1;
	volatile int32_t t11 = 15645;

	t11 = ((x45==x46)<=(x47%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -12223;
	int64_t x52 = INT64_MIN;
	int32_t t12 = -26;

	t12 = ((x49==x50)<=(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	static uint16_t x54 = 2U;
	uint8_t x56 = 2U;
	int32_t t13 = 2707;

	t13 = ((x53==x54)<=(x55%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x58 = INT32_MIN;
	uint16_t x59 = 22U;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 326;

	t14 = ((x57==x58)<=(x59%x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	static int8_t x62 = 4;
	static int64_t x63 = INT64_MAX;
	int32_t x64 = INT32_MIN;

	t15 = ((x61==x62)<=(x63%x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = -1LL;
	int16_t x66 = INT16_MIN;
	static int64_t x67 = 26600LL;
	static uint32_t x68 = 1031484587U;
	static volatile int32_t t16 = 0;

	t16 = ((x65==x66)<=(x67%x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint8_t x70 = 27U;
	static uint64_t x71 = UINT64_MAX;
	static int64_t x72 = INT64_MIN;
	int32_t t17 = 1;

	t17 = ((x69==x70)<=(x71%x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = 606348894;
	int16_t x75 = INT16_MIN;
	int64_t x76 = 10LL;

	t18 = ((x73==x74)<=(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MAX;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 1183;

	t19 = ((x77==x78)<=(x79%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = 1;
	int8_t x83 = -1;
	uint32_t x84 = 1543706909U;
	int32_t t20 = -3;

	t20 = ((x81==x82)<=(x83%x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MIN;
	volatile uint64_t x86 = UINT64_MAX;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = 10082935;

	t21 = ((x85==x86)<=(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MIN;
	int32_t x91 = -7433298;
	int64_t x92 = -1LL;
	static volatile int32_t t22 = -219369;

	t22 = ((x89==x90)<=(x91%x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x94 = UINT16_MAX;
	int64_t x95 = 480194721974LL;
	volatile uint64_t x96 = 37791396344253LLU;
	volatile int32_t t23 = -7890;

	t23 = ((x93==x94)<=(x95%x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 1U;
	int64_t x98 = -1LL;
	int16_t x99 = 1524;
	int64_t x100 = -12487064192414191LL;
	int32_t t24 = 202471402;

	t24 = ((x97==x98)<=(x99%x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int16_t x102 = INT16_MIN;
	volatile uint64_t x103 = 10033717431931LLU;
	int16_t x104 = -5;
	volatile int32_t t25 = 10;

	t25 = ((x101==x102)<=(x103%x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int8_t x106 = -1;
	int16_t x107 = -1;
	volatile int32_t x108 = -2;

	t26 = ((x105==x106)<=(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -661145930380LL;
	volatile uint8_t x110 = 34U;
	volatile int8_t x111 = 5;
	int16_t x112 = INT16_MAX;
	int32_t t27 = -164999;

	t27 = ((x109==x110)<=(x111%x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 56;
	int64_t x114 = INT64_MIN;
	volatile uint64_t x115 = 141300049380411006LLU;
	int64_t x116 = INT64_MAX;
	int32_t t28 = 12982;

	t28 = ((x113==x114)<=(x115%x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 25U;
	uint32_t x118 = 66U;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = 27;

	t29 = ((x117==x118)<=(x119%x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = -230;
	uint32_t x123 = 22U;
	static int16_t x124 = -1;
	volatile int32_t t30 = 68774801;

	t30 = ((x121==x122)<=(x123%x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MIN;
	uint32_t x127 = 22424746U;
	int64_t x128 = -1LL;

	t31 = ((x125==x126)<=(x127%x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 111LLU;
	int8_t x130 = -1;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MAX;
	int32_t t32 = 7091695;

	t32 = ((x129==x130)<=(x131%x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 14115LLU;
	uint64_t x134 = UINT64_MAX;
	int64_t x135 = INT64_MAX;
	int32_t t33 = -44281577;

	t33 = ((x133==x134)<=(x135%x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile int16_t x138 = INT16_MAX;
	int32_t t34 = -8312;

	t34 = ((x137==x138)<=(x139%x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 3914105LLU;
	int32_t x142 = 459412;
	volatile uint8_t x143 = UINT8_MAX;
	volatile int16_t x144 = INT16_MIN;
	static int32_t t35 = 60265;

	t35 = ((x141==x142)<=(x143%x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	uint32_t x146 = 371411U;
	uint32_t x147 = 588809U;
	uint64_t x148 = UINT64_MAX;
	int32_t t36 = -13986205;

	t36 = ((x145==x146)<=(x147%x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int16_t x150 = INT16_MAX;
	volatile int32_t x151 = 11700322;
	volatile int16_t x152 = INT16_MIN;
	int32_t t37 = 1;

	t37 = ((x149==x150)<=(x151%x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 2462047U;
	static volatile uint64_t x155 = 7287656689543413739LLU;
	volatile int8_t x156 = INT8_MAX;
	int32_t t38 = -1;

	t38 = ((x153==x154)<=(x155%x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 48157475;
	int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MIN;
	int32_t x160 = -1;
	static int32_t t39 = 180;

	t39 = ((x157==x158)<=(x159%x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 4U;
	uint8_t x163 = 7U;
	uint32_t x164 = 29U;

	t40 = ((x161==x162)<=(x163%x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 6U;
	uint8_t x166 = 23U;
	volatile int64_t x167 = INT64_MIN;
	uint8_t x168 = 43U;
	volatile int32_t t41 = 22;

	t41 = ((x165==x166)<=(x167%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 335645LLU;
	static int32_t x170 = INT32_MIN;
	int32_t x172 = -58564;
	int32_t t42 = -609929;

	t42 = ((x169==x170)<=(x171%x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x173 = INT32_MIN;
	int64_t x174 = -5784209LL;
	static int16_t x175 = INT16_MAX;
	volatile int64_t x176 = -149358051372LL;
	volatile int32_t t43 = -1228028;

	t43 = ((x173==x174)<=(x175%x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	static int64_t x178 = INT64_MIN;
	volatile int64_t x179 = INT64_MAX;
	int8_t x180 = INT8_MAX;

	t44 = ((x177==x178)<=(x179%x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	int16_t x182 = -1;
	uint16_t x183 = 1570U;
	uint16_t x184 = 1U;
	int32_t t45 = -580495468;

	t45 = ((x181==x182)<=(x183%x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	static int32_t x186 = INT32_MIN;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -994605;

	t46 = ((x185==x186)<=(x187%x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = 23U;
	int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MAX;
	static int32_t t47 = -4807;

	t47 = ((x189==x190)<=(x191%x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	uint16_t x194 = 59U;
	volatile int64_t x195 = INT64_MAX;
	int16_t x196 = -1;
	volatile int32_t t48 = -342;

	t48 = ((x193==x194)<=(x195%x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	int64_t x198 = INT64_MIN;
	uint32_t x200 = 7U;
	volatile int32_t t49 = 1233;

	t49 = ((x197==x198)<=(x199%x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = 1;
	static uint64_t x202 = UINT64_MAX;
	uint32_t x203 = 3795U;
	uint64_t x204 = UINT64_MAX;

	t50 = ((x201==x202)<=(x203%x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 31U;
	int64_t x206 = 465193687LL;
	uint32_t x207 = 5U;
	int16_t x208 = -1;
	int32_t t51 = -7457;

	t51 = ((x205==x206)<=(x207%x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = 26;
	static int8_t x211 = -1;
	uint8_t x212 = 6U;
	static volatile int32_t t52 = 6;

	t52 = ((x209==x210)<=(x211%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = -1LL;
	volatile int32_t x214 = INT32_MIN;
	static uint16_t x215 = 116U;
	volatile int16_t x216 = INT16_MIN;

	t53 = ((x213==x214)<=(x215%x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	uint64_t x218 = UINT64_MAX;
	uint8_t x219 = UINT8_MAX;
	static volatile int32_t t54 = 15238;

	t54 = ((x217==x218)<=(x219%x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MIN;
	int8_t x223 = INT8_MAX;
	static int64_t x224 = INT64_MIN;
	static volatile int32_t t55 = -391;

	t55 = ((x221==x222)<=(x223%x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x225 = UINT64_MAX;
	volatile uint64_t x227 = 2201LLU;
	int8_t x228 = INT8_MAX;
	int32_t t56 = -6178;

	t56 = ((x225==x226)<=(x227%x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MIN;
	uint16_t x230 = UINT16_MAX;
	volatile uint32_t x231 = 774U;
	int8_t x232 = -1;
	volatile int32_t t57 = -491969812;

	t57 = ((x229==x230)<=(x231%x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x234 = 421U;
	int8_t x235 = INT8_MIN;
	volatile int32_t x236 = -2;

	t58 = ((x233==x234)<=(x235%x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	volatile int8_t x238 = 9;
	static uint64_t x239 = UINT64_MAX;
	int8_t x240 = INT8_MAX;
	volatile int32_t t59 = 47912;

	t59 = ((x237==x238)<=(x239%x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x244 = INT16_MAX;
	volatile int32_t t60 = -74641;

	t60 = ((x241==x242)<=(x243%x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 6850U;
	uint8_t x246 = UINT8_MAX;
	int8_t x247 = INT8_MIN;
	volatile int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 5430;

	t61 = ((x245==x246)<=(x247%x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = -28486847;
	uint64_t x250 = 71118990709858483LLU;
	static int32_t x252 = -76;

	t62 = ((x249==x250)<=(x251%x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = 17070838754LLU;
	int8_t x254 = -4;
	int64_t x255 = INT64_MAX;
	int64_t x256 = INT64_MIN;

	t63 = ((x253==x254)<=(x255%x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 0;
	volatile int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	static int16_t x260 = 705;

	t64 = ((x257==x258)<=(x259%x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	static uint16_t x262 = 2435U;
	static int32_t x264 = -11;

	t65 = ((x261==x262)<=(x263%x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = -1;
	int8_t x268 = -1;

	t66 = ((x265==x266)<=(x267%x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = 59703432136LL;
	int32_t x274 = 12076;
	static int32_t x275 = -1;
	volatile int32_t t67 = -27784;

	t67 = ((x273==x274)<=(x275%x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = INT8_MIN;
	volatile int16_t x280 = -1;
	int32_t t68 = 6927;

	t68 = ((x277==x278)<=(x279%x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = INT8_MIN;
	static uint8_t x282 = UINT8_MAX;
	int32_t t69 = 0;

	t69 = ((x281==x282)<=(x283%x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x286 = INT8_MIN;
	static int32_t t70 = -8147;

	t70 = ((x285==x286)<=(x287%x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = UINT16_MAX;
	static int32_t x291 = -1;
	int32_t x292 = INT32_MAX;
	int32_t t71 = 1345330;

	t71 = ((x289==x290)<=(x291%x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MAX;
	int64_t x296 = -1LL;
	int32_t t72 = 9;

	t72 = ((x293==x294)<=(x295%x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x297 = INT64_MIN;
	volatile int64_t x298 = INT64_MIN;
	int16_t x299 = -1;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t73 = 644;

	t73 = ((x297==x298)<=(x299%x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x301 = -1LL;
	uint16_t x303 = UINT16_MAX;
	int16_t x304 = INT16_MIN;
	volatile int32_t t74 = 68445782;

	t74 = ((x301==x302)<=(x303%x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x306 = -118;
	uint32_t x307 = 121U;
	static uint64_t x308 = UINT64_MAX;
	int32_t t75 = -2;

	t75 = ((x305==x306)<=(x307%x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	volatile int8_t x310 = 0;
	volatile int32_t x311 = INT32_MIN;
	uint32_t x312 = UINT32_MAX;
	volatile int32_t t76 = 31939650;

	t76 = ((x309==x310)<=(x311%x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = INT8_MIN;
	static int32_t x314 = INT32_MIN;
	uint16_t x315 = 804U;
	uint32_t x316 = 32557617U;
	int32_t t77 = 25139;

	t77 = ((x313==x314)<=(x315%x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = 5;
	uint64_t x318 = 8521935LLU;
	uint64_t x319 = UINT64_MAX;
	int32_t x320 = INT32_MIN;

	t78 = ((x317==x318)<=(x319%x320));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x322 = -52;
	static volatile int64_t x323 = -1LL;
	int64_t x324 = 1LL;
	volatile int32_t t79 = -935492;

	t79 = ((x321==x322)<=(x323%x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = UINT64_MAX;
	static volatile uint64_t x327 = 36801727103LLU;
	uint16_t x328 = UINT16_MAX;
	int32_t t80 = 328;

	t80 = ((x325==x326)<=(x327%x328));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x331 = UINT8_MAX;
	static uint8_t x332 = UINT8_MAX;
	static int32_t t81 = -3122111;

	t81 = ((x329==x330)<=(x331%x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = -1;
	volatile uint32_t x335 = 1667259U;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t82 = 5350468;

	t82 = ((x333==x334)<=(x335%x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 34U;
	static int64_t x344 = -5247608165256LL;

	t83 = ((x341==x342)<=(x343%x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = -1;
	int32_t x347 = -1;
	volatile int32_t t84 = 221062409;

	t84 = ((x345==x346)<=(x347%x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 3876112U;
	uint64_t x350 = UINT64_MAX;
	int32_t x352 = -106903;
	volatile int32_t t85 = -143753;

	t85 = ((x349==x350)<=(x351%x352));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x354 = UINT16_MAX;
	uint16_t x355 = 25215U;
	static uint8_t x356 = 1U;

	t86 = ((x353==x354)<=(x355%x356));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x358 = INT16_MIN;
	int32_t x359 = 1;
	int64_t x360 = 14523933595178LL;

	t87 = ((x357==x358)<=(x359%x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x362 = 0U;
	int16_t x364 = -1;
	int32_t t88 = -22706229;

	t88 = ((x361==x362)<=(x363%x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = -1LL;
	int64_t x366 = 1869184580LL;
	int8_t x368 = INT8_MIN;
	int32_t t89 = 97921465;

	t89 = ((x365==x366)<=(x367%x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x369 = -1;
	int16_t x371 = 2490;
	uint32_t x372 = UINT32_MAX;
	volatile int32_t t90 = 492140;

	t90 = ((x369==x370)<=(x371%x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x373 = 1U;
	int16_t x374 = INT16_MIN;
	int16_t x375 = -1;
	int32_t t91 = 438971;

	t91 = ((x373==x374)<=(x375%x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x378 = 0U;
	int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MIN;
	volatile int32_t t92 = 42027527;

	t92 = ((x377==x378)<=(x379%x380));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x381 = -1;
	int8_t x382 = INT8_MIN;
	int32_t x383 = INT32_MIN;
	uint64_t x384 = 134457656207847412LLU;
	static int32_t t93 = -133940583;

	t93 = ((x381==x382)<=(x383%x384));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = -274;
	static int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MAX;
	volatile int32_t t94 = -854;

	t94 = ((x385==x386)<=(x387%x388));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = -72;
	int8_t x391 = INT8_MAX;
	int32_t t95 = 64558725;

	t95 = ((x389==x390)<=(x391%x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x393 = INT32_MIN;
	uint32_t x394 = 30735U;
	int8_t x395 = INT8_MIN;
	uint8_t x396 = 31U;
	int32_t t96 = -379991747;

	t96 = ((x393==x394)<=(x395%x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x397 = 1U;
	uint16_t x398 = UINT16_MAX;
	int16_t x399 = -3;
	int32_t x400 = INT32_MIN;
	int32_t t97 = 9;

	t97 = ((x397==x398)<=(x399%x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x401 = UINT8_MAX;
	static int8_t x402 = 0;
	int8_t x403 = INT8_MIN;
	int8_t x404 = 7;
	volatile int32_t t98 = 740;

	t98 = ((x401==x402)<=(x403%x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x407 = INT64_MIN;
	int8_t x408 = INT8_MIN;
	int32_t t99 = -2214;

	t99 = ((x405==x406)<=(x407%x408));

	if (t99 != 1) { NG(); } else { ; }
	
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

