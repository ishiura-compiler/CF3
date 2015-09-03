#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = -37;
uint8_t x3 = UINT8_MAX;
int64_t x4 = INT64_MIN;
volatile int64_t x17 = 1LL;
static int32_t x18 = INT32_MAX;
volatile int8_t x19 = -17;
static volatile uint16_t x21 = 3U;
uint8_t x37 = UINT8_MAX;
int8_t x38 = INT8_MAX;
int32_t x39 = -1;
volatile uint32_t t15 = UINT32_MAX;
int64_t x83 = INT64_MAX;
volatile int64_t t20 = 4132567LL;
int32_t x85 = 1;
static int32_t x86 = 1;
volatile int32_t t21 = -7;
int16_t x98 = INT16_MIN;
static uint8_t x109 = 31U;
int64_t x120 = -1LL;
static volatile uint64_t t30 = 8215256LLU;
int8_t x130 = -1;
volatile int8_t x139 = 1;
volatile int32_t t34 = 285915016;
uint16_t x146 = 680U;
static uint16_t x147 = UINT16_MAX;
int32_t x151 = INT32_MAX;
int8_t x153 = 7;
static volatile int32_t t42 = INT32_MAX;
uint32_t t43 = 74869U;
uint64_t x192 = 7763116819068037LLU;
int64_t t49 = 47623974504LL;
int32_t x206 = INT32_MIN;
static int8_t x214 = 63;
int8_t x230 = -26;
int32_t x236 = INT32_MAX;
uint64_t t54 = 8599982945084071LLU;
static uint32_t x245 = 227210861U;
static int8_t x246 = INT8_MIN;
static int32_t x248 = 109211;
int32_t x255 = 8491;
uint8_t x257 = 1U;
uint32_t x260 = 3399U;
int8_t x261 = INT8_MIN;
uint16_t x264 = UINT16_MAX;
uint32_t t63 = 13575U;
volatile uint64_t x273 = UINT64_MAX;
uint8_t x274 = 3U;
volatile uint64_t t64 = 9209892859589198419LLU;
uint64_t t65 = 5472665296039LLU;
int32_t x281 = INT32_MIN;
int64_t t66 = 17LL;
uint64_t t67 = 51LLU;
static int8_t x289 = -1;
int8_t x293 = -1;
int32_t x294 = -274163;
uint32_t x297 = 171469U;
static int32_t x299 = -1;
static volatile uint64_t t70 = 1557703612825085988LLU;
int8_t x306 = INT8_MAX;
static uint32_t x312 = UINT32_MAX;
volatile int64_t t74 = 903800LL;
int64_t x317 = -245262946939799LL;
uint16_t x318 = 505U;
static int64_t x321 = -24574LL;
int32_t x323 = -88;
volatile int8_t x328 = -1;
static int32_t x334 = -171309158;
int8_t x339 = -27;
uint32_t x351 = UINT32_MAX;
int32_t x361 = 100;
int16_t x362 = -1;
uint16_t x363 = UINT16_MAX;
int64_t x366 = -1LL;
int64_t x367 = -1LL;
int8_t x371 = -18;
volatile int64_t x382 = -80664248LL;
int8_t x397 = 0;
int64_t x407 = 8427413487839LL;
volatile int64_t t98 = 42459486057LL;
static int16_t x415 = INT16_MAX;


