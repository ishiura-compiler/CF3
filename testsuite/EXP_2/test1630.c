#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 2U;
volatile int32_t x24 = INT32_MIN;
int64_t x29 = -22973LL;
static uint32_t t8 = 501132332U;
uint32_t x52 = UINT32_MAX;
uint32_t t12 = 3875096U;
volatile int32_t x75 = -1;
volatile int64_t x77 = -1LL;
int16_t x88 = INT16_MAX;
static int32_t t21 = -1926666;
volatile int16_t x90 = INT16_MIN;
static int32_t x108 = INT32_MAX;
volatile int32_t x109 = INT32_MIN;
static uint64_t x116 = 146593LLU;
int8_t x120 = -1;
volatile uint32_t x123 = UINT32_MAX;
int32_t t30 = 32890840;
int8_t x132 = 8;
volatile int32_t t33 = 1;
volatile uint16_t x154 = 1871U;
int8_t x161 = INT8_MIN;
volatile int32_t t39 = 6333495;
int32_t x167 = 1;
static int64_t x173 = INT64_MIN;
static volatile uint8_t x176 = 24U;
uint32_t x180 = UINT32_MAX;
volatile uint32_t t43 = 2U;
uint8_t x190 = UINT8_MAX;
static uint16_t x193 = 71U;
static volatile int32_t t48 = 1612;
uint32_t t50 = 37U;
uint16_t x215 = 5U;
int64_t x218 = INT64_MIN;
int8_t x223 = -1;
volatile int32_t t54 = -5433686;
volatile int8_t x246 = INT8_MAX;
uint8_t x250 = 25U;
uint32_t t60 = 0U;
int16_t x254 = -1;
int8_t x268 = -1;
volatile int32_t t64 = 1844;
int8_t x275 = -6;
static int32_t x283 = 0;
int32_t x289 = -941;
uint32_t x292 = 614817253U;
static int64_t x295 = -11437LL;
int16_t x300 = 1;
static volatile int32_t t72 = -1;
static volatile int64_t t74 = -2809424LL;
int32_t t75 = 84;
static uint64_t t76 = 59LLU;
volatile uint16_t x321 = UINT16_MAX;
int32_t x329 = 429;
volatile int8_t x330 = INT8_MIN;
uint16_t x332 = 29U;
volatile uint16_t x334 = 0U;
uint64_t x338 = 13024LLU;
int32_t x356 = INT32_MAX;
int32_t x357 = INT32_MIN;
volatile int32_t t86 = -339;
volatile int64_t t88 = -47489577315382090LL;
volatile int64_t x374 = -1LL;
uint32_t x380 = UINT32_MAX;
static int64_t x390 = -1LL;
uint8_t x392 = 1U;
int16_t x400 = INT16_MIN;
int16_t x404 = -3589;
volatile int32_t x407 = INT32_MAX;
static uint16_t x408 = UINT16_MAX;


