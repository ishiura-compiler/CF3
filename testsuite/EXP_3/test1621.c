#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 745280565U;
static int64_t x4 = -2118LL;
int16_t x6 = 82;
static int16_t x10 = -1;
static int64_t x11 = 1934101LL;
int32_t t2 = -1;
int32_t x14 = -182164189;
int32_t t3 = 475145;
volatile int32_t t4 = 137;
static int16_t x32 = 865;
static int64_t x36 = INT64_MIN;
uint32_t x39 = 50U;
int64_t x44 = INT64_MAX;
volatile int32_t t10 = 566296;
int32_t x55 = INT32_MIN;
int64_t x58 = INT64_MIN;
int64_t x61 = -1LL;
volatile int32_t t15 = 73655281;
int32_t t17 = -1004337;
int16_t x73 = INT16_MIN;
int32_t t18 = 12;
static volatile uint8_t x77 = 22U;
volatile int32_t t19 = 1;
volatile int64_t x84 = INT64_MAX;
static uint32_t x85 = UINT32_MAX;
int32_t x88 = -202;
int32_t t21 = -290844;
int16_t x89 = INT16_MIN;
volatile int64_t x91 = 1495564LL;
int8_t x92 = INT8_MIN;
int8_t x98 = INT8_MIN;
volatile int32_t x100 = INT32_MIN;
volatile int64_t x103 = INT64_MAX;
int32_t t27 = 794966;
static uint8_t x116 = 1U;
static int32_t t28 = 842;
static int64_t x120 = 186446340844578LL;
volatile int64_t x134 = -1LL;
int64_t x137 = -398438LL;
int8_t x138 = -14;
uint8_t x139 = UINT8_MAX;
volatile int32_t t34 = 7317074;
int32_t t35 = -5;
volatile int32_t t38 = -41;
int16_t x165 = INT16_MAX;
static int32_t x166 = INT32_MIN;
uint8_t x170 = UINT8_MAX;
int8_t x171 = INT8_MIN;
uint16_t x180 = UINT16_MAX;
uint8_t x181 = 1U;
uint16_t x183 = UINT16_MAX;
int16_t x186 = INT16_MIN;
static int8_t x188 = INT8_MIN;
uint16_t x189 = UINT16_MAX;
uint64_t x190 = 204LLU;
int32_t x198 = INT32_MIN;
static int16_t x199 = INT16_MIN;
volatile int64_t x204 = -1LL;
int16_t x207 = 2;
int8_t x210 = INT8_MIN;
int32_t t55 = 1;
static volatile int8_t x228 = -1;
static int32_t t56 = 1365;
int8_t x240 = 0;
volatile int32_t t59 = -141398;
uint8_t x241 = 43U;
static int16_t x250 = -1;
int32_t t62 = 407;
volatile uint8_t x254 = 1U;
int8_t x256 = INT8_MAX;
uint8_t x257 = 107U;
int32_t x260 = -1;
static volatile uint16_t x269 = 1546U;
uint32_t x274 = 496097U;
int16_t x275 = -1;
int32_t t68 = 187047060;
uint32_t x277 = UINT32_MAX;
static uint32_t x287 = 31520U;
int8_t x289 = INT8_MIN;
int64_t x291 = INT64_MIN;
int16_t x294 = -29;
uint64_t x295 = 10LLU;
int8_t x300 = INT8_MIN;
int16_t x301 = 1;
volatile uint16_t x307 = 16741U;
uint8_t x308 = UINT8_MAX;
int32_t t76 = 442;
int8_t x312 = INT8_MAX;
int32_t t77 = 12282;
static uint16_t x320 = 12U;
int64_t x325 = INT64_MIN;
int64_t x326 = INT64_MIN;
static int32_t x327 = INT32_MIN;
uint32_t x331 = 39797U;
static int16_t x335 = -1;
int32_t x340 = INT32_MIN;
uint32_t x344 = 1U;
static volatile int8_t x348 = -1;
uint64_t x351 = UINT64_MAX;
int32_t x353 = INT32_MIN;
volatile uint64_t x355 = UINT64_MAX;
volatile int16_t x367 = -1;
volatile int32_t x368 = INT32_MAX;
uint8_t x369 = 120U;
volatile int32_t t93 = -134;
int64_t x379 = INT64_MAX;
volatile int32_t t94 = 10;
int64_t x390 = INT64_MIN;
static int32_t x391 = 364293;
uint8_t x392 = UINT8_MAX;
static int64_t x399 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x2 = 23055287577887LLU;
	int32_t t0 = 1;

	t0 = ((x1==x2)<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 379;

	t1 = ((x5==x6)<(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1585495501U;
	uint32_t x12 = 3U;

	t2 = ((x9==x10)<(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	static int8_t x15 = 1;
	uint32_t x16 = 380809U;

	t3 = ((x13==x14)<(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -12146;
	static int8_t x18 = 1;
	uint64_t x19 = UINT64_MAX;
	uint8_t x20 = UINT8_MAX;

	t4 = ((x17==x18)<(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -51080753476944631LL;
	uint64_t x22 = 3879LLU;
	uint8_t x23 = 25U;
	volatile uint8_t x24 = 1U;
	int32_t t5 = -10777;

	t5 = ((x21==x22)<(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int8_t x26 = -26;
	static int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -1;

	t6 = ((x25==x26)<(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int8_t x30 = -49;
	static uint8_t x31 = 0U;
	static int32_t t7 = 6846825;

	t7 = ((x29==x30)<(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 131544906U;
	int32_t x34 = -1;
	int64_t x35 = INT64_MIN;
	volatile int32_t t8 = -547656;

	t8 = ((x33==x34)<(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	uint8_t x38 = 62U;
	static int32_t x40 = -173;
	int32_t t9 = 5;

	t9 = ((x37==x38)<(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int64_t x42 = INT64_MAX;
	volatile uint8_t x43 = 14U;

	t10 = ((x41==x42)<(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 6;
	int64_t x46 = -1LL;
	uint64_t x47 = 40459574590LLU;
	int16_t x48 = INT16_MIN;
	static int32_t t11 = 0;

	t11 = ((x45==x46)<(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	volatile uint32_t x51 = UINT32_MAX;
	int8_t x52 = INT8_MAX;
	volatile int32_t t12 = 12;

	t12 = ((x49==x50)<(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MAX;
	volatile int16_t x54 = -4;
	volatile uint8_t x56 = 1U;
	volatile int32_t t13 = 218285611;

	t13 = ((x53==x54)<(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int16_t x59 = -6985;
	int64_t x60 = INT64_MIN;
	static int32_t t14 = 50;

	t14 = ((x57==x58)<(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MAX;
	int64_t x64 = 43041482LL;

	t15 = ((x61==x62)<(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int8_t x66 = INT8_MIN;
	uint8_t x67 = 3U;
	volatile uint32_t x68 = 162379726U;
	int32_t t16 = -9743986;

	t16 = ((x65==x66)<(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	static int8_t x70 = 18;
	volatile int16_t x71 = INT16_MAX;
	static volatile int8_t x72 = -1;

	t17 = ((x69==x70)<(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = UINT8_MAX;
	volatile int32_t x75 = -4;
	int16_t x76 = INT16_MAX;

	t18 = ((x73==x74)<(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = -1;
	volatile int8_t x79 = -45;
	uint64_t x80 = 32737564LLU;

	t19 = ((x77==x78)<(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static int8_t x82 = INT8_MIN;
	volatile uint8_t x83 = 24U;
	int32_t t20 = -38062;

	t20 = ((x81==x82)<(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -1LL;
	uint32_t x87 = 594393170U;

	t21 = ((x85==x86)<(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = -6;
	volatile int32_t t22 = 62777;

	t22 = ((x89==x90)<(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -1;
	int16_t x94 = INT16_MIN;
	uint32_t x95 = UINT32_MAX;
	static uint32_t x96 = 9083U;
	int32_t t23 = -10;

	t23 = ((x93==x94)<(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = 5566715268LLU;
	int8_t x99 = INT8_MAX;
	int32_t t24 = 5;

	t24 = ((x97==x98)<(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 10168LLU;
	volatile int32_t x102 = INT32_MIN;
	int64_t x104 = INT64_MAX;
	int32_t t25 = -41;

	t25 = ((x101==x102)<(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MIN;
	int32_t x107 = 8315759;
	uint64_t x108 = 1268201820167LLU;
	static int32_t t26 = 189;

	t26 = ((x105==x106)<(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MAX;
	uint16_t x112 = UINT16_MAX;

	t27 = ((x109==x110)<(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	static int8_t x114 = -1;
	static int16_t x115 = 1;

	t28 = ((x113==x114)<(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 1;
	int16_t x118 = INT16_MIN;
	volatile int16_t x119 = INT16_MIN;
	int32_t t29 = 0;

	t29 = ((x117==x118)<(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	uint8_t x122 = 1U;
	int32_t x123 = INT32_MAX;
	int8_t x124 = 0;
	int32_t t30 = 37;

	t30 = ((x121==x122)<(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	uint8_t x126 = UINT8_MAX;
	static int16_t x127 = -1;
	static int16_t x128 = 0;
	int32_t t31 = 0;

	t31 = ((x125==x126)<(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int16_t x130 = INT16_MAX;
	uint32_t x131 = 18242178U;
	uint32_t x132 = 0U;
	volatile int32_t t32 = 11666234;

	t32 = ((x129==x130)<(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MIN;
	volatile int32_t x135 = INT32_MAX;
	uint32_t x136 = UINT32_MAX;
	volatile int32_t t33 = 3694090;

	t33 = ((x133==x134)<(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x140 = INT64_MIN;

	t34 = ((x137==x138)<(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int8_t x142 = INT8_MIN;
	static int64_t x143 = INT64_MIN;
	static volatile int16_t x144 = INT16_MIN;

	t35 = ((x141==x142)<(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MIN;
	static int8_t x146 = INT8_MAX;
	int32_t x147 = -64300218;
	int32_t x148 = -1;
	static volatile int32_t t36 = 2;

	t36 = ((x145==x146)<(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 1;
	int64_t x150 = INT64_MIN;
	int16_t x151 = -54;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -3470;

	t37 = ((x149==x150)<(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	int32_t x154 = -1;
	static int64_t x155 = INT64_MAX;
	int8_t x156 = INT8_MIN;

	t38 = ((x153==x154)<(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static uint8_t x158 = 12U;
	volatile int8_t x159 = INT8_MIN;
	uint32_t x160 = 3564454U;
	int32_t t39 = -367;

	t39 = ((x157==x158)<(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 2273375757LL;
	int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = 205804783U;
	static int32_t t40 = 50055;

	t40 = ((x161==x162)<(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x167 = -1;
	int16_t x168 = 10293;
	int32_t t41 = -126387903;

	t41 = ((x165==x166)<(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	uint64_t x172 = 261LLU;
	volatile int32_t t42 = 2251;

	t42 = ((x169==x170)<(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	uint8_t x174 = 7U;
	int16_t x175 = -1;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = -7067551;

	t43 = ((x173==x174)<(x175<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 16414U;
	int64_t x178 = INT64_MAX;
	int16_t x179 = 57;
	int32_t t44 = -915;

	t44 = ((x177==x178)<(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = 106930;
	int32_t x184 = INT32_MAX;
	static int32_t t45 = 810;

	t45 = ((x181==x182)<(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 2U;
	static uint16_t x187 = UINT16_MAX;
	int32_t t46 = -14679388;

	t46 = ((x185==x186)<(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x191 = 64360U;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = -97;

	t47 = ((x189==x190)<(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = -1;
	static int16_t x195 = -1;
	volatile int32_t x196 = -275744;
	int32_t t48 = 66205;

	t48 = ((x193==x194)<(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	uint32_t x200 = 3308193U;
	static int32_t t49 = 619;

	t49 = ((x197==x198)<(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 61U;
	int32_t x202 = INT32_MIN;
	uint8_t x203 = 1U;
	int32_t t50 = -4462065;

	t50 = ((x201==x202)<(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int16_t x206 = INT16_MIN;
	volatile int64_t x208 = 54941340045LL;
	volatile int32_t t51 = 3;

	t51 = ((x205==x206)<(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	static uint32_t x211 = 9238590U;
	volatile int8_t x212 = INT8_MAX;
	static int32_t t52 = -980536248;

	t52 = ((x209==x210)<(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x213 = INT16_MAX;
	uint32_t x214 = UINT32_MAX;
	volatile int64_t x215 = INT64_MIN;
	uint64_t x216 = 17813004228983659LLU;
	volatile int32_t t53 = 3605333;

	t53 = ((x213==x214)<(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = UINT8_MAX;
	int32_t x218 = 1;
	static int64_t x219 = INT64_MIN;
	int32_t x220 = -188;
	volatile int32_t t54 = 136527524;

	t54 = ((x217==x218)<(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int64_t x222 = -1LL;
	uint32_t x223 = 182577926U;
	int64_t x224 = 587867LL;

	t55 = ((x221==x222)<(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = 3538984143LL;
	static int64_t x226 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;

	t56 = ((x225==x226)<(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	uint16_t x230 = 23U;
	static volatile uint32_t x231 = 3046U;
	static uint16_t x232 = 10913U;
	int32_t t57 = 0;

	t57 = ((x229==x230)<(x231<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = 7032673099764667LLU;
	volatile int32_t x234 = INT32_MAX;
	volatile int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t58 = 0;

	t58 = ((x233==x234)<(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	static int64_t x238 = INT64_MIN;
	volatile uint16_t x239 = 109U;

	t59 = ((x237==x238)<(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x242 = -1LL;
	int64_t x243 = -1LL;
	static uint16_t x244 = 0U;
	static int32_t t60 = 7528057;

	t60 = ((x241==x242)<(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x245 = 0;
	uint8_t x246 = 2U;
	int8_t x247 = -2;
	int16_t x248 = INT16_MAX;
	volatile int32_t t61 = 58;

	t61 = ((x245==x246)<(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	uint16_t x251 = UINT16_MAX;
	int64_t x252 = -1LL;

	t62 = ((x249==x250)<(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -9;
	int64_t x255 = INT64_MIN;
	volatile int32_t t63 = -1;

	t63 = ((x253==x254)<(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = 0;
	volatile int64_t x259 = -1LL;
	int32_t t64 = -520538;

	t64 = ((x257==x258)<(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	volatile uint8_t x262 = 4U;
	volatile uint64_t x263 = 200215428317LLU;
	int16_t x264 = INT16_MAX;
	volatile int32_t t65 = -160417;

	t65 = ((x261==x262)<(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	int8_t x266 = 7;
	static int32_t x267 = INT32_MIN;
	static int8_t x268 = INT8_MAX;
	static volatile int32_t t66 = 65;

	t66 = ((x265==x266)<(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MAX;
	static volatile uint8_t x271 = 6U;
	int8_t x272 = -1;
	int32_t t67 = 0;

	t67 = ((x269==x270)<(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MAX;
	volatile int8_t x276 = INT8_MAX;

	t68 = ((x273==x274)<(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = INT16_MIN;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t69 = -76694;

	t69 = ((x277==x278)<(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = INT8_MIN;
	static volatile uint32_t x284 = UINT32_MAX;
	int32_t t70 = -347850830;

	t70 = ((x281==x282)<(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint8_t x286 = 22U;
	int32_t x288 = INT32_MAX;
	int32_t t71 = -29;

	t71 = ((x285==x286)<(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x290 = INT16_MIN;
	static int16_t x292 = INT16_MAX;
	volatile int32_t t72 = -58941;

	t72 = ((x289==x290)<(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 242U;
	int64_t x296 = INT64_MIN;
	int32_t t73 = -231;

	t73 = ((x293==x294)<(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 11U;
	int32_t x298 = INT32_MIN;
	int8_t x299 = 63;
	static int32_t t74 = 13967;

	t74 = ((x297==x298)<(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x302 = INT32_MIN;
	int32_t x303 = -1;
	uint32_t x304 = UINT32_MAX;
	int32_t t75 = 0;

	t75 = ((x301==x302)<(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 2U;
	static int8_t x306 = -1;

	t76 = ((x305==x306)<(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = 3U;
	static int16_t x310 = INT16_MIN;
	volatile int16_t x311 = INT16_MIN;

	t77 = ((x309==x310)<(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -7;
	int32_t x314 = INT32_MAX;
	volatile int16_t x315 = -1;
	uint16_t x316 = UINT16_MAX;
	int32_t t78 = 1615109;

	t78 = ((x313==x314)<(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	static int64_t x318 = INT64_MIN;
	int32_t x319 = -13;
	int32_t t79 = -480951102;

	t79 = ((x317==x318)<(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	volatile uint64_t x322 = 84729LLU;
	static int64_t x323 = -1LL;
	int64_t x324 = -824158899371297201LL;
	static volatile int32_t t80 = 7;

	t80 = ((x321==x322)<(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x328 = INT32_MIN;
	int32_t t81 = 426577;

	t81 = ((x325==x326)<(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -44166907;

	t82 = ((x329==x330)<(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	int32_t x336 = -1;
	int32_t t83 = 149;

	t83 = ((x333==x334)<(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MAX;
	volatile uint16_t x338 = 54U;
	uint64_t x339 = 44377276661456LLU;
	volatile int32_t t84 = -1946;

	t84 = ((x337==x338)<(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = INT32_MIN;
	int16_t x342 = 9;
	uint16_t x343 = 185U;
	static volatile int32_t t85 = -3885890;

	t85 = ((x341==x342)<(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = 5;
	int8_t x347 = -1;
	volatile int32_t t86 = -36626;

	t86 = ((x345==x346)<(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile int32_t x350 = INT32_MIN;
	static uint64_t x352 = 427410747097LLU;
	static volatile int32_t t87 = 7993;

	t87 = ((x349==x350)<(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = 132728LL;
	volatile int64_t x356 = -12942741LL;
	static int32_t t88 = 125709;

	t88 = ((x353==x354)<(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MAX;
	static uint16_t x359 = 8308U;
	int64_t x360 = INT64_MIN;
	static volatile int32_t t89 = 46332;

	t89 = ((x357==x358)<(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = -1;
	volatile int64_t x362 = -100528LL;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MAX;
	volatile int32_t t90 = 6713156;

	t90 = ((x361==x362)<(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	int32_t x366 = INT32_MAX;
	volatile int32_t t91 = 0;

	t91 = ((x365==x366)<(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x370 = 633106639LLU;
	int16_t x371 = -1;
	uint32_t x372 = 120058U;
	int32_t t92 = 1079;

	t92 = ((x369==x370)<(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	int16_t x374 = -1;
	int16_t x375 = -12;
	static uint16_t x376 = 230U;

	t93 = ((x373==x374)<(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 1U;
	int64_t x378 = INT64_MIN;
	int64_t x380 = 1955934LL;

	t94 = ((x377==x378)<(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = INT64_MIN;
	static int16_t x382 = INT16_MIN;
	volatile int32_t x383 = INT32_MIN;
	uint32_t x384 = 1342885U;
	volatile int32_t t95 = 26;

	t95 = ((x381==x382)<(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = -1LL;
	static uint64_t x386 = UINT64_MAX;
	volatile int16_t x387 = INT16_MAX;
	uint16_t x388 = 27U;
	volatile int32_t t96 = -221462561;

	t96 = ((x385==x386)<(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 18U;
	volatile int32_t t97 = -337;

	t97 = ((x389==x390)<(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = -1LL;
	static volatile int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	volatile int8_t x396 = -1;
	volatile int32_t t98 = 2;

	t98 = ((x393==x394)<(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	int64_t x398 = INT64_MIN;
	uint16_t x400 = 1U;
	int32_t t99 = -829902;

	t99 = ((x397==x398)<(x399<=x400));

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
