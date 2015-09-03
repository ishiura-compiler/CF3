#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = -1;
uint32_t x12 = 2773951U;
static volatile int32_t t2 = -1609514;
static uint32_t x29 = 72U;
static volatile int8_t x31 = INT8_MAX;
int64_t x38 = -2948765725423394525LL;
int64_t x44 = 2331LL;
volatile uint64_t x46 = 20053587LLU;
volatile int32_t t11 = -30114;
volatile int32_t x59 = INT32_MIN;
int16_t x60 = -5602;
volatile int32_t x64 = INT32_MIN;
int32_t t13 = 238;
volatile int8_t x69 = -1;
uint32_t x71 = 7481620U;
static int64_t x76 = -234715LL;
static volatile int32_t t16 = 343;
int16_t x84 = INT16_MIN;
int64_t x91 = INT64_MIN;
uint8_t x98 = UINT8_MAX;
int8_t x111 = INT8_MAX;
static uint16_t x117 = UINT16_MAX;
uint8_t x118 = 2U;
int32_t t29 = -11744586;
volatile int8_t x138 = -1;
static int64_t x139 = -1LL;
int16_t x140 = INT16_MAX;
uint64_t x141 = 1883407486192LLU;
static volatile int16_t x147 = -6;
volatile int32_t t32 = 236998963;
volatile int16_t x150 = INT16_MIN;
uint64_t x152 = 67LLU;
uint32_t x156 = UINT32_MAX;
volatile int32_t t34 = 484529;
static int32_t t35 = -3882;
static int64_t x162 = 11269LL;
int8_t x165 = INT8_MIN;
uint64_t x188 = UINT64_MAX;
uint32_t x191 = 126620371U;
uint64_t x192 = 3LLU;
uint16_t x195 = UINT16_MAX;
volatile int32_t x197 = INT32_MIN;
int64_t x200 = -2133785LL;
int16_t x203 = -1;
static int32_t t46 = -33614092;
uint16_t x216 = 10332U;
int32_t t49 = -5358;
volatile int32_t t51 = 129672737;
int8_t x225 = -21;
static volatile int32_t x226 = -29;
int32_t t52 = 5;
uint32_t x235 = UINT32_MAX;
int32_t t54 = 0;
uint8_t x244 = 33U;
static volatile int32_t x250 = -1;
static int16_t x251 = -1;
uint16_t x263 = 74U;
static int8_t x266 = -1;
volatile int32_t t61 = -1;
uint16_t x269 = UINT16_MAX;
uint8_t x272 = 105U;
int32_t x273 = -1;
uint32_t x275 = 3797U;
static int32_t x281 = -1;
static int8_t x282 = -34;
uint64_t x286 = 3LLU;
volatile int16_t x287 = -1;
int16_t x288 = INT16_MIN;
static volatile int8_t x289 = INT8_MIN;
int32_t x290 = INT32_MAX;
int64_t x291 = -1LL;
volatile int32_t t67 = -2553636;
static int64_t x297 = INT64_MAX;
int16_t x306 = INT16_MIN;
static int32_t x307 = INT32_MIN;
volatile int8_t x309 = 7;
int16_t x317 = INT16_MAX;
uint16_t x321 = 328U;
volatile int32_t x322 = 0;
int64_t x325 = 311580988089392LL;
uint8_t x326 = 39U;
uint32_t x327 = UINT32_MAX;
int32_t t77 = 4483;
int16_t x335 = -1;
static volatile int16_t x337 = -1;
int8_t x341 = INT8_MIN;
volatile int64_t x344 = 6592390LL;
int16_t x347 = -1;
uint8_t x350 = UINT8_MAX;
int8_t x358 = INT8_MIN;
volatile uint16_t x368 = 1601U;
volatile int32_t t86 = -40500368;
uint64_t x381 = 136802840725523246LLU;
int64_t x384 = INT64_MAX;
int16_t x385 = INT16_MIN;
static int8_t x387 = -32;
static uint32_t x390 = 11535058U;
int32_t t91 = 31229073;
uint16_t x393 = 21U;
uint16_t x394 = 3U;
int32_t x396 = INT32_MIN;
int8_t x401 = INT8_MIN;
int32_t x405 = INT32_MIN;
static int64_t x411 = 78328532LL;
uint64_t x417 = 2240586083563537LLU;
volatile int32_t t98 = 7;
static volatile int32_t x425 = -1;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static int16_t x2 = INT16_MIN;
	static volatile uint32_t x3 = 7780135U;
	static volatile int8_t x4 = 0;
	volatile int32_t t0 = 207108;

	t0 = ((x1+(x2%x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	static uint64_t x6 = 507819LLU;
	volatile int32_t x7 = -1;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -6;

	t1 = ((x5+(x6%x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	static uint16_t x11 = 1U;

	t2 = ((x9+(x10%x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	int64_t x14 = -63640637320946LL;
	static volatile uint32_t x15 = 3869U;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -148160853;

	t3 = ((x13+(x14%x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 1U;
	static uint64_t x22 = UINT64_MAX;
	static uint8_t x23 = 53U;
	int16_t x24 = 22;
	volatile int32_t t4 = 9;

	t4 = ((x21+(x22%x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = INT32_MIN;
	static uint8_t x26 = 2U;
	uint32_t x27 = 16774604U;
	int32_t x28 = INT32_MIN;
	static int32_t t5 = 22606;

	t5 = ((x25+(x26%x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = 31846844LLU;
	uint64_t x32 = 6215385996LLU;
	volatile int32_t t6 = 978;

	t6 = ((x29+(x30%x31))<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = -1;
	int16_t x34 = INT16_MIN;
	uint16_t x35 = UINT16_MAX;
	int32_t x36 = INT32_MAX;
	static volatile int32_t t7 = -3846862;

	t7 = ((x33+(x34%x35))<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = UINT32_MAX;
	static uint32_t x39 = 1U;
	uint16_t x40 = 1848U;
	volatile int32_t t8 = -4;

	t8 = ((x37+(x38%x39))<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 98406U;
	static volatile uint16_t x42 = UINT16_MAX;
	int64_t x43 = 32763380LL;
	static volatile int32_t t9 = 2374;

	t9 = ((x41+(x42%x43))<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 71LL;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = 0U;
	volatile int32_t t10 = -523654;

	t10 = ((x45+(x46%x47))<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = 87784598080456LL;
	int8_t x50 = -1;
	int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MIN;

	t11 = ((x49+(x50%x51))<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = -121731330;
	uint32_t x58 = 12034170U;
	int32_t t12 = -1;

	t12 = ((x57+(x58%x59))<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x62 = 0U;
	uint32_t x63 = 229264941U;

	t13 = ((x61+(x62%x63))<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = -4753;
	int8_t x66 = INT8_MIN;
	uint16_t x67 = 31U;
	uint8_t x68 = 14U;
	volatile int32_t t14 = 4;

	t14 = ((x65+(x66%x67))<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x70 = 0U;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t15 = -8865;

	t15 = ((x69+(x70%x71))<x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	static int32_t x74 = INT32_MIN;
	static int32_t x75 = -1;

	t16 = ((x73+(x74%x75))<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x77 = INT16_MAX;
	volatile int32_t x78 = INT32_MIN;
	volatile int8_t x79 = INT8_MAX;
	static int64_t x80 = INT64_MIN;
	int32_t t17 = -121508524;

	t17 = ((x77+(x78%x79))<x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x81 = INT64_MIN;
	static int16_t x82 = INT16_MIN;
	volatile int32_t x83 = -1;
	volatile int32_t t18 = -172;

	t18 = ((x81+(x82%x83))<x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MIN;
	uint32_t x92 = 35423113U;
	volatile int32_t t19 = -1688392;

	t19 = ((x89+(x90%x91))<x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 0U;
	volatile uint16_t x94 = UINT16_MAX;
	static volatile int16_t x95 = INT16_MAX;
	uint16_t x96 = UINT16_MAX;
	static volatile int32_t t20 = -336911;

	t20 = ((x93+(x94%x95))<x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -1155;
	uint8_t x99 = UINT8_MAX;
	int32_t x100 = -1305;
	volatile int32_t t21 = -1;

	t21 = ((x97+(x98%x99))<x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = INT8_MAX;
	uint64_t x102 = 37483175LLU;
	static uint8_t x103 = UINT8_MAX;
	static uint32_t x104 = UINT32_MAX;
	static volatile int32_t t22 = 34561;

	t22 = ((x101+(x102%x103))<x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MAX;
	int32_t x106 = INT32_MAX;
	static volatile int16_t x107 = INT16_MIN;
	static int32_t x108 = -3425;
	int32_t t23 = -3;

	t23 = ((x105+(x106%x107))<x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = 1;
	int16_t x110 = INT16_MIN;
	volatile uint64_t x112 = 1318210LLU;
	int32_t t24 = 1061293;

	t24 = ((x109+(x110%x111))<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x119 = INT32_MIN;
	static uint8_t x120 = UINT8_MAX;
	volatile int32_t t25 = -210144753;

	t25 = ((x117+(x118%x119))<x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = UINT32_MAX;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MIN;
	volatile int16_t x124 = INT16_MIN;
	int32_t t26 = -13;

	t26 = ((x121+(x122%x123))<x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = 2002;
	int16_t x126 = 1;
	static int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MAX;
	volatile int32_t t27 = 1;

	t27 = ((x125+(x126%x127))<x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x129 = INT16_MIN;
	static uint32_t x130 = 174680844U;
	volatile int8_t x131 = INT8_MIN;
	uint32_t x132 = 548910U;
	int32_t t28 = 36;

	t28 = ((x129+(x130%x131))<x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	static int32_t x134 = INT32_MAX;
	int16_t x135 = INT16_MIN;
	int64_t x136 = -327996177181LL;

	t29 = ((x133+(x134%x135))<x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = -1;
	volatile int32_t t30 = 0;

	t30 = ((x137+(x138%x139))<x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x142 = 65U;
	volatile int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MIN;
	volatile int32_t t31 = 323;

	t31 = ((x141+(x142%x143))<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = 0;
	int16_t x146 = INT16_MIN;
	int32_t x148 = INT32_MIN;

	t32 = ((x145+(x146%x147))<x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = 78LL;
	int32_t x151 = INT32_MIN;
	static volatile int32_t t33 = -117832;

	t33 = ((x149+(x150%x151))<x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MAX;
	int64_t x154 = -1LL;
	static int64_t x155 = -1LL;

	t34 = ((x153+(x154%x155))<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	static uint8_t x158 = 0U;
	static int32_t x159 = -1;
	static int32_t x160 = 230;

	t35 = ((x157+(x158%x159))<x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = INT8_MIN;
	int32_t x163 = -123190;
	uint8_t x164 = 3U;
	int32_t t36 = -1;

	t36 = ((x161+(x162%x163))<x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x166 = UINT32_MAX;
	static int8_t x167 = INT8_MIN;
	int64_t x168 = -42LL;
	static int32_t t37 = -22362;

	t37 = ((x165+(x166%x167))<x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -1;
	volatile int8_t x170 = -2;
	int64_t x171 = INT64_MAX;
	uint32_t x172 = 189U;
	volatile int32_t t38 = -1;

	t38 = ((x169+(x170%x171))<x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x173 = INT8_MIN;
	int16_t x174 = -1;
	int16_t x175 = -1;
	int16_t x176 = INT16_MIN;
	int32_t t39 = 244131;

	t39 = ((x173+(x174%x175))<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = 167486;
	static int32_t x178 = -64312;
	uint32_t x179 = 111608201U;
	int64_t x180 = INT64_MIN;
	volatile int32_t t40 = -31;

	t40 = ((x177+(x178%x179))<x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MAX;
	volatile uint64_t x182 = 80411535142286130LLU;
	int16_t x183 = 14;
	static int32_t x184 = -1;
	volatile int32_t t41 = -813438312;

	t41 = ((x181+(x182%x183))<x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = 207849101;
	volatile uint64_t x186 = UINT64_MAX;
	static uint16_t x187 = 4972U;
	static int32_t t42 = 27;

	t42 = ((x185+(x186%x187))<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = -5730307;
	int32_t t43 = -1857741;

	t43 = ((x189+(x190%x191))<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = INT16_MAX;
	volatile uint8_t x194 = 2U;
	volatile int32_t x196 = 212047424;
	volatile int32_t t44 = 49145379;

	t44 = ((x193+(x194%x195))<x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x198 = 30U;
	static uint16_t x199 = 16468U;
	volatile int32_t t45 = 0;

	t45 = ((x197+(x198%x199))<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x201 = 1318720316098741210LLU;
	int64_t x202 = INT64_MIN;
	int32_t x204 = -1;

	t46 = ((x201+(x202%x203))<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x205 = INT8_MAX;
	volatile int32_t x206 = INT32_MAX;
	uint8_t x207 = 36U;
	volatile uint32_t x208 = 720799234U;
	int32_t t47 = 37;

	t47 = ((x205+(x206%x207))<x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x209 = 470840U;
	int64_t x210 = -1LL;
	uint64_t x211 = 220LLU;
	static int64_t x212 = INT64_MIN;
	int32_t t48 = 43;

	t48 = ((x209+(x210%x211))<x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = 1761U;
	int32_t x214 = INT32_MIN;
	int8_t x215 = -1;

	t49 = ((x213+(x214%x215))<x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = -2482;
	int32_t x218 = INT32_MIN;
	static int64_t x219 = -1LL;
	uint16_t x220 = UINT16_MAX;
	int32_t t50 = -314;

	t50 = ((x217+(x218%x219))<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x221 = UINT32_MAX;
	static volatile int64_t x222 = INT64_MIN;
	static volatile int32_t x223 = -1;
	uint32_t x224 = UINT32_MAX;

	t51 = ((x221+(x222%x223))<x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x227 = -1;
	int32_t x228 = -7621218;

	t52 = ((x225+(x226%x227))<x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x233 = 343532051915700258LL;
	int32_t x234 = -1;
	volatile int64_t x236 = INT64_MIN;
	static int32_t t53 = -1926;

	t53 = ((x233+(x234%x235))<x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x237 = INT16_MAX;
	int64_t x238 = -884165039014622LL;
	int16_t x239 = -1;
	uint64_t x240 = 1067873373057953LLU;

	t54 = ((x237+(x238%x239))<x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x241 = 1;
	int32_t x242 = INT32_MAX;
	int8_t x243 = 3;
	volatile int32_t t55 = 242;

	t55 = ((x241+(x242%x243))<x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = 12;
	uint16_t x246 = UINT16_MAX;
	static int8_t x247 = -14;
	int64_t x248 = -32070546037598822LL;
	volatile int32_t t56 = -48651;

	t56 = ((x245+(x246%x247))<x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = INT8_MAX;
	uint8_t x252 = 44U;
	int32_t t57 = 1;

	t57 = ((x249+(x250%x251))<x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = 45;
	int8_t x254 = INT8_MIN;
	volatile int32_t x255 = INT32_MIN;
	volatile int8_t x256 = -1;
	int32_t t58 = 6929;

	t58 = ((x253+(x254%x255))<x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = -1;
	int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MIN;
	int64_t x260 = 103LL;
	volatile int32_t t59 = -184978;

	t59 = ((x257+(x258%x259))<x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x261 = 16U;
	uint16_t x262 = 11U;
	volatile int32_t x264 = INT32_MIN;
	int32_t t60 = -592935;

	t60 = ((x261+(x262%x263))<x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x265 = INT32_MAX;
	int32_t x267 = 273278;
	int16_t x268 = -205;

	t61 = ((x265+(x266%x267))<x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	int32_t t62 = -19428385;

	t62 = ((x269+(x270%x271))<x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x274 = 25;
	int32_t x276 = 1023326;
	volatile int32_t t63 = -106862058;

	t63 = ((x273+(x274%x275))<x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x277 = 0U;
	int64_t x278 = INT64_MAX;
	uint8_t x279 = 18U;
	int16_t x280 = -1;
	int32_t t64 = -245;

	t64 = ((x277+(x278%x279))<x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x283 = -1;
	int32_t x284 = -533200;
	volatile int32_t t65 = -29;

	t65 = ((x281+(x282%x283))<x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = -1;
	int32_t t66 = 249026;

	t66 = ((x285+(x286%x287))<x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x292 = 47U;

	t67 = ((x289+(x290%x291))<x292);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = -1LL;
	int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MAX;
	int32_t t68 = -22566;

	t68 = ((x293+(x294%x295))<x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x298 = -1;
	int8_t x299 = INT8_MAX;
	uint32_t x300 = 3U;
	volatile int32_t t69 = 166;

	t69 = ((x297+(x298%x299))<x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = INT16_MIN;
	static int64_t x302 = -1LL;
	int32_t x303 = -2263718;
	uint32_t x304 = 90096U;
	int32_t t70 = 111795041;

	t70 = ((x301+(x302%x303))<x304);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = INT8_MIN;
	uint64_t x308 = 103818599LLU;
	static volatile int32_t t71 = -858161;

	t71 = ((x305+(x306%x307))<x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x310 = INT16_MAX;
	int64_t x311 = -141362018LL;
	static uint16_t x312 = UINT16_MAX;
	static int32_t t72 = 255;

	t72 = ((x309+(x310%x311))<x312);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x313 = 14049U;
	int16_t x314 = 3103;
	int8_t x315 = -1;
	int64_t x316 = -1LL;
	volatile int32_t t73 = -16663;

	t73 = ((x313+(x314%x315))<x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x318 = 10726606LLU;
	uint32_t x319 = 24005U;
	static uint32_t x320 = 15928U;
	int32_t t74 = 28404;

	t74 = ((x317+(x318%x319))<x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x323 = 4;
	int32_t x324 = 1915419;
	volatile int32_t t75 = 780436532;

	t75 = ((x321+(x322%x323))<x324);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x328 = 9U;
	static int32_t t76 = -26594883;

	t76 = ((x325+(x326%x327))<x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x329 = -2;
	int16_t x330 = -6813;
	uint64_t x331 = 10LLU;
	uint32_t x332 = 3U;

	t77 = ((x329+(x330%x331))<x332);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = -349702;
	uint32_t x334 = UINT32_MAX;
	uint32_t x336 = UINT32_MAX;
	static int32_t t78 = 734397027;

	t78 = ((x333+(x334%x335))<x336);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x338 = 1146;
	uint16_t x339 = UINT16_MAX;
	int64_t x340 = 15740896566LL;
	volatile int32_t t79 = 1144;

	t79 = ((x337+(x338%x339))<x340);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x342 = 1U;
	uint8_t x343 = UINT8_MAX;
	int32_t t80 = 16770366;

	t80 = ((x341+(x342%x343))<x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = -1LL;
	volatile int32_t x346 = -1;
	uint64_t x348 = 125818904LLU;
	volatile int32_t t81 = -49751;

	t81 = ((x345+(x346%x347))<x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x349 = INT8_MIN;
	int16_t x351 = INT16_MIN;
	int64_t x352 = INT64_MAX;
	int32_t t82 = 0;

	t82 = ((x349+(x350%x351))<x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x357 = UINT8_MAX;
	static int16_t x359 = INT16_MAX;
	volatile int8_t x360 = -10;
	volatile int32_t t83 = 11;

	t83 = ((x357+(x358%x359))<x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	uint16_t x363 = 1U;
	int8_t x364 = INT8_MIN;
	volatile int32_t t84 = 1;

	t84 = ((x361+(x362%x363))<x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = 21;
	int16_t x366 = 1;
	static uint8_t x367 = 2U;
	volatile int32_t t85 = -50602;

	t85 = ((x365+(x366%x367))<x368);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x369 = 4U;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MIN;
	volatile uint16_t x372 = UINT16_MAX;

	t86 = ((x369+(x370%x371))<x372);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x373 = 3;
	int8_t x374 = -1;
	int64_t x375 = INT64_MAX;
	int64_t x376 = -1LL;
	int32_t t87 = 236;

	t87 = ((x373+(x374%x375))<x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = 7145LL;
	volatile int8_t x378 = INT8_MIN;
	static int8_t x379 = INT8_MIN;
	volatile int64_t x380 = INT64_MAX;
	int32_t t88 = -20906722;

	t88 = ((x377+(x378%x379))<x380);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x382 = 1U;
	int64_t x383 = -1LL;
	static int32_t t89 = 31391165;

	t89 = ((x381+(x382%x383))<x384);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x386 = UINT16_MAX;
	int64_t x388 = -264117244200918426LL;
	int32_t t90 = 13317;

	t90 = ((x385+(x386%x387))<x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = -1;
	volatile uint8_t x391 = UINT8_MAX;
	int32_t x392 = -1;

	t91 = ((x389+(x390%x391))<x392);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x395 = INT64_MAX;
	volatile int32_t t92 = -53855857;

	t92 = ((x393+(x394%x395))<x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x402 = 2U;
	volatile int8_t x403 = -1;
	volatile uint8_t x404 = 25U;
	int32_t t93 = -47579894;

	t93 = ((x401+(x402%x403))<x404);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x406 = 312600U;
	static uint8_t x407 = UINT8_MAX;
	uint8_t x408 = 2U;
	int32_t t94 = 797134943;

	t94 = ((x405+(x406%x407))<x408);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x409 = -3;
	int16_t x410 = -53;
	static int32_t x412 = -1;
	int32_t t95 = 136;

	t95 = ((x409+(x410%x411))<x412);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = -72757066LL;
	int64_t x414 = INT64_MAX;
	int16_t x415 = 999;
	uint16_t x416 = 17461U;
	int32_t t96 = -1;

	t96 = ((x413+(x414%x415))<x416);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x418 = 0;
	uint64_t x419 = 1394246326068874LLU;
	int8_t x420 = -1;
	int32_t t97 = -2350608;

	t97 = ((x417+(x418%x419))<x420);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x421 = 16U;
	int64_t x422 = -449385774LL;
	uint8_t x423 = UINT8_MAX;
	uint8_t x424 = 6U;

	t98 = ((x421+(x422%x423))<x424);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x426 = -313;
	static int16_t x427 = INT16_MAX;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t99 = 1;

	t99 = ((x425+(x426%x427))<x428);

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

