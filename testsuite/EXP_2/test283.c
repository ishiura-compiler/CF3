#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = -22361;
uint64_t x11 = 1105314158107285LLU;
int8_t x26 = -2;
uint16_t x35 = UINT16_MAX;
int8_t x45 = 23;
int32_t x55 = -1;
uint8_t x58 = UINT8_MAX;
uint64_t x61 = UINT64_MAX;
volatile int8_t x63 = INT8_MAX;
volatile int32_t x64 = -1;
static int64_t x73 = 80759700272745640LL;
int8_t x76 = -1;
int64_t x79 = -1LL;
static int16_t x82 = INT16_MIN;
uint32_t x92 = UINT32_MAX;
int32_t x96 = INT32_MIN;
uint16_t x100 = 2U;
uint8_t x106 = 1U;
static int8_t x111 = -1;
int32_t t24 = -756;
static volatile int16_t x113 = -1;
int8_t x119 = INT8_MIN;
int64_t x123 = -40702LL;
static uint8_t x136 = 12U;
volatile int32_t t30 = 28846216;
int32_t t31 = 932;
int64_t x141 = -149197445830690565LL;
uint16_t x142 = 5546U;
uint8_t x146 = UINT8_MAX;
uint32_t x149 = 8960U;
volatile int32_t t34 = -4677822;
int8_t x160 = INT8_MIN;
int32_t x168 = -1;
static uint32_t x169 = 6U;
uint16_t x181 = 1U;
uint16_t x187 = 1955U;
static uint64_t x188 = UINT64_MAX;
int8_t x193 = INT8_MIN;
int8_t x197 = -1;
static int64_t x201 = -1LL;
int32_t x203 = INT32_MAX;
volatile int8_t x204 = -1;
uint32_t x205 = 1418120U;
volatile int32_t t46 = -942;
uint64_t x211 = 91LLU;
volatile int16_t x215 = -1;
int64_t x216 = INT64_MAX;
static uint64_t x225 = UINT64_MAX;
volatile int32_t x228 = INT32_MIN;
int32_t t51 = -807;
static volatile int32_t t53 = 1;
int32_t x249 = 1547;
volatile int32_t x253 = INT32_MAX;
int64_t x255 = 95LL;
static int8_t x262 = INT8_MAX;
volatile int32_t t59 = -412745560;
static int32_t x271 = 39835;
static int8_t x277 = INT8_MIN;
static int64_t x278 = -1LL;
volatile int32_t x279 = INT32_MIN;
uint32_t x285 = 1968U;
int64_t x289 = -29073LL;
uint64_t x293 = UINT64_MAX;
volatile int32_t t67 = 2569188;
static volatile int64_t x307 = INT64_MIN;
int32_t x308 = INT32_MAX;
uint8_t x312 = 67U;
static volatile int32_t t70 = -882263750;
volatile uint32_t x313 = 7640481U;
int16_t x316 = INT16_MIN;
static volatile uint64_t x319 = 93453284691194962LLU;
static int8_t x325 = INT8_MIN;
int32_t x330 = INT32_MIN;
int8_t x331 = -1;
static volatile int32_t t77 = 439079924;
int32_t t78 = -189499064;
int16_t x359 = 163;
static int16_t x362 = INT16_MAX;
int32_t x364 = INT32_MAX;
int16_t x377 = INT16_MIN;
uint64_t x379 = 8562871671107004054LLU;
volatile uint8_t x380 = 0U;
int16_t x381 = INT16_MIN;
uint64_t x384 = 122LLU;
uint16_t x388 = 32U;
static uint16_t x390 = UINT16_MAX;
volatile int32_t t86 = -51755;
static int8_t x393 = INT8_MIN;
static int16_t x394 = -1;
uint16_t x395 = UINT16_MAX;
volatile uint64_t x397 = 356125929282025267LLU;
int16_t x408 = INT16_MIN;
int64_t x410 = -62322LL;
static int64_t x425 = 1LL;
int32_t x440 = INT32_MIN;
volatile uint8_t x442 = 42U;
uint32_t x443 = 13730U;


