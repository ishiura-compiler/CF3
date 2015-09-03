#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
static int8_t x11 = -2;
volatile int64_t t2 = -10530242085843LL;
volatile uint32_t x33 = 14U;
int32_t x34 = INT32_MIN;
volatile uint32_t t7 = 147373U;
uint16_t x40 = UINT16_MAX;
uint64_t x47 = UINT64_MAX;
int64_t x51 = -1LL;
volatile int16_t x60 = -1;
int32_t t14 = -177583122;
int16_t x65 = -1;
static int32_t x68 = -1;
int64_t t16 = -1276794LL;
volatile int32_t t17 = -104427844;
static int64_t x89 = INT64_MIN;
int64_t x101 = -1LL;
static volatile uint16_t x113 = UINT16_MAX;
int32_t x117 = INT32_MIN;
int16_t x125 = 3964;
static int32_t x127 = INT32_MIN;
int32_t x128 = -1;
volatile uint16_t x135 = 969U;
static uint16_t x136 = 517U;
volatile int32_t t32 = 1059;
static int16_t x138 = 7;
int32_t x150 = -106854;
static int16_t x151 = -1;
int8_t x157 = INT8_MIN;
static int32_t t40 = 101465;
int32_t x174 = 224952;
volatile int32_t t42 = -15434617;
uint64_t x184 = UINT64_MAX;
int32_t x186 = -393883;
static uint16_t x192 = UINT16_MAX;
static int64_t x194 = 234050823644175LL;
int64_t t46 = -3LL;
int32_t t47 = 30074419;
int64_t x203 = -3269582594LL;
int32_t x205 = -1;
int32_t x211 = INT32_MIN;
volatile int8_t x212 = INT8_MAX;
volatile uint64_t x214 = UINT64_MAX;
static int16_t x216 = INT16_MIN;
int32_t x217 = INT32_MIN;
int16_t x225 = INT16_MAX;
uint32_t t54 = 10U;
uint32_t x231 = UINT32_MAX;
volatile int32_t t57 = 522348613;
static uint64_t x261 = 60527548LLU;
int32_t x265 = INT32_MIN;
int16_t x270 = INT16_MIN;
int64_t x271 = 679108488LL;
int32_t x274 = INT32_MAX;
volatile int32_t t66 = 2979;
int32_t x277 = -165;
int32_t x283 = -104;
static volatile uint64_t t68 = 9680017394LLU;
static int16_t x296 = -1;
uint64_t x297 = 2538536LLU;
static volatile int8_t x299 = INT8_MIN;
static int32_t x304 = -1506;
uint16_t x307 = 14047U;
int64_t t74 = 2031231LL;
int64_t x310 = 998173LL;
volatile int32_t t75 = -74651;
int32_t x313 = INT32_MIN;
volatile int32_t t77 = -3428;
int8_t x324 = -2;
volatile int16_t x326 = INT16_MAX;
volatile int64_t t79 = 26LL;
static uint8_t x329 = UINT8_MAX;
uint64_t x337 = 30LLU;
int16_t x338 = -57;
uint64_t t82 = 7277909492387039348LLU;
static uint32_t x347 = 98596892U;
static uint64_t t84 = 30371580457668LLU;
volatile int16_t x351 = INT16_MIN;
static int64_t x355 = 100LL;
int16_t x356 = INT16_MAX;
int32_t t86 = -10878;
int32_t x357 = INT32_MIN;
int16_t x358 = -7;
static uint8_t x360 = 58U;
static volatile int32_t t87 = -2118;
static int32_t x363 = INT32_MIN;
int8_t x367 = -27;
uint8_t x371 = UINT8_MAX;
uint8_t x378 = UINT8_MAX;
int64_t t92 = -637LL;
volatile int32_t t93 = -829471;
uint32_t x392 = 5U;
uint64_t x394 = 180057292463345LLU;
uint16_t x397 = 54U;
int32_t t97 = 103;
int32_t x404 = INT32_MIN;
int16_t x405 = 54;
int8_t x407 = -21;
static volatile uint32_t t99 = 172199U;


