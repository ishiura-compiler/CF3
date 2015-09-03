#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int16_t x4 = -1;
uint16_t x8 = UINT16_MAX;
uint64_t x12 = UINT64_MAX;
int64_t x14 = -1LL;
volatile uint64_t x23 = 494LLU;
uint32_t t5 = UINT32_MAX;
static uint8_t x30 = 15U;
static int16_t x33 = INT16_MIN;
int64_t x34 = -2LL;
volatile int64_t x36 = INT64_MIN;
int16_t x38 = INT16_MIN;
int16_t x39 = INT16_MAX;
int64_t x40 = -1LL;
int8_t x45 = 0;
static volatile int16_t x47 = INT16_MIN;
volatile int16_t x52 = 19;
volatile int32_t x55 = 76573;
volatile int64_t x56 = 10869426LL;
volatile uint32_t t14 = UINT32_MAX;
int16_t x65 = -4;
volatile int32_t x66 = INT32_MAX;
int64_t x69 = INT64_MIN;
static volatile uint32_t x71 = 0U;
int32_t x75 = INT32_MIN;
static uint32_t x79 = UINT32_MAX;
uint32_t x81 = 6U;
uint16_t x86 = 30145U;
volatile int32_t x102 = 25167235;
int8_t x104 = INT8_MIN;
volatile int32_t t25 = -13;
static int16_t x113 = -1;
int64_t x118 = INT64_MIN;
int64_t x124 = 6850930044LL;
static int32_t x131 = INT32_MIN;
int32_t x136 = -1;
volatile int64_t t34 = INT64_MIN;
static int32_t x141 = 1995156;
uint8_t x147 = UINT8_MAX;
int32_t x148 = -747796773;
int32_t x150 = INT32_MIN;
uint8_t x169 = UINT8_MAX;
uint16_t x173 = 48U;
int16_t x174 = 421;
static uint8_t x175 = 0U;
static int16_t x177 = -21;
int32_t x182 = -1;
volatile int64_t x183 = 894LL;
static int64_t x186 = -2125505865LL;
int32_t t46 = 8608;
static int16_t x197 = 7054;
int32_t x199 = INT32_MIN;
static volatile uint16_t x200 = 1415U;
int32_t x201 = INT32_MIN;
uint64_t x203 = 247111533156196LLU;
int32_t x212 = 24370;
volatile int8_t x213 = INT8_MIN;
int8_t x216 = INT8_MAX;
int8_t x219 = -40;
volatile uint16_t x220 = 162U;
int64_t x231 = -1LL;
uint8_t x237 = 3U;
int32_t x242 = 2;
int16_t x245 = INT16_MIN;
int64_t x247 = 7LL;
int32_t x248 = 0;
int32_t t61 = -12;
uint64_t x250 = 5963625LLU;
uint32_t x251 = UINT32_MAX;
static int32_t x252 = INT32_MAX;
static volatile int32_t t62 = INT32_MAX;
volatile int8_t x253 = 0;
int32_t x258 = INT32_MIN;
int64_t x265 = INT64_MAX;
static uint64_t x269 = 173LLU;
uint8_t x270 = 8U;
static int32_t x278 = 0;
static int16_t x296 = -1;
int16_t x299 = INT16_MIN;
int16_t x307 = -1;
int16_t x310 = -1965;
volatile int64_t t78 = 3LL;
static volatile int8_t x319 = 27;
int16_t x322 = 3;
int16_t x332 = -89;
uint64_t x333 = 386LLU;
int16_t x337 = 177;
int8_t x338 = INT8_MIN;
int64_t x341 = -1LL;
volatile uint64_t x343 = 6920454069LLU;
int8_t x346 = -1;
int32_t x353 = -30025649;
static volatile int64_t x368 = INT64_MIN;
volatile int64_t t90 = INT64_MIN;
static int64_t x374 = INT64_MAX;
int32_t t92 = 148;
uint8_t x381 = 6U;
uint8_t x383 = 23U;
volatile int32_t x384 = INT32_MIN;
int32_t t94 = INT32_MIN;
static int32_t x386 = INT32_MIN;
static int16_t x389 = -15;
static uint32_t x399 = 315217U;
uint32_t t98 = 10350936U;
static int32_t x402 = INT32_MIN;
uint16_t x404 = 4773U;
int32_t t99 = -29989347;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	uint8_t x3 = UINT8_MAX;
	static int32_t t0 = -146056070;

	t0 = (((x1|x2)==x3)+x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int16_t x6 = -1;
	static volatile int16_t x7 = -1;
	static volatile int32_t t1 = -2003;

	t1 = (((x5|x6)==x7)+x8);

	if (t1 != 65536) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 49U;
	uint32_t x10 = 8390238U;
	int32_t x11 = -1;
	uint64_t t2 = UINT64_MAX;

	t2 = (((x9|x10)==x11)+x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x15 = INT8_MAX;
	volatile int64_t x16 = -1LL;
	static volatile int64_t t3 = -131LL;

	t3 = (((x13|x14)==x15)+x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MIN;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = -1LL;
	int64_t t4 = 130375398038064769LL;

	t4 = (((x17|x18)==x19)+x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 147548315199571577LL;
	uint32_t x22 = 4448333U;
	uint32_t x24 = UINT32_MAX;

	t5 = (((x21|x22)==x23)+x24);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int8_t x26 = INT8_MAX;
	int16_t x27 = 1;
	static int16_t x28 = -4;
	static int32_t t6 = -190869896;

	t6 = (((x25|x26)==x27)+x28);

	if (t6 != -4) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 789842096439168LLU;
	int8_t x31 = 12;
	int32_t x32 = 1;
	volatile int32_t t7 = -57130169;

	t7 = (((x29|x30)==x31)+x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x35 = 132U;
	static int64_t t8 = INT64_MIN;

	t8 = (((x33|x34)==x35)+x36);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 487;
	volatile int64_t t9 = 29502130747724LL;

	t9 = (((x37|x38)==x39)+x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MIN;
	static int16_t x43 = -10;
	int8_t x44 = INT8_MIN;
	static int32_t t10 = 15;

	t10 = (((x41|x42)==x43)+x44);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x46 = INT32_MAX;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = -534615197;

	t11 = (((x45|x46)==x47)+x48);

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 1516343326LLU;
	int64_t x50 = -11239518089243LL;
	uint32_t x51 = 23462022U;
	int32_t t12 = -1941691;

	t12 = (((x49|x50)==x51)+x52);

	if (t12 != 19) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x54 = 376U;
	int64_t t13 = -1LL;

	t13 = (((x53|x54)==x55)+x56);

	if (t13 != 10869426LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MIN;
	uint32_t x59 = UINT32_MAX;
	uint32_t x60 = UINT32_MAX;

	t14 = (((x57|x58)==x59)+x60);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	static int8_t x62 = 5;
	static int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MAX;
	int32_t t15 = 24;

	t15 = (((x61|x62)==x63)+x64);

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x67 = -1;
	volatile int16_t x68 = 189;
	static volatile int32_t t16 = -156541;

	t16 = (((x65|x66)==x67)+x68);

	if (t16 != 190) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 1259U;
	static uint16_t x72 = 29505U;
	static int32_t t17 = 45;

	t17 = (((x69|x70)==x71)+x72);

	if (t17 != 29505) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int8_t x74 = -1;
	int16_t x76 = -2;
	int32_t t18 = 3883679;

	t18 = (((x73|x74)==x75)+x76);

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = 51546;
	volatile uint16_t x78 = 134U;
	int64_t x80 = INT64_MIN;
	static int64_t t19 = INT64_MIN;

	t19 = (((x77|x78)==x79)+x80);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x82 = 59;
	int64_t x83 = INT64_MAX;
	uint8_t x84 = 61U;
	static volatile int32_t t20 = 840052773;

	t20 = (((x81|x82)==x83)+x84);

	if (t20 != 61) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MAX;
	uint64_t x87 = UINT64_MAX;
	int32_t x88 = INT32_MIN;
	int32_t t21 = INT32_MIN;

	t21 = (((x85|x86)==x87)+x88);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 3476LL;
	uint16_t x90 = 103U;
	int32_t x91 = INT32_MIN;
	volatile int8_t x92 = 1;
	int32_t t22 = 34769;

	t22 = (((x89|x90)==x91)+x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 103U;
	int64_t x94 = -1LL;
	int64_t x95 = -1LL;
	uint64_t x96 = 273187860713112LLU;
	volatile uint64_t t23 = 4968510012436LLU;

	t23 = (((x93|x94)==x95)+x96);

	if (t23 != 273187860713113LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	uint16_t x98 = 456U;
	volatile int32_t x99 = 55500559;
	uint64_t x100 = UINT64_MAX;
	uint64_t t24 = UINT64_MAX;

	t24 = (((x97|x98)==x99)+x100);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 7U;
	uint8_t x103 = UINT8_MAX;

	t25 = (((x101|x102)==x103)+x104);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = 9LLU;
	volatile int32_t x106 = -169;
	int64_t x107 = INT64_MIN;
	uint8_t x108 = 1U;
	static volatile int32_t t26 = -260;

	t26 = (((x105|x106)==x107)+x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int8_t x110 = INT8_MAX;
	static uint8_t x111 = UINT8_MAX;
	static volatile int32_t x112 = INT32_MIN;
	int32_t t27 = INT32_MIN;

	t27 = (((x109|x110)==x111)+x112);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = 12292242049751680LL;
	int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 10312;

	t28 = (((x113|x114)==x115)+x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 3;
	volatile int64_t x119 = INT64_MIN;
	static int8_t x120 = -1;
	volatile int32_t t29 = -16561426;

	t29 = (((x117|x118)==x119)+x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	int8_t x123 = INT8_MIN;
	static int64_t t30 = -3128991202LL;

	t30 = (((x121|x122)==x123)+x124);

	if (t30 != 6850930044LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = 191731414;
	volatile int16_t x126 = INT16_MIN;
	uint16_t x127 = 13312U;
	volatile int32_t x128 = INT32_MIN;
	int32_t t31 = INT32_MIN;

	t31 = (((x125|x126)==x127)+x128);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 7;
	uint32_t x130 = UINT32_MAX;
	static uint16_t x132 = 12908U;
	int32_t t32 = -102;

	t32 = (((x129|x130)==x131)+x132);

	if (t32 != 12908) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MAX;
	static uint8_t x134 = 5U;
	uint64_t x135 = UINT64_MAX;
	volatile int32_t t33 = -5679;

	t33 = (((x133|x134)==x135)+x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 96U;
	static int16_t x138 = -1;
	int64_t x139 = 3623870LL;
	int64_t x140 = INT64_MIN;

	t34 = (((x137|x138)==x139)+x140);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x142 = UINT16_MAX;
	int8_t x143 = -15;
	volatile int8_t x144 = 0;
	volatile int32_t t35 = 7508428;

	t35 = (((x141|x142)==x143)+x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 9U;
	static uint32_t x146 = 1467517137U;
	volatile int32_t t36 = 2;

	t36 = (((x145|x146)==x147)+x148);

	if (t36 != -747796773) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MAX;
	int8_t x151 = 1;
	static uint16_t x152 = 2964U;
	int32_t t37 = -1019;

	t37 = (((x149|x150)==x151)+x152);

	if (t37 != 2964) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 747541246LLU;
	int32_t x154 = INT32_MIN;
	int16_t x155 = 1;
	uint64_t x156 = 475LLU;
	volatile uint64_t t38 = 3515551240583LLU;

	t38 = (((x153|x154)==x155)+x156);

	if (t38 != 475LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile int32_t x158 = 191312;
	int64_t x159 = 18566268LL;
	static uint8_t x160 = UINT8_MAX;
	int32_t t39 = 699;

	t39 = (((x157|x158)==x159)+x160);

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 4492LLU;
	int8_t x162 = INT8_MAX;
	volatile int64_t x163 = INT64_MAX;
	int64_t x164 = INT64_MIN;
	static int64_t t40 = INT64_MIN;

	t40 = (((x161|x162)==x163)+x164);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MAX;
	static uint16_t x166 = 29U;
	int16_t x167 = INT16_MIN;
	static uint32_t x168 = UINT32_MAX;
	uint32_t t41 = UINT32_MAX;

	t41 = (((x165|x166)==x167)+x168);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x170 = 17U;
	static uint8_t x171 = 7U;
	int64_t x172 = -1007598LL;
	static volatile int64_t t42 = 15LL;

	t42 = (((x169|x170)==x171)+x172);

	if (t42 != -1007598LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x176 = 24114U;
	volatile int32_t t43 = -1975612;

	t43 = (((x173|x174)==x175)+x176);

	if (t43 != 24114) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x178 = -1;
	uint64_t x179 = 87LLU;
	static uint32_t x180 = UINT32_MAX;
	static volatile uint32_t t44 = UINT32_MAX;

	t44 = (((x177|x178)==x179)+x180);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	volatile int16_t x184 = INT16_MIN;
	int32_t t45 = -1;

	t45 = (((x181|x182)==x183)+x184);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = 8683;
	volatile int32_t x187 = -988911;
	int32_t x188 = -28568;

	t46 = (((x185|x186)==x187)+x188);

	if (t46 != -28568) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 62;
	int16_t x190 = -1;
	int16_t x191 = INT16_MAX;
	volatile int8_t x192 = INT8_MIN;
	volatile int32_t t47 = -214;

	t47 = (((x189|x190)==x191)+x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 40U;
	static int64_t x194 = INT64_MIN;
	static uint8_t x195 = UINT8_MAX;
	int8_t x196 = INT8_MIN;
	int32_t t48 = -3663;

	t48 = (((x193|x194)==x195)+x196);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = -1;
	volatile int32_t t49 = -265693611;

	t49 = (((x197|x198)==x199)+x200);

	if (t49 != 1415) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x202 = UINT8_MAX;
	volatile int8_t x204 = 61;
	volatile int32_t t50 = -19146;

	t50 = (((x201|x202)==x203)+x204);

	if (t50 != 61) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -1LL;
	int32_t x206 = 2394;
	volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = 0U;
	static volatile int32_t t51 = -1;

	t51 = (((x205|x206)==x207)+x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 732;
	int16_t x210 = -14;
	uint64_t x211 = 840314001260LLU;
	static int32_t t52 = 68770506;

	t52 = (((x209|x210)==x211)+x212);

	if (t52 != 24370) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = INT8_MIN;
	int8_t x215 = -4;
	volatile int32_t t53 = -658453;

	t53 = (((x213|x214)==x215)+x216);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	uint32_t x218 = 8U;
	volatile int32_t t54 = -50355979;

	t54 = (((x217|x218)==x219)+x220);

	if (t54 != 162) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	volatile uint64_t x222 = UINT64_MAX;
	int32_t x223 = INT32_MAX;
	uint8_t x224 = 1U;
	volatile int32_t t55 = -183;

	t55 = (((x221|x222)==x223)+x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -8;
	int64_t x226 = 12784250826LL;
	static int8_t x227 = INT8_MIN;
	int16_t x228 = -126;
	static int32_t t56 = 110;

	t56 = (((x225|x226)==x227)+x228);

	if (t56 != -126) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x229 = INT16_MIN;
	static volatile int16_t x230 = -1;
	volatile int64_t x232 = -39LL;
	int64_t t57 = 322790528LL;

	t57 = (((x229|x230)==x231)+x232);

	if (t57 != -38LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	uint32_t x234 = 1163991928U;
	uint32_t x235 = UINT32_MAX;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = 98;

	t58 = (((x233|x234)==x235)+x236);

	if (t58 != 256) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x238 = UINT64_MAX;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = -24LL;
	int64_t t59 = 8213134276LL;

	t59 = (((x237|x238)==x239)+x240);

	if (t59 != -23LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int64_t x243 = INT64_MIN;
	volatile uint16_t x244 = 3U;
	int32_t t60 = -108073698;

	t60 = (((x241|x242)==x243)+x244);

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x246 = UINT64_MAX;

	t61 = (((x245|x246)==x247)+x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;

	t62 = (((x249|x250)==x251)+x252);

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x254 = -4LL;
	int8_t x255 = -1;
	volatile int16_t x256 = INT16_MIN;
	int32_t t63 = 0;

	t63 = (((x253|x254)==x255)+x256);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int8_t x259 = INT8_MIN;
	int64_t x260 = -1LL;
	static int64_t t64 = -14896639216728952LL;

	t64 = (((x257|x258)==x259)+x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 0U;
	int32_t x262 = INT32_MIN;
	volatile int32_t x263 = INT32_MIN;
	static int8_t x264 = -25;
	volatile int32_t t65 = -2910045;

	t65 = (((x261|x262)==x263)+x264);

	if (t65 != -24) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x266 = 0;
	int64_t x267 = 865LL;
	int32_t x268 = -1755;
	volatile int32_t t66 = 332;

	t66 = (((x265|x266)==x267)+x268);

	if (t66 != -1755) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x271 = -1;
	int8_t x272 = INT8_MAX;
	int32_t t67 = -44;

	t67 = (((x269|x270)==x271)+x272);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 110578396726481LLU;
	int64_t x274 = INT64_MAX;
	static uint8_t x275 = 95U;
	int8_t x276 = 29;
	static int32_t t68 = -380571;

	t68 = (((x273|x274)==x275)+x276);

	if (t68 != 29) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	uint64_t x279 = 7945626990LLU;
	volatile int64_t x280 = -1LL;
	int64_t t69 = -256283958952LL;

	t69 = (((x277|x278)==x279)+x280);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 409844109LLU;
	int64_t x282 = 65352245LL;
	int64_t x283 = INT64_MIN;
	volatile int64_t x284 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = (((x281|x282)==x283)+x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 166U;
	volatile int32_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	static volatile int64_t x288 = -4LL;
	volatile int64_t t71 = -1252436008LL;

	t71 = (((x285|x286)==x287)+x288);

	if (t71 != -4LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = -27478LL;
	int8_t x290 = INT8_MIN;
	static uint16_t x291 = 70U;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = INT32_MIN;

	t72 = (((x289|x290)==x291)+x292);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	uint64_t x294 = 20460752260694184LLU;
	uint16_t x295 = 3U;
	volatile int32_t t73 = 99828;

	t73 = (((x293|x294)==x295)+x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	static uint8_t x298 = UINT8_MAX;
	uint8_t x300 = 14U;
	volatile int32_t t74 = -928278;

	t74 = (((x297|x298)==x299)+x300);

	if (t74 != 14) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	int8_t x302 = INT8_MIN;
	uint8_t x303 = 39U;
	int64_t x304 = -1LL;
	int64_t t75 = 7201103471846LL;

	t75 = (((x301|x302)==x303)+x304);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	volatile int16_t x306 = INT16_MIN;
	volatile int16_t x308 = 2;
	int32_t t76 = 120410258;

	t76 = (((x305|x306)==x307)+x308);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 9;
	int64_t x311 = -250201810564205LL;
	int16_t x312 = -399;
	volatile int32_t t77 = -35396238;

	t77 = (((x309|x310)==x311)+x312);

	if (t77 != -399) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MIN;
	uint16_t x314 = 1677U;
	uint64_t x315 = 10688LLU;
	static int64_t x316 = 2139949024LL;

	t78 = (((x313|x314)==x315)+x316);

	if (t78 != 2139949024LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	uint32_t x318 = UINT32_MAX;
	int8_t x320 = -1;
	int32_t t79 = 98181;

	t79 = (((x317|x318)==x319)+x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 1U;
	uint8_t x323 = 0U;
	int16_t x324 = -1;
	volatile int32_t t80 = -26500751;

	t80 = (((x321|x322)==x323)+x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x329 = 181698017U;
	uint64_t x330 = 16373822452177580LLU;
	int8_t x331 = -3;
	int32_t t81 = -3260;

	t81 = (((x329|x330)==x331)+x332);

	if (t81 != -89) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MIN;
	int32_t x336 = -2027;
	volatile int32_t t82 = 43;

	t82 = (((x333|x334)==x335)+x336);

	if (t82 != -2027) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x339 = INT64_MIN;
	uint32_t x340 = 1327415U;
	uint32_t t83 = 4U;

	t83 = (((x337|x338)==x339)+x340);

	if (t83 != 1327415U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x342 = 1;
	int64_t x344 = INT64_MIN;
	int64_t t84 = INT64_MIN;

	t84 = (((x341|x342)==x343)+x344);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = INT16_MIN;
	volatile uint64_t x347 = 31909230161112859LLU;
	int32_t x348 = 602145380;
	static int32_t t85 = -3215067;

	t85 = (((x345|x346)==x347)+x348);

	if (t85 != 602145380) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = INT64_MIN;
	volatile int8_t x350 = -6;
	static int64_t x351 = -116157294677LL;
	uint8_t x352 = UINT8_MAX;
	static volatile int32_t t86 = 2507861;

	t86 = (((x349|x350)==x351)+x352);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x354 = -1LL;
	int8_t x355 = INT8_MIN;
	volatile uint64_t x356 = 11035661204LLU;
	static uint64_t t87 = 264919074427LLU;

	t87 = (((x353|x354)==x355)+x356);

	if (t87 != 11035661204LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = -1LL;
	volatile int8_t x358 = INT8_MIN;
	uint64_t x359 = 26739828383279266LLU;
	int64_t x360 = -200327549076891LL;
	volatile int64_t t88 = -4954LL;

	t88 = (((x357|x358)==x359)+x360);

	if (t88 != -200327549076891LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x361 = INT8_MAX;
	static uint16_t x362 = 3U;
	int64_t x363 = INT64_MIN;
	volatile uint16_t x364 = 57U;
	volatile int32_t t89 = 151;

	t89 = (((x361|x362)==x363)+x364);

	if (t89 != 57) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x365 = -317478;
	int64_t x366 = INT64_MIN;
	volatile uint16_t x367 = 36U;

	t90 = (((x365|x366)==x367)+x368);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = -1;
	uint32_t x370 = 79626U;
	int8_t x371 = INT8_MIN;
	static uint64_t x372 = 62827257598297614LLU;
	volatile uint64_t t91 = 15590LLU;

	t91 = (((x369|x370)==x371)+x372);

	if (t91 != 62827257598297614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = 404;
	int64_t x375 = INT64_MIN;
	uint16_t x376 = UINT16_MAX;

	t92 = (((x373|x374)==x375)+x376);

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x377 = INT64_MAX;
	volatile int16_t x378 = INT16_MIN;
	static uint8_t x379 = 5U;
	int32_t x380 = -1;
	volatile int32_t t93 = 60134;

	t93 = (((x377|x378)==x379)+x380);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x382 = -10139302;

	t94 = (((x381|x382)==x383)+x384);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x385 = INT64_MIN;
	int16_t x387 = -4515;
	volatile uint32_t x388 = 6552848U;
	volatile uint32_t t95 = 443U;

	t95 = (((x385|x386)==x387)+x388);

	if (t95 != 6552848U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x390 = INT16_MAX;
	static volatile int8_t x391 = INT8_MAX;
	int16_t x392 = -51;
	static int32_t t96 = -1;

	t96 = (((x389|x390)==x391)+x392);

	if (t96 != -51) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x393 = 10U;
	int16_t x394 = INT16_MIN;
	uint8_t x395 = 30U;
	static uint8_t x396 = 93U;
	volatile int32_t t97 = 806125;

	t97 = (((x393|x394)==x395)+x396);

	if (t97 != 93) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MAX;
	uint32_t x400 = 6101258U;

	t98 = (((x397|x398)==x399)+x400);

	if (t98 != 6101258U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = UINT64_MAX;
	uint32_t x403 = 1843139477U;

	t99 = (((x401|x402)==x403)+x404);

	if (t99 != 4773) { NG(); } else { ; }
	
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