void f0(void) {
	static int8_t x2 = INT8_MIN;
	volatile int64_t t0 = -223LL;

	t0 = ((x1|(x2%x3))-x4);

	if (t0 != 9223372036854775771LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 601585U;
	int8_t x6 = -14;
	volatile int32_t x7 = INT32_MIN;
	int16_t x8 = -1;
	static uint32_t t1 = 12U;

	t1 = ((x5|(x6%x7))-x8);

	if (t1 != 4294967284U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static volatile uint64_t x10 = 154LLU;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MIN;
	static uint64_t t2 = 48640113909098LLU;

	t2 = ((x9|(x10%x11))-x12);

	if (t2 != 127LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile uint64_t x14 = 984893563297479LLU;
	int64_t x15 = INT64_MIN;
	int32_t x16 = -82482702;
	static uint64_t t3 = 465232628474464LLU;

	t3 = ((x13|(x14%x15))-x16);

	if (t3 != 9224356930500555989LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x20 = INT16_MIN;
	int64_t t4 = -283553LL;

	t4 = ((x17|(x18%x19))-x20);

	if (t4 != 32777LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x22 = 71U;
	static int32_t x23 = INT32_MIN;
	volatile int8_t x24 = -1;
	static int32_t t5 = -53760814;

	t5 = ((x21|(x22%x23))-x24);

	if (t5 != 72) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	int16_t x26 = INT16_MAX;
	uint16_t x27 = UINT16_MAX;
	volatile uint32_t x28 = UINT32_MAX;
	uint32_t t6 = 57251U;

	t6 = ((x25|(x26%x27))-x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1819541U;
	volatile int64_t x30 = INT64_MAX;
	volatile int8_t x31 = -1;
	int64_t x32 = -1LL;
	volatile int64_t t7 = -17LL;

	t7 = ((x29|(x30%x31))-x32);

	if (t7 != 1819542LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int64_t x34 = -1300806434904575LL;
	static int16_t x35 = -1;
	uint8_t x36 = UINT8_MAX;
	uint64_t t8 = 129334431380471LLU;

	t8 = ((x33|(x34%x35))-x36);

	if (t8 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 13;

	t9 = ((x37|(x38%x39))-x40);

	if (t9 != 33023) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	int32_t x42 = -120;
	int32_t x43 = -1;
	static int64_t x44 = -1LL;
	static volatile int64_t t10 = 261650049LL;

	t10 = ((x41|(x42%x43))-x44);

	if (t10 != 2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	static uint32_t x46 = 1541U;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = 3320;
	uint64_t t11 = 407626578745309LLU;

	t11 = ((x45|(x46%x47))-x48);

	if (t11 != 18446744073709550087LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MAX;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = 542U;
	volatile int64_t t12 = -29582LL;

	t12 = ((x49|(x50%x51))-x52);

	if (t12 != 4294966753LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	uint32_t x54 = 57427379U;
	int16_t x55 = INT16_MAX;
	static uint8_t x56 = 12U;
	int64_t t13 = -2423842853LL;

	t13 = ((x53|(x54%x55))-x56);

	if (t13 != -13LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -11196297887LL;
	uint8_t x58 = UINT8_MAX;
	int16_t x59 = INT16_MIN;
	int32_t x60 = -1;
	static volatile int64_t t14 = 4276170437LL;

	t14 = ((x57|(x58%x59))-x60);

	if (t14 != -11196297728LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	uint8_t x62 = UINT8_MAX;
	volatile uint32_t x63 = 480404U;
	uint8_t x64 = 0U;

	t15 = ((x61|(x62%x63))-x64);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	static uint32_t x66 = UINT32_MAX;
	int8_t x67 = 1;
	static int32_t x68 = INT32_MIN;
	uint32_t t16 = 13834U;

	t16 = ((x65|(x66%x67))-x68);

	if (t16 != 2147483775U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int64_t x70 = 8LL;
	int16_t x71 = -7006;
	int32_t x72 = -670692;
	volatile int64_t t17 = -32438586LL;

	t17 = ((x69|(x70%x71))-x72);

	if (t17 != 703459LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 508U;
	int32_t x74 = INT32_MAX;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MAX;
	volatile uint64_t t18 = 1379624100176LLU;

	t18 = ((x73|(x74%x75))-x76);

	if (t18 != 2147483520LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x77 = 30U;
	int64_t x78 = -5909868564896LL;
	int16_t x79 = 433;
	volatile uint32_t x80 = 5121336U;
	int64_t t19 = 2518496028510LL;

	t19 = ((x77|(x78%x79))-x80);

	if (t19 != -5121657LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 0;
	int64_t x82 = -150736876031LL;
	uint16_t x84 = UINT16_MAX;

	t20 = ((x81|(x82%x83))-x84);

	if (t20 != -150736941566LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x87 = UINT8_MAX;
	uint8_t x88 = UINT8_MAX;

	t21 = ((x85|(x86%x87))-x88);

	if (t21 != -254) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 237409589LLU;
	int8_t x90 = 37;
	int8_t x91 = INT8_MIN;
	volatile uint64_t x92 = UINT64_MAX;
	volatile uint64_t t22 = 7105LLU;

	t22 = ((x89|(x90%x91))-x92);

	if (t22 != 237409590LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MIN;
	static uint32_t x95 = 35724535U;
	int16_t x96 = INT16_MIN;
	static int64_t t23 = 8419056505873LL;

	t23 = ((x93|(x94%x95))-x96);

	if (t23 != 13014LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	static uint8_t x99 = UINT8_MAX;
	int64_t x100 = INT64_MAX;
	uint64_t t24 = 7LLU;

	t24 = ((x97|(x98%x99))-x100);

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = -1;
	static uint8_t x103 = 53U;
	int64_t x104 = INT64_MIN;
	int64_t t25 = INT64_MAX;

	t25 = ((x101|(x102%x103))-x104);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -114;
	static int32_t x106 = -1;
	static volatile int64_t x107 = -49920129895278LL;
	static int64_t x108 = INT64_MIN;
	int64_t t26 = INT64_MAX;

	t26 = ((x105|(x106%x107))-x108);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -1875;

	t27 = ((x109|(x110%x111))-x112);

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 10194LLU;
	static uint16_t x114 = UINT16_MAX;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;
	uint64_t t28 = 189614638541181LLU;

	t28 = ((x113|(x114%x115))-x116);

	if (t28 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -39;
	int32_t x118 = -1;
	int64_t x119 = INT64_MAX;
	volatile int64_t t29 = -154299017495847LL;

	t29 = ((x117|(x118%x119))-x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 4U;
	volatile uint64_t x122 = 10824351210LLU;
	volatile int64_t x123 = INT64_MAX;
	int8_t x124 = INT8_MIN;

	t30 = ((x121|(x122%x123))-x124);

	if (t30 != 10824351342LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -57955LL;
	int8_t x126 = INT8_MIN;
	static int16_t x127 = INT16_MAX;
	volatile uint8_t x128 = UINT8_MAX;
	volatile int64_t t31 = -779436830LL;

	t31 = ((x125|(x126%x127))-x128);

	if (t31 != -354LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 1;
	int64_t x131 = INT64_MAX;
	static volatile uint16_t x132 = 373U;
	volatile int64_t t32 = -23LL;

	t32 = ((x129|(x130%x131))-x132);

	if (t32 != -374LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = INT32_MIN;
	volatile uint64_t x134 = 117656575LLU;
	int64_t x135 = INT64_MIN;
	static volatile int16_t x136 = -1;
	volatile uint64_t t33 = 8177063763235570LLU;

	t33 = ((x133|(x134%x135))-x136);

	if (t33 != 18446744071679724544LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = 1;
	int8_t x138 = -1;
	static int8_t x140 = INT8_MAX;

	t34 = ((x137|(x138%x139))-x140);

	if (t34 != -126) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static int64_t x142 = -907984969872722LL;
	int32_t x143 = -289;
	volatile int64_t x144 = INT64_MIN;
	uint64_t t35 = 6315LLU;

	t35 = ((x141|(x142%x143))-x144);

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 388U;
	uint64_t x148 = 22332595290LLU;
	uint64_t t36 = 2234441948042LLU;

	t36 = ((x145|(x146%x147))-x148);

	if (t36 != 18446744051376957266LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 0;
	uint32_t x150 = 12688272U;
	static volatile int16_t x152 = INT16_MAX;
	volatile uint32_t t37 = 21976U;

	t37 = ((x149|(x150%x151))-x152);

	if (t37 != 12655505U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = 2163;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = UINT64_MAX;
	uint64_t t38 = 47643378370404LLU;

	t38 = ((x153|(x154%x155))-x156);

	if (t38 != 2168LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = INT64_MAX;
	static int32_t x162 = INT32_MAX;
	volatile int32_t x163 = INT32_MAX;
	int8_t x164 = 24;
	volatile int64_t t39 = -7911516256LL;

	t39 = ((x161|(x162%x163))-x164);

	if (t39 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MAX;
	int16_t x167 = INT16_MAX;
	uint64_t x168 = UINT64_MAX;
	static uint64_t t40 = 474850LLU;

	t40 = ((x165|(x166%x167))-x168);

	if (t40 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = -1;
	uint8_t x170 = 4U;
	int64_t x171 = INT64_MAX;
	int8_t x172 = INT8_MIN;
	volatile int64_t t41 = -1485LL;

	t41 = ((x169|(x170%x171))-x172);

	if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	static int16_t x174 = INT16_MAX;
	int8_t x175 = INT8_MAX;
	int32_t x176 = INT32_MIN;

	t42 = ((x173|(x174%x175))-x176);

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x177 = 59U;
	int32_t x178 = INT32_MAX;
	int16_t x179 = -1;
	volatile int32_t x180 = -1;

	t43 = ((x177|(x178%x179))-x180);

	if (t43 != 60U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = -1;
	int16_t x182 = INT16_MAX;
	uint16_t x183 = 989U;
	int8_t x184 = -63;
	static volatile int32_t t44 = -56943036;

	t44 = ((x181|(x182%x183))-x184);

	if (t44 != 62) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = 110432;
	static int32_t x187 = 26;
	volatile int8_t x188 = INT8_MIN;
	volatile int32_t t45 = -32486;

	t45 = ((x185|(x186%x187))-x188);

	if (t45 != -32630) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MAX;
	static int64_t x190 = INT64_MIN;
	volatile uint64_t x191 = 1900207393LLU;
	volatile uint64_t t46 = 943396648689325986LLU;

	t46 = ((x189|(x190%x191))-x192);

	if (t46 != 9215608920035707770LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = -6;
	int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MAX;
	int32_t x196 = INT32_MIN;
	volatile int32_t t47 = -1;

	t47 = ((x193|(x194%x195))-x196);

	if (t47 != 2147483646) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x197 = INT16_MAX;
	volatile int32_t x198 = INT32_MIN;
	uint8_t x199 = UINT8_MAX;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t48 = 82;

	t48 = ((x197|(x198%x199))-x200);

	if (t48 != -256) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -8358788;
	static int8_t x202 = -14;
	volatile int64_t x203 = -1LL;
	static uint16_t x204 = 13U;

	t49 = ((x201|(x202%x203))-x204);

	if (t49 != -8358801LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x205 = INT32_MAX;
	int32_t x207 = INT32_MAX;
	int64_t x208 = -21943046308239LL;
	static int64_t t50 = 14LL;

	t50 = ((x205|(x206%x207))-x208);

	if (t50 != 21943046308238LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x213 = -63;
	int8_t x215 = 10;
	uint16_t x216 = 6601U;
	volatile int32_t t51 = 295873884;

	t51 = ((x213|(x214%x215))-x216);

	if (t51 != -6662) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x217 = INT32_MAX;
	static int64_t x218 = -471091230956LL;
	static uint64_t x219 = UINT64_MAX;
	uint32_t x220 = UINT32_MAX;
	uint64_t t52 = 15938687LLU;

	t52 = ((x217|(x218%x219))-x220);

	if (t52 != 18446743599115665408LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = -3117LL;
	int16_t x231 = -2659;
	static uint8_t x232 = UINT8_MAX;
	volatile int64_t t53 = -5755485587175391LL;

	t53 = ((x229|(x230%x231))-x232);

	if (t53 != -264LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 24797887689248521LLU;
	int16_t x234 = INT16_MIN;
	static volatile uint64_t x235 = 4965478LLU;

	t54 = ((x233|(x234%x235))-x236);

	if (t54 != 24797885543473118LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x237 = UINT64_MAX;
	uint64_t x238 = UINT64_MAX;
	uint64_t x239 = UINT64_MAX;
	volatile uint8_t x240 = 127U;
	uint64_t t55 = 53384LLU;

	t55 = ((x237|(x238%x239))-x240);

	if (t55 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x241 = 0U;
	static int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = 198U;
	static int32_t t56 = 372;

	t56 = ((x241|(x242%x243))-x244);

	if (t56 != -198) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x247 = -1;
	volatile uint32_t t57 = 312334U;

	t57 = ((x245|(x246%x247))-x248);

	if (t57 != 227101650U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x249 = INT8_MIN;
	int16_t x250 = -1;
	int64_t x251 = -44827072LL;
	uint64_t x252 = 6429565378142912001LLU;
	volatile uint64_t t58 = 486LLU;

	t58 = ((x249|(x250%x251))-x252);

	if (t58 != 12017178695566639614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = 1942;
	uint32_t x254 = UINT32_MAX;
	int32_t x256 = INT32_MAX;
	uint32_t t59 = 6U;

	t59 = ((x253|(x254%x255))-x256);

	if (t59 != 2147491767U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x258 = 0;
	int8_t x259 = -1;
	volatile uint32_t t60 = 1183387206U;

	t60 = ((x257|(x258%x259))-x260);

	if (t60 != 4294963898U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x262 = -2370;
	int32_t x263 = INT32_MIN;
	static volatile int32_t t61 = -4051761;

	t61 = ((x261|(x262%x263))-x264);

	if (t61 != -65601) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = 50U;
	int8_t x266 = 0;
	volatile int32_t x267 = 1;
	int16_t x268 = INT16_MIN;
	volatile int32_t t62 = 6;

	t62 = ((x265|(x266%x267))-x268);

	if (t62 != 32818) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = -1;
	uint32_t x270 = 348U;
	uint32_t x271 = 2U;
	int8_t x272 = INT8_MIN;

	t63 = ((x269|(x270%x271))-x272);

	if (t63 != 127U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x275 = 1885U;
	int64_t x276 = 9511LL;

	t64 = ((x273|(x274%x275))-x276);

	if (t64 != 18446744073709542104LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = INT8_MAX;
	static uint64_t x278 = 3147LLU;
	uint8_t x279 = 7U;
	int64_t x280 = INT64_MIN;

	t65 = ((x277|(x278%x279))-x280);

	if (t65 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x282 = 14626U;
	int64_t x283 = INT64_MAX;
	int32_t x284 = INT32_MAX;

	t66 = ((x281|(x282%x283))-x284);

	if (t66 != -4294952669LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x285 = UINT64_MAX;
	uint8_t x286 = 124U;
	static int16_t x287 = INT16_MIN;
	int64_t x288 = INT64_MAX;

	t67 = ((x285|(x286%x287))-x288);

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x290 = INT16_MAX;
	static int64_t x291 = -938LL;
	int8_t x292 = INT8_MIN;
	int64_t t68 = -3020230LL;

	t68 = ((x289|(x290%x291))-x292);

	if (t68 != 127LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x295 = -1;
	volatile uint32_t x296 = UINT32_MAX;
	volatile uint32_t t69 = 5U;

	t69 = ((x293|(x294%x295))-x296);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x298 = 56613180299LLU;
	uint8_t x300 = UINT8_MAX;

	t70 = ((x297|(x298%x299))-x300);

	if (t70 != 56613314256LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MIN;
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = INT16_MIN;
	static int8_t x304 = -1;
	int32_t t71 = -37881;

	t71 = ((x301|(x302%x303))-x304);

	if (t71 != -32512) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x305 = 15240U;
	int16_t x307 = -1;
	volatile int64_t x308 = -7997250202083704LL;
	int64_t t72 = 181310230913882885LL;

	t72 = ((x305|(x306%x307))-x308);

	if (t72 != 7997250202098944LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MAX;
	int8_t x310 = INT8_MAX;
	int8_t x311 = INT8_MIN;
	volatile uint32_t t73 = 251570U;

	t73 = ((x309|(x310%x311))-x312);

	if (t73 != 2147483648U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = -60345LL;
	volatile int64_t x314 = INT64_MIN;
	uint8_t x315 = 1U;
	static int16_t x316 = 2;

	t74 = ((x313|(x314%x315))-x316);

	if (t74 != -60347LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x319 = INT16_MAX;
	uint64_t x320 = 159293697026692LLU;
	uint64_t t75 = 714LLU;

	t75 = ((x317|(x318%x319))-x320);

	if (t75 != 18446339517065585525LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x322 = INT32_MIN;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t76 = 78916LLU;

	t76 = ((x321|(x322%x323))-x324);

	if (t76 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x325 = 13U;
	static int64_t x326 = INT64_MIN;
	static uint32_t x327 = 341U;
	volatile int64_t t77 = -2168751913338721840LL;

	t77 = ((x325|(x326%x327))-x328);

	if (t77 != -2LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x329 = 115096319843LL;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = -1LL;
	static int8_t x332 = 24;
	volatile int64_t t78 = -1LL;

	t78 = ((x329|(x330%x331))-x332);

	if (t78 != 115096319819LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = INT16_MIN;
	int16_t x335 = INT16_MAX;
	static volatile uint32_t x336 = 7U;
	uint32_t t79 = 2U;

	t79 = ((x333|(x334%x335))-x336);

	if (t79 != 4294964007U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MIN;
	static int64_t x338 = INT64_MAX;
	uint8_t x340 = 40U;
	int64_t t80 = -25081641008LL;

	t80 = ((x337|(x338%x339))-x340);

	if (t80 != -143LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = -39;
	volatile uint64_t x342 = 4987601058066736084LLU;
	int8_t x343 = INT8_MIN;
	int8_t x344 = -1;
	volatile uint64_t t81 = 278246525025820494LLU;

	t81 = ((x341|(x342%x343))-x344);

	if (t81 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = -362;
	static uint16_t x346 = UINT16_MAX;
	volatile int64_t x347 = -1LL;
	static int64_t x348 = 0LL;
	volatile int64_t t82 = 8179113633918701LL;

	t82 = ((x345|(x346%x347))-x348);

	if (t82 != -362LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = -1LL;
	static int64_t x350 = INT64_MAX;
	int32_t x352 = INT32_MIN;
	volatile int64_t t83 = 91386009113691LL;

	t83 = ((x349|(x350%x351))-x352);

	if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = INT32_MAX;
	static uint64_t x354 = 26804769157LLU;
	int8_t x355 = INT8_MAX;
	int64_t x356 = -148LL;
	uint64_t t84 = 5LLU;

	t84 = ((x353|(x354%x355))-x356);

	if (t84 != 2147483795LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = INT64_MIN;
	volatile int8_t x358 = -1;
	static uint64_t x359 = 1241307224230400764LLU;
	int64_t x360 = -1LL;
	volatile uint64_t t85 = 53LLU;

	t85 = ((x357|(x358%x359))-x360);

	if (t85 != 10291814971338716728LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x364 = -1;
	volatile int32_t t86 = -3;

	t86 = ((x361|(x362%x363))-x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x365 = UINT32_MAX;
	int32_t x368 = -1;
	int64_t t87 = -592LL;

	t87 = ((x365|(x366%x367))-x368);

	if (t87 != 4294967296LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = -10597;
	volatile int64_t x370 = INT64_MAX;
	int32_t x372 = -1;
	volatile int64_t t88 = -2507065751598LL;

	t88 = ((x369|(x370%x371))-x372);

	if (t88 != -10592LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x373 = INT8_MAX;
	int16_t x374 = -1;
	int16_t x375 = -1;
	int64_t x376 = -1LL;
	int64_t t89 = -67879702915749LL;

	t89 = ((x373|(x374%x375))-x376);

	if (t89 != 128LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MIN;
	int64_t x379 = -6518582392961LL;
	static int32_t x380 = 133091072;
	static int64_t t90 = -3111371774296LL;

	t90 = ((x377|(x378%x379))-x380);

	if (t90 != -2280574720LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = INT64_MAX;
	volatile int64_t x383 = INT64_MIN;
	uint8_t x384 = 44U;
	int64_t t91 = 1893618630936LL;

	t91 = ((x381|(x382%x383))-x384);

	if (t91 != -45LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MIN;
	static uint8_t x386 = 8U;
	int32_t x387 = INT32_MIN;
	int8_t x388 = -5;
	int32_t t92 = -240;

	t92 = ((x385|(x386%x387))-x388);

	if (t92 != -32755) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x389 = 81377490U;
	static int64_t x390 = 538758862381445559LL;
	volatile int32_t x391 = -1;
	volatile int8_t x392 = INT8_MIN;
	volatile int64_t t93 = -1139387772578LL;

	t93 = ((x389|(x390%x391))-x392);

	if (t93 != 81377618LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = -1;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	int64_t x396 = INT64_MIN;
	volatile int64_t t94 = INT64_MAX;

	t94 = ((x393|(x394%x395))-x396);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x398 = -1;
	static int8_t x399 = INT8_MAX;
	int64_t x400 = -1LL;
	volatile int64_t t95 = 617LL;

	t95 = ((x397|(x398%x399))-x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x401 = -5394710;
	uint64_t x402 = UINT64_MAX;
	volatile int32_t x403 = INT32_MIN;
	static int16_t x404 = INT16_MIN;
	uint64_t t96 = 204187327433LLU;

	t96 = ((x401|(x402%x403))-x404);

	if (t96 != 32767LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = -1;
	int8_t x406 = INT8_MAX;
	uint16_t x408 = 10595U;
	int64_t t97 = -728566LL;

	t97 = ((x405|(x406%x407))-x408);

	if (t97 != -10596LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x409 = UINT32_MAX;
	volatile int8_t x410 = -1;
	volatile int64_t x411 = INT64_MIN;
	int32_t x412 = -1;

	t98 = ((x409|(x410%x411))-x412);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x413 = INT32_MIN;
	int8_t x414 = -28;
	int16_t x416 = INT16_MIN;
	int32_t t99 = -734394591;

	t99 = ((x413|(x414%x415))-x416);

	if (t99 != 32740) { NG(); } else { ; }
	
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

