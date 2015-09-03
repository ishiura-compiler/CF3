#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x8 = INT8_MIN;
static int32_t t4 = -7649723;
static int32_t x34 = -1;
int32_t t8 = -4;
int64_t x39 = -1LL;
int8_t x42 = 10;
int16_t x44 = INT16_MAX;
static volatile int32_t t10 = 53;
int32_t x46 = INT32_MIN;
volatile uint8_t x48 = 1U;
int32_t t11 = -132;
int32_t t12 = 2492504;
int8_t x54 = INT8_MAX;
volatile int16_t x64 = -711;
volatile int32_t t15 = -45;
volatile uint16_t x66 = 7U;
static uint64_t x68 = 4469926037769717LLU;
volatile uint64_t t16 = 37930LLU;
volatile int64_t x79 = -5333932897786469LL;
int8_t x89 = 54;
uint64_t x97 = UINT64_MAX;
static int8_t x118 = 16;
int16_t x122 = -1;
static volatile uint16_t x125 = 13478U;
uint16_t x129 = 82U;
int8_t x130 = INT8_MIN;
uint8_t x137 = 117U;
int16_t x138 = INT16_MIN;
uint32_t t35 = 234719944U;
int8_t x153 = 25;
volatile int16_t x157 = INT16_MIN;
int32_t t38 = -16;
static volatile int32_t x164 = 787614;
volatile int32_t x176 = INT32_MIN;
int16_t x180 = 1628;
static uint16_t x185 = 5U;
int16_t x191 = INT16_MIN;
uint64_t t46 = 194601471525LLU;
static int64_t x195 = INT64_MIN;
int16_t x204 = INT16_MIN;
volatile int64_t x213 = 1969338764121LL;
int32_t t52 = -130148;
int16_t x220 = INT16_MIN;
int8_t x225 = INT8_MAX;
int32_t t56 = 1;
volatile int8_t x236 = INT8_MAX;
int64_t x238 = 3588LL;
int16_t x239 = -1;
volatile int32_t t58 = -828136759;
int8_t x244 = INT8_MIN;
static int32_t x245 = INT32_MAX;
int64_t x248 = INT64_MIN;
volatile int64_t x250 = 1978442439362LL;
static int32_t x266 = INT32_MIN;
static int16_t x267 = 1748;
static int64_t t67 = -61706439969LL;
uint8_t x283 = UINT8_MAX;
uint32_t x291 = 143U;
int8_t x292 = INT8_MAX;
static int16_t x294 = INT16_MIN;
volatile int64_t t73 = 916140139954334447LL;
static uint32_t x306 = 549738U;
uint8_t x307 = UINT8_MAX;
int64_t x310 = INT64_MIN;
int32_t x312 = -1385;
int32_t t75 = -1;
int32_t t77 = 1587921;
uint64_t x324 = 131755939251976030LLU;
static int32_t x325 = -1;
volatile int16_t x328 = INT16_MIN;
volatile int32_t t79 = 4005927;
int16_t x330 = INT16_MIN;
volatile int8_t x342 = -7;
int64_t x344 = INT64_MIN;
int16_t x347 = -19;
uint64_t t84 = 6637725403LLU;
int32_t t85 = 42394302;
int8_t x354 = 7;
volatile uint8_t x356 = UINT8_MAX;
uint32_t x361 = 118U;
int8_t x368 = -1;
int32_t t89 = -56641446;
static uint64_t x369 = UINT64_MAX;
int8_t x371 = INT8_MAX;
static volatile uint32_t t90 = 1215865753U;
volatile uint16_t x374 = 14U;
int64_t x379 = INT64_MIN;
volatile int32_t t92 = 19532410;
uint16_t x384 = UINT16_MAX;
int32_t t94 = 1;
volatile uint16_t x392 = 857U;
int8_t x394 = INT8_MIN;
int64_t x398 = 261177972157114471LL;
static int64_t x399 = 1LL;
int32_t x401 = 850281;
int32_t x404 = INT32_MIN;
int8_t x407 = INT8_MAX;


