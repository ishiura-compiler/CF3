#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
int8_t x12 = INT8_MIN;
static volatile int64_t x18 = INT64_MIN;
uint32_t x19 = 3U;
volatile int32_t x23 = 207;
uint64_t x24 = UINT64_MAX;
uint64_t t7 = 59936171674980518LLU;
volatile int64_t t10 = 110582206198260LL;
volatile int64_t t11 = -1LL;
uint8_t x60 = UINT8_MAX;
uint64_t x61 = UINT64_MAX;
int32_t x63 = INT32_MAX;
int8_t x65 = -23;
uint64_t x76 = UINT64_MAX;
uint64_t t17 = 23972253175587LLU;
int32_t x77 = INT32_MIN;
int16_t x79 = -1;
uint32_t x82 = 265770407U;
volatile uint16_t x83 = UINT16_MAX;
int8_t x86 = 5;
uint64_t x87 = 58982LLU;
int16_t x95 = INT16_MIN;
int64_t x99 = INT64_MAX;
uint64_t t22 = 5800699LLU;
int16_t x105 = 59;
int64_t x115 = INT64_MIN;
uint16_t x116 = UINT16_MAX;
int64_t x121 = INT64_MAX;
static uint16_t x124 = 3272U;
int64_t t27 = -3592783690LL;
int16_t x131 = -1;
uint64_t x140 = 219657761418125LLU;
int16_t x141 = INT16_MAX;
uint8_t x148 = 6U;
volatile uint32_t t33 = 2U;
int32_t x154 = 1;
volatile int32_t t34 = 1;
static volatile int64_t x165 = -129869793966363LL;
int32_t x166 = INT32_MIN;
int64_t t36 = -551629060112263515LL;
int16_t x169 = INT16_MIN;
int32_t x171 = INT32_MAX;
int64_t x181 = INT64_MIN;
int16_t x189 = INT16_MIN;
volatile uint16_t x190 = 3797U;
int8_t x195 = INT8_MIN;
int16_t x198 = -325;
uint16_t x199 = 211U;
static volatile int8_t x215 = INT8_MIN;
int16_t x217 = INT16_MIN;
static volatile int32_t t48 = 11814;
int8_t x226 = -1;
int8_t x227 = INT8_MAX;
volatile int64_t t49 = 51442891125187LL;
int32_t x238 = INT32_MAX;
uint32_t x239 = UINT32_MAX;
volatile uint64_t x240 = 27987450LLU;
uint8_t x246 = 0U;
int32_t x249 = 1476;
int64_t x250 = -1LL;
int8_t x256 = INT8_MIN;
volatile uint64_t x264 = UINT64_MAX;
uint64_t t57 = 13775576890LLU;
static uint8_t x265 = 7U;
static uint16_t x267 = 2U;
volatile int64_t x268 = 13155430759062LL;
uint8_t x269 = 110U;
uint16_t x270 = UINT16_MAX;
int16_t x279 = INT16_MIN;
int64_t t61 = 3980790LL;
volatile uint64_t t63 = 47LLU;
int8_t x289 = INT8_MIN;
static int32_t x297 = 22100;
volatile int32_t x299 = -188435;
volatile int8_t x307 = INT8_MIN;
int64_t x314 = 12047049473070883LL;
uint16_t x318 = UINT16_MAX;
static volatile int8_t x324 = INT8_MIN;
volatile uint32_t t72 = 141106U;
int32_t x341 = INT32_MIN;
volatile int8_t x342 = -1;
static volatile uint16_t x351 = UINT16_MAX;
uint64_t x354 = UINT64_MAX;
int64_t x359 = -54654239866LL;
int8_t x364 = -1;
static int64_t t80 = -4357LL;
uint64_t x365 = UINT64_MAX;
int64_t x376 = INT64_MAX;
int8_t x380 = INT8_MIN;
int64_t x384 = 2185087698995549244LL;
uint64_t t85 = 44LLU;
uint64_t x396 = 550593590178765LLU;
volatile int16_t x400 = 38;
uint64_t t89 = 35LLU;
int8_t x407 = INT8_MIN;
static int8_t x410 = -1;
volatile uint64_t t91 = 11050LLU;
uint16_t x417 = 792U;
int64_t x418 = INT64_MAX;
uint16_t x423 = UINT16_MAX;
int8_t x431 = INT8_MIN;
int16_t x436 = INT16_MIN;
int32_t x439 = -1;
static int8_t x443 = INT8_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = 7509878286513LL;
	static int8_t x3 = INT8_MIN;
	uint32_t x4 = UINT32_MAX;
	int64_t t0 = -131868713404LL;

	t0 = ((x1^(x2/x3))-x4);

	if (t0 != 9223371973888884400LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = INT32_MAX;
	int32_t x7 = -1;
	volatile uint64_t x8 = 4895367723216462LLU;
	static uint64_t t1 = 11LLU;

	t1 = ((x5^(x6/x7))-x8);

	if (t1 != 18441848708133818675LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -10916;
	int32_t x10 = -12435545;
	volatile int32_t x11 = -2556410;
	int32_t t2 = -123013737;

	t2 = ((x9^(x10/x11))-x12);

	if (t2 != -10792) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = -1LL;
	static uint8_t x15 = 4U;
	uint8_t x16 = UINT8_MAX;
	int64_t t3 = 1LL;

	t3 = ((x13^(x14/x15))-x16);

	if (t3 != -2147483903LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 2210;
	static int32_t x20 = INT32_MIN;
	int64_t t4 = 52853759234972549LL;

	t4 = ((x17^(x18/x19))-x20);

	if (t4 != -3074457343470772748LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	uint8_t x22 = UINT8_MAX;
	volatile uint64_t t5 = 24983323LLU;

	t5 = ((x21^(x22/x23))-x24);

	if (t5 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	uint8_t x26 = 30U;
	volatile uint16_t x27 = 29531U;
	static volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = -340208;

	t6 = ((x25^(x26/x27))-x28);

	if (t6 != -65536) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x30 = UINT64_MAX;
	uint64_t x31 = 10929724LLU;
	int64_t x32 = -4110440821381923987LL;

	t7 = ((x29^(x30/x31))-x32);

	if (t7 != 4110439135444481258LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	uint32_t x34 = 7331U;
	uint32_t x35 = UINT32_MAX;
	int8_t x36 = 50;
	uint32_t t8 = 375U;

	t8 = ((x33^(x34/x35))-x36);

	if (t8 != 77U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -327;
	int16_t x38 = 5;
	int64_t x39 = -3431058347456372LL;
	int32_t x40 = 0;
	volatile int64_t t9 = 4664318313770209LL;

	t9 = ((x37^(x38/x39))-x40);

	if (t9 != -327LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = UINT32_MAX;
	int64_t x42 = 566LL;
	int32_t x43 = INT32_MAX;
	uint8_t x44 = 15U;

	t10 = ((x41^(x42/x43))-x44);

	if (t10 != 4294967280LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MIN;
	static int16_t x48 = INT16_MAX;

	t11 = ((x45^(x46/x47))-x48);

	if (t11 != -9223090561878097919LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x49 = 4;
	static int32_t x50 = INT32_MAX;
	uint64_t x51 = 134433289379507836LLU;
	int8_t x52 = INT8_MIN;
	static uint64_t t12 = 1307070LLU;

	t12 = ((x49^(x50/x51))-x52);

	if (t12 != 132LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 241238U;
	static uint32_t x54 = UINT32_MAX;
	int8_t x55 = -1;
	static int8_t x56 = 1;
	uint32_t t13 = 41675793U;

	t13 = ((x53^(x54/x55))-x56);

	if (t13 != 241238U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int64_t x58 = 171432083016024LL;
	uint16_t x59 = 28U;
	int64_t t14 = -191309106LL;

	t14 = ((x57^(x58/x59))-x60);

	if (t14 != 6122574433963LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 1016LLU;
	int64_t x64 = 1522LL;
	volatile uint64_t t15 = 1LLU;

	t15 = ((x61^(x62/x63))-x64);

	if (t15 != 18446744073709550093LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = -1910454197049251578LL;
	int32_t x67 = INT32_MIN;
	int64_t x68 = -31719215LL;
	int64_t t16 = -213493777LL;

	t16 = ((x65^(x66/x67))-x68);

	if (t16 != -857905336LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int8_t x74 = -1;
	int32_t x75 = -3818984;

	t17 = ((x73^(x74/x75))-x76);

	if (t17 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x78 = UINT16_MAX;
	int16_t x80 = 5;
	volatile int32_t t18 = -143;

	t18 = ((x77^(x78/x79))-x80);

	if (t18 != 2147418108) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	int32_t x84 = -1;
	uint32_t t19 = 49949395U;

	t19 = ((x81^(x82/x83))-x84);

	if (t19 != 2147487704U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 354;
	uint64_t x88 = 33LLU;
	volatile uint64_t t20 = 227518338980LLU;

	t20 = ((x85^(x86/x87))-x88);

	if (t20 != 321LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 20758;
	int8_t x94 = INT8_MIN;
	uint64_t x96 = 900LLU;
	static uint64_t t21 = 7329349LLU;

	t21 = ((x93^(x94/x95))-x96);

	if (t21 != 19858LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -1LL;
	static volatile uint64_t x98 = 376004801136LLU;
	int16_t x100 = INT16_MIN;

	t22 = ((x97^(x98/x99))-x100);

	if (t22 != 32767LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x106 = INT64_MAX;
	static volatile int8_t x107 = 61;
	uint8_t x108 = 77U;
	int64_t t23 = -439642816003763LL;

	t23 = ((x105^(x106/x107))-x108);

	if (t23 != 151202820276307734LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MAX;
	static uint16_t x114 = 0U;
	int64_t t24 = 235712051756206722LL;

	t24 = ((x113^(x114/x115))-x116);

	if (t24 != -65408LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -1LL;
	int64_t x118 = 50LL;
	uint8_t x119 = 108U;
	int8_t x120 = INT8_MIN;
	int64_t t25 = 31898308018796340LL;

	t25 = ((x117^(x118/x119))-x120);

	if (t25 != 127LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x122 = 978729184;
	int64_t x123 = -8572528192173LL;
	int64_t t26 = 54661243168625LL;

	t26 = ((x121^(x122/x123))-x124);

	if (t26 != 9223372036854772535LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 56U;
	uint32_t x126 = 133224U;
	volatile int32_t x127 = INT32_MIN;
	volatile int64_t x128 = INT64_MAX;

	t27 = ((x125^(x126/x127))-x128);

	if (t27 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = 289827543LLU;
	static uint64_t x130 = UINT64_MAX;
	int64_t x132 = 4321707215678437520LL;
	volatile uint64_t t28 = 22436493600LLU;

	t28 = ((x129^(x130/x131))-x132);

	if (t28 != 14125036858320941638LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	uint32_t x134 = 4229U;
	int64_t x135 = INT64_MAX;
	uint64_t x136 = 21469484674826706LLU;
	volatile uint64_t t29 = 120839189288582784LLU;

	t29 = ((x133^(x134/x135))-x136);

	if (t29 != 18425274589034692142LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = UINT32_MAX;
	int32_t x138 = INT32_MIN;
	int64_t x139 = 44201549982LL;
	uint64_t t30 = 257580608LLU;

	t30 = ((x137^(x138/x139))-x140);

	if (t30 != 18446524420243100786LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x142 = 67U;
	int8_t x143 = -1;
	uint16_t x144 = 5166U;
	static int32_t t31 = -116;

	t31 = ((x141^(x142/x143))-x144);

	if (t31 != -37868) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = -47;
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	static volatile int32_t t32 = 0;

	t32 = ((x145^(x146/x147))-x148);

	if (t32 != -53) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x149 = 0U;
	static int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MIN;
	volatile int32_t x152 = 26600406;

	t33 = ((x149^(x150/x151))-x152);

	if (t33 != 4268366890U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = 7U;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MAX;

	t34 = ((x153^(x154/x155))-x156);

	if (t34 != -2147483640) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = -1;
	int32_t x158 = INT32_MAX;
	uint32_t x159 = 18042U;
	uint64_t x160 = 1283669567250LLU;
	volatile uint64_t t35 = 168644342197503954LLU;

	t35 = ((x157^(x158/x159))-x160);

	if (t35 != 18446742794334832635LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x167 = INT8_MAX;
	static int16_t x168 = INT16_MIN;

	t36 = ((x165^(x166/x167))-x168);

	if (t36 != 129869810646301LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x170 = INT16_MAX;
	volatile int32_t x172 = 8486;
	static volatile int32_t t37 = 116397639;

	t37 = ((x169^(x170/x171))-x172);

	if (t37 != -41254) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = 1355;
	uint64_t x174 = UINT64_MAX;
	volatile uint64_t x175 = UINT64_MAX;
	static uint8_t x176 = 19U;
	volatile uint64_t t38 = 130687LLU;

	t38 = ((x173^(x174/x175))-x176);

	if (t38 != 1335LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x177 = 0;
	int16_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	static int16_t x180 = INT16_MIN;
	uint32_t t39 = 23058088U;

	t39 = ((x177^(x178/x179))-x180);

	if (t39 != 32769U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x182 = -1;
	static int8_t x183 = INT8_MAX;
	int16_t x184 = -1;
	int64_t t40 = -8085LL;

	t40 = ((x181^(x182/x183))-x184);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x191 = UINT8_MAX;
	volatile int32_t x192 = 33457736;
	volatile int32_t t41 = 458002629;

	t41 = ((x189^(x190/x191))-x192);

	if (t41 != -33490490) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x193 = 2006;
	static uint16_t x194 = 489U;
	int8_t x196 = INT8_MIN;
	static int32_t t42 = 41245945;

	t42 = ((x193^(x194/x195))-x196);

	if (t42 != -1877) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = INT16_MAX;
	static int16_t x200 = INT16_MIN;
	int32_t t43 = -4776;

	t43 = ((x197^(x198/x199))-x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = -1;
	int16_t x202 = INT16_MIN;
	uint64_t x203 = 124LLU;
	static uint16_t x204 = 86U;
	volatile uint64_t t44 = 4623134214530203672LLU;

	t44 = ((x201^(x202/x203))-x204);

	if (t44 != 18297980008598990894LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x206 = -54;
	int64_t x207 = INT64_MIN;
	int64_t x208 = INT64_MAX;
	static int64_t t45 = -4157694769612LL;

	t45 = ((x205^(x206/x207))-x208);

	if (t45 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x209 = INT16_MIN;
	static int64_t x210 = INT64_MIN;
	uint64_t x211 = 28020285933598080LLU;
	int32_t x212 = -36555661;
	uint64_t t46 = 89585968058796692LLU;

	t46 = ((x209^(x210/x211))-x212);

	if (t46 != 36523222LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = 1U;
	static int32_t x214 = INT32_MIN;
	static int8_t x216 = INT8_MAX;
	int32_t t47 = -4707181;

	t47 = ((x213^(x214/x215))-x216);

	if (t47 != 16777090) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x218 = INT8_MIN;
	uint16_t x219 = UINT16_MAX;
	static int16_t x220 = 4;

	t48 = ((x217^(x218/x219))-x220);

	if (t48 != -32772) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x225 = INT64_MAX;
	uint32_t x228 = 81361U;

	t49 = ((x225^(x226/x227))-x228);

	if (t49 != 9223372036854694446LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MIN;
	static uint64_t x230 = UINT64_MAX;
	int64_t x231 = INT64_MIN;
	int8_t x232 = -1;
	volatile uint64_t t50 = 31961904066145890LLU;

	t50 = ((x229^(x230/x231))-x232);

	if (t50 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = INT64_MIN;
	volatile int64_t x234 = INT64_MIN;
	int32_t x235 = -1388060;
	int32_t x236 = 6459;
	int64_t t51 = -3961LL;

	t51 = ((x233^(x234/x235))-x236);

	if (t51 != -9223365392061302984LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = 395;
	volatile uint64_t t52 = 16329090993LLU;

	t52 = ((x237^(x238/x239))-x240);

	if (t52 != 18446744073681564561LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MAX;
	static uint32_t x243 = 2135715264U;
	int32_t x244 = INT32_MIN;
	volatile uint32_t t53 = 190U;

	t53 = ((x241^(x242/x243))-x244);

	if (t53 != 2147483521U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x245 = 138436U;
	volatile int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MIN;
	uint32_t t54 = 3981210U;

	t54 = ((x245^(x246/x247))-x248);

	if (t54 != 171204U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MAX;
	static int64_t t55 = 494724317019081503LL;

	t55 = ((x249^(x250/x251))-x252);

	if (t55 != 1349LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = 241;
	int8_t x254 = -1;
	uint8_t x255 = 4U;
	volatile int32_t t56 = -169588;

	t56 = ((x253^(x254/x255))-x256);

	if (t56 != 369) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x261 = 129115LLU;
	volatile uint16_t x262 = UINT16_MAX;
	static int8_t x263 = 24;

	t57 = ((x261^(x262/x263))-x264);

	if (t57 != 127730LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x266 = -9335090809366515LL;
	static volatile int64_t t58 = 1197LL;

	t58 = ((x265^(x266/x267))-x268);

	if (t58 != -4680700835442326LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x271 = -3;
	int32_t x272 = -7090;
	volatile int32_t t59 = -29;

	t59 = ((x269^(x270/x271))-x272);

	if (t59 != -14729) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x273 = -1;
	int16_t x274 = INT16_MIN;
	uint8_t x275 = 1U;
	uint64_t x276 = 384LLU;
	uint64_t t60 = 1LLU;

	t60 = ((x273^(x274/x275))-x276);

	if (t60 != 32383LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x277 = INT64_MAX;
	int64_t x278 = -929483770728853284LL;
	volatile uint8_t x280 = UINT8_MAX;

	t61 = ((x277^(x278/x279))-x280);

	if (t61 != 9223343671261186415LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x281 = INT16_MAX;
	uint64_t x282 = 17903260424LLU;
	volatile uint32_t x283 = 1264680U;
	static int16_t x284 = INT16_MIN;
	static volatile uint64_t t62 = 2030710744556218721LLU;

	t62 = ((x281^(x282/x283))-x284);

	if (t62 != 51379LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x285 = 86664575U;
	uint16_t x286 = 1U;
	uint64_t x287 = 20135011786LLU;
	volatile uint64_t x288 = 6194106726LLU;

	t63 = ((x285^(x286/x287))-x288);

	if (t63 != 18446744067602109465LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x290 = -1;
	int32_t x291 = INT32_MIN;
	int16_t x292 = -1;
	int32_t t64 = -19;

	t64 = ((x289^(x290/x291))-x292);

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x298 = -1;
	int16_t x300 = INT16_MIN;
	int32_t t65 = -886;

	t65 = ((x297^(x298/x299))-x300);

	if (t65 != 54868) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x301 = 45U;
	uint64_t x302 = 13862123215958395LLU;
	uint8_t x303 = 1U;
	static volatile int32_t x304 = INT32_MIN;
	volatile uint64_t t66 = 60175625LLU;

	t66 = ((x301^(x302/x303))-x304);

	if (t66 != 13862125363442006LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = UINT8_MAX;
	int64_t x306 = INT64_MIN;
	volatile int16_t x308 = 1;
	int64_t t67 = -61LL;

	t67 = ((x305^(x306/x307))-x308);

	if (t67 != 72057594037928190LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x309 = 17U;
	int64_t x310 = 3761796LL;
	int64_t x311 = -1LL;
	uint64_t x312 = 26757LLU;
	volatile uint64_t t68 = 912762LLU;

	t68 = ((x309^(x310/x311))-x312);

	if (t68 != 18446744073705763048LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x313 = UINT16_MAX;
	int32_t x315 = INT32_MIN;
	int8_t x316 = 0;
	static int64_t t69 = 206849528791LL;

	t69 = ((x313^(x314/x315))-x316);

	if (t69 != -5596813LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x317 = -5;
	uint64_t x319 = 121669395089LLU;
	int64_t x320 = 188903622117509LL;
	volatile uint64_t t70 = 37789LLU;

	t70 = ((x317^(x318/x319))-x320);

	if (t70 != 18446555170087434102LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x321 = UINT64_MAX;
	int64_t x322 = -85LL;
	uint64_t x323 = UINT64_MAX;
	volatile uint64_t t71 = 4385583541517LLU;

	t71 = ((x321^(x322/x323))-x324);

	if (t71 != 127LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = -1;
	int16_t x327 = -1;
	static volatile uint32_t x328 = UINT32_MAX;

	t72 = ((x325^(x326/x327))-x328);

	if (t72 != 4294967170U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = -1;
	int16_t x334 = -359;
	int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MIN;
	volatile int64_t t73 = -16101778LL;

	t73 = ((x333^(x334/x335))-x336);

	if (t73 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x337 = INT64_MIN;
	static volatile uint64_t x338 = 8873350LLU;
	uint8_t x339 = 3U;
	uint32_t x340 = 3219U;
	static uint64_t t74 = 0LLU;

	t74 = ((x337^(x338/x339))-x340);

	if (t74 != 9223372036857730372LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x343 = 67449262LL;
	static uint8_t x344 = 51U;
	int64_t t75 = -3014952224LL;

	t75 = ((x341^(x342/x343))-x344);

	if (t75 != -2147483699LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MIN;
	volatile int32_t x347 = -1;
	int8_t x348 = -1;
	uint32_t t76 = 2018237U;

	t76 = ((x345^(x346/x347))-x348);

	if (t76 != 4294934528U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x349 = -1;
	static uint16_t x350 = 266U;
	int64_t x352 = -3422330615LL;
	volatile int64_t t77 = -14LL;

	t77 = ((x349^(x350/x351))-x352);

	if (t77 != 3422330614LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x353 = UINT32_MAX;
	int64_t x355 = INT64_MIN;
	uint32_t x356 = UINT32_MAX;
	static uint64_t t78 = UINT64_MAX;

	t78 = ((x353^(x354/x355))-x356);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x357 = -422086LL;
	int8_t x358 = INT8_MIN;
	static int8_t x360 = INT8_MAX;
	volatile int64_t t79 = -146LL;

	t79 = ((x357^(x358/x359))-x360);

	if (t79 != -422213LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x361 = INT64_MIN;
	int64_t x362 = -1LL;
	static volatile int32_t x363 = -1;

	t80 = ((x361^(x362/x363))-x364);

	if (t80 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x366 = 7U;
	volatile uint8_t x367 = 14U;
	int64_t x368 = INT64_MIN;
	uint64_t t81 = 609961262416851LLU;

	t81 = ((x365^(x366/x367))-x368);

	if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = INT16_MAX;
	static int16_t x370 = -1;
	static uint8_t x371 = UINT8_MAX;
	volatile uint64_t x372 = 7632276657745852656LLU;
	static volatile uint64_t t82 = 1925895247274145LLU;

	t82 = ((x369^(x370/x371))-x372);

	if (t82 != 10814467415963731727LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = -123;
	static volatile uint64_t x374 = 78369804862607LLU;
	uint16_t x375 = 21U;
	volatile uint64_t t83 = 1025055442730LLU;

	t83 = ((x373^(x374/x375))-x376);

	if (t83 != 9223368304959306187LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x377 = INT32_MIN;
	static int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	static int64_t t84 = 4440676LL;

	t84 = ((x377^(x378/x379))-x380);

	if (t84 != -281477124194176LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x381 = 27295834510354LLU;
	int64_t x382 = 2034LL;
	int16_t x383 = 952;

	t85 = ((x381^(x382/x383))-x384);

	if (t85 != 16261683670548512724LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = -1;
	int64_t x386 = INT64_MIN;
	uint64_t x387 = UINT64_MAX;
	static uint8_t x388 = 30U;
	uint64_t t86 = 79782185LLU;

	t86 = ((x385^(x386/x387))-x388);

	if (t86 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x393 = -54;
	int8_t x394 = 31;
	volatile int64_t x395 = -1LL;
	volatile uint64_t t87 = 22539574282LLU;

	t87 = ((x393^(x394/x395))-x396);

	if (t87 != 18446193480119372894LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x397 = 761958291756674LLU;
	uint8_t x398 = 7U;
	int32_t x399 = INT32_MIN;
	uint64_t t88 = 52222LLU;

	t88 = ((x397^(x398/x399))-x400);

	if (t88 != 761958291756636LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x401 = 42;
	int8_t x402 = -1;
	volatile int8_t x403 = INT8_MIN;
	uint64_t x404 = UINT64_MAX;

	t89 = ((x401^(x402/x403))-x404);

	if (t89 != 43LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x405 = 99U;
	uint16_t x406 = 43U;
	int16_t x408 = -1;
	volatile int32_t t90 = -109;

	t90 = ((x405^(x406/x407))-x408);

	if (t90 != 100) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x409 = 5LLU;
	uint32_t x411 = 455859596U;
	int16_t x412 = 1588;

	t91 = ((x409^(x410/x411))-x412);

	if (t91 != 18446744073709550040LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x413 = INT32_MIN;
	int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MIN;
	static int32_t x416 = INT32_MIN;
	static volatile int32_t t92 = 145962;

	t92 = ((x413^(x414/x415))-x416);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x419 = -1;
	int8_t x420 = INT8_MIN;
	volatile int64_t t93 = -1LL;

	t93 = ((x417^(x418/x419))-x420);

	if (t93 != -9223372036854774887LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x421 = -1;
	int16_t x422 = -1;
	int32_t x424 = -1;
	int32_t t94 = -1865541;

	t94 = ((x421^(x422/x423))-x424);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x425 = 884;
	uint64_t x426 = UINT64_MAX;
	volatile int32_t x427 = 164;
	volatile int8_t x428 = -1;
	static uint64_t t95 = 14022LLU;

	t95 = ((x425^(x426/x427))-x428);

	if (t95 != 112480146790911209LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = INT32_MIN;
	int64_t x430 = -1LL;
	int16_t x432 = INT16_MIN;
	int64_t t96 = -3711507LL;

	t96 = ((x429^(x430/x431))-x432);

	if (t96 != -2147450880LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x433 = INT8_MIN;
	int8_t x434 = INT8_MIN;
	int64_t x435 = INT64_MAX;
	volatile int64_t t97 = 112725099LL;

	t97 = ((x433^(x434/x435))-x436);

	if (t97 != 32640LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x437 = INT16_MAX;
	uint32_t x438 = 426740U;
	int16_t x440 = INT16_MIN;
	uint32_t t98 = 1137551855U;

	t98 = ((x437^(x438/x439))-x440);

	if (t98 != 65535U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x441 = 628U;
	static uint8_t x442 = UINT8_MAX;
	static int8_t x444 = -1;
	int32_t t99 = -3191109;

	t99 = ((x441^(x442/x443))-x444);

	if (t99 != 631) { NG(); } else { ; }
	
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

