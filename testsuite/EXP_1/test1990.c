#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
uint8_t x11 = 22U;
uint16_t x15 = 2038U;
int32_t x23 = 28166157;
uint64_t t6 = 1566631919338LLU;
volatile uint16_t x35 = 4410U;
int8_t x47 = 0;
uint16_t x52 = 995U;
int64_t x63 = -1LL;
int64_t x68 = INT64_MAX;
uint64_t x86 = 9173025265650840533LLU;
int8_t x92 = -1;
int64_t x95 = INT64_MIN;
int32_t x97 = INT32_MIN;
static uint16_t x100 = 328U;
uint64_t x103 = 609138636197LLU;
int8_t x108 = INT8_MIN;
uint64_t x116 = UINT64_MAX;
static uint64_t x117 = 2556LLU;
volatile int64_t x127 = -1LL;
static int64_t t27 = 667038716112315910LL;
uint64_t t28 = 3323560744LLU;
uint8_t x134 = 1U;
int32_t x136 = -1;
volatile int32_t t30 = 49871389;
static volatile uint32_t t31 = 39527U;
volatile int64_t t32 = 259833051914504LL;
uint8_t x152 = 0U;
uint64_t t34 = 31LLU;
int8_t x158 = -1;
static volatile uint32_t t35 = 934346U;
int64_t x174 = INT64_MIN;
int16_t x175 = INT16_MIN;
static uint16_t x178 = 87U;
uint32_t x183 = 9819U;
int64_t x188 = -1LL;
int64_t x196 = -1LL;
uint16_t x198 = 1322U;
int16_t x203 = -1;
int8_t x204 = INT8_MIN;
int32_t t45 = 936;
int32_t x214 = -27;
volatile int64_t t48 = 382787125536LL;
int64_t t49 = 3169846567661936224LL;
int8_t x227 = -1;
static int32_t t50 = 47804888;
int64_t t51 = -1100914768992468LL;
int64_t x235 = INT64_MIN;
int16_t x239 = INT16_MIN;
static int16_t x240 = INT16_MAX;
static volatile int64_t x245 = INT64_MAX;
int64_t x248 = -232913382320637LL;
int8_t x251 = -1;
uint8_t x259 = 1U;
int16_t x263 = INT16_MIN;
uint64_t t59 = 447LLU;
volatile uint64_t x266 = 3179LLU;
int8_t x267 = 5;
int64_t x269 = -1LL;
volatile int16_t x272 = 102;
uint16_t x276 = 7278U;
int8_t x279 = INT8_MAX;
uint64_t x283 = 3527948LLU;
uint64_t t64 = 379783106630180LLU;
int32_t t65 = -7;
int64_t x290 = -14LL;
uint64_t t66 = 205345502579126LLU;
int16_t x300 = INT16_MIN;
int16_t x311 = INT16_MIN;
int64_t t71 = 30752402LL;
int16_t x315 = INT16_MIN;
volatile int32_t x318 = INT32_MIN;
uint32_t x319 = 943U;
int32_t x321 = 11379;
static int64_t x331 = INT64_MIN;
int16_t x337 = -1;
uint8_t x339 = 1U;
static uint16_t x340 = 1U;
int8_t x341 = INT8_MIN;
volatile uint8_t x343 = UINT8_MAX;
static int64_t x349 = -1LL;
int16_t x365 = INT16_MAX;
uint32_t t84 = 847597U;
int64_t x370 = -3680281113087194404LL;
uint64_t x372 = UINT64_MAX;
static uint64_t t85 = 6166505677984196615LLU;
static uint16_t x384 = 17882U;
static uint16_t x385 = UINT16_MAX;
int8_t x390 = INT8_MIN;
volatile uint8_t x392 = 0U;
int32_t x393 = 3819226;
uint32_t x394 = 36397557U;
int16_t x396 = INT16_MIN;
static volatile uint8_t x412 = 1U;
uint16_t x414 = 38U;
volatile uint32_t t95 = 144977827U;
uint16_t x425 = 6330U;
uint32_t x434 = UINT32_MAX;
volatile uint8_t x435 = 17U;
uint16_t x437 = 2293U;
static volatile int16_t x440 = 4050;


