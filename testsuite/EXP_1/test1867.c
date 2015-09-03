#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
static int64_t x3 = -55LL;
static int32_t t0 = -461;
static int8_t x6 = 6;
uint64_t x11 = 194LLU;
uint64_t x16 = UINT64_MAX;
int32_t t5 = 297345562;
uint32_t x31 = 1276087275U;
volatile int64_t x34 = INT64_MAX;
int64_t x49 = -32787684LL;
uint64_t x52 = 4595407LLU;
static volatile int16_t x53 = -1;
volatile int64_t x56 = INT64_MAX;
int32_t t11 = -120;
int8_t x58 = 62;
volatile int8_t x61 = INT8_MIN;
int8_t x65 = 1;
uint64_t x75 = UINT64_MAX;
uint8_t x87 = 69U;
uint32_t x90 = 11410U;
uint8_t x114 = UINT8_MAX;
int32_t t25 = 402393;
volatile int32_t t26 = -4641;
volatile int8_t x124 = INT8_MIN;
volatile uint8_t x125 = UINT8_MAX;
volatile int16_t x126 = INT16_MAX;
int64_t x127 = 36465910830LL;
volatile int64_t x135 = -1LL;
int32_t t30 = 252182629;
int16_t x152 = -3;
volatile int32_t t35 = 0;
static uint32_t x165 = UINT32_MAX;
int64_t x167 = -1LL;
static volatile int32_t t37 = -938019289;
static int64_t x169 = INT64_MAX;
static int32_t t38 = 6122;
static int32_t x173 = INT32_MIN;
int8_t x191 = INT8_MIN;
volatile int32_t t43 = -1;
uint32_t x204 = 1934474U;
uint32_t x211 = 295138237U;
volatile int32_t t47 = -308353;
int32_t x220 = -1;
volatile uint8_t x228 = UINT8_MAX;
int32_t t50 = -731;
int32_t t52 = -493163;
int8_t x250 = INT8_MIN;
volatile uint64_t x252 = 7797833716LLU;
volatile int32_t t56 = -3;
int64_t x253 = INT64_MAX;
volatile int32_t t58 = -292628042;
volatile int32_t x266 = -624969;
int32_t t63 = 336;
volatile int32_t x281 = -10035073;
volatile uint32_t x286 = 3U;
volatile int32_t t65 = -10686;
int16_t x295 = -1;
int8_t x296 = INT8_MIN;
volatile int32_t t66 = 12;
volatile uint16_t x303 = UINT16_MAX;
static volatile int32_t t68 = 20;
int16_t x307 = INT16_MIN;
volatile int32_t t69 = -101825;
uint32_t x314 = UINT32_MAX;
volatile int32_t t71 = -26;
int32_t x321 = 798349;
volatile int64_t x333 = INT64_MIN;
static volatile int32_t t77 = 28770095;
int16_t x354 = 7;
volatile int16_t x356 = INT16_MAX;
volatile int16_t x359 = 4871;
uint64_t x362 = 4280898786LLU;
volatile uint64_t x365 = 10LLU;
int16_t x385 = -1;
int8_t x391 = -1;
int32_t t87 = 3531085;
int64_t x394 = 638669553275LL;
static volatile uint16_t x405 = 8801U;
int64_t x424 = INT64_MIN;
int32_t t93 = 3219222;
int16_t x425 = -1;
uint32_t x427 = UINT32_MAX;
int64_t x439 = INT64_MIN;
static uint64_t x442 = UINT64_MAX;
int32_t x444 = 3;
volatile int32_t t97 = -485593512;


