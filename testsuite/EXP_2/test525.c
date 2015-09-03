#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 14931;
int32_t t0 = 1;
static int8_t x6 = INT8_MIN;
int64_t x12 = INT64_MIN;
volatile uint64_t t2 = 448785056726LLU;
static int8_t x17 = -38;
volatile int16_t x18 = 150;
static int64_t x28 = INT64_MIN;
static int64_t t6 = 3012507058362LL;
static int16_t x31 = -506;
uint16_t x35 = 8U;
volatile uint32_t t8 = 14U;
uint64_t x37 = 1079584033092LLU;
volatile int64_t x39 = 2803480899872LL;
static volatile int32_t x41 = 608036580;
volatile uint64_t x44 = UINT64_MAX;
uint32_t x52 = 18640544U;
int16_t x53 = INT16_MAX;
int16_t x55 = INT16_MAX;
int64_t t12 = -46913545105900691LL;
int32_t x60 = INT32_MAX;
int32_t x61 = INT32_MIN;
uint8_t x62 = UINT8_MAX;
int64_t x63 = -25208232839122775LL;
uint16_t x69 = 5U;
volatile uint32_t x70 = 186154U;
volatile uint8_t x76 = UINT8_MAX;
int32_t x82 = -1;
int8_t x83 = INT8_MAX;
static volatile int16_t x85 = INT16_MIN;
uint32_t x98 = 19447U;
volatile int8_t x101 = INT8_MIN;
volatile int64_t x120 = INT64_MAX;
volatile int64_t t27 = 6622859LL;
static int16_t x125 = INT16_MIN;
uint64_t t29 = 173474765874LLU;
int16_t x129 = INT16_MAX;
int32_t x130 = INT32_MIN;
int16_t x147 = INT16_MAX;
volatile int64_t t34 = 25LL;
int8_t x153 = 34;
static uint32_t t36 = 26680U;
static uint8_t x158 = 0U;
int64_t x162 = -1LL;
uint8_t x166 = 2U;
volatile int64_t x173 = 227533878525270841LL;
uint32_t x174 = UINT32_MAX;
static int16_t x176 = -40;
static int16_t x192 = INT16_MAX;
volatile uint64_t t45 = 3406998533880240LLU;
int16_t x197 = -451;
int32_t x201 = INT32_MAX;
int16_t x207 = -1;
int64_t t48 = 3623276LL;
int16_t x223 = INT16_MIN;
uint16_t x228 = UINT16_MAX;
int16_t x231 = -2829;
uint32_t x232 = 115U;
volatile int64_t x243 = INT64_MIN;
static int64_t x256 = INT64_MIN;
int16_t x266 = INT16_MIN;
volatile int64_t x283 = INT64_MIN;
static uint8_t x292 = UINT8_MAX;
int32_t t66 = 208264008;
static int8_t x294 = INT8_MIN;
int32_t x307 = 26;
int32_t t70 = -5890906;
static int8_t x311 = INT8_MAX;
uint8_t x315 = UINT8_MAX;
uint8_t x319 = UINT8_MAX;
uint32_t x324 = UINT32_MAX;
volatile uint32_t t74 = 112U;
volatile int32_t x330 = 130167787;
volatile uint32_t x334 = 102826U;
volatile int64_t t76 = -414582941338LL;
uint32_t x346 = UINT32_MAX;
int8_t x348 = INT8_MIN;
int16_t x349 = -1;
uint32_t x361 = 94591U;
int32_t x364 = INT32_MIN;
int16_t x369 = -1;
int64_t x371 = INT64_MIN;
uint8_t x372 = 1U;
int64_t t85 = 224LL;
volatile int32_t t87 = -38062;
int32_t x383 = INT32_MIN;
uint32_t x386 = 588U;
int8_t x394 = INT8_MAX;
static int16_t x395 = -1;
int8_t x400 = -1;
int16_t x401 = INT16_MIN;
int32_t x402 = INT32_MAX;
volatile uint16_t x405 = 2120U;
int8_t x409 = -1;
volatile int32_t x411 = 27;
int32_t t95 = 990898;
static uint32_t x415 = UINT32_MAX;
uint16_t x418 = 171U;
static int32_t x428 = -1;


