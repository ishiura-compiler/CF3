#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int8_t x4 = INT8_MIN;
int32_t t0 = 4;
int64_t x13 = INT64_MIN;
int64_t x14 = INT64_MAX;
int16_t x16 = -54;
static volatile int8_t x17 = INT8_MIN;
volatile int32_t t4 = 0;
int64_t x24 = INT64_MIN;
volatile int32_t t5 = 797138;
volatile int32_t x26 = INT32_MAX;
int32_t x33 = -23974118;
int8_t x34 = 1;
volatile int8_t x36 = INT8_MIN;
volatile int32_t t8 = -89499974;
static int8_t x39 = INT8_MIN;
volatile int32_t t11 = -428021091;
uint64_t x49 = 131020LLU;
uint32_t x50 = 26U;
int32_t x70 = -44;
uint32_t x75 = 973911U;
static volatile int32_t t18 = 7909;
static int64_t x80 = INT64_MAX;
static volatile int32_t t19 = -7;
int16_t x81 = INT16_MAX;
int32_t x91 = INT32_MIN;
uint8_t x99 = 11U;
static int32_t x115 = INT32_MIN;
volatile int8_t x116 = -1;
int16_t x120 = -1;
volatile uint16_t x125 = 1785U;
uint16_t x131 = 7607U;
volatile int32_t x136 = INT32_MAX;
static int32_t x145 = INT32_MAX;
volatile int16_t x150 = 1055;
uint32_t x151 = UINT32_MAX;
int32_t x154 = INT32_MIN;
int16_t x157 = -1;
int32_t t39 = -12;
int64_t x161 = -1LL;
int32_t t40 = 20627757;
int16_t x171 = -1;
int16_t x172 = INT16_MAX;
int32_t t43 = -1;
volatile int32_t t45 = 61992;
int64_t x190 = INT64_MIN;
static uint8_t x193 = 22U;
uint16_t x195 = 2U;
volatile uint64_t x196 = 693419890794240LLU;
uint32_t x198 = UINT32_MAX;
int64_t x200 = INT64_MIN;
int64_t x201 = INT64_MAX;
static volatile int32_t t50 = 0;
int64_t x209 = -1911LL;
int32_t x213 = -1;
int32_t x223 = -1;
volatile int32_t x228 = -641240;
static int64_t x234 = INT64_MIN;
volatile int32_t t58 = 311184389;
uint32_t x238 = 110091U;
int32_t x239 = -1;
static volatile uint64_t x241 = 1528225LLU;
int8_t x244 = INT8_MIN;
uint32_t x246 = 3683U;
int64_t x250 = -1LL;
static int64_t x258 = -1LL;
uint16_t x260 = UINT16_MAX;
uint64_t x262 = 35620LLU;
int32_t x263 = INT32_MIN;
uint64_t x267 = 42054783755285768LLU;
static int8_t x269 = -1;
int32_t t67 = -4033118;
int32_t x273 = -4688303;
int64_t x275 = -1LL;
static int32_t t68 = -240760;
int64_t x280 = 62508110147LL;
static uint8_t x283 = 1U;
volatile int8_t x286 = INT8_MAX;
static volatile int32_t x288 = INT32_MIN;
int64_t x290 = 3348828494LL;
static int32_t x296 = INT32_MIN;
volatile uint16_t x299 = UINT16_MAX;
static uint64_t x308 = UINT64_MAX;
uint32_t x321 = UINT32_MAX;
volatile int8_t x324 = INT8_MAX;
volatile int32_t t80 = -1632347;
int32_t x327 = 3;
uint16_t x328 = 99U;
static volatile int32_t t81 = 7020;
uint8_t x332 = 1U;
int8_t x337 = INT8_MAX;
uint8_t x345 = 20U;
volatile int8_t x349 = INT8_MIN;
uint32_t x350 = 1615U;
int16_t x353 = INT16_MAX;
static int32_t x354 = INT32_MAX;
int16_t x365 = INT16_MIN;
uint32_t x366 = 630036024U;
static uint8_t x370 = 5U;
int64_t x371 = -996747988241828818LL;
int32_t x372 = INT32_MIN;
volatile int32_t t92 = 1;
int8_t x380 = 21;
uint8_t x387 = 121U;
volatile int32_t t97 = 6;
uint16_t x395 = 15U;
static volatile int32_t t98 = -40313;
int8_t x399 = -1;
volatile int8_t x400 = 48;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int8_t x3 = INT8_MIN;

	t0 = (x1==((x2|x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	uint16_t x6 = 508U;
	int64_t x7 = INT64_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -6;

	t1 = (x5==((x6|x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int64_t x10 = -1LL;
	uint64_t x11 = 6810548020146084LLU;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -8572146;

	t2 = (x9==((x10|x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x15 = 12U;
	int32_t t3 = 60742;

	t3 = (x13==((x14|x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 61U;
	volatile uint8_t x19 = 26U;
	static uint16_t x20 = UINT16_MAX;

	t4 = (x17==((x18|x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int32_t x22 = 451491;
	int16_t x23 = INT16_MAX;

	t5 = (x21==((x22|x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 5U;
	int8_t x27 = -1;
	uint8_t x28 = 23U;
	static volatile int32_t t6 = 297903650;

	t6 = (x25==((x26|x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -836316;
	volatile uint8_t x30 = UINT8_MAX;
	int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 8;

	t7 = (x29==((x30|x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x35 = 56825101LLU;

	t8 = (x33==((x34|x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MAX;
	int8_t x40 = 0;
	static volatile int32_t t9 = 5820190;

	t9 = (x37==((x38|x39)|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	static uint8_t x42 = 2U;
	int64_t x43 = -26656LL;
	static volatile uint16_t x44 = UINT16_MAX;
	int32_t t10 = 20;

	t10 = (x41==((x42|x43)|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 12U;
	int32_t x46 = INT32_MAX;
	int8_t x47 = -1;
	int16_t x48 = 1;

	t11 = (x45==((x46|x47)|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x51 = 0;
	int8_t x52 = 1;
	int32_t t12 = -5575;

	t12 = (x49==((x50|x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	static volatile uint8_t x54 = 115U;
	static volatile uint16_t x55 = UINT16_MAX;
	uint8_t x56 = 0U;
	int32_t t13 = 2377;

	t13 = (x53==((x54|x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -1;
	int64_t x58 = -1LL;
	uint16_t x59 = UINT16_MAX;
	uint32_t x60 = 1U;
	static int32_t t14 = -57860206;

	t14 = (x57==((x58|x59)|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = 43;
	uint16_t x62 = UINT16_MAX;
	static uint64_t x63 = 20943824333977804LLU;
	volatile int8_t x64 = INT8_MIN;
	static volatile int32_t t15 = 7;

	t15 = (x61==((x62|x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	static uint16_t x66 = 0U;
	int8_t x67 = INT8_MIN;
	static uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = 10;

	t16 = (x65==((x66|x67)|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x71 = 582332437LL;
	int8_t x72 = INT8_MAX;
	static int32_t t17 = 171;

	t17 = (x69==((x70|x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x73 = 1547;
	uint8_t x74 = 14U;
	uint64_t x76 = UINT64_MAX;

	t18 = (x73==((x74|x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 3;
	static int32_t x78 = -1;
	int8_t x79 = -2;

	t19 = (x77==((x78|x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x82 = INT8_MIN;
	static int32_t x83 = INT32_MIN;
	uint8_t x84 = 0U;
	static int32_t t20 = -2;

	t20 = (x81==((x82|x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = 40;
	int16_t x87 = INT16_MIN;
	volatile int8_t x88 = -1;
	volatile int32_t t21 = -783166786;

	t21 = (x85==((x86|x87)|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -9;
	static volatile uint64_t x90 = 58656LLU;
	int64_t x92 = 0LL;
	int32_t t22 = -15;

	t22 = (x89==((x90|x91)|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -19666LL;
	int16_t x94 = 113;
	volatile uint8_t x95 = UINT8_MAX;
	uint8_t x96 = 1U;
	static volatile int32_t t23 = -1;

	t23 = (x93==((x94|x95)|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 1;
	static uint16_t x98 = 694U;
	uint64_t x100 = 224476LLU;
	static int32_t t24 = 1;

	t24 = (x97==((x98|x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MIN;
	int64_t x104 = -1LL;
	static volatile int32_t t25 = 1259762;

	t25 = (x101==((x102|x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -4;
	static int8_t x106 = -30;
	uint32_t x107 = 1822U;
	uint64_t x108 = 53419935599900700LLU;
	volatile int32_t t26 = 2481;

	t26 = (x105==((x106|x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 3770105483LL;
	int16_t x110 = 1;
	static int64_t x111 = -1LL;
	volatile int64_t x112 = INT64_MAX;
	int32_t t27 = -6785;

	t27 = (x109==((x110|x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 1916;
	uint16_t x114 = 15251U;
	volatile int32_t t28 = -4775;

	t28 = (x113==((x114|x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int32_t x118 = -1;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t t29 = 1;

	t29 = (x117==((x118|x119)|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x121 = INT32_MIN;
	uint8_t x122 = 7U;
	uint8_t x123 = 127U;
	static int32_t x124 = INT32_MIN;
	volatile int32_t t30 = 7665376;

	t30 = (x121==((x122|x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x126 = -19445878232054378LL;
	int16_t x127 = INT16_MIN;
	uint32_t x128 = 1663U;
	int32_t t31 = 29058667;

	t31 = (x125==((x126|x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int8_t x130 = 2;
	uint64_t x132 = 21680LLU;
	volatile int32_t t32 = 87;

	t32 = (x129==((x130|x131)|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 0U;
	uint16_t x134 = 113U;
	volatile int32_t x135 = -1;
	int32_t t33 = 3878708;

	t33 = (x133==((x134|x135)|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 2U;
	int64_t x138 = INT64_MIN;
	static int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -20;

	t34 = (x137==((x138|x139)|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 1692967096541LL;
	int32_t x142 = -148953112;
	static uint8_t x143 = 3U;
	int64_t x144 = 248LL;
	int32_t t35 = 2749;

	t35 = (x141==((x142|x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = -1;
	volatile uint64_t x147 = 62680LLU;
	volatile int16_t x148 = -51;
	int32_t t36 = -1421;

	t36 = (x145==((x146|x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 0U;
	uint16_t x152 = UINT16_MAX;
	int32_t t37 = 6;

	t37 = (x149==((x150|x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 2U;
	int64_t x155 = -37544048LL;
	int8_t x156 = 3;
	volatile int32_t t38 = -123455914;

	t38 = (x153==((x154|x155)|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x158 = INT16_MIN;
	static int8_t x159 = -2;
	static volatile uint32_t x160 = UINT32_MAX;

	t39 = (x157==((x158|x159)|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MIN;
	static volatile int8_t x163 = 21;
	int8_t x164 = INT8_MIN;

	t40 = (x161==((x162|x163)|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 0;
	int32_t x166 = -1;
	int64_t x167 = INT64_MAX;
	static uint16_t x168 = 59U;
	static int32_t t41 = -631;

	t41 = (x165==((x166|x167)|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	volatile int64_t x170 = INT64_MAX;
	volatile int32_t t42 = -107823;

	t42 = (x169==((x170|x171)|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int16_t x174 = 1;
	static volatile int8_t x175 = -1;
	uint64_t x176 = UINT64_MAX;

	t43 = (x173==((x174|x175)|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	volatile int8_t x178 = 0;
	int32_t x179 = INT32_MAX;
	uint16_t x180 = 2982U;
	int32_t t44 = 99;

	t44 = (x177==((x178|x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	uint32_t x182 = UINT32_MAX;
	static int32_t x183 = INT32_MIN;
	volatile int32_t x184 = INT32_MAX;

	t45 = (x181==((x182|x183)|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -21305280;
	static int32_t x186 = INT32_MIN;
	volatile int16_t x187 = 2;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 10064;

	t46 = (x185==((x186|x187)|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = 0U;
	volatile int16_t x191 = INT16_MIN;
	uint16_t x192 = 13251U;
	volatile int32_t t47 = 0;

	t47 = (x189==((x190|x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = -1;
	int32_t t48 = -8;

	t48 = (x193==((x194|x195)|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = UINT16_MAX;
	uint64_t x199 = UINT64_MAX;
	volatile int32_t t49 = -405904;

	t49 = (x197==((x198|x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x202 = -1;
	static int8_t x203 = -1;
	static uint16_t x204 = 79U;

	t50 = (x201==((x202|x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MIN;
	uint16_t x206 = 7370U;
	static int32_t x207 = INT32_MIN;
	static int16_t x208 = -21;
	int32_t t51 = 7124349;

	t51 = (x205==((x206|x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = 13U;
	int16_t x211 = INT16_MAX;
	int32_t x212 = INT32_MAX;
	int32_t t52 = -12;

	t52 = (x209==((x210|x211)|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = 5048421190682566LLU;
	static int16_t x215 = -3559;
	int8_t x216 = INT8_MIN;
	volatile int32_t t53 = -296;

	t53 = (x213==((x214|x215)|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = 23;
	int32_t x219 = INT32_MAX;
	uint64_t x220 = UINT64_MAX;
	int32_t t54 = -10129540;

	t54 = (x217==((x218|x219)|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	volatile uint16_t x222 = 2532U;
	volatile int8_t x224 = INT8_MIN;
	int32_t t55 = 5004;

	t55 = (x221==((x222|x223)|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -5;
	static volatile uint8_t x226 = 7U;
	int8_t x227 = 4;
	int32_t t56 = -1734227;

	t56 = (x225==((x226|x227)|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = INT16_MIN;
	uint16_t x230 = UINT16_MAX;
	int32_t x231 = -1;
	int8_t x232 = 1;
	static volatile int32_t t57 = -1572;

	t57 = (x229==((x230|x231)|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	int8_t x235 = INT8_MIN;
	volatile int64_t x236 = INT64_MAX;

	t58 = (x233==((x234|x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	int64_t x240 = INT64_MIN;
	static volatile int32_t t59 = 5633385;

	t59 = (x237==((x238|x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x242 = INT64_MAX;
	int8_t x243 = 14;
	volatile int32_t t60 = 13263;

	t60 = (x241==((x242|x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = 1;
	uint64_t x247 = 138334545LLU;
	uint16_t x248 = 7U;
	static int32_t t61 = 435801;

	t61 = (x245==((x246|x247)|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x251 = INT64_MIN;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = 74;

	t62 = (x249==((x250|x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	uint16_t x254 = UINT16_MAX;
	static int64_t x255 = INT64_MAX;
	int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -3426;

	t63 = (x253==((x254|x255)|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = 1U;
	int16_t x259 = INT16_MIN;
	int32_t t64 = -12;

	t64 = (x257==((x258|x259)|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	volatile uint32_t x264 = 5188302U;
	int32_t t65 = -56;

	t65 = (x261==((x262|x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -9;
	int32_t x266 = -1;
	static int8_t x268 = INT8_MIN;
	static volatile int32_t t66 = -808985587;

	t66 = (x265==((x266|x267)|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = -1;
	static int8_t x271 = INT8_MIN;
	static volatile int16_t x272 = INT16_MIN;

	t67 = (x269==((x270|x271)|x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x274 = INT16_MIN;
	int8_t x276 = INT8_MIN;

	t68 = (x273==((x274|x275)|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	int16_t x278 = -1;
	volatile int32_t x279 = INT32_MIN;
	volatile int32_t t69 = -941770;

	t69 = (x277==((x278|x279)|x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 3U;
	int32_t x282 = INT32_MAX;
	int64_t x284 = INT64_MAX;
	volatile int32_t t70 = -215884605;

	t70 = (x281==((x282|x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = -1;
	int64_t x287 = -11355945083503LL;
	static volatile int32_t t71 = -130150892;

	t71 = (x285==((x286|x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = 45U;
	uint64_t x291 = 246244165981939598LLU;
	volatile uint32_t x292 = UINT32_MAX;
	int32_t t72 = -57285284;

	t72 = (x289==((x290|x291)|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 3U;
	static uint8_t x294 = UINT8_MAX;
	volatile uint32_t x295 = 1182593998U;
	volatile int32_t t73 = 2;

	t73 = (x293==((x294|x295)|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x298 = UINT16_MAX;
	static int64_t x300 = 0LL;
	int32_t t74 = 12155837;

	t74 = (x297==((x298|x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = 0U;
	int32_t x302 = -1945;
	int8_t x303 = 0;
	volatile int32_t x304 = INT32_MIN;
	int32_t t75 = 920277;

	t75 = (x301==((x302|x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	uint8_t x306 = UINT8_MAX;
	int16_t x307 = INT16_MIN;
	volatile int32_t t76 = 789;

	t76 = (x305==((x306|x307)|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 1U;
	static int16_t x310 = INT16_MAX;
	volatile int16_t x311 = INT16_MIN;
	volatile int32_t x312 = INT32_MIN;
	static int32_t t77 = 1;

	t77 = (x309==((x310|x311)|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = 31622U;
	uint64_t x314 = 4390045361549136357LLU;
	volatile uint64_t x315 = UINT64_MAX;
	uint8_t x316 = 0U;
	volatile int32_t t78 = 462;

	t78 = (x313==((x314|x315)|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -15;
	int8_t x318 = -6;
	uint8_t x319 = 1U;
	int8_t x320 = INT8_MAX;
	volatile int32_t t79 = 10403;

	t79 = (x317==((x318|x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = INT8_MIN;
	int64_t x323 = 71637LL;

	t80 = (x321==((x322|x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -7881;
	int8_t x326 = -1;

	t81 = (x325==((x326|x327)|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int64_t x330 = -5LL;
	static int64_t x331 = INT64_MAX;
	static int32_t t82 = -7;

	t82 = (x329==((x330|x331)|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x333 = INT8_MAX;
	static uint8_t x334 = 15U;
	int64_t x335 = INT64_MAX;
	static uint64_t x336 = UINT64_MAX;
	static int32_t t83 = 15;

	t83 = (x333==((x334|x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x338 = INT32_MIN;
	int16_t x339 = 125;
	volatile int16_t x340 = 1974;
	int32_t t84 = 489;

	t84 = (x337==((x338|x339)|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = -28;
	static volatile int16_t x342 = 5;
	volatile uint8_t x343 = 3U;
	static int32_t x344 = -1;
	static int32_t t85 = 699347025;

	t85 = (x341==((x342|x343)|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	volatile int64_t x347 = -1LL;
	volatile int32_t x348 = -3;
	int32_t t86 = 176646365;

	t86 = (x345==((x346|x347)|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x351 = 6LL;
	static uint32_t x352 = UINT32_MAX;
	int32_t t87 = -50126;

	t87 = (x349==((x350|x351)|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x355 = 85LLU;
	int16_t x356 = INT16_MIN;
	int32_t t88 = 215;

	t88 = (x353==((x354|x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 6428;
	uint8_t x358 = 24U;
	int64_t x359 = -1LL;
	uint8_t x360 = 4U;
	volatile int32_t t89 = 1;

	t89 = (x357==((x358|x359)|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = UINT16_MAX;
	uint64_t x362 = UINT64_MAX;
	volatile uint64_t x363 = UINT64_MAX;
	volatile uint8_t x364 = UINT8_MAX;
	int32_t t90 = -1531;

	t90 = (x361==((x362|x363)|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x367 = INT16_MIN;
	uint64_t x368 = 1982040436772246559LLU;
	int32_t t91 = -22;

	t91 = (x365==((x366|x367)|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = INT8_MIN;

	t92 = (x369==((x370|x371)|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	volatile uint32_t x374 = 19946020U;
	uint8_t x375 = 39U;
	int16_t x376 = INT16_MIN;
	int32_t t93 = 116;

	t93 = (x373==((x374|x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	uint16_t x378 = UINT16_MAX;
	uint16_t x379 = UINT16_MAX;
	volatile int32_t t94 = 34789954;

	t94 = (x377==((x378|x379)|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	int32_t x382 = -19312;
	int16_t x383 = -1;
	int8_t x384 = 40;
	static volatile int32_t t95 = 24334899;

	t95 = (x381==((x382|x383)|x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -24;
	int32_t x386 = INT32_MIN;
	int16_t x388 = INT16_MIN;
	int32_t t96 = -79624;

	t96 = (x385==((x386|x387)|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1290;
	volatile int32_t x390 = -1;
	int8_t x391 = INT8_MIN;
	static int16_t x392 = INT16_MAX;

	t97 = (x389==((x390|x391)|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 2113829279623LLU;
	uint64_t x394 = 6310LLU;
	uint64_t x396 = 2552875032LLU;

	t98 = (x393==((x394|x395)|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = -1;
	int32_t x398 = -1;
	int32_t t99 = -53195107;

	t99 = (x397==((x398|x399)|x400));

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