void f0(void) {
	int8_t x1 = 1;
	static uint16_t x2 = 291U;
	int16_t x3 = -1;
	static uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 1611626705U;

	t0 = ((x1<(x2<=x3))%x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	uint64_t x7 = 929556LLU;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 1182829;

	t1 = ((x5<(x6<=x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 251003;
	uint32_t x10 = 35591U;
	int8_t x11 = INT8_MIN;
	volatile int16_t x12 = -1;
	static int32_t t2 = 31233;

	t2 = ((x9<(x10<=x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	volatile int8_t x14 = 1;
	int16_t x15 = INT16_MIN;
	static int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -149317498LL;

	t3 = ((x13<(x14<=x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int8_t x18 = -1;
	int64_t x19 = -1LL;
	uint8_t x20 = 72U;
	int32_t t4 = -173188827;

	t4 = ((x17<(x18<=x19))%x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 22U;
	int64_t x22 = -1LL;
	int8_t x23 = -1;
	volatile int32_t t5 = 1;

	t5 = ((x21<(x22<=x23))%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = UINT8_MAX;
	int16_t x26 = 13003;
	static int32_t x27 = INT32_MIN;
	static int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -32723018;

	t6 = ((x25<(x26<=x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x30 = 17541U;
	int64_t x31 = -238156LL;
	uint32_t x32 = 371015U;
	static volatile uint32_t t7 = 789059U;

	t7 = ((x29<(x30<=x31))%x32);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 65040166;
	volatile int64_t x34 = INT64_MAX;
	int32_t x35 = 37646;
	uint32_t x36 = 348U;

	t8 = ((x33<(x34<=x35))%x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 3U;
	int32_t x38 = -1;
	static int16_t x39 = INT16_MIN;
	volatile int16_t x40 = -1701;
	volatile int32_t t9 = 3788826;

	t9 = ((x37<(x38<=x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = 2285LL;
	int32_t x43 = 89288488;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 4;

	t10 = ((x41<(x42<=x43))%x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	volatile int32_t x46 = 2057349;
	volatile uint64_t x47 = 9LLU;
	int64_t x48 = -1LL;
	int64_t t11 = -2791295LL;

	t11 = ((x45<(x46<=x47))%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 22951345LL;
	volatile int16_t x50 = -3700;
	int8_t x51 = INT8_MIN;

	t12 = ((x49<(x50<=x51))%x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	volatile int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MAX;
	uint32_t x56 = 10U;
	uint32_t t13 = 1U;

	t13 = ((x53<(x54<=x55))%x56);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 1U;
	static int64_t x58 = INT64_MIN;
	static int8_t x59 = INT8_MAX;
	int64_t x60 = INT64_MIN;
	volatile int64_t t14 = 16857263882977LL;

	t14 = ((x57<(x58<=x59))%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	volatile uint16_t x62 = 415U;
	int16_t x63 = 1;
	volatile int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 7;

	t15 = ((x61<(x62<=x63))%x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 9U;
	uint16_t x66 = 16267U;
	uint32_t x67 = 366485059U;
	static uint64_t x68 = 16LLU;
	volatile uint64_t t16 = 209039727616246LLU;

	t16 = ((x65<(x66<=x67))%x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1;
	int16_t x70 = -1;
	volatile int8_t x71 = 0;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = -12631040628LL;

	t17 = ((x69<(x70<=x71))%x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 20U;
	uint16_t x74 = 57U;
	int64_t x76 = INT64_MIN;
	int64_t t18 = 61599277461039021LL;

	t18 = ((x73<(x74<=x75))%x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	static int8_t x79 = -1;
	volatile uint64_t x80 = 2075077119145616LLU;
	volatile uint64_t t19 = 3698968038068862513LLU;

	t19 = ((x77<(x78<=x79))%x80);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = 4;
	static volatile uint16_t x82 = 127U;
	volatile uint8_t x83 = 59U;
	uint16_t x84 = 57U;
	volatile int32_t t20 = -4687;

	t20 = ((x81<(x82<=x83))%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	int16_t x86 = -1;
	int16_t x87 = INT16_MIN;

	t21 = ((x85<(x86<=x87))%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -1;
	uint64_t x91 = 8871881525206036990LLU;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 520;

	t22 = ((x89<(x90<=x91))%x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	static uint8_t x94 = 0U;
	static int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = 100632;

	t23 = ((x93<(x94<=x95))%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -12141590LL;
	volatile int32_t x102 = INT32_MIN;
	int8_t x103 = -1;
	uint32_t x104 = 387808734U;
	uint32_t t24 = 1U;

	t24 = ((x101<(x102<=x103))%x104);

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x106 = INT32_MIN;
	int8_t x107 = INT8_MAX;
	int32_t t25 = -1264950;

	t25 = ((x105<(x106<=x107))%x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MAX;
	int8_t x112 = 9;
	volatile int32_t t26 = 95;

	t26 = ((x109<(x110<=x111))%x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x114 = 55176U;
	int8_t x115 = -2;
	volatile uint64_t t27 = 16277LLU;

	t27 = ((x113<(x114<=x115))%x116);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = -1;
	volatile int16_t x119 = -373;
	volatile int32_t t28 = -39825769;

	t28 = ((x117<(x118<=x119))%x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	uint32_t x122 = 40941383U;
	int16_t x124 = 1278;
	int32_t t29 = 51;

	t29 = ((x121<(x122<=x123))%x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x125 = -1LL;
	static volatile int8_t x126 = INT8_MIN;
	volatile int8_t x127 = 1;
	int32_t x128 = INT32_MIN;

	t30 = ((x125<(x126<=x127))%x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 6U;
	int8_t x130 = -1;
	int16_t x131 = -1;
	volatile int32_t t31 = 31606152;

	t31 = ((x129<(x130<=x131))%x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 5U;
	int16_t x134 = -6680;
	static uint64_t x135 = UINT64_MAX;
	volatile int64_t x136 = 28124542677786LL;
	volatile int64_t t32 = -115LL;

	t32 = ((x133<(x134<=x135))%x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MAX;
	static uint8_t x138 = UINT8_MAX;
	int32_t x139 = INT32_MIN;
	int8_t x140 = -43;

	t33 = ((x137<(x138<=x139))%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 14U;
	volatile int64_t x142 = 5178059242LL;
	int64_t x143 = INT64_MIN;
	int64_t x144 = -6LL;
	volatile int64_t t34 = 280533038180LL;

	t34 = ((x141<(x142<=x143))%x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x145 = UINT32_MAX;
	int64_t x146 = -1LL;
	int32_t x147 = -1;
	static int8_t x148 = INT8_MAX;
	int32_t t35 = 821201285;

	t35 = ((x145<(x146<=x147))%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = 215487148579LL;
	volatile int64_t x150 = 0LL;
	uint64_t x151 = 246344LLU;
	int8_t x152 = INT8_MIN;
	int32_t t36 = 7281844;

	t36 = ((x149<(x150<=x151))%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	int32_t x155 = -651;
	int64_t x156 = 8058637LL;
	int64_t t37 = 201790LL;

	t37 = ((x153<(x154<=x155))%x156);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MAX;
	uint8_t x158 = 10U;
	static uint8_t x159 = UINT8_MAX;
	int64_t x160 = INT64_MAX;
	int64_t t38 = 120904307029159852LL;

	t38 = ((x157<(x158<=x159))%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = INT16_MAX;
	volatile int8_t x163 = INT8_MAX;
	volatile int8_t x164 = 1;

	t39 = ((x161<(x162<=x163))%x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = UINT16_MAX;
	volatile int8_t x168 = INT8_MIN;
	static volatile int32_t t40 = -468203;

	t40 = ((x165<(x166<=x167))%x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	uint8_t x170 = 6U;
	static uint64_t x171 = 2124281166138284486LLU;
	int64_t x172 = INT64_MIN;
	static int64_t t41 = 452LL;

	t41 = ((x169<(x170<=x171))%x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x174 = 6782778785754541357LLU;
	int16_t x175 = -1;
	volatile int32_t t42 = -504330857;

	t42 = ((x173<(x174<=x175))%x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MAX;
	int8_t x179 = INT8_MIN;

	t43 = ((x177<(x178<=x179))%x180);

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = UINT64_MAX;
	int8_t x182 = -3;
	int8_t x183 = INT8_MIN;
	int8_t x184 = -1;
	static int32_t t44 = 690;

	t44 = ((x181<(x182<=x183))%x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 19698321;
	uint16_t x186 = 0U;
	int8_t x187 = 29;
	int16_t x188 = -1;
	int32_t t45 = 84;

	t45 = ((x185<(x186<=x187))%x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = -24701411LL;
	int64_t x191 = INT64_MIN;
	static volatile int8_t x192 = -1;
	volatile int32_t t46 = -124928103;

	t46 = ((x189<(x190<=x191))%x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x194 = INT32_MIN;
	static int8_t x195 = 2;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t47 = -29;

	t47 = ((x193<(x194<=x195))%x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x197 = UINT16_MAX;
	uint8_t x198 = 1U;
	int64_t x199 = -1LL;
	static volatile int16_t x200 = 9;

	t48 = ((x197<(x198<=x199))%x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	static int16_t x207 = INT16_MAX;
	int8_t x208 = -1;
	int32_t t49 = 123841057;

	t49 = ((x205<(x206<=x207))%x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 47U;
	int64_t x210 = -1LL;
	volatile int32_t x211 = 2759;
	uint32_t x212 = 447915160U;

	t50 = ((x209<(x210<=x211))%x212);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x213 = 3877194448939LLU;
	volatile uint16_t x214 = 4U;
	uint64_t x216 = 8770137547LLU;
	volatile uint64_t t51 = 3048116492108766LLU;

	t51 = ((x213<(x214<=x215))%x216);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = 151463168213LLU;
	volatile int64_t x219 = INT64_MAX;
	static int64_t x220 = INT64_MIN;
	int64_t t52 = -3LL;

	t52 = ((x217<(x218<=x219))%x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 114589729U;
	static int8_t x222 = INT8_MAX;
	volatile int16_t x224 = INT16_MIN;
	int32_t t53 = -18197;

	t53 = ((x221<(x222<=x223))%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;
	volatile int32_t x226 = INT32_MIN;
	static int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;

	t54 = ((x225<(x226<=x227))%x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	static int32_t x230 = INT32_MIN;
	uint16_t x231 = 5U;
	uint8_t x232 = 15U;
	int32_t t55 = -3220141;

	t55 = ((x229<(x230<=x231))%x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	int64_t x234 = 122006525558534LL;
	int8_t x235 = INT8_MIN;
	volatile int64_t x236 = 8228281266LL;
	volatile int64_t t56 = -1480LL;

	t56 = ((x233<(x234<=x235))%x236);

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	volatile int64_t x238 = -1LL;
	static volatile int8_t x239 = INT8_MIN;
	int64_t x240 = 26526856570LL;
	int64_t t57 = -1LL;

	t57 = ((x237<(x238<=x239))%x240);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -1615641LL;
	int64_t x242 = INT64_MAX;
	static int16_t x243 = -1;
	static volatile int64_t x244 = 18361816805LL;
	int64_t t58 = -1378523078LL;

	t58 = ((x241<(x242<=x243))%x244);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x245 = -5;
	uint64_t x247 = 294137110387366LLU;
	int16_t x248 = INT16_MIN;
	volatile int32_t t59 = 10659604;

	t59 = ((x245<(x246<=x247))%x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x249 = 2314U;
	volatile int16_t x251 = -450;
	uint32_t x252 = UINT32_MAX;

	t60 = ((x249<(x250<=x251))%x252);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 583427U;
	int64_t x255 = INT64_MIN;
	volatile int16_t x256 = 2;
	int32_t t61 = 221820057;

	t61 = ((x253<(x254<=x255))%x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	static int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	int8_t x260 = 24;
	int32_t t62 = 12266;

	t62 = ((x257<(x258<=x259))%x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x261 = 47966463LL;
	uint8_t x262 = 2U;
	int16_t x263 = -1;
	int16_t x264 = -1;
	int32_t t63 = 1;

	t63 = ((x261<(x262<=x263))%x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x265 = UINT8_MAX;
	uint8_t x266 = 29U;
	int64_t x267 = -1LL;

	t64 = ((x265<(x266<=x267))%x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MIN;
	static uint32_t x270 = 141858015U;
	uint8_t x271 = 42U;
	uint16_t x272 = UINT16_MAX;
	static volatile int32_t t65 = 145580609;

	t65 = ((x269<(x270<=x271))%x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -102143;
	int8_t x274 = INT8_MAX;
	uint32_t x276 = 18U;
	volatile uint32_t t66 = 6543U;

	t66 = ((x273<(x274<=x275))%x276);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = 324;
	volatile uint64_t x278 = 137858544287306222LLU;
	int32_t x279 = -1;
	int16_t x280 = -1;
	int32_t t67 = 1;

	t67 = ((x277<(x278<=x279))%x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = -1;
	volatile uint64_t x282 = 1826LLU;
	volatile int8_t x284 = INT8_MIN;
	static volatile int32_t t68 = 255;

	t68 = ((x281<(x282<=x283))%x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	int8_t x287 = 0;
	static volatile uint64_t x288 = 332294068629202910LLU;
	static volatile uint64_t t69 = 1965378565751948LLU;

	t69 = ((x285<(x286<=x287))%x288);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x290 = UINT8_MAX;
	volatile int64_t x291 = INT64_MIN;
	uint32_t t70 = 705664445U;

	t70 = ((x289<(x290<=x291))%x292);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = -1LL;
	static int8_t x294 = INT8_MIN;
	uint16_t x296 = UINT16_MAX;
	int32_t t71 = 904364;

	t71 = ((x293<(x294<=x295))%x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x297 = UINT32_MAX;
	static int16_t x298 = -1;
	int32_t x299 = INT32_MAX;

	t72 = ((x297<(x298<=x299))%x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x301 = 17195379U;
	static int32_t x302 = -1;
	uint32_t x303 = 734066U;
	uint32_t x304 = UINT32_MAX;
	static volatile uint32_t t73 = 39U;

	t73 = ((x301<(x302<=x303))%x304);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x305 = 475413553U;
	int8_t x306 = -1;
	int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MIN;

	t74 = ((x305<(x306<=x307))%x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x309 = -1399;
	int16_t x310 = INT16_MAX;
	int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MIN;

	t75 = ((x309<(x310<=x311))%x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MIN;
	uint16_t x318 = 84U;
	int16_t x319 = -1;
	volatile uint64_t x320 = 3815LLU;

	t76 = ((x317<(x318<=x319))%x320);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x322 = INT32_MIN;
	uint64_t x323 = 1LLU;
	volatile int64_t x324 = 56298862563276LL;
	volatile int64_t t77 = 5646142017515LL;

	t77 = ((x321<(x322<=x323))%x324);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;
	int32_t x327 = INT32_MAX;
	volatile uint32_t x328 = 21804053U;
	volatile uint32_t t78 = 1086539083U;

	t78 = ((x325<(x326<=x327))%x328);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x331 = INT32_MIN;
	int32_t t79 = 142916811;

	t79 = ((x329<(x330<=x331))%x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x333 = 89419624446LLU;
	int64_t x335 = -1LL;
	int64_t x336 = -1LL;
	volatile int64_t t80 = -189036203023088LL;

	t80 = ((x333<(x334<=x335))%x336);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x337 = -3203;
	static int64_t x339 = -1LL;
	int32_t x340 = 104563232;
	static int32_t t81 = -21309125;

	t81 = ((x337<(x338<=x339))%x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x341 = UINT8_MAX;
	volatile int64_t x342 = INT64_MAX;
	volatile uint8_t x343 = 56U;
	int32_t x344 = -1;
	int32_t t82 = 1;

	t82 = ((x341<(x342<=x343))%x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x345 = 24786LLU;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	static int64_t t83 = 19LL;

	t83 = ((x345<(x346<=x347))%x348);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x349 = UINT8_MAX;
	volatile int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MAX;
	volatile int32_t x352 = INT32_MIN;
	volatile int32_t t84 = -94214;

	t84 = ((x349<(x350<=x351))%x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = INT16_MIN;
	volatile int32_t x354 = -1;
	int8_t x355 = -25;
	int32_t t85 = 74;

	t85 = ((x353<(x354<=x355))%x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x358 = 226U;
	volatile int8_t x359 = -20;
	uint8_t x360 = 13U;

	t86 = ((x357<(x358<=x359))%x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = 27176U;
	volatile int16_t x362 = 61;
	volatile int32_t x363 = -1;
	int8_t x364 = INT8_MAX;
	int32_t t87 = -1869;

	t87 = ((x361<(x362<=x363))%x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x365 = UINT16_MAX;
	int32_t x366 = -1;
	int32_t x367 = 580;
	volatile int64_t x368 = 36619105533164LL;

	t88 = ((x365<(x366<=x367))%x368);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x369 = 0U;
	int64_t x370 = INT64_MIN;
	static int8_t x371 = INT8_MAX;
	int8_t x372 = 54;
	volatile int32_t t89 = 43599;

	t89 = ((x369<(x370<=x371))%x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = INT32_MAX;
	volatile uint16_t x375 = 7U;
	uint32_t x376 = UINT32_MAX;
	uint32_t t90 = 1U;

	t90 = ((x373<(x374<=x375))%x376);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = 1158303;
	int32_t x378 = 81983007;
	int32_t x379 = -3080;
	uint32_t t91 = 488U;

	t91 = ((x377<(x378<=x379))%x380);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x381 = INT64_MIN;
	uint8_t x382 = 5U;
	int8_t x383 = -7;
	static uint32_t x384 = 1U;
	volatile uint32_t t92 = 3U;

	t92 = ((x381<(x382<=x383))%x384);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x385 = UINT64_MAX;
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MIN;
	volatile int8_t x388 = -1;
	volatile int32_t t93 = 223915;

	t93 = ((x385<(x386<=x387))%x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = 1472176125126022LL;
	int64_t x391 = INT64_MAX;
	static volatile int32_t t94 = 116;

	t94 = ((x389<(x390<=x391))%x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t95 = 3869;

	t95 = ((x393<(x394<=x395))%x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = UINT16_MAX;
	int8_t x398 = INT8_MAX;
	volatile uint32_t x399 = 204U;
	int32_t t96 = 9211;

	t96 = ((x397<(x398<=x399))%x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -1;
	int8_t x402 = INT8_MIN;
	int16_t x403 = -1;
	volatile int32_t t97 = 0;

	t97 = ((x401<(x402<=x403))%x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x405 = -1;
	static int16_t x406 = INT16_MIN;
	static int32_t t98 = 30178303;

	t98 = ((x405<(x406<=x407))%x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x409 = -2840;
	int8_t x410 = -1;
	uint8_t x411 = 1U;
	uint32_t x412 = 309385U;
	volatile uint32_t t99 = 30198U;

	t99 = ((x409<(x410<=x411))%x412);

	if (t99 != 1U) { NG(); } else { ; }
	
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

