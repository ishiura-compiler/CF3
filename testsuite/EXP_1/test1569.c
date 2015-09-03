#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x13 = INT64_MIN;
static uint32_t x16 = 2033048517U;
uint32_t x24 = UINT32_MAX;
uint8_t x30 = 1U;
int64_t x33 = -482302969696LL;
int8_t x34 = INT8_MIN;
volatile int8_t x43 = -1;
int16_t x48 = INT16_MAX;
volatile int32_t t11 = -5432;
volatile uint16_t x53 = 30447U;
int8_t x55 = 3;
static volatile int32_t t13 = 262;
uint8_t x60 = UINT8_MAX;
volatile uint16_t x67 = 3701U;
static int32_t x88 = INT32_MIN;
uint32_t x96 = 7162370U;
volatile uint8_t x97 = UINT8_MAX;
int32_t t23 = -4391524;
int16_t x104 = 30;
static volatile int32_t t25 = 10076951;
int64_t x109 = INT64_MIN;
int32_t x110 = INT32_MIN;
volatile uint16_t x114 = 56U;
uint8_t x115 = UINT8_MAX;
uint8_t x116 = 50U;
volatile int8_t x117 = -47;
static volatile int32_t x119 = -1;
static volatile int32_t t28 = 1;
volatile int32_t t29 = 0;
static uint64_t x130 = UINT64_MAX;
volatile int16_t x131 = INT16_MAX;
volatile int32_t t33 = -864097082;
uint64_t x142 = 4208650715268LLU;
int32_t x143 = INT32_MAX;
uint64_t x145 = 27LLU;
static uint8_t x159 = 2U;
int32_t t39 = -12101;
int64_t x171 = INT64_MIN;
int32_t t41 = 887;
volatile int64_t x173 = INT64_MAX;
volatile uint16_t x175 = 2247U;
static uint8_t x178 = 3U;
volatile int32_t x181 = -254;
volatile int8_t x184 = -1;
int32_t t46 = 0;
int32_t x198 = -5323334;
volatile int32_t x199 = -156;
int16_t x203 = -4392;
int8_t x205 = 0;
static int32_t t50 = -59823;
int8_t x215 = -1;
int32_t t51 = 443;
int16_t x221 = -1;
int8_t x224 = INT8_MAX;
int8_t x226 = INT8_MIN;
int32_t t53 = -6;
static int32_t t54 = -69;
int32_t x235 = -1;
volatile int8_t x241 = 1;
int8_t x242 = INT8_MAX;
uint16_t x246 = 84U;
uint32_t x248 = 13273U;
int32_t x250 = INT32_MIN;
volatile int16_t x261 = INT16_MIN;
int8_t x269 = INT8_MAX;
static uint32_t x276 = UINT32_MAX;
uint32_t x281 = 32U;
uint32_t x283 = 69963600U;
uint8_t x285 = 39U;
int64_t x291 = INT64_MIN;
int64_t x293 = -1LL;
int8_t x296 = -33;
volatile int32_t t68 = -797;
static int32_t x297 = -1;
int16_t x298 = INT16_MAX;
int32_t x300 = INT32_MIN;
int16_t x303 = -3116;
int8_t x310 = 0;
volatile int32_t t72 = 9560816;
int16_t x316 = -2906;
int16_t x319 = -1;
volatile uint8_t x325 = 6U;
int32_t x327 = INT32_MIN;
volatile int8_t x330 = -1;
int32_t x334 = 12689764;
int32_t t78 = -3001298;
uint32_t x341 = UINT32_MAX;
uint64_t x348 = 141192533LLU;
volatile int32_t t81 = -151444;
int64_t x354 = -728LL;
static volatile int8_t x355 = -1;
volatile int32_t t82 = 84781;
static int64_t x360 = 209729842LL;
static int32_t x361 = -1;
uint32_t x364 = 14104473U;
volatile uint64_t x366 = UINT64_MAX;
uint8_t x368 = 73U;
uint64_t x376 = 1364138LLU;
volatile uint32_t x377 = 2028004191U;
int64_t x388 = INT64_MAX;
uint32_t x391 = 121173U;
int8_t x392 = 14;
volatile int32_t t91 = -14223605;
int32_t x394 = 25;
int16_t x395 = INT16_MIN;
uint64_t x399 = UINT64_MAX;
volatile int64_t x411 = INT64_MIN;
static int8_t x413 = -1;
int64_t x420 = INT64_MIN;
int64_t x421 = INT64_MAX;
static int16_t x424 = 1;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x2 = -1LL;
	int16_t x3 = 1;
	int16_t x4 = -52;
	int32_t t0 = -1608;

	t0 = (((x1<=x2)/x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint32_t x6 = 9U;
	int16_t x7 = 1;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 3;

	t1 = (((x5<=x6)/x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int16_t x10 = -1;
	int8_t x11 = INT8_MAX;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -164504279;

	t2 = (((x9<=x10)/x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = INT64_MIN;
	int8_t x15 = 2;
	volatile int32_t t3 = 1886273;

	t3 = (((x13<=x14)/x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	int64_t x18 = INT64_MIN;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = -890LL;
	volatile int32_t t4 = 509175;

	t4 = (((x17<=x18)/x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MAX;
	static uint64_t x22 = 29696060045549LLU;
	uint64_t x23 = 224403454064208LLU;
	static int32_t t5 = -7253070;

	t5 = (((x21<=x22)/x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 6U;
	uint64_t x26 = 307504706LLU;
	int64_t x27 = INT64_MIN;
	int32_t x28 = 2479;
	volatile int32_t t6 = -934;

	t6 = (((x25<=x26)/x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 16U;
	volatile int64_t x31 = -1LL;
	uint16_t x32 = 1U;
	int32_t t7 = 252475938;

	t7 = (((x29<=x30)/x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = INT8_MIN;
	static uint8_t x36 = 3U;
	int32_t t8 = 88736702;

	t8 = (((x33<=x34)/x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 5895680203927514438LLU;
	uint8_t x38 = 45U;
	int64_t x39 = 1333LL;
	int64_t x40 = -1LL;
	int32_t t9 = 250902;

	t9 = (((x37<=x38)/x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	int32_t x42 = -1763131;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -15207021;

	t10 = (((x41<=x42)/x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint64_t x46 = 7371569082LLU;
	volatile int64_t x47 = INT64_MAX;

	t11 = (((x45<=x46)/x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	static uint64_t x50 = 1369LLU;
	int32_t x51 = -1;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t12 = 23;

	t12 = (((x49<=x50)/x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x54 = INT8_MIN;
	static volatile uint32_t x56 = 1U;

	t13 = (((x53<=x54)/x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 23U;
	uint8_t x58 = 5U;
	uint8_t x59 = UINT8_MAX;
	static int32_t t14 = -29214;

	t14 = (((x57<=x58)/x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 42U;
	int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MAX;
	volatile int8_t x64 = INT8_MAX;
	static int32_t t15 = 2716;

	t15 = (((x61<=x62)/x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int32_t x66 = -1;
	volatile uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -324016668;

	t16 = (((x65<=x66)/x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int8_t x70 = INT8_MIN;
	uint16_t x71 = 2U;
	int64_t x72 = INT64_MAX;
	static int32_t t17 = 1699;

	t17 = (((x69<=x70)/x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 57886629252460562LL;
	int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MAX;
	int8_t x76 = -1;
	volatile int32_t t18 = 190604;

	t18 = (((x73<=x74)/x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 0U;
	int32_t x82 = INT32_MIN;
	int16_t x83 = INT16_MAX;
	int32_t x84 = -57;
	volatile int32_t t19 = 1;

	t19 = (((x81<=x82)/x83)<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	uint16_t x87 = 8U;
	int32_t t20 = -14903190;

	t20 = (((x85<=x86)/x87)<x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = 5;
	uint16_t x91 = UINT16_MAX;
	static volatile int16_t x92 = INT16_MAX;
	int32_t t21 = 724383;

	t21 = (((x89<=x90)/x91)<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	int8_t x94 = INT8_MAX;
	int64_t x95 = -2588991090LL;
	static volatile int32_t t22 = 18193673;

	t22 = (((x93<=x94)/x95)<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = 24;
	volatile uint16_t x99 = UINT16_MAX;
	int8_t x100 = -1;

	t23 = (((x97<=x98)/x99)<x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = -1;
	int32_t x102 = INT32_MIN;
	int64_t x103 = INT64_MIN;
	volatile int32_t t24 = -28768;

	t24 = (((x101<=x102)/x103)<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x105 = -147139LL;
	int64_t x106 = INT64_MIN;
	volatile int32_t x107 = INT32_MIN;
	uint8_t x108 = UINT8_MAX;

	t25 = (((x105<=x106)/x107)<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x111 = 795455014U;
	int16_t x112 = INT16_MIN;
	int32_t t26 = 229212;

	t26 = (((x109<=x110)/x111)<x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = INT32_MIN;
	volatile int32_t t27 = -38816;

	t27 = (((x113<=x114)/x115)<x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = 64794255331LL;
	int8_t x120 = INT8_MIN;

	t28 = (((x117<=x118)/x119)<x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -11;
	volatile int64_t x122 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	volatile int32_t x124 = -1;

	t29 = (((x121<=x122)/x123)<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x125 = 412LLU;
	volatile uint8_t x126 = UINT8_MAX;
	int64_t x127 = -1LL;
	int64_t x128 = -1LL;
	volatile int32_t t30 = 0;

	t30 = (((x125<=x126)/x127)<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -833;
	uint64_t x132 = UINT64_MAX;
	int32_t t31 = -181852;

	t31 = (((x129<=x130)/x131)<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x133 = UINT64_MAX;
	uint8_t x134 = 75U;
	uint16_t x135 = UINT16_MAX;
	static volatile int8_t x136 = INT8_MIN;
	static int32_t t32 = -689721;

	t32 = (((x133<=x134)/x135)<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MAX;
	static volatile int64_t x138 = -1LL;
	int8_t x139 = -39;
	int64_t x140 = -1LL;

	t33 = (((x137<=x138)/x139)<x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t34 = 0;

	t34 = (((x141<=x142)/x143)<x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MAX;
	static int32_t x148 = -1;
	static int32_t t35 = -7567795;

	t35 = (((x145<=x146)/x147)<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -2289619824337504987LL;
	uint8_t x150 = 25U;
	volatile int64_t x151 = -706347808465348431LL;
	int8_t x152 = -1;
	int32_t t36 = -1;

	t36 = (((x149<=x150)/x151)<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 1;
	int64_t x154 = -1LL;
	static uint8_t x155 = UINT8_MAX;
	uint32_t x156 = 13237U;
	int32_t t37 = 25423186;

	t37 = (((x153<=x154)/x155)<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x157 = INT8_MIN;
	int8_t x158 = -50;
	uint8_t x160 = 7U;
	volatile int32_t t38 = 308100826;

	t38 = (((x157<=x158)/x159)<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MAX;
	static uint64_t x163 = 1372766022LLU;
	int64_t x164 = INT64_MIN;

	t39 = (((x161<=x162)/x163)<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x165 = INT8_MAX;
	volatile int32_t x166 = 424;
	static volatile uint64_t x167 = UINT64_MAX;
	int8_t x168 = 0;
	static volatile int32_t t40 = 5419559;

	t40 = (((x165<=x166)/x167)<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -2701;
	uint8_t x170 = 1U;
	static uint64_t x172 = 6489371419760578155LLU;

	t41 = (((x169<=x170)/x171)<x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x174 = INT64_MAX;
	uint8_t x176 = UINT8_MAX;
	static int32_t t42 = 20239905;

	t42 = (((x173<=x174)/x175)<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = 2;
	volatile uint64_t x179 = UINT64_MAX;
	volatile uint8_t x180 = 15U;
	volatile int32_t t43 = 7022;

	t43 = (((x177<=x178)/x179)<x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x182 = INT64_MIN;
	static volatile uint32_t x183 = 1432U;
	int32_t t44 = 170845529;

	t44 = (((x181<=x182)/x183)<x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	int8_t x187 = INT8_MAX;
	int8_t x188 = -1;
	int32_t t45 = 123;

	t45 = (((x185<=x186)/x187)<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = -1LL;
	int32_t x190 = INT32_MIN;
	int8_t x191 = -1;
	volatile int8_t x192 = 0;

	t46 = (((x189<=x190)/x191)<x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 103U;
	uint64_t x194 = 1881LLU;
	volatile int16_t x195 = INT16_MAX;
	static uint16_t x196 = 88U;
	int32_t t47 = 5;

	t47 = (((x193<=x194)/x195)<x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	static uint32_t x200 = 13704295U;
	int32_t t48 = -20;

	t48 = (((x197<=x198)/x199)<x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = 1;
	volatile uint16_t x202 = 36U;
	int32_t x204 = INT32_MIN;
	static volatile int32_t t49 = -6721;

	t49 = (((x201<=x202)/x203)<x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x206 = 13712U;
	int64_t x207 = INT64_MIN;
	int16_t x208 = -5586;

	t50 = (((x205<=x206)/x207)<x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x213 = INT8_MAX;
	volatile int32_t x214 = -328767259;
	int64_t x216 = INT64_MIN;

	t51 = (((x213<=x214)/x215)<x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x222 = UINT8_MAX;
	int32_t x223 = -1;
	int32_t t52 = 150501312;

	t52 = (((x221<=x222)/x223)<x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = INT32_MAX;
	static uint8_t x227 = 4U;
	int64_t x228 = -1LL;

	t53 = (((x225<=x226)/x227)<x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x229 = INT16_MIN;
	uint32_t x230 = 421196032U;
	static uint8_t x231 = 1U;
	volatile uint32_t x232 = 1U;

	t54 = (((x229<=x230)/x231)<x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x233 = 2;
	int32_t x234 = INT32_MIN;
	uint64_t x236 = 107254154534726844LLU;
	static int32_t t55 = -10322189;

	t55 = (((x233<=x234)/x235)<x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x243 = 1411LL;
	uint64_t x244 = 210167308LLU;
	int32_t t56 = 16;

	t56 = (((x241<=x242)/x243)<x244);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	volatile int32_t x247 = INT32_MIN;
	volatile int32_t t57 = 7;

	t57 = (((x245<=x246)/x247)<x248);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x249 = UINT16_MAX;
	volatile int16_t x251 = INT16_MIN;
	int64_t x252 = INT64_MIN;
	volatile int32_t t58 = 8947196;

	t58 = (((x249<=x250)/x251)<x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = -1;
	int64_t x254 = INT64_MIN;
	uint64_t x255 = UINT64_MAX;
	static int64_t x256 = -1LL;
	int32_t t59 = -715;

	t59 = (((x253<=x254)/x255)<x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = INT32_MAX;
	int32_t x258 = 27107;
	static int8_t x259 = INT8_MIN;
	static uint32_t x260 = UINT32_MAX;
	volatile int32_t t60 = -25692;

	t60 = (((x257<=x258)/x259)<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x262 = INT16_MIN;
	uint64_t x263 = 1120023LLU;
	uint16_t x264 = 24124U;
	volatile int32_t t61 = 302470459;

	t61 = (((x261<=x262)/x263)<x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x270 = 8U;
	int16_t x271 = INT16_MAX;
	int32_t x272 = INT32_MIN;
	int32_t t62 = 7;

	t62 = (((x269<=x270)/x271)<x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x273 = INT8_MIN;
	static volatile int8_t x274 = INT8_MIN;
	volatile int8_t x275 = INT8_MIN;
	static volatile int32_t t63 = -5;

	t63 = (((x273<=x274)/x275)<x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x277 = INT32_MAX;
	int16_t x278 = 471;
	int16_t x279 = -351;
	static int8_t x280 = INT8_MAX;
	volatile int32_t t64 = 10015;

	t64 = (((x277<=x278)/x279)<x280);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x282 = INT16_MIN;
	int8_t x284 = INT8_MAX;
	int32_t t65 = 54528049;

	t65 = (((x281<=x282)/x283)<x284);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x286 = INT8_MAX;
	uint64_t x287 = 1061763LLU;
	static volatile uint64_t x288 = UINT64_MAX;
	int32_t t66 = -55;

	t66 = (((x285<=x286)/x287)<x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x289 = 1702502U;
	int8_t x290 = INT8_MIN;
	int64_t x292 = -1LL;
	volatile int32_t t67 = -2091555;

	t67 = (((x289<=x290)/x291)<x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x294 = 798U;
	static uint8_t x295 = UINT8_MAX;

	t68 = (((x293<=x294)/x295)<x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x299 = -3136197229972537LL;
	volatile int32_t t69 = -1964583;

	t69 = (((x297<=x298)/x299)<x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x301 = 3U;
	int64_t x302 = 6165760880023LL;
	static int32_t x304 = INT32_MAX;
	static volatile int32_t t70 = 374366088;

	t70 = (((x301<=x302)/x303)<x304);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x305 = UINT16_MAX;
	volatile int8_t x306 = INT8_MAX;
	volatile int8_t x307 = -1;
	static volatile int32_t x308 = -1;
	volatile int32_t t71 = 1;

	t71 = (((x305<=x306)/x307)<x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = 0U;
	volatile uint64_t x311 = 338574480LLU;
	int64_t x312 = INT64_MIN;

	t72 = (((x309<=x310)/x311)<x312);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = 376;
	static int32_t x314 = INT32_MAX;
	int16_t x315 = INT16_MIN;
	int32_t t73 = -43120;

	t73 = (((x313<=x314)/x315)<x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = 1;
	uint64_t x318 = 2264421474058681LLU;
	uint8_t x320 = 25U;
	int32_t t74 = 886;

	t74 = (((x317<=x318)/x319)<x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x321 = 6065U;
	int16_t x322 = -174;
	uint8_t x323 = 3U;
	int64_t x324 = INT64_MIN;
	volatile int32_t t75 = -12827360;

	t75 = (((x321<=x322)/x323)<x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x326 = INT16_MIN;
	static int16_t x328 = INT16_MAX;
	volatile int32_t t76 = -28577;

	t76 = (((x325<=x326)/x327)<x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x329 = 9888U;
	int32_t x331 = INT32_MIN;
	int64_t x332 = -46355LL;
	int32_t t77 = -199;

	t77 = (((x329<=x330)/x331)<x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = INT64_MIN;
	uint64_t x335 = UINT64_MAX;
	volatile uint16_t x336 = 2U;

	t78 = (((x333<=x334)/x335)<x336);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x342 = 2LLU;
	volatile int64_t x343 = INT64_MAX;
	uint8_t x344 = 88U;
	int32_t t79 = 183239468;

	t79 = (((x341<=x342)/x343)<x344);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = -26;
	int8_t x346 = -1;
	static int16_t x347 = 24;
	volatile int32_t t80 = 1;

	t80 = (((x345<=x346)/x347)<x348);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = -48915;
	volatile uint64_t x350 = UINT64_MAX;
	static volatile int32_t x351 = -92658356;
	int16_t x352 = -1;

	t81 = (((x349<=x350)/x351)<x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = INT64_MIN;
	int32_t x356 = 372;

	t82 = (((x353<=x354)/x355)<x356);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x357 = 207631569U;
	static int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MAX;
	int32_t t83 = 84298742;

	t83 = (((x357<=x358)/x359)<x360);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x362 = UINT8_MAX;
	uint32_t x363 = 373U;
	int32_t t84 = 126;

	t84 = (((x361<=x362)/x363)<x364);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x365 = 33279758809444551LLU;
	volatile int16_t x367 = 35;
	volatile int32_t t85 = 1349274;

	t85 = (((x365<=x366)/x367)<x368);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x369 = -6;
	int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MIN;
	uint32_t x372 = 14429U;
	volatile int32_t t86 = -2;

	t86 = (((x369<=x370)/x371)<x372);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = 10;
	volatile int32_t x374 = -1;
	volatile int16_t x375 = INT16_MIN;
	int32_t t87 = -4610;

	t87 = (((x373<=x374)/x375)<x376);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x378 = 32422U;
	volatile int64_t x379 = -1LL;
	int8_t x380 = -1;
	int32_t t88 = 788950973;

	t88 = (((x377<=x378)/x379)<x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x382 = 4474255781911406438LLU;
	int8_t x383 = INT8_MIN;
	volatile int16_t x384 = -1;
	volatile int32_t t89 = 31489;

	t89 = (((x381<=x382)/x383)<x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x385 = 53;
	volatile int32_t x386 = INT32_MAX;
	int32_t x387 = -1;
	int32_t t90 = 7;

	t90 = (((x385<=x386)/x387)<x388);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x389 = 0;
	static int32_t x390 = INT32_MIN;

	t91 = (((x389<=x390)/x391)<x392);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = INT64_MIN;
	int32_t x396 = 305;
	volatile int32_t t92 = 224;

	t92 = (((x393<=x394)/x395)<x396);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = -24;
	int64_t x398 = INT64_MIN;
	static volatile uint32_t x400 = UINT32_MAX;
	volatile int32_t t93 = 1;

	t93 = (((x397<=x398)/x399)<x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x401 = 1;
	int8_t x402 = INT8_MIN;
	int64_t x403 = -1058893202LL;
	static int16_t x404 = -1;
	int32_t t94 = -640237;

	t94 = (((x401<=x402)/x403)<x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x405 = UINT32_MAX;
	volatile int8_t x406 = 34;
	uint8_t x407 = 112U;
	int32_t x408 = -1;
	volatile int32_t t95 = 1633;

	t95 = (((x405<=x406)/x407)<x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = INT8_MAX;
	static int8_t x410 = INT8_MAX;
	int64_t x412 = -44568201510503LL;
	volatile int32_t t96 = 12386;

	t96 = (((x409<=x410)/x411)<x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x414 = INT8_MIN;
	int16_t x415 = INT16_MAX;
	int16_t x416 = INT16_MAX;
	volatile int32_t t97 = -755912664;

	t97 = (((x413<=x414)/x415)<x416);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x417 = 40131783U;
	static int16_t x418 = -4021;
	int16_t x419 = -1;
	int32_t t98 = 20;

	t98 = (((x417<=x418)/x419)<x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x422 = 52;
	volatile uint8_t x423 = 15U;
	static volatile int32_t t99 = -265;

	t99 = (((x421<=x422)/x423)<x424);

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

