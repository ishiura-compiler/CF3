#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x3 = 19277786LLU;
volatile int64_t x18 = INT64_MAX;
uint64_t x19 = UINT64_MAX;
static int32_t t3 = -180;
volatile int32_t t4 = 44433;
uint64_t x28 = UINT64_MAX;
int8_t x30 = 2;
static int32_t t6 = 2357;
static volatile uint8_t x33 = 12U;
static int32_t x45 = -1;
int32_t t10 = -13716;
volatile int32_t t12 = -24;
uint16_t x59 = 3918U;
volatile uint16_t x60 = 447U;
uint32_t x61 = 123851778U;
int8_t x64 = INT8_MIN;
volatile int32_t x66 = -1;
uint64_t x67 = 19LLU;
uint16_t x70 = UINT16_MAX;
static int8_t x75 = -1;
int16_t x76 = -3;
int32_t x87 = INT32_MAX;
int32_t x91 = INT32_MAX;
uint64_t x98 = 4520141578LLU;
static uint16_t x111 = 3875U;
volatile int32_t x112 = -1;
int64_t x114 = INT64_MAX;
volatile int8_t x115 = INT8_MIN;
int16_t x117 = 15559;
static uint64_t x119 = UINT64_MAX;
int8_t x120 = 0;
int8_t x129 = INT8_MIN;
int32_t x131 = -14463;
int8_t x132 = -5;
static int8_t x143 = -1;
int32_t x150 = -1;
int8_t x156 = -3;
uint32_t x162 = UINT32_MAX;
volatile uint16_t x167 = 118U;
int32_t t40 = -34359493;
int8_t x170 = INT8_MAX;
int32_t t41 = 237894014;
uint16_t x177 = 2007U;
int32_t x181 = -1;
volatile int16_t x188 = -119;
uint8_t x189 = 13U;
int32_t t47 = 3;
int16_t x201 = INT16_MIN;
int64_t x203 = 68394271LL;
int32_t t49 = 0;
int32_t x205 = INT32_MIN;
volatile uint16_t x215 = 2248U;
volatile int16_t x217 = -1;
int32_t x222 = INT32_MIN;
volatile int16_t x230 = INT16_MIN;
volatile int16_t x234 = -907;
static int32_t x238 = INT32_MAX;
int8_t x251 = INT8_MIN;
int8_t x252 = -1;
int32_t t61 = -353596;
static int16_t x268 = INT16_MIN;
int32_t t63 = -1728;
int64_t x270 = INT64_MIN;
int16_t x277 = INT16_MIN;
int16_t x281 = 0;
uint8_t x289 = UINT8_MAX;
volatile int32_t t68 = -63467840;
int8_t x300 = -1;
uint8_t x307 = 7U;
static uint64_t x311 = UINT64_MAX;
int8_t x319 = INT8_MAX;
volatile int32_t t75 = -67994;
static int64_t x322 = INT64_MAX;
int16_t x324 = INT16_MAX;
int32_t t79 = 5395796;
uint32_t x338 = 66300422U;
int32_t x348 = 1998599;
volatile int64_t x351 = INT64_MIN;
int32_t t84 = 38037;
uint16_t x359 = 2916U;
int32_t x363 = -2997915;
int16_t x365 = INT16_MIN;
static int64_t x367 = INT64_MIN;
int16_t x369 = -1;
uint64_t x371 = 132972258807941LLU;
uint16_t x372 = 7U;
int64_t x373 = INT64_MIN;
volatile uint32_t x375 = UINT32_MAX;
static volatile int32_t t89 = -2033;
uint16_t x379 = 16279U;
volatile int16_t x387 = -1;
static volatile int64_t x394 = 9119LL;
uint64_t x395 = UINT64_MAX;
uint32_t x398 = 93153U;
uint32_t x400 = 11U;
static volatile int32_t t94 = 6;
static int64_t x407 = 16794395701229656LL;
int32_t t96 = 13;
int32_t x410 = -302;
int32_t x413 = INT32_MIN;
static uint64_t x414 = UINT64_MAX;
int32_t t98 = -3;
uint32_t x418 = 454U;
volatile int8_t x419 = -1;


