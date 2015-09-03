#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = UINT64_MAX;
volatile int32_t t1 = -8200;
uint16_t x10 = 5452U;
int16_t x16 = -1;
uint16_t x18 = UINT16_MAX;
static uint32_t x20 = 13330U;
static volatile int32_t t5 = 97;
volatile int16_t x37 = INT16_MIN;
int16_t x38 = -520;
volatile int32_t t9 = 557070;
static int64_t x44 = INT64_MAX;
int32_t t10 = 989244;
volatile int64_t x48 = 7145LL;
int8_t x51 = -22;
uint16_t x59 = UINT16_MAX;
int64_t x61 = -1LL;
static volatile int8_t x62 = -1;
uint32_t x66 = 376359U;
int64_t x67 = INT64_MAX;
int32_t x70 = -142628915;
static uint32_t x71 = 8058180U;
static int32_t t17 = 241;
int64_t x83 = -101857LL;
int32_t x93 = -1;
volatile int32_t t23 = 0;
int32_t t25 = 118842191;
static int32_t x109 = 9351;
uint16_t x113 = 5U;
volatile int64_t x117 = INT64_MIN;
uint16_t x120 = 4U;
int32_t t29 = 33490059;
static int32_t t30 = 4922175;
volatile uint16_t x142 = UINT16_MAX;
int8_t x145 = -1;
static uint64_t x148 = 11515045449551620LLU;
int16_t x154 = INT16_MIN;
int64_t x156 = INT64_MIN;
int32_t t36 = -876931;
int8_t x157 = INT8_MIN;
volatile uint64_t x160 = 6949376546LLU;
volatile int32_t t37 = -275876273;
int16_t x162 = INT16_MIN;
static int8_t x178 = INT8_MAX;
int32_t t42 = 15891;
int8_t x182 = INT8_MIN;
static uint8_t x185 = UINT8_MAX;
static int32_t x186 = -113;
int32_t x187 = INT32_MIN;
int8_t x194 = INT8_MAX;
static int64_t x195 = INT64_MIN;
volatile int32_t t46 = 3;
static uint32_t x197 = 1U;
int32_t t48 = 20;
uint64_t x205 = UINT64_MAX;
int32_t x206 = INT32_MIN;
int64_t x208 = -19373885842391LL;
static uint8_t x212 = UINT8_MAX;
int8_t x213 = -1;
int64_t x216 = -1623LL;
uint16_t x226 = 159U;
int8_t x239 = INT8_MIN;
static uint64_t x242 = 245834794212LLU;
int16_t x245 = INT16_MIN;
int32_t x248 = -1;
volatile int64_t x250 = -1LL;
volatile int32_t x260 = INT32_MAX;
volatile int32_t t60 = -8082;
uint8_t x266 = 14U;
uint32_t x277 = 69643557U;
int32_t x279 = INT32_MAX;
volatile int32_t t65 = -201299418;
int8_t x284 = -23;
int64_t x303 = 13906909056LL;
uint32_t x309 = 864165800U;
static int64_t x310 = INT64_MIN;
int32_t x313 = INT32_MAX;
int8_t x316 = INT8_MAX;
static int32_t t73 = -1;
uint64_t x319 = 116621743LLU;
volatile int32_t t74 = 3545770;
int64_t x323 = 1111830043138669LL;
volatile uint32_t x326 = 198891U;
int32_t x328 = INT32_MAX;
volatile int32_t t76 = 6;
int64_t x335 = INT64_MIN;
uint8_t x342 = UINT8_MAX;
int32_t x344 = INT32_MIN;
static volatile uint16_t x351 = 7U;
int64_t x355 = INT64_MIN;
int64_t x362 = 15LL;
int8_t x365 = INT8_MIN;
volatile int8_t x375 = -1;
static int64_t x383 = INT64_MIN;
int8_t x388 = INT8_MIN;
volatile int32_t t89 = 1;
static int8_t x389 = 3;
static uint32_t x400 = UINT32_MAX;
volatile int32_t t92 = -11;
uint64_t x402 = 692606007LLU;
static int16_t x403 = INT16_MAX;
volatile uint32_t x414 = 23288632U;
int64_t x416 = -101603LL;
static volatile int16_t x417 = 3776;
uint16_t x419 = 10U;
int16_t x429 = INT16_MAX;
uint32_t x436 = 109U;


