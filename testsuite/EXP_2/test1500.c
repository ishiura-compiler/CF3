#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MIN;
int32_t t4 = 411749479;
uint32_t x21 = 446914U;
static int32_t x22 = INT32_MIN;
int16_t x23 = INT16_MAX;
volatile int16_t x25 = 3775;
static uint32_t x28 = 4381655U;
uint32_t t6 = 717429U;
uint16_t x42 = 808U;
int16_t x43 = INT16_MIN;
static uint16_t x51 = 6U;
int64_t t14 = 15536172258484918LL;
uint64_t x87 = 4231410756LLU;
volatile uint16_t x94 = 2146U;
volatile uint8_t x96 = UINT8_MAX;
uint16_t x104 = 67U;
uint32_t x107 = 1116966U;
volatile int32_t x108 = -1;
uint64_t x120 = 6LLU;
uint64_t t29 = 7557503636LLU;
volatile int64_t x126 = -16879783392572474LL;
volatile int32_t t30 = -11;
static uint64_t x129 = 1136553878488LLU;
int8_t x140 = -1;
volatile int32_t t33 = 1791498;
volatile uint64_t t34 = 2871066375215LLU;
volatile int16_t x145 = INT16_MIN;
int16_t x148 = -1;
int32_t x157 = INT32_MIN;
uint32_t x160 = UINT32_MAX;
static int64_t x169 = INT64_MIN;
int64_t x172 = -1LL;
static int64_t x174 = 6746669629003LL;
int32_t t43 = 3944;
static int8_t x182 = -1;
volatile int64_t t44 = 16089012398753LL;
uint64_t x188 = 9248366021786105LLU;
int64_t x190 = -678510LL;
volatile uint32_t t46 = 1U;
volatile int32_t x198 = -1;
int16_t x200 = -1;
int32_t t48 = -797;
uint16_t x205 = 5982U;
static int8_t x209 = 2;
static volatile int32_t t51 = -287831;
uint32_t x213 = 319275U;
static int16_t x217 = INT16_MAX;
static int16_t x219 = INT16_MIN;
static uint8_t x220 = UINT8_MAX;
volatile int32_t t55 = 0;
uint64_t x229 = UINT64_MAX;
uint8_t x238 = 12U;
uint16_t x245 = 166U;
int16_t x259 = INT16_MAX;
static volatile int32_t t64 = 59674700;
volatile uint32_t x266 = 6U;
int16_t x268 = 731;
int16_t x269 = INT16_MIN;
int32_t t66 = 617720194;
static volatile int32_t t68 = 1775;
uint8_t x283 = UINT8_MAX;
int16_t x288 = -1;
volatile uint32_t t71 = 170U;
int16_t x298 = -1;
volatile int16_t x300 = -1;
volatile int32_t t74 = -9423;
uint32_t x307 = 228919U;
static volatile int32_t t75 = -1867;
int16_t x311 = 370;
int16_t x314 = INT16_MAX;
int8_t x315 = INT8_MIN;
uint8_t x319 = 113U;
uint16_t x320 = 22832U;
volatile int32_t t79 = 1497351;
static uint32_t x329 = 481675U;
uint64_t x344 = UINT64_MAX;
int8_t x353 = INT8_MAX;
int32_t t87 = 949661935;
uint64_t t89 = 131167LLU;
volatile int64_t x367 = INT64_MIN;
volatile int32_t t90 = 1054401362;
int16_t x370 = -1;
volatile int32_t t91 = 0;
int16_t x373 = INT16_MIN;
int32_t x378 = INT32_MAX;
int16_t x380 = INT16_MAX;
static int64_t x381 = INT64_MIN;
uint16_t x390 = 1594U;
volatile uint32_t t95 = 3U;
uint32_t x394 = UINT32_MAX;
volatile uint32_t x395 = 0U;
static int32_t t96 = -769982307;
volatile int16_t x398 = 7943;
volatile int32_t t99 = 14974;


