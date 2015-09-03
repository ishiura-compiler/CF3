#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = -1;
int16_t x22 = 139;
int8_t x23 = -1;
uint64_t x30 = UINT64_MAX;
int64_t x39 = INT64_MAX;
int8_t x40 = INT8_MIN;
volatile int32_t x46 = INT32_MIN;
static int8_t x53 = INT8_MIN;
int16_t x56 = -10708;
volatile int8_t x57 = INT8_MIN;
int8_t x64 = 6;
uint64_t x70 = 1LLU;
int64_t x73 = 389904LL;
uint64_t x78 = UINT64_MAX;
uint64_t x85 = UINT64_MAX;
int32_t x91 = -1;
volatile uint64_t t18 = UINT64_MAX;
uint8_t x107 = 4U;
uint64_t t19 = 8397265688LLU;
int64_t x110 = -54LL;
uint8_t x121 = 1U;
static int8_t x122 = INT8_MIN;
static int32_t x123 = -29;
int64_t x124 = INT64_MIN;
volatile int32_t t24 = 2547;
int32_t t25 = 351;
int16_t x140 = INT16_MIN;
int64_t x164 = 369LL;
static int64_t t31 = 146972611LL;
volatile int32_t x169 = -268309250;
int32_t t33 = -44849632;
static int8_t x173 = -26;
uint8_t x176 = 111U;
static int32_t x183 = INT32_MAX;
int8_t x184 = INT8_MIN;
int32_t x185 = 1;
int8_t x191 = INT8_MIN;
int64_t x192 = 214767959037661377LL;
int8_t x196 = -2;
uint16_t x205 = 5U;
volatile uint16_t x216 = UINT16_MAX;
static volatile int64_t t43 = 462045626LL;
uint8_t x227 = 8U;
volatile int8_t x246 = INT8_MAX;
int32_t x252 = -44203929;
int32_t t50 = 12;
volatile int8_t x274 = -1;
uint64_t x276 = UINT64_MAX;
volatile int32_t x289 = INT32_MIN;
int8_t x293 = -1;
int32_t t57 = -4;
uint32_t x304 = UINT32_MAX;
uint32_t x310 = 245U;
static uint8_t x311 = 1U;
int16_t x320 = -1;
volatile int32_t t60 = 4;
volatile uint16_t x321 = 4U;
int32_t x322 = -1;
volatile int8_t x323 = INT8_MAX;
int16_t x326 = -2;
volatile int64_t t62 = 6712507555946089LL;
uint64_t x332 = UINT64_MAX;
int16_t x333 = -1;
uint64_t x334 = UINT64_MAX;
uint8_t x336 = 14U;
int8_t x337 = -1;
static uint32_t x340 = UINT32_MAX;
int32_t x346 = INT32_MAX;
static int64_t x359 = INT64_MIN;
int8_t x362 = 1;
int32_t x373 = -11254993;
uint64_t t71 = 9433324782968659LLU;
static volatile int64_t x387 = -478476755LL;
uint64_t x409 = 1501780035206569LLU;
uint16_t x413 = 25U;
int64_t x415 = INT64_MAX;
uint16_t x418 = 7689U;
volatile int32_t t79 = 7498;
int32_t x421 = -58;
static volatile int32_t x425 = 33;
volatile int16_t x431 = INT16_MAX;
int32_t t82 = 320389043;
static volatile int8_t x440 = INT8_MAX;
static int32_t t83 = 6520;
int32_t x443 = INT32_MIN;
static volatile int64_t t84 = -90565881LL;
volatile int32_t t86 = 3;
int32_t x475 = INT32_MIN;
uint64_t x478 = UINT64_MAX;
int32_t x482 = -1;
static int64_t x484 = INT64_MIN;
int64_t t90 = 803491082LL;
int64_t x485 = -1LL;
int64_t x493 = INT64_MAX;
int8_t x495 = INT8_MAX;
volatile int32_t x496 = INT32_MIN;
static int32_t t93 = -45;
volatile int8_t x498 = INT8_MIN;
static int64_t x500 = INT64_MIN;
static int32_t t96 = -816439;
uint64_t t97 = UINT64_MAX;
static uint32_t x519 = 872312959U;
static int8_t x522 = INT8_MIN;
int16_t x523 = 5;
static int8_t x524 = INT8_MAX;


