#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MAX;
int64_t x15 = INT64_MIN;
uint16_t x20 = UINT16_MAX;
volatile int32_t t3 = -1629;
static volatile int16_t x22 = INT16_MAX;
static volatile int32_t t6 = 592;
uint16_t x34 = 9111U;
static volatile int32_t t7 = 259837;
int8_t x38 = INT8_MIN;
static volatile int32_t t8 = -3059680;
int64_t x43 = -1LL;
static volatile int64_t x54 = 5255558795959LL;
int64_t x59 = -497896379948769401LL;
uint64_t x66 = 6LLU;
volatile int32_t t14 = 7;
uint8_t x74 = UINT8_MAX;
int64_t x75 = -1LL;
int16_t x80 = -1;
int64_t x84 = INT64_MAX;
uint32_t x93 = 48343151U;
int8_t x99 = INT8_MIN;
static volatile int32_t t21 = 1161655;
uint64_t x116 = UINT64_MAX;
volatile uint8_t x117 = 30U;
int16_t x125 = -3265;
volatile uint64_t x126 = 566988707695475602LLU;
int8_t x129 = INT8_MAX;
static int32_t x138 = INT32_MAX;
uint64_t x142 = UINT64_MAX;
volatile int32_t t28 = 2040;
int8_t x150 = INT8_MAX;
static int16_t x158 = -1;
static int64_t x159 = INT64_MIN;
uint16_t x163 = 123U;
int32_t t32 = 221938;
int64_t x171 = INT64_MIN;
int64_t x172 = INT64_MIN;
uint64_t x173 = 1031LLU;
int64_t x177 = INT64_MAX;
int16_t x184 = INT16_MAX;
static volatile int32_t t37 = 425623;
static volatile int32_t t38 = -250715;
int8_t x192 = -1;
static volatile int64_t x196 = -1LL;
uint8_t x197 = 18U;
int64_t x212 = -82243187703LL;
int64_t x220 = INT64_MIN;
int32_t t46 = 1801;
uint8_t x223 = 91U;
volatile int32_t t47 = -313288;
volatile int32_t t48 = -344;
int64_t x232 = -1LL;
int32_t x236 = INT32_MIN;
int16_t x241 = -1;
int32_t x246 = 9;
static int64_t x248 = -2707656562714917089LL;
static int32_t x250 = -1;
uint16_t x251 = UINT16_MAX;
static volatile int32_t x255 = INT32_MIN;
int8_t x256 = -30;
int8_t x258 = 7;
volatile uint64_t x260 = UINT64_MAX;
volatile int32_t x277 = -1;
uint16_t x280 = 2U;
volatile int32_t t58 = -44145897;
int8_t x290 = INT8_MIN;
static int64_t x302 = -113420401315LL;
static volatile uint8_t x308 = 40U;
int32_t x314 = -7;
uint32_t x318 = 11U;
volatile int32_t t66 = 11;
static volatile int16_t x328 = INT16_MIN;
uint64_t x343 = UINT64_MAX;
int32_t x349 = INT32_MAX;
volatile int32_t t74 = -30022967;
int8_t x356 = INT8_MIN;
static int32_t x358 = INT32_MIN;
int16_t x365 = -14;
int16_t x368 = INT16_MIN;
int32_t t78 = -229772967;
static volatile int32_t t81 = -572;
uint32_t x386 = UINT32_MAX;
static volatile int32_t t82 = -65691;
int32_t x389 = INT32_MIN;
volatile int32_t t83 = -193093;
int32_t t85 = 14544433;
uint32_t x417 = 175229U;
int16_t x424 = 2;
int16_t x430 = INT16_MIN;
volatile int32_t t93 = 113386634;
static int64_t x437 = -1LL;
int8_t x441 = INT8_MAX;
uint32_t x448 = UINT32_MAX;
int8_t x452 = INT8_MIN;
static volatile int64_t x454 = INT64_MIN;
int64_t x456 = -1LL;
int32_t t98 = 111;
uint16_t x460 = UINT16_MAX;


