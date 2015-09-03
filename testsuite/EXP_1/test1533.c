#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = -7591366LL;
int64_t x10 = INT64_MIN;
static int16_t x22 = INT16_MIN;
static volatile int32_t x24 = INT32_MIN;
int8_t x26 = INT8_MAX;
volatile uint64_t t6 = UINT64_MAX;
volatile int16_t x31 = INT16_MAX;
static volatile uint32_t t7 = 2412U;
static int64_t x36 = INT64_MIN;
static int32_t x42 = INT32_MIN;
static int8_t x43 = -1;
int32_t x51 = INT32_MAX;
volatile uint64_t x54 = 447634896LLU;
int64_t x55 = 720615912459658414LL;
int64_t t13 = -2245LL;
int16_t x59 = -1;
int8_t x61 = INT8_MIN;
uint32_t x64 = UINT32_MAX;
int64_t t15 = -2855671082705119921LL;
int8_t x65 = 23;
int64_t t16 = 755899036LL;
int64_t x69 = 12LL;
int8_t x72 = -1;
static int64_t x73 = INT64_MAX;
int8_t x77 = INT8_MIN;
int8_t x78 = -1;
static int8_t x79 = INT8_MIN;
int64_t x80 = INT64_MAX;
static int16_t x82 = 21;
uint16_t x87 = 1418U;
int16_t x91 = INT16_MAX;
int16_t x95 = -1;
uint8_t x97 = 2U;
static int32_t x99 = -20934010;
volatile int32_t t24 = 1842;
int32_t x104 = 0;
uint32_t t26 = 1U;
uint8_t x109 = 77U;
static int16_t x114 = -43;
static int32_t t28 = -57892864;
int32_t x119 = INT32_MIN;
uint32_t x122 = 45007357U;
int32_t x124 = INT32_MIN;
uint16_t x125 = 109U;
static int32_t x130 = -1;
int16_t x131 = -1;
int32_t x134 = INT32_MIN;
uint8_t x139 = UINT8_MAX;
uint64_t t35 = 421780312941946LLU;
volatile int32_t x149 = 336;
volatile int32_t t37 = -43638167;
uint64_t t40 = UINT64_MAX;
static int8_t x171 = INT8_MIN;
volatile int64_t x174 = INT64_MIN;
volatile uint64_t x176 = 3910287416376LLU;
int16_t x177 = -7872;
static int32_t x181 = 449315;
uint32_t x182 = UINT32_MAX;
int16_t x186 = 312;
int32_t x188 = -11791604;
int16_t x190 = 10288;
uint32_t x197 = UINT32_MAX;
uint8_t x198 = UINT8_MAX;
uint32_t t49 = 44U;
volatile int32_t x204 = -92775;
volatile int32_t t52 = -115960;
volatile int32_t t53 = 2319;
uint32_t x225 = 0U;
volatile uint32_t x231 = 0U;
int8_t x232 = -22;
volatile uint64_t x234 = 1170LLU;
uint64_t x236 = 742095889499568831LLU;
int32_t t58 = 0;
volatile int64_t x242 = INT64_MAX;
uint32_t x246 = UINT32_MAX;
volatile int16_t x249 = INT16_MIN;
static volatile uint16_t x250 = 15159U;
uint64_t x251 = 12152LLU;
int16_t x254 = INT16_MIN;
volatile int64_t x264 = -1LL;
static uint8_t x269 = 125U;
uint16_t x272 = UINT16_MAX;
uint16_t x288 = 10700U;
int16_t x290 = 3;
static int8_t x292 = INT8_MIN;
volatile int32_t t71 = 1732;
int64_t x300 = INT64_MAX;
static volatile int64_t t73 = INT64_MAX;
static int16_t x304 = INT16_MAX;
static int32_t x306 = INT32_MIN;
static volatile uint64_t t75 = 74962813618535LLU;
volatile uint32_t t76 = 1U;
uint8_t x314 = 1U;
int8_t x319 = -1;
int16_t x325 = 67;
static volatile int32_t t81 = 3026856;
volatile int32_t x333 = INT32_MAX;
static int16_t x335 = INT16_MIN;
int64_t t84 = 581122181116588389LL;
static int16_t x348 = -1;
int16_t x349 = -1;
int64_t x358 = -216459326LL;
uint32_t x359 = UINT32_MAX;
volatile int16_t x360 = INT16_MIN;
int16_t x362 = -1;
int64_t x372 = INT64_MIN;
uint8_t x389 = UINT8_MAX;
static int16_t x390 = -2052;
int32_t t99 = -358039847;