void f0(void) {
	static int16_t x1 = 8;
	volatile uint64_t x2 = 872079LLU;
	uint32_t x3 = 0U;
	int8_t x4 = -1;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (((x1|x2)&x3)+x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int8_t x7 = -1;
	uint8_t x8 = UINT8_MAX;
	volatile int64_t t1 = 761430364LL;

	t1 = (((x5|x6)&x7)+x8);

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 18U;
	int8_t x10 = INT8_MIN;
	volatile uint8_t x12 = 0U;
	int32_t t2 = -3651;

	t2 = (((x9|x10)&x11)+x12);

	if (t2 != 18) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x13 = 66LLU;
	int32_t x14 = -556;
	static uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t3 = 117398LLU;

	t3 = (((x13|x14)&x15)+x16);

	if (t3 != 1493LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x18 = INT64_MIN;
	int8_t x19 = 13;
	static uint64_t x20 = 63747490749294918LLU;
	volatile uint64_t t4 = 109LLU;

	t4 = (((x17|x18)&x19)+x20);

	if (t4 != 63747490749294931LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	int8_t x22 = INT8_MAX;
	int64_t x24 = INT64_MIN;
	static int64_t t5 = -35003763780606LL;

	t5 = (((x21|x22)&x23)+x24);

	if (t5 != -9223372036826609651LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	static int8_t x26 = INT8_MIN;
	static uint64_t x27 = 6660162409679LLU;
	static int64_t x28 = 256918LL;

	t6 = (((x25|x26)&x27)+x28);

	if (t6 != 6660162666597LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 180LLU;
	static int16_t x30 = 1;
	uint16_t x31 = 11769U;
	uint32_t x32 = 204346690U;
	uint64_t t7 = 35062065054122926LLU;

	t7 = (((x29|x30)&x31)+x32);

	if (t7 != 204346867LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	int16_t x34 = 3355;
	uint8_t x36 = 75U;
	int32_t t8 = -53980633;

	t8 = (((x33|x34)&x35)+x36);

	if (t8 != 4453) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = 6LLU;
	int64_t x40 = -1LL;
	volatile uint64_t t9 = 5LLU;

	t9 = (((x37|x38)&x39)+x40);

	if (t9 != 5LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 510U;
	int64_t x42 = INT64_MIN;
	int32_t x43 = -1;
	static uint64_t x44 = 100242668940LLU;
	uint64_t t10 = 49581324850658828LLU;

	t10 = (((x41|x42)&x43)+x44);

	if (t10 != 9223372137097445258LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 36524U;
	uint64_t x46 = UINT64_MAX;
	int64_t x48 = INT64_MAX;
	uint64_t t11 = 8095562104812LLU;

	t11 = (((x45|x46)&x47)+x48);

	if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 308U;
	uint64_t x50 = 6243231598786050168LLU;
	uint16_t x51 = 11607U;
	volatile uint64_t t12 = 2973488LLU;

	t12 = (((x49|x50)&x51)+x52);

	if (t12 != 11575LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	volatile uint16_t x54 = 10445U;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -12;

	t13 = (((x53|x54)&x55)+x56);

	if (t13 != -22400) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 11;
	volatile int8_t x58 = INT8_MIN;
	int32_t x59 = 991833;
	uint16_t x60 = UINT16_MAX;
	static volatile int32_t t14 = 257;

	t14 = (((x57|x58)&x59)+x60);

	if (t14 != 1057288) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	uint64_t x62 = 161943149123104190LLU;
	static volatile uint8_t x64 = 0U;
	uint64_t t15 = UINT64_MAX;

	t15 = (((x61|x62)&x63)+x64);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 48U;
	static volatile int64_t x66 = INT64_MIN;
	static volatile int32_t x67 = INT32_MIN;
	int64_t t16 = -1LL;

	t16 = (((x65|x66)&x67)+x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x77 = UINT16_MAX;
	static int32_t x78 = INT32_MIN;
	int16_t x79 = 0;
	int32_t x80 = -963221;
	int32_t t17 = -275;

	t17 = (((x77|x78)&x79)+x80);

	if (t17 != -963221) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x85 = 44912U;
	uint32_t x87 = UINT32_MAX;
	uint8_t x88 = UINT8_MAX;
	volatile uint64_t t18 = 41LLU;

	t18 = (((x85|x86)&x87)+x88);

	if (t18 != 3670917364LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = 0;
	int8_t x90 = -28;
	int8_t x91 = -3;
	volatile int32_t t19 = 4151569;

	t19 = (((x89|x90)&x91)+x92);

	if (t19 != -29) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -1;
	uint64_t x94 = UINT64_MAX;
	volatile int32_t x96 = -247192414;
	volatile uint64_t t20 = 327LLU;

	t20 = (((x93|x94)&x95)+x96);

	if (t20 != 9223372036607583394LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x98 = 1;
	volatile int16_t x99 = INT16_MAX;
	volatile int32_t t21 = -11036139;

	t21 = (((x97|x98)&x99)+x100);

	if (t21 != 329) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = -87420061LL;
	int64_t x102 = INT64_MIN;
	int64_t x104 = INT64_MAX;
	uint64_t t22 = 31498355314513772LLU;

	t22 = (((x101|x102)&x103)+x104);

	if (t22 != 9223372645973102880LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = -1LL;
	uint64_t x106 = 7160068413592474LLU;
	volatile int16_t x107 = 221;
	volatile uint64_t t23 = 6697LLU;

	t23 = (((x105|x106)&x107)+x108);

	if (t23 != 93LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x109 = INT16_MIN;
	volatile int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	uint8_t x112 = 0U;
	int32_t t24 = -232920558;

	t24 = (((x109|x110)&x111)+x112);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = UINT8_MAX;
	static int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	static volatile uint64_t t25 = 1325117LLU;

	t25 = (((x113|x114)&x115)+x116);

	if (t25 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x118 = 502829111U;
	int16_t x119 = -57;
	uint32_t x120 = 5U;
	static uint64_t t26 = 0LLU;

	t26 = (((x117|x118)&x119)+x120);

	if (t26 != 502831564LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = INT32_MAX;
	static uint16_t x126 = 4U;
	int16_t x128 = INT16_MAX;

	t27 = (((x125|x126)&x127)+x128);

	if (t27 != 2147516414LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = UINT64_MAX;
	int8_t x130 = -7;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = 10;

	t28 = (((x129|x130)&x131)+x132);

	if (t28 != 265LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = 0;
	int64_t x135 = INT64_MIN;
	static volatile int64_t t29 = 3795886267285938852LL;

	t29 = (((x133|x134)&x135)+x136);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MAX;
	int8_t x139 = -1;
	int16_t x140 = INT16_MIN;

	t30 = (((x137|x138)&x139)+x140);

	if (t30 != -32769) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 45994363U;
	static int32_t x142 = INT32_MIN;
	int8_t x143 = 1;
	uint32_t x144 = 2568U;

	t31 = (((x141|x142)&x143)+x144);

	if (t31 != 2569U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = 7948;
	uint8_t x146 = 7U;
	static int32_t x147 = 318790;
	static int64_t x148 = INT64_MIN;

	t32 = (((x145|x146)&x147)+x148);

	if (t32 != -9223372036854768378LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x149 = INT32_MAX;
	uint16_t x150 = UINT16_MAX;
	volatile int64_t x151 = -1LL;
	static volatile int64_t t33 = -8079650559LL;

	t33 = (((x149|x150)&x151)+x152);

	if (t33 != 2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x153 = 32LLU;
	int8_t x154 = INT8_MAX;
	int8_t x155 = -1;
	static int16_t x156 = 1018;

	t34 = (((x153|x154)&x155)+x156);

	if (t34 != 1145LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x157 = INT8_MAX;
	uint32_t x159 = 240U;
	static uint8_t x160 = UINT8_MAX;

	t35 = (((x157|x158)&x159)+x160);

	if (t35 != 495U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = INT32_MIN;
	uint64_t x163 = UINT64_MAX;
	static int16_t x164 = INT16_MAX;
	volatile uint64_t t36 = 8469868642428675966LLU;

	t36 = (((x161|x162)&x163)+x164);

	if (t36 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MAX;
	int16_t x170 = INT16_MIN;
	int16_t x171 = -1;
	int8_t x172 = INT8_MAX;
	volatile int32_t t37 = -1439055;

	t37 = (((x169|x170)&x171)+x172);

	if (t37 != 126) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = UINT64_MAX;
	uint16_t x176 = 162U;
	static uint64_t t38 = 0LLU;

	t38 = (((x173|x174)&x175)+x176);

	if (t38 != 18446744073709519010LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MAX;
	static int64_t x179 = -1LL;
	int16_t x180 = 0;
	int64_t t39 = INT64_MAX;

	t39 = (((x177|x178)&x179)+x180);

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x181 = INT64_MIN;
	int8_t x182 = -7;
	volatile int8_t x184 = -1;
	static volatile int64_t t40 = -2850034130442178LL;

	t40 = (((x181|x182)&x183)+x184);

	if (t40 != 9816LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x185 = -1;
	uint32_t x186 = UINT32_MAX;
	int8_t x187 = INT8_MIN;
	static int64_t t41 = 34099417072318245LL;

	t41 = (((x185|x186)&x187)+x188);

	if (t41 != 4294967167LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x189 = -1LL;
	int16_t x190 = INT16_MAX;
	volatile int64_t x191 = INT64_MIN;
	int64_t x192 = 69708884137565LL;
	volatile int64_t t42 = 210845LL;

	t42 = (((x189|x190)&x191)+x192);

	if (t42 != -9223302327970638243LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = 1LL;
	int32_t x194 = INT32_MIN;
	int32_t x195 = INT32_MIN;
	static volatile int64_t t43 = 109182169632LL;

	t43 = (((x193|x194)&x195)+x196);

	if (t43 != -2147483649LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = 1;
	uint16_t x199 = 661U;
	int32_t x200 = 0;
	volatile int32_t t44 = 46;

	t44 = (((x197|x198)&x199)+x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x201 = UINT16_MAX;
	int8_t x202 = -1;

	t45 = (((x201|x202)&x203)+x204);

	if (t45 != -129) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x209 = INT8_MIN;
	int16_t x210 = -1;
	static uint16_t x211 = 797U;
	volatile int32_t x212 = 203704;
	int32_t t46 = 0;

	t46 = (((x209|x210)&x211)+x212);

	if (t46 != 204501) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x213 = -21;
	uint16_t x215 = 0U;
	uint32_t x216 = 2U;
	static uint32_t t47 = 12480086U;

	t47 = (((x213|x214)&x215)+x216);

	if (t47 != 2U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = INT64_MIN;
	uint16_t x218 = 17717U;
	volatile uint16_t x219 = 3622U;
	volatile int16_t x220 = -1;

	t48 = (((x217|x218)&x219)+x220);

	if (t48 != 1059LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x221 = INT64_MAX;
	uint8_t x222 = UINT8_MAX;
	volatile int16_t x223 = INT16_MIN;
	uint32_t x224 = 12U;

	t49 = (((x221|x222)&x223)+x224);

	if (t49 != 9223372036854743052LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = -104426502;
	static int16_t x226 = -83;
	int16_t x228 = -1;

	t50 = (((x225|x226)&x227)+x228);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = 2U;
	static volatile int32_t x230 = INT32_MAX;
	int64_t x231 = INT64_MIN;
	uint8_t x232 = UINT8_MAX;

	t51 = (((x229|x230)&x231)+x232);

	if (t51 != 255LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = -1;
	int64_t x234 = -1LL;
	uint32_t x236 = UINT32_MAX;
	int64_t t52 = 24168632004178217LL;

	t52 = (((x233|x234)&x235)+x236);

	if (t52 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x237 = 0U;
	uint8_t x238 = 13U;
	int32_t t53 = 372558879;

	t53 = (((x237|x238)&x239)+x240);

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = 3U;
	int8_t x242 = -1;
	int16_t x243 = -1;
	uint8_t x244 = 37U;
	volatile int32_t t54 = 7;

	t54 = (((x241|x242)&x243)+x244);

	if (t54 != 36) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x246 = INT8_MAX;
	volatile uint16_t x247 = 29U;
	int64_t t55 = -375806612007661751LL;

	t55 = (((x245|x246)&x247)+x248);

	if (t55 != -232913382320608LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x249 = INT16_MIN;
	int64_t x250 = 1851558LL;
	uint32_t x252 = 328197U;
	int64_t t56 = -12490504439302LL;

	t56 = (((x249|x250)&x251)+x252);

	if (t56 != 311979LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = -1LL;
	uint32_t x254 = 261603U;
	uint32_t x255 = UINT32_MAX;
	volatile int16_t x256 = 1;
	int64_t t57 = 356333587236LL;

	t57 = (((x253|x254)&x255)+x256);

	if (t57 != 4294967296LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x257 = 6359822U;
	static int8_t x258 = 13;
	int8_t x260 = INT8_MAX;
	uint32_t t58 = 20368502U;

	t58 = (((x257|x258)&x259)+x260);

	if (t58 != 128U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x261 = 107LLU;
	static volatile uint32_t x262 = 5519971U;
	int8_t x264 = INT8_MAX;

	t59 = (((x261|x262)&x263)+x264);

	if (t59 != 5505151LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = INT32_MAX;
	int16_t x268 = INT16_MAX;
	uint64_t t60 = 114128023145LLU;

	t60 = (((x265|x266)&x267)+x268);

	if (t60 != 32772LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x270 = UINT64_MAX;
	static uint64_t x271 = UINT64_MAX;
	uint64_t t61 = 2080602754689LLU;

	t61 = (((x269|x270)&x271)+x272);

	if (t61 != 101LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = -195;
	static uint16_t x274 = 572U;
	int64_t x275 = -371580498017LL;
	volatile int64_t t62 = 5372806LL;

	t62 = (((x273|x274)&x275)+x276);

	if (t62 != -371580490869LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x277 = UINT8_MAX;
	uint64_t x278 = UINT64_MAX;
	static int16_t x280 = 5401;
	static volatile uint64_t t63 = 898982241803LLU;

	t63 = (((x277|x278)&x279)+x280);

	if (t63 != 5528LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = -34327042;
	int32_t x282 = INT32_MIN;
	uint64_t x284 = 12LLU;

	t64 = (((x281|x282)&x283)+x284);

	if (t64 != 3413272LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = -6278;
	int32_t x286 = -1;
	volatile uint16_t x287 = UINT16_MAX;
	static int16_t x288 = -1;

	t65 = (((x285|x286)&x287)+x288);

	if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x289 = UINT64_MAX;
	uint8_t x291 = UINT8_MAX;
	int8_t x292 = 2;

	t66 = (((x289|x290)&x291)+x292);

	if (t66 != 257LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MIN;
	static uint64_t x294 = 248110748LLU;
	int64_t x295 = 41830035781369LL;
	static uint8_t x296 = UINT8_MAX;
	static uint64_t t67 = 2320304LLU;

	t67 = (((x293|x294)&x295)+x296);

	if (t67 != 41830035773335LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x297 = INT8_MIN;
	static volatile int16_t x298 = INT16_MAX;
	volatile int16_t x299 = -1;
	volatile int32_t t68 = 167662;

	t68 = (((x297|x298)&x299)+x300);

	if (t68 != -32769) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x301 = INT16_MIN;
	int64_t x302 = INT64_MIN;
	int16_t x303 = -1;
	uint8_t x304 = 49U;
	int64_t t69 = -46LL;

	t69 = (((x301|x302)&x303)+x304);

	if (t69 != -32719LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = 69U;
	static int32_t x307 = -10456764;
	volatile uint64_t x308 = 156586098LLU;
	volatile uint64_t t70 = 680491494245LLU;

	t70 = (((x305|x306)&x307)+x308);

	if (t70 != 146129334LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x309 = INT64_MIN;
	volatile uint8_t x310 = 28U;
	static int64_t x312 = 134451486813LL;

	t71 = (((x309|x310)&x311)+x312);

	if (t71 != -9223371902403288995LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x313 = UINT8_MAX;
	volatile int8_t x314 = INT8_MAX;
	int8_t x316 = -1;
	int32_t t72 = -14521;

	t72 = (((x313|x314)&x315)+x316);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = INT8_MAX;
	uint8_t x320 = UINT8_MAX;
	static volatile uint32_t t73 = 624U;

	t73 = (((x317|x318)&x319)+x320);

	if (t73 != 302U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x322 = INT8_MIN;
	volatile uint32_t x323 = UINT32_MAX;
	int8_t x324 = INT8_MIN;
	static volatile uint32_t t74 = 8189U;

	t74 = (((x321|x322)&x323)+x324);

	if (t74 != 4294967155U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = -1;
	int32_t x327 = 498041330;
	static int64_t x328 = INT64_MIN;
	static volatile int64_t t75 = -978570698192847946LL;

	t75 = (((x325|x326)&x327)+x328);

	if (t75 != -9223372036356734478LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = 1;
	static int8_t x330 = INT8_MAX;
	uint8_t x332 = 76U;
	volatile int64_t t76 = 481197731032743097LL;

	t76 = (((x329|x330)&x331)+x332);

	if (t76 != 76LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x333 = INT64_MAX;
	int8_t x334 = -1;
	volatile uint16_t x335 = 1981U;
	int8_t x336 = INT8_MIN;
	int64_t t77 = 34258625062129731LL;

	t77 = (((x333|x334)&x335)+x336);

	if (t77 != 1853LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x338 = -15;
	int32_t t78 = -2;

	t78 = (((x337|x338)&x339)+x340);

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x342 = INT32_MAX;
	static uint16_t x344 = 0U;
	static int32_t t79 = -311259;

	t79 = (((x341|x342)&x343)+x344);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x345 = INT16_MIN;
	volatile uint8_t x346 = 33U;
	static int32_t x347 = -1;
	uint16_t x348 = 2595U;
	volatile int32_t t80 = 677838;

	t80 = (((x345|x346)&x347)+x348);

	if (t80 != -30140) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x350 = 6U;
	volatile int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;
	static int64_t t81 = 143831365LL;

	t81 = (((x349|x350)&x351)+x352);

	if (t81 != -2147483776LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = INT64_MAX;
	static uint64_t x354 = 882163571457984LLU;
	static int8_t x355 = INT8_MIN;
	int64_t x356 = 11118LL;
	uint64_t t82 = 57585807065LLU;

	t82 = (((x353|x354)&x355)+x356);

	if (t82 != 9223372036854786798LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x357 = 11297368758955LLU;
	int64_t x358 = INT64_MIN;
	static int16_t x359 = 0;
	static volatile int64_t x360 = INT64_MIN;
	uint64_t t83 = 27891716080418802LLU;

	t83 = (((x357|x358)&x359)+x360);

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x366 = 480140055U;
	uint16_t x367 = 16U;
	int8_t x368 = INT8_MIN;

	t84 = (((x365|x366)&x367)+x368);

	if (t84 != 4294967184U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x369 = UINT32_MAX;
	int32_t x371 = INT32_MIN;

	t85 = (((x369|x370)&x371)+x372);

	if (t85 != 14766462960138190847LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x377 = -18;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = 3779LLU;
	static uint32_t x380 = 623281U;
	uint64_t t86 = 45833337LLU;

	t86 = (((x377|x378)&x379)+x380);

	if (t86 != 627059LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x381 = INT16_MAX;
	volatile int16_t x382 = -23;
	int16_t x383 = -1;
	volatile int32_t t87 = 39;

	t87 = (((x381|x382)&x383)+x384);

	if (t87 != 17881) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x386 = INT16_MIN;
	volatile int32_t x387 = INT32_MIN;
	int32_t x388 = 11175;
	int32_t t88 = 334907603;

	t88 = (((x385|x386)&x387)+x388);

	if (t88 != -2147472473) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = -13;
	int16_t x391 = INT16_MAX;
	int32_t t89 = 3942923;

	t89 = (((x389|x390)&x391)+x392);

	if (t89 != 32755) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x395 = -1;
	static uint32_t t90 = 3938427U;

	t90 = (((x393|x394)&x395)+x396);

	if (t90 != 37414911U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = 101099499954LLU;
	static int64_t x398 = -1LL;
	volatile int16_t x399 = INT16_MIN;
	static uint64_t x400 = UINT64_MAX;
	volatile uint64_t t91 = 16518399116LLU;

	t91 = (((x397|x398)&x399)+x400);

	if (t91 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x405 = INT16_MAX;
	int8_t x406 = -1;
	int32_t x407 = 1;
	int16_t x408 = INT16_MAX;
	volatile int32_t t92 = 2828;

	t92 = (((x405|x406)&x407)+x408);

	if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MIN;
	uint8_t x410 = 0U;
	static volatile int64_t x411 = INT64_MIN;
	int64_t t93 = 8701275148136LL;

	t93 = (((x409|x410)&x411)+x412);

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x413 = INT32_MIN;
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = INT32_MIN;
	volatile uint64_t t94 = 1027670940702512818LLU;

	t94 = (((x413|x414)&x415)+x416);

	if (t94 != 18446744069414584358LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x421 = 3U;
	int32_t x422 = 2747001;
	static uint16_t x423 = 332U;
	volatile uint32_t x424 = 3U;

	t95 = (((x421|x422)&x423)+x424);

	if (t95 != 75U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x426 = INT32_MIN;
	uint8_t x427 = 0U;
	int8_t x428 = 4;
	int32_t t96 = 526794189;

	t96 = (((x425|x426)&x427)+x428);

	if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x429 = UINT64_MAX;
	int64_t x430 = 1LL;
	int32_t x431 = 223371;
	static uint16_t x432 = UINT16_MAX;
	uint64_t t97 = 125219LLU;

	t97 = (((x429|x430)&x431)+x432);

	if (t97 != 288906LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = -1;
	uint64_t x436 = 0LLU;
	volatile uint64_t t98 = 10522LLU;

	t98 = (((x433|x434)&x435)+x436);

	if (t98 != 17LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x438 = 0U;
	uint64_t x439 = 519649LLU;
	uint64_t t99 = 7425971208588899LLU;

	t99 = (((x437|x438)&x439)+x440);

	if (t99 != 6323LLU) { NG(); } else { ; }
	
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

