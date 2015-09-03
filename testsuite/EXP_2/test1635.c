#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -120;
volatile int32_t t0 = 18849;
volatile int32_t x6 = INT32_MIN;
static int64_t x7 = INT64_MAX;
int32_t x15 = INT32_MAX;
volatile uint64_t x26 = 1356639LLU;
int64_t x40 = -1LL;
volatile int32_t t10 = -771847565;
volatile uint8_t x48 = 123U;
int32_t t11 = 167;
volatile int16_t x50 = -493;
volatile int8_t x55 = INT8_MAX;
int32_t x62 = 3;
int32_t x63 = -1;
int64_t x74 = INT64_MAX;
static volatile int32_t t18 = -68485502;
int16_t x77 = 485;
volatile int32_t t20 = -235114;
int16_t x87 = 1781;
int8_t x106 = -1;
static int32_t x108 = INT32_MIN;
int32_t t29 = -14040182;
int16_t x123 = -98;
volatile int32_t t30 = -3;
volatile int32_t t31 = 1;
uint16_t x130 = UINT16_MAX;
uint64_t x132 = 65774540LLU;
int64_t x133 = -49LL;
int16_t x138 = -1;
volatile int32_t t35 = 44448097;
uint8_t x149 = UINT8_MAX;
int16_t x151 = INT16_MAX;
uint8_t x155 = 5U;
int64_t x157 = -337886891LL;
int64_t x160 = 661230364202LL;
volatile int16_t x161 = INT16_MIN;
int16_t x166 = 435;
static volatile int64_t x171 = 68636032126LL;
uint8_t x174 = UINT8_MAX;
int64_t x180 = 929010196069LL;
int64_t x192 = INT64_MIN;
static volatile int32_t t47 = 716;
uint8_t x200 = 5U;
static int16_t x202 = INT16_MIN;
uint8_t x203 = UINT8_MAX;
int32_t x207 = INT32_MAX;
uint64_t x210 = 184174786LLU;
int16_t x216 = 14974;
static volatile int16_t x221 = 2;
static int8_t x226 = 1;
int16_t x229 = -1;
volatile int32_t t58 = 2781;
static int64_t x238 = INT64_MAX;
int32_t x245 = 4412300;
int32_t x249 = INT32_MIN;
volatile int32_t t62 = -4674;
uint16_t x261 = 664U;
volatile int32_t x265 = INT32_MIN;
volatile int32_t x267 = INT32_MAX;
int8_t x270 = INT8_MAX;
int16_t x274 = 33;
volatile int32_t t68 = -2599;
int8_t x278 = INT8_MIN;
volatile int32_t t71 = 1362;
static volatile uint8_t x292 = UINT8_MAX;
int64_t x293 = INT64_MIN;
static int64_t x296 = INT64_MIN;
volatile uint64_t x297 = UINT64_MAX;
volatile int64_t x304 = INT64_MAX;
volatile int32_t t75 = -21;
static int16_t x307 = INT16_MAX;
static uint64_t x310 = 71955691LLU;
static int16_t x313 = INT16_MIN;
int8_t x315 = 21;
uint64_t x316 = UINT64_MAX;
int32_t x320 = -2962;
uint64_t x322 = 86LLU;
int32_t x324 = INT32_MAX;
volatile int32_t t80 = 2590427;
int16_t x325 = INT16_MIN;
volatile int32_t t81 = 12;
uint32_t x339 = 648456U;
uint32_t x341 = 13517U;
int8_t x342 = -1;
volatile int8_t x356 = -1;
uint8_t x358 = UINT8_MAX;
int64_t x362 = 53118046961LL;
int8_t x367 = INT8_MIN;
static int64_t x375 = -1LL;
int32_t x380 = -1;
volatile int64_t x383 = 25LL;
static int64_t x384 = 99811062080872LL;
volatile int32_t x389 = 68;
volatile int32_t x390 = -1;
int64_t x392 = INT64_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static int8_t x2 = INT8_MIN;
	uint16_t x4 = 14U;

	t0 = ((x1<(x2<=x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -622198LL;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -1;

	t1 = ((x5<(x6<=x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 8195U;
	static uint8_t x10 = UINT8_MAX;
	int32_t x11 = -1;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -2033459;

	t2 = ((x9<(x10<=x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 7139;
	int8_t x14 = INT8_MIN;
	volatile uint16_t x16 = 43U;
	volatile int32_t t3 = 104054;

	t3 = ((x13<(x14<=x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	volatile int16_t x18 = INT16_MIN;
	int8_t x19 = 0;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 11912;

	t4 = ((x17<(x18<=x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 3663U;
	int64_t x22 = -78905146878LL;
	uint16_t x23 = UINT16_MAX;
	int64_t x24 = INT64_MIN;
	int32_t t5 = -200044929;

	t5 = ((x21<(x22<=x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	static int32_t t6 = 0;

	t6 = ((x25<(x26<=x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int32_t x30 = -1072383720;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MAX;
	int32_t t7 = -40;

	t7 = ((x29<(x30<=x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 5U;
	volatile int8_t x34 = INT8_MIN;
	uint16_t x35 = UINT16_MAX;
	int64_t x36 = INT64_MAX;
	int32_t t8 = -337359844;

	t8 = ((x33<(x34<=x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -20;
	uint32_t x38 = 2406502U;
	uint32_t x39 = UINT32_MAX;
	int32_t t9 = 51;

	t9 = ((x37<(x38<=x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	uint8_t x42 = UINT8_MAX;
	uint16_t x43 = 143U;
	uint32_t x44 = 250825U;

	t10 = ((x41<(x42<=x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 673809127U;
	int64_t x46 = -219LL;
	volatile int8_t x47 = INT8_MIN;

	t11 = ((x45<(x46<=x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 8037U;
	int32_t x51 = -1;
	uint64_t x52 = 7422LLU;
	volatile int32_t t12 = -4018;

	t12 = ((x49<(x50<=x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 15541973645LLU;
	int8_t x54 = INT8_MAX;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = 72518;

	t13 = ((x53<(x54<=x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	uint8_t x58 = 2U;
	int8_t x59 = INT8_MIN;
	volatile int64_t x60 = INT64_MIN;
	int32_t t14 = -275682717;

	t14 = ((x57<(x58<=x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1171;
	int64_t x64 = INT64_MAX;
	volatile int32_t t15 = 1018460355;

	t15 = ((x61<(x62<=x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MAX;
	int64_t x66 = -1LL;
	int32_t x67 = INT32_MIN;
	uint8_t x68 = 6U;
	volatile int32_t t16 = 133660777;

	t16 = ((x65<(x66<=x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	static int16_t x70 = INT16_MIN;
	int32_t x71 = 236082;
	int8_t x72 = INT8_MAX;
	volatile int32_t t17 = -31961619;

	t17 = ((x69<(x70<=x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1846U;
	static int16_t x75 = INT16_MIN;
	int8_t x76 = -1;

	t18 = ((x73<(x74<=x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 0U;
	int16_t x79 = INT16_MIN;
	uint64_t x80 = 49563LLU;
	static int32_t t19 = 98388216;

	t19 = ((x77<(x78<=x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 186U;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MIN;

	t20 = ((x81<(x82<=x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = -1LL;
	int16_t x88 = INT16_MIN;
	static int32_t t21 = -6314267;

	t21 = ((x85<(x86<=x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = -1;
	volatile uint32_t x91 = 91665815U;
	int8_t x92 = -1;
	int32_t t22 = 9955990;

	t22 = ((x89<(x90<=x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 33U;
	uint64_t x94 = 1LLU;
	uint64_t x95 = 6858LLU;
	int8_t x96 = 0;
	int32_t t23 = 258679;

	t23 = ((x93<(x94<=x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 479645U;
	static int16_t x98 = -1;
	static int64_t x99 = 48861LL;
	int16_t x100 = 505;
	int32_t t24 = -5;

	t24 = ((x97<(x98<=x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 10729U;
	uint32_t x102 = UINT32_MAX;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = -173841;

	t25 = ((x101<(x102<=x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 7U;
	int16_t x107 = INT16_MIN;
	int32_t t26 = 62077;

	t26 = ((x105<(x106<=x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 303LLU;
	static volatile uint8_t x110 = UINT8_MAX;
	uint64_t x111 = 231LLU;
	uint32_t x112 = 4U;
	volatile int32_t t27 = -7;

	t27 = ((x109<(x110<=x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	volatile int8_t x114 = INT8_MAX;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MAX;
	int32_t t28 = 64584972;

	t28 = ((x113<(x114<=x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MIN;
	uint8_t x118 = UINT8_MAX;
	volatile int64_t x119 = 276442895281519732LL;
	static int32_t x120 = INT32_MAX;

	t29 = ((x117<(x118<=x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 879208764U;
	uint8_t x122 = UINT8_MAX;
	int32_t x124 = -1;

	t30 = ((x121<(x122<=x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 26U;
	uint64_t x126 = 861858842666668LLU;
	uint16_t x127 = 3494U;
	uint64_t x128 = 6934500411529LLU;

	t31 = ((x125<(x126<=x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MAX;
	volatile uint16_t x131 = 1163U;
	static volatile int32_t t32 = -762885;

	t32 = ((x129<(x130<=x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x134 = 1395773877409792LLU;
	int32_t x135 = INT32_MIN;
	int64_t x136 = -1LL;
	volatile int32_t t33 = -72694;

	t33 = ((x133<(x134<=x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int32_t x139 = -842083509;
	int32_t x140 = 4;
	static volatile int32_t t34 = -53499;

	t34 = ((x137<(x138<=x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MAX;
	int8_t x143 = INT8_MAX;
	int16_t x144 = INT16_MAX;

	t35 = ((x141<(x142<=x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 0U;
	uint8_t x146 = 32U;
	uint16_t x147 = 7052U;
	volatile uint32_t x148 = 358679510U;
	static volatile int32_t t36 = -5;

	t36 = ((x145<(x146<=x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = INT64_MIN;
	volatile int16_t x152 = INT16_MIN;
	static int32_t t37 = 7830957;

	t37 = ((x149<(x150<=x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	uint64_t x154 = 1569LLU;
	int16_t x156 = -1;
	volatile int32_t t38 = -59448800;

	t38 = ((x153<(x154<=x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x158 = INT16_MAX;
	uint8_t x159 = 0U;
	volatile int32_t t39 = -62;

	t39 = ((x157<(x158<=x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	int32_t x164 = -285882838;
	int32_t t40 = 271263411;

	t40 = ((x161<(x162<=x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	uint16_t x167 = 119U;
	int16_t x168 = 0;
	volatile int32_t t41 = 60;

	t41 = ((x165<(x166<=x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	uint8_t x170 = UINT8_MAX;
	int64_t x172 = INT64_MAX;
	int32_t t42 = -987453;

	t42 = ((x169<(x170<=x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = INT32_MIN;
	int32_t t43 = -46860;

	t43 = ((x173<(x174<=x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x177 = 101LLU;
	static uint64_t x178 = UINT64_MAX;
	uint8_t x179 = 9U;
	volatile int32_t t44 = 27175717;

	t44 = ((x177<(x178<=x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x181 = 2625;
	int64_t x182 = INT64_MAX;
	static uint64_t x183 = 5346506608818535867LLU;
	int64_t x184 = -575491519072232165LL;
	volatile int32_t t45 = -1;

	t45 = ((x181<(x182<=x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -22361934;
	int64_t x186 = INT64_MIN;
	volatile int8_t x187 = INT8_MAX;
	volatile int16_t x188 = -1;
	volatile int32_t t46 = -434619;

	t46 = ((x185<(x186<=x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static volatile int16_t x190 = INT16_MAX;
	volatile uint64_t x191 = UINT64_MAX;

	t47 = ((x189<(x190<=x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 14636105U;
	int64_t x194 = -439909290LL;
	int16_t x195 = INT16_MAX;
	int64_t x196 = -1LL;
	int32_t t48 = 3487;

	t48 = ((x193<(x194<=x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 1;
	static int32_t x198 = 15;
	static int8_t x199 = INT8_MIN;
	int32_t t49 = 15551;

	t49 = ((x197<(x198<=x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	int32_t x204 = INT32_MIN;
	int32_t t50 = 5519209;

	t50 = ((x201<(x202<=x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = -1;
	int16_t x208 = INT16_MAX;
	int32_t t51 = -6;

	t51 = ((x205<(x206<=x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	volatile int64_t x211 = -1LL;
	int32_t x212 = INT32_MIN;
	int32_t t52 = 7294492;

	t52 = ((x209<(x210<=x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	int64_t x214 = -1066342406LL;
	int8_t x215 = INT8_MIN;
	volatile int32_t t53 = 897;

	t53 = ((x213<(x214<=x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = -199;
	volatile int8_t x218 = INT8_MIN;
	uint64_t x219 = UINT64_MAX;
	uint16_t x220 = 18U;
	volatile int32_t t54 = -678;

	t54 = ((x217<(x218<=x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = INT64_MIN;
	static uint8_t x223 = 10U;
	uint64_t x224 = UINT64_MAX;
	int32_t t55 = -84363918;

	t55 = ((x221<(x222<=x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MAX;
	int16_t x227 = INT16_MIN;
	static int64_t x228 = 247529524694LL;
	static volatile int32_t t56 = 481164;

	t56 = ((x225<(x226<=x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 37U;
	int32_t x231 = INT32_MAX;
	int8_t x232 = -1;
	static volatile int32_t t57 = -858652145;

	t57 = ((x229<(x230<=x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -19;
	int8_t x234 = INT8_MIN;
	uint64_t x235 = UINT64_MAX;
	static volatile int8_t x236 = 6;

	t58 = ((x233<(x234<=x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 1;
	volatile int32_t x239 = INT32_MIN;
	uint8_t x240 = UINT8_MAX;
	int32_t t59 = -2683160;

	t59 = ((x237<(x238<=x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -1;
	int32_t x242 = 2374;
	int32_t x243 = INT32_MIN;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = -109508;

	t60 = ((x241<(x242<=x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x246 = INT32_MIN;
	static int16_t x247 = -1;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t61 = 0;

	t61 = ((x245<(x246<=x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -47407;
	volatile int8_t x251 = -1;
	volatile uint64_t x252 = UINT64_MAX;

	t62 = ((x249<(x250<=x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 679246252;
	int8_t x254 = 0;
	int32_t x255 = 0;
	int64_t x256 = -1LL;
	volatile int32_t t63 = -7;

	t63 = ((x253<(x254<=x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	uint32_t x259 = UINT32_MAX;
	int16_t x260 = INT16_MIN;
	int32_t t64 = -38139157;

	t64 = ((x257<(x258<=x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MAX;
	uint32_t x263 = UINT32_MAX;
	uint64_t x264 = 2421482LLU;
	volatile int32_t t65 = 1137;

	t65 = ((x261<(x262<=x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x266 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t66 = -1515492;

	t66 = ((x265<(x266<=x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 2U;
	uint8_t x271 = UINT8_MAX;
	volatile int64_t x272 = INT64_MIN;
	volatile int32_t t67 = 65714908;

	t67 = ((x269<(x270<=x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x275 = 156112969U;
	int64_t x276 = 27196510LL;

	t68 = ((x273<(x274<=x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -1;
	uint16_t x279 = 278U;
	volatile uint32_t x280 = 82U;
	volatile int32_t t69 = -431781180;

	t69 = ((x277<(x278<=x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	static uint16_t x282 = 4U;
	uint8_t x283 = UINT8_MAX;
	volatile int8_t x284 = -38;
	int32_t t70 = -422683;

	t70 = ((x281<(x282<=x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	volatile int8_t x286 = INT8_MIN;
	int32_t x287 = 54;
	int64_t x288 = -1LL;

	t71 = ((x285<(x286<=x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = -1;
	int32_t x290 = 8042937;
	static uint16_t x291 = 7U;
	int32_t t72 = -26;

	t72 = ((x289<(x290<=x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x294 = 31847409852081785LL;
	volatile int64_t x295 = INT64_MIN;
	static volatile int32_t t73 = 422093579;

	t73 = ((x293<(x294<=x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = -1;
	volatile uint16_t x299 = 1795U;
	static volatile int16_t x300 = -1;
	int32_t t74 = -91524075;

	t74 = ((x297<(x298<=x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	int32_t x302 = 1082;
	uint8_t x303 = 0U;

	t75 = ((x301<(x302<=x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MIN;
	volatile uint16_t x306 = 9U;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 20925956;

	t76 = ((x305<(x306<=x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 318LLU;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MAX;
	static volatile int32_t t77 = 5222;

	t77 = ((x309<(x310<=x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x314 = INT8_MIN;
	static volatile int32_t t78 = 703200;

	t78 = ((x313<(x314<=x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int8_t x318 = INT8_MIN;
	volatile int32_t x319 = INT32_MAX;
	volatile int32_t t79 = 60738928;

	t79 = ((x317<(x318<=x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 184722U;
	int32_t x323 = INT32_MIN;

	t80 = ((x321<(x322<=x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	volatile uint64_t x328 = 3LLU;

	t81 = ((x325<(x326<=x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	static int32_t x330 = -1;
	uint32_t x331 = UINT32_MAX;
	uint8_t x332 = 3U;
	volatile int32_t t82 = -36;

	t82 = ((x329<(x330<=x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 54U;
	static int64_t x334 = -281598598LL;
	volatile uint8_t x335 = UINT8_MAX;
	int16_t x336 = -1;
	volatile int32_t t83 = 59279;

	t83 = ((x333<(x334<=x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = 1518119328LL;
	volatile uint16_t x338 = 640U;
	static int32_t x340 = 63457;
	static volatile int32_t t84 = 521958631;

	t84 = ((x337<(x338<=x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x343 = -379;
	volatile int64_t x344 = INT64_MIN;
	static volatile int32_t t85 = -1047729040;

	t85 = ((x341<(x342<=x343))<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	static uint16_t x346 = UINT16_MAX;
	uint8_t x347 = 30U;
	uint16_t x348 = UINT16_MAX;
	int32_t t86 = 17212226;

	t86 = ((x345<(x346<=x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static uint8_t x350 = 14U;
	int32_t x351 = 28;
	int32_t x352 = -242;
	static volatile int32_t t87 = 343185;

	t87 = ((x349<(x350<=x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	uint8_t x354 = 40U;
	int8_t x355 = 8;
	static volatile int32_t t88 = 17360;

	t88 = ((x353<(x354<=x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile int64_t x359 = INT64_MIN;
	uint64_t x360 = 1952976LLU;
	int32_t t89 = 0;

	t89 = ((x357<(x358<=x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	int64_t x363 = -124886LL;
	int8_t x364 = 12;
	volatile int32_t t90 = -84190854;

	t90 = ((x361<(x362<=x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	int64_t x366 = INT64_MAX;
	uint16_t x368 = 58U;
	int32_t t91 = 151;

	t91 = ((x365<(x366<=x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x369 = INT16_MAX;
	uint64_t x370 = 3LLU;
	uint8_t x371 = 1U;
	int8_t x372 = -1;
	static int32_t t92 = 2;

	t92 = ((x369<(x370<=x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1LL;
	int8_t x374 = INT8_MIN;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -16061106;

	t93 = ((x373<(x374<=x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = 4U;
	int32_t x378 = INT32_MIN;
	uint16_t x379 = 11U;
	int32_t t94 = -14;

	t94 = ((x377<(x378<=x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 116968579LLU;
	int32_t x382 = INT32_MIN;
	static volatile int32_t t95 = 666038;

	t95 = ((x381<(x382<=x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x385 = INT16_MAX;
	int8_t x386 = INT8_MIN;
	uint64_t x387 = 24245LLU;
	volatile int8_t x388 = -1;
	static int32_t t96 = -425;

	t96 = ((x385<(x386<=x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x391 = INT8_MIN;
	int32_t t97 = -1391787;

	t97 = ((x389<(x390<=x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = UINT8_MAX;
	int32_t x394 = INT32_MAX;
	uint32_t x395 = 77872U;
	int8_t x396 = 22;
	int32_t t98 = 1;

	t98 = ((x393<(x394<=x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x397 = 2097391239025LLU;
	volatile uint64_t x398 = UINT64_MAX;
	static uint16_t x399 = UINT16_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 5211;

	t99 = ((x397<(x398<=x399))<=x400);

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

