#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -194807316;
int16_t x8 = -1;
uint64_t x13 = 59LLU;
int32_t t5 = 0;
int64_t x27 = 14283LL;
int8_t x31 = INT8_MAX;
static volatile uint64_t x32 = 3875326229LLU;
volatile int32_t t7 = -26964;
uint8_t x37 = 85U;
uint8_t x39 = 0U;
volatile uint8_t x47 = UINT8_MAX;
static int16_t x50 = INT16_MIN;
volatile int32_t t14 = -17348;
uint32_t x62 = 1308654384U;
static uint64_t x63 = 120077236667LLU;
static uint32_t x71 = 180U;
int8_t x72 = INT8_MAX;
volatile uint64_t x73 = 3850827LLU;
volatile uint8_t x76 = UINT8_MAX;
int32_t x81 = INT32_MIN;
static uint8_t x85 = UINT8_MAX;
volatile int8_t x88 = 30;
uint64_t x92 = 0LLU;
int8_t x93 = INT8_MIN;
int32_t t24 = -658521;
int32_t x108 = INT32_MIN;
volatile int32_t t27 = -18;
static volatile int32_t t28 = 1;
static volatile int16_t x123 = -7287;
static int16_t x130 = INT16_MAX;
int32_t x132 = INT32_MIN;
volatile int8_t x135 = INT8_MIN;
uint64_t x143 = 7LLU;
volatile int32_t x145 = INT32_MIN;
int32_t x157 = 3;
int32_t x163 = -15035539;
int32_t t40 = -6472;
int8_t x166 = INT8_MAX;
static int64_t x172 = -1LL;
int32_t x179 = -738;
volatile int64_t x180 = -11609083028983LL;
int32_t t47 = -207671556;
int16_t x195 = -1;
int16_t x202 = INT16_MIN;
int64_t x206 = INT64_MIN;
volatile int32_t t53 = 77307;
uint16_t x218 = 2U;
uint16_t x248 = UINT16_MAX;
volatile int32_t t61 = -3;
int8_t x258 = -2;
int16_t x260 = INT16_MIN;
int8_t x263 = INT8_MAX;
int64_t x264 = 256377495581144LL;
int16_t x265 = -6724;
int8_t x268 = INT8_MAX;
static volatile int16_t x277 = -1;
uint16_t x282 = 0U;
volatile int64_t x289 = -1LL;
int8_t x295 = 3;
int32_t t73 = 30141869;
uint16_t x298 = 28654U;
uint16_t x299 = 442U;
static volatile uint16_t x301 = 1467U;
static uint32_t x302 = UINT32_MAX;
uint64_t x307 = 1291075069770147LLU;
int32_t x318 = -199;
volatile int32_t t79 = 10;
uint16_t x321 = 116U;
volatile uint8_t x322 = UINT8_MAX;
int8_t x326 = INT8_MAX;
uint16_t x327 = 3464U;
static volatile uint32_t x333 = 70741511U;
int32_t x343 = INT32_MIN;
int32_t t85 = 579109787;
int32_t x346 = INT32_MAX;
int8_t x348 = -17;
int16_t x352 = -1;
int32_t t87 = 940652;
uint16_t x354 = 11363U;
int16_t x356 = -11388;
int8_t x360 = 3;
static uint8_t x371 = UINT8_MAX;
static int8_t x375 = -1;
volatile int32_t t93 = 0;
volatile int8_t x378 = INT8_MIN;
int32_t t94 = -16778;
int32_t x384 = -220;
volatile int8_t x387 = -3;
int32_t t98 = 26;
uint32_t x400 = UINT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MIN;
	uint32_t x4 = 725U;

	t0 = ((x1|(x2==x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 18U;
	int16_t x6 = INT16_MIN;
	int8_t x7 = 0;
	volatile int32_t t1 = -414;

	t1 = ((x5|(x6==x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint32_t x10 = UINT32_MAX;
	int32_t x11 = -1;
	volatile int64_t x12 = INT64_MIN;
	int32_t t2 = 1798289;

	t2 = ((x9|(x10==x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	volatile int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 22349946;

	t3 = ((x13|(x14==x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	uint64_t x18 = 17818LLU;
	uint8_t x19 = 2U;
	static int16_t x20 = INT16_MIN;
	static int32_t t4 = -3507;

	t4 = ((x17|(x18==x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	int32_t x22 = -1;
	int16_t x23 = 0;
	static uint8_t x24 = 44U;

	t5 = ((x21|(x22==x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint16_t x26 = 1U;
	static volatile int8_t x28 = 26;
	volatile int32_t t6 = 233692;

	t6 = ((x25|(x26==x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 18426536LL;
	int8_t x30 = INT8_MIN;

	t7 = ((x29|(x30==x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	static int32_t x34 = INT32_MAX;
	volatile int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MIN;
	int32_t t8 = 17792073;

	t8 = ((x33|(x34==x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x38 = -1;
	int32_t x40 = -750818;
	static int32_t t9 = 18968;

	t9 = ((x37|(x38==x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int32_t x42 = -1;
	uint8_t x43 = 30U;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -400;

	t10 = ((x41|(x42==x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	static uint64_t x46 = 5644773LLU;
	int32_t x48 = INT32_MIN;
	int32_t t11 = -13;

	t11 = ((x45|(x46==x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	static uint16_t x51 = UINT16_MAX;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = -2654454;

	t12 = ((x49|(x50==x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	static volatile uint64_t x54 = UINT64_MAX;
	volatile int8_t x55 = INT8_MIN;
	uint64_t x56 = 7738978737856246LLU;
	int32_t t13 = 1355164;

	t13 = ((x53|(x54==x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 56;
	int32_t x58 = -1;
	int32_t x59 = -60847197;
	int64_t x60 = -1LL;

	t14 = ((x57|(x58==x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int8_t x64 = -1;
	int32_t t15 = 73;

	t15 = ((x61|(x62==x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 728LLU;
	static uint16_t x66 = 25U;
	int16_t x67 = INT16_MIN;
	static uint8_t x68 = 0U;
	static int32_t t16 = -6;

	t16 = ((x65|(x66==x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1829025365595386LL;
	int64_t x70 = -79262415500362966LL;
	int32_t t17 = -126;

	t17 = ((x69|(x70==x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = 0;
	uint8_t x75 = 0U;
	volatile int32_t t18 = -2138;

	t18 = ((x73|(x74==x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	volatile int64_t x78 = 86135584247642LL;
	int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = 2;

	t19 = ((x77|(x78==x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = INT64_MIN;
	static uint32_t x83 = UINT32_MAX;
	volatile int32_t x84 = 1;
	volatile int32_t t20 = 7456;

	t20 = ((x81|(x82==x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MAX;
	int32_t x87 = -1;
	int32_t t21 = -40116;

	t21 = ((x85|(x86==x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MAX;
	int16_t x90 = INT16_MAX;
	volatile int32_t x91 = -1;
	static int32_t t22 = -7445;

	t22 = ((x89|(x90==x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = 78U;
	int32_t t23 = 1;

	t23 = ((x93|(x94==x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	volatile uint16_t x98 = UINT16_MAX;
	int32_t x99 = -1;
	uint16_t x100 = 1612U;

	t24 = ((x97|(x98==x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	int16_t x102 = INT16_MIN;
	static int64_t x103 = INT64_MIN;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t25 = 132074362;

	t25 = ((x101|(x102==x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = 51;
	int16_t x106 = INT16_MIN;
	static volatile int32_t x107 = INT32_MIN;
	volatile int32_t t26 = -3577;

	t26 = ((x105|(x106==x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 0U;
	volatile int64_t x110 = -1LL;
	volatile uint8_t x111 = 2U;
	uint64_t x112 = UINT64_MAX;

	t27 = ((x109|(x110==x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	static uint32_t x114 = 64962U;
	int64_t x115 = INT64_MIN;
	uint16_t x116 = 1U;

	t28 = ((x113|(x114==x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int32_t x118 = -173;
	int32_t x119 = -1;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -1726;

	t29 = ((x117|(x118==x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = 0;
	static int16_t x124 = INT16_MIN;
	int32_t t30 = -7712;

	t30 = ((x121|(x122==x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = -1;
	uint8_t x126 = UINT8_MAX;
	static volatile int64_t x127 = INT64_MAX;
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = 393888;

	t31 = ((x125|(x126==x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 23498698606LLU;
	int16_t x131 = INT16_MIN;
	int32_t t32 = -1;

	t32 = ((x129|(x130==x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static uint8_t x134 = UINT8_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 3715717;

	t33 = ((x133|(x134==x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 3;
	static volatile uint64_t x138 = 775612524206268397LLU;
	static int64_t x139 = INT64_MIN;
	uint64_t x140 = 158LLU;
	static volatile int32_t t34 = 1;

	t34 = ((x137|(x138==x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static int64_t x142 = -1LL;
	static int16_t x144 = 1;
	volatile int32_t t35 = 56897487;

	t35 = ((x141|(x142==x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = -1LL;
	int32_t x147 = 326837969;
	static int64_t x148 = INT64_MIN;
	int32_t t36 = -6;

	t36 = ((x145|(x146==x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = -1;
	static uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t37 = 40;

	t37 = ((x149|(x150==x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x153 = UINT8_MAX;
	static int16_t x154 = INT16_MIN;
	volatile int8_t x155 = 0;
	static uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = -26215174;

	t38 = ((x153|(x154==x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = UINT16_MAX;
	int8_t x159 = INT8_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = 838;

	t39 = ((x157|(x158==x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 2U;
	volatile int64_t x162 = -15223LL;
	uint32_t x164 = 3643144U;

	t40 = ((x161|(x162==x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	int32_t x167 = -1;
	int8_t x168 = 3;
	volatile int32_t t41 = -205395707;

	t41 = ((x165|(x166==x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 47U;
	static int64_t x170 = -1LL;
	uint32_t x171 = 20985U;
	int32_t t42 = -356;

	t42 = ((x169|(x170==x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	static int8_t x174 = -1;
	volatile int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 55971283;

	t43 = ((x173|(x174==x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -2;
	uint8_t x178 = 10U;
	volatile int32_t t44 = 386841509;

	t44 = ((x177|(x178==x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	int64_t x183 = INT64_MIN;
	volatile uint16_t x184 = UINT16_MAX;
	int32_t t45 = 699;

	t45 = ((x181|(x182==x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -2167685;
	int8_t x186 = -7;
	int8_t x187 = -1;
	uint8_t x188 = 54U;
	int32_t t46 = -828;

	t46 = ((x185|(x186==x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	volatile uint64_t x190 = 4978513LLU;
	uint32_t x191 = 2442U;
	uint32_t x192 = 275435202U;

	t47 = ((x189|(x190==x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	static uint64_t x194 = UINT64_MAX;
	static int16_t x196 = -57;
	volatile int32_t t48 = 0;

	t48 = ((x193|(x194==x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	int64_t x198 = INT64_MIN;
	volatile int16_t x199 = INT16_MIN;
	static uint16_t x200 = 74U;
	static int32_t t49 = -3657;

	t49 = ((x197|(x198==x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MIN;
	static int32_t t50 = 14407;

	t50 = ((x201|(x202==x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 18740U;
	volatile int64_t x207 = INT64_MAX;
	int64_t x208 = 358180192846650077LL;
	static int32_t t51 = -1014728900;

	t51 = ((x205|(x206==x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int8_t x210 = -1;
	int32_t x211 = INT32_MAX;
	static volatile int32_t x212 = INT32_MIN;
	int32_t t52 = -294541;

	t52 = ((x209|(x210==x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	static uint64_t x214 = UINT64_MAX;
	static volatile int8_t x215 = INT8_MIN;
	uint16_t x216 = UINT16_MAX;

	t53 = ((x213|(x214==x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = -920;
	volatile int64_t x219 = -1LL;
	int32_t x220 = INT32_MAX;
	int32_t t54 = 3;

	t54 = ((x217|(x218==x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	static int16_t x222 = INT16_MIN;
	static int8_t x223 = 17;
	uint64_t x224 = 4685656651944LLU;
	int32_t t55 = -24488931;

	t55 = ((x221|(x222==x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	static volatile uint64_t x226 = 53568050305699LLU;
	volatile int32_t x227 = 21;
	volatile uint64_t x228 = UINT64_MAX;
	static volatile int32_t t56 = 950405;

	t56 = ((x225|(x226==x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 1;
	int32_t x230 = -3485424;
	int64_t x231 = -4LL;
	int64_t x232 = 115182076LL;
	int32_t t57 = -9717177;

	t57 = ((x229|(x230==x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	int16_t x234 = -1;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MIN;
	int32_t t58 = 1176;

	t58 = ((x233|(x234==x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = -22166336;
	int64_t x238 = -1LL;
	int64_t x239 = -403LL;
	int32_t x240 = -1;
	int32_t t59 = 203;

	t59 = ((x237|(x238==x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	static volatile uint32_t x242 = UINT32_MAX;
	int64_t x243 = -3952045LL;
	int64_t x244 = INT64_MIN;
	int32_t t60 = -3846;

	t60 = ((x241|(x242==x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -3985818982076645586LL;
	static int16_t x246 = INT16_MAX;
	uint32_t x247 = 226138U;

	t61 = ((x245|(x246==x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = -1;
	int16_t x250 = INT16_MAX;
	int32_t x251 = 1;
	volatile uint16_t x252 = 17036U;
	volatile int32_t t62 = -6;

	t62 = ((x249|(x250==x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	int64_t x254 = INT64_MIN;
	static volatile int32_t x255 = -2406;
	static uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = -1952;

	t63 = ((x253|(x254==x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	int64_t x259 = INT64_MIN;
	static volatile int32_t t64 = 56561;

	t64 = ((x257|(x258==x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	int32_t x262 = -1;
	volatile int32_t t65 = -1771706;

	t65 = ((x261|(x262==x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = -4152;
	int8_t x267 = -3;
	volatile int32_t t66 = -942761;

	t66 = ((x265|(x266==x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	static uint8_t x270 = 10U;
	uint8_t x271 = 0U;
	int8_t x272 = INT8_MAX;
	int32_t t67 = -144964135;

	t67 = ((x269|(x270==x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	uint8_t x274 = 55U;
	volatile uint16_t x275 = 143U;
	int32_t x276 = -1;
	static volatile int32_t t68 = 88;

	t68 = ((x273|(x274==x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = -1;
	volatile int64_t x279 = -2404LL;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = 925389329;

	t69 = ((x277|(x278==x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	uint32_t x283 = 441U;
	static volatile int16_t x284 = INT16_MAX;
	volatile int32_t t70 = 55180362;

	t70 = ((x281|(x282==x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	static int64_t x287 = INT64_MIN;
	uint64_t x288 = UINT64_MAX;
	int32_t t71 = -1624;

	t71 = ((x285|(x286==x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x290 = UINT64_MAX;
	uint8_t x291 = 15U;
	int16_t x292 = INT16_MAX;
	volatile int32_t t72 = 533060;

	t72 = ((x289|(x290==x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 0;
	int32_t x294 = INT32_MAX;
	uint64_t x296 = 1752031165402915321LLU;

	t73 = ((x293|(x294==x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 20U;
	int16_t x300 = -2855;
	volatile int32_t t74 = -670;

	t74 = ((x297|(x298==x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x303 = INT16_MIN;
	int32_t x304 = -1;
	volatile int32_t t75 = -96917972;

	t75 = ((x301|(x302==x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	volatile uint64_t x306 = UINT64_MAX;
	int16_t x308 = -1;
	static volatile int32_t t76 = 2906707;

	t76 = ((x305|(x306==x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = -1LL;
	int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	uint32_t x312 = UINT32_MAX;
	int32_t t77 = 19883252;

	t77 = ((x309|(x310==x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = 72U;
	int16_t x314 = INT16_MAX;
	int64_t x315 = INT64_MAX;
	static uint32_t x316 = 9392223U;
	volatile int32_t t78 = -3262422;

	t78 = ((x313|(x314==x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -6;
	int16_t x319 = -1;
	static int32_t x320 = INT32_MIN;

	t79 = ((x317|(x318==x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x323 = INT64_MAX;
	uint16_t x324 = 0U;
	static int32_t t80 = -2335543;

	t80 = ((x321|(x322==x323))<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = UINT8_MAX;
	int64_t x328 = INT64_MAX;
	static int32_t t81 = -1;

	t81 = ((x325|(x326==x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 2128312U;
	uint64_t x330 = 666684512265LLU;
	int8_t x331 = 3;
	int16_t x332 = -23;
	volatile int32_t t82 = -828040969;

	t82 = ((x329|(x330==x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = UINT32_MAX;
	volatile uint8_t x335 = UINT8_MAX;
	uint32_t x336 = UINT32_MAX;
	int32_t t83 = 15;

	t83 = ((x333|(x334==x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = -1;
	uint32_t x339 = 6180U;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t84 = 1;

	t84 = ((x337|(x338==x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 2U;
	int64_t x342 = 785058041135868LL;
	uint64_t x344 = 56LLU;

	t85 = ((x341|(x342==x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	int16_t x347 = 1;
	int32_t t86 = 1757;

	t86 = ((x345|(x346==x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = 1;
	volatile uint8_t x351 = 14U;

	t87 = ((x349|(x350==x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	int32_t x355 = INT32_MIN;
	int32_t t88 = -5;

	t88 = ((x353|(x354==x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	volatile int16_t x358 = -1;
	int8_t x359 = -1;
	int32_t t89 = -517096082;

	t89 = ((x357|(x358==x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 5030U;
	int64_t x362 = INT64_MAX;
	int64_t x363 = INT64_MIN;
	int64_t x364 = 6LL;
	volatile int32_t t90 = 107;

	t90 = ((x361|(x362==x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 8057174060LLU;
	volatile uint16_t x366 = 0U;
	volatile int64_t x367 = -1LL;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = -16573;

	t91 = ((x365|(x366==x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	static volatile uint8_t x370 = 107U;
	uint32_t x372 = UINT32_MAX;
	volatile int32_t t92 = 2035765;

	t92 = ((x369|(x370==x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 9U;
	volatile int16_t x374 = 62;
	volatile int16_t x376 = -1;

	t93 = ((x373|(x374==x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 1;
	volatile int32_t x379 = INT32_MAX;
	int64_t x380 = INT64_MAX;

	t94 = ((x377|(x378==x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = UINT32_MAX;
	volatile uint16_t x382 = 32U;
	volatile uint16_t x383 = 0U;
	volatile int32_t t95 = 134965;

	t95 = ((x381|(x382==x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int64_t x386 = INT64_MIN;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 1;

	t96 = ((x385|(x386==x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	static int8_t x390 = -1;
	volatile uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 46;

	t97 = ((x389|(x390==x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 23;
	static uint16_t x394 = UINT16_MAX;
	volatile int32_t x395 = -237920;
	int64_t x396 = INT64_MIN;

	t98 = ((x393|(x394==x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 50557912U;
	int32_t x398 = 762;
	volatile int16_t x399 = INT16_MIN;
	int32_t t99 = -1725;

	t99 = ((x397|(x398==x399))<=x400);

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

