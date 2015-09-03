#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
volatile int16_t x7 = 11169;
volatile int32_t x8 = -1;
int32_t t3 = 84184;
static int64_t x17 = -17773681309714701LL;
uint64_t x20 = UINT64_MAX;
uint8_t x39 = UINT8_MAX;
int32_t t9 = 34526;
uint64_t x43 = 203441237543972343LLU;
int16_t x52 = -1015;
volatile uint64_t t13 = 6658LLU;
int16_t x60 = INT16_MAX;
int16_t x64 = -1;
volatile int16_t x66 = -1;
volatile uint8_t x69 = 62U;
int32_t x74 = INT32_MAX;
volatile int32_t t18 = -82803;
int64_t x78 = -9684485046763262LL;
volatile int8_t x83 = -1;
int32_t x98 = INT32_MIN;
int16_t x107 = -894;
static volatile int32_t t26 = 0;
int16_t x109 = -1;
static uint32_t x120 = UINT32_MAX;
uint32_t t29 = UINT32_MAX;
int32_t x125 = -1;
int16_t x128 = 1;
static volatile int32_t x132 = INT32_MIN;
int32_t x133 = -2562;
uint64_t t33 = 234LLU;
int32_t x152 = -1;
volatile int32_t t37 = -1;
static int32_t x153 = 8;
uint64_t x155 = 580LLU;
int32_t t39 = INT32_MAX;
volatile uint64_t t43 = 6987368174592884LLU;
uint32_t x188 = 65179U;
static int8_t x189 = INT8_MAX;
static uint32_t x190 = 7546U;
volatile int32_t x202 = INT32_MIN;
int32_t x203 = 95084596;
static uint32_t x206 = 114U;
int16_t x209 = INT16_MIN;
static int64_t x214 = 22360065685898085LL;
int64_t x216 = -1569867273801848517LL;
int64_t t53 = 82506905189LL;
static int8_t x218 = INT8_MIN;
int16_t x219 = INT16_MIN;
volatile int32_t t54 = -601108;
int32_t t55 = -743;
uint64_t x225 = 3LLU;
int64_t t58 = -110230329353709LL;
static int64_t t59 = INT64_MIN;
int8_t x243 = INT8_MIN;
int32_t x244 = -1;
volatile uint64_t t62 = UINT64_MAX;
volatile int64_t x254 = -1LL;
volatile int16_t x259 = INT16_MAX;
uint16_t x272 = 1699U;
int64_t x274 = 1546167320043LL;
int64_t x302 = INT64_MIN;
static volatile int8_t x303 = INT8_MIN;
int32_t x312 = -1;
static volatile int32_t t77 = 11376;
uint32_t x314 = UINT32_MAX;
volatile int32_t t78 = 867159;
int16_t x328 = 900;
static uint32_t x336 = UINT32_MAX;
static uint8_t x340 = 1U;
uint16_t x343 = 124U;
int64_t x349 = -31328LL;
static uint8_t x356 = 39U;
static uint32_t x365 = 3905U;
volatile int32_t t91 = 37391491;
static volatile uint64_t t93 = 99008242130LLU;
uint32_t x378 = UINT32_MAX;
int8_t x379 = INT8_MAX;
volatile int32_t t94 = -374;
int16_t x381 = INT16_MIN;
uint16_t x389 = 558U;
int8_t x391 = -2;
uint64_t x394 = 1815882LLU;
int16_t x396 = -1;
static volatile uint64_t x398 = 122031080349394390LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = -1;
	int8_t x3 = INT8_MAX;
	int32_t t0 = 452;

	t0 = (((x1==x2)*x3)|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	volatile int32_t x6 = -1;
	int32_t t1 = 92958;

	t1 = (((x5==x6)*x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 2018568U;
	volatile uint32_t x10 = UINT32_MAX;
	static int64_t x11 = INT64_MIN;
	static int16_t x12 = INT16_MAX;
	int64_t t2 = -60LL;

	t2 = (((x9==x10)*x11)|x12);

	if (t2 != 32767LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 11;
	int32_t x14 = -1;
	int8_t x15 = -1;
	uint16_t x16 = UINT16_MAX;

	t3 = (((x13==x14)*x15)|x16);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 933U;
	static int64_t x19 = INT64_MIN;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (((x17==x18)*x19)|x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -3389;
	volatile uint64_t x22 = 1045523LLU;
	static uint32_t x23 = 36899U;
	volatile int32_t x24 = INT32_MAX;
	uint32_t t5 = 0U;

	t5 = (((x21==x22)*x23)|x24);

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int16_t x26 = INT16_MAX;
	int8_t x27 = 1;
	static volatile uint8_t x28 = 1U;
	int32_t t6 = 1;

	t6 = (((x25==x26)*x27)|x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	uint8_t x30 = 0U;
	volatile int8_t x31 = 0;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t7 = INT64_MIN;

	t7 = (((x29==x30)*x31)|x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MAX;
	uint16_t x34 = 1911U;
	int8_t x35 = -1;
	int64_t x36 = 937138LL;
	volatile int64_t t8 = 1047553939612175LL;

	t8 = (((x33==x34)*x35)|x36);

	if (t8 != 937138LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 469U;
	int16_t x38 = INT16_MIN;
	uint16_t x40 = UINT16_MAX;

	t9 = (((x37==x38)*x39)|x40);

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	uint16_t x42 = UINT16_MAX;
	uint64_t x44 = 3LLU;
	volatile uint64_t t10 = 12459654104977LLU;

	t10 = (((x41==x42)*x43)|x44);

	if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MAX;
	int64_t x46 = INT64_MIN;
	uint32_t x47 = 1242752U;
	static volatile uint32_t x48 = UINT32_MAX;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (((x45==x46)*x47)|x48);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x49 = UINT8_MAX;
	int32_t x50 = INT32_MAX;
	static uint8_t x51 = 91U;
	volatile int32_t t12 = -840;

	t12 = (((x49==x50)*x51)|x52);

	if (t12 != -1015) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	volatile uint8_t x54 = 7U;
	uint64_t x55 = 13310LLU;
	int8_t x56 = INT8_MIN;

	t13 = (((x53==x54)*x55)|x56);

	if (t13 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = -1;
	int32_t x59 = INT32_MIN;
	int32_t t14 = -114;

	t14 = (((x57==x58)*x59)|x60);

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	volatile int32_t x62 = 30;
	uint64_t x63 = 59193608589069363LLU;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (((x61==x62)*x63)|x64);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -22;
	int16_t x67 = -9;
	uint64_t x68 = 957LLU;
	uint64_t t16 = 6397801LLU;

	t16 = (((x65==x66)*x67)|x68);

	if (t16 != 957LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x70 = INT32_MIN;
	int8_t x71 = INT8_MIN;
	uint32_t x72 = 4662U;
	static uint32_t t17 = 1U;

	t17 = (((x69==x70)*x71)|x72);

	if (t17 != 4662U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -35220645868238827LL;
	volatile int32_t x75 = INT32_MIN;
	volatile int8_t x76 = 0;

	t18 = (((x73==x74)*x75)|x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -2215;
	int8_t x79 = INT8_MAX;
	int32_t x80 = -1;
	int32_t t19 = -1;

	t19 = (((x77==x78)*x79)|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = 209;
	int64_t x84 = INT64_MIN;
	int64_t t20 = INT64_MIN;

	t20 = (((x81==x82)*x83)|x84);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -1LL;
	int64_t x86 = INT64_MIN;
	static volatile int16_t x87 = INT16_MIN;
	int8_t x88 = -1;
	volatile int32_t t21 = -90781;

	t21 = (((x85==x86)*x87)|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = -1;
	int32_t x90 = INT32_MAX;
	int8_t x91 = INT8_MAX;
	static volatile int8_t x92 = -4;
	volatile int32_t t22 = -8;

	t22 = (((x89==x90)*x91)|x92);

	if (t22 != -4) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	volatile int8_t x94 = INT8_MIN;
	int8_t x95 = 24;
	uint16_t x96 = 1U;
	int32_t t23 = -3;

	t23 = (((x93==x94)*x95)|x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int8_t x99 = INT8_MAX;
	int32_t x100 = -1;
	int32_t t24 = -721405388;

	t24 = (((x97==x98)*x99)|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MAX;
	int16_t x103 = INT16_MIN;
	int64_t x104 = INT64_MAX;
	static volatile int64_t t25 = INT64_MAX;

	t25 = (((x101==x102)*x103)|x104);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int16_t x106 = 15;
	int32_t x108 = -1;

	t26 = (((x105==x106)*x107)|x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x110 = INT8_MAX;
	int64_t x111 = -108469140033LL;
	volatile int32_t x112 = INT32_MAX;
	volatile int64_t t27 = 84071393618238LL;

	t27 = (((x109==x110)*x111)|x112);

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	volatile uint64_t x114 = UINT64_MAX;
	volatile int16_t x115 = INT16_MIN;
	volatile int32_t x116 = 28522;
	int32_t t28 = 1507;

	t28 = (((x113==x114)*x115)|x116);

	if (t28 != -4246) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MIN;
	int64_t x118 = 1553LL;
	static uint16_t x119 = 41U;

	t29 = (((x117==x118)*x119)|x120);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int32_t x122 = -1;
	int64_t x123 = 218821140672858LL;
	int32_t x124 = -1;
	int64_t t30 = -7458436LL;

	t30 = (((x121==x122)*x123)|x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	static int32_t x127 = INT32_MIN;
	int32_t t31 = -100;

	t31 = (((x125==x126)*x127)|x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MAX;
	int64_t x130 = INT64_MIN;
	static volatile int64_t x131 = INT64_MIN;
	volatile int64_t t32 = -199979572877447LL;

	t32 = (((x129==x130)*x131)|x132);

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x134 = UINT32_MAX;
	uint64_t x135 = 1082929923590972LLU;
	int32_t x136 = INT32_MIN;

	t33 = (((x133==x134)*x135)|x136);

	if (t33 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = -3419547;
	uint8_t x139 = 15U;
	int16_t x140 = -1;
	static volatile int32_t t34 = -22812;

	t34 = (((x137==x138)*x139)|x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 58U;
	int8_t x142 = INT8_MAX;
	volatile uint16_t x143 = 4U;
	static uint64_t x144 = 2848873694563LLU;
	uint64_t t35 = 11536438376210LLU;

	t35 = (((x141==x142)*x143)|x144);

	if (t35 != 2848873694563LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = 823U;
	int16_t x147 = INT16_MAX;
	int8_t x148 = 26;
	int32_t t36 = -73733369;

	t36 = (((x145==x146)*x147)|x148);

	if (t36 != 26) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -1;
	int16_t x150 = 0;
	static uint16_t x151 = 1U;

	t37 = (((x149==x150)*x151)|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x154 = INT64_MIN;
	uint64_t x156 = 31421892657280797LLU;
	static uint64_t t38 = 4769384698678892758LLU;

	t38 = (((x153==x154)*x155)|x156);

	if (t38 != 31421892657280797LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	static volatile int8_t x158 = INT8_MIN;
	int32_t x159 = INT32_MAX;
	int32_t x160 = INT32_MAX;

	t39 = (((x157==x158)*x159)|x160);

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 6081;
	uint64_t x162 = 1674LLU;
	volatile uint16_t x163 = 45U;
	volatile uint16_t x164 = 199U;
	static volatile int32_t t40 = -229;

	t40 = (((x161==x162)*x163)|x164);

	if (t40 != 199) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int32_t x166 = -1;
	uint32_t x167 = UINT32_MAX;
	int8_t x168 = 19;
	volatile uint32_t t41 = 10U;

	t41 = (((x165==x166)*x167)|x168);

	if (t41 != 19U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	int32_t x170 = INT32_MIN;
	static int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MAX;
	static int64_t t42 = INT64_MAX;

	t42 = (((x169==x170)*x171)|x172);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int64_t x174 = 33988727941841LL;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 41980630LLU;

	t43 = (((x173==x174)*x175)|x176);

	if (t43 != 41980630LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	static int32_t x178 = 74;
	uint64_t x179 = 217991943LLU;
	uint32_t x180 = 42U;
	volatile uint64_t t44 = 754626722LLU;

	t44 = (((x177==x178)*x179)|x180);

	if (t44 != 42LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 1U;
	int64_t x182 = -31LL;
	static volatile int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MAX;
	int32_t t45 = INT32_MAX;

	t45 = (((x181==x182)*x183)|x184);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = -1LL;
	int32_t x187 = 7;
	volatile uint32_t t46 = 136175U;

	t46 = (((x185==x186)*x187)|x188);

	if (t46 != 65179U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x191 = 17968149;
	int32_t x192 = -1;
	volatile int32_t t47 = 22168453;

	t47 = (((x189==x190)*x191)|x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 18U;
	uint16_t x194 = 20U;
	int16_t x195 = 92;
	int16_t x196 = INT16_MIN;
	int32_t t48 = -10189931;

	t48 = (((x193==x194)*x195)|x196);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	int64_t x198 = INT64_MAX;
	int32_t x199 = 0;
	int32_t x200 = -1;
	volatile int32_t t49 = -15;

	t49 = (((x197==x198)*x199)|x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = -2729042;
	static int64_t x204 = INT64_MIN;
	volatile int64_t t50 = INT64_MIN;

	t50 = (((x201==x202)*x203)|x204);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = -1LL;
	uint8_t x207 = 6U;
	int8_t x208 = 9;
	int32_t t51 = 979;

	t51 = (((x205==x206)*x207)|x208);

	if (t51 != 9) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = -234;
	int32_t x211 = INT32_MAX;
	int16_t x212 = INT16_MIN;
	int32_t t52 = -844559970;

	t52 = (((x209==x210)*x211)|x212);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 256642U;
	uint8_t x215 = 2U;

	t53 = (((x213==x214)*x215)|x216);

	if (t53 != -1569867273801848517LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 141U;
	int16_t x220 = INT16_MIN;

	t54 = (((x217==x218)*x219)|x220);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int8_t x222 = 2;
	static int8_t x223 = -1;
	static uint8_t x224 = 0U;

	t55 = (((x221==x222)*x223)|x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x226 = UINT64_MAX;
	int16_t x227 = INT16_MIN;
	uint8_t x228 = 18U;
	int32_t t56 = -26;

	t56 = (((x225==x226)*x227)|x228);

	if (t56 != 18) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	uint8_t x230 = UINT8_MAX;
	uint64_t x231 = 73737952339992LLU;
	volatile uint16_t x232 = 5362U;
	uint64_t t57 = 925129661987250880LLU;

	t57 = (((x229==x230)*x231)|x232);

	if (t57 != 5362LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = 306949LL;
	uint16_t x236 = 2U;

	t58 = (((x233==x234)*x235)|x236);

	if (t58 != 306951LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MIN;
	uint64_t x238 = 371566LLU;
	int64_t x239 = 949064131070214LL;
	int64_t x240 = INT64_MIN;

	t59 = (((x237==x238)*x239)|x240);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MIN;
	volatile int32_t t60 = 119237;

	t60 = (((x241==x242)*x243)|x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = 0;
	uint64_t x247 = 12LLU;
	int8_t x248 = INT8_MIN;
	volatile uint64_t t61 = 1708635LLU;

	t61 = (((x245==x246)*x247)|x248);

	if (t61 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MIN;
	static int16_t x250 = -66;
	uint32_t x251 = UINT32_MAX;
	uint64_t x252 = UINT64_MAX;

	t62 = (((x249==x250)*x251)|x252);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	static int64_t x255 = INT64_MAX;
	volatile uint16_t x256 = 1713U;
	int64_t t63 = 373558267LL;

	t63 = (((x253==x254)*x255)|x256);

	if (t63 != 1713LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 0U;
	int32_t x258 = INT32_MIN;
	uint32_t x260 = 0U;
	volatile uint32_t t64 = 757622U;

	t64 = (((x257==x258)*x259)|x260);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	int16_t x262 = 15963;
	int16_t x263 = 93;
	int32_t x264 = INT32_MAX;
	int32_t t65 = INT32_MAX;

	t65 = (((x261==x262)*x263)|x264);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	uint64_t x266 = 1174LLU;
	int8_t x267 = -23;
	static int16_t x268 = -1;
	volatile int32_t t66 = 2;

	t66 = (((x265==x266)*x267)|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	static uint32_t x270 = UINT32_MAX;
	int32_t x271 = INT32_MAX;
	static int32_t t67 = -2477;

	t67 = (((x269==x270)*x271)|x272);

	if (t67 != 1699) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = -1;
	int32_t x275 = INT32_MAX;
	volatile uint8_t x276 = UINT8_MAX;
	static volatile int32_t t68 = -113786;

	t68 = (((x273==x274)*x275)|x276);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 2148U;
	uint8_t x278 = 35U;
	volatile uint8_t x279 = UINT8_MAX;
	int16_t x280 = INT16_MIN;
	int32_t t69 = -6283;

	t69 = (((x277==x278)*x279)|x280);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 840760477936776LLU;
	uint8_t x282 = 98U;
	int32_t x283 = -14458;
	int32_t x284 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = (((x281==x282)*x283)|x284);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 1LL;
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MAX;
	int16_t x288 = INT16_MIN;
	volatile int64_t t71 = 1134284053747144LL;

	t71 = (((x285==x286)*x287)|x288);

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 16LL;
	uint16_t x290 = 253U;
	int8_t x291 = INT8_MIN;
	uint64_t x292 = 495759926264098LLU;
	uint64_t t72 = 2417076358LLU;

	t72 = (((x289==x290)*x291)|x292);

	if (t72 != 495759926264098LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x293 = UINT16_MAX;
	static int64_t x294 = INT64_MIN;
	uint8_t x295 = 22U;
	static uint64_t x296 = 28272088538055LLU;
	volatile uint64_t t73 = 5489569130LLU;

	t73 = (((x293==x294)*x295)|x296);

	if (t73 != 28272088538055LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 8U;
	int8_t x298 = INT8_MIN;
	int64_t x299 = -1LL;
	uint16_t x300 = 14U;
	volatile int64_t t74 = -67355576884382LL;

	t74 = (((x297==x298)*x299)|x300);

	if (t74 != 14LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 213542046;
	static uint8_t x304 = 12U;
	int32_t t75 = -3117;

	t75 = (((x301==x302)*x303)|x304);

	if (t75 != 12) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -385LL;
	int32_t x306 = INT32_MAX;
	static int32_t x307 = INT32_MAX;
	uint16_t x308 = 67U;
	int32_t t76 = -19660;

	t76 = (((x305==x306)*x307)|x308);

	if (t76 != 67) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = 87U;
	uint16_t x310 = 6U;
	int16_t x311 = -1740;

	t77 = (((x309==x310)*x311)|x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	int32_t x315 = 2182608;
	static volatile uint8_t x316 = UINT8_MAX;

	t78 = (((x313==x314)*x315)|x316);

	if (t78 != 2182655) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	int32_t x318 = 6960915;
	int16_t x319 = -1;
	int64_t x320 = INT64_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = (((x317==x318)*x319)|x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	static uint8_t x322 = UINT8_MAX;
	static uint32_t x323 = 6664444U;
	static uint64_t x324 = UINT64_MAX;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (((x321==x322)*x323)|x324);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 60495923120040323LLU;
	int16_t x326 = INT16_MIN;
	uint8_t x327 = UINT8_MAX;
	static volatile int32_t t81 = -23;

	t81 = (((x325==x326)*x327)|x328);

	if (t81 != 900) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 175395U;
	int32_t x330 = -1;
	int64_t x331 = -1LL;
	volatile int32_t x332 = INT32_MIN;
	int64_t t82 = 2414LL;

	t82 = (((x329==x330)*x331)|x332);

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	uint16_t x334 = 303U;
	int64_t x335 = -7377197514LL;
	volatile int64_t t83 = -606005LL;

	t83 = (((x333==x334)*x335)|x336);

	if (t83 != 4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 0U;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = 1438;
	volatile int32_t t84 = -7296;

	t84 = (((x337==x338)*x339)|x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	int64_t x342 = -6704149515151355LL;
	volatile uint64_t x344 = 10408532946876583LLU;
	volatile uint64_t t85 = 26091414LLU;

	t85 = (((x341==x342)*x343)|x344);

	if (t85 != 10408532946876583LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MIN;
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = 230;

	t86 = (((x345==x346)*x347)|x348);

	if (t86 != -32513) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = INT64_MAX;
	static int64_t x351 = INT64_MIN;
	volatile uint8_t x352 = UINT8_MAX;
	static volatile int64_t t87 = -37926544132862LL;

	t87 = (((x349==x350)*x351)|x352);

	if (t87 != 255LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	uint32_t x354 = 2226625U;
	static int64_t x355 = 273455908253369820LL;
	int64_t t88 = 34785LL;

	t88 = (((x353==x354)*x355)|x356);

	if (t88 != 39LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = -30805655;
	uint32_t x358 = 1823U;
	volatile int32_t x359 = -2262;
	int8_t x360 = -16;
	volatile int32_t t89 = 28382;

	t89 = (((x357==x358)*x359)|x360);

	if (t89 != -16) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	int16_t x363 = -6620;
	int32_t x364 = -1;
	static int32_t t90 = 149626;

	t90 = (((x361==x362)*x363)|x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = 1U;
	volatile int8_t x367 = 1;
	volatile uint8_t x368 = 6U;

	t91 = (((x365==x366)*x367)|x368);

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -31;
	int64_t x370 = 5149705098416LL;
	int16_t x371 = INT16_MIN;
	volatile int32_t x372 = -172706068;
	volatile int32_t t92 = 191132;

	t92 = (((x369==x370)*x371)|x372);

	if (t92 != -172706068) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	int16_t x376 = INT16_MAX;

	t93 = (((x373==x374)*x375)|x376);

	if (t93 != 32767LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = -1;
	int16_t x380 = INT16_MIN;

	t94 = (((x377==x378)*x379)|x380);

	if (t94 != -32641) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x382 = 8U;
	uint64_t x383 = 8470983809LLU;
	uint64_t x384 = 51271684LLU;
	uint64_t t95 = 10091953090531466LLU;

	t95 = (((x381==x382)*x383)|x384);

	if (t95 != 51271684LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	uint16_t x386 = 14U;
	static volatile int8_t x387 = 0;
	volatile int8_t x388 = 24;
	int32_t t96 = -253872392;

	t96 = (((x385==x386)*x387)|x388);

	if (t96 != 24) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x390 = UINT8_MAX;
	static int16_t x392 = -1;
	int32_t t97 = -394985;

	t97 = (((x389==x390)*x391)|x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	volatile int32_t t98 = -19436;

	t98 = (((x393==x394)*x395)|x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -11;
	int64_t x399 = INT64_MIN;
	uint64_t x400 = 1837298241818LLU;
	uint64_t t99 = 197890978839LLU;

	t99 = (((x397==x398)*x399)|x400);

	if (t99 != 1837298241818LLU) { NG(); } else { ; }
	
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

