#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x13 = INT16_MIN;
volatile int16_t x16 = INT16_MIN;
static uint32_t x25 = UINT32_MAX;
static int64_t x37 = -1LL;
static int32_t x42 = INT32_MAX;
volatile int16_t x45 = INT16_MIN;
int64_t x48 = -1LL;
int64_t t11 = -1825658261989414LL;
uint32_t x51 = 2548U;
uint16_t x52 = 33U;
int32_t t16 = 8003;
int64_t x78 = -1LL;
int16_t x88 = 25;
int8_t x91 = -1;
static int64_t x92 = -1LL;
int16_t x94 = INT16_MIN;
static int8_t x98 = -26;
int32_t x102 = 236;
static int64_t x107 = INT64_MAX;
static int16_t x109 = INT16_MIN;
uint64_t x111 = UINT64_MAX;
uint8_t x115 = 20U;
static int16_t x116 = -6679;
volatile int32_t x126 = -1;
int8_t x139 = -49;
volatile int32_t x142 = INT32_MIN;
uint8_t x144 = UINT8_MAX;
int8_t x145 = INT8_MIN;
static int32_t x159 = 84;
volatile int64_t x162 = INT64_MAX;
static int64_t x168 = 364540054428248657LL;
static uint64_t x169 = 29LLU;
uint16_t x171 = 9052U;
int64_t x185 = INT64_MIN;
int8_t x188 = 0;
int32_t x199 = -7144144;
static volatile int32_t t50 = 94588;
static uint64_t x207 = UINT64_MAX;
uint64_t x214 = UINT64_MAX;
volatile int64_t x216 = INT64_MAX;
int64_t x218 = INT64_MIN;
static uint32_t x222 = 1777U;
static int32_t x226 = INT32_MIN;
uint8_t x227 = 1U;
static int64_t t57 = -44182604743376LL;
static volatile int64_t x245 = 33756467251LL;
uint8_t x246 = UINT8_MAX;
uint32_t t61 = 746U;
int16_t x250 = INT16_MAX;
uint32_t t62 = 6U;
static int32_t x254 = 18509;
static volatile int16_t x256 = 85;
int64_t x257 = -2876LL;
int8_t x265 = -1;
volatile int32_t x268 = INT32_MIN;
static int32_t x269 = -1;
int16_t x275 = INT16_MAX;
int64_t t68 = -3649471LL;
int16_t x283 = INT16_MAX;
int32_t x285 = -1;
int64_t x291 = -3882031264LL;
static int8_t x292 = -1;
int64_t t72 = -775LL;
static volatile int64_t t75 = -7689LL;
static uint8_t x307 = UINT8_MAX;
volatile int16_t x311 = INT16_MAX;
volatile uint64_t t77 = 10774136LLU;
volatile uint64_t x314 = 607910686588LLU;
uint32_t x316 = 555U;
static uint64_t x329 = 14482271928LLU;
volatile int16_t x334 = INT16_MAX;
int32_t x336 = 8;
static uint16_t x345 = 5902U;
static volatile uint64_t x368 = 190511808658211188LLU;
static int32_t x370 = INT32_MIN;
int16_t x371 = -1;
int8_t x372 = INT8_MIN;
int32_t x378 = INT32_MIN;
int32_t x379 = INT32_MIN;
static uint64_t x382 = 13135549LLU;
uint64_t x386 = 1041209871LLU;
int64_t x396 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MIN;
	uint32_t x3 = UINT32_MAX;
	volatile int32_t x4 = -1;
	volatile uint32_t t0 = 429527437U;

	t0 = (((x1==x2)%x3)&x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -3393967LL;
	int16_t x6 = -1;
	int8_t x7 = INT8_MIN;
	static volatile uint16_t x8 = UINT16_MAX;
	static int32_t t1 = -28322;

	t1 = (((x5==x6)%x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 20;
	uint32_t x10 = UINT32_MAX;
	uint64_t x11 = 1LLU;
	int16_t x12 = 73;
	volatile uint64_t t2 = 255270213163066LLU;

	t2 = (((x9==x10)%x11)&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = -17;
	int16_t x15 = INT16_MIN;
	int32_t t3 = 1614;

	t3 = (((x13==x14)%x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	uint32_t x18 = 194266894U;
	int16_t x19 = INT16_MAX;
	volatile int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 28791006;

	t4 = (((x17==x18)%x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	uint8_t x22 = UINT8_MAX;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MIN;
	uint32_t t5 = 7U;

	t5 = (((x21==x22)%x23)&x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MAX;
	static volatile int32_t x27 = INT32_MAX;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 197336535838386LLU;

	t6 = (((x25==x26)%x27)&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	static volatile int8_t x30 = -1;
	uint32_t x31 = 11U;
	int8_t x32 = INT8_MIN;
	volatile uint32_t t7 = 7840690U;

	t7 = (((x29==x30)%x31)&x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MAX;
	int32_t x34 = INT32_MIN;
	volatile int64_t x35 = INT64_MIN;
	static int16_t x36 = -1;
	static volatile int64_t t8 = -36069LL;

	t8 = (((x33==x34)%x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	static volatile uint16_t x39 = 7412U;
	int8_t x40 = -1;
	volatile int32_t t9 = 3710;

	t9 = (((x37==x38)%x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	static uint32_t x44 = 48U;
	int64_t t10 = -4015044974LL;

	t10 = (((x41==x42)%x43)&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MIN;

	t11 = (((x45==x46)%x47)&x48);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = 1055704629315LL;
	static uint32_t x50 = UINT32_MAX;
	uint32_t t12 = 13139501U;

	t12 = (((x49==x50)%x51)&x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 3U;
	static int64_t x54 = INT64_MIN;
	volatile uint32_t x55 = 100U;
	uint16_t x56 = 4462U;
	uint32_t t13 = 5081U;

	t13 = (((x53==x54)%x55)&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int16_t x58 = INT16_MAX;
	int32_t x59 = -143140028;
	volatile int32_t x60 = INT32_MAX;
	int32_t t14 = -392940;

	t14 = (((x57==x58)%x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x61 = UINT32_MAX;
	volatile int32_t x62 = INT32_MIN;
	volatile uint32_t x63 = 22U;
	static uint32_t x64 = 59438621U;
	uint32_t t15 = 46U;

	t15 = (((x61==x62)%x63)&x64);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 315U;
	int8_t x66 = INT8_MAX;
	uint16_t x67 = UINT16_MAX;
	static int8_t x68 = -7;

	t16 = (((x65==x66)%x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -5;
	uint16_t x70 = UINT16_MAX;
	int32_t x71 = INT32_MIN;
	static int64_t x72 = INT64_MAX;
	volatile int64_t t17 = 1936LL;

	t17 = (((x69==x70)%x71)&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MAX;
	uint64_t x74 = UINT64_MAX;
	int32_t x75 = INT32_MIN;
	int16_t x76 = -1;
	int32_t t18 = -39265;

	t18 = (((x73==x74)%x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 5688U;
	static int16_t x79 = INT16_MIN;
	uint64_t x80 = 384413611837LLU;
	static uint64_t t19 = 103858563688924130LLU;

	t19 = (((x77==x78)%x79)&x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 34U;
	volatile int32_t x82 = 86121021;
	static int16_t x83 = 7349;
	int8_t x84 = 61;
	volatile int32_t t20 = -263416020;

	t20 = (((x81==x82)%x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 1853542U;
	uint8_t x86 = 4U;
	static int64_t x87 = INT64_MIN;
	static int64_t t21 = 670LL;

	t21 = (((x85==x86)%x87)&x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = -567;
	static int64_t t22 = 96LL;

	t22 = (((x89==x90)%x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	static int32_t x95 = -1;
	int32_t x96 = INT32_MAX;
	static volatile int32_t t23 = 3041;

	t23 = (((x93==x94)%x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	volatile int32_t x99 = INT32_MIN;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = -30;

	t24 = (((x97==x98)%x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int64_t x103 = -1LL;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = 213561LL;

	t25 = (((x101==x102)%x103)&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 369U;
	int8_t x106 = -1;
	int8_t x108 = INT8_MIN;
	int64_t t26 = -1654488357857639854LL;

	t26 = (((x105==x106)%x107)&x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x110 = 1378958284U;
	int32_t x112 = INT32_MIN;
	uint64_t t27 = 1645LLU;

	t27 = (((x109==x110)%x111)&x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 13847;
	static int8_t x114 = 9;
	int32_t t28 = -788718054;

	t28 = (((x113==x114)%x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MIN;
	static uint16_t x118 = 1U;
	int64_t x119 = -1LL;
	volatile uint32_t x120 = UINT32_MAX;
	int64_t t29 = -6210018273LL;

	t29 = (((x117==x118)%x119)&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 8U;
	int32_t x122 = -11904973;
	int8_t x123 = INT8_MAX;
	volatile int8_t x124 = INT8_MAX;
	int32_t t30 = 25852496;

	t30 = (((x121==x122)%x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 7U;
	volatile uint64_t x127 = 3983LLU;
	static int8_t x128 = INT8_MIN;
	uint64_t t31 = 13LLU;

	t31 = (((x125==x126)%x127)&x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -250842;
	int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MIN;
	volatile uint32_t x132 = 73201046U;
	static uint32_t t32 = 1U;

	t32 = (((x129==x130)%x131)&x132);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	volatile int8_t x134 = 1;
	int32_t x135 = -1;
	int16_t x136 = 50;
	int32_t t33 = -189;

	t33 = (((x133==x134)%x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	volatile uint32_t x138 = UINT32_MAX;
	volatile int8_t x140 = -8;
	volatile int32_t t34 = -222;

	t34 = (((x137==x138)%x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	int8_t x143 = -1;
	volatile int32_t t35 = -177993;

	t35 = (((x141==x142)%x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = -216569;
	static volatile int32_t x147 = 6548;
	int64_t x148 = -1235772449191253LL;
	int64_t t36 = 1625593LL;

	t36 = (((x145==x146)%x147)&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = 34;
	static int64_t x150 = -1LL;
	int32_t x151 = INT32_MAX;
	int8_t x152 = 13;
	volatile int32_t t37 = -217;

	t37 = (((x149==x150)%x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int64_t x154 = -12LL;
	static int16_t x155 = 10;
	int16_t x156 = 748;
	int32_t t38 = 1;

	t38 = (((x153==x154)%x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	static uint8_t x158 = 1U;
	uint8_t x160 = 2U;
	volatile int32_t t39 = -2427221;

	t39 = (((x157==x158)%x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = 1U;
	volatile int32_t x163 = INT32_MIN;
	uint16_t x164 = 6713U;
	int32_t t40 = -244549;

	t40 = (((x161==x162)%x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = 342430LL;
	volatile int64_t t41 = 37LL;

	t41 = (((x165==x166)%x167)&x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x170 = 3U;
	volatile uint64_t x172 = UINT64_MAX;
	volatile uint64_t t42 = 46598566493612213LLU;

	t42 = (((x169==x170)%x171)&x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -61599760LL;
	int64_t x174 = INT64_MIN;
	uint8_t x175 = 38U;
	int16_t x176 = INT16_MAX;
	int32_t t43 = -1057;

	t43 = (((x173==x174)%x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MAX;
	static volatile int16_t x179 = 71;
	volatile uint32_t x180 = 211956U;
	static uint32_t t44 = 10083664U;

	t44 = (((x177==x178)%x179)&x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -12975;
	int16_t x182 = INT16_MIN;
	int16_t x183 = -1;
	uint16_t x184 = 0U;
	static volatile int32_t t45 = 19347516;

	t45 = (((x181==x182)%x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x186 = UINT8_MAX;
	uint32_t x187 = UINT32_MAX;
	static uint32_t t46 = 745902U;

	t46 = (((x185==x186)%x187)&x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = -1LL;
	int8_t x190 = INT8_MAX;
	int64_t x191 = INT64_MAX;
	uint32_t x192 = 133U;
	static int64_t t47 = -18344817990195LL;

	t47 = (((x189==x190)%x191)&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	uint16_t x194 = UINT16_MAX;
	uint8_t x195 = UINT8_MAX;
	volatile int64_t x196 = -1LL;
	volatile int64_t t48 = -56282587759LL;

	t48 = (((x193==x194)%x195)&x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	volatile uint64_t x198 = UINT64_MAX;
	int64_t x200 = 323305810LL;
	volatile int64_t t49 = -3106LL;

	t49 = (((x197==x198)%x199)&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	volatile int8_t x202 = -15;
	int16_t x203 = INT16_MIN;
	int16_t x204 = 8995;

	t50 = (((x201==x202)%x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int16_t x206 = 34;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t51 = 4228LLU;

	t51 = (((x205==x206)%x207)&x208);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 16U;
	int8_t x210 = INT8_MIN;
	uint8_t x211 = 35U;
	int8_t x212 = 1;
	volatile int32_t t52 = -376486;

	t52 = (((x209==x210)%x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MAX;
	volatile int8_t x215 = -12;
	static volatile int64_t t53 = 43821925089LL;

	t53 = (((x213==x214)%x215)&x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	volatile uint32_t x219 = 26U;
	int64_t x220 = -5099LL;
	volatile int64_t t54 = -9317580LL;

	t54 = (((x217==x218)%x219)&x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 3U;
	static int32_t x223 = INT32_MAX;
	int32_t x224 = INT32_MAX;
	static int32_t t55 = 3;

	t55 = (((x221==x222)%x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MIN;
	int16_t x228 = -17;
	volatile int32_t t56 = -206;

	t56 = (((x225==x226)%x227)&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	volatile uint32_t x230 = UINT32_MAX;
	volatile uint8_t x231 = UINT8_MAX;
	int64_t x232 = INT64_MIN;

	t57 = (((x229==x230)%x231)&x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	int64_t x234 = INT64_MAX;
	volatile int32_t x235 = INT32_MAX;
	int32_t x236 = INT32_MIN;
	volatile int32_t t58 = -1;

	t58 = (((x233==x234)%x235)&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -31;
	static volatile int64_t x238 = 68992373003174677LL;
	int8_t x239 = -1;
	static volatile uint8_t x240 = 2U;
	int32_t t59 = 479;

	t59 = (((x237==x238)%x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	volatile uint8_t x242 = 0U;
	int32_t x243 = INT32_MIN;
	int64_t x244 = INT64_MIN;
	int64_t t60 = 99479682LL;

	t60 = (((x241==x242)%x243)&x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = -1;

	t61 = (((x245==x246)%x247)&x248);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 1043;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = 122U;

	t62 = (((x249==x250)%x251)&x252);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	volatile int32_t t63 = -927;

	t63 = (((x253==x254)%x255)&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x258 = 0;
	int16_t x259 = INT16_MAX;
	uint16_t x260 = 7U;
	int32_t t64 = 25740698;

	t64 = (((x257==x258)%x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = INT64_MAX;
	volatile int16_t x262 = INT16_MIN;
	uint16_t x263 = UINT16_MAX;
	static uint16_t x264 = 208U;
	static int32_t t65 = -2;

	t65 = (((x261==x262)%x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x266 = -933;
	int8_t x267 = 3;
	int32_t t66 = -33497943;

	t66 = (((x265==x266)%x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x270 = 930LLU;
	volatile int32_t x271 = INT32_MIN;
	uint16_t x272 = 17816U;
	static int32_t t67 = 56970796;

	t67 = (((x269==x270)%x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MIN;
	uint16_t x274 = UINT16_MAX;
	int64_t x276 = -1LL;

	t68 = (((x273==x274)%x275)&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 20327663190913726LLU;
	uint64_t x278 = 65950650571481929LLU;
	volatile uint16_t x279 = 7150U;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = -309148742;

	t69 = (((x277==x278)%x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	volatile int16_t x282 = 0;
	int64_t x284 = INT64_MAX;
	static volatile int64_t t70 = -24130LL;

	t70 = (((x281==x282)%x283)&x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x286 = 18U;
	int8_t x287 = -7;
	int32_t x288 = 141;
	static volatile int32_t t71 = 6714772;

	t71 = (((x285==x286)%x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	int64_t x290 = INT64_MIN;

	t72 = (((x289==x290)%x291)&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	volatile int64_t x294 = INT64_MIN;
	uint32_t x295 = 129806542U;
	int8_t x296 = INT8_MAX;
	static volatile uint32_t t73 = 47349325U;

	t73 = (((x293==x294)%x295)&x296);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	uint8_t x298 = UINT8_MAX;
	int16_t x299 = INT16_MAX;
	uint16_t x300 = UINT16_MAX;
	int32_t t74 = 1950898;

	t74 = (((x297==x298)%x299)&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 77U;
	int8_t x302 = INT8_MAX;
	int64_t x303 = 137458913534105989LL;
	uint8_t x304 = 1U;

	t75 = (((x301==x302)%x303)&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	static uint16_t x306 = 1U;
	volatile int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -976;

	t76 = (((x305==x306)%x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MAX;
	uint32_t x310 = 248907403U;
	uint64_t x312 = UINT64_MAX;

	t77 = (((x309==x310)%x311)&x312);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	static int16_t x315 = INT16_MAX;
	uint32_t t78 = 12U;

	t78 = (((x313==x314)%x315)&x316);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MIN;
	int32_t x318 = INT32_MIN;
	static int16_t x319 = INT16_MAX;
	int8_t x320 = -24;
	static int32_t t79 = 0;

	t79 = (((x317==x318)%x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = INT16_MAX;
	volatile int8_t x322 = INT8_MIN;
	uint32_t x323 = UINT32_MAX;
	static int32_t x324 = 4;
	volatile uint32_t t80 = 118987U;

	t80 = (((x321==x322)%x323)&x324);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	uint32_t x326 = 79U;
	int32_t x327 = -1;
	int32_t x328 = INT32_MIN;
	volatile int32_t t81 = -35127607;

	t81 = (((x325==x326)%x327)&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x330 = UINT16_MAX;
	int16_t x331 = INT16_MIN;
	static int64_t x332 = INT64_MAX;
	int64_t t82 = -627LL;

	t82 = (((x329==x330)%x331)&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int64_t x335 = INT64_MAX;
	volatile int64_t t83 = 62LL;

	t83 = (((x333==x334)%x335)&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	static int64_t x338 = INT64_MAX;
	static int32_t x339 = -1;
	volatile uint8_t x340 = 1U;
	volatile int32_t t84 = 6377;

	t84 = (((x337==x338)%x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = -1;
	uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MIN;
	uint8_t x344 = 25U;
	int32_t t85 = -4;

	t85 = (((x341==x342)%x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = 1;
	int64_t x347 = INT64_MAX;
	int64_t x348 = -1LL;
	volatile int64_t t86 = 6580426216LL;

	t86 = (((x345==x346)%x347)&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = UINT16_MAX;
	volatile int32_t x350 = INT32_MIN;
	uint32_t x351 = 17765U;
	volatile int8_t x352 = -1;
	volatile uint32_t t87 = 105583652U;

	t87 = (((x349==x350)%x351)&x352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	uint32_t x354 = 131U;
	int8_t x355 = -1;
	uint32_t x356 = 9U;
	uint32_t t88 = 1U;

	t88 = (((x353==x354)%x355)&x356);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = UINT64_MAX;
	static uint16_t x358 = UINT16_MAX;
	uint16_t x359 = 31889U;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t89 = -289737;

	t89 = (((x357==x358)%x359)&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = -71;
	uint16_t x366 = UINT16_MAX;
	int16_t x367 = 1;
	uint64_t t90 = 167506731522796LLU;

	t90 = (((x365==x366)%x367)&x368);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = -1LL;
	volatile int32_t t91 = 201329957;

	t91 = (((x369==x370)%x371)&x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = -814024589;
	volatile int32_t x374 = -1;
	uint32_t x375 = UINT32_MAX;
	int32_t x376 = -1;
	volatile uint32_t t92 = 1U;

	t92 = (((x373==x374)%x375)&x376);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = 60366545204564LLU;
	static volatile int32_t x380 = INT32_MIN;
	int32_t t93 = -1521;

	t93 = (((x377==x378)%x379)&x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = -1;
	uint32_t x383 = 11311U;
	uint64_t x384 = UINT64_MAX;
	uint64_t t94 = 203LLU;

	t94 = (((x381==x382)%x383)&x384);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x385 = INT16_MAX;
	static volatile uint16_t x387 = 912U;
	static int16_t x388 = -69;
	volatile int32_t t95 = -1;

	t95 = (((x385==x386)%x387)&x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = -1;
	static int8_t x390 = -3;
	uint8_t x391 = 2U;
	int16_t x392 = INT16_MAX;
	static int32_t t96 = -2875;

	t96 = (((x389==x390)%x391)&x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x393 = 48624735434319LLU;
	volatile uint32_t x394 = 4250U;
	int32_t x395 = 47657;
	int64_t t97 = 1434827LL;

	t97 = (((x393==x394)%x395)&x396);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = -4817;
	static int32_t x402 = 866931428;
	int32_t x403 = INT32_MIN;
	static uint8_t x404 = UINT8_MAX;
	volatile int32_t t98 = -6320;

	t98 = (((x401==x402)%x403)&x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = 3U;
	uint32_t x406 = UINT32_MAX;
	static int32_t x407 = 20;
	volatile uint8_t x408 = 12U;
	int32_t t99 = 2791;

	t99 = (((x405==x406)%x407)&x408);

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

