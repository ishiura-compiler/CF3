#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x10 = 557498448U;
volatile int32_t t2 = 27760427;
uint8_t x19 = 1U;
volatile int16_t x22 = INT16_MAX;
uint8_t x30 = UINT8_MAX;
int32_t x32 = -105;
static int8_t x33 = INT8_MIN;
static uint8_t x36 = 74U;
static int16_t x38 = INT16_MIN;
static int32_t t9 = 8;
int32_t x52 = INT32_MIN;
volatile int32_t x53 = INT32_MAX;
static int64_t x56 = -21346LL;
volatile int32_t t15 = -82851898;
static uint64_t x78 = UINT64_MAX;
volatile uint64_t x82 = UINT64_MAX;
int16_t x83 = INT16_MAX;
int64_t x84 = -514310771LL;
int64_t x87 = INT64_MIN;
volatile int8_t x92 = INT8_MIN;
static volatile int64_t x106 = -1LL;
static uint32_t x108 = UINT32_MAX;
volatile int32_t t26 = -4713523;
uint8_t x110 = 15U;
int32_t x113 = INT32_MIN;
volatile int8_t x114 = -1;
volatile int16_t x116 = 558;
int64_t x118 = 3524LL;
static volatile int8_t x121 = INT8_MIN;
int64_t x122 = INT64_MIN;
uint32_t x124 = 3U;
static int64_t x127 = INT64_MIN;
volatile int8_t x129 = 40;
uint8_t x135 = 0U;
static int32_t t34 = 890865;
int8_t x159 = -35;
volatile int64_t x169 = 512949271290LL;
int16_t x174 = INT16_MIN;
int8_t x186 = -1;
int32_t x188 = -1;
int32_t x190 = 871054525;
static int16_t x196 = INT16_MAX;
int64_t x197 = -202772LL;
int32_t t49 = 106525417;
volatile uint32_t x201 = 24324U;
static uint32_t x210 = UINT32_MAX;
static int16_t x212 = -1164;
int32_t t52 = -7;
static int16_t x213 = 1;
uint16_t x215 = UINT16_MAX;
uint8_t x216 = 2U;
static uint16_t x231 = UINT16_MAX;
int32_t t57 = -306;
int64_t x234 = INT64_MAX;
int64_t x236 = 85200465500115316LL;
static int32_t x238 = INT32_MIN;
static int32_t x245 = INT32_MAX;
int32_t x246 = INT32_MAX;
int64_t x251 = 3808252LL;
static int8_t x256 = 1;
volatile int32_t t65 = -4933326;
volatile int64_t x267 = 9LL;
volatile int8_t x272 = 0;
static uint32_t x274 = UINT32_MAX;
int16_t x281 = INT16_MIN;
volatile int8_t x282 = -1;
static int32_t x284 = -10011243;
uint32_t x287 = UINT32_MAX;
int8_t x288 = -1;
int64_t x290 = INT64_MIN;
uint16_t x291 = 30U;
uint32_t x293 = 15218505U;
int16_t x295 = -1;
volatile int32_t x296 = INT32_MIN;
static int64_t x300 = INT64_MIN;
int8_t x306 = INT8_MIN;
int8_t x311 = 1;
int32_t t77 = -173617;
int32_t x322 = 12;
uint64_t x328 = UINT64_MAX;
int32_t x330 = -14096;
static int64_t x332 = 3LL;
int8_t x342 = INT8_MIN;
volatile int32_t t86 = 15283978;
static int32_t x356 = INT32_MAX;
int32_t t88 = 47079;
int64_t x366 = INT64_MAX;
int64_t x381 = -1LL;
uint16_t x383 = 801U;
volatile int8_t x388 = 0;
volatile int64_t x389 = INT64_MIN;
static volatile uint8_t x391 = 0U;
static int8_t x395 = INT8_MIN;
uint32_t x396 = 110U;
volatile int32_t t98 = -237216183;
int8_t x398 = 1;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int64_t x2 = 15536812LL;
	int64_t x3 = -1LL;
	static int32_t x4 = -1;
	volatile int32_t t0 = -3610;

	t0 = ((x1+(x2==x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -44;
	uint32_t x6 = 99U;
	static uint8_t x7 = UINT8_MAX;
	int32_t x8 = INT32_MIN;
	static int32_t t1 = -7708;

	t1 = ((x5+(x6==x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 3U;
	int64_t x11 = -11416657LL;
	volatile uint32_t x12 = 11711U;

	t2 = ((x9+(x10==x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 18U;
	static volatile int8_t x14 = -2;
	static int32_t x15 = -1;
	static int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = -5;

	t3 = ((x13+(x14==x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MIN;
	uint32_t x20 = UINT32_MAX;
	int32_t t4 = 15162149;

	t4 = ((x17+(x18==x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -216849447264LL;
	static int16_t x23 = -1;
	int64_t x24 = -103423924877LL;
	int32_t t5 = 1042079;

	t5 = ((x21+(x22==x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 6346079;
	uint8_t x26 = 2U;
	static int8_t x27 = INT8_MIN;
	int64_t x28 = 3409318822LL;
	volatile int32_t t6 = -8;

	t6 = ((x25+(x26==x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int16_t x31 = -1;
	volatile int32_t t7 = -5882196;

	t7 = ((x29+(x30==x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x34 = UINT16_MAX;
	uint16_t x35 = 88U;
	volatile int32_t t8 = 725340;

	t8 = ((x33+(x34==x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint8_t x39 = UINT8_MAX;
	int32_t x40 = 3045;

	t9 = ((x37+(x38==x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = 0;
	int8_t x42 = INT8_MAX;
	uint16_t x43 = 205U;
	static int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -1346;

	t10 = ((x41+(x42==x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static uint16_t x46 = 6U;
	static uint32_t x47 = 21U;
	uint64_t x48 = UINT64_MAX;
	int32_t t11 = -430972;

	t11 = ((x45+(x46==x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -25;
	static volatile int64_t x50 = INT64_MAX;
	static int32_t x51 = -10911;
	static volatile int32_t t12 = 186;

	t12 = ((x49+(x50==x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	uint32_t x55 = 416755U;
	volatile int32_t t13 = 236713;

	t13 = ((x53+(x54==x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile uint64_t x58 = 366LLU;
	uint32_t x59 = 7U;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 0;

	t14 = ((x57+(x58==x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MAX;
	uint8_t x62 = 0U;
	int16_t x63 = 311;
	int32_t x64 = -96770;

	t15 = ((x61+(x62==x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int8_t x66 = INT8_MAX;
	volatile int64_t x67 = INT64_MAX;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = -111236116;

	t16 = ((x65+(x66==x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -7;
	volatile int64_t x70 = INT64_MIN;
	int16_t x71 = INT16_MIN;
	volatile int16_t x72 = 274;
	volatile int32_t t17 = 24020;

	t17 = ((x69+(x70==x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = -1;
	int16_t x74 = INT16_MIN;
	uint16_t x75 = 1038U;
	int32_t x76 = -356;
	int32_t t18 = -3;

	t18 = ((x73+(x74==x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 14164;
	int32_t x79 = INT32_MAX;
	static int32_t x80 = -60;
	int32_t t19 = -183909;

	t19 = ((x77+(x78==x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 12U;
	volatile int32_t t20 = -1;

	t20 = ((x81+(x82==x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -7708;
	uint16_t x86 = UINT16_MAX;
	int16_t x88 = INT16_MAX;
	int32_t t21 = -86601;

	t21 = ((x85+(x86==x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MAX;
	volatile int8_t x90 = INT8_MIN;
	static volatile int16_t x91 = INT16_MAX;
	int32_t t22 = -170;

	t22 = ((x89+(x90==x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = UINT16_MAX;
	int64_t x94 = -1LL;
	volatile int32_t x95 = INT32_MIN;
	static int16_t x96 = -6;
	int32_t t23 = 0;

	t23 = ((x93+(x94==x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	volatile int32_t x98 = INT32_MIN;
	int64_t x99 = 1286042262296LL;
	uint16_t x100 = 12U;
	int32_t t24 = -1320362;

	t24 = ((x97+(x98==x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = -1;
	int16_t x102 = INT16_MIN;
	volatile int64_t x103 = INT64_MIN;
	volatile uint8_t x104 = 28U;
	int32_t t25 = -156539;

	t25 = ((x101+(x102==x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -10;
	static int64_t x107 = INT64_MAX;

	t26 = ((x105+(x106==x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 4179441472LLU;
	int64_t x111 = INT64_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 7886;

	t27 = ((x109+(x110==x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x115 = INT64_MIN;
	volatile int32_t t28 = -1;

	t28 = ((x113+(x114==x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	volatile int16_t x119 = -1;
	int64_t x120 = INT64_MAX;
	volatile int32_t t29 = -3;

	t29 = ((x117+(x118==x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x123 = 239LL;
	volatile int32_t t30 = 3415114;

	t30 = ((x121+(x122==x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -13302;
	int8_t x126 = -1;
	uint8_t x128 = UINT8_MAX;
	static volatile int32_t t31 = -643048624;

	t31 = ((x125+(x126==x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MAX;
	uint8_t x132 = 48U;
	volatile int32_t t32 = -217;

	t32 = ((x129+(x130==x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = 15;
	int16_t x134 = -2088;
	volatile int8_t x136 = 0;
	static int32_t t33 = -986;

	t33 = ((x133+(x134==x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	volatile int8_t x138 = INT8_MIN;
	uint16_t x139 = UINT16_MAX;
	static volatile uint64_t x140 = 9199334439954991LLU;

	t34 = ((x137+(x138==x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	int64_t x142 = -21334531339LL;
	int64_t x143 = 32176026196204LL;
	volatile uint16_t x144 = 1U;
	volatile int32_t t35 = -627;

	t35 = ((x141+(x142==x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = UINT16_MAX;
	int16_t x146 = INT16_MIN;
	int64_t x147 = -1LL;
	int16_t x148 = -503;
	static int32_t t36 = -1704;

	t36 = ((x145+(x146==x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = 52;
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	static uint16_t x152 = 14U;
	int32_t t37 = 2202;

	t37 = ((x149+(x150==x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = 58264963LL;
	int8_t x154 = 23;
	uint8_t x155 = UINT8_MAX;
	volatile uint8_t x156 = 6U;
	int32_t t38 = 227;

	t38 = ((x153+(x154==x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	uint32_t x158 = UINT32_MAX;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 149176424;

	t39 = ((x157+(x158==x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = 4470977678031167494LLU;
	int64_t x164 = INT64_MAX;
	int32_t t40 = 49030;

	t40 = ((x161+(x162==x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = UINT64_MAX;
	int16_t x166 = 1;
	int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t41 = -393;

	t41 = ((x165+(x166==x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x170 = INT16_MAX;
	int64_t x171 = INT64_MAX;
	volatile uint64_t x172 = 480430627256776LLU;
	volatile int32_t t42 = -194760;

	t42 = ((x169+(x170==x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 1;
	volatile int64_t x175 = INT64_MIN;
	uint32_t x176 = 294005569U;
	volatile int32_t t43 = 22561;

	t43 = ((x173+(x174==x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -318886352390715LL;
	int32_t x178 = -753;
	int16_t x179 = INT16_MIN;
	int8_t x180 = -1;
	volatile int32_t t44 = 27;

	t44 = ((x177+(x178==x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	uint32_t x182 = 27946U;
	int64_t x183 = 10438149032LL;
	int16_t x184 = 3;
	volatile int32_t t45 = -188433;

	t45 = ((x181+(x182==x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	uint8_t x187 = 2U;
	int32_t t46 = 241971;

	t46 = ((x185+(x186==x187))==x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	volatile int16_t x191 = -1;
	volatile int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 80056;

	t47 = ((x189+(x190==x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 1538277866U;
	int32_t x194 = INT32_MIN;
	uint16_t x195 = 52U;
	volatile int32_t t48 = -15915207;

	t48 = ((x193+(x194==x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x198 = INT64_MAX;
	int32_t x199 = 3415192;
	int64_t x200 = INT64_MIN;

	t49 = ((x197+(x198==x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = -7;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = 6U;
	volatile int32_t t50 = 2289;

	t50 = ((x201+(x202==x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 5384;
	int64_t x206 = INT64_MAX;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = 2U;
	static int32_t t51 = 1;

	t51 = ((x205+(x206==x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 38993LLU;
	int64_t x211 = 0LL;

	t52 = ((x209+(x210==x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = UINT32_MAX;
	volatile int32_t t53 = -1255;

	t53 = ((x213+(x214==x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MAX;
	int32_t x219 = INT32_MIN;
	volatile int32_t x220 = -209374;
	static volatile int32_t t54 = -1;

	t54 = ((x217+(x218==x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = INT32_MAX;
	int32_t x222 = -7604038;
	volatile uint16_t x223 = UINT16_MAX;
	static int32_t x224 = -1;
	static int32_t t55 = -257244557;

	t55 = ((x221+(x222==x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int32_t x226 = INT32_MIN;
	uint64_t x227 = 806LLU;
	int64_t x228 = 489048912387280053LL;
	volatile int32_t t56 = -434367731;

	t56 = ((x225+(x226==x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x229 = 3564U;
	int8_t x230 = INT8_MIN;
	int16_t x232 = -1;

	t57 = ((x229+(x230==x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int16_t x235 = -1;
	volatile int32_t t58 = 14045392;

	t58 = ((x233+(x234==x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1LL;
	int16_t x239 = INT16_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t59 = -6827096;

	t59 = ((x237+(x238==x239))==x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = UINT8_MAX;
	int32_t x242 = -1;
	static int64_t x243 = INT64_MIN;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = 580;

	t60 = ((x241+(x242==x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x247 = INT64_MAX;
	volatile uint16_t x248 = 7U;
	volatile int32_t t61 = 22;

	t61 = ((x245+(x246==x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = INT16_MIN;
	static int64_t x250 = -1LL;
	uint32_t x252 = 426564U;
	int32_t t62 = -45;

	t62 = ((x249+(x250==x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	uint32_t x254 = 267960U;
	int8_t x255 = INT8_MIN;
	int32_t t63 = 1757;

	t63 = ((x253+(x254==x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	static int32_t x258 = INT32_MIN;
	uint32_t x259 = 2U;
	volatile uint8_t x260 = 18U;
	int32_t t64 = -3;

	t64 = ((x257+(x258==x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x261 = 133U;
	int8_t x262 = -1;
	static uint32_t x263 = 1977U;
	int16_t x264 = -1;

	t65 = ((x261+(x262==x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MAX;
	uint32_t x266 = UINT32_MAX;
	volatile int16_t x268 = -1;
	volatile int32_t t66 = 106;

	t66 = ((x265+(x266==x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = -1;
	int64_t x270 = -74288531398LL;
	uint64_t x271 = 1386475LLU;
	volatile int32_t t67 = 2557987;

	t67 = ((x269+(x270==x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 2;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = -161467482;

	t68 = ((x273+(x274==x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -17;
	volatile int32_t x278 = -1209;
	uint64_t x279 = UINT64_MAX;
	int8_t x280 = 16;
	static int32_t t69 = -26634;

	t69 = ((x277+(x278==x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x283 = -1LL;
	int32_t t70 = 171;

	t70 = ((x281+(x282==x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 0U;
	volatile int16_t x286 = -1;
	int32_t t71 = 52662166;

	t71 = ((x285+(x286==x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 623356375;
	int8_t x292 = INT8_MIN;
	static volatile int32_t t72 = -31;

	t72 = ((x289+(x290==x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = 4428304253606981LL;
	volatile int32_t t73 = 0;

	t73 = ((x293+(x294==x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = INT8_MIN;
	static int64_t x298 = INT64_MAX;
	static int16_t x299 = INT16_MIN;
	static volatile int32_t t74 = 18975;

	t74 = ((x297+(x298==x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MAX;
	uint8_t x302 = 40U;
	static int16_t x303 = 1855;
	int32_t x304 = INT32_MIN;
	int32_t t75 = 11496;

	t75 = ((x301+(x302==x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MIN;
	static volatile int16_t x307 = -1;
	int32_t x308 = INT32_MIN;
	static volatile int32_t t76 = 1636573;

	t76 = ((x305+(x306==x307))==x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	volatile int8_t x310 = -7;
	static int64_t x312 = -1LL;

	t77 = ((x309+(x310==x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	volatile int32_t x314 = INT32_MAX;
	volatile int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;
	int32_t t78 = 118;

	t78 = ((x313+(x314==x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 16U;
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MAX;
	int32_t x320 = INT32_MIN;
	static int32_t t79 = 252042345;

	t79 = ((x317+(x318==x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MIN;
	volatile int8_t x323 = -1;
	volatile uint32_t x324 = UINT32_MAX;
	int32_t t80 = -71729870;

	t80 = ((x321+(x322==x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -7;
	static int64_t x326 = INT64_MIN;
	volatile int32_t x327 = INT32_MIN;
	int32_t t81 = -61501;

	t81 = ((x325+(x326==x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MIN;
	uint8_t x331 = UINT8_MAX;
	static volatile int32_t t82 = -4240021;

	t82 = ((x329+(x330==x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = 2U;
	volatile uint64_t x334 = 27LLU;
	uint32_t x335 = UINT32_MAX;
	int64_t x336 = 99512023LL;
	static int32_t t83 = 766269;

	t83 = ((x333+(x334==x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 12U;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = 0U;
	volatile int32_t t84 = 352481;

	t84 = ((x337+(x338==x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 15068U;
	uint32_t x343 = UINT32_MAX;
	volatile uint32_t x344 = UINT32_MAX;
	volatile int32_t t85 = -572437;

	t85 = ((x341+(x342==x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = 199585573998LL;
	int16_t x346 = INT16_MIN;
	volatile uint64_t x347 = 1309457701LLU;
	int32_t x348 = -1;

	t86 = ((x345+(x346==x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	static int32_t x350 = -17864;
	int64_t x351 = -1LL;
	int8_t x352 = -1;
	int32_t t87 = -443585990;

	t87 = ((x349+(x350==x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	uint64_t x354 = 71LLU;
	static int16_t x355 = -1;

	t88 = ((x353+(x354==x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = 1U;
	uint16_t x358 = 74U;
	int64_t x359 = INT64_MIN;
	static uint16_t x360 = 2188U;
	volatile int32_t t89 = 37639;

	t89 = ((x357+(x358==x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = 5U;
	uint32_t x362 = 130306475U;
	int8_t x363 = INT8_MIN;
	uint32_t x364 = 1971U;
	int32_t t90 = 9021510;

	t90 = ((x361+(x362==x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MAX;
	int64_t x367 = -1LL;
	int8_t x368 = 0;
	int32_t t91 = -753899;

	t91 = ((x365+(x366==x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 109970U;
	volatile int8_t x370 = -1;
	uint64_t x371 = 32345085657LLU;
	static volatile int32_t x372 = INT32_MIN;
	static int32_t t92 = -1;

	t92 = ((x369+(x370==x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	static volatile uint32_t x374 = 15U;
	static int64_t x375 = INT64_MIN;
	static uint32_t x376 = 333U;
	volatile int32_t t93 = 453903;

	t93 = ((x373+(x374==x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 331;
	static int32_t x378 = INT32_MIN;
	int16_t x379 = -1;
	static volatile int64_t x380 = INT64_MAX;
	int32_t t94 = 1;

	t94 = ((x377+(x378==x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -22268918LL;
	volatile int64_t x384 = INT64_MIN;
	volatile int32_t t95 = 4371228;

	t95 = ((x381+(x382==x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = UINT32_MAX;
	uint8_t x386 = UINT8_MAX;
	uint32_t x387 = 3650115U;
	volatile int32_t t96 = 2;

	t96 = ((x385+(x386==x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = -1;
	int8_t x392 = INT8_MIN;
	static int32_t t97 = -7713;

	t97 = ((x389+(x390==x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -44153;
	int8_t x394 = -1;

	t98 = ((x393+(x394==x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MIN;
	int8_t x399 = -3;
	int64_t x400 = INT64_MIN;
	int32_t t99 = 5941;

	t99 = ((x397+(x398==x399))==x400);

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