void f0(void) {
	int32_t x1 = 17103;
	int64_t x2 = INT64_MIN;
	uint8_t x3 = UINT8_MAX;
	int32_t t0 = 56462;

	t0 = ((x1|(x2==x3))%x4);

	if (t0 != 79) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 105745625646103722LL;
	static uint16_t x6 = UINT16_MAX;
	int64_t x7 = 223877LL;
	static int8_t x8 = INT8_MIN;
	volatile int64_t t1 = -25561674LL;

	t1 = ((x5|(x6==x7))%x8);

	if (t1 != 42LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	uint16_t x10 = 58U;
	static int64_t x12 = 783712984258448687LL;

	t2 = ((x9|(x10==x11))%x12);

	if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int8_t x18 = INT8_MIN;
	int16_t x19 = -9;
	uint8_t x20 = 64U;
	volatile int32_t t3 = -1987;

	t3 = ((x17|(x18==x19))%x20);

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	static uint64_t x23 = 6256082974LLU;
	int32_t x24 = -1;
	static volatile int32_t t4 = 26566031;

	t4 = ((x21|(x22==x23))%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1233;
	static int8_t x26 = INT8_MAX;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 306828U;
	uint32_t t5 = 3537U;

	t5 = ((x25|(x26==x27))%x28);

	if (t5 != 294547U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	int64_t x30 = INT64_MIN;
	uint32_t x31 = UINT32_MAX;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = -315495002;

	t6 = ((x29|(x30==x31))%x32);

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x35 = 733;
	volatile uint8_t x36 = UINT8_MAX;

	t7 = ((x33|(x34==x35))%x36);

	if (t7 != 14U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MAX;
	static int16_t x38 = INT16_MAX;
	int64_t x39 = 3286773115LL;
	volatile int64_t t8 = -4257392406LL;

	t8 = ((x37|(x38==x39))%x40);

	if (t8 != 32767LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = -1;
	volatile uint16_t x43 = UINT16_MAX;
	volatile int16_t x44 = 16;
	volatile uint64_t t9 = 33LLU;

	t9 = ((x41|(x42==x43))%x44);

	if (t9 != 15LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	int64_t x46 = INT64_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = -5987056;

	t10 = ((x45|(x46==x47))%x48);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = UINT16_MAX;
	uint64_t x50 = UINT64_MAX;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t11 = -1013605;

	t11 = ((x49|(x50==x51))%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 24702;
	uint64_t x54 = 894065465770LLU;
	static volatile int8_t x55 = 15;
	int64_t x56 = INT64_MIN;
	volatile int64_t t12 = -3066LL;

	t12 = ((x53|(x54==x55))%x56);

	if (t12 != 24702LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	int16_t x58 = -1;
	int16_t x59 = -1;
	int32_t t13 = -1933;

	t13 = ((x57|(x58==x59))%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x61 = -1;
	int64_t x62 = INT64_MAX;
	volatile int64_t x63 = -26649828104492810LL;
	int32_t x64 = INT32_MIN;

	t14 = ((x61|(x62==x63))%x64);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = 198786832598081LL;
	int64_t x67 = -345LL;
	static volatile int32_t t15 = -2200010;

	t15 = ((x65|(x66==x67))%x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -379264618175348983LL;
	volatile int16_t x70 = -322;
	int32_t x71 = -289360140;
	uint32_t x72 = 893U;

	t16 = ((x69|(x70==x71))%x72);

	if (t16 != -326LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 55U;
	uint8_t x74 = 1U;
	int16_t x75 = 444;
	uint16_t x76 = UINT16_MAX;

	t17 = ((x73|(x74==x75))%x76);

	if (t17 != 55) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -3396LL;
	int16_t x78 = INT16_MIN;
	static uint8_t x79 = 54U;
	int16_t x80 = -1;
	volatile int64_t t18 = -1LL;

	t18 = ((x77|(x78==x79))%x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -25;
	int32_t x82 = INT32_MIN;
	int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t19 = 74213;

	t19 = ((x81|(x82==x83))%x84);

	if (t19 != -25) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = UINT16_MAX;
	int32_t x86 = INT32_MAX;
	int8_t x87 = INT8_MIN;
	static int32_t x88 = 863;
	static int32_t t20 = 572;

	t20 = ((x85|(x86==x87))%x88);

	if (t20 != 810) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x90 = 4;
	int32_t x91 = 26601;
	uint8_t x92 = 20U;
	int64_t t21 = 65592427576LL;

	t21 = ((x89|(x90==x91))%x92);

	if (t21 != -8LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	int32_t x94 = 3;
	int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MIN;
	volatile int64_t t22 = -1138671775LL;

	t22 = ((x93|(x94==x95))%x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MAX;
	int32_t x98 = -3;
	int32_t x99 = INT32_MIN;
	static int8_t x100 = -1;
	volatile int64_t t23 = 446LL;

	t23 = ((x97|(x98==x99))%x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x102 = INT64_MIN;
	volatile uint32_t x103 = 40485627U;
	int8_t x104 = -1;
	static int64_t t24 = 314LL;

	t24 = ((x101|(x102==x103))%x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 2035U;
	uint16_t x106 = 30280U;
	int32_t x107 = INT32_MIN;
	uint16_t x108 = 5U;
	volatile int32_t t25 = -1;

	t25 = ((x105|(x106==x107))%x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 10416LLU;
	int32_t x110 = -1;
	uint32_t x111 = 28839U;
	int32_t x112 = -4888552;
	volatile uint64_t t26 = 12723067688LLU;

	t26 = ((x109|(x110==x111))%x112);

	if (t26 != 10416LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MIN;
	volatile uint8_t x116 = 53U;
	volatile int32_t t27 = -207;

	t27 = ((x113|(x114==x115))%x116);

	if (t27 != 27) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x118 = -1;
	int8_t x119 = INT8_MIN;
	uint8_t x120 = UINT8_MAX;
	static int32_t t28 = 300533;

	t28 = ((x117|(x118==x119))%x120);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -28;
	volatile int32_t x122 = INT32_MIN;
	int8_t x123 = 5;
	volatile uint16_t x124 = 3U;
	int32_t t29 = -1810092;

	t29 = ((x121|(x122==x123))%x124);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x126 = -1;
	int32_t t30 = 54258;

	t30 = ((x125|(x126==x127))%x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x129 = 26U;
	static int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MAX;
	int16_t x132 = INT16_MIN;
	int32_t t31 = 1461338;

	t31 = ((x129|(x130==x131))%x132);

	if (t31 != 26) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = -1;
	static volatile uint8_t x134 = 5U;

	t32 = ((x133|(x134==x135))%x136);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = -1;
	uint16_t x139 = UINT16_MAX;
	static int32_t x140 = -1;
	static volatile int32_t t33 = 13205019;

	t33 = ((x137|(x138==x139))%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	int8_t x142 = 1;
	int32_t x143 = -1;
	int32_t x144 = -1;
	static int32_t t34 = 1;

	t34 = ((x141|(x142==x143))%x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = INT32_MAX;
	int16_t x146 = 532;
	uint8_t x147 = 30U;
	static uint16_t x148 = 31U;
	static volatile int32_t t35 = -235936;

	t35 = ((x145|(x146==x147))%x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x149 = 1651;
	int32_t x152 = -3;
	volatile int32_t t36 = 2;

	t36 = ((x149|(x150==x151))%x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MAX;
	uint16_t x154 = UINT16_MAX;
	int64_t x155 = INT64_MIN;
	volatile int8_t x156 = INT8_MIN;
	int32_t t37 = 63773435;

	t37 = ((x153|(x154==x155))%x156);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x158 = INT64_MIN;
	int64_t x159 = -1LL;
	int8_t x160 = 3;
	int32_t t38 = -1;

	t38 = ((x157|(x158==x159))%x160);

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MAX;
	volatile int64_t x162 = 570186636LL;
	int64_t x163 = -1LL;
	static int64_t x164 = -1LL;
	volatile int64_t t39 = 113585LL;

	t39 = ((x161|(x162==x163))%x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x169 = INT16_MIN;
	int16_t x170 = -1;
	uint32_t x171 = 144578876U;
	static uint16_t x172 = 1789U;

	t40 = ((x169|(x170==x171))%x172);

	if (t40 != -566) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	int64_t x175 = INT64_MAX;
	uint8_t x176 = 14U;
	volatile int64_t t41 = -111LL;

	t41 = ((x173|(x174==x175))%x176);

	if (t41 != -8LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MAX;
	volatile int64_t x178 = INT64_MAX;
	int16_t x179 = -1;
	static int32_t x180 = -965;

	t42 = ((x177|(x178==x179))%x180);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MIN;
	int64_t x183 = -1LL;
	volatile uint64_t t43 = 30489637189LLU;

	t43 = ((x181|(x182==x183))%x184);

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x185 = INT8_MIN;
	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MIN;
	int32_t t44 = -42680;

	t44 = ((x185|(x186==x187))%x188);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x189 = INT16_MAX;
	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	static int32_t t45 = 232478;

	t45 = ((x189|(x190==x191))%x192);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x193 = 615991486LL;
	uint8_t x195 = 5U;
	int8_t x196 = INT8_MIN;

	t46 = ((x193|(x194==x195))%x196);

	if (t46 != 62LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -1;
	int8_t x198 = INT8_MAX;
	uint64_t x199 = 151LLU;
	int16_t x200 = INT16_MIN;

	t47 = ((x197|(x198==x199))%x200);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MIN;
	int8_t x204 = -1;
	static volatile int32_t t48 = -50562861;

	t48 = ((x201|(x202==x203))%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x206 = 10349214291LLU;
	int32_t x207 = 45;
	static uint32_t x208 = 3355133U;
	uint32_t t49 = 22337230U;

	t49 = ((x205|(x206==x207))%x208);

	if (t49 != 397055U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = UINT64_MAX;
	volatile int32_t t50 = 15;

	t50 = ((x209|(x210==x211))%x212);

	if (t50 != -8) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 1U;
	static volatile uint8_t x215 = 2U;
	volatile int32_t t51 = 4611;

	t51 = ((x213|(x214==x215))%x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x218 = INT8_MIN;
	static int8_t x219 = INT8_MIN;
	static volatile int32_t x220 = INT32_MAX;
	volatile int32_t t52 = 141278;

	t52 = ((x217|(x218==x219))%x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 2U;
	int8_t x222 = INT8_MIN;
	volatile int16_t x223 = INT16_MAX;
	static int8_t x224 = -2;
	static volatile uint32_t t53 = 8305272U;

	t53 = ((x221|(x222==x223))%x224);

	if (t53 != 2U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x226 = 17493503374LLU;
	uint64_t x227 = 408417502363LLU;
	uint32_t x228 = 32632950U;

	t54 = ((x225|(x226==x227))%x228);

	if (t54 != 32767U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MAX;
	static uint32_t x230 = UINT32_MAX;
	int16_t x232 = 218;
	static int32_t t55 = 25;

	t55 = ((x229|(x230==x231))%x232);

	if (t55 != 67) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MIN;
	int32_t x234 = -1;
	int64_t x235 = INT64_MAX;
	volatile int8_t x236 = INT8_MIN;
	static int32_t t56 = -86283709;

	t56 = ((x233|(x234==x235))%x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x237 = 4;
	uint64_t x238 = 2781823506808130920LLU;
	uint8_t x239 = 48U;
	int16_t x240 = -1;

	t57 = ((x237|(x238==x239))%x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = 9U;
	static int32_t x242 = -1;
	int16_t x243 = 1142;
	int8_t x244 = INT8_MAX;
	volatile int32_t t58 = -2555;

	t58 = ((x241|(x242==x243))%x244);

	if (t58 != 9) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = INT16_MIN;
	int32_t x246 = -210810;
	volatile uint64_t x247 = UINT64_MAX;
	int8_t x248 = INT8_MAX;
	int32_t t59 = 694;

	t59 = ((x245|(x246==x247))%x248);

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x249 = UINT8_MAX;
	int64_t x250 = INT64_MIN;
	int8_t x251 = -1;
	volatile int32_t x252 = INT32_MIN;
	volatile int32_t t60 = -762;

	t60 = ((x249|(x250==x251))%x252);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x253 = INT32_MAX;
	int32_t x254 = -1;
	int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = 3995569277239261LL;
	static int64_t t61 = -2LL;

	t61 = ((x253|(x254==x255))%x256);

	if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x257 = 80131010157418717LL;
	volatile int16_t x258 = 3;
	int16_t x259 = INT16_MIN;
	int64_t x260 = 471646229959LL;
	volatile int64_t t62 = -3LL;

	t62 = ((x257|(x258==x259))%x260);

	if (t62 != 202272304453LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x262 = 1050573975U;
	int32_t x263 = 657417;
	int16_t x264 = -1;
	uint64_t t63 = 1126604481307LLU;

	t63 = ((x261|(x262==x263))%x264);

	if (t63 != 60527548LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x266 = 11U;
	uint32_t x267 = 1066186600U;
	int64_t x268 = -1LL;
	int64_t t64 = -714LL;

	t64 = ((x265|(x266==x267))%x268);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = UINT64_MAX;
	uint8_t x272 = 18U;
	volatile uint64_t t65 = 92454LLU;

	t65 = ((x269|(x270==x271))%x272);

	if (t65 != 15LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = UINT16_MAX;
	int16_t x275 = INT16_MIN;
	int32_t x276 = INT32_MIN;

	t66 = ((x273|(x274==x275))%x276);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x278 = 5134U;
	volatile int8_t x279 = INT8_MIN;
	uint64_t x280 = 47571252104991149LLU;
	uint64_t t67 = 675472812669LLU;

	t67 = ((x277|(x278==x279))%x280);

	if (t67 != 36669509077976788LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int16_t x282 = -1;
	volatile int32_t x284 = INT32_MAX;

	t68 = ((x281|(x282==x283))%x284);

	if (t68 != 3LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MIN;
	volatile int64_t x286 = INT64_MAX;
	static int8_t x287 = -43;
	int8_t x288 = INT8_MIN;
	int32_t t69 = 400195;

	t69 = ((x285|(x286==x287))%x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 1U;
	uint8_t x290 = 6U;
	static int16_t x291 = 27;
	static int8_t x292 = -45;
	volatile int32_t t70 = 2476805;

	t70 = ((x289|(x290==x291))%x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x293 = -611LL;
	static int32_t x294 = -22127;
	int8_t x295 = -4;
	volatile int64_t t71 = -2779LL;

	t71 = ((x293|(x294==x295))%x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x298 = 24553850U;
	volatile int16_t x300 = -1;
	uint64_t t72 = 32646223927LLU;

	t72 = ((x297|(x298==x299))%x300);

	if (t72 != 2538536LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MAX;
	volatile int32_t x302 = INT32_MIN;
	static int32_t x303 = INT32_MAX;
	volatile int32_t t73 = -4;

	t73 = ((x301|(x302==x303))%x304);

	if (t73 != 1441) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = -1LL;
	int8_t x306 = INT8_MIN;
	static int64_t x308 = -1LL;

	t74 = ((x305|(x306==x307))%x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = 258;
	int64_t x311 = -264291782422LL;
	int32_t x312 = -41;

	t75 = ((x309|(x310==x311))%x312);

	if (t75 != 12) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x314 = INT32_MAX;
	static uint8_t x315 = 3U;
	uint16_t x316 = 4U;
	int32_t t76 = -897;

	t76 = ((x313|(x314==x315))%x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x317 = 3U;
	int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MIN;
	static int8_t x320 = INT8_MIN;

	t77 = ((x317|(x318==x319))%x320);

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x321 = 341576960078370968LL;
	int32_t x322 = INT32_MIN;
	volatile uint32_t x323 = 716U;
	volatile int64_t t78 = 28735639142868767LL;

	t78 = ((x321|(x322==x323))%x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	int64_t x327 = -3817150898LL;
	volatile int8_t x328 = INT8_MIN;

	t79 = ((x325|(x326==x327))%x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x330 = -1;
	static int64_t x331 = 11909968LL;
	uint16_t x332 = 5U;
	volatile int32_t t80 = 1;

	t80 = ((x329|(x330==x331))%x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x333 = INT64_MIN;
	static uint32_t x334 = UINT32_MAX;
	volatile int64_t x335 = 22122796LL;
	volatile int64_t x336 = 87193895668936411LL;
	static volatile int64_t t81 = 220LL;

	t81 = ((x333|(x334==x335))%x336);

	if (t81 != -68012991616452653LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x339 = -1;
	uint8_t x340 = 36U;

	t82 = ((x337|(x338==x339))%x340);

	if (t82 != 30LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x341 = 1620463020557LLU;
	volatile uint32_t x342 = 7U;
	uint64_t x343 = UINT64_MAX;
	volatile uint16_t x344 = 1U;
	uint64_t t83 = 7LLU;

	t83 = ((x341|(x342==x343))%x344);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = INT64_MIN;
	uint8_t x346 = 0U;
	uint64_t x348 = UINT64_MAX;

	t84 = ((x345|(x346==x347))%x348);

	if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = 0;
	int16_t x352 = INT16_MAX;
	volatile int32_t t85 = 111;

	t85 = ((x349|(x350==x351))%x352);

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 13U;
	uint32_t x354 = 7878U;

	t86 = ((x353|(x354==x355))%x356);

	if (t86 != 13) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x359 = -1;

	t87 = ((x357|(x358==x359))%x360);

	if (t87 != -8) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x361 = INT64_MAX;
	int32_t x362 = INT32_MIN;
	volatile int64_t x364 = INT64_MIN;
	int64_t t88 = INT64_MAX;

	t88 = ((x361|(x362==x363))%x364);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = 38U;
	static int16_t x366 = INT16_MIN;
	int32_t x368 = -3;
	int32_t t89 = 14275799;

	t89 = ((x365|(x366==x367))%x368);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x370 = UINT64_MAX;
	int64_t x372 = INT64_MIN;
	static int64_t t90 = 236981251575933LL;

	t90 = ((x369|(x370==x371))%x372);

	if (t90 != -2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x373 = INT32_MIN;
	int64_t x374 = 1057961826764347580LL;
	volatile int64_t x375 = 1191909LL;
	volatile int8_t x376 = INT8_MAX;
	static int32_t t91 = 12219213;

	t91 = ((x373|(x374==x375))%x376);

	if (t91 != -8) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MIN;

	t92 = ((x377|(x378==x379))%x380);

	if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = INT16_MAX;
	static uint64_t x382 = 950648007546LLU;
	int64_t x383 = INT64_MAX;
	volatile int32_t x384 = INT32_MIN;

	t93 = ((x381|(x382==x383))%x384);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x385 = INT16_MIN;
	static int8_t x386 = 57;
	int64_t x387 = -1LL;
	volatile int32_t x388 = INT32_MAX;
	volatile int32_t t94 = 2;

	t94 = ((x385|(x386==x387))%x388);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int16_t x390 = INT16_MAX;
	volatile int16_t x391 = -2809;
	uint32_t t95 = 2947U;

	t95 = ((x389|(x390==x391))%x392);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x395 = 30394LL;
	static volatile uint32_t x396 = 215U;
	uint32_t t96 = 100723012U;

	t96 = ((x393|(x394==x395))%x396);

	if (t96 != 175U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x398 = INT8_MIN;
	uint16_t x399 = UINT16_MAX;
	uint16_t x400 = UINT16_MAX;

	t97 = ((x397|(x398==x399))%x400);

	if (t97 != 54) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = INT8_MAX;
	volatile int32_t x402 = -1948;
	volatile int32_t x403 = INT32_MAX;
	volatile int32_t t98 = 26;

	t98 = ((x401|(x402==x403))%x404);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x406 = -6LL;
	uint32_t x408 = UINT32_MAX;

	t99 = ((x405|(x406==x407))%x408);

	if (t99 != 54U) { NG(); } else { ; }
	
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

