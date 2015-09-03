#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = 2U;
int16_t x16 = -449;
int16_t x17 = 30;
volatile int8_t x24 = INT8_MIN;
volatile int64_t x26 = INT64_MIN;
uint32_t x29 = 24U;
int16_t x30 = INT16_MIN;
int64_t x31 = INT64_MIN;
int32_t t7 = -714547;
int32_t x42 = INT32_MAX;
int32_t t12 = -431;
static int32_t x57 = INT32_MIN;
volatile uint16_t x59 = 16U;
int64_t x60 = -1LL;
uint8_t x68 = 120U;
int32_t t16 = 34124;
static int8_t x90 = INT8_MIN;
int16_t x92 = 10;
static volatile int32_t t22 = -4501050;
uint8_t x99 = 6U;
uint32_t x100 = UINT32_MAX;
uint32_t x102 = UINT32_MAX;
static int8_t x103 = -1;
volatile int32_t t28 = 1;
int32_t t29 = -89411640;
int32_t x131 = INT32_MAX;
int32_t x133 = INT32_MIN;
int8_t x134 = INT8_MAX;
volatile int32_t t31 = 48;
uint64_t x139 = 3099202813978060090LLU;
volatile uint32_t x141 = 588131368U;
uint16_t x143 = 13228U;
int16_t x159 = 1007;
volatile uint32_t x162 = 14U;
volatile int8_t x164 = INT8_MIN;
int8_t x168 = -1;
static int32_t t39 = 20908;
int32_t x170 = INT32_MIN;
int8_t x189 = INT8_MIN;
uint32_t x190 = 11U;
static uint32_t x194 = 10614U;
volatile int64_t x196 = INT64_MIN;
int64_t x199 = INT64_MIN;
uint32_t x214 = UINT32_MAX;
uint16_t x218 = 18U;
int16_t x245 = INT16_MIN;
volatile int32_t t59 = 379;
int8_t x254 = INT8_MAX;
uint64_t x261 = UINT64_MAX;
int32_t x272 = INT32_MIN;
uint8_t x274 = 8U;
int16_t x278 = INT16_MIN;
static int8_t x280 = INT8_MAX;
static int64_t x287 = 1041101735525707579LL;
volatile int8_t x288 = -22;
int8_t x298 = INT8_MAX;
int32_t t72 = -80;
int64_t x301 = INT64_MAX;
static int8_t x302 = INT8_MIN;
int64_t x303 = INT64_MIN;
volatile int16_t x305 = INT16_MIN;
int32_t x307 = INT32_MIN;
int32_t t74 = 98192959;
int16_t x312 = INT16_MIN;
static int8_t x325 = INT8_MAX;
volatile int8_t x338 = INT8_MIN;
static int8_t x342 = -1;
static int16_t x346 = INT16_MIN;
uint64_t x352 = 3267473LLU;
uint8_t x355 = UINT8_MAX;
static int64_t x358 = -1LL;
volatile int64_t x363 = INT64_MIN;
uint32_t x365 = 1899562U;
uint32_t x390 = 4842772U;
volatile int8_t x393 = 3;
int16_t x398 = 3252;
uint8_t x399 = 3U;
int16_t x403 = -104;
int8_t x406 = INT8_MIN;
volatile int16_t x410 = INT16_MAX;
int16_t x413 = 182;
volatile int64_t x414 = 9246781840LL;
volatile int8_t x417 = INT8_MAX;
static volatile int32_t x419 = 7760478;


