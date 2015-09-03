#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int64_t t1 = INT64_MAX;
int32_t t2 = 3;
uint64_t x13 = 8109858866LLU;
uint16_t x16 = 3970U;
int16_t x20 = INT16_MAX;
int32_t t5 = INT32_MAX;
volatile uint32_t x26 = 30452756U;
int64_t x30 = INT64_MIN;
uint8_t x35 = 10U;
static int8_t x37 = 5;
static volatile int32_t x45 = INT32_MAX;
static uint32_t x46 = 131409U;
volatile int64_t t11 = -2026273029495827345LL;
uint8_t x52 = 18U;
uint32_t x53 = 73U;
int16_t x54 = INT16_MAX;
int32_t x59 = INT32_MAX;
volatile int64_t t15 = -35145LL;
uint32_t x70 = 5299900U;
volatile int16_t x73 = 0;
int64_t x76 = INT64_MIN;
int8_t x83 = -1;
int64_t x85 = INT64_MAX;
int16_t x95 = INT16_MIN;
int16_t x96 = INT16_MAX;
int16_t x101 = 0;
volatile int16_t x102 = INT16_MIN;
uint64_t x103 = 3070LLU;
static uint8_t x108 = 2U;
static volatile int32_t t30 = -211643305;
int8_t x125 = INT8_MIN;
int8_t x127 = 0;
int32_t x130 = 1;
uint8_t x138 = 23U;
volatile uint32_t x139 = 1U;
static volatile int32_t t35 = -322298930;
uint16_t x145 = UINT16_MAX;
uint64_t x151 = 9823481800LLU;
static volatile int8_t x159 = -1;
volatile int32_t t39 = 4279;
int64_t x163 = -152LL;
uint32_t x166 = UINT32_MAX;
int16_t x168 = 26;
int32_t x170 = INT32_MIN;
volatile int32_t t42 = -1119061;
int16_t x177 = INT16_MAX;
static volatile uint32_t t44 = 6574U;
int16_t x185 = -1;
int64_t x192 = INT64_MIN;
uint8_t x194 = 6U;
int32_t t48 = -3;
int16_t x199 = -1;
uint64_t x200 = 192605610448756LLU;
volatile uint64_t t49 = 7597LLU;
volatile int64_t t52 = 54LL;
volatile int64_t t53 = -1428489LL;
int64_t t54 = INT64_MIN;
volatile int64_t t55 = -235LL;
volatile int32_t t56 = -1863;
volatile int16_t x238 = 0;
static int32_t x246 = INT32_MAX;
static volatile int8_t x254 = -1;
int32_t t67 = INT32_MAX;
int8_t x279 = -1;
int16_t x281 = INT16_MAX;
volatile uint8_t x285 = 105U;
int8_t x293 = INT8_MIN;
uint64_t t74 = 29LLU;
int8_t x309 = -1;
int32_t x313 = INT32_MIN;
uint32_t x318 = 147402U;
int32_t x324 = -1;
static int32_t t79 = -7;
static int8_t x325 = INT8_MAX;
int64_t x329 = INT64_MIN;
int32_t x330 = -1;
uint8_t x344 = 49U;
static int16_t x345 = -1;
int64_t x346 = 4015231521311LL;
uint32_t x349 = 44U;
int32_t t86 = 2199621;
uint64_t x361 = 857745297627243736LLU;
uint8_t x362 = 1U;
int16_t x367 = -1;
static uint32_t x374 = 69189U;
static volatile uint64_t t91 = 2LLU;
uint64_t x391 = 7441130062103LLU;
volatile uint32_t x410 = UINT32_MAX;
uint8_t x411 = 113U;
volatile int32_t t99 = 147068899;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int16_t x3 = INT16_MAX;
	volatile int8_t x4 = INT8_MAX;
	int32_t t0 = 13;

	t0 = (((x1|x2)<x3)+x4);

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int16_t x6 = INT16_MAX;
	static volatile int32_t x7 = -1;
	int64_t x8 = INT64_MAX;

	t1 = (((x5|x6)<x7)+x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 6U;
	uint16_t x10 = 5558U;
	static uint32_t x11 = 127U;
	static int16_t x12 = INT16_MIN;

	t2 = (((x9|x10)<x11)+x12);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	volatile int64_t x15 = -41207LL;
	volatile int32_t t3 = -15;

	t3 = (((x13|x14)<x15)+x16);

	if (t3 != 3971) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 545736030;
	static int16_t x18 = -54;
	static int32_t x19 = -613;
	int32_t t4 = -1;

	t4 = (((x17|x18)<x19)+x20);

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MIN;
	uint32_t x23 = 112176966U;
	volatile int32_t x24 = INT32_MAX;

	t5 = (((x21|x22)<x23)+x24);

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 3U;
	static int8_t x27 = -1;
	int8_t x28 = -2;
	volatile int32_t t6 = 29464926;

	t6 = (((x25|x26)<x27)+x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	uint64_t x31 = 1LLU;
	int32_t x32 = 7884487;
	volatile int32_t t7 = 128;

	t7 = (((x29|x30)<x31)+x32);

	if (t7 != 7884487) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	static uint64_t x34 = UINT64_MAX;
	volatile int32_t x36 = INT32_MAX;
	static int32_t t8 = INT32_MAX;

	t8 = (((x33|x34)<x35)+x36);

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 3373U;
	uint64_t x39 = UINT64_MAX;
	uint8_t x40 = 2U;
	volatile int32_t t9 = 10833;

	t9 = (((x37|x38)<x39)+x40);

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 15702LLU;
	uint64_t x42 = 1968923647760746LLU;
	static volatile uint64_t x43 = 392LLU;
	static int32_t x44 = -1;
	volatile int32_t t10 = 26580;

	t10 = (((x41|x42)<x43)+x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x47 = 4373U;
	int64_t x48 = 51861662720245LL;

	t11 = (((x45|x46)<x47)+x48);

	if (t11 != 51861662720245LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int8_t x50 = -11;
	int8_t x51 = INT8_MIN;
	int32_t t12 = -3431403;

	t12 = (((x49|x50)<x51)+x52);

	if (t12 != 18) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x55 = UINT8_MAX;
	static uint32_t x56 = 2U;
	uint32_t t13 = 1827888U;

	t13 = (((x53|x54)<x55)+x56);

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 23U;
	uint64_t x58 = 429LLU;
	volatile int64_t x60 = 5719601LL;
	static volatile int64_t t14 = -3934804120020657145LL;

	t14 = (((x57|x58)<x59)+x60);

	if (t14 != 5719602LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	static uint16_t x62 = 461U;
	int16_t x63 = INT16_MAX;
	volatile int64_t x64 = 0LL;

	t15 = (((x61|x62)<x63)+x64);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint64_t x66 = 137590170717550LLU;
	static uint16_t x67 = 3766U;
	static uint64_t x68 = 26140040LLU;
	volatile uint64_t t16 = 239007080207641LLU;

	t16 = (((x65|x66)<x67)+x68);

	if (t16 != 26140040LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 12U;
	int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = INT64_MIN;

	t17 = (((x69|x70)<x71)+x72);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = INT16_MAX;
	static uint64_t x75 = UINT64_MAX;
	int64_t t18 = -4447323885LL;

	t18 = (((x73|x74)<x75)+x76);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int16_t x78 = -504;
	static int8_t x79 = INT8_MAX;
	int16_t x80 = INT16_MAX;
	int32_t t19 = 0;

	t19 = (((x77|x78)<x79)+x80);

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int32_t x82 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	static volatile int32_t t20 = -511604591;

	t20 = (((x81|x82)<x83)+x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = 2;
	int32_t x87 = -388;
	int64_t x88 = 4LL;
	volatile int64_t t21 = -59LL;

	t21 = (((x85|x86)<x87)+x88);

	if (t21 != 4LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MIN;
	uint16_t x91 = 544U;
	volatile int8_t x92 = INT8_MAX;
	int32_t t22 = -47206895;

	t22 = (((x89|x90)<x91)+x92);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	volatile uint16_t x94 = UINT16_MAX;
	static volatile int32_t t23 = -513;

	t23 = (((x93|x94)<x95)+x96);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 8U;
	static volatile uint32_t x98 = 1154U;
	volatile int16_t x99 = INT16_MAX;
	int16_t x100 = -363;
	int32_t t24 = 21288;

	t24 = (((x97|x98)<x99)+x100);

	if (t24 != -362) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x104 = -1;
	static volatile int32_t t25 = 6104;

	t25 = (((x101|x102)<x103)+x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = INT16_MIN;
	static int16_t x106 = -1;
	int64_t x107 = -12933LL;
	int32_t t26 = 1030;

	t26 = (((x105|x106)<x107)+x108);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 1115963010U;
	int16_t x110 = INT16_MIN;
	volatile uint64_t x111 = 16316LLU;
	uint16_t x112 = 6585U;
	volatile int32_t t27 = 223777;

	t27 = (((x109|x110)<x111)+x112);

	if (t27 != 6585) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 27437183U;
	uint32_t x114 = 444U;
	int64_t x115 = -1LL;
	uint8_t x116 = 35U;
	int32_t t28 = 439744;

	t28 = (((x113|x114)<x115)+x116);

	if (t28 != 35) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MIN;
	int16_t x119 = INT16_MIN;
	int64_t x120 = -1LL;
	int64_t t29 = 6556353296LL;

	t29 = (((x117|x118)<x119)+x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = -1LL;
	uint64_t x122 = UINT64_MAX;
	volatile uint16_t x123 = 99U;
	uint16_t x124 = 1U;

	t30 = (((x121|x122)<x123)+x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MAX;
	uint32_t x128 = UINT32_MAX;
	uint32_t t31 = 455U;

	t31 = (((x125|x126)<x127)+x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 27LLU;
	static uint64_t x131 = 3LLU;
	static uint64_t x132 = 12151841908LLU;
	uint64_t t32 = 1531596183084996LLU;

	t32 = (((x129|x130)<x131)+x132);

	if (t32 != 12151841908LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x133 = INT16_MAX;
	volatile int32_t x134 = -1959548;
	int32_t x135 = INT32_MIN;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 1;

	t33 = (((x133|x134)<x135)+x136);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 2664133LL;
	int32_t x140 = 22586966;
	int32_t t34 = 16012;

	t34 = (((x137|x138)<x139)+x140);

	if (t34 != 22586966) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int32_t x142 = -90;
	static uint16_t x143 = UINT16_MAX;
	uint8_t x144 = 19U;

	t35 = (((x141|x142)<x143)+x144);

	if (t35 != 20) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = -1LL;
	static uint64_t x147 = 6785393710LLU;
	static int32_t x148 = INT32_MAX;
	int32_t t36 = INT32_MAX;

	t36 = (((x145|x146)<x147)+x148);

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 79U;
	int64_t x150 = INT64_MIN;
	uint64_t x152 = 53643972097989LLU;
	uint64_t t37 = 931493821300LLU;

	t37 = (((x149|x150)<x151)+x152);

	if (t37 != 53643972097989LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	static volatile int32_t x154 = INT32_MAX;
	volatile int8_t x155 = INT8_MAX;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 48;

	t38 = (((x153|x154)<x155)+x156);

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = -24;
	int32_t x160 = -535815899;

	t39 = (((x157|x158)<x159)+x160);

	if (t39 != -535815898) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static volatile uint8_t x162 = UINT8_MAX;
	static int8_t x164 = INT8_MAX;
	int32_t t40 = -957330;

	t40 = (((x161|x162)<x163)+x164);

	if (t40 != 128) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -2LL;
	static int8_t x167 = INT8_MIN;
	static volatile int32_t t41 = -3235242;

	t41 = (((x165|x166)<x167)+x168);

	if (t41 != 26) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	static int8_t x171 = -1;
	int16_t x172 = 1;

	t42 = (((x169|x170)<x171)+x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 1616134936U;
	int8_t x174 = -31;
	int32_t x175 = INT32_MAX;
	int64_t x176 = INT64_MIN;
	volatile int64_t t43 = INT64_MIN;

	t43 = (((x173|x174)<x175)+x176);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x178 = -1;
	volatile int64_t x179 = INT64_MIN;
	volatile uint32_t x180 = 372U;

	t44 = (((x177|x178)<x179)+x180);

	if (t44 != 372U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	uint32_t x182 = 223000786U;
	int32_t x183 = -1;
	int16_t x184 = 15218;
	int32_t t45 = 10;

	t45 = (((x181|x182)<x183)+x184);

	if (t45 != 15219) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = UINT16_MAX;
	uint8_t x187 = 60U;
	static uint32_t x188 = 93301U;
	static volatile uint32_t t46 = 145532U;

	t46 = (((x185|x186)<x187)+x188);

	if (t46 != 93302U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 81472047810LLU;
	volatile uint32_t x190 = 15996864U;
	static uint16_t x191 = 7U;
	static int64_t t47 = INT64_MIN;

	t47 = (((x189|x190)<x191)+x192);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MIN;
	int64_t x195 = INT64_MAX;
	int16_t x196 = -904;

	t48 = (((x193|x194)<x195)+x196);

	if (t48 != -903) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 1U;
	int16_t x198 = INT16_MAX;

	t49 = (((x197|x198)<x199)+x200);

	if (t49 != 192605610448757LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = 6;
	uint8_t x207 = 20U;
	uint32_t x208 = UINT32_MAX;
	uint32_t t50 = 428294166U;

	t50 = (((x205|x206)<x207)+x208);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = UINT16_MAX;
	static int32_t x210 = INT32_MAX;
	int8_t x211 = -6;
	uint64_t x212 = 25990062578287LLU;
	static volatile uint64_t t51 = 3952752LLU;

	t51 = (((x209|x210)<x211)+x212);

	if (t51 != 25990062578287LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = UINT16_MAX;
	static uint16_t x214 = 877U;
	uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MIN;

	t52 = (((x213|x214)<x215)+x216);

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = UINT32_MAX;
	int8_t x218 = 30;
	volatile uint16_t x219 = 2375U;
	static int64_t x220 = 29471129377588454LL;

	t53 = (((x217|x218)<x219)+x220);

	if (t53 != 29471129377588454LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 5515204251LLU;
	uint16_t x222 = 32U;
	uint32_t x223 = 3790573U;
	volatile int64_t x224 = INT64_MIN;

	t54 = (((x221|x222)<x223)+x224);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MAX;
	uint32_t x227 = 189570249U;
	int64_t x228 = 2093319647626149LL;

	t55 = (((x225|x226)<x227)+x228);

	if (t55 != 2093319647626150LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = 175723U;
	volatile int8_t x230 = INT8_MAX;
	static int64_t x231 = 406150595594LL;
	volatile int8_t x232 = -4;

	t56 = (((x229|x230)<x231)+x232);

	if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x233 = UINT16_MAX;
	int16_t x234 = -1;
	int16_t x235 = -1;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t57 = 30;

	t57 = (((x233|x234)<x235)+x236);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MIN;
	int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MIN;
	int32_t t58 = 252506273;

	t58 = (((x237|x238)<x239)+x240);

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MIN;
	volatile int64_t x243 = INT64_MIN;
	uint16_t x244 = 1U;
	int32_t t59 = 7;

	t59 = (((x241|x242)<x243)+x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 28U;
	int8_t x247 = INT8_MAX;
	static int32_t x248 = 813;
	static volatile int32_t t60 = -332384;

	t60 = (((x245|x246)<x247)+x248);

	if (t60 != 813) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x249 = -92;
	uint16_t x250 = 68U;
	static uint8_t x251 = 3U;
	int16_t x252 = -57;
	int32_t t61 = 1;

	t61 = (((x249|x250)<x251)+x252);

	if (t61 != -56) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x253 = -1;
	volatile uint32_t x255 = UINT32_MAX;
	uint8_t x256 = 5U;
	int32_t t62 = -1242;

	t62 = (((x253|x254)<x255)+x256);

	if (t62 != 5) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = 43010145484683856LL;
	int32_t x258 = INT32_MIN;
	static int16_t x259 = INT16_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t63 = 11752;

	t63 = (((x257|x258)<x259)+x260);

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x261 = 178618258;
	int64_t x262 = INT64_MIN;
	int16_t x263 = INT16_MAX;
	int16_t x264 = INT16_MAX;
	volatile int32_t t64 = 10719;

	t64 = (((x261|x262)<x263)+x264);

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 167U;
	int64_t x266 = -1LL;
	int16_t x267 = -35;
	int16_t x268 = INT16_MIN;
	int32_t t65 = 6630471;

	t65 = (((x265|x266)<x267)+x268);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MAX;
	int64_t x270 = -1LL;
	int64_t x271 = 273664LL;
	volatile int16_t x272 = 2;
	int32_t t66 = -4356;

	t66 = (((x269|x270)<x271)+x272);

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	volatile int8_t x274 = INT8_MIN;
	int8_t x275 = -1;
	int32_t x276 = INT32_MAX;

	t67 = (((x273|x274)<x275)+x276);

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	int64_t x278 = -1LL;
	int8_t x280 = -1;
	static volatile int32_t t68 = -13276;

	t68 = (((x277|x278)<x279)+x280);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x282 = UINT64_MAX;
	uint16_t x283 = 15U;
	volatile int64_t x284 = INT64_MIN;
	static volatile int64_t t69 = INT64_MIN;

	t69 = (((x281|x282)<x283)+x284);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x286 = INT16_MIN;
	volatile int8_t x287 = INT8_MIN;
	static int8_t x288 = 3;
	volatile int32_t t70 = 32200459;

	t70 = (((x285|x286)<x287)+x288);

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x289 = -90;
	int64_t x290 = INT64_MIN;
	uint16_t x291 = UINT16_MAX;
	static int16_t x292 = -1059;
	int32_t t71 = 185623176;

	t71 = (((x289|x290)<x291)+x292);

	if (t71 != -1058) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x294 = -1LL;
	int8_t x295 = -1;
	uint64_t x296 = UINT64_MAX;
	uint64_t t72 = UINT64_MAX;

	t72 = (((x293|x294)<x295)+x296);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x297 = 3226771LLU;
	volatile uint64_t x298 = UINT64_MAX;
	uint64_t x299 = UINT64_MAX;
	static volatile int64_t x300 = -78969814LL;
	volatile int64_t t73 = -60LL;

	t73 = (((x297|x298)<x299)+x300);

	if (t73 != -78969814LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x301 = INT16_MIN;
	volatile int16_t x302 = -1;
	volatile int16_t x303 = -1;
	uint64_t x304 = 1646LLU;

	t74 = (((x301|x302)<x303)+x304);

	if (t74 != 1646LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x305 = INT16_MIN;
	int8_t x306 = -1;
	int8_t x307 = -1;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (((x305|x306)<x307)+x308);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x310 = 44;
	int16_t x311 = INT16_MIN;
	static int32_t x312 = INT32_MAX;
	volatile int32_t t76 = INT32_MAX;

	t76 = (((x309|x310)<x311)+x312);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x314 = INT64_MIN;
	int16_t x315 = -1;
	volatile int32_t x316 = -1;
	int32_t t77 = 23267;

	t77 = (((x313|x314)<x315)+x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	int8_t x319 = -13;
	uint16_t x320 = 37U;
	int32_t t78 = 422773;

	t78 = (((x317|x318)<x319)+x320);

	if (t78 != 38) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x321 = 14U;
	int32_t x322 = -980024230;
	static int8_t x323 = INT8_MAX;

	t79 = (((x321|x322)<x323)+x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x326 = 11;
	static int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MAX;
	static int32_t t80 = INT32_MAX;

	t80 = (((x325|x326)<x327)+x328);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x331 = UINT32_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t81 = -786;

	t81 = (((x329|x330)<x331)+x332);

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x333 = 335U;
	volatile int8_t x334 = 28;
	int64_t x335 = INT64_MIN;
	int8_t x336 = 36;
	volatile int32_t t82 = -86;

	t82 = (((x333|x334)<x335)+x336);

	if (t82 != 36) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x341 = 1U;
	uint16_t x342 = 24U;
	uint64_t x343 = UINT64_MAX;
	static volatile int32_t t83 = 22;

	t83 = (((x341|x342)<x343)+x344);

	if (t83 != 50) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x347 = -430642LL;
	uint8_t x348 = 8U;
	int32_t t84 = -120956495;

	t84 = (((x345|x346)<x347)+x348);

	if (t84 != 8) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	static int8_t x352 = INT8_MIN;
	int32_t t85 = -1938954;

	t85 = (((x349|x350)<x351)+x352);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x353 = INT32_MIN;
	uint16_t x354 = 12U;
	int64_t x355 = INT64_MAX;
	int8_t x356 = -1;

	t86 = (((x353|x354)<x355)+x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x357 = INT8_MAX;
	static uint8_t x358 = 0U;
	volatile int32_t x359 = 1997615;
	volatile uint64_t x360 = 3723719660868667LLU;
	volatile uint64_t t87 = 444325282753453085LLU;

	t87 = (((x357|x358)<x359)+x360);

	if (t87 != 3723719660868668LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x363 = -7;
	uint8_t x364 = 81U;
	int32_t t88 = -1249011;

	t88 = (((x361|x362)<x363)+x364);

	if (t88 != 82) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x365 = INT32_MIN;
	volatile int16_t x366 = -1;
	int64_t x368 = INT64_MAX;
	volatile int64_t t89 = INT64_MAX;

	t89 = (((x365|x366)<x367)+x368);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MIN;
	int8_t x371 = -1;
	int16_t x372 = INT16_MAX;
	volatile int32_t t90 = 4;

	t90 = (((x369|x370)<x371)+x372);

	if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = 0;
	int16_t x375 = 1290;
	static volatile uint64_t x376 = 138569375587804586LLU;

	t91 = (((x373|x374)<x375)+x376);

	if (t91 != 138569375587804586LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x377 = UINT8_MAX;
	int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MIN;
	static int16_t x380 = -1;
	volatile int32_t t92 = 3710551;

	t92 = (((x377|x378)<x379)+x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x385 = 6402LLU;
	int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MIN;
	volatile int16_t x388 = -1;
	static volatile int32_t t93 = 27;

	t93 = (((x385|x386)<x387)+x388);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x389 = 250158132316LLU;
	uint32_t x390 = 56U;
	static int8_t x392 = 16;
	static int32_t t94 = -325945196;

	t94 = (((x389|x390)<x391)+x392);

	if (t94 != 17) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x393 = 74U;
	volatile uint8_t x394 = 106U;
	uint32_t x395 = 93271U;
	static uint64_t x396 = UINT64_MAX;
	uint64_t t95 = 51021240LLU;

	t95 = (((x393|x394)<x395)+x396);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x397 = 15074270015269LLU;
	volatile uint8_t x398 = 1U;
	static uint8_t x399 = UINT8_MAX;
	volatile int64_t x400 = INT64_MAX;
	static int64_t t96 = INT64_MAX;

	t96 = (((x397|x398)<x399)+x400);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x401 = 3419998767LL;
	uint64_t x402 = 207890205LLU;
	static int8_t x403 = 0;
	int32_t x404 = INT32_MAX;
	static volatile int32_t t97 = INT32_MAX;

	t97 = (((x401|x402)<x403)+x404);

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = -1;
	static int64_t x406 = -1LL;
	int64_t x407 = INT64_MIN;
	static uint32_t x408 = UINT32_MAX;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (((x405|x406)<x407)+x408);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MIN;
	static volatile int16_t x412 = 211;

	t99 = (((x409|x410)<x411)+x412);

	if (t99 != 211) { NG(); } else { ; }
	
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