void f0(void) {
	int32_t x1 = -1;
	volatile uint16_t x2 = UINT16_MAX;
	volatile int32_t x3 = INT32_MIN;
	uint8_t x4 = 9U;
	int32_t t0 = 11025446;

	t0 = (((x1+x2)<x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 32217938;
	int64_t x6 = -1LL;
	uint32_t x7 = UINT32_MAX;

	t1 = (((x5+x6)<x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 41U;
	volatile int32_t x11 = 379397763;
	int16_t x12 = -1;
	static int32_t t2 = -122478;

	t2 = (((x9+x10)<x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 766;
	static volatile uint32_t x14 = 946837392U;
	int16_t x15 = -29;
	int32_t t3 = 61751116;

	t3 = (((x13+x14)<x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 18944442007912308LL;
	static uint64_t x19 = 762842LLU;
	int32_t t4 = -14658459;

	t4 = (((x17+x18)<x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	int16_t x22 = -1;
	uint32_t x23 = UINT32_MAX;
	static volatile int8_t x24 = INT8_MAX;

	t5 = (((x21+x22)<x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 17U;
	int32_t x26 = INT32_MIN;
	static volatile int64_t x27 = INT64_MIN;
	uint16_t x28 = 31818U;
	int32_t t6 = 11829301;

	t6 = (((x25+x26)<x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	volatile int16_t x30 = -1000;
	volatile int32_t x31 = 6;
	volatile int16_t x32 = -5;
	volatile int32_t t7 = -4993966;

	t7 = (((x29+x30)<x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile uint16_t x34 = 13U;
	static uint64_t x35 = 4LLU;
	static uint64_t x36 = 14419083821478LLU;
	int32_t t8 = 8;

	t8 = (((x33+x34)<x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x39 = 15917923U;
	static uint16_t x40 = 14473U;

	t9 = (((x37+x38)<x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int16_t x42 = INT16_MAX;
	int64_t x43 = -3445938377255843091LL;

	t10 = (((x41+x42)<x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	uint32_t x46 = 1263564U;
	static uint64_t x47 = UINT64_MAX;
	int32_t t11 = 647726070;

	t11 = (((x45+x46)<x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 11739494U;
	int16_t x50 = 6806;
	int32_t x52 = -4704;
	volatile int32_t t12 = 1070946790;

	t12 = (((x49+x50)<x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 22546U;
	int16_t x54 = INT16_MAX;
	volatile int32_t x55 = 10683831;
	int16_t x56 = 0;
	volatile int32_t t13 = -5680;

	t13 = (((x53+x54)<x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	int32_t x58 = 7200;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 155;

	t14 = (((x57+x58)<x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 48360534;

	t15 = (((x61+x62)<x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int64_t x68 = INT64_MAX;
	volatile int32_t t16 = -2514329;

	t16 = (((x65+x66)<x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	uint16_t x72 = UINT16_MAX;

	t17 = (((x69+x70)<x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	uint32_t x74 = UINT32_MAX;
	static volatile int32_t x75 = 63030904;
	uint16_t x76 = 3U;
	volatile int32_t t18 = -1;

	t18 = (((x73+x74)<x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MAX;
	uint64_t x78 = UINT64_MAX;
	static uint64_t x79 = 1011711209918513297LLU;
	static volatile int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = 2934105;

	t19 = (((x77+x78)<x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 14286797LL;
	volatile uint32_t x82 = 15U;
	int64_t x84 = -1LL;
	int32_t t20 = -70157783;

	t20 = (((x81+x82)<x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 2914070265196LLU;
	volatile int64_t x86 = 10203607LL;
	int16_t x87 = INT16_MIN;
	volatile int16_t x88 = -335;
	volatile int32_t t21 = -31;

	t21 = (((x85+x86)<x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	uint16_t x90 = 155U;
	int32_t x91 = -1;
	volatile int64_t x92 = INT64_MAX;
	int32_t t22 = 506208;

	t22 = (((x89+x90)<x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = 3U;
	int64_t x95 = 54249096306716LL;
	static int16_t x96 = INT16_MAX;

	t23 = (((x93+x94)<x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x101 = 37U;
	int32_t x102 = INT32_MAX;
	uint64_t x103 = 33020255146968LLU;
	int16_t x104 = INT16_MAX;
	int32_t t24 = 182535777;

	t24 = (((x101+x102)<x103)==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x105 = UINT64_MAX;
	volatile uint64_t x106 = 3692350032760437765LLU;
	int8_t x107 = 38;
	int32_t x108 = -1;

	t25 = (((x105+x106)<x107)==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x110 = UINT16_MAX;
	volatile uint8_t x111 = 2U;
	volatile int32_t x112 = INT32_MIN;
	int32_t t26 = 1538;

	t26 = (((x109+x110)<x111)==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MIN;
	volatile int32_t x116 = INT32_MIN;
	static int32_t t27 = 3251;

	t27 = (((x113+x114)<x115)==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x118 = UINT32_MAX;
	static int8_t x119 = 8;
	int32_t t28 = -4557225;

	t28 = (((x117+x118)<x119)==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	uint32_t x122 = 771221U;
	static uint16_t x123 = UINT16_MAX;
	static int64_t x124 = 759824016LL;

	t29 = (((x121+x122)<x123)==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1;
	uint8_t x126 = 1U;
	uint64_t x127 = 1133086655046328LLU;
	int8_t x128 = INT8_MIN;

	t30 = (((x125+x126)<x127)==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -1;
	uint32_t x130 = 31U;
	int8_t x131 = -1;
	uint16_t x132 = 4U;
	int32_t t31 = 237637;

	t31 = (((x129+x130)<x131)==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 10U;
	int8_t x134 = INT8_MIN;
	volatile int64_t x135 = INT64_MAX;
	int8_t x136 = -57;
	static int32_t t32 = 13;

	t32 = (((x133+x134)<x135)==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = UINT16_MAX;
	int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MIN;
	int8_t x140 = 1;
	static int32_t t33 = 1;

	t33 = (((x137+x138)<x139)==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	static volatile int32_t x143 = INT32_MIN;
	static int32_t x144 = INT32_MIN;
	volatile int32_t t34 = -185;

	t34 = (((x141+x142)<x143)==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x146 = 498;
	volatile uint16_t x147 = 0U;
	volatile int32_t t35 = -109217837;

	t35 = (((x145+x146)<x147)==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x153 = 27906262U;
	int64_t x155 = INT64_MAX;

	t36 = (((x153+x154)<x155)==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x158 = -1;
	int8_t x159 = INT8_MIN;

	t37 = (((x157+x158)<x159)==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MAX;
	int8_t x163 = INT8_MIN;
	int64_t x164 = 48768886184842LL;
	volatile int32_t t38 = -2;

	t38 = (((x161+x162)<x163)==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x165 = -36;
	int64_t x166 = -1LL;
	int16_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	volatile int32_t t39 = 15574;

	t39 = (((x165+x166)<x167)==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int8_t x170 = INT8_MAX;
	static int32_t x171 = INT32_MAX;
	int64_t x172 = -36689006LL;
	int32_t t40 = -5;

	t40 = (((x169+x170)<x171)==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x173 = 105U;
	static volatile int32_t x174 = 137080789;
	int16_t x175 = 13220;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t41 = -225816;

	t41 = (((x173+x174)<x175)==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 1087LLU;
	int16_t x179 = INT16_MIN;
	static uint8_t x180 = 78U;

	t42 = (((x177+x178)<x179)==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = 463869645571LL;
	int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	int32_t t43 = 360043;

	t43 = (((x181+x182)<x183)==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x188 = INT16_MIN;
	static volatile int32_t t44 = -7259;

	t44 = (((x185+x186)<x187)==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 6507819115873LLU;
	int64_t x190 = INT64_MAX;
	static int8_t x191 = -13;
	int16_t x192 = -1;
	int32_t t45 = 52622088;

	t45 = (((x189+x190)<x191)==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = -1;
	uint64_t x196 = 55819547097479327LLU;

	t46 = (((x193+x194)<x195)==x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x198 = 5286361643LLU;
	int32_t x199 = -1;
	volatile int32_t x200 = -16749264;
	volatile int32_t t47 = 564811468;

	t47 = (((x197+x198)<x199)==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x201 = UINT16_MAX;
	int16_t x202 = 0;
	int16_t x203 = -27;
	uint32_t x204 = 64340U;

	t48 = (((x201+x202)<x203)==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x207 = INT8_MIN;
	volatile int32_t t49 = 7980421;

	t49 = (((x205+x206)<x207)==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = 3017334LLU;
	uint8_t x210 = UINT8_MAX;
	int32_t x211 = 1;
	volatile int32_t t50 = -1419;

	t50 = (((x209+x210)<x211)==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x214 = 4U;
	volatile int16_t x215 = INT16_MAX;
	volatile int32_t t51 = -31860585;

	t51 = (((x213+x214)<x215)==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = -1;
	int32_t x218 = INT32_MAX;
	uint64_t x219 = UINT64_MAX;
	int16_t x220 = 40;
	int32_t t52 = 150384878;

	t52 = (((x217+x218)<x219)==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = -1;
	uint32_t x227 = 16U;
	static int8_t x228 = -1;
	volatile int32_t t53 = -166392328;

	t53 = (((x225+x226)<x227)==x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x229 = 229319U;
	int64_t x230 = 127446085835192LL;
	int8_t x231 = -7;
	int32_t x232 = INT32_MIN;
	static int32_t t54 = 246;

	t54 = (((x229+x230)<x231)==x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = -1LL;
	static int16_t x234 = 0;
	static uint16_t x235 = UINT16_MAX;
	int32_t x236 = INT32_MAX;
	static int32_t t55 = 1;

	t55 = (((x233+x234)<x235)==x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x237 = 31U;
	static uint32_t x238 = 28502U;
	int16_t x240 = 14;
	volatile int32_t t56 = 48;

	t56 = (((x237+x238)<x239)==x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = INT64_MAX;
	static volatile int64_t x243 = -381152LL;
	int8_t x244 = INT8_MIN;
	int32_t t57 = 28;

	t57 = (((x241+x242)<x243)==x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x246 = INT32_MAX;
	volatile int8_t x247 = -17;
	volatile int32_t t58 = -12;

	t58 = (((x245+x246)<x247)==x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = 29756207482041LLU;
	volatile uint32_t x251 = 285450821U;
	volatile int32_t x252 = INT32_MIN;
	int32_t t59 = 31250154;

	t59 = (((x249+x250)<x251)==x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = INT32_MIN;
	volatile uint8_t x258 = 1U;
	int16_t x259 = 0;

	t60 = (((x257+x258)<x259)==x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = -302LL;
	static uint16_t x262 = 81U;
	int32_t x263 = INT32_MIN;
	static int8_t x264 = INT8_MIN;
	int32_t t61 = 55;

	t61 = (((x261+x262)<x263)==x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x265 = 28U;
	uint8_t x267 = UINT8_MAX;
	int32_t x268 = INT32_MIN;
	volatile int32_t t62 = 401;

	t62 = (((x265+x266)<x267)==x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = UINT64_MAX;
	static int16_t x270 = -74;
	static volatile uint8_t x271 = 52U;
	static int64_t x272 = INT64_MIN;
	volatile int32_t t63 = -88;

	t63 = (((x269+x270)<x271)==x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = -1;
	int64_t x275 = INT64_MIN;
	volatile int32_t x276 = INT32_MAX;
	volatile int32_t t64 = -6844;

	t64 = (((x273+x274)<x275)==x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x278 = UINT8_MAX;
	volatile int8_t x280 = INT8_MIN;

	t65 = (((x277+x278)<x279)==x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = 0U;
	int16_t x282 = INT16_MIN;
	volatile int32_t x283 = INT32_MIN;
	volatile int32_t t66 = -1129580;

	t66 = (((x281+x282)<x283)==x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = -1;
	uint32_t x286 = 2787U;
	static volatile uint8_t x287 = 10U;
	volatile uint64_t x288 = 96114486261LLU;
	volatile int32_t t67 = 981055090;

	t67 = (((x285+x286)<x287)==x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x289 = INT64_MIN;
	static uint64_t x290 = 156672048037LLU;
	volatile uint32_t x291 = 445645U;
	int8_t x292 = -1;
	int32_t t68 = 637987;

	t68 = (((x289+x290)<x291)==x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x293 = -4703975;
	int16_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MIN;
	int32_t t69 = 10533456;

	t69 = (((x293+x294)<x295)==x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x301 = 153U;
	int8_t x302 = 49;
	int8_t x304 = INT8_MIN;
	volatile int32_t t70 = -25721;

	t70 = (((x301+x302)<x303)==x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x305 = 939520678U;
	volatile uint8_t x306 = UINT8_MAX;
	int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MAX;
	static volatile int32_t t71 = 459813330;

	t71 = (((x305+x306)<x307)==x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MAX;
	int32_t t72 = -15563073;

	t72 = (((x309+x310)<x311)==x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x314 = INT32_MIN;
	int32_t x315 = INT32_MIN;

	t73 = (((x313+x314)<x315)==x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x317 = -1;
	int64_t x318 = -596171LL;
	static int32_t x320 = 130160268;

	t74 = (((x317+x318)<x319)==x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x321 = 1216571698LL;
	volatile int64_t x322 = INT64_MIN;
	static int32_t x324 = INT32_MIN;
	int32_t t75 = 32180;

	t75 = (((x321+x322)<x323)==x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x325 = -1;
	int64_t x327 = -107719LL;

	t76 = (((x325+x326)<x327)==x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x333 = 11507U;
	static uint32_t x334 = UINT32_MAX;
	int32_t x336 = 10721384;
	static int32_t t77 = 43113140;

	t77 = (((x333+x334)<x335)==x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x337 = 14U;
	int32_t x338 = INT32_MIN;
	volatile uint8_t x339 = 12U;
	int32_t x340 = 36;
	int32_t t78 = -980082822;

	t78 = (((x337+x338)<x339)==x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = -1;
	int8_t x343 = -4;
	volatile int32_t t79 = 0;

	t79 = (((x341+x342)<x343)==x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x345 = UINT32_MAX;
	int32_t x346 = INT32_MIN;
	volatile int16_t x347 = -120;
	static int32_t x348 = 3721931;
	volatile int32_t t80 = -114378;

	t80 = (((x345+x346)<x347)==x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = -1;
	int32_t x350 = -1;
	static int8_t x352 = -1;
	int32_t t81 = 216537;

	t81 = (((x349+x350)<x351)==x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = 1709297800U;
	uint32_t x354 = 2034750569U;
	static int16_t x356 = 430;
	int32_t t82 = 15723206;

	t82 = (((x353+x354)<x355)==x356);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x357 = INT32_MIN;
	uint32_t x358 = 84584455U;
	uint64_t x359 = 859172575482LLU;
	int16_t x360 = INT16_MIN;
	static int32_t t83 = 10917204;

	t83 = (((x357+x358)<x359)==x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x361 = 31U;
	uint64_t x363 = UINT64_MAX;
	int32_t x364 = -1;
	volatile int32_t t84 = -28;

	t84 = (((x361+x362)<x363)==x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x366 = 4044U;
	static volatile int8_t x367 = -7;
	int32_t x368 = -1;
	int32_t t85 = -11;

	t85 = (((x365+x366)<x367)==x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = INT16_MIN;
	static int16_t x374 = 1;
	int16_t x376 = INT16_MIN;
	volatile int32_t t86 = 0;

	t86 = (((x373+x374)<x375)==x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = INT8_MAX;
	int16_t x378 = INT16_MAX;
	int32_t x379 = INT32_MIN;
	volatile int8_t x380 = INT8_MAX;
	int32_t t87 = -13439;

	t87 = (((x377+x378)<x379)==x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x381 = 11U;
	static int8_t x382 = -1;
	uint64_t x384 = UINT64_MAX;
	int32_t t88 = -246627;

	t88 = (((x381+x382)<x383)==x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x385 = 29;
	int8_t x386 = 1;
	uint64_t x387 = 743177LLU;

	t89 = (((x385+x386)<x387)==x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x390 = UINT8_MAX;
	uint32_t x391 = 0U;
	static int16_t x392 = 13;
	int32_t t90 = -3992373;

	t90 = (((x389+x390)<x391)==x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x394 = -1LL;
	uint64_t x395 = 446805058520940688LLU;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t91 = 1001977;

	t91 = (((x393+x394)<x395)==x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = -483604641569830479LL;
	int16_t x398 = INT16_MAX;
	int8_t x399 = -1;

	t92 = (((x397+x398)<x399)==x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x401 = 0;
	int64_t x404 = -13LL;
	int32_t t93 = 118;

	t93 = (((x401+x402)<x403)==x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x409 = INT16_MIN;
	volatile uint32_t x410 = 1075905U;
	uint32_t x411 = 6868U;
	static int64_t x412 = INT64_MAX;
	volatile int32_t t94 = -10;

	t94 = (((x409+x410)<x411)==x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x413 = INT8_MAX;
	uint32_t x415 = 9U;
	volatile int32_t t95 = 183691195;

	t95 = (((x413+x414)<x415)==x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x418 = INT16_MAX;
	volatile int16_t x420 = -1;
	volatile int32_t t96 = 3;

	t96 = (((x417+x418)<x419)==x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x425 = -1;
	uint32_t x426 = 1U;
	int8_t x427 = 0;
	int8_t x428 = -1;
	volatile int32_t t97 = 0;

	t97 = (((x425+x426)<x427)==x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x430 = INT32_MIN;
	int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MIN;
	volatile int32_t t98 = 1;

	t98 = (((x429+x430)<x431)==x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x433 = -1LL;
	static int8_t x434 = INT8_MIN;
	int64_t x435 = -392422510916670LL;
	int32_t t99 = 2940916;

	t99 = (((x433+x434)<x435)==x436);

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