void f0(void) {
	int8_t x1 = 7;
	int64_t x2 = INT64_MAX;
	int8_t x3 = -3;
	int64_t x4 = 1993289LL;
	int32_t t0 = 0;

	t0 = ((x1/x2)==(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 6U;
	int64_t x6 = INT64_MIN;
	int16_t x7 = INT16_MIN;
	uint8_t x8 = 2U;
	static int32_t t1 = -3901013;

	t1 = ((x5/x6)==(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	int64_t x10 = -1LL;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -4;

	t2 = ((x9/x10)==(x11&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = INT8_MIN;
	int16_t x15 = -111;
	int32_t t3 = 15085;

	t3 = ((x13/x14)==(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = -10697569;

	t4 = ((x17/x18)==(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int32_t x22 = -158808;
	int16_t x23 = INT16_MIN;
	int32_t t5 = -933920;

	t5 = ((x21/x22)==(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int64_t x27 = 28105427831LL;
	uint8_t x28 = 96U;
	volatile int32_t t6 = -3;

	t6 = ((x25/x26)==(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x32 = UINT64_MAX;

	t7 = ((x29/x30)==(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MAX;
	int64_t x35 = -1LL;
	static uint32_t x36 = 25017U;
	int32_t t8 = 249362444;

	t8 = ((x33/x34)==(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -2;
	int32_t x38 = -1;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = UINT64_MAX;
	int32_t t9 = 235997791;

	t9 = ((x37/x38)==(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 6934U;
	int32_t x43 = INT32_MIN;
	volatile int64_t x44 = -13947LL;
	int32_t t10 = -23327;

	t10 = ((x41/x42)==(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MAX;
	static int32_t x46 = 2370658;
	int8_t x47 = -3;
	static int8_t x48 = -1;
	static volatile int32_t t11 = 15358;

	t11 = ((x45/x46)==(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 12U;
	uint16_t x50 = 25661U;
	static volatile int32_t x51 = -1;
	static uint32_t x52 = 15320U;

	t12 = ((x49/x50)==(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = -9;
	uint8_t x55 = 31U;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = -1;

	t13 = ((x53/x54)==(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -15899335LL;
	volatile int32_t t14 = 100056168;

	t14 = ((x57/x58)==(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = 707;
	uint32_t x63 = 379205U;
	int16_t x64 = 14396;
	volatile int32_t t15 = -256;

	t15 = ((x61/x62)==(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static int32_t x66 = INT32_MIN;
	int16_t x67 = 1362;

	t16 = ((x65/x66)==(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	uint32_t x74 = 475443397U;
	int16_t x75 = INT16_MIN;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t17 = 138009717;

	t17 = ((x73/x74)==(x75&x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -9;
	int32_t x78 = INT32_MIN;
	int16_t x79 = -424;
	uint8_t x80 = 67U;
	int32_t t18 = -1447;

	t18 = ((x77/x78)==(x79&x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x81 = INT32_MIN;
	volatile int8_t x82 = INT8_MIN;
	uint8_t x83 = 3U;
	int8_t x84 = INT8_MAX;
	int32_t t19 = -8;

	t19 = ((x81/x82)==(x83&x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	int8_t x86 = 1;
	int8_t x87 = -2;
	volatile uint16_t x88 = 894U;
	int32_t t20 = 3480283;

	t20 = ((x85/x86)==(x87&x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	int32_t x91 = -129240219;
	volatile int32_t t21 = -356547;

	t21 = ((x89/x90)==(x91&x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = INT32_MIN;
	static int64_t x94 = 296LL;
	volatile uint16_t x95 = 455U;
	int8_t x96 = INT8_MIN;

	t22 = ((x93/x94)==(x95&x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = INT32_MIN;
	int32_t x98 = INT32_MAX;
	volatile int32_t t23 = -249;

	t23 = ((x97/x98)==(x99&x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	int64_t x104 = INT64_MIN;
	volatile int32_t t24 = 43000;

	t24 = ((x101/x102)==(x103&x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 33337U;
	int16_t x106 = INT16_MIN;
	int32_t x107 = INT32_MIN;
	uint16_t x108 = 10068U;
	int32_t t25 = -31;

	t25 = ((x105/x106)==(x107&x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 27590600387720915LL;
	int8_t x110 = 1;
	uint32_t x111 = 972407344U;
	volatile int32_t x112 = 4962681;
	volatile int32_t t26 = -122983349;

	t26 = ((x109/x110)==(x111&x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = INT32_MIN;
	uint16_t x114 = 24U;
	int32_t x115 = -1;
	volatile int32_t x116 = INT32_MIN;
	volatile int32_t t27 = 28610;

	t27 = ((x113/x114)==(x115&x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = -1;
	static int32_t x122 = INT32_MIN;
	volatile uint64_t x123 = 540257501079928331LLU;
	uint64_t x124 = 55402131909736LLU;

	t28 = ((x121/x122)==(x123&x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	volatile int8_t x126 = INT8_MIN;
	volatile int32_t x127 = 186;
	static uint64_t x128 = 261476317269538672LLU;

	t29 = ((x125/x126)==(x127&x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -1LL;
	int64_t x130 = INT64_MAX;
	int64_t x132 = INT64_MIN;
	volatile int32_t t30 = -38861276;

	t30 = ((x129/x130)==(x131&x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x135 = 91807492U;
	uint16_t x136 = 0U;

	t31 = ((x133/x134)==(x135&x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = INT32_MIN;
	uint64_t x138 = UINT64_MAX;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t32 = -1960850;

	t32 = ((x137/x138)==(x139&x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x142 = -1;
	uint8_t x144 = UINT8_MAX;
	int32_t t33 = 1613866;

	t33 = ((x141/x142)==(x143&x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x145 = INT64_MAX;
	static uint16_t x146 = 449U;
	static int32_t x147 = -251;
	int64_t x148 = 668378607992LL;
	int32_t t34 = -6;

	t34 = ((x145/x146)==(x147&x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = 0;
	int64_t x150 = INT64_MIN;
	int64_t x151 = 2801167898LL;
	volatile int32_t x152 = -34817;
	int32_t t35 = -1142;

	t35 = ((x149/x150)==(x151&x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;
	int32_t t36 = 0;

	t36 = ((x153/x154)==(x155&x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = 5;
	int8_t x158 = -1;
	static volatile int16_t x160 = 1180;
	volatile int32_t t37 = 0;

	t37 = ((x157/x158)==(x159&x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = INT8_MIN;
	int32_t x163 = 0;
	static int32_t t38 = -29738538;

	t38 = ((x161/x162)==(x163&x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x165 = INT32_MIN;
	int8_t x166 = -12;
	uint8_t x167 = UINT8_MAX;

	t39 = ((x165/x166)==(x167&x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x169 = INT8_MIN;
	int8_t x171 = INT8_MIN;
	volatile int64_t x172 = 503629788133557690LL;
	static volatile int32_t t40 = -39904159;

	t40 = ((x169/x170)==(x171&x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 3U;
	volatile int64_t x174 = INT64_MAX;
	int32_t x175 = 18553615;
	int8_t x176 = 9;
	int32_t t41 = 0;

	t41 = ((x173/x174)==(x175&x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	uint8_t x178 = 36U;
	int8_t x179 = INT8_MIN;
	static int32_t x180 = -1;
	int32_t t42 = -126919318;

	t42 = ((x177/x178)==(x179&x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = INT64_MIN;
	uint32_t x182 = 501629538U;
	int32_t x183 = -1592;
	int8_t x184 = -5;
	int32_t t43 = 65155;

	t43 = ((x181/x182)==(x183&x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 43U;
	uint64_t x186 = 255102593810LLU;
	volatile int16_t x187 = -1;
	int16_t x188 = INT16_MIN;
	volatile int32_t t44 = -59538578;

	t44 = ((x185/x186)==(x187&x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x191 = 8455900680389865237LLU;
	volatile int8_t x192 = -14;
	volatile int32_t t45 = 37281601;

	t45 = ((x189/x190)==(x191&x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x193 = INT16_MIN;
	volatile int16_t x195 = INT16_MAX;
	int32_t t46 = -212279003;

	t46 = ((x193/x194)==(x195&x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x197 = 14U;
	int32_t x198 = -108939014;
	static int16_t x200 = -2704;
	int32_t t47 = 783441;

	t47 = ((x197/x198)==(x199&x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x201 = -1;
	int8_t x202 = -1;
	int32_t x203 = INT32_MIN;
	int64_t x204 = 13593804LL;
	volatile int32_t t48 = -103930;

	t48 = ((x201/x202)==(x203&x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = 198U;
	int8_t x206 = -1;
	int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MIN;
	volatile int32_t t49 = -15500694;

	t49 = ((x205/x206)==(x207&x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x209 = UINT8_MAX;
	static int64_t x210 = -1LL;
	int16_t x211 = -1;
	int64_t x212 = INT64_MIN;
	volatile int32_t t50 = -517;

	t50 = ((x209/x210)==(x211&x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = INT64_MIN;
	volatile uint64_t x215 = 8209LLU;
	volatile int32_t x216 = INT32_MIN;
	volatile int32_t t51 = -626287;

	t51 = ((x213/x214)==(x215&x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = UINT8_MAX;
	int64_t x219 = -1LL;
	int64_t x220 = INT64_MAX;
	volatile int32_t t52 = 158967017;

	t52 = ((x217/x218)==(x219&x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x221 = 146931LLU;
	static int8_t x222 = -28;
	int32_t x223 = INT32_MAX;
	int16_t x224 = INT16_MIN;
	volatile int32_t t53 = 348428422;

	t53 = ((x221/x222)==(x223&x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = 0U;
	uint32_t x226 = UINT32_MAX;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 7304694533267LLU;
	int32_t t54 = -6;

	t54 = ((x225/x226)==(x227&x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = INT16_MAX;
	uint16_t x230 = 100U;
	int64_t x231 = INT64_MIN;
	int32_t x232 = 1;
	int32_t t55 = 28903559;

	t55 = ((x229/x230)==(x231&x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x233 = -1;
	static volatile uint64_t x234 = UINT64_MAX;
	int64_t x235 = INT64_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t56 = 799;

	t56 = ((x233/x234)==(x235&x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x237 = UINT8_MAX;
	uint8_t x238 = 53U;
	volatile uint64_t x239 = 98597343662LLU;
	static int32_t x240 = INT32_MIN;
	int32_t t57 = 0;

	t57 = ((x237/x238)==(x239&x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MIN;
	static int8_t x242 = INT8_MAX;
	int64_t x243 = -1LL;
	int32_t x244 = INT32_MIN;
	int32_t t58 = 3847582;

	t58 = ((x241/x242)==(x243&x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x246 = 246161LLU;
	static int16_t x247 = INT16_MIN;
	uint16_t x248 = 25U;

	t59 = ((x245/x246)==(x247&x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MAX;
	static int8_t x250 = -33;
	int16_t x251 = INT16_MAX;
	int8_t x252 = INT8_MIN;
	static int32_t t60 = -2833;

	t60 = ((x249/x250)==(x251&x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = -57;
	volatile uint32_t x255 = UINT32_MAX;
	static int64_t x256 = -1LL;
	int32_t t61 = -6;

	t61 = ((x253/x254)==(x255&x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = UINT8_MAX;
	static int16_t x258 = -1358;
	int64_t x259 = INT64_MAX;
	static uint32_t x260 = 360U;
	static volatile int32_t t62 = 299;

	t62 = ((x257/x258)==(x259&x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MAX;
	int64_t x264 = -1LL;
	int32_t t63 = 1406764;

	t63 = ((x261/x262)==(x263&x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = 15247;
	int16_t x266 = INT16_MIN;
	uint8_t x267 = UINT8_MAX;
	volatile int8_t x268 = INT8_MIN;
	int32_t t64 = 10;

	t64 = ((x265/x266)==(x267&x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = -1;
	int8_t x270 = -1;
	int8_t x271 = 1;
	volatile int32_t t65 = 3192;

	t65 = ((x269/x270)==(x271&x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x275 = INT64_MIN;
	volatile int64_t x276 = -95061753362LL;
	int32_t t66 = -111862;

	t66 = ((x273/x274)==(x275&x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = INT8_MIN;
	int32_t x279 = INT32_MAX;
	int32_t t67 = 31962436;

	t67 = ((x277/x278)==(x279&x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = 47187;
	uint16_t x282 = 3389U;
	static int16_t x283 = INT16_MAX;
	volatile int8_t x284 = -40;
	int32_t t68 = -39;

	t68 = ((x281/x282)==(x283&x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	uint64_t x286 = 2162091274968500333LLU;
	int32_t t69 = -6361;

	t69 = ((x285/x286)==(x287&x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = 656201LL;
	int32_t x290 = 40;
	int64_t x291 = -1LL;
	static uint64_t x292 = 815390LLU;
	int32_t t70 = -11828;

	t70 = ((x289/x290)==(x291&x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = 3;
	volatile int8_t x294 = INT8_MIN;
	uint16_t x295 = 0U;
	uint8_t x296 = 91U;
	static int32_t t71 = 6543;

	t71 = ((x293/x294)==(x295&x296));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x297 = UINT64_MAX;
	volatile uint16_t x299 = UINT16_MAX;
	int64_t x300 = 7LL;

	t72 = ((x297/x298)==(x299&x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t73 = -10120;

	t73 = ((x301/x302)==(x303&x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x306 = 14;
	uint16_t x308 = 328U;

	t74 = ((x305/x306)==(x307&x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = -5;
	int32_t x310 = INT32_MIN;
	static volatile int8_t x311 = INT8_MIN;
	int32_t t75 = -3888936;

	t75 = ((x309/x310)==(x311&x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = INT8_MAX;
	uint32_t x314 = 7283318U;
	int8_t x315 = -1;
	int32_t x316 = 22651576;
	static volatile int32_t t76 = -29418047;

	t76 = ((x313/x314)==(x315&x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MAX;
	uint8_t x318 = 28U;
	int16_t x319 = 6451;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t77 = 62;

	t77 = ((x317/x318)==(x319&x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MIN;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t78 = -9416416;

	t78 = ((x325/x326)==(x327&x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = -55232;
	static volatile int8_t x330 = -1;
	volatile uint8_t x331 = 55U;
	int64_t x332 = INT64_MIN;
	int32_t t79 = 778627;

	t79 = ((x329/x330)==(x331&x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = 70U;
	volatile uint32_t x339 = 7994107U;
	int8_t x340 = INT8_MIN;
	int32_t t80 = -1;

	t80 = ((x337/x338)==(x339&x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x341 = 1476213105437917458LLU;
	volatile int64_t x343 = INT64_MIN;
	static uint32_t x344 = 386362353U;
	volatile int32_t t81 = 7016458;

	t81 = ((x341/x342)==(x343&x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x345 = -2280031745080323120LL;
	uint8_t x347 = UINT8_MAX;
	static int32_t x348 = INT32_MAX;
	volatile int32_t t82 = 10118841;

	t82 = ((x345/x346)==(x347&x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x349 = INT32_MIN;
	volatile int32_t x350 = 402684462;
	volatile uint8_t x351 = 37U;
	static int32_t t83 = -1048305;

	t83 = ((x349/x350)==(x351&x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = 333;
	int16_t x354 = -1;
	volatile int16_t x356 = 12759;
	volatile int32_t t84 = 15579503;

	t84 = ((x353/x354)==(x355&x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = -3270;
	uint32_t x359 = 14U;
	int64_t x360 = 2999297542800861312LL;
	int32_t t85 = 74;

	t85 = ((x357/x358)==(x359&x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x361 = INT32_MIN;
	volatile int64_t x362 = INT64_MIN;
	volatile int8_t x364 = -36;
	int32_t t86 = -26699173;

	t86 = ((x361/x362)==(x363&x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = 8433LL;
	static int32_t x368 = INT32_MIN;
	static int32_t t87 = -11189900;

	t87 = ((x365/x366)==(x367&x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	volatile uint32_t x370 = 3681U;
	int32_t x371 = INT32_MAX;
	int64_t x372 = 1889925LL;
	int32_t t88 = -10;

	t88 = ((x369/x370)==(x371&x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = -1;
	int32_t x378 = 373962186;
	int32_t x379 = INT32_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t89 = -444415881;

	t89 = ((x377/x378)==(x379&x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x381 = 273692235LL;
	static int64_t x382 = -1LL;
	uint64_t x383 = UINT64_MAX;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t90 = 53;

	t90 = ((x381/x382)==(x383&x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = INT8_MIN;
	volatile uint8_t x386 = 21U;
	int8_t x387 = 28;
	int8_t x388 = INT8_MIN;
	int32_t t91 = -8000;

	t91 = ((x385/x386)==(x387&x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = -1;
	int8_t x391 = -1;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t92 = -5530581;

	t92 = ((x389/x390)==(x391&x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x394 = 6339U;
	volatile int16_t x395 = INT16_MAX;
	int64_t x396 = -15769223772686974LL;
	int32_t t93 = -55416;

	t93 = ((x393/x394)==(x395&x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = 1379LL;
	volatile int8_t x400 = INT8_MIN;
	volatile int32_t t94 = -641543207;

	t94 = ((x397/x398)==(x399&x400));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = UINT64_MAX;
	int64_t x402 = 59888634006LL;
	static volatile int8_t x404 = 9;
	static volatile int32_t t95 = 60;

	t95 = ((x401/x402)==(x403&x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = INT32_MIN;
	uint16_t x407 = 471U;
	volatile int8_t x408 = INT8_MAX;
	volatile int32_t t96 = -51;

	t96 = ((x405/x406)==(x407&x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x409 = UINT64_MAX;
	volatile int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t97 = -356807531;

	t97 = ((x409/x410)==(x411&x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x415 = INT32_MAX;
	int16_t x416 = 0;
	volatile int32_t t98 = -267;

	t98 = ((x413/x414)==(x415&x416));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x418 = 3U;
	int16_t x420 = INT16_MIN;
	int32_t t99 = 3009;

	t99 = ((x417/x418)==(x419&x420));

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