void f0(void) {
	volatile int8_t x1 = -2;
	int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	int32_t x4 = -1;

	t0 = (((x1<=x2)+x3)|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 143890651802LLU;
	int16_t x6 = 5;
	volatile int32_t x7 = 1;
	int64_t x8 = -6805945484195LL;
	volatile int64_t t1 = 3961LL;

	t1 = (((x5<=x6)+x7)|x8);

	if (t1 != -6805945484195LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int8_t x11 = INT8_MIN;
	static int16_t x12 = INT16_MAX;
	int32_t t2 = 0;

	t2 = (((x9<=x10)+x11)|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 13U;
	int8_t x14 = INT8_MIN;
	int16_t x15 = -1;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = 86499387;

	t3 = (((x13<=x14)+x15)|x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int16_t x18 = 1;
	int32_t x19 = INT32_MIN;
	volatile uint32_t x20 = 2U;
	uint32_t t4 = 10393U;

	t4 = (((x17<=x18)+x19)|x20);

	if (t4 != 2147483650U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	static volatile int16_t x23 = INT16_MIN;
	int32_t t5 = -4;

	t5 = (((x21<=x22)+x23)|x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 119U;
	uint64_t x27 = 240105425LLU;
	int64_t x28 = -1LL;

	t6 = (((x25<=x26)+x27)|x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 9932287038LLU;
	uint32_t x30 = 20835U;
	uint32_t x32 = 14U;

	t7 = (((x29<=x30)+x31)|x32);

	if (t7 != 32767U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 2173U;
	static int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MIN;
	volatile int64_t t8 = 1386086LL;

	t8 = (((x33<=x34)+x35)|x36);

	if (t8 != -32767LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 107369LL;
	static uint16_t x38 = 1U;
	int8_t x39 = 11;
	int64_t x40 = -1LL;
	int64_t t9 = -4LL;

	t9 = (((x37<=x38)+x39)|x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	int16_t x44 = INT16_MAX;
	int32_t t10 = 22463221;

	t10 = (((x41<=x42)+x43)|x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	uint64_t x46 = 36141774LLU;
	uint64_t x47 = UINT64_MAX;
	static uint64_t x48 = 5064563264787280142LLU;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (((x45<=x46)+x47)|x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -10;
	int32_t x50 = INT32_MIN;
	int16_t x52 = INT16_MAX;
	static volatile int32_t t12 = INT32_MAX;

	t12 = (((x49<=x50)+x51)|x52);

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int16_t x56 = INT16_MIN;

	t13 = (((x53<=x54)+x55)|x56);

	if (t13 != -6994LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int16_t x58 = -949;
	int16_t x60 = 489;
	volatile int32_t t14 = -3;

	t14 = (((x57<=x58)+x59)|x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MAX;
	int64_t x63 = INT64_MIN;

	t15 = (((x61<=x62)+x63)|x64);

	if (t15 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = -1LL;
	uint8_t x67 = UINT8_MAX;
	volatile int64_t x68 = INT64_MIN;

	t16 = (((x65<=x66)+x67)|x68);

	if (t16 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = -1LL;
	volatile int16_t x71 = 61;
	volatile int32_t t17 = 15;

	t17 = (((x69<=x70)+x71)|x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x74 = 56U;
	int32_t x75 = -59;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 1;

	t18 = (((x73<=x74)+x75)|x76);

	if (t18 != -59) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t t19 = -6138803929105636LL;

	t19 = (((x77<=x78)+x79)|x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 19U;
	static volatile uint32_t x83 = UINT32_MAX;
	volatile int32_t x84 = INT32_MIN;
	uint32_t t20 = 865058U;

	t20 = (((x81<=x82)+x83)|x84);

	if (t20 != 2147483648U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x85 = 124LLU;
	volatile int16_t x86 = INT16_MAX;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -173;

	t21 = (((x85<=x86)+x87)|x88);

	if (t21 != -31349) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	uint64_t x90 = 9519398556033LLU;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 28;

	t22 = (((x89<=x90)+x91)|x92);

	if (t22 != 32895) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int64_t x94 = 116517476638318902LL;
	static int8_t x96 = -19;
	volatile int32_t t23 = 1955153;

	t23 = (((x93<=x94)+x95)|x96);

	if (t23 != -19) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MAX;
	int8_t x100 = INT8_MAX;

	t24 = (((x97<=x98)+x99)|x100);

	if (t24 != -20933889) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = -1;
	static uint16_t x102 = 6707U;
	volatile uint8_t x103 = 1U;
	volatile int32_t t25 = -8331;

	t25 = (((x101<=x102)+x103)|x104);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	static volatile int32_t x106 = -1;
	int16_t x107 = INT16_MIN;
	volatile uint32_t x108 = 1U;

	t26 = (((x105<=x106)+x107)|x108);

	if (t26 != 4294934529U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x110 = INT64_MIN;
	int32_t x111 = INT32_MIN;
	volatile int16_t x112 = INT16_MIN;
	int32_t t27 = 21323001;

	t27 = (((x109<=x110)+x111)|x112);

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int32_t x115 = -1;
	uint16_t x116 = UINT16_MAX;

	t28 = (((x113<=x114)+x115)|x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = -705740618641488004LL;
	int16_t x118 = INT16_MIN;
	volatile int32_t x120 = 31735;
	int32_t t29 = 2400;

	t29 = (((x117<=x118)+x119)|x120);

	if (t29 != -2147451913) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 808;
	uint64_t x123 = UINT64_MAX;
	volatile uint64_t t30 = 209228316010350LLU;

	t30 = (((x121<=x122)+x123)|x124);

	if (t30 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -57244689;
	int8_t x127 = INT8_MIN;
	volatile int8_t x128 = -1;
	static int32_t t31 = -21233;

	t31 = (((x125<=x126)+x127)|x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -41956321455LL;
	volatile uint16_t x132 = 61U;
	int32_t t32 = -85;

	t32 = (((x129<=x130)+x131)|x132);

	if (t32 != 61) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x135 = 0U;
	static volatile uint32_t x136 = 769747U;
	volatile uint32_t t33 = 149016U;

	t33 = (((x133<=x134)+x135)|x136);

	if (t33 != 769747U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 18U;
	uint8_t x138 = UINT8_MAX;
	int32_t x140 = INT32_MIN;
	static int32_t t34 = 309067;

	t34 = (((x137<=x138)+x139)|x140);

	if (t34 != -2147483392) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 33438;
	int32_t x142 = INT32_MIN;
	static int16_t x143 = INT16_MAX;
	static uint64_t x144 = 2LLU;

	t35 = (((x141<=x142)+x143)|x144);

	if (t35 != 32767LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = -1;
	static uint32_t x146 = 3204U;
	int64_t x147 = INT64_MAX;
	int32_t x148 = INT32_MIN;
	volatile int64_t t36 = 611251LL;

	t36 = (((x145<=x146)+x147)|x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MAX;
	static int16_t x151 = -1;
	int32_t x152 = -1;

	t37 = (((x149<=x150)+x151)|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = 0U;
	uint16_t x154 = UINT16_MAX;
	int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = 9;

	t38 = (((x153<=x154)+x155)|x156);

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x157 = 559200U;
	volatile uint16_t x158 = 17U;
	int8_t x159 = -1;
	volatile int64_t x160 = INT64_MIN;
	static int64_t t39 = 57847509661LL;

	t39 = (((x157<=x158)+x159)|x160);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 2U;
	static int8_t x162 = INT8_MIN;
	int16_t x163 = -235;
	static uint64_t x164 = UINT64_MAX;

	t40 = (((x161<=x162)+x163)|x164);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 21U;
	uint16_t x166 = 117U;
	volatile int64_t x167 = -1219LL;
	static int8_t x168 = INT8_MIN;
	int64_t t41 = -1722319LL;

	t41 = (((x165<=x166)+x167)|x168);

	if (t41 != -66LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 41432326057181071LL;
	uint8_t x170 = 1U;
	volatile uint16_t x172 = UINT16_MAX;
	static volatile int32_t t42 = 3912276;

	t42 = (((x169<=x170)+x171)|x172);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int32_t x175 = 8;
	volatile uint64_t t43 = 16198620LLU;

	t43 = (((x173<=x174)+x175)|x176);

	if (t43 != 3910287416376LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = 30177997LL;
	int64_t x179 = -1LL;
	volatile int32_t x180 = -765;
	int64_t t44 = -31442600LL;

	t44 = (((x177<=x178)+x179)|x180);

	if (t44 != -765LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x183 = 7U;
	static uint8_t x184 = UINT8_MAX;
	static int32_t t45 = 38682173;

	t45 = (((x181<=x182)+x183)|x184);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x185 = -191035;
	uint32_t x187 = UINT32_MAX;
	static volatile uint32_t t46 = 115734269U;

	t46 = (((x185<=x186)+x187)|x188);

	if (t46 != 4283175692U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	uint8_t x191 = 51U;
	int64_t x192 = 0LL;
	int64_t t47 = 123958452LL;

	t47 = (((x189<=x190)+x191)|x192);

	if (t47 != 52LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -2094694;
	static volatile int8_t x194 = 2;
	int64_t x195 = -1LL;
	uint16_t x196 = 5U;
	int64_t t48 = -42978354979017551LL;

	t48 = (((x193<=x194)+x195)|x196);

	if (t48 != 5LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x199 = 50U;
	int8_t x200 = INT8_MIN;

	t49 = (((x197<=x198)+x199)|x200);

	if (t49 != 4294967218U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 13842;
	int8_t x202 = -2;
	int16_t x203 = -1;
	volatile int32_t t50 = -30;

	t50 = (((x201<=x202)+x203)|x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 12531U;
	static uint64_t x206 = 108827186784627111LLU;
	int8_t x207 = -27;
	int32_t x208 = INT32_MIN;
	static int32_t t51 = -4005;

	t51 = (((x205<=x206)+x207)|x208);

	if (t51 != -26) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -10620158LL;
	static int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = 3U;

	t52 = (((x213<=x214)+x215)|x216);

	if (t52 != -32765) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = -1LL;
	volatile int8_t x218 = 3;
	int32_t x219 = -1;
	volatile int8_t x220 = INT8_MAX;

	t53 = (((x217<=x218)+x219)|x220);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x221 = -1;
	uint16_t x222 = 18494U;
	uint8_t x223 = UINT8_MAX;
	uint16_t x224 = 0U;
	volatile int32_t t54 = 81;

	t54 = (((x221<=x222)+x223)|x224);

	if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x226 = -42;
	volatile uint8_t x227 = 4U;
	static uint8_t x228 = UINT8_MAX;
	int32_t t55 = -63283;

	t55 = (((x225<=x226)+x227)|x228);

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	int32_t x230 = -1;
	static uint32_t t56 = 44U;

	t56 = (((x229<=x230)+x231)|x232);

	if (t56 != 4294967275U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 7U;
	volatile uint16_t x235 = 1669U;
	static uint64_t t57 = 5899LLU;

	t57 = (((x233<=x234)+x235)|x236);

	if (t57 != 742095889499569855LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x237 = UINT8_MAX;
	volatile int32_t x238 = -1;
	int8_t x239 = INT8_MIN;
	static int8_t x240 = -1;

	t58 = (((x237<=x238)+x239)|x240);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = 10;
	uint8_t x243 = 1U;
	volatile int32_t x244 = -1;
	volatile int32_t t59 = 0;

	t59 = (((x241<=x242)+x243)|x244);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = UINT64_MAX;
	uint8_t x247 = 87U;
	static int8_t x248 = INT8_MIN;
	int32_t t60 = -178942916;

	t60 = (((x245<=x246)+x247)|x248);

	if (t60 != -41) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x252 = UINT16_MAX;
	static uint64_t t61 = 61LLU;

	t61 = (((x249<=x250)+x251)|x252);

	if (t61 != 65535LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x253 = -2;
	static int64_t x255 = 3166503175628031829LL;
	static int64_t x256 = INT64_MIN;
	int64_t t62 = 623019512979180493LL;

	t62 = (((x253<=x254)+x255)|x256);

	if (t62 != -6056868861226743979LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = 113;
	static volatile uint64_t x258 = 1798LLU;
	int16_t x259 = 611;
	static uint8_t x260 = UINT8_MAX;
	volatile int32_t t63 = -7607;

	t63 = (((x257<=x258)+x259)|x260);

	if (t63 != 767) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x261 = -1;
	uint8_t x262 = 0U;
	int64_t x263 = 4144639667756558330LL;
	static int64_t t64 = 17514LL;

	t64 = (((x261<=x262)+x263)|x264);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 1U;
	volatile int32_t x266 = INT32_MAX;
	uint64_t x267 = 27545352223433LLU;
	static volatile int64_t x268 = INT64_MIN;
	volatile uint64_t t65 = 8279259122581642LLU;

	t65 = (((x265<=x266)+x267)|x268);

	if (t65 != 9223399582206999242LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x270 = -11;
	static volatile uint8_t x271 = 113U;
	int32_t t66 = -357;

	t66 = (((x269<=x270)+x271)|x272);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MAX;
	uint32_t x274 = 26103U;
	int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MIN;
	volatile int64_t t67 = -3933762LL;

	t67 = (((x273<=x274)+x275)|x276);

	if (t67 != -127LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1076;
	int64_t x278 = 2752849811750478LL;
	int32_t x279 = -1;
	uint64_t x280 = 208828457208LLU;
	uint64_t t68 = 16354036LLU;

	t68 = (((x277<=x278)+x279)|x280);

	if (t68 != 208828457208LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x281 = 418U;
	uint64_t x282 = 8LLU;
	static int32_t x283 = -15;
	static int16_t x284 = INT16_MAX;
	int32_t t69 = 120427668;

	t69 = (((x281<=x282)+x283)|x284);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x285 = INT16_MIN;
	int8_t x286 = -22;
	static int16_t x287 = 28;
	static int32_t t70 = -11;

	t70 = (((x285<=x286)+x287)|x288);

	if (t70 != 10717) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x291 = -2;

	t71 = (((x289<=x290)+x291)|x292);

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x293 = INT16_MIN;
	volatile int32_t x294 = -1576;
	static int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t72 = -100810295;

	t72 = (((x293<=x294)+x295)|x296);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x297 = INT16_MAX;
	static int64_t x298 = INT64_MAX;
	uint16_t x299 = 19211U;

	t73 = (((x297<=x298)+x299)|x300);

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = INT64_MIN;
	static uint8_t x302 = 117U;
	static int64_t x303 = 798193LL;
	volatile int64_t t74 = 17096788368LL;

	t74 = (((x301<=x302)+x303)|x304);

	if (t74 != 819199LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = -1;
	uint64_t x307 = 481244LLU;
	int32_t x308 = 24;

	t75 = (((x305<=x306)+x307)|x308);

	if (t75 != 481244LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MAX;
	int32_t x310 = 4120411;
	static uint32_t x311 = 502768U;
	int32_t x312 = -100715352;

	t76 = (((x309<=x310)+x311)|x312);

	if (t76 != 4194287609U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x313 = UINT64_MAX;
	volatile int32_t x315 = -5;
	uint8_t x316 = 43U;
	volatile int32_t t77 = -30;

	t77 = (((x313<=x314)+x315)|x316);

	if (t77 != -5) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = 29U;
	int64_t x318 = -1LL;
	uint32_t x320 = 35665U;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (((x317<=x318)+x319)|x320);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = 5U;
	uint16_t x322 = UINT16_MAX;
	volatile uint8_t x323 = 83U;
	int64_t x324 = INT64_MIN;
	int64_t t79 = 1623LL;

	t79 = (((x321<=x322)+x323)|x324);

	if (t79 != -9223372036854775724LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x326 = INT16_MIN;
	int8_t x327 = -19;
	int64_t x328 = -26353LL;
	static int64_t t80 = -168209414LL;

	t80 = (((x325<=x326)+x327)|x328);

	if (t80 != -17LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = -1LL;
	int8_t x331 = 0;
	int8_t x332 = INT8_MIN;

	t81 = (((x329<=x330)+x331)|x332);

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x334 = -86;
	uint16_t x336 = 34U;
	volatile int32_t t82 = -13;

	t82 = (((x333<=x334)+x335)|x336);

	if (t82 != -32734) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x337 = -1;
	int64_t x338 = 3126359531725400686LL;
	int32_t x339 = -437379159;
	int64_t x340 = INT64_MIN;
	int64_t t83 = 99LL;

	t83 = (((x337<=x338)+x339)|x340);

	if (t83 != -437379158LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x341 = 2535960U;
	int16_t x342 = INT16_MAX;
	int64_t x343 = -1LL;
	uint16_t x344 = 696U;

	t84 = (((x341<=x342)+x343)|x344);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x345 = 470;
	int16_t x346 = INT16_MAX;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t t85 = -14;

	t85 = (((x345<=x346)+x347)|x348);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x350 = INT32_MIN;
	volatile uint16_t x351 = 40U;
	int32_t x352 = -34776;
	int32_t t86 = 0;

	t86 = (((x349<=x350)+x351)|x352);

	if (t86 != -34776) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = INT8_MIN;
	uint32_t x354 = 98707840U;
	uint32_t x355 = 50835U;
	int64_t x356 = -1LL;
	volatile int64_t t87 = 1LL;

	t87 = (((x353<=x354)+x355)|x356);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x357 = INT32_MAX;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (((x357<=x358)+x359)|x360);

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x361 = -17543LL;
	static int64_t x363 = -71515035181LL;
	uint8_t x364 = 7U;
	volatile int64_t t89 = 21LL;

	t89 = (((x361<=x362)+x363)|x364);

	if (t89 != -71515035177LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = INT32_MIN;
	int64_t x366 = -1LL;
	int16_t x367 = INT16_MAX;
	volatile int32_t x368 = INT32_MAX;
	int32_t t90 = INT32_MAX;

	t90 = (((x365<=x366)+x367)|x368);

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x369 = 3LLU;
	int32_t x370 = INT32_MIN;
	volatile int8_t x371 = INT8_MAX;
	volatile int64_t t91 = -910LL;

	t91 = (((x369<=x370)+x371)|x372);

	if (t91 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x373 = UINT8_MAX;
	volatile int8_t x374 = INT8_MAX;
	int8_t x375 = 7;
	volatile uint64_t x376 = 3LLU;
	static uint64_t t92 = 26LLU;

	t92 = (((x373<=x374)+x375)|x376);

	if (t92 != 7LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x377 = 2635U;
	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	uint64_t x380 = UINT64_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = (((x377<=x378)+x379)|x380);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = INT16_MAX;
	int64_t x382 = 29886991256LL;
	int64_t x383 = INT64_MIN;
	volatile int64_t x384 = 3LL;
	volatile int64_t t94 = -47937120483024LL;

	t94 = (((x381<=x382)+x383)|x384);

	if (t94 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x385 = 1U;
	int8_t x386 = INT8_MIN;
	volatile uint32_t x387 = UINT32_MAX;
	uint8_t x388 = UINT8_MAX;
	static volatile uint32_t t95 = UINT32_MAX;

	t95 = (((x385<=x386)+x387)|x388);

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x391 = UINT16_MAX;
	uint16_t x392 = 46U;
	volatile int32_t t96 = -366310;

	t96 = (((x389<=x390)+x391)|x392);

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = INT32_MAX;
	volatile int32_t x394 = -1;
	int8_t x395 = 1;
	int32_t x396 = 64434516;
	static int32_t t97 = 15469;

	t97 = (((x393<=x394)+x395)|x396);

	if (t97 != 64434517) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = INT16_MIN;
	static uint8_t x398 = 2U;
	int64_t x399 = -12814647874733LL;
	volatile int64_t x400 = INT64_MIN;
	static volatile int64_t t98 = 1707814872074LL;

	t98 = (((x397<=x398)+x399)|x400);

	if (t98 != -12814647874732LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x401 = INT8_MIN;
	static int8_t x402 = 15;
	volatile int16_t x403 = -1;
	int8_t x404 = -9;

	t99 = (((x401<=x402)+x403)|x404);

	if (t99 != -9) { NG(); } else { ; }
	
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

