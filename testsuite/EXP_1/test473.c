#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 2;
int16_t x3 = -1;
uint64_t x14 = 30457480059814863LLU;
int8_t x19 = INT8_MAX;
volatile int32_t x39 = 3;
static volatile int64_t t9 = -2351LL;
int8_t x53 = 8;
volatile uint32_t t10 = 1940267U;
static uint64_t x59 = 1601142808198219740LLU;
int16_t x83 = -444;
static volatile int32_t x85 = -1;
volatile int32_t x88 = INT32_MIN;
static int64_t x91 = INT64_MIN;
volatile uint16_t x98 = 1U;
static uint16_t x100 = UINT16_MAX;
int16_t x101 = INT16_MAX;
int32_t t20 = 7535;
static int16_t x117 = INT16_MIN;
static uint64_t x129 = 2017765291103LLU;
uint8_t x131 = 21U;
uint64_t t22 = 1208233588LLU;
static int32_t x134 = -17731;
int32_t x135 = INT32_MAX;
static volatile uint64_t t25 = 43387LLU;
int16_t x146 = 473;
volatile int32_t t26 = 641;
volatile int32_t t27 = -1;
volatile int32_t t29 = 5288;
static uint8_t x166 = UINT8_MAX;
volatile uint16_t x171 = UINT16_MAX;
int8_t x178 = -17;
volatile uint32_t t34 = 124U;
uint64_t t35 = 3519092447854LLU;
int16_t x193 = -1;
int64_t x196 = 82434LL;
uint32_t x198 = 14365U;
static volatile uint32_t t37 = 1244U;
volatile uint64_t x205 = 3037795323520LLU;
static uint64_t x209 = UINT64_MAX;
int64_t t40 = -27LL;
int64_t x217 = -1LL;
static int32_t x218 = INT32_MIN;
int64_t t41 = -102553529344LL;
static uint8_t x229 = 6U;
uint8_t x231 = 91U;
uint64_t x236 = 240038558090LLU;
uint16_t x239 = UINT16_MAX;
int64_t x249 = -33305813LL;
volatile int8_t x253 = -1;
int16_t x260 = 1;
int64_t t48 = -1077LL;
volatile uint64_t x276 = 81372978846LLU;
volatile uint64_t t52 = 10LLU;
uint16_t x289 = 20252U;
int16_t x290 = INT16_MIN;
uint64_t t57 = 37967274LLU;
volatile int64_t x297 = 27052996021495200LL;
volatile uint64_t t58 = 2313976885348LLU;
static int16_t x308 = -8;
uint32_t x316 = UINT32_MAX;
volatile uint64_t t60 = 12501303830175LLU;
int32_t x317 = 85;
volatile int32_t t61 = 9463949;
int16_t x323 = 145;
int64_t x324 = INT64_MIN;
int32_t x330 = -1;
int64_t x335 = -801LL;
volatile int32_t x341 = INT32_MIN;
int64_t x343 = INT64_MIN;
static uint64_t x345 = 1662617943LLU;
volatile int64_t x355 = INT64_MIN;
uint64_t x360 = 2134162021450610LLU;
int64_t t72 = -2598LL;
uint16_t x377 = 7431U;
int8_t x380 = 8;
int8_t x381 = -56;
volatile uint16_t x382 = UINT16_MAX;
int8_t x392 = INT8_MIN;
uint8_t x393 = 0U;
uint64_t x394 = 93958851028496LLU;
volatile uint64_t t76 = 958255347781274317LLU;
uint32_t t77 = 674160671U;
uint32_t x407 = UINT32_MAX;
static int32_t x414 = INT32_MIN;
int8_t x415 = 14;
int64_t x425 = INT64_MAX;
int32_t x426 = -1;
int8_t x429 = INT8_MIN;
int32_t x431 = INT32_MAX;
static int16_t x438 = -12586;
int32_t x439 = INT32_MAX;
int8_t x445 = INT8_MAX;
uint16_t x448 = UINT16_MAX;
static int8_t x450 = INT8_MAX;
volatile uint32_t x458 = 1117400260U;
uint32_t x460 = 3U;
volatile uint32_t t88 = 1255116U;
int8_t x466 = -1;
static volatile int16_t x468 = INT16_MIN;
uint16_t x476 = 5U;
int64_t x480 = -2LL;
volatile int64_t x507 = INT64_MAX;
int64_t x515 = 750499190405LL;