void f0(void) {
	int64_t x1 = -7006881LL;
	int8_t x2 = INT8_MAX;
	int64_t x3 = -1LL;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 148104723U;

	t0 = ((x1<=(x2%x3))&x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	volatile int16_t x6 = INT16_MAX;
	int64_t x7 = INT64_MAX;
	static volatile int32_t t1 = 6;

	t1 = ((x5<=(x6%x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 19U;
	static int64_t x10 = 6LL;
	volatile uint16_t x11 = 1217U;
	volatile int8_t x12 = INT8_MAX;
	static int32_t t2 = 4783;

	t2 = ((x9<=(x10%x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = INT32_MIN;
	static uint16_t x14 = 0U;
	volatile int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 60083;

	t3 = ((x13<=(x14%x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	static volatile uint16_t x18 = 14404U;
	int16_t x19 = INT16_MIN;
	int32_t x20 = -10;

	t4 = ((x17<=(x18%x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int8_t x22 = 1;
	static volatile uint32_t x23 = UINT32_MAX;
	int8_t x24 = -13;
	int32_t t5 = -261794;

	t5 = ((x21<=(x22%x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MAX;
	int32_t x26 = 1499051;
	uint64_t x27 = 20571LLU;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -11;

	t6 = ((x25<=(x26%x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = INT64_MIN;
	int64_t x32 = INT64_MIN;
	static volatile int64_t t7 = 192665839230LL;

	t7 = ((x29<=(x30%x31))&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 21003LLU;
	static int32_t x35 = -32;
	static int16_t x36 = INT16_MAX;

	t8 = ((x33<=(x34%x35))&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 1U;
	static uint64_t x38 = 1271635925016LLU;
	int8_t x40 = -1;
	volatile int32_t t9 = -428327128;

	t9 = ((x37<=(x38%x39))&x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int16_t x43 = -1;

	t10 = ((x41<=(x42%x43))&x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -16;
	uint8_t x47 = 94U;

	t11 = ((x45<=(x46%x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 272U;
	static volatile int16_t x50 = INT16_MIN;
	int8_t x51 = -1;
	int16_t x52 = INT16_MAX;

	t12 = ((x49<=(x50%x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 8393915140LLU;
	volatile int8_t x55 = INT8_MIN;
	volatile uint32_t x56 = UINT32_MAX;
	static volatile uint32_t t13 = 39U;

	t13 = ((x53<=(x54%x55))&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 138188547236089820LLU;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = 1824663301542LLU;

	t14 = ((x57<=(x58%x59))&x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MAX;
	uint32_t x63 = 14U;

	t15 = ((x61<=(x62%x63))&x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	static uint64_t x67 = UINT64_MAX;

	t16 = ((x65<=(x66%x67))&x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 219U;
	int8_t x70 = INT8_MAX;
	uint64_t x71 = 3487381001940723137LLU;
	uint8_t x72 = 19U;
	static volatile int32_t t17 = 0;

	t17 = ((x69<=(x70%x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = 65366896051LL;
	uint16_t x78 = UINT16_MAX;
	uint64_t x80 = 4009879553844055LLU;
	volatile uint64_t t18 = 1021229LLU;

	t18 = ((x77<=(x78%x79))&x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MAX;
	int64_t x82 = INT64_MAX;
	int16_t x83 = -1;
	int16_t x84 = -1;
	static int32_t t19 = 16;

	t19 = ((x81<=(x82%x83))&x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -830;
	int16_t x86 = -1;
	static int32_t x87 = -1010;
	uint32_t x88 = UINT32_MAX;
	uint32_t t20 = 448888U;

	t20 = ((x85<=(x86%x87))&x88);

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = -30491800001773250LL;
	volatile uint16_t x91 = 27446U;
	uint16_t x92 = 7U;
	volatile int32_t t21 = 23;

	t21 = ((x89<=(x90%x91))&x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = -1;
	volatile int64_t x95 = INT64_MIN;
	int16_t x96 = -1;
	int32_t t22 = -159;

	t22 = ((x93<=(x94%x95))&x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = -45727177697LL;
	int16_t x99 = -1;
	static int32_t x100 = INT32_MIN;
	static volatile int32_t t23 = -5927;

	t23 = ((x97<=(x98%x99))&x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = 4;
	volatile int8_t x102 = INT8_MAX;
	int32_t x103 = 923;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t24 = -23802;

	t24 = ((x101<=(x102%x103))&x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x105 = 3811U;
	static int8_t x106 = -1;
	int64_t x107 = INT64_MIN;
	int16_t x108 = -1;
	int32_t t25 = 493024;

	t25 = ((x105<=(x106%x107))&x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = INT8_MIN;
	int8_t x110 = 7;
	int8_t x111 = INT8_MIN;
	int64_t x112 = 14781399LL;
	static int64_t t26 = -1393836LL;

	t26 = ((x109<=(x110%x111))&x112);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MAX;
	int16_t x114 = INT16_MIN;
	int8_t x115 = -1;
	int16_t x116 = INT16_MAX;
	int32_t t27 = 56652096;

	t27 = ((x113<=(x114%x115))&x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = INT32_MIN;
	int16_t x119 = INT16_MAX;
	static volatile int64_t x120 = INT64_MIN;
	volatile int64_t t28 = 30183788984559662LL;

	t28 = ((x117<=(x118%x119))&x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = INT16_MIN;
	uint32_t x123 = UINT32_MAX;
	int32_t x124 = INT32_MIN;
	volatile int32_t t29 = 394093;

	t29 = ((x121<=(x122%x123))&x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x126 = 2938451LLU;
	volatile uint32_t x127 = UINT32_MAX;
	static int8_t x128 = -1;
	volatile int32_t t30 = -276119;

	t30 = ((x125<=(x126%x127))&x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x131 = -1;
	int8_t x132 = -49;
	int32_t t31 = 5;

	t31 = ((x129<=(x130%x131))&x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = -5;
	int64_t x134 = -211016097587656LL;
	int16_t x135 = 83;
	int8_t x136 = -1;
	int32_t t32 = -61;

	t32 = ((x133<=(x134%x135))&x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x139 = INT32_MIN;
	static uint16_t x140 = UINT16_MAX;
	volatile int32_t t33 = 137025;

	t33 = ((x137<=(x138%x139))&x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x141 = 7909U;
	static uint64_t x142 = 10931LLU;
	static int8_t x143 = INT8_MAX;
	static int32_t x144 = -3361543;
	volatile int32_t t34 = -5;

	t34 = ((x141<=(x142%x143))&x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = INT8_MIN;
	int32_t x146 = -1;
	uint32_t x147 = 1884845814U;
	uint32_t x148 = 1U;

	t35 = ((x145<=(x146%x147))&x148);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	volatile uint32_t x150 = 1847U;
	volatile int32_t x151 = 4;
	uint32_t x152 = 9U;
	volatile uint32_t t36 = 1U;

	t36 = ((x149<=(x150%x151))&x152);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = -10;
	static volatile int32_t x155 = INT32_MIN;
	static volatile int16_t x156 = INT16_MAX;
	volatile int32_t t37 = 1;

	t37 = ((x153<=(x154%x155))&x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x158 = 2633;
	int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;

	t38 = ((x157<=(x158%x159))&x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x161 = 238932729U;
	volatile int64_t x162 = -1LL;
	uint16_t x163 = 3U;
	int32_t t39 = -281324;

	t39 = ((x161<=(x162%x163))&x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x165 = 0U;
	uint64_t x166 = 23371LLU;
	int8_t x167 = INT8_MAX;
	static int64_t x168 = INT64_MIN;
	volatile int64_t t40 = -2816952LL;

	t40 = ((x165<=(x166%x167))&x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 2201U;
	static int32_t x170 = -1;
	static int32_t x171 = INT32_MAX;
	static uint8_t x172 = 10U;
	int32_t t41 = 27;

	t41 = ((x169<=(x170%x171))&x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	uint8_t x174 = 76U;
	uint32_t x175 = UINT32_MAX;
	volatile int32_t t42 = 28;

	t42 = ((x173<=(x174%x175))&x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x177 = -1;
	static int8_t x178 = INT8_MAX;
	int8_t x179 = -1;
	int32_t t43 = 1;

	t43 = ((x177<=(x178%x179))&x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = INT32_MAX;
	int64_t x182 = INT64_MIN;
	int32_t x183 = -3163407;
	int16_t x184 = INT16_MIN;
	volatile int32_t t44 = -42525;

	t44 = ((x181<=(x182%x183))&x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x186 = 1U;
	int8_t x187 = INT8_MIN;
	static uint8_t x188 = 118U;
	static volatile int32_t t45 = 625;

	t45 = ((x185<=(x186%x187))&x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 24U;
	int16_t x190 = INT16_MIN;
	uint64_t x192 = UINT64_MAX;

	t46 = ((x189<=(x190%x191))&x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MIN;
	uint8_t x194 = 16U;
	int8_t x196 = INT8_MAX;
	static int32_t t47 = 1191659;

	t47 = ((x193<=(x194%x195))&x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MAX;
	int32_t x198 = INT32_MIN;
	int8_t x199 = 2;
	volatile uint32_t x200 = 1865533U;
	uint32_t t48 = 304U;

	t48 = ((x197<=(x198%x199))&x200);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	volatile uint32_t x202 = 2165U;
	uint16_t x203 = 4636U;
	int32_t t49 = -346;

	t49 = ((x201<=(x202%x203))&x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = 3;
	int16_t x206 = INT16_MIN;
	volatile uint32_t x207 = UINT32_MAX;
	volatile uint16_t x208 = 7U;
	volatile int32_t t50 = 37499;

	t50 = ((x205<=(x206%x207))&x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = -41307LL;
	int8_t x210 = 2;
	int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MIN;
	volatile int32_t t51 = 1;

	t51 = ((x209<=(x210%x211))&x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x214 = INT16_MIN;
	int16_t x215 = 1869;
	int8_t x216 = INT8_MIN;

	t52 = ((x213<=(x214%x215))&x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MAX;
	volatile uint64_t x218 = 1LLU;
	uint32_t x219 = UINT32_MAX;
	volatile int32_t t53 = -208971;

	t53 = ((x217<=(x218%x219))&x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x221 = UINT8_MAX;
	int64_t x222 = INT64_MIN;
	int16_t x223 = -1;
	int16_t x224 = 3;
	int32_t t54 = -8;

	t54 = ((x221<=(x222%x223))&x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x226 = 560694U;
	uint16_t x227 = UINT16_MAX;
	int32_t x228 = -1;
	volatile int32_t t55 = 2;

	t55 = ((x225<=(x226%x227))&x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x229 = 5U;
	uint8_t x230 = 106U;
	volatile int16_t x231 = -1;
	uint16_t x232 = 12995U;

	t56 = ((x229<=(x230%x231))&x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x233 = UINT16_MAX;
	int64_t x234 = INT64_MIN;
	volatile int64_t x235 = INT64_MAX;
	int32_t t57 = 65633624;

	t57 = ((x233<=(x234%x235))&x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x240 = INT16_MIN;

	t58 = ((x237<=(x238%x239))&x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = 60LL;
	int64_t x242 = INT64_MIN;
	int32_t x243 = 1;
	static volatile int32_t t59 = 1;

	t59 = ((x241<=(x242%x243))&x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x246 = INT8_MAX;
	uint8_t x247 = UINT8_MAX;
	int64_t t60 = 67LL;

	t60 = ((x245<=(x246%x247))&x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x249 = INT8_MIN;
	uint16_t x251 = UINT16_MAX;
	static int16_t x252 = INT16_MIN;
	int32_t t61 = -312737;

	t61 = ((x249<=(x250%x251))&x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x253 = -1LL;
	int8_t x254 = -1;
	volatile int64_t x255 = INT64_MAX;
	static volatile int32_t x256 = INT32_MIN;
	int32_t t62 = -147;

	t62 = ((x253<=(x254%x255))&x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = INT16_MIN;
	volatile uint64_t x258 = 2LLU;
	uint8_t x259 = 56U;
	int16_t x260 = INT16_MAX;
	static int32_t t63 = -15200670;

	t63 = ((x257<=(x258%x259))&x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = UINT64_MAX;
	uint16_t x262 = 5229U;
	int32_t x263 = INT32_MIN;
	uint64_t x264 = 46707318200LLU;
	uint64_t t64 = 204322418041883283LLU;

	t64 = ((x261<=(x262%x263))&x264);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = 0LL;
	uint16_t x268 = 271U;
	volatile int32_t t65 = -23152;

	t65 = ((x265<=(x266%x267))&x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = UINT32_MAX;
	int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MAX;
	volatile int16_t x272 = -1;
	int32_t t66 = -36927;

	t66 = ((x269<=(x270%x271))&x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MAX;
	uint16_t x275 = 51U;
	int64_t x276 = INT64_MAX;

	t67 = ((x273<=(x274%x275))&x276);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = 114;
	uint64_t x282 = 13133LLU;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t68 = 366638967280LLU;

	t68 = ((x281<=(x282%x283))&x284);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = 13U;
	static uint32_t x286 = 6344U;
	uint16_t x287 = 2U;
	static int8_t x288 = INT8_MAX;
	int32_t t69 = 100513;

	t69 = ((x285<=(x286%x287))&x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -13943;
	static int8_t x290 = INT8_MIN;
	volatile int32_t t70 = 28;

	t70 = ((x289<=(x290%x291))&x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 874U;
	static int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MIN;
	static int32_t t71 = 259227;

	t71 = ((x293<=(x294%x295))&x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -33474011256278LL;
	static volatile int16_t x298 = INT16_MIN;
	int64_t x299 = 15407LL;
	uint16_t x300 = UINT16_MAX;
	static volatile int32_t t72 = 114055;

	t72 = ((x297<=(x298%x299))&x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	int32_t x303 = -1;
	int64_t x304 = -1LL;

	t73 = ((x301<=(x302%x303))&x304);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = 15;
	int8_t x308 = -6;
	static int32_t t74 = 1;

	t74 = ((x305<=(x306%x307))&x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x309 = INT16_MAX;
	static uint32_t x311 = 1610610107U;

	t75 = ((x309<=(x310%x311))&x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = 19103LL;
	int64_t x314 = -1LL;
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MAX;
	static int32_t t76 = -23350355;

	t76 = ((x313<=(x314%x315))&x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = 71638;
	int64_t x318 = INT64_MIN;
	int32_t x319 = -1437301;
	uint8_t x320 = 17U;

	t77 = ((x317<=(x318%x319))&x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MAX;
	int32_t x323 = 422380;
	uint64_t t78 = 2621074410481LLU;

	t78 = ((x321<=(x322%x323))&x324);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x326 = 6U;
	volatile int16_t x327 = INT16_MIN;

	t79 = ((x325<=(x326%x327))&x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	int64_t x331 = -836054345LL;
	uint32_t x332 = 26869U;
	uint32_t t80 = 10012U;

	t80 = ((x329<=(x330%x331))&x332);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = INT16_MIN;
	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	int32_t x336 = INT32_MAX;
	volatile int32_t t81 = 32;

	t81 = ((x333<=(x334%x335))&x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = 26728;
	volatile int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MAX;
	volatile int16_t x340 = -89;
	int32_t t82 = -496298405;

	t82 = ((x337<=(x338%x339))&x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x341 = 1342001073591633662LL;
	static volatile int64_t x343 = INT64_MIN;
	volatile int64_t t83 = 120LL;

	t83 = ((x341<=(x342%x343))&x344);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = 4U;
	static uint32_t x346 = 219U;
	volatile uint64_t x348 = 7LLU;

	t84 = ((x345<=(x346%x347))&x348);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MAX;
	static uint32_t x350 = 3835U;
	int8_t x351 = 1;
	static uint16_t x352 = 769U;

	t85 = ((x349<=(x350%x351))&x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x353 = -1;
	volatile int32_t x355 = INT32_MIN;
	int32_t t86 = -4240624;

	t86 = ((x353<=(x354%x355))&x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = 2077193381393LL;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t87 = 764423573;

	t87 = ((x357<=(x358%x359))&x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x362 = INT16_MAX;
	int16_t x363 = INT16_MIN;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t88 = -170831407;

	t88 = ((x361<=(x362%x363))&x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = -1LL;
	volatile int64_t x366 = INT64_MAX;
	volatile uint64_t x367 = UINT64_MAX;

	t89 = ((x365<=(x366%x367))&x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x370 = 5782;
	uint32_t x372 = 125693U;

	t90 = ((x369<=(x370%x371))&x372);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x373 = INT32_MAX;
	uint8_t x375 = UINT8_MAX;
	int64_t x376 = INT64_MIN;
	volatile int64_t t91 = -1102802869383LL;

	t91 = ((x373<=(x374%x375))&x376);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x377 = 51U;
	volatile uint64_t x378 = UINT64_MAX;
	volatile int16_t x380 = INT16_MAX;

	t92 = ((x377<=(x378%x379))&x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = -1;
	volatile uint16_t x383 = UINT16_MAX;
	int32_t t93 = -2335096;

	t93 = ((x381<=(x382%x383))&x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x385 = 5320U;
	int32_t x386 = -5746392;
	static int32_t x387 = INT32_MIN;
	uint8_t x388 = 0U;

	t94 = ((x385<=(x386%x387))&x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x389 = INT64_MIN;
	int8_t x390 = INT8_MIN;
	static uint32_t x391 = 21847U;
	volatile int32_t t95 = -94;

	t95 = ((x389<=(x390%x391))&x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x393 = INT8_MIN;
	volatile int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t96 = 66319;

	t96 = ((x393<=(x394%x395))&x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x397 = UINT64_MAX;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t97 = 116356253;

	t97 = ((x397<=(x398%x399))&x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x402 = -2790;
	volatile int64_t x403 = 3070862219970993LL;
	volatile int32_t t98 = -7185253;

	t98 = ((x401<=(x402%x403))&x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MIN;
	int16_t x406 = INT16_MIN;
	volatile int32_t x408 = INT32_MAX;
	int32_t t99 = 12;

	t99 = ((x405<=(x406%x407))&x408);

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