void f0(void) {
	static int16_t x6 = 10763;
	uint8_t x7 = UINT8_MAX;
	int32_t x8 = 1051;
	volatile int32_t t0 = -116;

	t0 = (((x5+x6)%x7)<x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x9 = -1316;
	int32_t x10 = -59;
	int32_t x11 = INT32_MIN;
	static uint32_t x12 = 43101467U;
	int32_t t1 = -1994;

	t1 = (((x9+x10)%x11)<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = 2923U;
	volatile int64_t x14 = INT64_MIN;
	volatile int32_t x16 = 102995232;
	int32_t t2 = -7243;

	t2 = (((x13+x14)%x15)<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 12056LLU;
	uint32_t x18 = UINT32_MAX;
	static int32_t x19 = 799263;

	t3 = (((x17+x18)%x19)<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 1484U;
	int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MAX;
	int32_t t4 = -2;

	t4 = (((x21+x22)%x23)<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = -27041;
	uint32_t x26 = 1151294144U;
	int16_t x27 = INT16_MIN;
	int32_t x28 = -1;
	int32_t t5 = 173511;

	t5 = (((x25+x26)%x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 740010U;
	int16_t x30 = 36;
	volatile int32_t x31 = INT32_MIN;
	static volatile int32_t x32 = -6793516;

	t6 = (((x29+x30)%x31)<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	int64_t x35 = INT64_MAX;
	int64_t x36 = INT64_MIN;

	t7 = (((x33+x34)%x35)<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	uint8_t x39 = UINT8_MAX;
	int16_t x40 = INT16_MAX;

	t8 = (((x37+x38)%x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 15085879897237LL;
	volatile int16_t x42 = 4851;
	int64_t x44 = 1LL;
	int32_t t9 = 378108768;

	t9 = (((x41+x42)%x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 3U;
	int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	uint16_t x52 = 10U;
	volatile int32_t t10 = -53608445;

	t10 = (((x49+x50)%x51)<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int64_t x55 = -2658LL;
	static uint32_t x56 = 15320907U;
	static volatile int32_t t11 = -3;

	t11 = (((x53+x54)%x55)<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = UINT64_MAX;
	int8_t x58 = 2;
	int32_t x60 = -120257151;
	volatile int32_t t12 = 22;

	t12 = (((x57+x58)%x59)<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	static uint32_t x67 = UINT32_MAX;
	int32_t x68 = INT32_MAX;
	volatile int32_t t13 = -6509;

	t13 = (((x65+x66)%x67)<x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = INT8_MAX;
	volatile int32_t x70 = INT32_MIN;
	volatile uint8_t x71 = 12U;
	uint64_t x72 = UINT64_MAX;

	t14 = (((x69+x70)%x71)<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 5U;
	volatile int64_t x76 = INT64_MAX;
	int32_t t15 = 86580459;

	t15 = (((x73+x74)%x75)<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = -1LL;
	uint64_t x79 = 3233382949354LLU;
	int32_t t16 = 1915356;

	t16 = (((x77+x78)%x79)<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MIN;
	volatile int32_t x82 = -7;
	int16_t x83 = 1;
	volatile int32_t t17 = 4;

	t17 = (((x81+x82)%x83)<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = UINT64_MAX;
	uint16_t x86 = UINT16_MAX;
	uint8_t x87 = 5U;
	static int8_t x88 = INT8_MIN;
	volatile int32_t t18 = -6316889;

	t18 = (((x85+x86)%x87)<x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MAX;
	int16_t x96 = -1558;
	volatile int32_t t19 = 5924358;

	t19 = (((x93+x94)%x95)<x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x97 = 106;
	int16_t x98 = INT16_MIN;
	uint64_t x100 = 1950813890277898LLU;
	static volatile int32_t t20 = 29;

	t20 = (((x97+x98)%x99)<x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1LL;
	static int32_t x102 = -13857113;
	int8_t x103 = -1;
	int64_t x104 = -257605LL;

	t21 = (((x101+x102)%x103)<x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MIN;
	uint8_t x115 = 16U;
	int32_t t22 = 176809;

	t22 = (((x113+x114)%x115)<x116);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x118 = INT64_MIN;
	int16_t x119 = INT16_MAX;
	int8_t x120 = -1;
	volatile int32_t t23 = 15745;

	t23 = (((x117+x118)%x119)<x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x127 = 476089710LLU;
	int32_t x128 = 51547;
	volatile int32_t t24 = -9219095;

	t24 = (((x125+x126)%x127)<x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x130 = INT16_MIN;
	static uint64_t x131 = UINT64_MAX;
	volatile int64_t x132 = INT64_MIN;
	volatile int32_t t25 = 385;

	t25 = (((x129+x130)%x131)<x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = INT8_MIN;
	volatile int8_t x134 = 32;
	int32_t x135 = INT32_MIN;
	int64_t x136 = 1LL;
	static volatile int32_t t26 = 420421;

	t26 = (((x133+x134)%x135)<x136);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x137 = INT32_MIN;
	uint8_t x139 = UINT8_MAX;
	volatile uint32_t x140 = 19804822U;
	int32_t t27 = 353623904;

	t27 = (((x137+x138)%x139)<x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x141 = 542U;
	int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;

	t28 = (((x141+x142)%x143)<x144);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = -1;
	static uint8_t x146 = UINT8_MAX;
	volatile int64_t x147 = INT64_MAX;
	int16_t x148 = 9;
	int32_t t29 = 0;

	t29 = (((x145+x146)%x147)<x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = INT8_MAX;
	volatile int16_t x151 = 192;
	static volatile int16_t x152 = 3346;
	int32_t t30 = -16;

	t30 = (((x149+x150)%x151)<x152);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x157 = -43602LL;
	static uint32_t x160 = 14815U;
	int32_t t31 = 2323989;

	t31 = (((x157+x158)%x159)<x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = INT16_MIN;
	static uint16_t x162 = 113U;
	static uint16_t x164 = UINT16_MAX;

	t32 = (((x161+x162)%x163)<x164);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = -2;
	static uint8_t x166 = 0U;
	uint64_t x167 = 28307495937LLU;
	int32_t x168 = INT32_MAX;
	int32_t t33 = -2527337;

	t33 = (((x165+x166)%x167)<x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x169 = 6U;
	volatile int64_t x170 = INT64_MIN;
	int32_t t34 = -25;

	t34 = (((x169+x170)%x171)<x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x174 = -44370366;
	static int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MIN;
	volatile int32_t t35 = -647339884;

	t35 = (((x173+x174)%x175)<x176);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x178 = INT32_MIN;
	uint8_t x179 = UINT8_MAX;
	int16_t x180 = -531;
	int32_t t36 = -62379353;

	t36 = (((x177+x178)%x179)<x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x181 = -1500372171328LL;
	uint8_t x182 = 5U;
	static int8_t x183 = INT8_MIN;

	t37 = (((x181+x182)%x183)<x184);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x185 = UINT8_MAX;
	volatile int16_t x186 = -1;
	volatile int16_t x187 = -1;
	int16_t x188 = INT16_MAX;

	t38 = (((x185+x186)%x187)<x188);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x189 = INT16_MAX;
	int8_t x190 = -1;
	volatile int64_t x191 = INT64_MIN;
	volatile int32_t t39 = -4420431;

	t39 = (((x189+x190)%x191)<x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x193 = -30094634155LL;
	int8_t x194 = INT8_MIN;
	uint64_t x195 = UINT64_MAX;
	volatile int32_t t40 = 4001455;

	t40 = (((x193+x194)%x195)<x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x198 = UINT32_MAX;
	uint32_t x199 = 5588164U;
	int8_t x200 = 20;
	volatile int32_t t41 = 309;

	t41 = (((x197+x198)%x199)<x200);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x201 = UINT32_MAX;
	int8_t x202 = -1;
	int8_t x203 = 42;
	int16_t x204 = -1;
	volatile int32_t t42 = 1;

	t42 = (((x201+x202)%x203)<x204);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x205 = 41719859LL;
	static int32_t x206 = -8909663;
	volatile int16_t x207 = INT16_MAX;
	int16_t x208 = INT16_MIN;
	static int32_t t43 = 9048;

	t43 = (((x205+x206)%x207)<x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x209 = UINT64_MAX;
	static uint64_t x210 = 533320567629LLU;
	int64_t x211 = -1LL;
	static int32_t t44 = -492451877;

	t44 = (((x209+x210)%x211)<x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x213 = 12628945LLU;
	static int64_t x214 = INT64_MIN;
	static int32_t x215 = 24;
	uint32_t x216 = 18684895U;
	volatile int32_t t45 = 324205417;

	t45 = (((x213+x214)%x215)<x216);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x217 = 114698887370419LLU;
	uint32_t x218 = UINT32_MAX;
	int16_t x219 = INT16_MIN;

	t46 = (((x217+x218)%x219)<x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = -478;
	static int8_t x222 = INT8_MIN;
	static int16_t x224 = INT16_MIN;

	t47 = (((x221+x222)%x223)<x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MIN;
	uint8_t x226 = 63U;
	uint8_t x227 = UINT8_MAX;
	uint64_t x228 = 111241274LLU;

	t48 = (((x225+x226)%x227)<x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = -1;
	static uint16_t x231 = UINT16_MAX;
	volatile int32_t t49 = -125915104;

	t49 = (((x229+x230)%x231)<x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x233 = -1;
	int32_t x234 = 506611;
	int32_t x235 = -1;
	volatile int32_t t50 = 0;

	t50 = (((x233+x234)%x235)<x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x237 = INT64_MIN;
	static volatile int64_t x238 = 2LL;
	int64_t x239 = INT64_MAX;
	uint16_t x240 = 7U;
	int32_t t51 = -9558003;

	t51 = (((x237+x238)%x239)<x240);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x242 = -1;
	static int32_t x243 = INT32_MIN;
	volatile int32_t x244 = INT32_MIN;
	int32_t t52 = -998;

	t52 = (((x241+x242)%x243)<x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x245 = -1;
	static int64_t x247 = INT64_MAX;
	volatile int32_t t53 = 28;

	t53 = (((x245+x246)%x247)<x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 0U;
	volatile uint64_t x252 = 5095842161LLU;
	static volatile int32_t t54 = -15916;

	t54 = (((x249+x250)%x251)<x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = -1LL;
	int64_t x254 = -1LL;
	volatile int32_t t55 = -466;

	t55 = (((x253+x254)%x255)<x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x257 = -4689478;
	volatile uint16_t x259 = UINT16_MAX;
	static volatile int32_t t56 = -41;

	t56 = (((x257+x258)%x259)<x260);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x261 = -93564489;
	static uint8_t x262 = 16U;
	static volatile int16_t x263 = -1;
	int64_t x264 = -36422194LL;
	volatile int32_t t57 = 83;

	t57 = (((x261+x262)%x263)<x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x278 = -1;
	volatile int32_t x279 = INT32_MIN;

	t58 = (((x277+x278)%x279)<x280);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = INT8_MAX;
	uint32_t x282 = UINT32_MAX;
	static int8_t x283 = -32;
	volatile uint16_t x284 = UINT16_MAX;
	int32_t t59 = 111827713;

	t59 = (((x281+x282)%x283)<x284);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = INT32_MAX;
	static int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MAX;
	volatile int32_t t60 = 0;

	t60 = (((x289+x290)%x291)<x292);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x297 = -3;
	uint64_t x298 = UINT64_MAX;
	int8_t x299 = INT8_MIN;
	volatile uint64_t x300 = 92230LLU;
	volatile int32_t t61 = -6015420;

	t61 = (((x297+x298)%x299)<x300);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x301 = 326;
	uint8_t x303 = UINT8_MAX;
	static int64_t x304 = 661153703051LL;
	int32_t t62 = -59262405;

	t62 = (((x301+x302)%x303)<x304);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x305 = 291U;
	int16_t x306 = 1674;
	int16_t x307 = -1;
	int32_t t63 = -264562;

	t63 = (((x305+x306)%x307)<x308);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x309 = INT8_MIN;
	int32_t x310 = -69121503;
	int8_t x311 = INT8_MIN;
	uint16_t x312 = 5072U;
	static volatile int32_t t64 = -22914;

	t64 = (((x309+x310)%x311)<x312);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x313 = UINT64_MAX;
	static uint16_t x315 = 255U;
	volatile uint16_t x316 = 25U;
	static int32_t t65 = -476040;

	t65 = (((x313+x314)%x315)<x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x317 = INT16_MAX;
	volatile int8_t x319 = 14;
	static int32_t x320 = INT32_MAX;

	t66 = (((x317+x318)%x319)<x320);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x321 = 855420639967003587LLU;
	int8_t x322 = INT8_MAX;
	int64_t x323 = -191196LL;
	static volatile uint64_t x324 = UINT64_MAX;
	static volatile int32_t t67 = -10;

	t67 = (((x321+x322)%x323)<x324);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = 0;
	static int64_t x326 = INT64_MAX;
	int16_t x327 = 1;
	int32_t t68 = -116;

	t68 = (((x325+x326)%x327)<x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x329 = 7U;
	int16_t x330 = -1;
	static volatile uint64_t x331 = UINT64_MAX;
	static uint8_t x332 = 100U;
	volatile int32_t t69 = 0;

	t69 = (((x329+x330)%x331)<x332);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = -1;
	int32_t x334 = -1;
	int8_t x335 = -1;
	int8_t x336 = 1;
	int32_t t70 = -44449322;

	t70 = (((x333+x334)%x335)<x336);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x337 = UINT16_MAX;
	uint16_t x338 = 7622U;
	static int64_t x339 = INT64_MAX;
	static volatile int16_t x340 = 137;
	int32_t t71 = 2;

	t71 = (((x337+x338)%x339)<x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x341 = 106U;
	static volatile int32_t x342 = INT32_MIN;
	int32_t x344 = 1;
	static int32_t t72 = 26370;

	t72 = (((x341+x342)%x343)<x344);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = INT32_MIN;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MAX;
	int32_t t73 = -8;

	t73 = (((x345+x346)%x347)<x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x350 = INT16_MIN;
	int64_t x351 = INT64_MIN;
	static volatile uint64_t x352 = 53091529LLU;

	t74 = (((x349+x350)%x351)<x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = -197136347;
	uint8_t x354 = 14U;
	int64_t x355 = INT64_MAX;
	static volatile int32_t t75 = -107857225;

	t75 = (((x353+x354)%x355)<x356);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x357 = 3U;
	static int8_t x359 = INT8_MIN;
	volatile int64_t x360 = INT64_MAX;
	volatile int32_t t76 = -250;

	t76 = (((x357+x358)%x359)<x360);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x361 = INT8_MIN;
	int8_t x362 = 6;
	uint8_t x363 = 4U;
	int8_t x364 = -5;
	static volatile int32_t t77 = -96390908;

	t77 = (((x361+x362)%x363)<x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x366 = INT8_MAX;
	uint8_t x367 = UINT8_MAX;

	t78 = (((x365+x366)%x367)<x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = 1;
	uint64_t x370 = UINT64_MAX;
	volatile int16_t x371 = INT16_MIN;
	static int64_t x372 = INT64_MIN;
	int32_t t79 = 79;

	t79 = (((x369+x370)%x371)<x372);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x373 = 5580118592711688746LLU;
	uint8_t x374 = UINT8_MAX;
	volatile uint8_t x375 = 4U;
	uint32_t x376 = UINT32_MAX;
	static volatile int32_t t80 = 858581;

	t80 = (((x373+x374)%x375)<x376);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x377 = 102373005324LLU;
	static volatile uint64_t x378 = 285182381793593996LLU;
	int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MIN;

	t81 = (((x377+x378)%x379)<x380);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = INT8_MIN;
	uint64_t x387 = UINT64_MAX;
	int8_t x388 = INT8_MAX;

	t82 = (((x385+x386)%x387)<x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x390 = 2;
	volatile int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MAX;

	t83 = (((x389+x390)%x391)<x392);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x393 = 11U;
	int8_t x394 = INT8_MAX;
	static int32_t x395 = INT32_MAX;
	volatile int16_t x396 = 1;
	int32_t t84 = -1;

	t84 = (((x393+x394)%x395)<x396);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x397 = 56151088LLU;
	volatile uint32_t x398 = 15464U;
	uint32_t x399 = 12749U;
	volatile int32_t x400 = -1;

	t85 = (((x397+x398)%x399)<x400);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x401 = 198U;
	volatile int32_t x402 = -1;
	int64_t x403 = 27963317118LL;
	int8_t x404 = -5;
	volatile int32_t t86 = 2828;

	t86 = (((x401+x402)%x403)<x404);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x405 = INT64_MIN;
	int32_t x406 = INT32_MAX;
	int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MAX;
	static volatile int32_t t87 = 216290;

	t87 = (((x405+x406)%x407)<x408);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x410 = 18U;
	int64_t x411 = INT64_MIN;
	volatile int8_t x412 = INT8_MIN;
	static volatile int32_t t88 = 89633771;

	t88 = (((x409+x410)%x411)<x412);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x413 = UINT32_MAX;
	int16_t x414 = -1;
	int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MAX;
	int32_t t89 = 7;

	t89 = (((x413+x414)%x415)<x416);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x418 = INT64_MIN;
	uint32_t x419 = UINT32_MAX;
	int64_t x420 = -1LL;
	int32_t t90 = -34;

	t90 = (((x417+x418)%x419)<x420);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x421 = -1;
	int8_t x422 = -1;
	volatile int32_t x423 = INT32_MIN;
	int32_t t91 = 0;

	t91 = (((x421+x422)%x423)<x424);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x429 = INT64_MAX;
	volatile int32_t x431 = INT32_MIN;
	static volatile uint16_t x432 = 0U;
	volatile int32_t t92 = 970;

	t92 = (((x429+x430)%x431)<x432);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x433 = -3171;
	int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MIN;
	static volatile int32_t x436 = INT32_MIN;

	t93 = (((x433+x434)%x435)<x436);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x438 = INT8_MAX;
	volatile int32_t x439 = 641369;
	volatile int32_t x440 = INT32_MAX;
	int32_t t94 = -7;

	t94 = (((x437+x438)%x439)<x440);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x442 = INT64_MIN;
	volatile int64_t x443 = INT64_MIN;
	int32_t x444 = INT32_MAX;
	int32_t t95 = -436480066;

	t95 = (((x441+x442)%x443)<x444);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x445 = -1LL;
	static int64_t x446 = -138LL;
	uint32_t x447 = 3096425U;
	int32_t t96 = 44094;

	t96 = (((x445+x446)%x447)<x448);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x449 = 17012136788160LLU;
	static uint64_t x450 = 8450628986040068509LLU;
	int16_t x451 = INT16_MIN;
	int32_t t97 = -9;

	t97 = (((x449+x450)%x451)<x452);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x453 = 4772155424LLU;
	int8_t x455 = INT8_MIN;

	t98 = (((x453+x454)%x455)<x456);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x457 = -114;
	int32_t x458 = -1575;
	int16_t x459 = -1478;
	volatile int32_t t99 = 599053;

	t99 = (((x457+x458)%x459)<x460);

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