void f0(void) {
	volatile int32_t x2 = INT32_MAX;
	volatile uint16_t x3 = UINT16_MAX;
	static uint16_t x4 = UINT16_MAX;

	t0 = ((x1-(x2/x3))%x4);

	if (t0 != -17837) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1;
	int16_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	static volatile int32_t t1 = 60;

	t1 = ((x5-(x6/x7))%x8);

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	uint64_t x10 = 69840126449235919LLU;
	uint64_t x11 = UINT64_MAX;

	t2 = ((x9-(x10/x11))%x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile uint64_t x14 = 627428940575141LLU;
	int64_t x15 = INT64_MIN;
	uint32_t x16 = UINT32_MAX;
	uint64_t t3 = 3965666677280623LLU;

	t3 = ((x13-(x14/x15))%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x19 = INT32_MIN;
	int64_t x20 = -185135011147614LL;
	volatile int64_t t4 = -62LL;

	t4 = ((x17-(x18/x19))%x20);

	if (t4 != -38LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 83LL;
	volatile uint32_t x22 = 2952U;
	volatile int64_t x23 = INT64_MIN;
	int8_t x24 = INT8_MIN;
	int64_t t5 = -426LL;

	t5 = ((x21-(x22/x23))%x24);

	if (t5 != 83LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MIN;
	int16_t x26 = -1;
	int8_t x27 = -4;

	t6 = ((x25-(x26/x27))%x28);

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 22214U;
	int8_t x30 = 6;
	int16_t x32 = -1;
	volatile int32_t t7 = -256939299;

	t7 = ((x29-(x30/x31))%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 2000U;
	static int32_t x34 = INT32_MIN;
	static uint32_t x36 = UINT32_MAX;

	t8 = ((x33-(x34/x35))%x36);

	if (t8 != 268437456U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x38 = INT16_MIN;
	int8_t x40 = -11;
	volatile uint64_t t9 = 3LLU;

	t9 = ((x37-(x38/x39))%x40);

	if (t9 != 1079584033092LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = UINT8_MAX;
	volatile int16_t x43 = INT16_MIN;
	volatile uint64_t t10 = 165LLU;

	t10 = ((x41-(x42/x43))%x44);

	if (t10 != 608036580LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	int8_t x50 = INT8_MAX;
	int16_t x51 = -1;
	uint32_t t11 = 126U;

	t11 = ((x49-(x50/x51))%x52);

	if (t11 != 126U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x54 = 32;
	int64_t x56 = INT64_MIN;

	t12 = ((x53-(x54/x55))%x56);

	if (t12 != 32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = 63369409724LL;
	uint32_t x58 = 4255190U;
	int32_t x59 = 7640;
	volatile int64_t t13 = 0LL;

	t13 = ((x57-(x58/x59))%x60);

	if (t13 != 1092383405LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x64 = 108218490U;
	volatile int64_t t14 = -509936536LL;

	t14 = ((x61-(x62/x63))%x64);

	if (t14 != -91332338LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x71 = INT64_MAX;
	static volatile int64_t x72 = -1LL;
	int64_t t15 = -124631790009LL;

	t15 = ((x69-(x70/x71))%x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x73 = INT32_MAX;
	static uint64_t x74 = UINT64_MAX;
	uint32_t x75 = 3369487U;
	uint64_t t16 = 123157981219LLU;

	t16 = ((x73-(x74/x75))%x76);

	if (t16 != 253LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 1012U;
	uint32_t x78 = 3340119U;
	int32_t x79 = -158;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t17 = 609786U;

	t17 = ((x77-(x78/x79))%x80);

	if (t17 != 1012U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MAX;
	int16_t x84 = INT16_MIN;
	static int64_t t18 = 17945906LL;

	t18 = ((x81-(x82/x83))%x84);

	if (t18 != 32767LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = 894899191782181LL;
	static volatile int16_t x87 = -6;
	static uint16_t x88 = UINT16_MAX;
	static volatile int64_t t19 = -254732167LL;

	t19 = ((x85-(x86/x87))%x88);

	if (t19 != 62697LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 24LLU;
	int32_t x90 = INT32_MAX;
	uint16_t x91 = 1U;
	volatile int64_t x92 = -354428LL;
	volatile uint64_t t20 = 2601482292894263268LLU;

	t20 = ((x89-(x90/x91))%x92);

	if (t20 != 18446744071562067993LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = 9465504LL;
	volatile uint16_t x94 = 175U;
	int32_t x95 = INT32_MIN;
	uint32_t x96 = 1U;
	volatile int64_t t21 = 239439855026773LL;

	t21 = ((x93-(x94/x95))%x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -248228370821LL;
	static uint8_t x99 = 5U;
	int16_t x100 = 1;
	int64_t t22 = 14074434800LL;

	t22 = ((x97-(x98/x99))%x100);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x102 = 612065975U;
	int16_t x103 = -8;
	uint32_t x104 = 7U;
	volatile uint32_t t23 = 243U;

	t23 = ((x101-(x102/x103))%x104);

	if (t23 != 2U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x105 = -148754447331LL;
	uint16_t x106 = 3U;
	static int64_t x107 = -1LL;
	volatile int8_t x108 = -6;
	int64_t t24 = -212884350LL;

	t24 = ((x105-(x106/x107))%x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = 4677933LL;
	int64_t x110 = -245886828LL;
	static uint32_t x111 = 9910055U;
	int8_t x112 = INT8_MAX;
	volatile int64_t t25 = -381512LL;

	t25 = ((x109-(x110/x111))%x112);

	if (t25 != 39LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 12899262LLU;
	int64_t x114 = -56449473LL;
	static uint32_t x115 = 110628U;
	int8_t x116 = INT8_MIN;
	volatile uint64_t t26 = 2LLU;

	t26 = ((x113-(x114/x115))%x116);

	if (t26 != 12899772LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MIN;

	t27 = ((x117-(x118/x119))%x120);

	if (t27 != -2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	static int32_t x122 = INT32_MAX;
	int32_t x123 = INT32_MIN;
	volatile int16_t x124 = INT16_MIN;
	static volatile int64_t t28 = 5875424337764LL;

	t28 = ((x121-(x122/x123))%x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x126 = 19339854119256308LLU;
	uint16_t x127 = 463U;
	int32_t x128 = -18311;

	t29 = ((x125-(x126/x127))%x128);

	if (t29 != 18446702302966280714LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x131 = INT64_MAX;
	static int32_t x132 = INT32_MIN;
	int64_t t30 = -32315591LL;

	t30 = ((x129-(x130/x131))%x132);

	if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MAX;
	volatile int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MIN;
	uint8_t x136 = 4U;
	volatile int32_t t31 = 0;

	t31 = ((x133-(x134/x135))%x136);

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 55U;
	uint64_t x138 = 2608356202145232LLU;
	int8_t x139 = INT8_MAX;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t32 = 2199686555668723LLU;

	t32 = ((x137-(x138/x139))%x140);

	if (t32 != 18446723535471739504LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 2U;
	uint64_t x142 = 121071703507822LLU;
	int16_t x143 = INT16_MAX;
	int32_t x144 = INT32_MAX;
	uint64_t t33 = 2861219678591193LLU;

	t33 = ((x141-(x142/x143))%x144);

	if (t33 != 600039370LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -678750489794309LL;
	volatile int32_t x146 = -1;
	uint16_t x148 = 52U;

	t34 = ((x145-(x146/x147))%x148);

	if (t34 != -49LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = -1;
	int64_t x151 = 47460LL;
	uint64_t x152 = 5377422387LLU;
	uint64_t t35 = 24928905545366649LLU;

	t35 = ((x149-(x150/x151))%x152);

	if (t35 != 4012467401LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x154 = INT16_MIN;
	static int8_t x155 = INT8_MIN;
	static uint32_t x156 = 48394337U;

	t36 = ((x153-(x154/x155))%x156);

	if (t36 != 36265418U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = UINT8_MAX;
	static int8_t x159 = INT8_MIN;
	static volatile int16_t x160 = -522;
	int32_t t37 = 112;

	t37 = ((x157-(x158/x159))%x160);

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x161 = -1LL;
	int8_t x163 = -1;
	volatile int64_t x164 = 3391272264804411300LL;
	static int64_t t38 = 132051508172511LL;

	t38 = ((x161-(x162/x163))%x164);

	if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MAX;
	int8_t x167 = 2;
	volatile uint32_t x168 = 221U;
	static volatile uint32_t t39 = 26000872U;

	t39 = ((x165-(x166/x167))%x168);

	if (t39 != 58U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = -1;
	volatile int64_t x170 = INT64_MAX;
	int32_t x171 = INT32_MIN;
	volatile uint16_t x172 = 848U;
	volatile int64_t t40 = 220880408589LL;

	t40 = ((x169-(x170/x171))%x172);

	if (t40 != 782LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x175 = 29793U;
	volatile int64_t t41 = -38023LL;

	t41 = ((x173-(x174/x175))%x176);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x177 = 3U;
	int32_t x178 = INT32_MIN;
	volatile int64_t x179 = INT64_MIN;
	static int8_t x180 = INT8_MIN;
	volatile int64_t t42 = -526LL;

	t42 = ((x177-(x178/x179))%x180);

	if (t42 != 3LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x181 = -1;
	int64_t x182 = INT64_MAX;
	static int8_t x183 = -16;
	int8_t x184 = -4;
	static int64_t t43 = 110LL;

	t43 = ((x181-(x182/x183))%x184);

	if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = 85U;
	int8_t x186 = -1;
	static int32_t x187 = INT32_MIN;
	uint16_t x188 = 63U;
	volatile int32_t t44 = 10024;

	t44 = ((x185-(x186/x187))%x188);

	if (t44 != 22) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	uint64_t x190 = UINT64_MAX;
	int64_t x191 = -1LL;

	t45 = ((x189-(x190/x191))%x192);

	if (t45 != 32654LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x198 = INT16_MAX;
	uint32_t x199 = 1325013909U;
	uint8_t x200 = 9U;
	volatile uint32_t t46 = 208U;

	t46 = ((x197-(x198/x199))%x200);

	if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x202 = 100507536U;
	static int8_t x203 = -1;
	uint64_t x204 = UINT64_MAX;
	uint64_t t47 = 33LLU;

	t47 = ((x201-(x202/x203))%x204);

	if (t47 != 2147483647LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x205 = UINT8_MAX;
	static int64_t x206 = -1LL;
	volatile int32_t x208 = -1;

	t48 = ((x205-(x206/x207))%x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x217 = 93U;
	volatile int32_t x218 = 41601;
	static int16_t x219 = INT16_MAX;
	int32_t x220 = -1;
	volatile int32_t t49 = -16283472;

	t49 = ((x217-(x218/x219))%x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = 2279U;
	uint32_t x222 = 200060U;
	int32_t x224 = INT32_MAX;
	volatile uint32_t t50 = 1U;

	t50 = ((x221-(x222/x223))%x224);

	if (t50 != 2279U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x225 = 18326064U;
	int64_t x226 = -1LL;
	uint32_t x227 = 5970U;
	volatile int64_t t51 = -186123356426LL;

	t51 = ((x225-(x226/x227))%x228);

	if (t51 != 41799LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MIN;
	uint32_t x230 = 4048U;
	volatile int64_t t52 = -986482394557820LL;

	t52 = ((x229-(x230/x231))%x232);

	if (t52 != -3LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = -1LL;
	uint8_t x234 = 41U;
	uint8_t x235 = 74U;
	int32_t x236 = -6251;
	int64_t t53 = 2246146404132502LL;

	t53 = ((x233-(x234/x235))%x236);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	int16_t x239 = -119;
	int16_t x240 = 1442;
	static volatile int64_t t54 = 3780LL;

	t54 = ((x237-(x238/x239))%x240);

	if (t54 != -1141LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MAX;
	static int8_t x244 = -1;
	volatile int64_t t55 = -1251134478LL;

	t55 = ((x241-(x242/x243))%x244);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = -62497;
	volatile uint32_t x246 = 1618492573U;
	int32_t x247 = -16045;
	int16_t x248 = -156;
	static volatile uint32_t t56 = 29999166U;

	t56 = ((x245-(x246/x247))%x248);

	if (t56 != 4294904799U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x249 = -1;
	int8_t x250 = -1;
	volatile uint16_t x251 = 12614U;
	volatile int32_t x252 = INT32_MIN;
	int32_t t57 = 1;

	t57 = ((x249-(x250/x251))%x252);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x253 = -2LL;
	uint8_t x254 = UINT8_MAX;
	int16_t x255 = -2;
	int64_t t58 = 0LL;

	t58 = ((x253-(x254/x255))%x256);

	if (t58 != 125LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x257 = 3322076U;
	volatile int64_t x258 = INT64_MIN;
	int8_t x259 = -3;
	static volatile int64_t x260 = INT64_MAX;
	int64_t t59 = -431367939434435LL;

	t59 = ((x257-(x258/x259))%x260);

	if (t59 != -3074457345614936526LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x261 = 27U;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	uint32_t x264 = UINT32_MAX;
	volatile int64_t t60 = 1062LL;

	t60 = ((x261-(x262/x263))%x264);

	if (t60 != 27LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = -1166;
	static uint32_t x267 = 5349371U;
	uint32_t x268 = UINT32_MAX;
	uint32_t t61 = 261587U;

	t61 = ((x265-(x266/x267))%x268);

	if (t61 != 4294965328U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int32_t x270 = INT32_MAX;
	static int16_t x271 = INT16_MIN;
	int32_t x272 = -1;
	volatile uint64_t t62 = 151262LLU;

	t62 = ((x269-(x270/x271))%x272);

	if (t62 != 65534LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x273 = 9988102U;
	int16_t x274 = -1;
	int64_t x275 = 2538LL;
	int16_t x276 = INT16_MIN;
	int64_t t63 = 1LL;

	t63 = ((x273-(x274/x275))%x276);

	if (t63 != 26630LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	volatile uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MIN;
	int32_t t64 = -33027792;

	t64 = ((x277-(x278/x279))%x280);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x281 = 1;
	uint16_t x282 = 119U;
	int16_t x284 = -1;
	int64_t t65 = -1358617529LL;

	t65 = ((x281-(x282/x283))%x284);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = 56U;
	static int8_t x290 = INT8_MIN;
	int16_t x291 = 55;

	t66 = ((x289-(x290/x291))%x292);

	if (t66 != 58) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = -1LL;
	static int16_t x295 = -1;
	volatile int64_t x296 = INT64_MAX;
	volatile int64_t t67 = -4500338715404963605LL;

	t67 = ((x293-(x294/x295))%x296);

	if (t67 != -129LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x297 = -1;
	int8_t x298 = 46;
	uint16_t x299 = 53U;
	uint8_t x300 = 4U;
	volatile int32_t t68 = -1;

	t68 = ((x297-(x298/x299))%x300);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MIN;
	volatile uint8_t x304 = 3U;
	static volatile int64_t t69 = 1086800075097441LL;

	t69 = ((x301-(x302/x303))%x304);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MAX;
	int8_t x308 = 1;

	t70 = ((x305-(x306/x307))%x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = 1;
	uint16_t x310 = 14U;
	int64_t x312 = INT64_MAX;
	volatile int64_t t71 = 3955LL;

	t71 = ((x309-(x310/x311))%x312);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = INT64_MAX;
	int16_t x314 = -1;
	volatile uint16_t x316 = 5U;
	volatile int64_t t72 = 69033244226LL;

	t72 = ((x313-(x314/x315))%x316);

	if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = INT32_MAX;
	uint16_t x318 = 6320U;
	volatile int32_t x320 = INT32_MAX;
	static int32_t t73 = -31;

	t73 = ((x317-(x318/x319))%x320);

	if (t73 != 2147483623) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x321 = 1U;
	int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MAX;

	t74 = ((x321-(x322/x323))%x324);

	if (t74 != 16909321U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = -21;
	uint32_t x331 = UINT32_MAX;
	volatile int32_t x332 = INT32_MAX;
	uint32_t t75 = 10U;

	t75 = ((x329-(x330/x331))%x332);

	if (t75 != 2147483628U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = INT8_MIN;
	volatile int16_t x335 = -8054;
	int64_t x336 = INT64_MIN;

	t76 = ((x333-(x334/x335))%x336);

	if (t76 != 4294967168LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x337 = UINT16_MAX;
	uint8_t x338 = 6U;
	uint8_t x339 = 2U;
	int16_t x340 = -1;
	int32_t t77 = -20431055;

	t77 = ((x337-(x338/x339))%x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = INT64_MAX;
	static volatile int16_t x343 = -1;
	volatile uint64_t x344 = 1999LLU;
	volatile uint64_t t78 = 8741651142003LLU;

	t78 = ((x341-(x342/x343))%x344);

	if (t78 != 1325LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x345 = 16U;
	int64_t x347 = INT64_MIN;
	static volatile int64_t t79 = 348917427184644LL;

	t79 = ((x345-(x346/x347))%x348);

	if (t79 != 16LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x350 = 4U;
	uint64_t x351 = 100614287247206848LLU;
	volatile int32_t x352 = -2037;
	static uint64_t t80 = 199833438167607LLU;

	t80 = ((x349-(x350/x351))%x352);

	if (t80 != 2036LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x353 = -61827742303396190LL;
	uint8_t x354 = 1U;
	int8_t x355 = -1;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t81 = 4628674419LLU;

	t81 = ((x353-(x354/x355))%x356);

	if (t81 != 18384916331406155427LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = 378U;
	uint64_t x358 = 7371718365647LLU;
	int8_t x359 = -1;
	static uint16_t x360 = 1U;
	static uint64_t t82 = 2006875705690769925LLU;

	t82 = ((x357-(x358/x359))%x360);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x362 = UINT8_MAX;
	int64_t x363 = INT64_MAX;
	volatile int64_t t83 = -320106655451LL;

	t83 = ((x361-(x362/x363))%x364);

	if (t83 != 94591LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = -544;
	int16_t x366 = INT16_MIN;
	static int32_t x367 = INT32_MAX;
	uint8_t x368 = 1U;
	volatile int32_t t84 = -2;

	t84 = ((x365-(x366/x367))%x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x370 = 10U;

	t85 = ((x369-(x370/x371))%x372);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x373 = INT64_MIN;
	volatile uint64_t x374 = 44198371115039LLU;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = 71938784LLU;
	uint64_t t86 = 375858389717LLU;

	t86 = ((x373-(x374/x375))%x376);

	if (t86 != 9033088LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = -1;
	volatile int16_t x378 = -1;
	static int8_t x379 = 1;
	static int16_t x380 = -1;

	t87 = ((x377-(x378/x379))%x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x381 = UINT16_MAX;
	int8_t x382 = INT8_MIN;
	int32_t x384 = INT32_MAX;
	int32_t t88 = -260523698;

	t88 = ((x381-(x382/x383))%x384);

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x385 = UINT64_MAX;
	static uint32_t x387 = 8388520U;
	int32_t x388 = INT32_MIN;
	static uint64_t t89 = 1605010013LLU;

	t89 = ((x385-(x386/x387))%x388);

	if (t89 != 2147483647LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = INT8_MAX;
	int8_t x390 = 3;
	volatile uint32_t x391 = 29488986U;
	int8_t x392 = -6;
	volatile uint32_t t90 = 690U;

	t90 = ((x389-(x390/x391))%x392);

	if (t90 != 127U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = INT32_MIN;
	static uint64_t x396 = 41146LLU;
	static volatile uint64_t t91 = 1LLU;

	t91 = ((x393-(x394/x395))%x396);

	if (t91 != 23717LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x397 = INT32_MIN;
	int8_t x398 = 1;
	int16_t x399 = -238;
	static volatile int32_t t92 = -73481911;

	t92 = ((x397-(x398/x399))%x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x403 = -1;
	int16_t x404 = INT16_MIN;
	volatile int32_t t93 = -6;

	t93 = ((x401-(x402/x403))%x404);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x406 = -1881;
	volatile int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MIN;
	int64_t t94 = -155423955059367261LL;

	t94 = ((x405-(x406/x407))%x408);

	if (t94 != 2120LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x410 = 21U;
	uint8_t x412 = 127U;

	t95 = ((x409-(x410/x411))%x412);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = -1;
	int8_t x414 = INT8_MAX;
	int64_t x416 = 6LL;
	volatile int64_t t96 = 44994348674226449LL;

	t96 = ((x413-(x414/x415))%x416);

	if (t96 != 3LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x417 = 5U;
	volatile int32_t x419 = INT32_MAX;
	int16_t x420 = -104;
	int32_t t97 = -37880473;

	t97 = ((x417-(x418/x419))%x420);

	if (t97 != 5) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = -1421;
	int32_t x423 = 788176;
	uint8_t x424 = 4U;
	volatile int32_t t98 = 1;

	t98 = ((x421-(x422/x423))%x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x425 = 213896593LLU;
	int16_t x426 = INT16_MIN;
	static uint8_t x427 = 28U;
	volatile uint64_t t99 = 426582LLU;

	t99 = ((x425-(x426/x427))%x428);

	if (t99 != 213897763LLU) { NG(); } else { ; }
	
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

