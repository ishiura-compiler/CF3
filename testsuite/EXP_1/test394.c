#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = -3946;
int8_t x17 = INT8_MIN;
uint64_t x21 = UINT64_MAX;
volatile int8_t x32 = -1;
uint8_t x34 = UINT8_MAX;
volatile int32_t t6 = 50531;
static volatile uint64_t t7 = 243LLU;
volatile uint64_t x50 = UINT64_MAX;
volatile int32_t x51 = INT32_MAX;
uint16_t x54 = 417U;
int16_t x56 = INT16_MAX;
int16_t x58 = INT16_MAX;
int8_t x63 = 23;
volatile uint8_t x64 = UINT8_MAX;
uint16_t x80 = 20750U;
volatile uint32_t t17 = 30546U;
int64_t x108 = -1LL;
volatile uint32_t t21 = 29014U;
volatile uint8_t x124 = UINT8_MAX;
uint32_t x126 = 16U;
int16_t x134 = 3;
int8_t x136 = -2;
uint32_t x144 = 615479U;
int8_t x153 = INT8_MAX;
static int8_t x154 = -11;
static int64_t t29 = 237900LL;
uint32_t x157 = 297257664U;
static uint16_t x158 = UINT16_MAX;
static volatile int32_t x162 = -1;
volatile int8_t x171 = -27;
static uint32_t t32 = 104940745U;
static volatile int32_t x190 = -1;
static int8_t x192 = INT8_MIN;
int8_t x195 = 2;
uint64_t x196 = UINT64_MAX;
volatile int32_t x218 = 7709;
volatile int32_t t40 = 5167;
int16_t x229 = INT16_MIN;
int8_t x233 = INT8_MAX;
uint16_t x259 = UINT16_MAX;
uint64_t x265 = 9014532LLU;
uint16_t x279 = UINT16_MAX;
int32_t x291 = INT32_MIN;
int8_t x292 = INT8_MIN;
uint16_t x293 = 10058U;
uint32_t t50 = 285U;
int8_t x298 = 61;
uint8_t x299 = UINT8_MAX;
volatile int16_t x300 = 56;
int32_t t51 = 2535;
volatile uint16_t x301 = UINT16_MAX;
volatile int32_t x304 = -1;
static int64_t x324 = 24396LL;
int64_t t54 = -3145LL;
static uint64_t x327 = UINT64_MAX;
int8_t x332 = -1;
volatile uint64_t t56 = 20939LLU;
uint16_t x337 = 7127U;
uint64_t x355 = 29658LLU;
int64_t x360 = -1LL;
int64_t t61 = -51718197731991456LL;
uint32_t x379 = 5U;
volatile int64_t x391 = 13993433922156LL;
uint64_t x395 = 122407116669034252LLU;
int16_t x396 = -7;
int8_t x397 = INT8_MIN;
volatile uint64_t t69 = 1408072845475137LLU;
int64_t x414 = 29380898830479LL;
int8_t x415 = INT8_MAX;
volatile int64_t t72 = -232380619661LL;
int64_t x428 = INT64_MAX;
int32_t x430 = 2;
int8_t x431 = -51;
int32_t x446 = 12304453;
int16_t x447 = -4147;
static volatile int8_t x457 = INT8_MIN;
volatile uint32_t x460 = 911U;
static uint16_t x461 = 950U;
uint64_t t79 = 3281630016235825517LLU;
volatile int32_t x479 = INT32_MAX;
int32_t x506 = -5671348;
int16_t x514 = INT16_MIN;
static volatile uint64_t t86 = 9195602362186LLU;
int64_t x527 = -2205926393653LL;
int16_t x530 = -3393;
uint16_t x532 = UINT16_MAX;
uint32_t x533 = 718U;
volatile uint64_t t89 = 24218018437446490LLU;
static int8_t x542 = -1;
int64_t x544 = 1LL;
static uint32_t x558 = 1228U;
int32_t x559 = INT32_MAX;
uint32_t t92 = 547U;
volatile int16_t x562 = INT16_MIN;
int8_t x565 = -1;
int64_t x568 = 86242LL;
int16_t x571 = INT16_MIN;
int8_t x572 = -1;
static volatile uint64_t t95 = 1702796709LLU;
static uint32_t x577 = 31U;
volatile int8_t x604 = -60;


