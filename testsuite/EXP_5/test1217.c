#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = INT64_MIN;
int32_t x5 = 3185;
int32_t x6 = -1;
int32_t x7 = INT32_MIN;
uint64_t x10 = UINT64_MAX;
int32_t x35 = -30;
uint16_t x40 = UINT16_MAX;
volatile int32_t t9 = 87315306;
static uint64_t x46 = 313903772817326LLU;
int32_t x50 = -1;
int32_t x57 = -1;
uint16_t x58 = 8101U;
static int64_t x59 = INT64_MIN;
uint32_t x60 = 73U;
int16_t x63 = -2;
static uint16_t x64 = UINT16_MAX;
uint16_t x66 = 5U;
uint32_t x68 = 7U;
static int16_t x74 = INT16_MIN;
int64_t x75 = 2060597050LL;
static int32_t t18 = 43;
int64_t x87 = INT64_MIN;
volatile int64_t x91 = INT64_MIN;
int32_t x95 = INT32_MIN;
static int64_t x106 = 37777189LL;
int32_t x115 = INT32_MAX;
int64_t x116 = INT64_MIN;
static uint8_t x117 = 33U;
volatile int32_t t29 = 99638409;
int32_t x123 = 116;
volatile int16_t x131 = INT16_MAX;
int32_t t32 = -6;
volatile int64_t x135 = INT64_MIN;
int64_t x136 = -2LL;
volatile int32_t t33 = 0;
int32_t x137 = INT32_MAX;
volatile int32_t t34 = -62;
static uint64_t x144 = 3807976004LLU;
volatile int32_t t35 = -142229147;
static int32_t x145 = -250;
int8_t x155 = INT8_MIN;
volatile int32_t t40 = 4542604;
uint8_t x165 = UINT8_MAX;
int8_t x170 = INT8_MAX;
uint16_t x172 = UINT16_MAX;
static volatile int32_t t42 = -583205;
static int64_t x181 = 533672374LL;
int32_t t45 = -4701;
volatile int64_t x186 = -1LL;
int16_t x192 = INT16_MAX;
static volatile int32_t t47 = 2892866;
int8_t x196 = INT8_MIN;
int32_t t48 = -14521;
static int32_t x197 = INT32_MAX;
int64_t x202 = INT64_MAX;
static int32_t x210 = INT32_MIN;
int32_t t52 = -2392;
static int32_t x216 = 503390;
static int8_t x224 = INT8_MIN;
int8_t x227 = -1;
volatile int32_t t57 = 595;
int32_t t58 = 7;
int16_t x239 = INT16_MIN;
uint64_t x241 = 60120983373LLU;
int16_t x242 = INT16_MIN;
static int32_t t60 = -46;
uint64_t x246 = 25074736624LLU;
volatile int8_t x260 = INT8_MIN;
int32_t x266 = INT32_MIN;
volatile int32_t t66 = -380685324;
static volatile uint32_t x281 = 1767319082U;
int32_t x290 = INT32_MIN;
volatile int32_t t72 = -1;
int16_t x294 = INT16_MIN;
int8_t x296 = INT8_MAX;
uint64_t x297 = UINT64_MAX;
int32_t x300 = INT32_MIN;
int32_t x306 = INT32_MIN;
volatile uint32_t x311 = UINT32_MAX;
static uint64_t x316 = UINT64_MAX;
int16_t x320 = -1;
static int16_t x325 = INT16_MIN;
int64_t x327 = 367646608031358259LL;
int8_t x328 = 0;
int64_t x330 = INT64_MIN;
int8_t x331 = -1;
static volatile int32_t t82 = 325196334;
int16_t x336 = 81;
uint16_t x337 = 18U;
volatile uint64_t x347 = 125088LLU;
int64_t x355 = -1LL;
uint64_t x360 = 63647301557LLU;
static volatile int16_t x363 = 79;
uint8_t x364 = 57U;
int8_t x365 = INT8_MIN;
static int64_t x368 = INT64_MIN;
int8_t x369 = -1;
volatile int32_t t94 = 40;
volatile int32_t t95 = -942436;
static uint32_t x388 = UINT32_MAX;
static volatile int32_t t97 = 0;
static volatile int8_t x396 = -1;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	int32_t t0 = -6;

	t0 = (x1==((x2==x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x8 = -10;
	int32_t t1 = -40455;

	t1 = (x5==((x6==x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	uint64_t x11 = 933875468387LLU;
	static int32_t x12 = -1;
	volatile int32_t t2 = 20321;

	t2 = (x9==((x10==x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = -1;
	volatile int16_t x15 = -1;
	uint64_t x16 = 5777474664477LLU;
	static volatile int32_t t3 = 1012579;

	t3 = (x13==((x14==x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 19894346U;
	int8_t x18 = 39;
	int16_t x19 = 1689;
	uint8_t x20 = UINT8_MAX;
	static volatile int32_t t4 = -63439139;

	t4 = (x17==((x18==x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	int64_t x22 = INT64_MAX;
	volatile int32_t x23 = 191998403;
	uint16_t x24 = 665U;
	volatile int32_t t5 = -3143577;

	t5 = (x21==((x22==x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int16_t x26 = INT16_MIN;
	static int64_t x27 = 470095LL;
	int64_t x28 = INT64_MIN;
	static volatile int32_t t6 = -390482344;

	t6 = (x25==((x26==x27)*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 2361819LLU;
	int32_t x30 = INT32_MAX;
	volatile int8_t x31 = 3;
	uint16_t x32 = UINT16_MAX;
	static int32_t t7 = -1;

	t7 = (x29==((x30==x31)*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 164861U;
	uint16_t x34 = UINT16_MAX;
	int8_t x36 = INT8_MAX;
	int32_t t8 = -248403624;

	t8 = (x33==((x34==x35)*x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	static int16_t x38 = 683;
	int8_t x39 = -48;

	t9 = (x37==((x38==x39)*x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = -35;
	int64_t x43 = INT64_MIN;
	volatile int8_t x44 = INT8_MIN;
	int32_t t10 = -1;

	t10 = (x41==((x42==x43)*x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static volatile int8_t x47 = -1;
	int16_t x48 = -1;
	int32_t t11 = 4973917;

	t11 = (x45==((x46==x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 0;
	int64_t x51 = INT64_MAX;
	volatile int8_t x52 = INT8_MIN;
	static int32_t t12 = 6005289;

	t12 = (x49==((x50==x51)*x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	static uint8_t x54 = 11U;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = INT32_MAX;
	volatile int32_t t13 = 17461395;

	t13 = (x53==((x54==x55)*x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t t14 = -14660;

	t14 = (x57==((x58==x59)*x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	static uint8_t x62 = 11U;
	volatile int32_t t15 = 29725;

	t15 = (x61==((x62==x63)*x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 80785LLU;
	int8_t x67 = INT8_MIN;
	volatile int32_t t16 = 0;

	t16 = (x65==((x66==x67)*x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint64_t x70 = 888LLU;
	int8_t x71 = INT8_MIN;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = -433;

	t17 = (x69==((x70==x71)*x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int8_t x76 = -1;

	t18 = (x73==((x74==x75)*x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = -1;
	static uint16_t x78 = UINT16_MAX;
	int8_t x79 = -1;
	int64_t x80 = 2409LL;
	static volatile int32_t t19 = -1106;

	t19 = (x77==((x78==x79)*x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = 108078;
	uint32_t x82 = UINT32_MAX;
	volatile uint16_t x83 = UINT16_MAX;
	uint8_t x84 = 4U;
	volatile int32_t t20 = 2;

	t20 = (x81==((x82==x83)*x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 73750117753830570LL;
	int16_t x86 = INT16_MIN;
	uint32_t x88 = UINT32_MAX;
	volatile int32_t t21 = -16;

	t21 = (x85==((x86==x87)*x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 0U;
	static int64_t x90 = INT64_MAX;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 1079;

	t22 = (x89==((x90==x91)*x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MIN;
	static volatile int8_t x96 = 1;
	int32_t t23 = -7;

	t23 = (x93==((x94==x95)*x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 125U;
	static int32_t x98 = INT32_MIN;
	uint32_t x99 = 1U;
	volatile uint8_t x100 = UINT8_MAX;
	int32_t t24 = 58;

	t24 = (x97==((x98==x99)*x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MIN;
	volatile int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -195522;

	t25 = (x101==((x102==x103)*x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -13199;
	volatile int16_t x107 = -1;
	static int64_t x108 = -27LL;
	int32_t t26 = -10883941;

	t26 = (x105==((x106==x107)*x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	int16_t x110 = 948;
	static uint16_t x111 = 100U;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 1;

	t27 = (x109==((x110==x111)*x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1847;
	int8_t x114 = INT8_MIN;
	volatile int32_t t28 = -33195;

	t28 = (x113==((x114==x115)*x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x118 = -124;
	volatile int32_t x119 = -190104494;
	uint16_t x120 = 0U;

	t29 = (x117==((x118==x119)*x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MIN;
	int16_t x124 = INT16_MAX;
	static volatile int32_t t30 = 55;

	t30 = (x121==((x122==x123)*x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static uint16_t x126 = 519U;
	int16_t x127 = -395;
	int64_t x128 = INT64_MIN;
	volatile int32_t t31 = -12677;

	t31 = (x125==((x126==x127)*x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	int8_t x130 = INT8_MIN;
	int8_t x132 = 27;

	t32 = (x129==((x130==x131)*x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 1916718U;
	int16_t x134 = 2486;

	t33 = (x133==((x134==x135)*x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = 0U;

	t34 = (x137==((x138==x139)*x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 558608LLU;
	volatile uint32_t x142 = UINT32_MAX;
	static int8_t x143 = INT8_MIN;

	t35 = (x141==((x142==x143)*x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = -1;
	uint16_t x147 = UINT16_MAX;
	static int64_t x148 = -1LL;
	int32_t t36 = -167;

	t36 = (x145==((x146==x147)*x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 125U;
	volatile int8_t x150 = INT8_MIN;
	volatile int64_t x151 = -1LL;
	int64_t x152 = 1663563232146963LL;
	int32_t t37 = 9307;

	t37 = (x149==((x150==x151)*x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = 2U;
	int8_t x154 = 43;
	uint16_t x156 = UINT16_MAX;
	static volatile int32_t t38 = 154974322;

	t38 = (x153==((x154==x155)*x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	uint32_t x158 = UINT32_MAX;
	volatile int16_t x159 = INT16_MIN;
	volatile uint8_t x160 = 4U;
	volatile int32_t t39 = -1011102859;

	t39 = (x157==((x158==x159)*x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 707330729984406859LLU;
	uint8_t x162 = 2U;
	uint64_t x163 = UINT64_MAX;
	uint16_t x164 = 26U;

	t40 = (x161==((x162==x163)*x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = UINT16_MAX;
	uint64_t x167 = 13589LLU;
	static int64_t x168 = INT64_MAX;
	volatile int32_t t41 = 0;

	t41 = (x165==((x166==x167)*x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1557;
	int8_t x171 = -2;

	t42 = (x169==((x170==x171)*x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	volatile uint32_t x174 = 9412U;
	int32_t x175 = INT32_MIN;
	int32_t x176 = INT32_MIN;
	int32_t t43 = 9;

	t43 = (x173==((x174==x175)*x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 1U;
	uint16_t x178 = 342U;
	uint16_t x179 = 2355U;
	uint8_t x180 = 1U;
	static volatile int32_t t44 = 300;

	t44 = (x177==((x178==x179)*x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	int64_t x183 = -1LL;
	uint8_t x184 = 0U;

	t45 = (x181==((x182==x183)*x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = 0U;
	uint8_t x187 = 120U;
	int16_t x188 = 0;
	volatile int32_t t46 = 60401167;

	t46 = (x185==((x186==x187)*x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	volatile int8_t x190 = -2;
	int64_t x191 = 68LL;

	t47 = (x189==((x190==x191)*x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 24U;
	volatile int32_t x194 = INT32_MAX;
	int8_t x195 = -33;

	t48 = (x193==((x194==x195)*x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x198 = 4746U;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MAX;
	int32_t t49 = 2013;

	t49 = (x197==((x198==x199)*x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 385835594;
	int64_t x203 = -1LL;
	uint32_t x204 = 827810U;
	static int32_t t50 = 167292;

	t50 = (x201==((x202==x203)*x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 20157237821LL;
	uint8_t x206 = UINT8_MAX;
	int64_t x207 = INT64_MIN;
	static uint64_t x208 = 3735077101660LLU;
	int32_t t51 = 14779;

	t51 = (x205==((x206==x207)*x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 207U;
	uint64_t x211 = 32089523117461LLU;
	volatile int16_t x212 = INT16_MIN;

	t52 = (x209==((x210==x211)*x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MIN;
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 2436LLU;
	static volatile int32_t t53 = 0;

	t53 = (x213==((x214==x215)*x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 4LLU;
	uint8_t x218 = UINT8_MAX;
	uint8_t x219 = 3U;
	int16_t x220 = -1;
	static int32_t t54 = -1;

	t54 = (x217==((x218==x219)*x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = -1;
	int8_t x223 = INT8_MIN;
	static int32_t t55 = -3;

	t55 = (x221==((x222==x223)*x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	static uint16_t x226 = 27108U;
	int16_t x228 = -2222;
	int32_t t56 = -425;

	t56 = (x225==((x226==x227)*x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = UINT16_MAX;
	int64_t x230 = -129866680LL;
	int32_t x231 = INT32_MAX;
	volatile int8_t x232 = -32;

	t57 = (x229==((x230==x231)*x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 1714010912LLU;
	int8_t x234 = 23;
	static uint32_t x235 = 5691903U;
	volatile uint16_t x236 = UINT16_MAX;

	t58 = (x233==((x234==x235)*x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x237 = 109483094U;
	int8_t x238 = -1;
	uint32_t x240 = 9U;
	int32_t t59 = 224;

	t59 = (x237==((x238==x239)*x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x243 = 23U;
	int32_t x244 = 1803680;

	t60 = (x241==((x242==x243)*x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 19U;
	uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MIN;
	int32_t t61 = -937749362;

	t61 = (x245==((x246==x247)*x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int16_t x250 = INT16_MAX;
	int16_t x251 = -3482;
	volatile int8_t x252 = 57;
	int32_t t62 = 732;

	t62 = (x249==((x250==x251)*x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = 16;
	int32_t x254 = INT32_MAX;
	static int16_t x255 = 880;
	volatile int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -7;

	t63 = (x253==((x254==x255)*x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MAX;
	static int16_t x258 = -52;
	static int16_t x259 = -1;
	int32_t t64 = -7;

	t64 = (x257==((x258==x259)*x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	uint32_t x262 = 423892U;
	uint16_t x263 = 1995U;
	static int32_t x264 = -6;
	static volatile int32_t t65 = 2;

	t65 = (x261==((x262==x263)*x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	uint64_t x267 = UINT64_MAX;
	int16_t x268 = INT16_MAX;

	t66 = (x265==((x266==x267)*x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 1727;
	int16_t x270 = INT16_MIN;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = UINT32_MAX;
	int32_t t67 = 806;

	t67 = (x269==((x270==x271)*x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 1707U;
	volatile int8_t x274 = -1;
	int16_t x275 = INT16_MAX;
	int16_t x276 = -2;
	int32_t t68 = -193574;

	t68 = (x273==((x274==x275)*x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 696U;
	int16_t x278 = INT16_MIN;
	volatile int32_t x279 = -1;
	int16_t x280 = 777;
	volatile int32_t t69 = 3545;

	t69 = (x277==((x278==x279)*x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x282 = INT64_MIN;
	uint16_t x283 = 381U;
	int64_t x284 = -1LL;
	volatile int32_t t70 = 164;

	t70 = (x281==((x282==x283)*x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 0U;
	int8_t x286 = INT8_MIN;
	volatile uint16_t x287 = UINT16_MAX;
	volatile uint64_t x288 = 68512660271LLU;
	volatile int32_t t71 = -8;

	t71 = (x285==((x286==x287)*x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 1176U;
	int16_t x291 = -12940;
	int16_t x292 = INT16_MIN;

	t72 = (x289==((x290==x291)*x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x293 = 1080U;
	uint64_t x295 = 42535818LLU;
	static volatile int32_t t73 = 4;

	t73 = (x293==((x294==x295)*x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MIN;
	uint64_t x299 = 411LLU;
	volatile int32_t t74 = -1410675;

	t74 = (x297==((x298==x299)*x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -3828;
	volatile int64_t x302 = -25LL;
	int32_t x303 = INT32_MIN;
	uint16_t x304 = UINT16_MAX;
	int32_t t75 = 6231;

	t75 = (x301==((x302==x303)*x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 1124;
	int8_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 167338977;

	t76 = (x305==((x306==x307)*x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x309 = -1;
	int16_t x310 = INT16_MIN;
	int64_t x312 = INT64_MAX;
	static volatile int32_t t77 = 830580336;

	t77 = (x309==((x310==x311)*x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 227;
	int16_t x314 = INT16_MAX;
	int8_t x315 = INT8_MIN;
	int32_t t78 = 217;

	t78 = (x313==((x314==x315)*x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = -1;
	static uint16_t x318 = 17U;
	int8_t x319 = INT8_MIN;
	volatile int32_t t79 = 46;

	t79 = (x317==((x318==x319)*x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int32_t x322 = INT32_MIN;
	volatile int64_t x323 = INT64_MIN;
	static int64_t x324 = INT64_MIN;
	int32_t t80 = 60;

	t80 = (x321==((x322==x323)*x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MIN;
	int32_t t81 = 58452;

	t81 = (x325==((x326==x327)*x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 15U;
	uint16_t x332 = 10234U;

	t82 = (x329==((x330==x331)*x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -96;
	int64_t x334 = INT64_MAX;
	int16_t x335 = -1;
	static int32_t t83 = -24;

	t83 = (x333==((x334==x335)*x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x338 = 25788U;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = -1;
	static int32_t t84 = -59132;

	t84 = (x337==((x338==x339)*x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = INT8_MAX;
	static int16_t x344 = -10;
	volatile int32_t t85 = 968486;

	t85 = (x341==((x342==x343)*x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = 98U;
	static int16_t x346 = INT16_MIN;
	volatile uint32_t x348 = 63546094U;
	static int32_t t86 = -3413174;

	t86 = (x345==((x346==x347)*x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = -6523;
	static uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MAX;
	int32_t x352 = -1;
	int32_t t87 = -4034552;

	t87 = (x349==((x350==x351)*x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int16_t x354 = INT16_MIN;
	static uint32_t x356 = UINT32_MAX;
	volatile int32_t t88 = -1263;

	t88 = (x353==((x354==x355)*x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	uint16_t x358 = UINT16_MAX;
	volatile int16_t x359 = -503;
	int32_t t89 = 2;

	t89 = (x357==((x358==x359)*x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	static int64_t x362 = INT64_MIN;
	volatile int32_t t90 = 1;

	t90 = (x361==((x362==x363)*x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = 23;
	uint8_t x367 = 11U;
	int32_t t91 = -497045883;

	t91 = (x365==((x366==x367)*x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x370 = 309537917255269LL;
	int64_t x371 = -1LL;
	volatile int32_t x372 = INT32_MIN;
	int32_t t92 = 46;

	t92 = (x369==((x370==x371)*x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	int32_t x374 = INT32_MAX;
	uint16_t x375 = UINT16_MAX;
	uint64_t x376 = 1489681LLU;
	volatile int32_t t93 = 0;

	t93 = (x373==((x374==x375)*x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	int16_t x378 = -1;
	int32_t x379 = 3552681;
	uint16_t x380 = 0U;

	t94 = (x377==((x378==x379)*x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	int64_t x383 = -1LL;
	int64_t x384 = INT64_MIN;

	t95 = (x381==((x382==x383)*x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MIN;
	static uint64_t x386 = UINT64_MAX;
	int64_t x387 = INT64_MIN;
	static int32_t t96 = -665667327;

	t96 = (x385==((x386==x387)*x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	static int8_t x390 = -1;
	uint32_t x391 = 7183501U;
	volatile uint32_t x392 = UINT32_MAX;

	t97 = (x389==((x390==x391)*x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = 4248U;
	volatile int16_t x394 = -496;
	int16_t x395 = INT16_MIN;
	int32_t t98 = -376298;

	t98 = (x393==((x394==x395)*x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 42823169415495LL;
	static int64_t x398 = INT64_MIN;
	int32_t x399 = INT32_MIN;
	uint8_t x400 = 4U;
	int32_t t99 = -663171849;

	t99 = (x397==((x398==x399)*x400));

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