void f0(void) {
	uint8_t x1 = 13U;
	int32_t x2 = 346421663;
	static int16_t x3 = -9;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -59469806;

	t0 = ((x1<(x2-x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1LLU;
	int32_t x6 = INT32_MIN;
	static uint32_t x7 = 1270883305U;
	int16_t x8 = INT16_MIN;

	t1 = ((x5<(x6-x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint64_t x10 = 303714985LLU;
	int8_t x12 = INT8_MIN;
	static volatile int32_t t2 = 1709;

	t2 = ((x9<(x10-x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 7448833373653LLU;
	uint32_t x14 = UINT32_MAX;
	int32_t x15 = 6806451;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -3247689;

	t3 = ((x13<(x14-x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = -14495150110LL;
	int64_t x19 = INT64_MIN;
	static volatile int16_t x20 = INT16_MIN;
	int32_t t4 = 2380;

	t4 = ((x17<(x18-x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 14331718447LL;
	int32_t x22 = -1;
	uint64_t x23 = 316853194643718LLU;
	volatile int8_t x24 = INT8_MAX;
	static volatile int32_t t5 = -439114;

	t5 = ((x21<(x22-x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = 51630;
	volatile uint32_t x27 = UINT32_MAX;
	int64_t x28 = 14536834LL;
	volatile int32_t t6 = 4457;

	t6 = ((x25<(x26-x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 3;
	uint8_t x30 = 1U;
	static volatile int32_t x31 = 186985476;
	uint16_t x32 = 14U;
	int32_t t7 = -486844;

	t7 = ((x29<(x30-x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 1;
	volatile int32_t x34 = -1;
	volatile int64_t x36 = INT64_MAX;
	volatile int32_t t8 = 774228;

	t8 = ((x33<(x34-x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int64_t x42 = 1768456535100913301LL;
	int8_t x43 = -1;
	volatile int32_t x44 = -1;
	volatile int32_t t9 = -37028;

	t9 = ((x41<(x42-x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x46 = -2LL;
	int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t10 = 185299920;

	t10 = ((x45<(x46-x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	volatile int8_t x50 = INT8_MAX;
	uint16_t x51 = 0U;
	uint32_t x52 = 184986U;
	int32_t t11 = 755489;

	t11 = ((x49<(x50-x51))<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x53 = UINT16_MAX;
	static uint8_t x54 = 1U;
	uint32_t x56 = 6276U;
	static volatile int32_t t12 = -74702535;

	t12 = ((x53<(x54-x55))<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -24;
	int64_t x59 = -1LL;
	int64_t x60 = INT64_MIN;
	int32_t t13 = 0;

	t13 = ((x57<(x58-x59))<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x62 = UINT16_MAX;
	static volatile int32_t t14 = -2384916;

	t14 = ((x61<(x62-x63))<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	uint16_t x71 = 1003U;
	int32_t x72 = INT32_MIN;
	static int32_t t15 = 344995096;

	t15 = ((x69<(x70-x71))<=x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x74 = -14075LL;
	volatile int8_t x75 = 50;
	int32_t t16 = 7766382;

	t16 = ((x73<(x74-x75))<=x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 8U;
	int32_t x78 = 127795415;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t17 = 917948508;

	t17 = ((x77<(x78-x79))<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x83 = UINT64_MAX;
	uint32_t x84 = 448748U;
	volatile int32_t t18 = -16669;

	t18 = ((x81<(x82-x83))<=x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 54U;
	int16_t x86 = INT16_MAX;
	volatile int8_t x87 = INT8_MIN;
	static int32_t x88 = -1;
	volatile int32_t t19 = -13001503;

	t19 = ((x85<(x86-x87))<=x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x89 = 2;
	uint8_t x90 = UINT8_MAX;
	int32_t x91 = 15;
	int32_t t20 = -5;

	t20 = ((x89<(x90-x91))<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = INT16_MIN;
	volatile int8_t x94 = INT8_MIN;
	static int8_t x95 = INT8_MIN;
	int32_t t21 = 8012;

	t21 = ((x93<(x94-x95))<=x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -40;
	int64_t x98 = 48LL;
	int32_t x99 = INT32_MIN;
	volatile int32_t t22 = 5;

	t22 = ((x97<(x98-x99))<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = 1;
	int8_t x107 = -15;
	int16_t x108 = INT16_MIN;
	volatile int32_t t23 = -702;

	t23 = ((x105<(x106-x107))<=x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -141562;
	static int16_t x110 = INT16_MIN;
	int32_t x112 = INT32_MIN;

	t24 = ((x109<(x110-x111))<=x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x114 = UINT32_MAX;
	uint8_t x115 = UINT8_MAX;
	int32_t x116 = INT32_MIN;
	int32_t t25 = 28;

	t25 = ((x113<(x114-x115))<=x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = INT16_MIN;
	volatile uint64_t x118 = 901125516777323479LLU;
	uint8_t x120 = 0U;
	int32_t t26 = -674083895;

	t26 = ((x117<(x118-x119))<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 110045325LLU;
	int64_t x122 = INT64_MIN;
	static int16_t x124 = INT16_MAX;
	int32_t t27 = -42;

	t27 = ((x121<(x122-x123))<=x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = INT32_MIN;
	volatile int64_t x126 = 8681854033213517LL;
	uint32_t x127 = UINT32_MAX;
	static int32_t x128 = -1;
	int32_t t28 = 19575;

	t28 = ((x125<(x126-x127))<=x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = UINT8_MAX;
	static uint64_t x131 = 48200544LLU;
	int16_t x132 = INT16_MIN;
	volatile int32_t t29 = 16375;

	t29 = ((x129<(x130-x131))<=x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x133 = INT64_MIN;
	int64_t x134 = -52LL;
	uint8_t x135 = 12U;

	t30 = ((x133<(x134-x135))<=x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = UINT32_MAX;
	uint8_t x138 = UINT8_MAX;
	volatile int16_t x139 = INT16_MAX;
	volatile int64_t x140 = INT64_MIN;

	t31 = ((x137<(x138-x139))<=x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MAX;
	static volatile int32_t t32 = -26127;

	t32 = ((x141<(x142-x143))<=x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = -9611;
	uint8_t x147 = 3U;
	int32_t x148 = 2346114;
	volatile int32_t t33 = 11895;

	t33 = ((x145<(x146-x147))<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = INT8_MIN;
	int16_t x151 = INT16_MIN;
	static int8_t x152 = INT8_MAX;

	t34 = ((x149<(x150-x151))<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x153 = -13377079298911LL;
	int16_t x154 = -1;
	int16_t x155 = INT16_MAX;
	int64_t x156 = INT64_MAX;
	int32_t t35 = -2;

	t35 = ((x153<(x154-x155))<=x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = 53LLU;
	volatile int8_t x158 = INT8_MIN;
	int16_t x159 = 0;
	static int32_t t36 = 2328284;

	t36 = ((x157<(x158-x159))<=x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x165 = 1;
	int64_t x166 = INT64_MAX;
	uint32_t x167 = UINT32_MAX;
	int32_t t37 = -629;

	t37 = ((x165<(x166-x167))<=x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x170 = UINT16_MAX;
	static int64_t x171 = -65LL;
	static volatile uint16_t x172 = 658U;
	static int32_t t38 = 1521495;

	t38 = ((x169<(x170-x171))<=x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x173 = -1;
	static uint32_t x174 = UINT32_MAX;
	int8_t x175 = -10;
	volatile int64_t x176 = 1037294911744569907LL;
	volatile int32_t t39 = -173301;

	t39 = ((x173<(x174-x175))<=x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = 12157611LL;
	int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MIN;
	volatile int16_t x180 = INT16_MIN;
	int32_t t40 = -10551889;

	t40 = ((x177<(x178-x179))<=x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x182 = 14U;
	static uint8_t x183 = UINT8_MAX;
	static int16_t x184 = INT16_MIN;
	int32_t t41 = -418;

	t41 = ((x181<(x182-x183))<=x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x185 = UINT64_MAX;
	static volatile int64_t x186 = 14975380LL;
	int32_t t42 = -125;

	t42 = ((x185<(x186-x187))<=x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	uint8_t x196 = 30U;
	volatile int32_t t43 = 888823050;

	t43 = ((x193<(x194-x195))<=x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x198 = UINT32_MAX;
	uint64_t x199 = UINT64_MAX;
	uint64_t x200 = 4109LLU;
	volatile int32_t t44 = -81;

	t44 = ((x197<(x198-x199))<=x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x202 = INT64_MAX;
	int32_t t45 = -258004737;

	t45 = ((x201<(x202-x203))<=x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x206 = 1752U;
	int32_t x207 = -1;
	int64_t x208 = -1LL;

	t46 = ((x205<(x206-x207))<=x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x209 = 314656260U;
	int16_t x210 = INT16_MIN;
	static int8_t x212 = 3;
	volatile int32_t t47 = -180407291;

	t47 = ((x209<(x210-x211))<=x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = -274063775331000LL;
	int16_t x214 = 0;
	volatile int32_t t48 = -430519533;

	t48 = ((x213<(x214-x215))<=x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x217 = 1;
	uint16_t x218 = UINT16_MAX;
	int16_t x219 = -14797;
	int8_t x220 = INT8_MIN;
	static int32_t t49 = 0;

	t49 = ((x217<(x218-x219))<=x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = 5721367137LL;
	static int32_t x222 = -1;
	int8_t x223 = -1;
	static int32_t x224 = INT32_MIN;
	static volatile int32_t t50 = 134;

	t50 = ((x221<(x222-x223))<=x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x226 = INT16_MIN;
	uint8_t x227 = 1U;

	t51 = ((x225<(x226-x227))<=x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x229 = 85121U;
	static int32_t x230 = 36855579;
	int64_t x231 = -4476293048812237747LL;
	int8_t x232 = INT8_MIN;
	volatile int32_t t52 = 84;

	t52 = ((x229<(x230-x231))<=x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = INT32_MIN;
	uint32_t x238 = UINT32_MAX;
	int16_t x239 = -1;
	int16_t x240 = -2;

	t53 = ((x237<(x238-x239))<=x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = UINT8_MAX;
	uint32_t x242 = 166U;
	volatile int64_t x243 = -4LL;
	int8_t x244 = -1;
	volatile int32_t t54 = 17;

	t54 = ((x241<(x242-x243))<=x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x245 = UINT16_MAX;
	int32_t x246 = INT32_MIN;
	int32_t x247 = -1;
	int64_t x248 = 240599070857259810LL;
	int32_t t55 = 864;

	t55 = ((x245<(x246-x247))<=x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x250 = INT16_MAX;
	int32_t x251 = -1;
	int64_t x252 = INT64_MAX;
	static volatile int32_t t56 = -72307;

	t56 = ((x249<(x250-x251))<=x252);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x254 = 24381U;
	uint32_t x256 = 1950U;
	int32_t t57 = 0;

	t57 = ((x253<(x254-x255))<=x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x257 = 31U;
	int32_t x258 = -1;
	volatile uint16_t x259 = 3U;
	static int16_t x260 = INT16_MAX;
	volatile int32_t t58 = -10018343;

	t58 = ((x257<(x258-x259))<=x260);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x263 = 63U;
	int16_t x264 = INT16_MIN;

	t59 = ((x261<(x262-x263))<=x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MAX;
	uint16_t x270 = UINT16_MAX;
	int8_t x272 = -36;
	int32_t t60 = 29;

	t60 = ((x269<(x270-x271))<=x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x273 = -1;
	volatile int32_t x274 = INT32_MIN;
	int64_t x275 = INT64_MIN;
	volatile int16_t x276 = -1;
	static int32_t t61 = -3586;

	t61 = ((x273<(x274-x275))<=x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x280 = INT16_MAX;
	volatile int32_t t62 = -290;

	t62 = ((x277<(x278-x279))<=x280);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MIN;
	volatile int16_t x282 = INT16_MIN;
	volatile int32_t x283 = -3676245;
	int32_t x284 = INT32_MIN;
	int32_t t63 = 415;

	t63 = ((x281<(x282-x283))<=x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x286 = 11U;
	volatile uint8_t x287 = 23U;
	int8_t x288 = INT8_MAX;
	int32_t t64 = 566424;

	t64 = ((x285<(x286-x287))<=x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x290 = 4754330U;
	static int32_t x291 = 127;
	uint8_t x292 = 0U;
	int32_t t65 = 308;

	t65 = ((x289<(x290-x291))<=x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x294 = 1929412933923808LL;
	volatile uint32_t x295 = 2U;
	int8_t x296 = 0;
	int32_t t66 = -14058;

	t66 = ((x293<(x294-x295))<=x296);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = INT32_MIN;
	uint16_t x298 = 116U;
	volatile int8_t x299 = INT8_MAX;
	int64_t x300 = -90215LL;

	t67 = ((x297<(x298-x299))<=x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x301 = 2104483964U;
	volatile uint32_t x302 = 1539779U;
	int32_t x303 = 161898;
	int8_t x304 = -1;
	int32_t t68 = 0;

	t68 = ((x301<(x302-x303))<=x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = INT32_MAX;
	static int16_t x306 = -1;
	volatile int32_t t69 = 3322;

	t69 = ((x305<(x306-x307))<=x308);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = INT32_MAX;
	static int16_t x310 = -1;
	uint32_t x311 = 90U;

	t70 = ((x309<(x310-x311))<=x312);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x314 = 27U;
	static volatile uint64_t x315 = 973414037235672LLU;
	int32_t t71 = 82;

	t71 = ((x313<(x314-x315))<=x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x317 = 10LLU;
	int32_t x318 = INT32_MAX;
	uint64_t x320 = 47LLU;
	int32_t t72 = -212244;

	t72 = ((x317<(x318-x319))<=x320);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x326 = INT64_MIN;
	static int16_t x327 = INT16_MIN;
	int64_t x328 = -462530572503135871LL;
	volatile int32_t t73 = -29;

	t73 = ((x325<(x326-x327))<=x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x329 = INT64_MIN;
	static uint32_t x332 = 11U;
	static int32_t t74 = 2249096;

	t74 = ((x329<(x330-x331))<=x332);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x333 = INT16_MIN;
	int8_t x334 = -1;
	uint16_t x335 = 1352U;
	static int16_t x336 = -14;
	int32_t t75 = 19513;

	t75 = ((x333<(x334-x335))<=x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x337 = -6264343348569LL;
	volatile int8_t x338 = -24;
	uint16_t x339 = UINT16_MAX;
	int64_t x340 = -1LL;
	int32_t t76 = -5422530;

	t76 = ((x337<(x338-x339))<=x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x341 = -1;
	int32_t x342 = INT32_MIN;
	int16_t x343 = -15;
	int8_t x344 = INT8_MIN;

	t77 = ((x341<(x342-x343))<=x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x353 = UINT8_MAX;
	volatile uint16_t x354 = 30U;
	int32_t x355 = 1892036;
	uint64_t x356 = 419467226219735LLU;

	t78 = ((x353<(x354-x355))<=x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = 8;
	int64_t x358 = INT64_MAX;
	int32_t x360 = INT32_MIN;
	int32_t t79 = 44470408;

	t79 = ((x357<(x358-x359))<=x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x361 = INT32_MIN;
	int64_t x363 = 636832758LL;
	volatile int32_t t80 = 3168076;

	t80 = ((x361<(x362-x363))<=x364);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = INT8_MAX;
	static uint16_t x366 = UINT16_MAX;
	uint8_t x367 = 1U;
	int64_t x368 = INT64_MAX;
	static volatile int32_t t81 = -21;

	t81 = ((x365<(x366-x367))<=x368);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = 1107789000LL;
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = -10;
	volatile int64_t x372 = INT64_MIN;
	int32_t t82 = 1;

	t82 = ((x369<(x370-x371))<=x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x378 = -1;
	int32_t t83 = 3;

	t83 = ((x377<(x378-x379))<=x380);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x382 = INT8_MIN;
	int32_t x383 = -1;
	volatile int32_t t84 = 1;

	t84 = ((x381<(x382-x383))<=x384);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x385 = 9221341089934LLU;
	volatile int16_t x386 = INT16_MIN;
	static volatile int16_t x387 = INT16_MAX;
	volatile int32_t t85 = 46289554;

	t85 = ((x385<(x386-x387))<=x388);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = 12U;
	static int32_t x391 = INT32_MAX;
	volatile int8_t x392 = INT8_MIN;

	t86 = ((x389<(x390-x391))<=x392);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x396 = 2U;
	int32_t t87 = -1;

	t87 = ((x393<(x394-x395))<=x396);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x398 = INT16_MIN;
	static uint16_t x399 = 6U;
	static uint16_t x400 = UINT16_MAX;
	static volatile int32_t t88 = -11;

	t88 = ((x397<(x398-x399))<=x400);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x401 = 158552626872824271LLU;
	int8_t x402 = -1;
	int32_t x403 = -1;
	int32_t x404 = INT32_MIN;
	int32_t t89 = -3496;

	t89 = ((x401<(x402-x403))<=x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x405 = 11U;
	uint32_t x406 = 25005688U;
	volatile int32_t x407 = INT32_MAX;
	static volatile int32_t t90 = 1;

	t90 = ((x405<(x406-x407))<=x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x409 = 4637U;
	volatile int8_t x411 = INT8_MIN;
	uint16_t x412 = 1U;
	static volatile int32_t t91 = -31851;

	t91 = ((x409<(x410-x411))<=x412);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x413 = INT32_MIN;
	volatile int64_t x414 = -1LL;
	int64_t x415 = 19364938LL;
	uint16_t x416 = 19U;
	static int32_t t92 = -331093337;

	t92 = ((x413<(x414-x415))<=x416);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x417 = -4;
	int8_t x418 = INT8_MIN;
	uint8_t x419 = UINT8_MAX;
	volatile uint16_t x420 = 1339U;
	static volatile int32_t t93 = -255645;

	t93 = ((x417<(x418-x419))<=x420);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x421 = -1;
	static int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	volatile uint32_t x424 = UINT32_MAX;
	int32_t t94 = -4810090;

	t94 = ((x421<(x422-x423))<=x424);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x426 = -347;
	volatile int32_t x427 = -71079;
	uint8_t x428 = 0U;
	volatile int32_t t95 = -300650;

	t95 = ((x425<(x426-x427))<=x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x429 = INT8_MAX;
	int32_t x430 = INT32_MIN;
	uint32_t x431 = UINT32_MAX;
	int64_t x432 = INT64_MIN;
	int32_t t96 = 0;

	t96 = ((x429<(x430-x431))<=x432);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = INT8_MAX;
	int8_t x434 = 11;
	static int32_t x435 = 203188271;
	uint16_t x436 = 511U;
	volatile int32_t t97 = -2458238;

	t97 = ((x433<(x434-x435))<=x436);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x437 = UINT64_MAX;
	static int16_t x438 = -10189;
	uint32_t x439 = 1133044025U;
	static volatile int32_t t98 = 4;

	t98 = ((x437<(x438-x439))<=x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x441 = 93628529500582516LLU;
	int32_t x444 = -2954988;
	int32_t t99 = -2093552;

	t99 = ((x441<(x442-x443))<=x444);

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