void f0(void) {
	static uint8_t x1 = 1U;
	volatile int8_t x2 = -16;
	int32_t x3 = 154478115;
	volatile uint16_t x4 = 3041U;
	volatile int32_t t0 = 5;

	t0 = (((x1*x2)%x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	int64_t x6 = INT64_MIN;
	uint64_t x7 = 50LLU;
	uint64_t t1 = 2504563620525243LLU;

	t1 = (((x5*x6)%x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x18 = 53;
	uint64_t x19 = 170042644387LLU;
	static int8_t x20 = INT8_MIN;
	static volatile uint64_t t2 = 3454896038LLU;

	t2 = (((x17*x18)%x19)/x20);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x22 = INT32_MIN;
	int8_t x23 = -1;
	uint8_t x24 = 43U;
	uint64_t t3 = 43231530LLU;

	t3 = (((x21*x22)%x23)/x24);

	if (t3 != 49941480LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = INT32_MIN;
	static volatile int16_t x28 = -1;
	volatile uint64_t t4 = 57885977588323189LLU;

	t4 = (((x25*x26)%x27)/x28);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x29 = UINT32_MAX;
	uint32_t x30 = 4522U;
	int64_t x31 = INT64_MAX;
	volatile int64_t t5 = -33146883816456LL;

	t5 = (((x29*x30)%x31)/x32);

	if (t5 != -4294962774LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = INT16_MIN;
	uint8_t x35 = UINT8_MAX;
	int16_t x36 = INT16_MAX;

	t6 = (((x33*x34)%x35)/x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -234325LL;
	static volatile uint8_t x38 = UINT8_MAX;
	volatile int32_t x39 = INT32_MIN;
	uint64_t x40 = 4967618LLU;

	t7 = (((x37*x38)%x39)/x40);

	if (t7 != 3713398267268LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	int32_t x42 = -35425;
	int16_t x43 = -630;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t8 = -5;

	t8 = (((x41*x42)%x43)/x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = -689;
	int32_t x47 = INT32_MAX;
	uint8_t x48 = 1U;
	int32_t t9 = 62530;

	t9 = (((x45*x46)%x47)/x48);

	if (t9 != 22577152) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -1LL;
	int8_t x52 = -1;
	static uint64_t t10 = 63656155889LLU;

	t10 = (((x49*x50)%x51)/x52);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x53 = 10275;
	static uint16_t x55 = UINT16_MAX;
	int32_t t11 = -705;

	t11 = (((x53*x54)%x55)/x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = -1;
	static int16_t x59 = 1;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t12 = 6LLU;

	t12 = (((x57*x58)%x59)/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MAX;
	uint64_t x62 = UINT64_MAX;
	static uint64_t t13 = 23829403161LLU;

	t13 = (((x61*x62)%x63)/x64);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -1;
	int16_t x66 = -1;
	int8_t x67 = -1;
	volatile uint64_t x68 = 4194158035407LLU;
	volatile uint64_t t14 = 330687426922291845LLU;

	t14 = (((x65*x66)%x67)/x68);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x73 = -1;
	uint64_t x74 = 7LLU;
	int16_t x75 = INT16_MIN;
	static int8_t x76 = -1;
	volatile uint64_t t15 = 615527103116330LLU;

	t15 = (((x73*x74)%x75)/x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 6U;
	static int32_t x78 = -195423522;
	uint32_t x79 = UINT32_MAX;
	static uint32_t t16 = 558020U;

	t16 = (((x77*x78)%x79)/x80);

	if (t16 != 150478U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	uint16_t x82 = 7U;
	uint32_t x83 = 87114U;
	int16_t x84 = INT16_MIN;

	t17 = (((x81*x82)%x83)/x84);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x89 = 22217LLU;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	static int32_t x92 = INT32_MIN;
	volatile uint64_t t18 = 2LLU;

	t18 = (((x89*x90)%x91)/x92);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = 461007440930996LLU;
	int32_t x98 = 2106995;
	int8_t x99 = -62;
	int16_t x100 = -471;
	static volatile uint64_t t19 = 45181LLU;

	t19 = (((x97*x98)%x99)/x100);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x105 = -669;
	uint64_t x106 = 65088768LLU;
	int16_t x107 = INT16_MAX;
	uint64_t t20 = 67762794569LLU;

	t20 = (((x105*x106)%x107)/x108);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x109 = 28U;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	uint32_t x112 = 105763850U;

	t21 = (((x109*x110)%x111)/x112);

	if (t21 != 40U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x117 = UINT32_MAX;
	static int8_t x118 = INT8_MIN;
	static uint16_t x119 = 1973U;
	uint8_t x120 = UINT8_MAX;
	volatile uint32_t t22 = 579105U;

	t22 = (((x117*x118)%x119)/x120);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x121 = 863689814U;
	int32_t x122 = INT32_MAX;
	uint16_t x123 = 622U;
	static uint32_t t23 = 23981U;

	t23 = (((x121*x122)%x123)/x124);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = -4;
	static int64_t x127 = -1197476LL;
	static uint32_t x128 = 204404U;
	volatile int64_t t24 = -186LL;

	t24 = (((x125*x126)%x127)/x128);

	if (t24 != 4LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x133 = 45010U;
	int8_t x135 = INT8_MIN;
	uint32_t t25 = 5594777U;

	t25 = (((x133*x134)%x135)/x136);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x137 = INT16_MIN;
	uint8_t x138 = 42U;
	int64_t x139 = 381LL;
	static uint32_t x140 = 167U;
	int64_t t26 = 491005760421LL;

	t26 = (((x137*x138)%x139)/x140);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = 145U;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = INT32_MAX;
	volatile uint64_t t27 = 7898432099075LLU;

	t27 = (((x141*x142)%x143)/x144);

	if (t27 != 3489LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = -14450909LL;
	int32_t x146 = INT32_MIN;
	uint32_t x147 = 22350553U;
	static int8_t x148 = INT8_MIN;
	int64_t t28 = -51529048980LL;

	t28 = (((x145*x146)%x147)/x148);

	if (t28 != -102498LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = INT64_MIN;

	t29 = (((x153*x154)%x155)/x156);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x159 = UINT64_MAX;
	uint8_t x160 = UINT8_MAX;
	volatile uint64_t t30 = 14440948901174LLU;

	t30 = (((x157*x158)%x159)/x160);

	if (t30 != 12173815LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x161 = UINT16_MAX;
	static int16_t x163 = -1;
	static int8_t x164 = INT8_MAX;
	int32_t t31 = 46218;

	t31 = (((x161*x162)%x163)/x164);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x169 = 1U;
	static int16_t x170 = -296;
	uint32_t x172 = 23200U;

	t32 = (((x169*x170)%x171)/x172);

	if (t32 != 185127U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x173 = 3U;
	int64_t x174 = -354LL;
	int32_t x175 = INT32_MIN;
	volatile int8_t x176 = -1;
	int64_t t33 = 6647419170257645LL;

	t33 = (((x173*x174)%x175)/x176);

	if (t33 != 1062LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x189 = 496942661826083625LLU;
	volatile int32_t x191 = -1;
	volatile uint64_t t34 = 687328554203LLU;

	t34 = (((x189*x190)%x191)/x192);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x193 = 69150U;
	uint8_t x194 = UINT8_MAX;
	static uint64_t t35 = 9588LLU;

	t35 = (((x193*x194)%x195)/x196);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x197 = 80655U;
	int8_t x198 = -25;
	int64_t x199 = -30358186275346787LL;
	int32_t x200 = 230118;
	int64_t t36 = 7730LL;

	t36 = (((x197*x198)%x199)/x200);

	if (t36 != 18655LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x205 = INT8_MIN;
	uint32_t x206 = 97626316U;
	static int64_t x207 = INT64_MIN;
	volatile uint8_t x208 = UINT8_MAX;
	volatile int64_t t37 = -11593274129LL;

	t37 = (((x205*x206)%x207)/x208);

	if (t37 != 1524444LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x209 = 1U;
	int64_t x210 = INT64_MIN;
	uint16_t x211 = UINT16_MAX;
	volatile int32_t x212 = 116405;
	volatile int64_t t38 = -447026293967511LL;

	t38 = (((x209*x210)%x211)/x212);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x213 = 1897U;
	int16_t x214 = -1;
	volatile int8_t x215 = -1;
	int32_t x216 = -1;
	uint32_t t39 = 18006U;

	t39 = (((x213*x214)%x215)/x216);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x217 = 37;
	int16_t x219 = 132;
	volatile int8_t x220 = -1;

	t40 = (((x217*x218)%x219)/x220);

	if (t40 != -113) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x225 = 4U;
	volatile uint64_t x226 = 96245251LLU;
	uint64_t x227 = 2188918179995971679LLU;
	int64_t x228 = INT64_MIN;
	volatile uint64_t t41 = 79973276100384LLU;

	t41 = (((x225*x226)%x227)/x228);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x230 = 272U;
	volatile uint64_t x231 = UINT64_MAX;
	uint64_t x232 = 151LLU;
	uint64_t t42 = 1113360LLU;

	t42 = (((x229*x230)%x231)/x232);

	if (t42 != 28384466LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x234 = -1LL;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = 172U;
	volatile int64_t t43 = -3645385891LL;

	t43 = (((x233*x234)%x235)/x236);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x245 = 8155914275983LLU;
	uint8_t x246 = UINT8_MAX;
	int64_t x247 = 139226073620576461LL;
	int64_t x248 = INT64_MIN;
	uint64_t t44 = 3LLU;

	t44 = (((x245*x246)%x247)/x248);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x253 = INT16_MAX;
	volatile int16_t x254 = -2;
	volatile uint64_t x255 = UINT64_MAX;
	uint16_t x256 = 8470U;
	uint64_t t45 = 4256603095492547LLU;

	t45 = (((x253*x254)%x255)/x256);

	if (t45 != 2177891862303363LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x257 = UINT8_MAX;
	static int16_t x258 = INT16_MIN;
	uint32_t x260 = 70638630U;
	uint32_t t46 = 1705753U;

	t46 = (((x257*x258)%x259)/x260);

	if (t46 != 60U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x266 = 247;
	uint8_t x267 = 13U;
	static int64_t x268 = INT64_MIN;
	uint64_t t47 = 7968LLU;

	t47 = (((x265*x266)%x267)/x268);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x277 = 3LLU;
	volatile int64_t x278 = -252735439LL;
	int16_t x280 = 189;
	volatile uint64_t t48 = 15918809LLU;

	t48 = (((x277*x278)%x279)/x280);

	if (t48 != 177LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x289 = -1;
	int32_t x290 = 220;
	int32_t t49 = -201;

	t49 = (((x289*x290)%x291)/x292);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x294 = INT16_MIN;
	volatile int16_t x295 = -1;
	static volatile uint32_t x296 = 526U;

	t50 = (((x293*x294)%x295)/x296);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x297 = 1;

	t51 = (((x297*x298)%x299)/x300);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x302 = UINT32_MAX;
	uint32_t x303 = 2794141U;
	volatile uint32_t t52 = 3U;

	t52 = (((x301*x302)%x303)/x304);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x317 = -1;
	static int8_t x318 = -1;
	volatile int64_t x319 = -1LL;
	int16_t x320 = -1;
	volatile int64_t t53 = 27289060023191LL;

	t53 = (((x317*x318)%x319)/x320);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	int64_t x323 = 36961729LL;

	t54 = (((x321*x322)%x323)/x324);

	if (t54 != 171LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x325 = -2;
	uint64_t x326 = 3422011LLU;
	int8_t x328 = -22;
	volatile uint64_t t55 = 178363415842852166LLU;

	t55 = (((x325*x326)%x327)/x328);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x329 = 33954655LLU;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = INT64_MIN;

	t56 = (((x329*x330)%x331)/x332);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x338 = 7;
	int8_t x339 = INT8_MIN;
	int64_t x340 = -1LL;
	int64_t t57 = -29LL;

	t57 = (((x337*x338)%x339)/x340);

	if (t57 != -97LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x341 = 38834LLU;
	volatile int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MAX;
	int32_t x344 = -1;
	uint64_t t58 = 387482481019671831LLU;

	t58 = (((x341*x342)%x343)/x344);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x353 = 667113000U;
	int16_t x354 = INT16_MAX;
	volatile int64_t x356 = 253104553295191LL;
	volatile uint64_t t59 = 247653241197980260LLU;

	t59 = (((x353*x354)%x355)/x356);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x357 = 17386;
	volatile uint64_t x358 = 511LLU;
	int32_t x359 = INT32_MAX;
	uint64_t t60 = 273597158907LLU;

	t60 = (((x357*x358)%x359)/x360);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x361 = INT8_MAX;
	uint32_t x362 = 8532873U;
	volatile uint16_t x363 = 1676U;
	int64_t x364 = INT64_MIN;

	t61 = (((x361*x362)%x363)/x364);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x365 = UINT16_MAX;
	int16_t x366 = INT16_MAX;
	static uint64_t x367 = UINT64_MAX;
	static int64_t x368 = INT64_MIN;
	uint64_t t62 = 129175977773276LLU;

	t62 = (((x365*x366)%x367)/x368);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x369 = INT16_MIN;
	uint16_t x370 = 0U;
	static int32_t x371 = INT32_MIN;
	int32_t x372 = -1;
	volatile int32_t t63 = 928155968;

	t63 = (((x369*x370)%x371)/x372);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x373 = UINT64_MAX;
	uint16_t x374 = 10161U;
	int8_t x375 = -1;
	volatile int8_t x376 = INT8_MIN;
	static uint64_t t64 = 16643028286117LLU;

	t64 = (((x373*x374)%x375)/x376);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x377 = -1;
	volatile int16_t x378 = 1;
	volatile uint16_t x380 = 960U;
	volatile uint32_t t65 = 30629961U;

	t65 = (((x377*x378)%x379)/x380);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x381 = -1;
	uint8_t x382 = 115U;
	int16_t x383 = -12719;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t66 = 55399;

	t66 = (((x381*x382)%x383)/x384);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x389 = 7884791LL;
	static uint8_t x390 = UINT8_MAX;
	static volatile int8_t x392 = -1;
	volatile int64_t t67 = -72036212417577LL;

	t67 = (((x389*x390)%x391)/x392);

	if (t67 != -2010621705LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x393 = 27U;
	int16_t x394 = INT16_MIN;
	static volatile uint64_t t68 = 189965126259691LLU;

	t68 = (((x393*x394)%x395)/x396);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x398 = 370161427LLU;
	int16_t x399 = -12;
	int64_t x400 = 17241810726LL;

	t69 = (((x397*x398)%x399)/x400);

	if (t69 != 1069884382LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x409 = -692LL;
	uint64_t x410 = 314LLU;
	int8_t x411 = -1;
	int8_t x412 = INT8_MIN;
	uint64_t t70 = 26263538LLU;

	t70 = (((x409*x410)%x411)/x412);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x413 = 481;
	volatile uint16_t x416 = UINT16_MAX;
	static volatile int64_t t71 = -5612542179LL;

	t71 = (((x413*x414)%x415)/x416);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x421 = 424;
	int8_t x422 = INT8_MIN;
	static volatile uint32_t x423 = UINT32_MAX;
	int64_t x424 = INT64_MIN;

	t72 = (((x421*x422)%x423)/x424);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x425 = INT8_MIN;
	volatile int64_t x426 = -1LL;
	static int64_t x427 = 1LL;
	static volatile int64_t t73 = -71614983LL;

	t73 = (((x425*x426)%x427)/x428);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x429 = 427855346LL;
	int64_t x432 = INT64_MAX;
	volatile int64_t t74 = 42LL;

	t74 = (((x429*x430)%x431)/x432);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x445 = UINT32_MAX;
	int8_t x448 = INT8_MIN;
	uint32_t t75 = 1U;

	t75 = (((x445*x446)%x447)/x448);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x449 = INT8_MAX;
	volatile uint32_t x450 = UINT32_MAX;
	volatile int8_t x451 = -1;
	int16_t x452 = INT16_MAX;
	volatile uint32_t t76 = 50931133U;

	t76 = (((x449*x450)%x451)/x452);

	if (t76 != 131075U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x458 = UINT64_MAX;
	volatile uint64_t x459 = 155832LLU;
	volatile uint64_t t77 = 31474954075831LLU;

	t77 = (((x457*x458)%x459)/x460);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x462 = INT8_MAX;
	volatile int64_t x463 = INT64_MIN;
	volatile int64_t x464 = INT64_MIN;
	volatile int64_t t78 = 54844460LL;

	t78 = (((x461*x462)%x463)/x464);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x465 = -3;
	int16_t x466 = 104;
	uint64_t x467 = 1002619283070LLU;
	uint8_t x468 = UINT8_MAX;

	t79 = (((x465*x466)%x467)/x468);

	if (t79 != 216957465LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x473 = -1;
	uint16_t x474 = UINT16_MAX;
	uint16_t x475 = UINT16_MAX;
	int64_t x476 = -1LL;
	volatile int64_t t80 = 144632304844946LL;

	t80 = (((x473*x474)%x475)/x476);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x477 = -1LL;
	uint32_t x478 = UINT32_MAX;
	static volatile int8_t x480 = -2;
	static volatile int64_t t81 = -1654932385976973443LL;

	t81 = (((x477*x478)%x479)/x480);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x481 = 450;
	volatile int16_t x482 = INT16_MAX;
	uint64_t x483 = 55683LLU;
	uint8_t x484 = 1U;
	volatile uint64_t t82 = 115948924874193LLU;

	t82 = (((x481*x482)%x483)/x484);

	if (t82 != 44838LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x489 = 0U;
	int64_t x490 = INT64_MAX;
	static uint16_t x491 = 20U;
	int64_t x492 = -1LL;
	int64_t t83 = 23LL;

	t83 = (((x489*x490)%x491)/x492);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x505 = 0;
	int32_t x507 = INT32_MAX;
	int64_t x508 = INT64_MIN;
	volatile int64_t t84 = 118LL;

	t84 = (((x505*x506)%x507)/x508);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x513 = 0;
	int32_t x515 = 34;
	static volatile int16_t x516 = INT16_MIN;
	static volatile int32_t t85 = -5846;

	t85 = (((x513*x514)%x515)/x516);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x521 = -1;
	uint64_t x522 = 32027037399669LLU;
	uint32_t x523 = 211624839U;
	int8_t x524 = -1;

	t86 = (((x521*x522)%x523)/x524);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x525 = INT64_MAX;
	uint64_t x526 = 267386683836464135LLU;
	static uint8_t x528 = 59U;
	uint64_t t87 = 6896866279LLU;

	t87 = (((x525*x526)%x527)/x528);

	if (t87 != 151796361915564604LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x529 = INT8_MAX;
	int32_t x531 = INT32_MIN;
	volatile int32_t t88 = -2180494;

	t88 = (((x529*x530)%x531)/x532);

	if (t88 != -6) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x534 = -7;
	static volatile uint8_t x535 = 6U;
	uint64_t x536 = UINT64_MAX;

	t89 = (((x533*x534)%x535)/x536);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x541 = INT16_MIN;
	int16_t x543 = -7829;
	int64_t t90 = 2645512LL;

	t90 = (((x541*x542)%x543)/x544);

	if (t90 != 1452LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x553 = -1;
	int8_t x554 = -3;
	int64_t x555 = INT64_MAX;
	static int32_t x556 = INT32_MIN;
	volatile int64_t t91 = 1LL;

	t91 = (((x553*x554)%x555)/x556);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x557 = INT16_MAX;
	uint32_t x560 = 1U;

	t92 = (((x557*x558)%x559)/x560);

	if (t92 != 40237876U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x561 = UINT16_MAX;
	int16_t x563 = INT16_MAX;
	int32_t x564 = INT32_MAX;
	volatile int32_t t93 = 1081;

	t93 = (((x561*x562)%x563)/x564);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x566 = -1;
	int16_t x567 = INT16_MIN;
	volatile int64_t t94 = -16748590777397103LL;

	t94 = (((x565*x566)%x567)/x568);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x569 = UINT64_MAX;
	uint32_t x570 = 154U;

	t95 = (((x569*x570)%x571)/x572);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x578 = 1330407U;
	volatile int16_t x579 = 3018;
	static int16_t x580 = INT16_MIN;
	static uint32_t t96 = 0U;

	t96 = (((x577*x578)%x579)/x580);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x585 = -1LL;
	volatile int8_t x586 = 4;
	uint8_t x587 = 1U;
	int64_t x588 = -6459477LL;
	static int64_t t97 = 328521110LL;

	t97 = (((x585*x586)%x587)/x588);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x593 = -1;
	static uint32_t x594 = 139082799U;
	static int16_t x595 = 74;
	static uint16_t x596 = 872U;
	static uint32_t t98 = 12727626U;

	t98 = (((x593*x594)%x595)/x596);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x601 = INT32_MIN;
	uint64_t x602 = 836641LLU;
	static uint16_t x603 = 2363U;
	volatile uint64_t t99 = 7143043051595626LLU;

	t99 = (((x601*x602)%x603)/x604);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