void f0(void) {
	static int64_t x1 = -1LL;
	volatile int16_t x4 = INT16_MAX;

	t0 = (((x1|x2)+x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 11106738;
	static volatile int8_t x7 = -1;
	static int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 30408710;

	t1 = (((x5|x6)+x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = -1478549;
	volatile int8_t x12 = -11;
	int32_t t2 = 4748335;

	t2 = (((x9|x10)+x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 0U;
	int16_t x14 = -1;
	int64_t x15 = -1LL;
	int32_t t3 = -3;

	t3 = (((x13|x14)+x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	int32_t x18 = -1;
	uint64_t x19 = 307942060467LLU;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 1;

	t4 = (((x17|x18)+x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x25 = -634151903272LL;
	int16_t x26 = 3;
	static uint8_t x27 = 1U;
	uint8_t x28 = 0U;

	t5 = (((x25|x26)+x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	uint32_t x30 = UINT32_MAX;
	static int32_t x32 = 4;
	volatile int32_t t6 = 461311;

	t6 = (((x29|x30)+x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -33;
	int64_t x35 = 31555LL;
	static uint16_t x36 = 5U;
	volatile int32_t t7 = 805;

	t7 = (((x33|x34)+x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	uint32_t x38 = 2U;
	static int32_t x39 = INT32_MIN;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t8 = 69844;

	t8 = (((x37|x38)+x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = 151207646173121LLU;
	uint32_t x42 = UINT32_MAX;
	static uint8_t x43 = UINT8_MAX;
	volatile int64_t x44 = 25LL;
	int32_t t9 = -300;

	t9 = (((x41|x42)+x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = INT16_MIN;
	volatile uint8_t x51 = 78U;
	volatile int32_t t10 = -7747075;

	t10 = (((x49|x50)+x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x54 = 8536;
	uint8_t x55 = UINT8_MAX;

	t11 = (((x53|x54)+x55)==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	volatile int32_t x59 = -7278223;
	static uint64_t x60 = 72LLU;
	int32_t t12 = -225905;

	t12 = (((x57|x58)+x59)==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x62 = INT32_MAX;
	int32_t x63 = 12;
	int8_t x64 = INT8_MAX;
	volatile int32_t t13 = 15647939;

	t13 = (((x61|x62)+x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x66 = -146;
	int64_t x67 = -1LL;
	uint64_t x68 = 12032753164515LLU;
	static int32_t t14 = -913087724;

	t14 = (((x65|x66)+x67)==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -14495LL;
	uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	int32_t x72 = 3;
	volatile int32_t t15 = -15604159;

	t15 = (((x69|x70)+x71)==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = 7;
	volatile int64_t x74 = INT64_MIN;
	int64_t x76 = INT64_MIN;
	int32_t t16 = -2;

	t16 = (((x73|x74)+x75)==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x77 = INT32_MIN;
	int64_t x78 = -2082234LL;
	uint16_t x79 = 218U;
	static int16_t x80 = INT16_MIN;
	int32_t t17 = 238945248;

	t17 = (((x77|x78)+x79)==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MIN;
	volatile int64_t x83 = -3465346LL;
	static int32_t x84 = INT32_MIN;
	int32_t t18 = 497970965;

	t18 = (((x81|x82)+x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	int16_t x86 = INT16_MIN;
	static uint16_t x88 = 1015U;
	volatile int32_t t19 = 115485521;

	t19 = (((x85|x86)+x87)==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	static int8_t x91 = INT8_MIN;
	volatile uint64_t x92 = 40753252LLU;
	volatile int32_t t20 = 124417;

	t20 = (((x89|x90)+x91)==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = INT64_MIN;
	uint16_t x94 = 7861U;
	static uint32_t x95 = UINT32_MAX;
	static int32_t x96 = INT32_MIN;
	int32_t t21 = 98;

	t21 = (((x93|x94)+x95)==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = INT8_MIN;
	volatile int32_t x103 = -233033847;
	uint16_t x104 = 323U;
	static int32_t t22 = 118;

	t22 = (((x101|x102)+x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MAX;
	volatile uint64_t x107 = 6099964LLU;
	static int16_t x108 = INT16_MIN;
	int32_t t23 = -7;

	t23 = (((x105|x106)+x107)==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 55153940U;
	static int8_t x110 = -1;
	uint16_t x111 = 3U;
	static uint64_t x112 = 284590064294LLU;
	static int32_t t24 = 259206;

	t24 = (((x109|x110)+x111)==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 117U;
	int16_t x115 = -2;
	int8_t x116 = INT8_MAX;

	t25 = (((x113|x114)+x115)==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = 14;
	int64_t x118 = INT64_MIN;
	static int32_t x119 = INT32_MAX;
	volatile uint8_t x120 = UINT8_MAX;

	t26 = (((x117|x118)+x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x121 = 23U;
	int64_t x122 = INT64_MAX;
	static int32_t x123 = INT32_MIN;
	int32_t t27 = -7411381;

	t27 = (((x121|x122)+x123)==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x128 = INT8_MIN;
	int32_t t28 = 406147;

	t28 = (((x125|x126)+x127)==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x129 = UINT16_MAX;
	static uint8_t x130 = 26U;
	int8_t x131 = -3;
	uint16_t x132 = 31971U;
	volatile int32_t t29 = -13092507;

	t29 = (((x129|x130)+x131)==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x133 = INT16_MIN;
	uint64_t x134 = UINT64_MAX;
	volatile uint16_t x136 = UINT16_MAX;

	t30 = (((x133|x134)+x135)==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = -1;
	uint8_t x138 = 69U;
	static uint16_t x139 = 54U;
	int16_t x140 = 1;
	int32_t t31 = 337996;

	t31 = (((x137|x138)+x139)==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x141 = 1945327529356548LL;
	volatile int16_t x142 = INT16_MIN;
	int32_t x143 = 0;
	volatile int64_t x144 = 41096120170825685LL;
	volatile int32_t t32 = -959;

	t32 = (((x141|x142)+x143)==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x145 = 22451503237655388LLU;
	static int64_t x146 = INT64_MAX;
	int16_t x147 = INT16_MIN;
	uint16_t x148 = UINT16_MAX;
	int32_t t33 = 0;

	t33 = (((x145|x146)+x147)==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x149 = -1;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = 6668994LLU;
	static int32_t t34 = -178767;

	t34 = (((x149|x150)+x151)==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x153 = 25U;
	int64_t x154 = INT64_MIN;
	uint32_t x155 = 58827U;
	volatile int16_t x156 = INT16_MAX;

	t35 = (((x153|x154)+x155)==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = 92;
	static volatile uint8_t x162 = 1U;
	int16_t x163 = INT16_MIN;
	int64_t x164 = 248LL;
	static int32_t t36 = 1;

	t36 = (((x161|x162)+x163)==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x166 = INT8_MIN;
	uint64_t x168 = UINT64_MAX;

	t37 = (((x165|x166)+x167)==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x170 = UINT16_MAX;
	int64_t x171 = -1720710LL;
	static int64_t x172 = 1LL;

	t38 = (((x169|x170)+x171)==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x174 = -29508;
	uint32_t x175 = UINT32_MAX;
	volatile uint32_t x176 = UINT32_MAX;
	volatile int32_t t39 = 0;

	t39 = (((x173|x174)+x175)==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x181 = 562U;
	int16_t x182 = INT16_MAX;
	uint8_t x183 = 3U;
	int16_t x184 = INT16_MAX;
	static int32_t t40 = 14396307;

	t40 = (((x181|x182)+x183)==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = 187716;
	int8_t x190 = INT8_MAX;
	static int64_t x192 = -31027LL;
	int32_t t41 = 5098610;

	t41 = (((x189|x190)+x191)==x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = -1LL;
	int16_t x194 = INT16_MAX;
	int8_t x195 = 39;
	uint64_t x196 = 9353360484326822LLU;
	volatile int32_t t42 = -3917845;

	t42 = (((x193|x194)+x195)==x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = -1;
	int64_t x199 = -1LL;
	int32_t x200 = INT32_MIN;

	t43 = (((x197|x198)+x199)==x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x201 = -1LL;
	int32_t x202 = INT32_MIN;
	int8_t x203 = -50;
	volatile int32_t t44 = -2;

	t44 = (((x201|x202)+x203)==x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x205 = UINT64_MAX;
	static int16_t x206 = 1;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = 16196;
	volatile int32_t t45 = 4462172;

	t45 = (((x205|x206)+x207)==x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x209 = -1LL;
	uint8_t x210 = 8U;
	int32_t x212 = -1;
	int32_t t46 = -118;

	t46 = (((x209|x210)+x211)==x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MAX;
	int16_t x214 = INT16_MIN;
	int32_t x215 = 467569058;
	uint16_t x216 = 167U;

	t47 = (((x213|x214)+x215)==x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x217 = 1U;
	int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MAX;
	int32_t t48 = -274212;

	t48 = (((x217|x218)+x219)==x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x221 = 30U;
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	uint8_t x224 = 5U;
	volatile int32_t t49 = -1816;

	t49 = (((x221|x222)+x223)==x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x225 = 35U;
	int64_t x226 = -1696357402212LL;
	int64_t x227 = 195659594774340810LL;

	t50 = (((x225|x226)+x227)==x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x229 = 2U;
	int32_t x230 = INT32_MIN;
	static uint64_t x231 = 626800131105676LLU;
	uint8_t x232 = UINT8_MAX;
	int32_t t51 = 6;

	t51 = (((x229|x230)+x231)==x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x233 = INT8_MIN;
	static int64_t x234 = INT64_MAX;
	volatile int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MIN;

	t52 = (((x233|x234)+x235)==x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x237 = -1LL;
	int8_t x238 = INT8_MIN;
	int8_t x239 = INT8_MIN;
	static int8_t x240 = INT8_MIN;
	static volatile int32_t t53 = -84;

	t53 = (((x237|x238)+x239)==x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = UINT64_MAX;
	uint32_t x242 = 276756970U;
	int16_t x243 = INT16_MIN;
	int64_t x244 = -1LL;
	int32_t t54 = 595860213;

	t54 = (((x241|x242)+x243)==x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = UINT8_MAX;
	int32_t x246 = -205;
	static uint64_t x247 = UINT64_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t55 = 160;

	t55 = (((x245|x246)+x247)==x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MIN;
	volatile uint8_t x251 = 4U;

	t56 = (((x249|x250)+x251)==x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x254 = INT16_MAX;
	volatile int32_t x255 = INT32_MIN;
	int8_t x256 = -23;
	static volatile int32_t t57 = -32104113;

	t57 = (((x253|x254)+x255)==x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = 25477666136LLU;
	volatile int32_t x258 = -8265574;
	int8_t x259 = -57;
	static volatile uint64_t x260 = 3554547LLU;

	t58 = (((x257|x258)+x259)==x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x261 = INT32_MIN;
	int64_t x262 = 249283372660LL;
	int8_t x263 = INT8_MIN;
	static int16_t x264 = 1;
	int32_t t59 = -164750995;

	t59 = (((x261|x262)+x263)==x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x265 = 1LL;
	int64_t x267 = INT64_MAX;
	int64_t x268 = 17415LL;
	int32_t t60 = 28694;

	t60 = (((x265|x266)+x267)==x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = -1;
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = -1LL;
	int64_t x272 = 107LL;
	static volatile int32_t t61 = 13435;

	t61 = (((x269|x270)+x271)==x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = 3U;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = UINT32_MAX;
	static int8_t x276 = -1;
	static volatile int32_t t62 = 5229;

	t62 = (((x273|x274)+x275)==x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = -1;
	int8_t x278 = INT8_MIN;
	int8_t x279 = 0;
	volatile int8_t x280 = INT8_MAX;

	t63 = (((x277|x278)+x279)==x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x282 = -410;
	static uint8_t x283 = 49U;
	int8_t x284 = -7;
	static volatile int32_t t64 = 32125;

	t64 = (((x281|x282)+x283)==x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x285 = 1LLU;
	static uint32_t x287 = UINT32_MAX;
	int64_t x288 = 16646756LL;

	t65 = (((x285|x286)+x287)==x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x293 = 154U;
	uint32_t x294 = 759U;

	t66 = (((x293|x294)+x295)==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x297 = -28;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = INT16_MIN;
	static int8_t x300 = INT8_MIN;
	static int32_t t67 = -252287;

	t67 = (((x297|x298)+x299)==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = -1;
	volatile int8_t x302 = INT8_MIN;
	volatile int64_t x304 = INT64_MIN;

	t68 = (((x301|x302)+x303)==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = 188;
	volatile int16_t x306 = INT16_MAX;
	int8_t x308 = INT8_MIN;

	t69 = (((x305|x306)+x307)==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x309 = 3170U;
	int8_t x310 = -1;
	static int32_t x311 = -1;
	uint16_t x312 = 1U;
	volatile int32_t t70 = -7715;

	t70 = (((x309|x310)+x311)==x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x313 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MAX;

	t71 = (((x313|x314)+x315)==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x322 = INT16_MIN;
	int8_t x323 = -1;
	volatile int64_t x324 = INT64_MIN;
	int32_t t72 = -178082513;

	t72 = (((x321|x322)+x323)==x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x325 = INT8_MIN;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MAX;
	static int16_t x328 = INT16_MIN;
	volatile int32_t t73 = 12736;

	t73 = (((x325|x326)+x327)==x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x334 = 2067U;
	int64_t x335 = 28973LL;
	static int8_t x336 = -1;
	int32_t t74 = 44700076;

	t74 = (((x333|x334)+x335)==x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = INT32_MIN;
	int32_t x338 = INT32_MAX;
	int16_t x339 = -5;
	static volatile uint16_t x340 = 127U;
	int32_t t75 = 15;

	t75 = (((x337|x338)+x339)==x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x341 = -1;
	uint32_t x342 = 48U;
	static int64_t x343 = -189983652281700427LL;
	int32_t x344 = INT32_MIN;
	volatile int32_t t76 = -112570;

	t76 = (((x341|x342)+x343)==x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x349 = 104573955;
	uint8_t x350 = UINT8_MAX;
	int64_t x351 = -3987LL;
	volatile uint16_t x352 = UINT16_MAX;

	t77 = (((x349|x350)+x351)==x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x353 = INT16_MIN;
	volatile int8_t x355 = INT8_MAX;
	static volatile int32_t t78 = 13;

	t78 = (((x353|x354)+x355)==x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = INT32_MIN;
	volatile uint16_t x358 = 885U;
	int16_t x360 = -1;
	int32_t t79 = 14;

	t79 = (((x357|x358)+x359)==x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x361 = -1LL;
	static int16_t x363 = INT16_MIN;
	int64_t x364 = -265467900LL;
	int32_t t80 = -14;

	t80 = (((x361|x362)+x363)==x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = 17U;
	static int16_t x368 = INT16_MAX;
	int32_t t81 = 3;

	t81 = (((x365|x366)+x367)==x368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x369 = 24244U;
	int16_t x370 = INT16_MAX;
	volatile uint64_t x371 = 141287041948838424LLU;
	int8_t x372 = 1;
	volatile int32_t t82 = 243;

	t82 = (((x369|x370)+x371)==x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x373 = 22429672795626654LLU;
	int64_t x374 = -11258211689LL;
	uint16_t x375 = 21U;
	int16_t x376 = INT16_MIN;
	int32_t t83 = -438;

	t83 = (((x373|x374)+x375)==x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = -10;
	int8_t x378 = -60;
	static int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t84 = -178;

	t84 = (((x377|x378)+x379)==x380);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = INT32_MAX;
	int64_t x382 = -64452998447705LL;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t85 = -1215;

	t85 = (((x381|x382)+x383)==x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x386 = 35U;
	int32_t x387 = -1;
	int64_t x388 = INT64_MIN;
	int32_t t86 = 108976;

	t86 = (((x385|x386)+x387)==x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x389 = UINT16_MAX;
	static int32_t x390 = INT32_MAX;
	static volatile int64_t x392 = -1340795LL;

	t87 = (((x389|x390)+x391)==x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 39254617826LLU;
	uint16_t x395 = UINT16_MAX;
	volatile uint8_t x396 = 0U;
	int32_t t88 = 42789;

	t88 = (((x393|x394)+x395)==x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x406 = 9U;
	int8_t x407 = 0;
	int8_t x408 = INT8_MIN;
	static volatile int32_t t89 = 656100484;

	t89 = (((x405|x406)+x407)==x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x409 = INT64_MAX;
	static int32_t x410 = 32;
	int32_t x411 = -1;
	volatile int32_t x412 = INT32_MAX;
	static int32_t t90 = 20225071;

	t90 = (((x409|x410)+x411)==x412);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x413 = UINT64_MAX;
	static uint64_t x414 = 2085775518903990853LLU;
	volatile int64_t x415 = INT64_MIN;
	int64_t x416 = 1692523456LL;
	volatile int32_t t91 = 429632;

	t91 = (((x413|x414)+x415)==x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x417 = INT16_MIN;
	int16_t x418 = INT16_MIN;
	static volatile uint64_t x419 = 16778508292LLU;
	int32_t x420 = -17953;
	int32_t t92 = -241;

	t92 = (((x417|x418)+x419)==x420);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x421 = INT64_MIN;
	int16_t x422 = INT16_MIN;
	int16_t x423 = 7092;

	t93 = (((x421|x422)+x423)==x424);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x426 = INT32_MIN;
	uint16_t x428 = 181U;
	volatile int32_t t94 = -1;

	t94 = (((x425|x426)+x427)==x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x433 = UINT64_MAX;
	static int16_t x434 = 6;
	static int32_t x435 = -10884263;
	volatile uint32_t x436 = UINT32_MAX;
	static int32_t t95 = 1;

	t95 = (((x433|x434)+x435)==x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x437 = -1;
	uint64_t x438 = UINT64_MAX;
	int32_t x440 = INT32_MAX;
	int32_t t96 = -258581;

	t96 = (((x437|x438)+x439)==x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x441 = 301U;
	static uint16_t x443 = 1588U;

	t97 = (((x441|x442)+x443)==x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = -11;
	int64_t x446 = -10606445391LL;
	int64_t x447 = INT64_MAX;
	int32_t x448 = -1612575;
	static volatile int32_t t98 = 12;

	t98 = (((x445|x446)+x447)==x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x449 = 4203U;
	static volatile int64_t x450 = INT64_MAX;
	int16_t x451 = -1;
	int16_t x452 = INT16_MIN;
	int32_t t99 = -176496428;

	t99 = (((x449|x450)+x451)==x452);

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