void f0(void) {
	volatile uint8_t x1 = 1U;
	static int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -131;

	t0 = (((x1*x2)&x3)%x4);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static volatile uint32_t x6 = 42U;
	static uint32_t x7 = 129097U;
	uint16_t x8 = 15535U;
	volatile uint32_t t1 = 13487499U;

	t1 = (((x5*x6)&x7)%x8);

	if (t1 != 4808U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 18137697;
	uint32_t x10 = 53U;
	volatile int16_t x11 = -74;
	static uint16_t x12 = 3697U;
	volatile uint32_t t2 = 1U;

	t2 = (((x9*x10)&x11)%x12);

	if (t2 != 303U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static uint64_t x15 = 2387110LLU;
	int16_t x16 = -1;
	uint64_t t3 = 477LLU;

	t3 = (((x13*x14)&x15)%x16);

	if (t3 != 289824LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MAX;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 474;

	t4 = (((x17*x18)&x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	volatile int8_t x22 = -49;
	int16_t x23 = INT16_MIN;
	static uint16_t x24 = UINT16_MAX;
	int32_t t5 = -87;

	t5 = (((x21*x22)&x23)%x24);

	if (t5 != 32792) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 43U;
	uint32_t x26 = 171638U;
	int64_t x27 = -66752439451893LL;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = -3243428453LL;

	t6 = (((x25*x26)&x27)%x28);

	if (t6 != 40194LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 51U;
	uint64_t x34 = UINT64_MAX;
	static int64_t x35 = INT64_MIN;
	volatile uint16_t x36 = 223U;
	volatile uint64_t t7 = 7782LLU;

	t7 = (((x33*x34)&x35)%x36);

	if (t7 != 136LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 0U;
	volatile int8_t x38 = -4;
	int32_t x40 = -518404;
	int32_t t8 = 0;

	t8 = (((x37*x38)&x39)%x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = 72908920662LL;
	static int16_t x42 = INT16_MIN;
	volatile int64_t x43 = -133832086157784LL;
	static volatile int8_t x44 = 44;

	t9 = (((x41*x42)&x43)%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x54 = 352U;
	uint8_t x55 = 86U;
	static uint32_t x56 = 2U;

	t10 = (((x53*x54)&x55)%x56);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MAX;
	int16_t x58 = -1;
	static int64_t x60 = INT64_MIN;
	static uint64_t t11 = 228675399179LLU;

	t11 = (((x57*x58)&x59)%x60);

	if (t11 != 1601142808198217728LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x65 = 5;
	volatile int8_t x66 = INT8_MIN;
	volatile int8_t x67 = -1;
	volatile uint64_t x68 = 192839669961775900LLU;
	volatile uint64_t t12 = 28474LLU;

	t12 = (((x65*x66)&x67)%x68);

	if (t12 != 126975427340840476LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = -1LL;
	static int32_t x70 = 210952277;
	volatile int8_t x71 = INT8_MIN;
	volatile int32_t x72 = -490208;
	volatile int64_t t13 = -35213372LL;

	t13 = (((x69*x70)&x71)%x72);

	if (t13 != -162880LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x81 = 12LLU;
	int32_t x82 = 1054;
	int8_t x84 = -26;
	uint64_t t14 = 7472758069LLU;

	t14 = (((x81*x82)&x83)%x84);

	if (t14 != 12352LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x86 = INT16_MAX;
	uint16_t x87 = UINT16_MAX;
	static int32_t t15 = -1643;

	t15 = (((x85*x86)&x87)%x88);

	if (t15 != 32769) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = 6207U;
	uint32_t x90 = 14U;
	volatile int8_t x92 = INT8_MIN;
	volatile int64_t t16 = 4483939716048430944LL;

	t16 = (((x89*x90)&x91)%x92);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x97 = 2U;
	int8_t x99 = INT8_MIN;
	int32_t t17 = 8101;

	t17 = (((x97*x98)&x99)%x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x102 = 5249U;
	int8_t x103 = -10;
	int32_t x104 = 11497075;
	uint32_t t18 = 274053148U;

	t18 = (((x101*x102)&x103)%x104);

	if (t18 != 11034924U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x109 = UINT16_MAX;
	int32_t x110 = -1;
	int64_t x111 = -1LL;
	static volatile int8_t x112 = INT8_MAX;
	volatile int64_t t19 = 0LL;

	t19 = (((x109*x110)&x111)%x112);

	if (t19 != -3LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = -1;
	int32_t x114 = 31504883;
	int16_t x115 = -10652;
	static volatile int32_t x116 = INT32_MIN;

	t20 = (((x113*x114)&x115)%x116);

	if (t20 != -31504892) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x118 = -1;
	static int64_t x119 = -1LL;
	int32_t x120 = 15253407;
	volatile int64_t t21 = -2186229341762133765LL;

	t21 = (((x117*x118)&x119)%x120);

	if (t21 != 32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x130 = -1LL;
	volatile int64_t x132 = 766159680962541LL;

	t22 = (((x129*x130)&x131)%x132);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x133 = 8U;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t23 = -573781;

	t23 = (((x133*x134)&x135)%x136);

	if (t23 != 104) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x137 = 189LLU;
	static int8_t x138 = -3;
	uint32_t x139 = 2135319627U;
	int16_t x140 = -1;
	uint64_t t24 = 1LLU;

	t24 = (((x137*x138)&x139)%x140);

	if (t24 != 2135319625LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x141 = 9437859589903064LL;
	uint32_t x142 = 104U;
	volatile uint32_t x143 = 3U;
	uint64_t x144 = UINT64_MAX;

	t25 = (((x141*x142)&x143)%x144);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x145 = UINT16_MAX;
	uint8_t x147 = 1U;
	int8_t x148 = -12;

	t26 = (((x145*x146)&x147)%x148);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MAX;
	static int8_t x155 = -1;
	uint8_t x156 = UINT8_MAX;

	t27 = (((x153*x154)&x155)%x156);

	if (t27 != -191) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x157 = UINT32_MAX;
	static volatile int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MIN;
	volatile int64_t t28 = 27655675388470042LL;

	t28 = (((x157*x158)&x159)%x160);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x161 = -1;
	int8_t x162 = INT8_MIN;
	uint8_t x163 = UINT8_MAX;
	int32_t x164 = INT32_MIN;

	t29 = (((x161*x162)&x163)%x164);

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x165 = -127436;
	static uint16_t x167 = 1U;
	int16_t x168 = 11088;
	volatile int32_t t30 = -912167;

	t30 = (((x165*x166)&x167)%x168);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = INT16_MIN;
	static int32_t x170 = -1;
	uint64_t x172 = 725704036474LLU;
	static uint64_t t31 = 791570552738158112LLU;

	t31 = (((x169*x170)&x171)%x172);

	if (t31 != 32768LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x173 = INT16_MAX;
	volatile int16_t x174 = -1;
	uint8_t x175 = 104U;
	int16_t x176 = INT16_MAX;
	int32_t t32 = -578459135;

	t32 = (((x173*x174)&x175)%x176);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x177 = -1;
	uint16_t x179 = UINT16_MAX;
	int8_t x180 = -1;
	int32_t t33 = -376494;

	t33 = (((x177*x178)&x179)%x180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x181 = UINT32_MAX;
	static int16_t x182 = 747;
	int16_t x183 = INT16_MIN;
	int16_t x184 = -2;

	t34 = (((x181*x182)&x183)%x184);

	if (t34 != 4294934528U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x185 = UINT32_MAX;
	uint64_t x186 = 56730706016872760LLU;
	int64_t x187 = -174067LL;
	int16_t x188 = -1;

	t35 = (((x185*x186)&x187)%x188);

	if (t35 != 14642500848261877768LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x194 = 33U;
	int64_t x195 = -1LL;
	int64_t t36 = 140290953747724557LL;

	t36 = (((x193*x194)&x195)%x196);

	if (t36 != -33LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x197 = 32182312U;
	uint16_t x199 = 12868U;
	uint16_t x200 = 2U;

	t37 = (((x197*x198)&x199)%x200);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x206 = 88652669659626LLU;
	int16_t x207 = INT16_MIN;
	uint64_t x208 = 531678268541LLU;
	volatile uint64_t t38 = 48565355932LLU;

	t38 = (((x205*x206)&x207)%x208);

	if (t38 != 252835543485LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x210 = 89U;
	static int16_t x211 = 0;
	int16_t x212 = INT16_MIN;
	uint64_t t39 = 84585242875LLU;

	t39 = (((x209*x210)&x211)%x212);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x213 = -6967557415LL;
	uint32_t x214 = 31207U;
	volatile int64_t x215 = 10923861281247LL;
	volatile uint16_t x216 = 749U;

	t40 = (((x213*x214)&x215)%x216);

	if (t40 != 32LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x219 = INT64_MIN;
	static int16_t x220 = 3685;

	t41 = (((x217*x218)&x219)%x220);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x230 = INT16_MIN;
	static volatile int8_t x232 = INT8_MIN;
	volatile int32_t t42 = 569;

	t42 = (((x229*x230)&x231)%x232);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x233 = UINT8_MAX;
	static volatile uint8_t x234 = UINT8_MAX;
	int16_t x235 = -1;
	volatile uint64_t t43 = 505LLU;

	t43 = (((x233*x234)&x235)%x236);

	if (t43 != 65025LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x237 = 0;
	int64_t x238 = INT64_MAX;
	static int64_t x240 = INT64_MAX;
	int64_t t44 = -31LL;

	t44 = (((x237*x238)&x239)%x240);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x245 = 14443U;
	int8_t x246 = INT8_MAX;
	int32_t x247 = INT32_MIN;
	volatile uint16_t x248 = 92U;
	volatile uint32_t t45 = 44104U;

	t45 = (((x245*x246)&x247)%x248);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x250 = INT16_MAX;
	uint32_t x251 = 4467U;
	uint32_t x252 = UINT32_MAX;
	int64_t t46 = 1165737985366LL;

	t46 = (((x249*x250)&x251)%x252);

	if (t46 != 4177LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x254 = UINT8_MAX;
	int32_t x255 = INT32_MIN;
	int8_t x256 = -1;
	volatile int32_t t47 = 40;

	t47 = (((x253*x254)&x255)%x256);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x257 = -1LL;
	volatile int16_t x258 = 1;
	int32_t x259 = 189397434;

	t48 = (((x257*x258)&x259)%x260);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x261 = UINT32_MAX;
	int32_t x262 = INT32_MIN;
	volatile int64_t x263 = 0LL;
	int16_t x264 = INT16_MAX;
	volatile int64_t t49 = -440812364LL;

	t49 = (((x261*x262)&x263)%x264);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x265 = INT16_MIN;
	uint8_t x266 = UINT8_MAX;
	int32_t x267 = INT32_MAX;
	uint16_t x268 = 4U;
	volatile int32_t t50 = -23168084;

	t50 = (((x265*x266)&x267)%x268);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x269 = 14;
	int16_t x270 = -1;
	static volatile int8_t x271 = INT8_MIN;
	static uint16_t x272 = 1203U;
	int32_t t51 = -524348662;

	t51 = (((x269*x270)&x271)%x272);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x273 = -1;
	int8_t x274 = 8;
	int8_t x275 = INT8_MIN;

	t52 = (((x273*x274)&x275)%x276);

	if (t52 != 59271694754LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x277 = -5422713;
	int8_t x278 = 54;
	int16_t x279 = -1;
	static volatile int8_t x280 = INT8_MIN;
	int32_t t53 = 30465934;

	t53 = (((x277*x278)&x279)%x280);

	if (t53 != -6) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x281 = 1513U;
	volatile uint64_t x282 = 7524632416922LLU;
	int32_t x283 = -14127384;
	static int16_t x284 = INT16_MIN;
	volatile uint64_t t54 = 90856LLU;

	t54 = (((x281*x282)&x283)%x284);

	if (t54 != 11384768832741416LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = -1721;
	int32_t x287 = INT32_MAX;
	int64_t x288 = 490612177971696817LL;
	static int64_t t55 = -1LL;

	t55 = (((x285*x286)&x287)%x288);

	if (t55 != 220288LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x291 = INT64_MAX;
	int64_t x292 = INT64_MAX;
	static volatile int64_t t56 = -37725975982LL;

	t56 = (((x289*x290)&x291)%x292);

	if (t56 != 9223372036191158272LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x293 = UINT64_MAX;
	int16_t x294 = -1;
	static int16_t x295 = -4;
	uint64_t x296 = 129009LLU;

	t57 = (((x293*x294)&x295)%x296);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x298 = -1;
	uint64_t x299 = UINT64_MAX;
	static volatile int16_t x300 = INT16_MIN;

	t58 = (((x297*x298)&x299)%x300);

	if (t58 != 18419691077688056416LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x305 = 0;
	int32_t x306 = INT32_MAX;
	int64_t x307 = INT64_MAX;
	volatile int64_t t59 = -769LL;

	t59 = (((x305*x306)&x307)%x308);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x313 = UINT64_MAX;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MAX;

	t60 = (((x313*x314)&x315)%x316);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x318 = -22;
	static int16_t x319 = 57;
	volatile uint16_t x320 = 15341U;

	t61 = (((x317*x318)&x319)%x320);

	if (t61 != 48) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x321 = -240;
	uint64_t x322 = UINT64_MAX;
	uint64_t t62 = 63068901LLU;

	t62 = (((x321*x322)&x323)%x324);

	if (t62 != 144LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x325 = -1;
	volatile int32_t x326 = -1047;
	uint32_t x327 = 549239185U;
	static int32_t x328 = INT32_MIN;
	volatile uint32_t t63 = 26103126U;

	t63 = (((x325*x326)&x327)%x328);

	if (t63 != 17U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x329 = INT32_MAX;
	int64_t x331 = INT64_MAX;
	int16_t x332 = -1;
	static volatile int64_t t64 = 3861509171025LL;

	t64 = (((x329*x330)&x331)%x332);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x333 = -18016;
	int16_t x334 = INT16_MIN;
	int64_t x336 = -1LL;
	volatile int64_t t65 = -14149485349LL;

	t65 = (((x333*x334)&x335)%x336);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x337 = 4LLU;
	int8_t x338 = -6;
	volatile int16_t x339 = INT16_MIN;
	int8_t x340 = 5;
	volatile uint64_t t66 = 79835786421LLU;

	t66 = (((x337*x338)&x339)%x340);

	if (t66 != 3LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x342 = 2005827U;
	volatile uint8_t x344 = UINT8_MAX;
	int64_t t67 = -10803815188253LL;

	t67 = (((x341*x342)&x343)%x344);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x346 = -1LL;
	static uint16_t x347 = UINT16_MAX;
	int16_t x348 = INT16_MIN;
	volatile uint64_t t68 = 658LLU;

	t68 = (((x345*x346)&x347)%x348);

	if (t68 != 30377LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x353 = 0U;
	int64_t x354 = INT64_MAX;
	int64_t x356 = INT64_MIN;
	int64_t t69 = -637704983LL;

	t69 = (((x353*x354)&x355)%x356);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x357 = INT64_MAX;
	volatile uint64_t x358 = 1676637848642563938LLU;
	uint16_t x359 = 12U;
	volatile uint64_t t70 = 120116358384431532LLU;

	t70 = (((x357*x358)&x359)%x360);

	if (t70 != 12LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x361 = INT8_MAX;
	uint8_t x362 = 105U;
	int8_t x363 = -1;
	uint16_t x364 = 1U;
	int32_t t71 = 0;

	t71 = (((x361*x362)&x363)%x364);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x373 = 191557;
	int16_t x374 = 3;
	volatile int64_t x375 = 249565LL;
	int8_t x376 = 29;

	t72 = (((x373*x374)&x375)%x376);

	if (t72 != 8LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x378 = 1;
	int8_t x379 = INT8_MAX;
	int32_t t73 = 0;

	t73 = (((x377*x378)&x379)%x380);

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x383 = 15789486U;
	int32_t x384 = -1;
	volatile uint32_t t74 = 374U;

	t74 = (((x381*x382)&x383)%x384);

	if (t74 != 12582952U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x389 = -1099;
	volatile int8_t x390 = INT8_MAX;
	int16_t x391 = INT16_MIN;
	volatile int32_t t75 = -13574218;

	t75 = (((x389*x390)&x391)%x392);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x395 = INT64_MIN;
	int8_t x396 = INT8_MIN;

	t76 = (((x393*x394)&x395)%x396);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x397 = 164449170U;
	uint16_t x398 = 76U;
	static int8_t x399 = INT8_MIN;
	volatile int16_t x400 = INT16_MAX;

	t77 = (((x397*x398)&x399)%x400);

	if (t77 != 16616U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x401 = 208915U;
	volatile int16_t x402 = 7;
	static uint8_t x403 = 9U;
	static int64_t x404 = INT64_MIN;
	static int64_t t78 = -59834526LL;

	t78 = (((x401*x402)&x403)%x404);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x405 = -32;
	volatile int16_t x406 = -14;
	int16_t x408 = 80;
	volatile uint32_t t79 = 6832U;

	t79 = (((x405*x406)&x407)%x408);

	if (t79 != 48U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x413 = 1;
	int8_t x416 = 3;
	static volatile int32_t t80 = 187604;

	t80 = (((x413*x414)&x415)%x416);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x417 = INT8_MAX;
	volatile uint16_t x418 = UINT16_MAX;
	int16_t x419 = -1;
	uint16_t x420 = 57U;
	volatile int32_t t81 = -1;

	t81 = (((x417*x418)&x419)%x420);

	if (t81 != 33) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x421 = UINT64_MAX;
	static int8_t x422 = 23;
	uint64_t x423 = 291LLU;
	int8_t x424 = INT8_MAX;
	uint64_t t82 = 391088LLU;

	t82 = (((x421*x422)&x423)%x424);

	if (t82 != 35LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x427 = INT16_MIN;
	volatile int8_t x428 = -1;
	static volatile int64_t t83 = 14244320310937783LL;

	t83 = (((x425*x426)&x427)%x428);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x430 = 0U;
	static volatile int8_t x432 = INT8_MAX;
	volatile int32_t t84 = -978458;

	t84 = (((x429*x430)&x431)%x432);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x437 = -525;
	int32_t x440 = -31124;
	int32_t t85 = -250423227;

	t85 = (((x437*x438)&x439)%x440);

	if (t85 != 9362) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x446 = 22395;
	int64_t x447 = 17065992188636579LL;
	volatile int64_t t86 = -2692106017342LL;

	t86 = (((x445*x446)&x447)%x448);

	if (t86 != 9249LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x449 = 7U;
	int64_t x451 = 0LL;
	static int64_t x452 = INT64_MIN;
	static int64_t t87 = 12428577526599LL;

	t87 = (((x449*x450)&x451)%x452);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x457 = INT32_MIN;
	uint32_t x459 = 277U;

	t88 = (((x457*x458)&x459)%x460);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x461 = INT32_MIN;
	uint64_t x462 = 14003436514584629LLU;
	static volatile int32_t x463 = -1;
	static int64_t x464 = INT64_MAX;
	volatile uint64_t t89 = 10210837649794LLU;

	t89 = (((x461*x462)&x463)%x464);

	if (t89 != 7959245812398030848LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x465 = -1;
	static uint8_t x467 = 12U;
	int32_t t90 = -642027814;

	t90 = (((x465*x466)&x467)%x468);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x473 = -563749;
	int32_t x474 = -1;
	volatile int8_t x475 = -1;
	volatile int32_t t91 = -3604409;

	t91 = (((x473*x474)&x475)%x476);

	if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x477 = INT64_MIN;
	uint64_t x478 = 1995892286694789816LLU;
	int64_t x479 = INT64_MIN;
	static volatile uint64_t t92 = 25249353LLU;

	t92 = (((x477*x478)&x479)%x480);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x481 = INT64_MIN;
	uint64_t x482 = 4330301919545682LLU;
	uint32_t x483 = 3U;
	static int8_t x484 = -1;
	static volatile uint64_t t93 = 1782404004LLU;

	t93 = (((x481*x482)&x483)%x484);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x489 = INT8_MAX;
	static int64_t x490 = -1LL;
	volatile int8_t x491 = 0;
	volatile int8_t x492 = 1;
	volatile int64_t t94 = 13490LL;

	t94 = (((x489*x490)&x491)%x492);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x497 = INT16_MIN;
	int32_t x498 = 0;
	int16_t x499 = 124;
	uint8_t x500 = 2U;
	int32_t t95 = -24;

	t95 = (((x497*x498)&x499)%x500);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x501 = UINT16_MAX;
	int64_t x502 = -1LL;
	volatile int64_t x503 = INT64_MIN;
	static int64_t x504 = INT64_MIN;
	int64_t t96 = -2669LL;

	t96 = (((x501*x502)&x503)%x504);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x505 = 383U;
	int16_t x506 = INT16_MIN;
	volatile int64_t x508 = -1LL;
	volatile int64_t t97 = 13481LL;

	t97 = (((x505*x506)&x507)%x508);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x509 = INT16_MAX;
	static int64_t x510 = -34466552505LL;
	uint64_t x511 = UINT64_MAX;
	int16_t x512 = INT16_MIN;
	volatile uint64_t t98 = 3LLU;

	t98 = (((x509*x510)&x511)%x512);

	if (t98 != 18445614708183620281LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x513 = -1LL;
	volatile int8_t x514 = INT8_MIN;
	volatile uint64_t x516 = 622LLU;
	uint64_t t99 = 251285259391396200LLU;

	t99 = (((x513*x514)&x515)%x516);

	if (t99 != 128LLU) { NG(); } else { ; }
	
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

