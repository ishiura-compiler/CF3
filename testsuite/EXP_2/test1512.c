#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -725417175;
int64_t x8 = INT64_MIN;
static int32_t t3 = 3400;
int64_t t5 = 24LL;
volatile int16_t x25 = -122;
static uint8_t x32 = UINT8_MAX;
volatile int64_t t7 = 865189LL;
int16_t x35 = INT16_MAX;
static uint8_t x40 = 42U;
uint32_t x46 = 22624945U;
static uint8_t x52 = 11U;
static int32_t t14 = 1;
int32_t x70 = 952502060;
static int8_t x71 = 1;
volatile int32_t x77 = -1;
static int32_t x82 = -14823;
int64_t x104 = -431LL;
int64_t x105 = INT64_MIN;
int32_t x111 = -520365867;
int64_t t26 = 7245702472LL;
static int16_t x113 = 7;
static int32_t t27 = 611680;
uint64_t x119 = 1824379LLU;
volatile int32_t t28 = 0;
int64_t x122 = INT64_MIN;
uint8_t x123 = 120U;
static uint16_t x127 = UINT16_MAX;
int32_t t30 = 15090953;
int8_t x133 = -21;
int16_t x137 = 3877;
volatile int32_t x138 = -18;
uint32_t x143 = 328613403U;
uint64_t x147 = 7547642587218757872LLU;
volatile int32_t t37 = 13447543;
volatile uint16_t x158 = 137U;
int32_t x165 = INT32_MAX;
int32_t x167 = 916569;
int32_t t40 = -5361;
uint32_t x169 = UINT32_MAX;
int32_t x172 = INT32_MIN;
volatile uint32_t t41 = 689416418U;
int16_t x173 = -29;
static volatile int64_t t43 = 1865481284LL;
int8_t x186 = INT8_MAX;
static uint32_t x195 = 15094U;
static uint64_t x196 = 119LLU;
int16_t x206 = INT16_MIN;
int8_t x212 = INT8_MIN;
int32_t x215 = -1;
volatile int32_t t51 = -872;
volatile int32_t x228 = -1;
volatile int32_t t54 = -1;
volatile int32_t t55 = 28067;
int8_t x233 = INT8_MIN;
uint16_t x234 = 12397U;
int8_t x236 = INT8_MAX;
int64_t x237 = INT64_MIN;
uint64_t t57 = 104223053LLU;
uint16_t x244 = UINT16_MAX;
volatile uint32_t x250 = UINT32_MAX;
int32_t t60 = 1404;
int8_t x254 = INT8_MIN;
uint64_t x255 = UINT64_MAX;
uint32_t t63 = 7869U;
int64_t x269 = -70159344LL;
static int16_t x270 = -61;
uint16_t x275 = 3691U;
int64_t x279 = INT64_MIN;
int64_t x281 = 101LL;
int64_t x283 = -1LL;
int64_t x284 = 46278LL;
static volatile int32_t x287 = INT32_MAX;
uint8_t x292 = 7U;
static int8_t x296 = INT8_MIN;
static uint16_t x320 = UINT16_MAX;
static uint8_t x321 = 18U;
uint64_t x323 = 52900877010098379LLU;
volatile int32_t t78 = 7286812;
int8_t x335 = INT8_MIN;
static volatile uint32_t t82 = 1061325U;
static int64_t x343 = INT64_MAX;
volatile uint16_t x345 = 15U;
int32_t t84 = -379106597;
uint32_t x351 = 1U;
uint32_t t85 = 1320511U;
volatile int8_t x356 = -1;
int8_t x357 = 0;
uint64_t x361 = 974083721325LLU;
uint64_t t88 = 5LLU;
int8_t x366 = INT8_MAX;
int8_t x369 = -1;
volatile uint16_t x379 = 58U;
volatile uint32_t x382 = UINT32_MAX;
volatile int32_t t94 = 54078;
int16_t x393 = INT16_MAX;
volatile int64_t t95 = 0LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = -1602245;
	int64_t x3 = INT64_MIN;
	static volatile uint8_t x4 = 25U;

	t0 = ((x1^(x2<x3))/x4);

	if (t0 != -1310) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	uint16_t x6 = UINT16_MAX;
	static int8_t x7 = INT8_MIN;
	int64_t t1 = 5641143LL;

	t1 = ((x5^(x6<x7))/x8);

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = 1;
	static int64_t x10 = INT64_MAX;
	int8_t x11 = -1;
	static int16_t x12 = 1426;
	static volatile int32_t t2 = 2452094;

	t2 = ((x9^(x10<x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 3173349;
	int16_t x14 = INT16_MAX;
	static int8_t x15 = INT8_MAX;
	uint8_t x16 = 55U;

	t3 = ((x13^(x14<x15))/x16);

	if (t3 != 57697) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -8;
	uint32_t x18 = UINT32_MAX;
	uint64_t x19 = 320591870497LLU;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = -1130234523443848LL;

	t4 = ((x17^(x18<x19))/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 17540028600911947LL;
	int64_t x22 = INT64_MIN;
	int16_t x23 = -1;
	int8_t x24 = -1;

	t5 = ((x21^(x22<x23))/x24);

	if (t5 != -17540028600911946LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	volatile int8_t x27 = -1;
	static volatile uint64_t x28 = 334LLU;
	static uint64_t t6 = 1428304589636181LLU;

	t6 = ((x25^(x26<x27))/x28);

	if (t6 != 55229772675777100LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static int8_t x30 = INT8_MAX;
	volatile int64_t x31 = -1LL;

	t7 = ((x29^(x30<x31))/x32);

	if (t7 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 797220LL;
	int64_t x34 = -1LL;
	uint64_t x36 = 8456087102289191600LLU;
	volatile uint64_t t8 = 11LLU;

	t8 = ((x33^(x34<x35))/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	volatile int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MIN;
	volatile int32_t t9 = 257274;

	t9 = ((x37^(x38<x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint64_t x42 = 16062097LLU;
	volatile int64_t x43 = INT64_MIN;
	int8_t x44 = INT8_MIN;
	int64_t t10 = -10554413022775194LL;

	t10 = ((x41^(x42<x43))/x44);

	if (t10 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -8667;
	uint64_t x47 = 258200933LLU;
	uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 423368778757639388LLU;

	t11 = ((x45^(x46<x47))/x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MIN;
	volatile int16_t x51 = -313;
	volatile uint64_t t12 = 441661792LLU;

	t12 = ((x49^(x50<x51))/x52);

	if (t12 != 1676976733973595601LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = 3;
	int8_t x54 = 2;
	int8_t x55 = 1;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 632243;

	t13 = ((x53^(x54<x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile int64_t x58 = INT64_MIN;
	static uint16_t x59 = UINT16_MAX;
	static int16_t x60 = INT16_MIN;

	t14 = ((x57^(x58<x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = -26673879LL;
	int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = 3U;
	static volatile int64_t t15 = 6301LL;

	t15 = ((x61^(x62<x63))/x64);

	if (t15 != -8891293LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 562932532299982LLU;
	static int8_t x66 = INT8_MAX;
	static uint16_t x67 = 495U;
	static volatile int64_t x68 = INT64_MAX;
	uint64_t t16 = 699LLU;

	t16 = ((x65^(x66<x67))/x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int64_t x72 = -1LL;
	int64_t t17 = 25059412392223LL;

	t17 = ((x69^(x70<x71))/x72);

	if (t17 != 128LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 167U;
	uint16_t x74 = UINT16_MAX;
	static int8_t x75 = INT8_MIN;
	int64_t x76 = -6978603106291LL;
	volatile int64_t t18 = 1026112LL;

	t18 = ((x73^(x74<x75))/x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = UINT16_MAX;
	static int32_t x79 = INT32_MAX;
	volatile int8_t x80 = 1;
	volatile int32_t t19 = -186135;

	t19 = ((x77^(x78<x79))/x80);

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int16_t x83 = INT16_MIN;
	volatile uint32_t x84 = 937662U;
	uint32_t t20 = 12292U;

	t20 = ((x81^(x82<x83))/x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = 109U;
	volatile int64_t x90 = INT64_MIN;
	volatile int64_t x91 = INT64_MIN;
	static int64_t x92 = INT64_MAX;
	int64_t t21 = 3593080307080486LL;

	t21 = ((x89^(x90<x91))/x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 2724634U;
	int16_t x94 = INT16_MAX;
	static int16_t x95 = INT16_MAX;
	int32_t x96 = -1;
	uint32_t t22 = 115554U;

	t22 = ((x93^(x94<x95))/x96);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 6650U;
	volatile uint8_t x98 = UINT8_MAX;
	volatile int32_t x99 = 166699056;
	uint8_t x100 = UINT8_MAX;
	volatile uint32_t t23 = 92012227U;

	t23 = ((x97^(x98<x99))/x100);

	if (t23 != 26U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	static int64_t x102 = 35818034LL;
	int16_t x103 = 2;
	int64_t t24 = 1LL;

	t24 = ((x101^(x102<x103))/x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x106 = -1LL;
	uint64_t x107 = UINT64_MAX;
	uint16_t x108 = UINT16_MAX;
	int64_t t25 = -1LL;

	t25 = ((x105^(x106<x107))/x108);

	if (t25 != -140739635871744LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MAX;
	int32_t x110 = -2435;
	int64_t x112 = -1LL;

	t26 = ((x109^(x110<x111))/x112);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x114 = -7;
	uint64_t x115 = 6798LLU;
	static int16_t x116 = INT16_MAX;

	t27 = ((x113^(x114<x115))/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = INT32_MIN;
	int64_t x118 = -126230898051LL;
	int32_t x120 = INT32_MIN;

	t28 = ((x117^(x118<x119))/x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x121 = 1005;
	uint64_t x124 = 3589481368LLU;
	volatile uint64_t t29 = 1LLU;

	t29 = ((x121^(x122<x123))/x124);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	static int32_t x126 = -397376;
	int32_t x128 = 4;

	t30 = ((x125^(x126<x127))/x128);

	if (t30 != 8191) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = INT64_MAX;
	int64_t x130 = 28LL;
	volatile int64_t x131 = INT64_MAX;
	int16_t x132 = INT16_MIN;
	int64_t t31 = -122417762156LL;

	t31 = ((x129^(x130<x131))/x132);

	if (t31 != -281474976710655LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = 641594;
	uint32_t x135 = 393U;
	uint16_t x136 = 1U;
	volatile int32_t t32 = 1;

	t32 = ((x133^(x134<x135))/x136);

	if (t32 != -21) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x139 = INT8_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t33 = 106710;

	t33 = ((x137^(x138<x139))/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 9791U;
	int32_t x142 = INT32_MIN;
	int32_t x144 = INT32_MIN;
	int32_t t34 = -4939;

	t34 = ((x141^(x142<x143))/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 79485654980220968LLU;
	uint64_t x146 = 30LLU;
	int8_t x148 = -1;
	volatile uint64_t t35 = 19798722941304806LLU;

	t35 = ((x145^(x146<x147))/x148);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = UINT64_MAX;
	static volatile int32_t x150 = -1;
	int64_t x151 = INT64_MIN;
	int64_t x152 = 7LL;
	uint64_t t36 = 78990966938292479LLU;

	t36 = ((x149^(x150<x151))/x152);

	if (t36 != 2635249153387078802LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x153 = UINT16_MAX;
	int8_t x154 = 1;
	volatile int64_t x155 = INT64_MIN;
	static volatile int8_t x156 = 1;

	t37 = ((x153^(x154<x155))/x156);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 28U;
	uint64_t x159 = 1736966434011697252LLU;
	uint32_t x160 = 58246286U;
	uint32_t t38 = 809U;

	t38 = ((x157^(x158<x159))/x160);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x161 = 5;
	int32_t x162 = INT32_MIN;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t39 = 46453;

	t39 = ((x161^(x162<x163))/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x166 = -19736;
	uint8_t x168 = 4U;

	t40 = ((x165^(x166<x167))/x168);

	if (t40 != 536870911) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x170 = INT32_MIN;
	volatile int32_t x171 = INT32_MAX;

	t41 = ((x169^(x170<x171))/x172);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x174 = INT32_MIN;
	static int64_t x175 = INT64_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t42 = 53608;

	t42 = ((x173^(x174<x175))/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -495241604564LL;
	int8_t x182 = -1;
	volatile int16_t x183 = -1;
	int64_t x184 = INT64_MIN;

	t43 = ((x181^(x182<x183))/x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x185 = 1;
	static uint16_t x187 = 655U;
	int8_t x188 = -1;
	volatile int32_t t44 = 402;

	t44 = ((x185^(x186<x187))/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x189 = 27LL;
	int64_t x190 = -1LL;
	static int8_t x191 = INT8_MIN;
	uint32_t x192 = 42472663U;
	volatile int64_t t45 = -312LL;

	t45 = ((x189^(x190<x191))/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x193 = 0;
	int16_t x194 = -1;
	static uint64_t t46 = 3LLU;

	t46 = ((x193^(x194<x195))/x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -3;
	volatile uint32_t x198 = 28U;
	static int32_t x199 = 16194;
	volatile int16_t x200 = -1;
	int32_t t47 = -93769360;

	t47 = ((x197^(x198<x199))/x200);

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x201 = 90658999U;
	int64_t x202 = -256011058148752112LL;
	int64_t x203 = INT64_MAX;
	uint64_t x204 = UINT64_MAX;
	uint64_t t48 = 41111LLU;

	t48 = ((x201^(x202<x203))/x204);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x205 = UINT64_MAX;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	volatile uint64_t t49 = 710797484LLU;

	t49 = ((x205^(x206<x207))/x208);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MIN;
	int32_t t50 = -1023242602;

	t50 = ((x209^(x210<x211))/x212);

	if (t50 != 16777216) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MIN;
	int32_t x216 = -1;

	t51 = ((x213^(x214<x215))/x216);

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x218 = UINT16_MAX;
	int16_t x219 = 1;
	uint64_t x220 = UINT64_MAX;
	uint64_t t52 = 1971339501635LLU;

	t52 = ((x217^(x218<x219))/x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x221 = UINT16_MAX;
	static int32_t x222 = INT32_MAX;
	int16_t x223 = -1;
	volatile uint64_t x224 = UINT64_MAX;
	uint64_t t53 = 5LLU;

	t53 = ((x221^(x222<x223))/x224);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -1;
	int8_t x226 = INT8_MAX;
	int32_t x227 = -1;

	t54 = ((x225^(x226<x227))/x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	volatile int8_t x230 = INT8_MIN;
	int16_t x231 = INT16_MAX;
	int8_t x232 = INT8_MIN;

	t55 = ((x229^(x230<x231))/x232);

	if (t55 != 16777215) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x235 = -1;
	static volatile int32_t t56 = -3841180;

	t56 = ((x233^(x234<x235))/x236);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x238 = 47979548;
	int16_t x239 = INT16_MIN;
	static volatile uint64_t x240 = 1LLU;

	t57 = ((x237^(x238<x239))/x240);

	if (t57 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x241 = INT32_MAX;
	volatile int8_t x242 = INT8_MAX;
	int8_t x243 = INT8_MIN;
	volatile int32_t t58 = -832247214;

	t58 = ((x241^(x242<x243))/x244);

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = -75511278LL;
	static uint64_t x246 = UINT64_MAX;
	volatile int64_t x247 = 10834182166045703LL;
	volatile uint8_t x248 = UINT8_MAX;
	static int64_t t59 = 1897922623028LL;

	t59 = ((x245^(x246<x247))/x248);

	if (t59 != -296122LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x249 = INT8_MIN;
	uint64_t x251 = 207103408464911539LLU;
	int32_t x252 = 5539;

	t60 = ((x249^(x250<x251))/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 106U;
	uint32_t x256 = 1072070U;
	static volatile uint32_t t61 = 31252U;

	t61 = ((x253^(x254<x255))/x256);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = UINT8_MAX;
	int32_t x258 = -1;
	int32_t x259 = 8190443;
	volatile uint16_t x260 = UINT16_MAX;
	static int32_t t62 = -2869729;

	t62 = ((x257^(x258<x259))/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x261 = UINT32_MAX;
	uint32_t x262 = 3544U;
	int32_t x263 = INT32_MIN;
	volatile int32_t x264 = -1;

	t63 = ((x261^(x262<x263))/x264);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x266 = 548547067U;
	int64_t x267 = -1LL;
	int64_t x268 = -927LL;
	static int64_t t64 = -172846917LL;

	t64 = ((x265^(x266<x267))/x268);

	if (t64 != 2316595LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x271 = 394830696LLU;
	int64_t x272 = -1LL;
	volatile int64_t t65 = -68006626935145370LL;

	t65 = ((x269^(x270<x271))/x272);

	if (t65 != 70159344LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 1096035634350883919LL;
	uint64_t x274 = 84645756725273LLU;
	static uint64_t x276 = UINT64_MAX;
	static volatile uint64_t t66 = 50528073657376LLU;

	t66 = ((x273^(x274<x275))/x276);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = 13090;
	int32_t x278 = -1;
	int16_t x280 = -1;
	volatile int32_t t67 = -6;

	t67 = ((x277^(x278<x279))/x280);

	if (t67 != -13090) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x282 = 206;
	int64_t t68 = -357260516444LL;

	t68 = ((x281^(x282<x283))/x284);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MAX;
	uint32_t x286 = 1092904U;
	int64_t x288 = INT64_MAX;
	static volatile int64_t t69 = -29384947814850LL;

	t69 = ((x285^(x286<x287))/x288);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = UINT64_MAX;
	volatile int16_t x290 = INT16_MIN;
	volatile int32_t x291 = INT32_MAX;
	volatile uint64_t t70 = 45550LLU;

	t70 = ((x289^(x290<x291))/x292);

	if (t70 != 2635249153387078802LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 3147U;
	volatile int32_t x294 = INT32_MAX;
	volatile int32_t x295 = INT32_MIN;
	int32_t t71 = 10550703;

	t71 = ((x293^(x294<x295))/x296);

	if (t71 != -24) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MIN;
	uint64_t x298 = 48713980LLU;
	static uint64_t x299 = 19617LLU;
	volatile uint64_t x300 = 55LLU;
	volatile uint64_t t72 = 31LLU;

	t72 = ((x297^(x298<x299))/x300);

	if (t72 != 167697673397359560LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = -1;
	uint16_t x302 = 8351U;
	static int64_t x303 = INT64_MIN;
	static uint16_t x304 = UINT16_MAX;
	volatile int32_t t73 = -1247;

	t73 = ((x301^(x302<x303))/x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = 4;
	uint8_t x306 = 1U;
	uint64_t x307 = 260816805462LLU;
	volatile int8_t x308 = INT8_MAX;
	volatile int32_t t74 = -2;

	t74 = ((x305^(x306<x307))/x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = 122343528921877LLU;
	static int16_t x310 = INT16_MIN;
	static int32_t x311 = -57;
	uint32_t x312 = 2023258784U;
	static uint64_t t75 = 32056938838005LLU;

	t75 = ((x309^(x310<x311))/x312);

	if (t75 != 60468LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x313 = UINT32_MAX;
	uint16_t x314 = UINT16_MAX;
	uint8_t x315 = 9U;
	uint32_t x316 = 240U;
	uint32_t t76 = 1U;

	t76 = ((x313^(x314<x315))/x316);

	if (t76 != 17895697U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	static int64_t x318 = 5015LL;
	uint32_t x319 = 1580U;
	int64_t t77 = 22521338401479LL;

	t77 = ((x317^(x318<x319))/x320);

	if (t77 != -140739635871744LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x322 = -519343047757588LL;
	int32_t x324 = INT32_MIN;

	t78 = ((x321^(x322<x323))/x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = INT32_MIN;
	uint8_t x326 = UINT8_MAX;
	static uint8_t x327 = UINT8_MAX;
	static int32_t x328 = INT32_MAX;
	int32_t t79 = 42;

	t79 = ((x325^(x326<x327))/x328);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x329 = UINT16_MAX;
	volatile int32_t x330 = -1;
	static uint64_t x331 = 8559928674199327134LLU;
	uint64_t x332 = 1739728502452118941LLU;
	uint64_t t80 = 14LLU;

	t80 = ((x329^(x330<x331))/x332);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = -821;
	int16_t x334 = INT16_MAX;
	static int64_t x336 = -3464729695369220LL;
	volatile int64_t t81 = 41LL;

	t81 = ((x333^(x334<x335))/x336);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x337 = 335;
	static uint32_t x338 = 2036U;
	uint64_t x339 = 31733730735LLU;
	uint32_t x340 = 1563420U;

	t82 = ((x337^(x338<x339))/x340);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = INT8_MIN;
	int8_t x342 = 1;
	int16_t x344 = -1;
	static int32_t t83 = -577480485;

	t83 = ((x341^(x342<x343))/x344);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x346 = INT64_MAX;
	volatile int16_t x347 = INT16_MIN;
	static volatile int16_t x348 = 12850;

	t84 = ((x345^(x346<x347))/x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int16_t x350 = -9259;
	int32_t x352 = INT32_MAX;

	t85 = ((x349^(x350<x351))/x352);

	if (t85 != 2U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x353 = INT16_MIN;
	int64_t x354 = -1LL;
	volatile uint32_t x355 = 48U;
	static volatile int32_t t86 = 16635;

	t86 = ((x353^(x354<x355))/x356);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x358 = 934;
	volatile int16_t x359 = INT16_MAX;
	uint32_t x360 = 255095094U;
	volatile uint32_t t87 = 2U;

	t87 = ((x357^(x358<x359))/x360);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x362 = 1;
	int8_t x363 = INT8_MIN;
	uint64_t x364 = UINT64_MAX;

	t88 = ((x361^(x362<x363))/x364);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = 37U;
	int16_t x367 = -1;
	int64_t x368 = -1LL;
	volatile int64_t t89 = -649LL;

	t89 = ((x365^(x366<x367))/x368);

	if (t89 != -37LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x370 = UINT8_MAX;
	int64_t x371 = INT64_MIN;
	static int64_t x372 = INT64_MAX;
	static int64_t t90 = -5LL;

	t90 = ((x369^(x370<x371))/x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = -31;
	int16_t x374 = INT16_MIN;
	uint16_t x375 = 28U;
	static int32_t x376 = INT32_MAX;
	volatile int32_t t91 = -61;

	t91 = ((x373^(x374<x375))/x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = 1793;
	uint16_t x378 = 51U;
	volatile int8_t x380 = INT8_MIN;
	volatile int32_t t92 = -57281;

	t92 = ((x377^(x378<x379))/x380);

	if (t92 != -14) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = -1;
	uint64_t x383 = UINT64_MAX;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t93 = 2LLU;

	t93 = ((x381^(x382<x383))/x384);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = INT8_MIN;
	static volatile uint16_t x390 = 4U;
	static int32_t x391 = -1;
	static int16_t x392 = -2297;

	t94 = ((x389^(x390<x391))/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x394 = 24606935592461658LLU;
	volatile uint64_t x395 = UINT64_MAX;
	int64_t x396 = -1663253LL;

	t95 = ((x393^(x394<x395))/x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x397 = 205U;
	int64_t x398 = INT64_MIN;
	static volatile int32_t x399 = INT32_MIN;
	int16_t x400 = -49;
	uint32_t t96 = 55103887U;

	t96 = ((x397^(x398<x399))/x400);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x401 = -55;
	uint8_t x402 = UINT8_MAX;
	int8_t x403 = INT8_MIN;
	int8_t x404 = -12;
	volatile int32_t t97 = 1;

	t97 = ((x401^(x402<x403))/x404);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x405 = -4;
	int8_t x406 = -1;
	int64_t x407 = INT64_MIN;
	static uint32_t x408 = 335028U;
	volatile uint32_t t98 = 18U;

	t98 = ((x405^(x406<x407))/x408);

	if (t98 != 12819U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x413 = UINT16_MAX;
	int64_t x414 = 107914215511LL;
	volatile int8_t x415 = -62;
	int64_t x416 = INT64_MIN;
	static volatile int64_t t99 = -49LL;

	t99 = ((x413^(x414<x415))/x416);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