void f0(void) {
	int16_t x1 = -1;
	static int64_t x2 = 10366521LL;
	int64_t x3 = -113599588823186LL;
	int16_t x4 = 1;
	volatile int32_t t0 = -506;

	t0 = (((x1*x2)<=x3)+x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	uint64_t x10 = UINT64_MAX;
	static int32_t x11 = -1;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -28207;

	t1 = (((x9*x10)<=x11)+x12);

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	uint32_t x14 = UINT32_MAX;
	int64_t x15 = -1LL;
	static int32_t t2 = 130;

	t2 = (((x13*x14)<=x15)+x16);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 1U;
	int32_t x18 = -10;
	static volatile uint64_t x19 = UINT64_MAX;
	int64_t x20 = -6993756368LL;
	int64_t t3 = -7623819443283765LL;

	t3 = (((x17*x18)<=x19)+x20);

	if (t3 != -6993756367LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	static volatile int64_t x24 = INT64_MIN;
	int64_t t4 = 11553602234934LL;

	t4 = (((x21*x22)<=x23)+x24);

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = 417273563613LLU;
	int32_t x26 = -1;
	int32_t x27 = -1;
	volatile uint8_t x28 = 109U;
	int32_t t5 = 2737468;

	t5 = (((x25*x26)<=x27)+x28);

	if (t5 != 110) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = -1;
	int64_t x31 = 3180982LL;
	static int64_t x32 = -12343073LL;
	int64_t t6 = -1LL;

	t6 = (((x29*x30)<=x31)+x32);

	if (t6 != -12343072LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x37 = -1;
	volatile uint16_t x38 = 3533U;
	static int32_t t7 = 1;

	t7 = (((x37*x38)<=x39)+x40);

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = 6LL;
	int64_t x47 = INT64_MIN;
	uint32_t x48 = 191479U;
	uint32_t t8 = 655U;

	t8 = (((x45*x46)<=x47)+x48);

	if (t8 != 191479U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = INT64_MAX;
	int8_t x50 = 0;
	uint16_t x51 = 4610U;
	uint64_t x52 = 170656732LLU;
	static uint64_t t9 = 8359008561400LLU;

	t9 = (((x49*x50)<=x51)+x52);

	if (t9 != 170656733LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x54 = 2581U;
	uint64_t x55 = 1895478LLU;
	volatile int32_t t10 = 0;

	t10 = (((x53*x54)<=x55)+x56);

	if (t10 != -10708) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x58 = -9;
	volatile int8_t x59 = -1;
	int32_t x60 = -87127;
	static volatile int32_t t11 = 1070;

	t11 = (((x57*x58)<=x59)+x60);

	if (t11 != -87127) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = 322180215;
	volatile int32_t t12 = -659;

	t12 = (((x61*x62)<=x63)+x64);

	if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x65 = INT16_MIN;
	uint16_t x66 = 15918U;
	int32_t x67 = -67348;
	static volatile uint8_t x68 = 10U;
	static int32_t t13 = -776009;

	t13 = (((x65*x66)<=x67)+x68);

	if (t13 != 11) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x69 = 1U;
	static int16_t x71 = INT16_MAX;
	uint64_t x72 = 4081871LLU;
	volatile uint64_t t14 = 21903117LLU;

	t14 = (((x69*x70)<=x71)+x72);

	if (t14 != 4081872LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x74 = INT32_MIN;
	uint16_t x75 = 3U;
	volatile uint16_t x76 = 15U;
	volatile int32_t t15 = 41129397;

	t15 = (((x73*x74)<=x75)+x76);

	if (t15 != 16) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 5U;
	int8_t x79 = 5;
	int64_t x80 = INT64_MIN;
	int64_t t16 = INT64_MIN;

	t16 = (((x77*x78)<=x79)+x80);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x86 = -25;
	int8_t x87 = INT8_MAX;
	static uint8_t x88 = UINT8_MAX;
	volatile int32_t t17 = 1;

	t17 = (((x85*x86)<=x87)+x88);

	if (t17 != 256) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x89 = 4U;
	uint16_t x90 = UINT16_MAX;
	uint64_t x92 = UINT64_MAX;

	t18 = (((x89*x90)<=x91)+x92);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = -1LL;
	static uint16_t x106 = 212U;
	static volatile uint64_t x108 = 0LLU;

	t19 = (((x105*x106)<=x107)+x108);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x109 = 61U;
	volatile uint32_t x111 = UINT32_MAX;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t20 = 1879170491U;

	t20 = (((x109*x110)<=x111)+x112);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x113 = 44276331U;
	volatile int8_t x114 = -3;
	uint64_t x115 = UINT64_MAX;
	static int8_t x116 = INT8_MAX;
	int32_t t21 = -2;

	t21 = (((x113*x114)<=x115)+x116);

	if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t t22 = 3933920916LL;

	t22 = (((x121*x122)<=x123)+x124);

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x125 = UINT16_MAX;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = 1U;
	uint32_t x128 = UINT32_MAX;
	uint32_t t23 = UINT32_MAX;

	t23 = (((x125*x126)<=x127)+x128);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = INT16_MIN;
	static uint8_t x130 = 13U;
	int8_t x131 = INT8_MIN;
	static int32_t x132 = INT32_MIN;

	t24 = (((x129*x130)<=x131)+x132);

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = 0;
	uint32_t x134 = 1914U;
	int16_t x135 = 0;
	volatile uint16_t x136 = UINT16_MAX;

	t25 = (((x133*x134)<=x135)+x136);

	if (t25 != 65536) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x137 = 922U;
	int32_t x138 = INT32_MAX;
	static int16_t x139 = INT16_MAX;
	volatile int32_t t26 = -92;

	t26 = (((x137*x138)<=x139)+x140);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x141 = INT8_MIN;
	static uint64_t x142 = 27288LLU;
	int16_t x143 = -1;
	int16_t x144 = -1;
	volatile int32_t t27 = -441;

	t27 = (((x141*x142)<=x143)+x144);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x149 = UINT16_MAX;
	int32_t x150 = 7309;
	volatile int16_t x151 = 0;
	volatile int16_t x152 = 3;
	static volatile int32_t t28 = 624463689;

	t28 = (((x149*x150)<=x151)+x152);

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x153 = -1;
	volatile uint32_t x154 = UINT32_MAX;
	int32_t x155 = INT32_MIN;
	int32_t x156 = INT32_MIN;
	int32_t t29 = -2;

	t29 = (((x153*x154)<=x155)+x156);

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = -1LL;
	int8_t x158 = 16;
	volatile int8_t x159 = -3;
	int32_t x160 = -54891507;
	volatile int32_t t30 = -54817;

	t30 = (((x157*x158)<=x159)+x160);

	if (t30 != -54891506) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = INT16_MIN;
	volatile int32_t x162 = -598;
	int16_t x163 = INT16_MAX;

	t31 = (((x161*x162)<=x163)+x164);

	if (t31 != 369LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x165 = 1;
	static uint8_t x166 = 1U;
	uint8_t x167 = 3U;
	int32_t x168 = INT32_MIN;
	int32_t t32 = 3172747;

	t32 = (((x165*x166)<=x167)+x168);

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x170 = -1LL;
	int64_t x171 = INT64_MIN;
	volatile uint16_t x172 = UINT16_MAX;

	t33 = (((x169*x170)<=x171)+x172);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x174 = 39U;
	static uint32_t x175 = 435U;
	volatile int32_t t34 = -1577;

	t34 = (((x173*x174)<=x175)+x176);

	if (t34 != 111) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = 165715;
	static int32_t x182 = -1;
	static volatile int32_t t35 = 33783;

	t35 = (((x181*x182)<=x183)+x184);

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x186 = -1LL;
	int16_t x187 = -1;
	volatile int64_t x188 = -1LL;
	int64_t t36 = 1LL;

	t36 = (((x185*x186)<=x187)+x188);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = INT16_MIN;
	volatile int16_t x190 = -15490;
	volatile int64_t t37 = -120717021234571LL;

	t37 = (((x189*x190)<=x191)+x192);

	if (t37 != 214767959037661377LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x193 = UINT32_MAX;
	static int8_t x194 = -1;
	volatile uint8_t x195 = UINT8_MAX;
	int32_t t38 = 0;

	t38 = (((x193*x194)<=x195)+x196);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x197 = 14673U;
	int64_t x198 = 97555329772LL;
	int16_t x199 = -1831;
	volatile int64_t x200 = 544447155094843053LL;
	volatile int64_t t39 = 7288183138LL;

	t39 = (((x197*x198)<=x199)+x200);

	if (t39 != 544447155094843053LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = 960LL;
	uint16_t x202 = 2U;
	static uint64_t x203 = 53233LLU;
	static uint8_t x204 = 5U;
	volatile int32_t t40 = -191236;

	t40 = (((x201*x202)<=x203)+x204);

	if (t40 != 6) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x206 = -3LL;
	static uint64_t x207 = 1421LLU;
	int64_t x208 = INT64_MIN;
	int64_t t41 = INT64_MIN;

	t41 = (((x205*x206)<=x207)+x208);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x213 = 6LLU;
	int16_t x214 = 25;
	static int8_t x215 = -2;
	int32_t t42 = 0;

	t42 = (((x213*x214)<=x215)+x216);

	if (t42 != 65536) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x217 = 1042515;
	int8_t x218 = INT8_MIN;
	volatile int8_t x219 = INT8_MAX;
	int64_t x220 = 173096708337LL;

	t43 = (((x217*x218)<=x219)+x220);

	if (t43 != 173096708338LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x225 = 3U;
	int8_t x226 = INT8_MAX;
	static volatile uint64_t x228 = 10LLU;
	volatile uint64_t t44 = 2459904593591LLU;

	t44 = (((x225*x226)<=x227)+x228);

	if (t44 != 10LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x233 = INT8_MAX;
	int16_t x234 = -3;
	int16_t x235 = INT16_MIN;
	int64_t x236 = -1LL;
	int64_t t45 = -7965570571LL;

	t45 = (((x233*x234)<=x235)+x236);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x241 = 910;
	int32_t x242 = -1;
	uint32_t x243 = 20836U;
	static uint8_t x244 = 0U;
	volatile int32_t t46 = -1486;

	t46 = (((x241*x242)<=x243)+x244);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x245 = -933818;
	uint16_t x247 = 70U;
	volatile int16_t x248 = INT16_MIN;
	volatile int32_t t47 = -1;

	t47 = (((x245*x246)<=x247)+x248);

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x249 = 23U;
	volatile int32_t x250 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	volatile int32_t t48 = 933606937;

	t48 = (((x249*x250)<=x251)+x252);

	if (t48 != -44203928) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x253 = -1;
	static uint32_t x254 = UINT32_MAX;
	int8_t x255 = INT8_MIN;
	volatile int16_t x256 = 1290;
	int32_t t49 = 234278;

	t49 = (((x253*x254)<=x255)+x256);

	if (t49 != 1291) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x257 = 57;
	uint64_t x258 = UINT64_MAX;
	int32_t x259 = INT32_MIN;
	int32_t x260 = -1;

	t50 = (((x257*x258)<=x259)+x260);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x265 = UINT8_MAX;
	uint64_t x266 = 51881396LLU;
	int32_t x267 = -9982;
	static uint64_t x268 = UINT64_MAX;
	uint64_t t51 = 145517965052LLU;

	t51 = (((x265*x266)<=x267)+x268);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x269 = 294U;
	int32_t x270 = 10993;
	int16_t x271 = INT16_MIN;
	int16_t x272 = 8207;
	volatile int32_t t52 = -31;

	t52 = (((x269*x270)<=x271)+x272);

	if (t52 != 8207) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x273 = 174U;
	static int64_t x275 = -1LL;
	volatile uint64_t t53 = 24383287LLU;

	t53 = (((x273*x274)<=x275)+x276);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x277 = 0LL;
	int8_t x278 = -1;
	int8_t x279 = -1;
	int16_t x280 = -2807;
	int32_t t54 = 115971869;

	t54 = (((x277*x278)<=x279)+x280);

	if (t54 != -2807) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x281 = UINT16_MAX;
	uint64_t x282 = UINT64_MAX;
	static int8_t x283 = INT8_MAX;
	volatile int16_t x284 = INT16_MAX;
	static volatile int32_t t55 = 6;

	t55 = (((x281*x282)<=x283)+x284);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x290 = 3091LLU;
	static uint32_t x291 = 2681U;
	static int32_t x292 = INT32_MIN;
	int32_t t56 = INT32_MIN;

	t56 = (((x289*x290)<=x291)+x292);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x294 = -1;
	volatile int8_t x295 = INT8_MIN;
	static volatile int8_t x296 = INT8_MIN;

	t57 = (((x293*x294)<=x295)+x296);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = 107;
	uint16_t x303 = UINT16_MAX;
	uint32_t t58 = 866722006U;

	t58 = (((x301*x302)<=x303)+x304);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x309 = -1;
	uint64_t x312 = 3544413784560872668LLU;
	volatile uint64_t t59 = 3486LLU;

	t59 = (((x309*x310)<=x311)+x312);

	if (t59 != 3544413784560872668LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x317 = -1LL;
	uint64_t x318 = 3437053938449444448LLU;
	int16_t x319 = -1;

	t60 = (((x317*x318)<=x319)+x320);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t61 = 153;

	t61 = (((x321*x322)<=x323)+x324);

	if (t61 != 65536) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x325 = 2;
	uint32_t x327 = UINT32_MAX;
	int64_t x328 = -1LL;

	t62 = (((x325*x326)<=x327)+x328);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x329 = 8U;
	static uint32_t x330 = 3381306U;
	volatile int16_t x331 = INT16_MAX;
	static volatile uint64_t t63 = UINT64_MAX;

	t63 = (((x329*x330)<=x331)+x332);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x335 = -67096657571576202LL;
	int32_t t64 = 1473240;

	t64 = (((x333*x334)<=x335)+x336);

	if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x338 = 26633U;
	int16_t x339 = -15;
	uint32_t t65 = 935207U;

	t65 = (((x337*x338)<=x339)+x340);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x345 = -1LL;
	uint16_t x347 = 76U;
	int16_t x348 = -1;
	static volatile int32_t t66 = -2;

	t66 = (((x345*x346)<=x347)+x348);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x357 = 120770U;
	int16_t x358 = INT16_MIN;
	int32_t x360 = INT32_MAX;
	volatile int32_t t67 = INT32_MAX;

	t67 = (((x357*x358)<=x359)+x360);

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x361 = 2991U;
	int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MIN;
	int64_t t68 = 9788LL;

	t68 = (((x361*x362)<=x363)+x364);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x365 = -1LL;
	static int32_t x366 = INT32_MAX;
	int8_t x367 = -1;
	static int32_t x368 = INT32_MIN;
	static volatile int32_t t69 = -229522140;

	t69 = (((x365*x366)<=x367)+x368);

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x374 = 12366U;
	volatile int64_t x375 = INT64_MAX;
	uint32_t x376 = UINT32_MAX;
	uint32_t t70 = 3847100U;

	t70 = (((x373*x374)<=x375)+x376);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x377 = -1;
	static uint16_t x378 = UINT16_MAX;
	uint64_t x379 = UINT64_MAX;
	uint64_t x380 = UINT64_MAX;

	t71 = (((x377*x378)<=x379)+x380);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x385 = -8828;
	int32_t x386 = 122130;
	int64_t x388 = -1LL;
	volatile int64_t t72 = 586504719608748558LL;

	t72 = (((x385*x386)<=x387)+x388);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x393 = 3;
	static int16_t x394 = -64;
	static uint32_t x395 = 3801910U;
	static int64_t x396 = INT64_MAX;
	volatile int64_t t73 = INT64_MAX;

	t73 = (((x393*x394)<=x395)+x396);

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x397 = 0U;
	int32_t x398 = -1;
	uint32_t x399 = 41860U;
	int16_t x400 = INT16_MAX;
	volatile int32_t t74 = 20773;

	t74 = (((x397*x398)<=x399)+x400);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x401 = UINT8_MAX;
	int16_t x402 = 24;
	uint64_t x403 = UINT64_MAX;
	static uint8_t x404 = 1U;
	static volatile int32_t t75 = -115;

	t75 = (((x401*x402)<=x403)+x404);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x405 = 1U;
	static int64_t x406 = INT64_MIN;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = INT64_MIN;
	int64_t t76 = -287214075212477LL;

	t76 = (((x405*x406)<=x407)+x408);

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x410 = UINT32_MAX;
	static int64_t x411 = INT64_MIN;
	int64_t x412 = -1LL;
	int64_t t77 = -202233485LL;

	t77 = (((x409*x410)<=x411)+x412);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x414 = -1LL;
	int64_t x416 = -1LL;
	int64_t t78 = -9651LL;

	t78 = (((x413*x414)<=x415)+x416);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x417 = -1;
	static int64_t x419 = INT64_MAX;
	int32_t x420 = -1;

	t79 = (((x417*x418)<=x419)+x420);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x422 = UINT32_MAX;
	int32_t x423 = -123691;
	uint64_t x424 = 951924LLU;
	volatile uint64_t t80 = 31748691555125LLU;

	t80 = (((x421*x422)<=x423)+x424);

	if (t80 != 951925LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x426 = -809;
	static int64_t x427 = INT64_MIN;
	uint32_t x428 = 44618809U;
	uint32_t t81 = 1090944996U;

	t81 = (((x425*x426)<=x427)+x428);

	if (t81 != 44618809U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x429 = UINT16_MAX;
	volatile int8_t x430 = INT8_MIN;
	volatile int32_t x432 = 0;

	t82 = (((x429*x430)<=x431)+x432);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x437 = INT16_MAX;
	int32_t x438 = -1;
	int16_t x439 = INT16_MIN;

	t83 = (((x437*x438)<=x439)+x440);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x441 = -1;
	static int8_t x442 = INT8_MAX;
	volatile int64_t x444 = -1LL;

	t84 = (((x441*x442)<=x443)+x444);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x457 = -628505;
	static uint64_t x458 = UINT64_MAX;
	static int32_t x459 = INT32_MIN;
	int32_t x460 = INT32_MIN;
	int32_t t85 = 1753;

	t85 = (((x457*x458)<=x459)+x460);

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x461 = -477;
	volatile int64_t x462 = -188LL;
	static volatile int64_t x463 = INT64_MAX;
	uint16_t x464 = 13029U;

	t86 = (((x461*x462)<=x463)+x464);

	if (t86 != 13030) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x469 = 23U;
	static uint8_t x470 = 1U;
	int32_t x471 = -46704843;
	int8_t x472 = -31;
	static int32_t t87 = 13;

	t87 = (((x469*x470)<=x471)+x472);

	if (t87 != -30) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x473 = 21LLU;
	static int8_t x474 = INT8_MAX;
	volatile uint64_t x476 = 190895LLU;
	static uint64_t t88 = 6884838837849624834LLU;

	t88 = (((x473*x474)<=x475)+x476);

	if (t88 != 190896LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x477 = -1LL;
	volatile int64_t x479 = INT64_MIN;
	static int8_t x480 = -1;
	int32_t t89 = 106;

	t89 = (((x477*x478)<=x479)+x480);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x481 = 0U;
	int32_t x483 = INT32_MIN;

	t90 = (((x481*x482)<=x483)+x484);

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x486 = 274566710291LL;
	int64_t x487 = INT64_MAX;
	uint16_t x488 = 14U;
	int32_t t91 = -99758761;

	t91 = (((x485*x486)<=x487)+x488);

	if (t91 != 15) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x489 = 138022106LL;
	static int8_t x490 = -1;
	int32_t x491 = INT32_MIN;
	volatile int16_t x492 = INT16_MIN;
	int32_t t92 = -437;

	t92 = (((x489*x490)<=x491)+x492);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x494 = -1;

	t93 = (((x493*x494)<=x495)+x496);

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x497 = UINT32_MAX;
	uint64_t x499 = 741562LLU;
	volatile int64_t t94 = 70LL;

	t94 = (((x497*x498)<=x499)+x500);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x501 = UINT32_MAX;
	uint32_t x502 = 3718U;
	int64_t x503 = INT64_MAX;
	static volatile uint32_t x504 = 26469703U;
	static uint32_t t95 = 4044U;

	t95 = (((x501*x502)<=x503)+x504);

	if (t95 != 26469704U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x505 = UINT32_MAX;
	int8_t x506 = INT8_MAX;
	static int8_t x507 = 21;
	int16_t x508 = 0;

	t96 = (((x505*x506)<=x507)+x508);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x509 = UINT8_MAX;
	static int16_t x510 = 1200;
	int32_t x511 = INT32_MIN;
	uint64_t x512 = UINT64_MAX;

	t97 = (((x509*x510)<=x511)+x512);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x517 = -2LL;
	static int16_t x518 = -12849;
	uint32_t x520 = 23U;
	uint32_t t98 = 86295U;

	t98 = (((x517*x518)<=x519)+x520);

	if (t98 != 24U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x521 = UINT64_MAX;
	int32_t t99 = -6;

	t99 = (((x521*x522)<=x523)+x524);

	if (t99 != 127) { NG(); } else { ; }
	
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