void f0(void) {
	int32_t x1 = 0;
	int16_t x2 = INT16_MAX;
	volatile int64_t x3 = -1LL;
	int16_t x4 = -1;
	volatile int32_t t0 = -108;

	t0 = ((x1|(x2<x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 14;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = 227573U;
	int64_t t1 = -2515096894960217LL;

	t1 = ((x5|(x6<x7))%x8);

	if (t1 != 14LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int32_t x10 = INT32_MIN;
	int16_t x11 = -1126;
	int64_t x12 = INT64_MIN;
	int64_t t2 = -1981024098226383706LL;

	t2 = ((x9|(x10<x11))%x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 9U;
	uint64_t x14 = 15876170694LLU;
	volatile uint32_t x15 = 79251066U;
	int64_t x16 = 3796488LL;
	volatile int64_t t3 = 1115086820192390LL;

	t3 = ((x13|(x14<x15))%x16);

	if (t3 != 9LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -320;
	int8_t x18 = -1;
	int16_t x19 = INT16_MIN;
	uint8_t x20 = 42U;

	t4 = ((x17|(x18<x19))%x20);

	if (t4 != -26) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x24 = -1;
	uint32_t t5 = 1947759U;

	t5 = ((x21|(x22<x23))%x24);

	if (t5 != 446915U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 395U;
	static volatile int64_t x27 = INT64_MIN;

	t6 = ((x25|(x26<x27))%x28);

	if (t6 != 3775U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MAX;
	volatile uint32_t x31 = 28990785U;
	uint64_t x32 = 634889LLU;
	volatile uint64_t t7 = 850933393183759LLU;

	t7 = ((x29|(x30<x31))%x32);

	if (t7 != 389162LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1LL;
	uint64_t x34 = UINT64_MAX;
	int64_t x35 = -1LL;
	uint16_t x36 = 70U;
	int64_t t8 = -7592532244398LL;

	t8 = ((x33|(x34<x35))%x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 3U;
	static int16_t x38 = INT16_MIN;
	int32_t x39 = -1832104;
	int32_t x40 = INT32_MAX;
	volatile int32_t t9 = 3049466;

	t9 = ((x37|(x38<x39))%x40);

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = UINT32_MAX;
	volatile uint8_t x44 = UINT8_MAX;
	uint32_t t10 = 117641331U;

	t10 = ((x41|(x42<x43))%x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint32_t x46 = 126U;
	int8_t x47 = -11;
	static int64_t x48 = 610576136LL;
	volatile int64_t t11 = -39746054495154LL;

	t11 = ((x45|(x46<x47))%x48);

	if (t11 != -315755239LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 1;
	uint32_t x50 = UINT32_MAX;
	static int16_t x52 = -2567;
	int32_t t12 = 56781219;

	t12 = ((x49|(x50<x51))%x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	volatile int16_t x54 = -306;
	int32_t x55 = INT32_MIN;
	uint8_t x56 = 1U;
	volatile int32_t t13 = 119089626;

	t13 = ((x53|(x54<x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	int8_t x58 = -1;
	uint16_t x59 = 93U;
	int64_t x60 = -219LL;

	t14 = ((x57|(x58<x59))%x60);

	if (t14 != 36LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	uint32_t x62 = 1193113U;
	int32_t x63 = INT32_MIN;
	volatile int32_t x64 = INT32_MIN;
	int32_t t15 = 19;

	t15 = ((x61|(x62<x63))%x64);

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	static int32_t x66 = INT32_MAX;
	static volatile uint64_t x67 = 0LLU;
	uint32_t x68 = UINT32_MAX;
	uint32_t t16 = 82200U;

	t16 = ((x65|(x66<x67))%x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	uint8_t x70 = 1U;
	volatile uint8_t x71 = 113U;
	int16_t x72 = 5;
	volatile int32_t t17 = -2;

	t17 = ((x69|(x70<x71))%x72);

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = 7LL;
	int32_t x74 = -1;
	static uint8_t x75 = UINT8_MAX;
	uint32_t x76 = 85511903U;
	int64_t t18 = 620265LL;

	t18 = ((x73|(x74<x75))%x76);

	if (t18 != 7LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = 49;
	uint16_t x78 = 96U;
	int16_t x79 = INT16_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -13;

	t19 = ((x77|(x78<x79))%x80);

	if (t19 != 49) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -92;
	uint32_t x82 = 792953U;
	int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 10;

	t20 = ((x81|(x82<x83))%x84);

	if (t20 != -92) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	volatile uint8_t x86 = 31U;
	int64_t x88 = -501125LL;
	volatile int64_t t21 = -3048663256LL;

	t21 = ((x85|(x86<x87))%x88);

	if (t21 != 326045LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 109U;
	uint8_t x95 = UINT8_MAX;
	int32_t t22 = -1323;

	t22 = ((x93|(x94<x95))%x96);

	if (t22 != 109) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = 162223781756159LL;
	static uint16_t x98 = 13U;
	uint8_t x99 = UINT8_MAX;
	volatile int8_t x100 = -1;
	int64_t t23 = -367259475995LL;

	t23 = ((x97|(x98<x99))%x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = -128815LL;
	int16_t x102 = 99;
	int16_t x103 = -210;
	int64_t t24 = 3769706981LL;

	t24 = ((x101|(x102<x103))%x104);

	if (t24 != -41LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	int16_t x106 = INT16_MIN;
	int32_t t25 = -1229;

	t25 = ((x105|(x106<x107))%x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = INT8_MAX;
	volatile uint32_t x112 = 1480U;
	static volatile int64_t t26 = 5LL;

	t26 = ((x109|(x110<x111))%x112);

	if (t26 != -968LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = INT16_MIN;
	uint32_t x114 = 300U;
	int64_t x115 = -65948976772LL;
	int64_t x116 = INT64_MIN;
	int64_t t27 = -674550639519142LL;

	t27 = ((x113|(x114<x115))%x116);

	if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x117 = 9408;
	int8_t x118 = INT8_MIN;
	uint8_t x119 = UINT8_MAX;
	uint64_t t28 = 98LLU;

	t28 = ((x117|(x118<x119))%x120);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 115800LLU;
	uint64_t x122 = 98LLU;
	int32_t x123 = 1;
	int32_t x124 = 135663237;

	t29 = ((x121|(x122<x123))%x124);

	if (t29 != 115800LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 2U;
	volatile int8_t x127 = 0;
	static uint16_t x128 = UINT16_MAX;

	t30 = ((x125|(x126<x127))%x128);

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = INT32_MIN;
	uint16_t x132 = 4U;
	volatile uint64_t t31 = 37772LLU;

	t31 = ((x129|(x130<x131))%x132);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -4;
	volatile uint16_t x134 = 12U;
	uint64_t x135 = 1160260LLU;
	int16_t x136 = INT16_MIN;
	volatile int32_t t32 = -3;

	t32 = ((x133|(x134<x135))%x136);

	if (t32 != -3) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -77391430;
	static uint16_t x138 = UINT16_MAX;
	int32_t x139 = INT32_MIN;

	t33 = ((x137|(x138<x139))%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	int16_t x142 = -1;
	int64_t x143 = -19LL;
	volatile uint64_t x144 = UINT64_MAX;

	t34 = ((x141|(x142<x143))%x144);

	if (t34 != 2147483647LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MIN;
	int32_t t35 = -1514;

	t35 = ((x145|(x146<x147))%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x149 = INT16_MIN;
	int64_t x150 = 35288642LL;
	int32_t x151 = INT32_MIN;
	uint64_t x152 = 200300550807136LLU;
	uint64_t t36 = 561LLU;

	t36 = ((x149|(x150<x151))%x152);

	if (t36 != 64847126328928LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MAX;
	volatile int64_t x154 = INT64_MAX;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = INT16_MIN;
	int64_t t37 = -935534LL;

	t37 = ((x153|(x154<x155))%x156);

	if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x158 = INT16_MAX;
	uint8_t x159 = 61U;
	volatile uint32_t t38 = 469U;

	t38 = ((x157|(x158<x159))%x160);

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x161 = 2U;
	int8_t x162 = INT8_MAX;
	int8_t x163 = -3;
	static volatile uint16_t x164 = UINT16_MAX;
	int32_t t39 = 680758;

	t39 = ((x161|(x162<x163))%x164);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 413U;
	volatile uint32_t x166 = UINT32_MAX;
	static volatile int16_t x167 = -2632;
	int8_t x168 = INT8_MIN;
	volatile int32_t t40 = -4702398;

	t40 = ((x165|(x166<x167))%x168);

	if (t40 != 29) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x170 = INT32_MIN;
	volatile uint64_t x171 = UINT64_MAX;
	int64_t t41 = -95LL;

	t41 = ((x169|(x170<x171))%x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = INT8_MIN;
	uint16_t x175 = 726U;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t42 = 7;

	t42 = ((x173|(x174<x175))%x176);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = INT16_MIN;
	static int16_t x178 = INT16_MAX;
	int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MIN;

	t43 = ((x177|(x178<x179))%x180);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = UINT8_MAX;
	int8_t x183 = 11;
	int64_t x184 = 1862201126367640186LL;

	t44 = ((x181|(x182<x183))%x184);

	if (t44 != 255LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = 1;
	uint8_t x186 = UINT8_MAX;
	int8_t x187 = -3;
	uint64_t t45 = 2286883904292121914LLU;

	t45 = ((x185|(x186<x187))%x188);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 64284U;
	uint8_t x191 = UINT8_MAX;
	int32_t x192 = -1;

	t46 = ((x189|(x190<x191))%x192);

	if (t46 != 64285U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	static uint32_t x194 = 338U;
	uint16_t x195 = 6928U;
	static uint16_t x196 = 37U;
	volatile int32_t t47 = -1;

	t47 = ((x193|(x194<x195))%x196);

	if (t47 != -16) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = 239;
	uint32_t x199 = 1622498304U;

	t48 = ((x197|(x198<x199))%x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = 10308249702LLU;
	int32_t x202 = INT32_MIN;
	int32_t x203 = 1;
	volatile uint16_t x204 = 1U;
	static uint64_t t49 = 132732617LLU;

	t49 = ((x201|(x202<x203))%x204);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x206 = INT64_MAX;
	volatile int16_t x207 = -1;
	int32_t x208 = INT32_MIN;
	volatile int32_t t50 = -1007621;

	t50 = ((x205|(x206<x207))%x208);

	if (t50 != 5982) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x210 = UINT32_MAX;
	static int16_t x211 = INT16_MAX;
	int16_t x212 = -1;

	t51 = ((x209|(x210<x211))%x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x214 = INT16_MIN;
	int16_t x215 = 1;
	uint16_t x216 = 431U;
	volatile uint32_t t52 = 742291844U;

	t52 = ((x213|(x214<x215))%x216);

	if (t52 != 335U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x218 = INT8_MAX;
	int32_t t53 = -375857972;

	t53 = ((x217|(x218<x219))%x220);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	static int64_t x222 = -73158673439903829LL;
	int8_t x223 = INT8_MIN;
	int32_t x224 = -1;
	static int32_t t54 = -6;

	t54 = ((x221|(x222<x223))%x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -227;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = UINT64_MAX;
	int16_t x228 = -6;

	t55 = ((x225|(x226<x227))%x228);

	if (t55 != -5) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x230 = INT64_MAX;
	int32_t x231 = INT32_MIN;
	uint8_t x232 = 1U;
	uint64_t t56 = 142766955132214208LLU;

	t56 = ((x229|(x230<x231))%x232);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 2788973572196497316LLU;
	volatile int8_t x234 = INT8_MAX;
	static uint64_t x235 = 23856895432609283LLU;
	static int16_t x236 = -4;
	uint64_t t57 = 28330823170326034LLU;

	t57 = ((x233|(x234<x235))%x236);

	if (t57 != 2788973572196497317LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -1LL;
	int16_t x239 = -1;
	int16_t x240 = INT16_MIN;
	int64_t t58 = 58137758LL;

	t58 = ((x237|(x238<x239))%x240);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	static int64_t x242 = 124LL;
	int8_t x243 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	int32_t t59 = -6226;

	t59 = ((x241|(x242<x243))%x244);

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x246 = INT32_MIN;
	static uint8_t x247 = UINT8_MAX;
	int16_t x248 = -160;
	volatile int32_t t60 = -7437;

	t60 = ((x245|(x246<x247))%x248);

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MAX;
	uint32_t x250 = UINT32_MAX;
	int64_t x251 = INT64_MIN;
	int16_t x252 = 1;
	static int32_t t61 = 17314;

	t61 = ((x249|(x250<x251))%x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x253 = INT8_MIN;
	static volatile int8_t x254 = INT8_MIN;
	volatile uint8_t x255 = 103U;
	uint16_t x256 = 2019U;
	int32_t t62 = 68;

	t62 = ((x253|(x254<x255))%x256);

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x257 = 31U;
	int16_t x258 = -1;
	int64_t x260 = INT64_MAX;
	volatile int64_t t63 = -14LL;

	t63 = ((x257|(x258<x259))%x260);

	if (t63 != 31LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x261 = 28U;
	volatile int8_t x262 = -1;
	int32_t x263 = INT32_MIN;
	uint8_t x264 = 95U;

	t64 = ((x261|(x262<x263))%x264);

	if (t64 != 28) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x265 = -25937209LL;
	volatile int16_t x267 = INT16_MIN;
	int64_t t65 = 4188704828972046LL;

	t65 = ((x265|(x266<x267))%x268);

	if (t65 != -598LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x270 = 127985;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = 59U;

	t66 = ((x269|(x270<x271))%x272);

	if (t66 != -23) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MAX;
	static int8_t x274 = INT8_MAX;
	uint16_t x275 = UINT16_MAX;
	uint16_t x276 = 3305U;
	int32_t t67 = -13522615;

	t67 = ((x273|(x274<x275))%x276);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MIN;
	volatile uint8_t x278 = UINT8_MAX;
	static int64_t x279 = INT64_MIN;
	uint16_t x280 = 3U;

	t68 = ((x277|(x278<x279))%x280);

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = UINT32_MAX;
	int32_t x282 = INT32_MAX;
	volatile uint32_t x284 = 1290U;
	static uint32_t t69 = 141U;

	t69 = ((x281|(x282<x283))%x284);

	if (t69 != 15U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x285 = 2588612586705LL;
	uint32_t x286 = 1U;
	volatile uint8_t x287 = 6U;
	volatile int64_t t70 = -227944427256LL;

	t70 = ((x285|(x286<x287))%x288);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x289 = -18;
	uint32_t x290 = 1U;
	static volatile uint32_t x291 = UINT32_MAX;
	uint32_t x292 = UINT32_MAX;

	t71 = ((x289|(x290<x291))%x292);

	if (t71 != 4294967279U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x293 = INT16_MIN;
	uint64_t x294 = UINT64_MAX;
	static int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MIN;
	volatile int32_t t72 = 2618227;

	t72 = ((x293|(x294<x295))%x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = 107706975083LL;
	uint16_t x299 = 27399U;
	int64_t t73 = 248453712795901LL;

	t73 = ((x297|(x298<x299))%x300);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x301 = -888;
	int64_t x302 = 5273782LL;
	volatile int32_t x303 = INT32_MIN;
	volatile int32_t x304 = INT32_MIN;

	t74 = ((x301|(x302<x303))%x304);

	if (t74 != -888) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x305 = UINT16_MAX;
	int64_t x306 = INT64_MIN;
	uint8_t x308 = 82U;

	t75 = ((x305|(x306<x307))%x308);

	if (t75 != 17) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x309 = UINT8_MAX;
	volatile int32_t x310 = -90584;
	int16_t x312 = -1;
	int32_t t76 = -61;

	t76 = ((x309|(x310<x311))%x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x313 = 417375555;
	uint16_t x316 = 13014U;
	int32_t t77 = -1;

	t77 = ((x313|(x314<x315))%x316);

	if (t77 != 3561) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = 100U;
	volatile int64_t x318 = INT64_MIN;
	volatile int32_t t78 = 8236918;

	t78 = ((x317|(x318<x319))%x320);

	if (t78 != 101) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -1;
	volatile uint8_t x322 = UINT8_MAX;
	int8_t x323 = -2;
	volatile int16_t x324 = INT16_MIN;

	t79 = ((x321|(x322<x323))%x324);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x325 = -1;
	int32_t x326 = -1;
	static uint64_t x327 = 8082614757294121649LLU;
	int64_t x328 = -1024800529994509193LL;
	static int64_t t80 = 25020515195LL;

	t80 = ((x325|(x326<x327))%x328);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x330 = 2390U;
	static int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MAX;
	static volatile int64_t t81 = 21261LL;

	t81 = ((x329|(x330<x331))%x332);

	if (t81 != 481675LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x333 = 24572U;
	static uint64_t x334 = 219LLU;
	uint16_t x335 = UINT16_MAX;
	static int64_t x336 = 4067LL;
	int64_t t82 = 20692LL;

	t82 = ((x333|(x334<x335))%x336);

	if (t82 != 171LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x337 = 0;
	int16_t x338 = -143;
	int32_t x339 = INT32_MIN;
	int32_t x340 = INT32_MIN;
	int32_t t83 = 0;

	t83 = ((x337|(x338<x339))%x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	uint64_t x343 = UINT64_MAX;
	static volatile uint64_t t84 = 125LLU;

	t84 = ((x341|(x342<x343))%x344);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = -3;
	int8_t x346 = 28;
	int32_t x347 = 0;
	int16_t x348 = INT16_MIN;
	volatile int32_t t85 = -3;

	t85 = ((x345|(x346<x347))%x348);

	if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x349 = INT32_MAX;
	uint16_t x350 = 145U;
	static volatile int8_t x351 = INT8_MIN;
	int64_t x352 = INT64_MIN;
	static volatile int64_t t86 = 236LL;

	t86 = ((x349|(x350<x351))%x352);

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x354 = UINT16_MAX;
	int32_t x355 = -86;
	static int16_t x356 = -13;

	t87 = ((x353|(x354<x355))%x356);

	if (t87 != 10) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = -1;
	int32_t x358 = 823;
	int64_t x359 = -683698867035141LL;
	int16_t x360 = INT16_MIN;
	int32_t t88 = -188000;

	t88 = ((x357|(x358<x359))%x360);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = -1LL;
	static int8_t x363 = 3;
	uint64_t x364 = 9960245760090184LLU;

	t89 = ((x361|(x362<x363))%x364);

	if (t89 != 368926022498081LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = -1;
	int8_t x366 = 8;
	uint8_t x368 = 8U;

	t90 = ((x365|(x366<x367))%x368);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = -1;
	int32_t x371 = INT32_MIN;
	uint16_t x372 = 2U;

	t91 = ((x369|(x370<x371))%x372);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x374 = INT16_MAX;
	uint8_t x375 = UINT8_MAX;
	volatile int16_t x376 = INT16_MIN;
	int32_t t92 = 3;

	t92 = ((x373|(x374<x375))%x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x377 = UINT16_MAX;
	int32_t x379 = 596249;
	int32_t t93 = -109687919;

	t93 = ((x377|(x378<x379))%x380);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x382 = -1;
	int16_t x383 = -1;
	int16_t x384 = INT16_MAX;
	static int64_t t94 = 55509355494232LL;

	t94 = ((x381|(x382<x383))%x384);

	if (t94 != -8LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x389 = 61U;
	uint64_t x391 = 1729065LLU;
	uint32_t x392 = 160U;

	t95 = ((x389|(x390<x391))%x392);

	if (t95 != 61U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = 0;
	static volatile int8_t x396 = INT8_MAX;

	t96 = ((x393|(x394<x395))%x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x397 = -1LL;
	volatile int16_t x399 = INT16_MAX;
	uint32_t x400 = 64042656U;
	static volatile int64_t t97 = 2031150LL;

	t97 = ((x397|(x398<x399))%x400);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = INT16_MAX;
	int16_t x402 = 133;
	int32_t x403 = INT32_MAX;
	int32_t x404 = 686608;
	volatile int32_t t98 = 171710750;

	t98 = ((x401|(x402<x403))%x404);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = -7;
	uint32_t x406 = 590822U;
	uint16_t x407 = UINT16_MAX;
	int32_t x408 = INT32_MIN;

	t99 = ((x405|(x406<x407))%x408);

	if (t99 != -7) { NG(); } else { ; }
	
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