void f0(void) {
	int64_t x1 = 272004LL;
	int8_t x2 = 56;
	uint32_t x4 = 7086627U;
	int32_t t0 = -2894;

	t0 = (x1<=((x2%x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int32_t x6 = INT32_MAX;
	int8_t x7 = INT8_MAX;
	int8_t x8 = -27;
	int32_t t1 = 7;

	t1 = (x5<=((x6%x7)==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 69U;
	int64_t x10 = -1LL;
	int16_t x11 = INT16_MAX;
	volatile uint16_t x12 = 488U;
	volatile int32_t t2 = -83309751;

	t2 = (x9<=((x10%x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 0U;
	int32_t x20 = 4936946;

	t3 = (x17<=((x18%x19)==x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 28586U;
	static volatile int32_t x22 = -1;
	int8_t x23 = -1;
	int16_t x24 = INT16_MIN;

	t4 = (x21<=((x22%x23)==x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	static int32_t x26 = INT32_MIN;
	int16_t x27 = INT16_MIN;
	volatile int32_t t5 = 1;

	t5 = (x25<=((x26%x27)==x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 6U;
	int8_t x31 = INT8_MAX;
	uint64_t x32 = 508384058551811LLU;

	t6 = (x29<=((x30%x31)==x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x34 = -1;
	volatile uint8_t x35 = 3U;
	uint32_t x36 = 0U;
	volatile int32_t t7 = 3884;

	t7 = (x33<=((x34%x35)==x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	volatile uint16_t x38 = UINT16_MAX;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MAX;
	int32_t t8 = 172131;

	t8 = (x37<=((x38%x39)==x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MIN;
	int8_t x42 = INT8_MIN;
	volatile uint32_t x43 = 504U;
	int16_t x44 = -1;
	volatile int32_t t9 = 845654;

	t9 = (x41<=((x42%x43)==x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = INT8_MAX;
	uint8_t x47 = 4U;
	uint8_t x48 = 4U;

	t10 = (x45<=((x46%x47)==x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = INT8_MIN;
	int16_t x50 = -1;
	static uint16_t x51 = 119U;
	int16_t x52 = -1;
	volatile int32_t t11 = -25;

	t11 = (x49<=((x50%x51)==x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -20290192;
	static uint16_t x54 = 674U;
	uint32_t x55 = 1683828888U;
	static int64_t x56 = -1LL;

	t12 = (x53<=((x54%x55)==x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 4631867812280769LLU;
	int8_t x58 = INT8_MIN;
	volatile int32_t t13 = -3529867;

	t13 = (x57<=((x58%x59)==x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x62 = UINT32_MAX;
	int8_t x63 = 4;
	int32_t t14 = 16249081;

	t14 = (x61<=((x62%x63)==x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = -1;
	int64_t x68 = INT64_MAX;
	volatile int32_t t15 = -123761087;

	t15 = (x65<=((x66%x67)==x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	int64_t x71 = -15951939205LL;
	int64_t x72 = 556203217720474272LL;
	volatile int32_t t16 = -718;

	t16 = (x69<=((x70%x71)==x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = UINT8_MAX;
	volatile uint16_t x74 = 45U;
	int32_t t17 = -1;

	t17 = (x73<=((x74%x75)==x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = -1;
	int8_t x78 = -1;
	volatile uint32_t x79 = 243U;
	static volatile int16_t x80 = INT16_MIN;
	volatile int32_t t18 = 1;

	t18 = (x77<=((x78%x79)==x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = 0;
	volatile int32_t x82 = -1;
	static uint32_t x83 = 370710672U;
	uint8_t x84 = 2U;
	volatile int32_t t19 = -80097184;

	t19 = (x81<=((x82%x83)==x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 186225;
	static volatile int8_t x86 = -1;
	int16_t x88 = INT16_MIN;
	int32_t t20 = 23026;

	t20 = (x85<=((x86%x87)==x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x89 = 50U;
	uint8_t x90 = 0U;
	int8_t x92 = INT8_MIN;
	volatile int32_t t21 = 199;

	t21 = (x89<=((x90%x91)==x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	volatile int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MAX;
	static int64_t x96 = INT64_MIN;
	int32_t t22 = -475042572;

	t22 = (x93<=((x94%x95)==x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MAX;
	int32_t x99 = 51261;
	int16_t x100 = INT16_MIN;
	int32_t t23 = 62;

	t23 = (x97<=((x98%x99)==x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = -33706072074821LL;
	int8_t x102 = -1;
	volatile int32_t x103 = -12669;
	uint32_t x104 = 555U;
	volatile int32_t t24 = -218171;

	t24 = (x101<=((x102%x103)==x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MAX;
	static int64_t x106 = INT64_MIN;
	uint32_t x107 = 73336732U;
	int8_t x108 = INT8_MAX;
	volatile int32_t t25 = 6;

	t25 = (x105<=((x106%x107)==x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = INT8_MAX;
	int64_t x110 = -1LL;
	int32_t t26 = -1924;

	t26 = (x109<=((x110%x111)==x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	int8_t x116 = INT8_MAX;
	static volatile int32_t t27 = -689914590;

	t27 = (x113<=((x114%x115)==x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x118 = UINT16_MAX;
	volatile int32_t t28 = -1;

	t28 = (x117<=((x118%x119)==x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = -1;
	static uint16_t x122 = UINT16_MAX;
	volatile uint64_t x123 = 514039346515621888LLU;
	uint64_t x124 = 5059LLU;
	int32_t t29 = 4186534;

	t29 = (x121<=((x122%x123)==x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x125 = 1330;
	static int64_t x126 = INT64_MIN;
	int8_t x127 = 1;
	uint32_t x128 = 148U;
	int32_t t30 = 156018048;

	t30 = (x125<=((x126%x127)==x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x130 = 192943LLU;
	int32_t t31 = 3713;

	t31 = (x129<=((x130%x131)==x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x133 = -1LL;
	volatile int32_t x134 = -1;
	int8_t x135 = -7;
	uint64_t x136 = 8328396105LLU;
	volatile int32_t t32 = -1;

	t32 = (x133<=((x134%x135)==x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x137 = INT16_MAX;
	volatile int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MIN;
	uint64_t x140 = UINT64_MAX;
	static volatile int32_t t33 = -142960870;

	t33 = (x137<=((x138%x139)==x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = 25;
	int64_t x142 = INT64_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t34 = -10023;

	t34 = (x141<=((x142%x143)==x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x145 = 19U;
	uint64_t x146 = 67889699625LLU;
	int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MIN;
	static int32_t t35 = 170136199;

	t35 = (x145<=((x146%x147)==x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = 153U;
	int16_t x151 = -126;
	uint32_t x152 = 30531114U;
	volatile int32_t t36 = 6;

	t36 = (x149<=((x150%x151)==x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	static int32_t x154 = INT32_MIN;
	static int64_t x155 = INT64_MAX;
	static int32_t t37 = 1005030;

	t37 = (x153<=((x154%x155)==x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = 1481620;
	int32_t x158 = 118261;
	volatile uint32_t x159 = 5655U;
	int16_t x160 = INT16_MIN;
	int32_t t38 = 539;

	t38 = (x157<=((x158%x159)==x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MIN;
	volatile int32_t x163 = INT32_MIN;
	volatile int64_t x164 = INT64_MIN;
	volatile int32_t t39 = -1093988;

	t39 = (x161<=((x162%x163)==x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = INT64_MIN;
	uint16_t x168 = UINT16_MAX;

	t40 = (x165<=((x166%x167)==x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x169 = INT32_MIN;
	static int8_t x171 = INT8_MIN;
	static int16_t x172 = INT16_MIN;

	t41 = (x169<=((x170%x171)==x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = 1897890;
	static int32_t x174 = -1;
	static volatile int8_t x175 = -58;
	int32_t x176 = -28605;
	int32_t t42 = 651454;

	t42 = (x173<=((x174%x175)==x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x178 = 2739979U;
	uint8_t x179 = UINT8_MAX;
	static uint16_t x180 = UINT16_MAX;
	volatile int32_t t43 = -406420;

	t43 = (x177<=((x178%x179)==x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x182 = INT16_MIN;
	uint32_t x183 = 122956839U;
	static volatile uint8_t x184 = 32U;
	volatile int32_t t44 = -584;

	t44 = (x181<=((x182%x183)==x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x185 = 13470U;
	uint16_t x186 = 1U;
	uint32_t x187 = UINT32_MAX;
	int32_t t45 = -16815;

	t45 = (x185<=((x186%x187)==x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x190 = -1;
	static volatile int32_t x191 = 51;
	uint32_t x192 = 2575U;
	int32_t t46 = -6420;

	t46 = (x189<=((x190%x191)==x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MAX;
	static int64_t x196 = INT64_MIN;

	t47 = (x193<=((x194%x195)==x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MIN;
	static int64_t x199 = -1LL;
	int8_t x200 = INT8_MAX;
	int32_t t48 = 141288322;

	t48 = (x197<=((x198%x199)==x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x202 = -7;
	int16_t x204 = INT16_MIN;

	t49 = (x201<=((x202%x203)==x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x206 = UINT32_MAX;
	uint8_t x207 = 6U;
	uint16_t x208 = 67U;
	static volatile int32_t t50 = -8;

	t50 = (x205<=((x206%x207)==x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x209 = 6LL;
	uint8_t x210 = 100U;
	static uint16_t x211 = 31U;
	static int16_t x212 = INT16_MAX;
	int32_t t51 = -54;

	t51 = (x209<=((x210%x211)==x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x213 = INT64_MIN;
	volatile int32_t x214 = INT32_MAX;
	uint8_t x216 = 1U;
	int32_t t52 = 0;

	t52 = (x213<=((x214%x215)==x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x218 = 535384223;
	uint32_t x219 = 36U;
	int16_t x220 = INT16_MAX;
	volatile int32_t t53 = -13900325;

	t53 = (x217<=((x218%x219)==x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = -2LL;
	volatile int32_t x223 = -1;
	uint16_t x224 = 13U;
	volatile int32_t t54 = 226;

	t54 = (x221<=((x222%x223)==x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = INT8_MIN;
	int64_t x227 = -1830526390056LL;
	uint16_t x228 = 115U;
	int32_t t55 = -1;

	t55 = (x225<=((x226%x227)==x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = 34LLU;
	int32_t x231 = INT32_MAX;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t56 = -1383491;

	t56 = (x229<=((x230%x231)==x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x233 = -8;
	volatile int32_t x235 = INT32_MIN;
	int16_t x236 = 194;
	int32_t t57 = 8690;

	t57 = (x233<=((x234%x235)==x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x237 = INT16_MAX;
	int16_t x239 = -1;
	volatile int8_t x240 = 1;
	volatile int32_t t58 = 3403515;

	t58 = (x237<=((x238%x239)==x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x241 = 3U;
	static uint16_t x242 = 17069U;
	int32_t x243 = -37;
	static int64_t x244 = INT64_MIN;
	int32_t t59 = -2;

	t59 = (x241<=((x242%x243)==x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = 0;
	int16_t x250 = INT16_MIN;
	int32_t t60 = -2318819;

	t60 = (x249<=((x250%x251)==x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x257 = -9946724LL;
	static int16_t x258 = INT16_MIN;
	uint8_t x259 = 43U;
	int16_t x260 = 9189;

	t61 = (x257<=((x258%x259)==x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	uint16_t x263 = 13987U;
	int16_t x264 = INT16_MAX;
	int32_t t62 = -124748343;

	t62 = (x261<=((x262%x263)==x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = -3051363942741LL;
	volatile uint16_t x266 = UINT16_MAX;
	int8_t x267 = -60;

	t63 = (x265<=((x266%x267)==x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x269 = 3U;
	int8_t x271 = INT8_MIN;
	int32_t x272 = INT32_MIN;
	int32_t t64 = 11;

	t64 = (x269<=((x270%x271)==x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x278 = UINT64_MAX;
	static int32_t x279 = INT32_MAX;
	static int8_t x280 = -1;
	volatile int32_t t65 = 109430;

	t65 = (x277<=((x278%x279)==x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x282 = INT32_MAX;
	int16_t x283 = 5771;
	int32_t x284 = INT32_MIN;
	volatile int32_t t66 = -7060314;

	t66 = (x281<=((x282%x283)==x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = -1;
	int64_t x286 = INT64_MIN;
	volatile uint16_t x287 = UINT16_MAX;
	int16_t x288 = INT16_MAX;
	volatile int32_t t67 = -8335;

	t67 = (x285<=((x286%x287)==x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x290 = INT32_MIN;
	volatile int32_t x291 = -113;
	static int32_t x292 = INT32_MIN;

	t68 = (x289<=((x290%x291)==x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x293 = -1LL;
	int32_t x294 = 35544422;
	int16_t x295 = INT16_MAX;
	volatile uint64_t x296 = UINT64_MAX;
	static int32_t t69 = -1;

	t69 = (x293<=((x294%x295)==x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MIN;
	volatile int64_t x298 = INT64_MAX;
	int16_t x299 = -190;
	volatile int32_t t70 = 0;

	t70 = (x297<=((x298%x299)==x300));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = -1;
	static uint8_t x302 = 0U;
	int64_t x303 = -481LL;
	int32_t x304 = INT32_MAX;
	static volatile int32_t t71 = 401437;

	t71 = (x301<=((x302%x303)==x304));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x305 = 2264636567250LLU;
	int32_t x306 = -1;
	volatile int16_t x308 = INT16_MIN;
	static int32_t t72 = -106825338;

	t72 = (x305<=((x306%x307)==x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = 2U;
	uint16_t x310 = 6U;
	int64_t x312 = -1LL;
	int32_t t73 = -1;

	t73 = (x309<=((x310%x311)==x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -1;
	int64_t x314 = INT64_MIN;
	static int8_t x315 = INT8_MIN;
	static int64_t x316 = INT64_MAX;
	static volatile int32_t t74 = 18;

	t74 = (x313<=((x314%x315)==x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = -630;
	int8_t x320 = INT8_MIN;

	t75 = (x317<=((x318%x319)==x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = INT64_MAX;
	volatile uint64_t x323 = UINT64_MAX;
	int32_t t76 = 32355155;

	t76 = (x321<=((x322%x323)==x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -1;
	uint64_t x326 = 512483795663325207LLU;
	static int8_t x327 = 1;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t77 = 98889;

	t77 = (x325<=((x326%x327)==x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x329 = 9;
	volatile int16_t x330 = INT16_MAX;
	int64_t x331 = -73LL;
	uint8_t x332 = UINT8_MAX;
	int32_t t78 = 139;

	t78 = (x329<=((x330%x331)==x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x333 = 7LLU;
	uint64_t x334 = 117380162641LLU;
	uint32_t x335 = 189U;
	uint64_t x336 = UINT64_MAX;

	t79 = (x333<=((x334%x335)==x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = 101654LLU;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = 28U;
	static int32_t t80 = -454480188;

	t80 = (x337<=((x338%x339)==x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x341 = 1U;
	uint32_t x342 = UINT32_MAX;
	volatile int64_t x343 = INT64_MIN;
	int32_t x344 = INT32_MIN;
	volatile int32_t t81 = 11389;

	t81 = (x341<=((x342%x343)==x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	volatile int16_t x347 = -1;
	int32_t t82 = 5;

	t82 = (x345<=((x346%x347)==x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = 0U;
	volatile uint64_t x352 = 116LLU;
	int32_t t83 = 13783875;

	t83 = (x349<=((x350%x351)==x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = UINT8_MAX;
	uint64_t x354 = 14LLU;
	static int16_t x355 = 1;
	volatile int8_t x356 = INT8_MAX;

	t84 = (x353<=((x354%x355)==x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x357 = -4155018;
	uint16_t x358 = 1774U;
	int64_t x360 = 7673LL;
	volatile int32_t t85 = 13505;

	t85 = (x357<=((x358%x359)==x360));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = UINT64_MAX;
	static int64_t x362 = -1LL;
	int64_t x364 = INT64_MIN;
	int32_t t86 = -495689262;

	t86 = (x361<=((x362%x363)==x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x366 = 45550954U;
	uint8_t x368 = 2U;
	int32_t t87 = -377;

	t87 = (x365<=((x366%x367)==x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x370 = INT8_MIN;
	int32_t t88 = 1;

	t88 = (x369<=((x370%x371)==x372));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x374 = INT8_MIN;
	int64_t x376 = 1325537256029LL;

	t89 = (x373<=((x374%x375)==x376));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = -1;
	int32_t x378 = -1;
	volatile int32_t x380 = 95020;
	volatile int32_t t90 = -7107612;

	t90 = (x377<=((x378%x379)==x380));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x381 = 86922833089728027LLU;
	uint32_t x382 = UINT32_MAX;
	static uint8_t x383 = UINT8_MAX;
	uint64_t x384 = 396672817405LLU;
	static volatile int32_t t91 = -12035;

	t91 = (x381<=((x382%x383)==x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = 46;
	int32_t x386 = INT32_MIN;
	int16_t x388 = 2;
	volatile int32_t t92 = -2831;

	t92 = (x385<=((x386%x387)==x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = -1;
	int8_t x396 = -1;
	int32_t t93 = -22;

	t93 = (x393<=((x394%x395)==x396));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = -1LL;
	int32_t x399 = 712346861;

	t94 = (x397<=((x398%x399)==x400));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = 128U;
	int16_t x402 = INT16_MIN;
	int8_t x403 = INT8_MIN;
	int16_t x404 = 976;
	volatile int32_t t95 = -3;

	t95 = (x401<=((x402%x403)==x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x405 = UINT8_MAX;
	static int16_t x406 = -1;
	int16_t x408 = 0;

	t96 = (x405<=((x406%x407)==x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x409 = -1;
	int8_t x411 = INT8_MIN;
	static uint8_t x412 = UINT8_MAX;
	int32_t t97 = -769772;

	t97 = (x409<=((x410%x411)==x412));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x415 = 9U;
	static int64_t x416 = 11363411888777LL;

	t98 = (x413<=((x414%x415)==x416));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x417 = UINT8_MAX;
	uint64_t x420 = 38811555454LLU;
	volatile int32_t t99 = 1;

	t99 = (x417<=((x418%x419)==x420));

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

