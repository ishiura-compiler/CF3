#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -808774503;
static int8_t x10 = -49;
int8_t x12 = -1;
int64_t x13 = INT64_MIN;
uint32_t x18 = 1U;
volatile int32_t t3 = -39417982;
int32_t x24 = INT32_MIN;
volatile int32_t t4 = 732909;
int64_t x26 = -1LL;
static uint16_t x29 = 5453U;
uint32_t x36 = 216U;
volatile int32_t x38 = 0;
uint64_t x42 = 104912412LLU;
uint32_t x44 = 8645U;
volatile int32_t t10 = -594988618;
int8_t x49 = INT8_MAX;
int64_t x54 = -75505062016169379LL;
int16_t x61 = 1442;
int8_t x71 = INT8_MAX;
uint64_t x79 = 163LLU;
int32_t t15 = -8389344;
static int64_t x83 = INT64_MIN;
uint32_t x90 = UINT32_MAX;
uint8_t x91 = UINT8_MAX;
int32_t t18 = 36192;
static volatile uint16_t x96 = 6U;
volatile int32_t t19 = -120;
static int32_t x111 = -30209;
int32_t t20 = 5254;
int32_t t23 = -526368376;
volatile uint8_t x139 = 1U;
static volatile int32_t t25 = -162;
int32_t t26 = -38346;
int16_t x150 = -1;
int8_t x155 = -1;
volatile uint32_t x158 = UINT32_MAX;
int8_t x163 = 0;
int8_t x170 = 5;
static int16_t x171 = INT16_MAX;
int8_t x172 = -1;
static uint16_t x175 = 4772U;
static int16_t x181 = -1;
int8_t x188 = INT8_MAX;
int8_t x196 = 2;
volatile int32_t t37 = -856089;
int32_t x205 = INT32_MIN;
static volatile uint8_t x211 = UINT8_MAX;
uint64_t x213 = 122449LLU;
uint16_t x221 = 2200U;
uint64_t x224 = 2739LLU;
static int32_t x225 = 406083465;
volatile int8_t x244 = -48;
volatile int32_t t48 = -1009255425;
uint8_t x249 = UINT8_MAX;
uint8_t x256 = 6U;
int8_t x260 = INT8_MAX;
int32_t t52 = -7;
int32_t x261 = INT32_MAX;
static int32_t t55 = 1923;
volatile int32_t t56 = 2;
volatile int16_t x287 = 165;
uint8_t x289 = 1U;
uint64_t x291 = UINT64_MAX;
int8_t x299 = 29;
static volatile int16_t x302 = 10288;
static uint64_t x305 = UINT64_MAX;
int8_t x308 = -1;
int32_t x309 = INT32_MAX;
uint64_t x311 = 3165LLU;
volatile int16_t x312 = -36;
int8_t x317 = 1;
int32_t x320 = INT32_MAX;
volatile int32_t t64 = -769;
uint32_t x327 = UINT32_MAX;
volatile int32_t t65 = -2969797;
static volatile int64_t x330 = -3491012797255456LL;
int8_t x335 = -1;
uint16_t x337 = 1U;
uint32_t x353 = 103956279U;
int16_t x355 = INT16_MAX;
volatile int32_t t71 = 24;
int8_t x357 = INT8_MAX;
int8_t x361 = 23;
int32_t x367 = INT32_MIN;
int8_t x368 = INT8_MIN;
volatile int32_t t74 = 68;
uint64_t x374 = 10400948799LLU;
volatile int32_t x380 = INT32_MAX;
static volatile int32_t t76 = 3762;
int8_t x383 = 1;
int32_t t77 = 113106809;
int64_t x387 = INT64_MAX;
uint16_t x390 = 8733U;
volatile int32_t t79 = 40;
volatile uint16_t x397 = 7U;
static uint16_t x401 = UINT16_MAX;
volatile int32_t x409 = INT32_MAX;
int8_t x418 = -1;
volatile int32_t t87 = 6633;
int8_t x431 = INT8_MIN;
volatile int32_t t88 = -120498;
volatile int32_t x437 = -1;
int32_t t91 = 24;
int16_t x454 = -1;
int32_t x455 = 424127889;
int8_t x460 = 1;
int32_t t93 = 0;
uint32_t x461 = 9778935U;
volatile uint32_t x466 = 28684684U;
volatile int64_t x473 = INT64_MAX;
static int64_t x476 = INT64_MIN;
volatile int32_t x478 = 55;
uint64_t x481 = 3840392LLU;
static int16_t x483 = -256;
static volatile uint16_t x493 = 217U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint32_t x2 = 0U;
	volatile uint16_t x3 = UINT16_MAX;
	int32_t x4 = -1;

	t0 = (((x1|x2)*x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 8;
	uint16_t x11 = UINT16_MAX;
	static volatile int32_t t1 = 13086;

	t1 = (((x9|x10)*x11)<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x14 = INT16_MIN;
	uint8_t x15 = 1U;
	int8_t x16 = INT8_MAX;
	volatile int32_t t2 = -11723;

	t2 = (((x13|x14)*x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -28;
	int64_t x19 = -1482150076LL;
	int64_t x20 = -6029446469477781LL;

	t3 = (((x17|x18)*x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MIN;
	volatile int64_t x22 = -6163LL;
	uint32_t x23 = 6165U;

	t4 = (((x21|x22)*x23)<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = -1;
	int32_t x27 = INT32_MIN;
	int16_t x28 = 1649;
	int32_t t5 = 1;

	t5 = (((x25|x26)*x27)<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x30 = 992U;
	int32_t x31 = INT32_MIN;
	volatile int64_t x32 = -1LL;
	volatile int32_t t6 = 106455;

	t6 = (((x29|x30)*x31)<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x33 = INT16_MIN;
	static int32_t x34 = INT32_MIN;
	uint16_t x35 = 6U;
	volatile int32_t t7 = -49;

	t7 = (((x33|x34)*x35)<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = 110;
	static volatile int8_t x39 = 7;
	int16_t x40 = INT16_MAX;
	int32_t t8 = -141291301;

	t8 = (((x37|x38)*x39)<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MIN;
	int16_t x43 = INT16_MIN;
	int32_t t9 = 121118400;

	t9 = (((x41|x42)*x43)<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	volatile int64_t x46 = -1LL;
	uint16_t x47 = 4877U;
	int8_t x48 = INT8_MIN;

	t10 = (((x45|x46)*x47)<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x50 = UINT16_MAX;
	int8_t x51 = -1;
	int32_t x52 = -5707;
	volatile int32_t t11 = -1250259;

	t11 = (((x49|x50)*x51)<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	int8_t x55 = 7;
	int32_t x56 = -271376;
	volatile int32_t t12 = -34325673;

	t12 = (((x53|x54)*x55)<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MAX;
	uint8_t x63 = 29U;
	static uint16_t x64 = 3U;
	int32_t t13 = 25;

	t13 = (((x61|x62)*x63)<=x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = -1;
	int64_t x72 = INT64_MIN;
	int32_t t14 = 6;

	t14 = (((x69|x70)*x71)<=x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x78 = UINT16_MAX;
	int32_t x80 = INT32_MIN;

	t15 = (((x77|x78)*x79)<=x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = UINT64_MAX;
	uint32_t x82 = UINT32_MAX;
	volatile int16_t x84 = INT16_MAX;
	int32_t t16 = 5571028;

	t16 = (((x81|x82)*x83)<=x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -1;
	static uint8_t x86 = 23U;
	int16_t x87 = -9754;
	static uint8_t x88 = 0U;
	int32_t t17 = 3586;

	t17 = (((x85|x86)*x87)<=x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 286LLU;
	uint8_t x92 = 0U;

	t18 = (((x89|x90)*x91)<=x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = INT8_MIN;
	int64_t x94 = INT64_MAX;
	volatile uint64_t x95 = 44992705039827LLU;

	t19 = (((x93|x94)*x95)<=x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = 622LLU;
	uint16_t x110 = UINT16_MAX;
	static uint64_t x112 = 5LLU;

	t20 = (((x109|x110)*x111)<=x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x117 = 2613357115241125373LLU;
	int16_t x118 = -1;
	volatile uint64_t x119 = UINT64_MAX;
	uint64_t x120 = UINT64_MAX;
	static volatile int32_t t21 = 1530;

	t21 = (((x117|x118)*x119)<=x120);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x121 = -1;
	int64_t x122 = 923859553934279LL;
	static uint32_t x123 = 240152860U;
	static volatile uint32_t x124 = UINT32_MAX;
	volatile int32_t t22 = -3922;

	t22 = (((x121|x122)*x123)<=x124);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x125 = INT64_MAX;
	static int16_t x126 = -1;
	uint16_t x127 = 16287U;
	static uint16_t x128 = UINT16_MAX;

	t23 = (((x125|x126)*x127)<=x128);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x133 = -1;
	uint8_t x134 = 64U;
	int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t24 = 204502654;

	t24 = (((x133|x134)*x135)<=x136);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x137 = INT64_MIN;
	int64_t x138 = -1LL;
	uint8_t x140 = UINT8_MAX;

	t25 = (((x137|x138)*x139)<=x140);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = 399069LL;
	static volatile int32_t x146 = -1;
	int32_t x147 = -180008538;
	int8_t x148 = -1;

	t26 = (((x145|x146)*x147)<=x148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x151 = -1;
	static int16_t x152 = INT16_MAX;
	volatile int32_t t27 = 35;

	t27 = (((x149|x150)*x151)<=x152);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x153 = 104U;
	uint64_t x154 = 19046033210822853LLU;
	volatile int32_t x156 = -33255;
	static volatile int32_t t28 = 151425033;

	t28 = (((x153|x154)*x155)<=x156);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = INT32_MAX;
	static uint64_t x159 = 16LLU;
	static volatile uint64_t x160 = 163LLU;
	volatile int32_t t29 = 115227;

	t29 = (((x157|x158)*x159)<=x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x161 = -1;
	static volatile int8_t x162 = INT8_MIN;
	int32_t x164 = -3;
	static int32_t t30 = -392491397;

	t30 = (((x161|x162)*x163)<=x164);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x165 = 369945423408407779LL;
	uint64_t x166 = UINT64_MAX;
	static int32_t x167 = -252;
	volatile int8_t x168 = 3;
	volatile int32_t t31 = 991;

	t31 = (((x165|x166)*x167)<=x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x169 = -1;
	static int32_t t32 = 22837;

	t32 = (((x169|x170)*x171)<=x172);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x173 = -41992697359LL;
	static int16_t x174 = -1;
	uint16_t x176 = 1U;
	int32_t t33 = -152718;

	t33 = (((x173|x174)*x175)<=x176);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x177 = INT32_MAX;
	int16_t x178 = INT16_MIN;
	int64_t x179 = 105456922LL;
	uint32_t x180 = UINT32_MAX;
	int32_t t34 = -137550;

	t34 = (((x177|x178)*x179)<=x180);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x182 = INT32_MIN;
	static volatile uint8_t x183 = 0U;
	int16_t x184 = -1;
	int32_t t35 = -294;

	t35 = (((x181|x182)*x183)<=x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x185 = 5U;
	volatile int64_t x186 = -1LL;
	int16_t x187 = INT16_MIN;
	volatile int32_t t36 = -4;

	t36 = (((x185|x186)*x187)<=x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = INT64_MIN;
	static int32_t x194 = -1;
	int16_t x195 = INT16_MIN;

	t37 = (((x193|x194)*x195)<=x196);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x197 = INT64_MIN;
	volatile int16_t x198 = -1;
	volatile uint64_t x199 = 2891395551875015LLU;
	static volatile int16_t x200 = INT16_MIN;
	static volatile int32_t t38 = 35371;

	t38 = (((x197|x198)*x199)<=x200);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = 1294100397772029LLU;
	volatile int8_t x202 = -2;
	volatile int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;
	volatile int32_t t39 = 214602;

	t39 = (((x201|x202)*x203)<=x204);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x206 = INT64_MIN;
	static uint16_t x207 = UINT16_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t40 = 242;

	t40 = (((x205|x206)*x207)<=x208);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x209 = 469U;
	uint64_t x210 = 32718437187124LLU;
	int16_t x212 = INT16_MIN;
	volatile int32_t t41 = -1;

	t41 = (((x209|x210)*x211)<=x212);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x214 = 83724537899013LLU;
	int64_t x215 = INT64_MIN;
	uint8_t x216 = 5U;
	volatile int32_t t42 = -6;

	t42 = (((x213|x214)*x215)<=x216);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x217 = 2022U;
	static uint32_t x218 = 30207U;
	volatile uint16_t x219 = UINT16_MAX;
	int64_t x220 = -11018823277725341LL;
	int32_t t43 = -86051;

	t43 = (((x217|x218)*x219)<=x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x222 = 855739409LLU;
	static int64_t x223 = 3762253474535LL;
	static volatile int32_t t44 = -13;

	t44 = (((x221|x222)*x223)<=x224);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x226 = -50;
	static uint32_t x227 = 1738663U;
	int8_t x228 = INT8_MIN;
	int32_t t45 = 2596;

	t45 = (((x225|x226)*x227)<=x228);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = -19;
	int8_t x230 = -29;
	volatile int8_t x231 = INT8_MIN;
	volatile uint64_t x232 = 12435652070876419LLU;
	static volatile int32_t t46 = 47063;

	t46 = (((x229|x230)*x231)<=x232);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x237 = -1LL;
	static uint16_t x238 = 53U;
	int64_t x239 = INT64_MAX;
	int32_t x240 = -1;
	static int32_t t47 = 511364783;

	t47 = (((x237|x238)*x239)<=x240);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x241 = 65;
	int32_t x242 = INT32_MIN;
	uint8_t x243 = 1U;

	t48 = (((x241|x242)*x243)<=x244);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x245 = 61257LL;
	int8_t x246 = -1;
	volatile uint32_t x247 = 215702825U;
	static int64_t x248 = -1LL;
	volatile int32_t t49 = -15;

	t49 = (((x245|x246)*x247)<=x248);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x250 = INT8_MIN;
	int64_t x251 = 69443423268177962LL;
	int64_t x252 = INT64_MIN;
	int32_t t50 = 112355508;

	t50 = (((x249|x250)*x251)<=x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = -1LL;
	int16_t x255 = INT16_MAX;
	static volatile int32_t t51 = 24889614;

	t51 = (((x253|x254)*x255)<=x256);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x257 = 56;
	uint64_t x258 = 367485165768LLU;
	int64_t x259 = -1LL;

	t52 = (((x257|x258)*x259)<=x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x262 = 231702LL;
	int8_t x263 = INT8_MIN;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t53 = -2677769;

	t53 = (((x261|x262)*x263)<=x264);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x269 = 6119U;
	int32_t x270 = INT32_MIN;
	static uint64_t x271 = UINT64_MAX;
	uint16_t x272 = 6205U;
	volatile int32_t t54 = -246331657;

	t54 = (((x269|x270)*x271)<=x272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x273 = 1LL;
	uint8_t x274 = 102U;
	int32_t x275 = -24;
	uint8_t x276 = 31U;

	t55 = (((x273|x274)*x275)<=x276);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x277 = -1;
	int8_t x278 = -1;
	int16_t x279 = -1;
	int8_t x280 = INT8_MAX;

	t56 = (((x277|x278)*x279)<=x280);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = 8;
	int16_t x288 = INT16_MIN;
	volatile int32_t t57 = 103339;

	t57 = (((x285|x286)*x287)<=x288);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x290 = 6U;
	static uint8_t x292 = UINT8_MAX;
	int32_t t58 = -48;

	t58 = (((x289|x290)*x291)<=x292);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x297 = -44;
	int8_t x298 = 46;
	volatile uint32_t x300 = UINT32_MAX;
	volatile int32_t t59 = 1;

	t59 = (((x297|x298)*x299)<=x300);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x301 = -1;
	int16_t x303 = -1;
	static volatile uint16_t x304 = 19878U;
	static volatile int32_t t60 = 0;

	t60 = (((x301|x302)*x303)<=x304);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x306 = 8;
	uint16_t x307 = UINT16_MAX;
	int32_t t61 = 12760;

	t61 = (((x305|x306)*x307)<=x308);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x310 = 0;
	int32_t t62 = -1;

	t62 = (((x309|x310)*x311)<=x312);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x318 = 0;
	int64_t x319 = INT64_MIN;
	int32_t t63 = -22613;

	t63 = (((x317|x318)*x319)<=x320);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x321 = -1;
	static uint64_t x322 = 34630LLU;
	int16_t x323 = 44;
	static int8_t x324 = INT8_MIN;

	t64 = (((x321|x322)*x323)<=x324);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x325 = UINT8_MAX;
	uint64_t x326 = 126619846493LLU;
	uint32_t x328 = 249248842U;

	t65 = (((x325|x326)*x327)<=x328);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x329 = INT8_MIN;
	int16_t x331 = 4568;
	int16_t x332 = -1;
	volatile int32_t t66 = 3335;

	t66 = (((x329|x330)*x331)<=x332);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x333 = INT8_MAX;
	int32_t x334 = -1;
	int64_t x336 = 1334111599604519347LL;
	volatile int32_t t67 = -977679;

	t67 = (((x333|x334)*x335)<=x336);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MAX;
	volatile int64_t x340 = INT64_MIN;
	int32_t t68 = -1492542;

	t68 = (((x337|x338)*x339)<=x340);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x345 = -1;
	static int32_t x346 = INT32_MIN;
	static volatile uint32_t x347 = 111474901U;
	int64_t x348 = INT64_MAX;
	int32_t t69 = 1;

	t69 = (((x345|x346)*x347)<=x348);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = 424562214112391400LL;
	static int64_t x350 = -1466572423622467LL;
	int16_t x351 = 1;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t70 = 436;

	t70 = (((x349|x350)*x351)<=x352);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x354 = -1;
	int32_t x356 = 244732;

	t71 = (((x353|x354)*x355)<=x356);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x358 = -1;
	int8_t x359 = INT8_MAX;
	static uint16_t x360 = 4U;
	static int32_t t72 = -229;

	t72 = (((x357|x358)*x359)<=x360);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x362 = INT8_MIN;
	static int16_t x363 = INT16_MIN;
	int64_t x364 = INT64_MAX;
	volatile int32_t t73 = -6517010;

	t73 = (((x361|x362)*x363)<=x364);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x365 = INT64_MAX;
	int16_t x366 = INT16_MIN;

	t74 = (((x365|x366)*x367)<=x368);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x373 = -1310036;
	volatile uint64_t x375 = 521LLU;
	uint32_t x376 = UINT32_MAX;
	volatile int32_t t75 = -23605480;

	t75 = (((x373|x374)*x375)<=x376);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x377 = -4078796880649LL;
	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MAX;

	t76 = (((x377|x378)*x379)<=x380);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x381 = 2965U;
	int32_t x382 = -1;
	int8_t x384 = INT8_MAX;

	t77 = (((x381|x382)*x383)<=x384);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x385 = 3U;
	volatile uint64_t x386 = 2LLU;
	volatile int16_t x388 = 1;
	int32_t t78 = -6276168;

	t78 = (((x385|x386)*x387)<=x388);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x389 = 131093622U;
	static uint64_t x391 = 2669836134365LLU;
	uint16_t x392 = UINT16_MAX;

	t79 = (((x389|x390)*x391)<=x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x393 = -2141171;
	int64_t x394 = -2683162LL;
	static int16_t x395 = 44;
	uint8_t x396 = 0U;
	int32_t t80 = -111;

	t80 = (((x393|x394)*x395)<=x396);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x398 = 29;
	static int16_t x399 = 0;
	int64_t x400 = INT64_MIN;
	int32_t t81 = 1040530;

	t81 = (((x397|x398)*x399)<=x400);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x402 = INT64_MIN;
	int32_t x403 = -1;
	static uint64_t x404 = 63459941LLU;
	volatile int32_t t82 = -97768;

	t82 = (((x401|x402)*x403)<=x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x405 = -76;
	uint16_t x406 = 13U;
	uint32_t x407 = 23219U;
	uint32_t x408 = 120633483U;
	volatile int32_t t83 = 1;

	t83 = (((x405|x406)*x407)<=x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x410 = -1LL;
	static uint8_t x411 = 6U;
	static int8_t x412 = INT8_MAX;
	int32_t t84 = -348;

	t84 = (((x409|x410)*x411)<=x412);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x417 = INT32_MIN;
	int8_t x419 = -2;
	volatile uint16_t x420 = 2787U;
	volatile int32_t t85 = 72439154;

	t85 = (((x417|x418)*x419)<=x420);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x421 = 34482197486LL;
	static int64_t x422 = -1LL;
	int8_t x423 = INT8_MIN;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t86 = -5379;

	t86 = (((x421|x422)*x423)<=x424);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x425 = -1LL;
	static volatile int16_t x426 = -1792;
	int16_t x427 = 107;
	static volatile int64_t x428 = -204487739LL;

	t87 = (((x425|x426)*x427)<=x428);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x429 = UINT64_MAX;
	int8_t x430 = 0;
	int32_t x432 = 122971580;

	t88 = (((x429|x430)*x431)<=x432);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x433 = 582LLU;
	int8_t x434 = -5;
	int32_t x435 = INT32_MIN;
	volatile uint64_t x436 = 1241LLU;
	int32_t t89 = -266;

	t89 = (((x433|x434)*x435)<=x436);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x438 = 73094179U;
	static volatile int64_t x439 = -1LL;
	static volatile int64_t x440 = -1LL;
	volatile int32_t t90 = 219499;

	t90 = (((x437|x438)*x439)<=x440);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x441 = 0U;
	volatile int16_t x442 = INT16_MIN;
	int32_t x443 = -1;
	static volatile uint16_t x444 = 913U;

	t91 = (((x441|x442)*x443)<=x444);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x453 = 105U;
	uint8_t x456 = UINT8_MAX;
	int32_t t92 = 100;

	t92 = (((x453|x454)*x455)<=x456);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x457 = UINT8_MAX;
	int64_t x458 = INT64_MIN;
	uint32_t x459 = 1U;

	t93 = (((x457|x458)*x459)<=x460);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x462 = 0LL;
	volatile uint32_t x463 = 25130U;
	volatile int64_t x464 = INT64_MIN;
	static volatile int32_t t94 = -1477000;

	t94 = (((x461|x462)*x463)<=x464);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x465 = UINT8_MAX;
	int8_t x467 = -3;
	volatile uint64_t x468 = UINT64_MAX;
	volatile int32_t t95 = 6263801;

	t95 = (((x465|x466)*x467)<=x468);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x474 = INT16_MAX;
	uint64_t x475 = UINT64_MAX;
	static volatile int32_t t96 = -27014;

	t96 = (((x473|x474)*x475)<=x476);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x477 = INT16_MIN;
	int64_t x479 = 319164716861LL;
	int32_t x480 = -203434001;
	int32_t t97 = -99933;

	t97 = (((x477|x478)*x479)<=x480);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x482 = INT16_MIN;
	static int32_t x484 = INT32_MIN;
	int32_t t98 = -121122269;

	t98 = (((x481|x482)*x483)<=x484);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x494 = INT8_MIN;
	int16_t x495 = INT16_MAX;
	uint8_t x496 = UINT8_MAX;
	int32_t t99 = 649909;

	t99 = (((x493|x494)*x495)<=x496);

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

