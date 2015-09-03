#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -5;
volatile int16_t x7 = INT16_MIN;
int16_t x16 = INT16_MIN;
static uint8_t x19 = 0U;
int16_t x24 = INT16_MIN;
static uint32_t x39 = UINT32_MAX;
int32_t x41 = 0;
static uint32_t x43 = 117U;
uint32_t x45 = 961622175U;
static int16_t x52 = -1;
uint8_t x56 = 3U;
int16_t x58 = INT16_MIN;
static int8_t x59 = -1;
int32_t x60 = -11290412;
int8_t x61 = 39;
int32_t x63 = -7898;
uint8_t x69 = 1U;
uint16_t x78 = 415U;
static volatile uint16_t x80 = 284U;
static volatile int32_t t20 = 234;
int64_t x94 = INT64_MAX;
volatile uint8_t x99 = 1U;
volatile int64_t x102 = -96143907507022422LL;
uint64_t x104 = UINT64_MAX;
volatile int32_t t26 = -16;
static int32_t x112 = INT32_MIN;
volatile int16_t x132 = INT16_MIN;
int16_t x134 = -1;
int16_t x135 = INT16_MIN;
int32_t t33 = 479971087;
int32_t t35 = 4230;
int16_t x148 = 3498;
volatile int32_t t36 = 1242;
static uint64_t x152 = 217LLU;
int16_t x153 = 400;
static uint16_t x158 = UINT16_MAX;
int64_t x168 = -1LL;
int32_t t41 = 324;
int8_t x175 = -1;
int32_t x180 = -1;
static int32_t t44 = 7928071;
int64_t x181 = -1LL;
uint16_t x184 = 26U;
volatile int32_t t45 = -45946527;
volatile int32_t t49 = 86;
volatile uint32_t x201 = 6948974U;
uint32_t x202 = 32U;
int64_t x203 = -13385053LL;
int16_t x204 = INT16_MIN;
int32_t x207 = INT32_MIN;
int32_t x208 = INT32_MAX;
volatile int32_t t51 = 1769;
int8_t x214 = INT8_MIN;
int32_t x216 = -11911;
volatile int32_t t53 = -443394397;
volatile int32_t t57 = -776;
int64_t x244 = -1LL;
volatile int32_t x245 = 81;
static int32_t t61 = 144248;
int32_t t62 = -239987419;
uint16_t x256 = UINT16_MAX;
int32_t x257 = INT32_MIN;
int8_t x258 = INT8_MIN;
int32_t t64 = -1;
int32_t x262 = -7550;
volatile int32_t t67 = 483;
int64_t x276 = 28LL;
int32_t t68 = -428124;
volatile int64_t x280 = -480814305053565LL;
int32_t t69 = 1;
static volatile uint16_t x292 = 68U;
static uint32_t x299 = UINT32_MAX;
static volatile int32_t t75 = -440;
volatile int64_t x309 = -1LL;
volatile int32_t t77 = 47;
int32_t x320 = -520;
int64_t x338 = -532217775420769915LL;
volatile int32_t t84 = 161;
volatile int32_t t85 = -14;
volatile uint16_t x351 = 156U;
int32_t t89 = -1527;
static int32_t t90 = 17790;
static uint8_t x367 = UINT8_MAX;
static volatile int64_t x370 = 392787482613744LL;
volatile int32_t x373 = INT32_MAX;
static volatile int32_t t94 = -163748;
int16_t x382 = 567;
int64_t x383 = 1421039LL;
int32_t t96 = -22469346;
static volatile int16_t x393 = 1;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	static int8_t x2 = INT8_MIN;
	static volatile uint32_t x3 = 2097408776U;
	uint32_t x4 = 4U;

	t0 = ((x1==x2)==(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -105LL;
	static int64_t x6 = INT64_MIN;
	uint16_t x8 = UINT16_MAX;
	static volatile int32_t t1 = -221;

	t1 = ((x5==x6)==(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	uint8_t x10 = 14U;
	int16_t x11 = INT16_MIN;
	uint8_t x12 = 14U;
	int32_t t2 = -3;

	t2 = ((x9==x10)==(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 3318U;
	static uint16_t x14 = 13376U;
	int32_t x15 = INT32_MIN;
	static volatile int32_t t3 = 6099399;

	t3 = ((x13==x14)==(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	static int32_t x18 = 3273178;
	static uint8_t x20 = 50U;
	volatile int32_t t4 = -17;

	t4 = ((x17==x18)==(x19%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = -19298365;
	uint8_t x23 = UINT8_MAX;
	volatile int32_t t5 = -126675;

	t5 = ((x21==x22)==(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 0;
	int32_t x26 = 6;
	int16_t x27 = INT16_MIN;
	int8_t x28 = 2;
	static int32_t t6 = -835;

	t6 = ((x25==x26)==(x27%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 2U;
	uint64_t x30 = UINT64_MAX;
	static volatile uint8_t x31 = 15U;
	uint8_t x32 = 1U;
	int32_t t7 = -8;

	t7 = ((x29==x30)==(x31%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MAX;
	uint8_t x35 = 6U;
	volatile int64_t x36 = INT64_MAX;
	static int32_t t8 = 10309946;

	t8 = ((x33==x34)==(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x37 = 15252194807LL;
	volatile int32_t x38 = -1;
	volatile int32_t x40 = INT32_MAX;
	volatile int32_t t9 = 7384;

	t9 = ((x37==x38)==(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = 1;
	static int16_t x44 = 1;
	static int32_t t10 = -1252463;

	t10 = ((x41==x42)==(x43%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = UINT32_MAX;
	int16_t x47 = 4;
	int32_t x48 = INT32_MAX;
	int32_t t11 = 3704;

	t11 = ((x45==x46)==(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MAX;
	int32_t x51 = INT32_MIN;
	int32_t t12 = -10827;

	t12 = ((x49==x50)==(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	static uint32_t x54 = 1U;
	int16_t x55 = 3;
	int32_t t13 = 3768150;

	t13 = ((x53==x54)==(x55%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -485398;
	volatile int32_t t14 = 1937511;

	t14 = ((x57==x58)==(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x62 = -1;
	static volatile int8_t x64 = INT8_MAX;
	static volatile int32_t t15 = 193863638;

	t15 = ((x61==x62)==(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MAX;
	uint32_t x67 = 203216U;
	int16_t x68 = -1;
	static volatile int32_t t16 = -20820;

	t16 = ((x65==x66)==(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	int32_t x71 = INT32_MIN;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = -10798533;

	t17 = ((x69==x70)==(x71%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int64_t x74 = -1LL;
	uint32_t x75 = 979662184U;
	int8_t x76 = INT8_MIN;
	static volatile int32_t t18 = 0;

	t18 = ((x73==x74)==(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = -135;
	int8_t x79 = INT8_MAX;
	static volatile int32_t t19 = 26127;

	t19 = ((x77==x78)==(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	volatile uint32_t x82 = UINT32_MAX;
	uint64_t x83 = 56460LLU;
	uint32_t x84 = 1647145U;

	t20 = ((x81==x82)==(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	static int16_t x87 = 151;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -60970247;

	t21 = ((x85==x86)==(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 2U;
	int32_t x90 = 361;
	int16_t x91 = INT16_MAX;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = -1;

	t22 = ((x89==x90)==(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	volatile uint16_t x95 = UINT16_MAX;
	static volatile int32_t x96 = INT32_MIN;
	volatile int32_t t23 = -45;

	t23 = ((x93==x94)==(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	int8_t x98 = -54;
	volatile int8_t x100 = INT8_MAX;
	volatile int32_t t24 = -2;

	t24 = ((x97==x98)==(x99%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	uint8_t x103 = 125U;
	int32_t t25 = -2;

	t25 = ((x101==x102)==(x103%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	static uint32_t x106 = UINT32_MAX;
	volatile int32_t x107 = -1;
	int32_t x108 = INT32_MAX;

	t26 = ((x105==x106)==(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 248LLU;
	int64_t x110 = INT64_MAX;
	int16_t x111 = INT16_MIN;
	int32_t t27 = -132248596;

	t27 = ((x109==x110)==(x111%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = 11104065LL;
	int8_t x114 = -2;
	volatile int32_t x115 = INT32_MIN;
	int64_t x116 = -44213393623LL;
	int32_t t28 = -913363;

	t28 = ((x113==x114)==(x115%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = UINT64_MAX;
	static uint8_t x118 = 31U;
	uint32_t x119 = 13U;
	int32_t x120 = INT32_MAX;
	int32_t t29 = -3309338;

	t29 = ((x117==x118)==(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	uint64_t x122 = 104216791040294217LLU;
	uint8_t x123 = UINT8_MAX;
	static volatile int8_t x124 = 2;
	int32_t t30 = -372083;

	t30 = ((x121==x122)==(x123%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 5U;
	uint32_t x126 = 5136U;
	static uint16_t x127 = 298U;
	uint8_t x128 = 3U;
	static int32_t t31 = -1;

	t31 = ((x125==x126)==(x127%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int32_t x130 = 31572;
	volatile int8_t x131 = INT8_MIN;
	int32_t t32 = -513;

	t32 = ((x129==x130)==(x131%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	static int8_t x136 = INT8_MIN;

	t33 = ((x133==x134)==(x135%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MAX;
	int32_t x138 = 4292;
	static int16_t x139 = INT16_MIN;
	static volatile int32_t x140 = INT32_MIN;
	int32_t t34 = 6;

	t34 = ((x137==x138)==(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 6191936174LLU;
	int8_t x142 = INT8_MAX;
	uint16_t x143 = UINT16_MAX;
	int32_t x144 = INT32_MIN;

	t35 = ((x141==x142)==(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MAX;
	volatile int32_t x146 = INT32_MIN;
	volatile uint64_t x147 = 137345223LLU;

	t36 = ((x145==x146)==(x147%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	static int8_t x150 = 1;
	int16_t x151 = 955;
	int32_t t37 = 103;

	t37 = ((x149==x150)==(x151%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x154 = INT32_MIN;
	int32_t x155 = -207842759;
	uint64_t x156 = 518118927894LLU;
	int32_t t38 = 0;

	t38 = ((x153==x154)==(x155%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = 4388U;
	static int32_t x159 = INT32_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -1022;

	t39 = ((x157==x158)==(x159%x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	int8_t x162 = -7;
	volatile uint32_t x163 = UINT32_MAX;
	static int16_t x164 = INT16_MIN;
	int32_t t40 = -4026;

	t40 = ((x161==x162)==(x163%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 121U;
	volatile uint32_t x166 = 5113U;
	int64_t x167 = INT64_MIN;

	t41 = ((x165==x166)==(x167%x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x169 = INT8_MAX;
	volatile int32_t x170 = 10;
	static int32_t x171 = INT32_MAX;
	int64_t x172 = -161637381151045LL;
	volatile int32_t t42 = 2;

	t42 = ((x169==x170)==(x171%x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MIN;
	volatile int8_t x176 = 1;
	static int32_t t43 = 2661750;

	t43 = ((x173==x174)==(x175%x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MIN;

	t44 = ((x177==x178)==(x179%x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x182 = -2336709428LL;
	int16_t x183 = INT16_MIN;

	t45 = ((x181==x182)==(x183%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	static volatile int32_t x186 = -410707;
	uint32_t x187 = 1094U;
	uint8_t x188 = 5U;
	volatile int32_t t46 = -2146;

	t46 = ((x185==x186)==(x187%x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = 1390981LLU;
	volatile uint8_t x190 = UINT8_MAX;
	int8_t x191 = -1;
	int64_t x192 = -1LL;
	volatile int32_t t47 = -82;

	t47 = ((x189==x190)==(x191%x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = 12;
	int64_t x194 = -225LL;
	int64_t x195 = -32075123717109LL;
	volatile int64_t x196 = -35555204221039970LL;
	int32_t t48 = 1423;

	t48 = ((x193==x194)==(x195%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	int64_t x198 = -1LL;
	static int64_t x199 = -1LL;
	int8_t x200 = INT8_MAX;

	t49 = ((x197==x198)==(x199%x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t t50 = -204;

	t50 = ((x201==x202)==(x203%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint8_t x206 = 61U;

	t51 = ((x205==x206)==(x207%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = 3549371244LLU;
	static uint16_t x210 = 12278U;
	uint64_t x211 = 762LLU;
	int64_t x212 = INT64_MIN;
	int32_t t52 = -3;

	t52 = ((x209==x210)==(x211%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 6U;
	int32_t x215 = INT32_MIN;

	t53 = ((x213==x214)==(x215%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MIN;
	volatile uint8_t x218 = UINT8_MAX;
	int16_t x219 = INT16_MIN;
	int64_t x220 = -3994795LL;
	static volatile int32_t t54 = -114074;

	t54 = ((x217==x218)==(x219%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	uint16_t x222 = 3527U;
	static int16_t x223 = 104;
	int32_t x224 = -8;
	int32_t t55 = -963983;

	t55 = ((x221==x222)==(x223%x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 978;
	int16_t x226 = -656;
	static uint16_t x227 = 2U;
	static uint64_t x228 = UINT64_MAX;
	volatile int32_t t56 = -382400;

	t56 = ((x225==x226)==(x227%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MIN;
	uint16_t x231 = UINT16_MAX;
	static int32_t x232 = INT32_MIN;

	t57 = ((x229==x230)==(x231%x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	uint8_t x234 = UINT8_MAX;
	int32_t x235 = -13264;
	volatile int64_t x236 = INT64_MIN;
	volatile int32_t t58 = 1874960;

	t58 = ((x233==x234)==(x235%x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static int32_t x238 = INT32_MAX;
	static int8_t x239 = -1;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -406705744;

	t59 = ((x237==x238)==(x239%x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -825738797LL;
	int64_t x242 = 6521267LL;
	int8_t x243 = -16;
	static int32_t t60 = -1;

	t60 = ((x241==x242)==(x243%x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = 19;
	int64_t x247 = -31396937LL;
	int32_t x248 = 603557082;

	t61 = ((x245==x246)==(x247%x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	uint8_t x250 = UINT8_MAX;
	int16_t x251 = -117;
	volatile int16_t x252 = 2;

	t62 = ((x249==x250)==(x251%x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 2655252754489592LL;
	static int8_t x254 = 49;
	uint32_t x255 = 884357U;
	volatile int32_t t63 = 313;

	t63 = ((x253==x254)==(x255%x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MAX;

	t64 = ((x257==x258)==(x259%x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = -1LL;
	static uint8_t x263 = 94U;
	static volatile uint64_t x264 = 3197189831697LLU;
	int32_t t65 = 0;

	t65 = ((x261==x262)==(x263%x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 247U;
	volatile int32_t x266 = -1;
	int16_t x267 = 190;
	volatile int16_t x268 = INT16_MAX;
	volatile int32_t t66 = -8;

	t66 = ((x265==x266)==(x267%x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int64_t x270 = INT64_MAX;
	volatile int16_t x271 = 3990;
	uint64_t x272 = 257391785LLU;

	t67 = ((x269==x270)==(x271%x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint32_t x274 = 127U;
	static int16_t x275 = INT16_MAX;

	t68 = ((x273==x274)==(x275%x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	static volatile uint8_t x278 = 0U;
	static int32_t x279 = -120305892;

	t69 = ((x277==x278)==(x279%x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = UINT8_MAX;
	volatile int8_t x282 = -1;
	int8_t x283 = 5;
	uint64_t x284 = 1LLU;
	static volatile int32_t t70 = 159;

	t70 = ((x281==x282)==(x283%x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	uint8_t x286 = 57U;
	int32_t x287 = -1081253;
	int32_t x288 = INT32_MAX;
	static volatile int32_t t71 = -51;

	t71 = ((x285==x286)==(x287%x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = 0LLU;
	volatile int64_t x290 = INT64_MIN;
	volatile int32_t x291 = INT32_MIN;
	volatile int32_t t72 = 4079;

	t72 = ((x289==x290)==(x291%x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = 0;
	int64_t x294 = INT64_MAX;
	int32_t x295 = 2;
	int64_t x296 = INT64_MAX;
	int32_t t73 = 0;

	t73 = ((x293==x294)==(x295%x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = -1;
	int32_t x298 = -1;
	volatile int64_t x300 = 3LL;
	volatile int32_t t74 = 4116032;

	t74 = ((x297==x298)==(x299%x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int8_t x302 = -1;
	volatile uint32_t x303 = 147U;
	static uint64_t x304 = 56260388LLU;

	t75 = ((x301==x302)==(x303%x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = -1;
	int64_t x307 = 15075478282LL;
	static uint16_t x308 = 165U;
	int32_t t76 = -41;

	t76 = ((x305==x306)==(x307%x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 51U;
	uint64_t x311 = 10165502LLU;
	int8_t x312 = -1;

	t77 = ((x309==x310)==(x311%x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1745;
	int16_t x314 = -1;
	int16_t x315 = INT16_MAX;
	int32_t x316 = INT32_MAX;
	int32_t t78 = 176421;

	t78 = ((x313==x314)==(x315%x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	volatile int16_t x318 = 1;
	int32_t x319 = 402275;
	int32_t t79 = -78944247;

	t79 = ((x317==x318)==(x319%x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 3340;
	uint8_t x322 = UINT8_MAX;
	static int32_t x323 = INT32_MAX;
	uint8_t x324 = 21U;
	volatile int32_t t80 = 12;

	t80 = ((x321==x322)==(x323%x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = UINT64_MAX;
	int16_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	int8_t x328 = INT8_MIN;
	int32_t t81 = 1;

	t81 = ((x325==x326)==(x327%x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = UINT32_MAX;
	int16_t x330 = INT16_MIN;
	uint64_t x331 = 9853502LLU;
	int8_t x332 = -1;
	int32_t t82 = -121156086;

	t82 = ((x329==x330)==(x331%x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -460;
	uint16_t x334 = 63U;
	uint8_t x335 = 12U;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = -747613492;

	t83 = ((x333==x334)==(x335%x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = -1;
	volatile uint64_t x339 = UINT64_MAX;
	int64_t x340 = INT64_MIN;

	t84 = ((x337==x338)==(x339%x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 0;
	int64_t x342 = -1LL;
	int16_t x343 = -1;
	uint16_t x344 = 9832U;

	t85 = ((x341==x342)==(x343%x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MIN;
	uint32_t x346 = UINT32_MAX;
	int64_t x347 = INT64_MAX;
	volatile int8_t x348 = -27;
	int32_t t86 = -3;

	t86 = ((x345==x346)==(x347%x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 4U;
	int32_t x350 = -26;
	int64_t x352 = INT64_MIN;
	int32_t t87 = 1;

	t87 = ((x349==x350)==(x351%x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MAX;
	int16_t x354 = INT16_MIN;
	int32_t x355 = -3683;
	volatile uint8_t x356 = 1U;
	volatile int32_t t88 = -349849672;

	t88 = ((x353==x354)==(x355%x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	int64_t x358 = INT64_MIN;
	int8_t x359 = -6;
	static uint8_t x360 = 74U;

	t89 = ((x357==x358)==(x359%x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	volatile uint32_t x362 = 40U;
	int64_t x363 = INT64_MIN;
	int64_t x364 = -1LL;

	t90 = ((x361==x362)==(x363%x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = 1;
	int16_t x366 = -56;
	static uint16_t x368 = 19445U;
	static volatile int32_t t91 = 2823780;

	t91 = ((x365==x366)==(x367%x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	static volatile uint8_t x371 = UINT8_MAX;
	int16_t x372 = -1;
	volatile int32_t t92 = -565676;

	t92 = ((x369==x370)==(x371%x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x374 = INT32_MAX;
	int32_t x375 = INT32_MAX;
	volatile int64_t x376 = INT64_MAX;
	static volatile int32_t t93 = -1925;

	t93 = ((x373==x374)==(x375%x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MAX;
	int16_t x379 = INT16_MAX;
	static volatile int8_t x380 = INT8_MAX;

	t94 = ((x377==x378)==(x379%x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 33;
	int64_t x384 = 4205038660LL;
	volatile int32_t t95 = -115;

	t95 = ((x381==x382)==(x383%x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int32_t x386 = -131;
	int8_t x387 = 23;
	int16_t x388 = -7229;

	t96 = ((x385==x386)==(x387%x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MAX;
	static uint32_t x390 = UINT32_MAX;
	int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t97 = 9004;

	t97 = ((x389==x390)==(x391%x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x394 = 1;
	uint8_t x395 = 5U;
	int64_t x396 = INT64_MAX;
	int32_t t98 = -52639;

	t98 = ((x393==x394)==(x395%x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int8_t x398 = -1;
	uint8_t x399 = 1U;
	int64_t x400 = -1LL;
	int32_t t99 = 0;

	t99 = ((x397==x398)==(x399%x400));

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

