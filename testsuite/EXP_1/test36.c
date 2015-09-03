#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 25635677LL;
volatile uint32_t x3 = 8629U;
int8_t x7 = -1;
static volatile uint32_t x8 = UINT32_MAX;
volatile int32_t t1 = 232641;
static int64_t x26 = INT64_MIN;
int32_t t3 = -1835;
int8_t x35 = INT8_MAX;
uint32_t x38 = 12664501U;
uint64_t x39 = 39875888678590LLU;
volatile uint64_t x40 = 266171417973LLU;
int8_t x43 = INT8_MIN;
static volatile int32_t t6 = -168093;
static int64_t x46 = 2031653952337LL;
int32_t x47 = 7743;
static uint64_t x65 = 269LLU;
uint8_t x72 = 2U;
int32_t t9 = -3369165;
static int64_t x75 = -1LL;
uint32_t x78 = UINT32_MAX;
volatile int32_t t12 = -17561;
static volatile int8_t x85 = -1;
int32_t x91 = -1;
volatile int32_t t16 = 225;
uint8_t x114 = UINT8_MAX;
volatile int32_t x115 = INT32_MIN;
static int16_t x116 = INT16_MIN;
volatile int32_t t20 = -262;
static int8_t x125 = -10;
int64_t x137 = 369881228716024LL;
static volatile uint64_t x138 = UINT64_MAX;
volatile int32_t t25 = 33561867;
int32_t t27 = 3235;
int32_t x157 = -241;
int16_t x164 = 8057;
volatile uint32_t x165 = 959231344U;
uint64_t x175 = 15LLU;
int16_t x185 = -1;
int32_t t35 = 4986;
volatile int16_t x199 = INT16_MIN;
volatile int32_t t38 = -36978;
uint64_t x217 = 2141056LLU;
volatile int32_t t39 = 6;
int8_t x225 = -1;
int32_t x226 = 2;
int16_t x228 = INT16_MAX;
int32_t t41 = -453101352;
int16_t x235 = -1;
int32_t t44 = 113853;
int8_t x254 = INT8_MAX;
volatile uint32_t x272 = 2020930U;
static int32_t t49 = -208;
uint64_t x275 = 13502299893521776LLU;
int16_t x276 = -9;
static int32_t t50 = 253223;
static uint16_t x296 = 2U;
uint8_t x316 = 7U;
int16_t x317 = -984;
int32_t x319 = INT32_MIN;
volatile int32_t t56 = 37165;
int16_t x321 = -20;
int32_t x322 = -17641;
int16_t x327 = INT16_MIN;
static uint8_t x331 = UINT8_MAX;
int32_t t59 = 221550247;
static int32_t t60 = 236;
int64_t x361 = 2359472LL;
volatile int32_t x363 = -1542668;
volatile int32_t t61 = 61;
int8_t x365 = INT8_MAX;
static int64_t x372 = 177627LL;
int32_t t63 = 1637;
static int16_t x373 = INT16_MAX;
volatile int32_t t65 = -739;
uint64_t x387 = 0LLU;
uint16_t x388 = 2723U;
uint64_t x394 = 41304047275062LLU;
int64_t x398 = -1LL;
static int64_t x408 = INT64_MAX;
volatile int32_t t71 = -111;
uint8_t x410 = 54U;
uint32_t x411 = UINT32_MAX;
uint64_t x413 = UINT64_MAX;
volatile uint8_t x414 = 2U;
int64_t x420 = INT64_MAX;
volatile int32_t t74 = -13;
static int32_t t76 = -8037;
static int16_t x431 = INT16_MAX;
int8_t x443 = INT8_MIN;
volatile int32_t t79 = -3725;
uint32_t x458 = 127589U;
int32_t t81 = 326;
uint32_t x462 = 3U;
static int32_t t82 = 18013;
uint16_t x476 = UINT16_MAX;
static int32_t t85 = 43512788;
uint32_t x487 = UINT32_MAX;
uint8_t x497 = 3U;
int64_t x505 = 100274LL;
volatile int16_t x509 = -1;
static int8_t x515 = INT8_MIN;
int8_t x535 = INT8_MIN;
static int32_t t96 = 1;
uint64_t x555 = 118855106637353LLU;
uint64_t x556 = 41033813096540132LLU;
int16_t x557 = 1310;
static int8_t x559 = 0;
static uint32_t x560 = 4047134U;
volatile int32_t x566 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 39433;

	t0 = (((x1+x2)*x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 2250U;
	volatile int16_t x6 = 3988;

	t1 = (((x5+x6)*x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = 1;
	int8_t x27 = -1;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t2 = -1;

	t2 = (((x25+x26)*x27)<=x28);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x29 = -1;
	uint8_t x30 = UINT8_MAX;
	int16_t x31 = -6360;
	volatile uint8_t x32 = 49U;

	t3 = (((x29+x30)*x31)<=x32);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = 173;
	uint64_t x34 = 223103134LLU;
	int16_t x36 = INT16_MIN;
	int32_t t4 = -5027;

	t4 = (((x33+x34)*x35)<=x36);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = INT64_MIN;
	volatile int32_t t5 = -7;

	t5 = (((x37+x38)*x39)<=x40);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x41 = -1LL;
	int32_t x42 = INT32_MIN;
	int8_t x44 = INT8_MIN;

	t6 = (((x41+x42)*x43)<=x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = -3043;
	int16_t x48 = 6486;
	volatile int32_t t7 = 800;

	t7 = (((x45+x46)*x47)<=x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x66 = 1;
	static volatile int16_t x67 = 7;
	int64_t x68 = 36013633209645958LL;
	static int32_t t8 = -145699;

	t8 = (((x65+x66)*x67)<=x68);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x69 = -1;
	uint16_t x70 = 9689U;
	int8_t x71 = INT8_MAX;

	t9 = (((x69+x70)*x71)<=x72);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x73 = 2049485233U;
	int32_t x74 = 0;
	int8_t x76 = 0;
	int32_t t10 = -6;

	t10 = (((x73+x74)*x75)<=x76);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x77 = -12835275;
	volatile uint32_t x79 = UINT32_MAX;
	uint32_t x80 = 5U;
	volatile int32_t t11 = 2234;

	t11 = (((x77+x78)*x79)<=x80);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x81 = 492723617745245518LL;
	int16_t x82 = INT16_MIN;
	static int8_t x83 = 0;
	int16_t x84 = INT16_MIN;

	t12 = (((x81+x82)*x83)<=x84);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x86 = INT8_MAX;
	volatile int8_t x87 = INT8_MAX;
	volatile int64_t x88 = 879772LL;
	volatile int32_t t13 = -1;

	t13 = (((x85+x86)*x87)<=x88);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x89 = -1;
	int8_t x90 = 5;
	uint16_t x92 = 1182U;
	volatile int32_t t14 = -8;

	t14 = (((x89+x90)*x91)<=x92);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x93 = -1LL;
	volatile int32_t x94 = -1;
	int16_t x95 = INT16_MIN;
	static int8_t x96 = -1;
	volatile int32_t t15 = 1;

	t15 = (((x93+x94)*x95)<=x96);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = INT64_MIN;
	uint64_t x98 = UINT64_MAX;
	volatile int32_t x99 = INT32_MIN;
	int32_t x100 = INT32_MIN;

	t16 = (((x97+x98)*x99)<=x100);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x105 = 3;
	volatile uint64_t x106 = 914154635028300148LLU;
	int16_t x107 = INT16_MIN;
	volatile int16_t x108 = -532;
	int32_t t17 = -1048176925;

	t17 = (((x105+x106)*x107)<=x108);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x109 = 45U;
	int32_t x110 = -9;
	static volatile int16_t x111 = INT16_MIN;
	static volatile int32_t x112 = 1835309;
	static int32_t t18 = 11289;

	t18 = (((x109+x110)*x111)<=x112);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x113 = -645LL;
	static volatile int32_t t19 = 11372202;

	t19 = (((x113+x114)*x115)<=x116);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x121 = INT8_MIN;
	uint8_t x122 = UINT8_MAX;
	volatile int8_t x123 = -9;
	int8_t x124 = -1;

	t20 = (((x121+x122)*x123)<=x124);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x126 = -1LL;
	int16_t x127 = -1;
	int8_t x128 = 12;
	static int32_t t21 = -437725131;

	t21 = (((x125+x126)*x127)<=x128);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = -26;
	uint64_t x134 = 3312625LLU;
	static volatile int32_t x135 = -1;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t22 = -385949505;

	t22 = (((x133+x134)*x135)<=x136);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x139 = 8U;
	static int16_t x140 = INT16_MIN;
	volatile int32_t t23 = 42386;

	t23 = (((x137+x138)*x139)<=x140);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x141 = UINT64_MAX;
	int16_t x142 = 12;
	static volatile uint8_t x143 = UINT8_MAX;
	int16_t x144 = 1;
	volatile int32_t t24 = 203;

	t24 = (((x141+x142)*x143)<=x144);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = -111;
	int8_t x147 = -1;
	volatile int32_t x148 = -1;

	t25 = (((x145+x146)*x147)<=x148);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x149 = 432U;
	static uint64_t x150 = 8213LLU;
	uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MAX;
	volatile int32_t t26 = -626563;

	t26 = (((x149+x150)*x151)<=x152);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x153 = UINT32_MAX;
	volatile uint32_t x154 = 51024781U;
	int32_t x155 = INT32_MIN;
	static int64_t x156 = INT64_MIN;

	t27 = (((x153+x154)*x155)<=x156);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x158 = 59420LL;
	uint64_t x159 = 246983979060455533LLU;
	int8_t x160 = INT8_MAX;
	volatile int32_t t28 = 30626;

	t28 = (((x157+x158)*x159)<=x160);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = INT32_MAX;
	int8_t x162 = -1;
	int8_t x163 = -1;
	volatile int32_t t29 = -2409541;

	t29 = (((x161+x162)*x163)<=x164);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x166 = 1899435199LLU;
	uint16_t x167 = 31069U;
	static volatile int32_t x168 = -1;
	int32_t t30 = 61156;

	t30 = (((x165+x166)*x167)<=x168);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x173 = UINT8_MAX;
	int16_t x174 = -171;
	uint32_t x176 = 65072394U;
	volatile int32_t t31 = -1;

	t31 = (((x173+x174)*x175)<=x176);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x177 = UINT32_MAX;
	int16_t x178 = INT16_MIN;
	uint32_t x179 = 907U;
	static int64_t x180 = INT64_MAX;
	volatile int32_t t32 = -108061;

	t32 = (((x177+x178)*x179)<=x180);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x181 = 0;
	int8_t x182 = INT8_MAX;
	int32_t x183 = -1;
	static int16_t x184 = -1;
	volatile int32_t t33 = -370390;

	t33 = (((x181+x182)*x183)<=x184);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x186 = -1;
	uint64_t x187 = 9LLU;
	uint32_t x188 = UINT32_MAX;
	int32_t t34 = 39216;

	t34 = (((x185+x186)*x187)<=x188);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = -1;
	int16_t x190 = INT16_MAX;
	int8_t x191 = 41;
	volatile uint32_t x192 = 13236867U;

	t35 = (((x189+x190)*x191)<=x192);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x197 = 1U;
	int16_t x198 = INT16_MAX;
	int8_t x200 = -46;
	int32_t t36 = 6;

	t36 = (((x197+x198)*x199)<=x200);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = 260656842LLU;
	int32_t x202 = 6029945;
	static uint64_t x203 = 8576812227646LLU;
	volatile uint16_t x204 = UINT16_MAX;
	volatile int32_t t37 = 8857976;

	t37 = (((x201+x202)*x203)<=x204);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x209 = -23;
	int32_t x210 = -8133;
	int16_t x211 = INT16_MIN;
	static uint32_t x212 = UINT32_MAX;

	t38 = (((x209+x210)*x211)<=x212);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x218 = INT32_MIN;
	uint64_t x219 = 221125LLU;
	volatile int32_t x220 = INT32_MIN;

	t39 = (((x217+x218)*x219)<=x220);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x221 = INT8_MIN;
	uint64_t x222 = 302197512612786027LLU;
	int16_t x223 = 0;
	int32_t x224 = INT32_MIN;
	int32_t t40 = 4013;

	t40 = (((x221+x222)*x223)<=x224);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x227 = -20;

	t41 = (((x225+x226)*x227)<=x228);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x229 = 1U;
	volatile int16_t x230 = -368;
	uint64_t x231 = 10LLU;
	uint8_t x232 = 0U;
	int32_t t42 = 510966;

	t42 = (((x229+x230)*x231)<=x232);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x233 = INT16_MAX;
	uint32_t x234 = UINT32_MAX;
	int32_t x236 = INT32_MAX;
	static int32_t t43 = -398;

	t43 = (((x233+x234)*x235)<=x236);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x237 = -1LL;
	volatile uint16_t x238 = UINT16_MAX;
	int16_t x239 = 7779;
	volatile int16_t x240 = INT16_MIN;

	t44 = (((x237+x238)*x239)<=x240);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x245 = -1;
	uint32_t x246 = 1U;
	int64_t x247 = INT64_MAX;
	static int64_t x248 = -1LL;
	int32_t t45 = -25;

	t45 = (((x245+x246)*x247)<=x248);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x249 = 888724345393LLU;
	uint32_t x250 = 248U;
	uint8_t x251 = 40U;
	volatile int32_t x252 = -1;
	volatile int32_t t46 = 229685;

	t46 = (((x249+x250)*x251)<=x252);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x253 = -41;
	static int32_t x255 = 10801;
	volatile int32_t x256 = INT32_MIN;
	static volatile int32_t t47 = -5127777;

	t47 = (((x253+x254)*x255)<=x256);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x261 = 482LLU;
	int32_t x262 = 3859551;
	static uint64_t x263 = 0LLU;
	volatile int32_t x264 = INT32_MAX;
	int32_t t48 = 53099;

	t48 = (((x261+x262)*x263)<=x264);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x269 = INT16_MIN;
	static uint32_t x270 = 3349U;
	int64_t x271 = -211240732LL;

	t49 = (((x269+x270)*x271)<=x272);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x273 = -1;
	int16_t x274 = -1;

	t50 = (((x273+x274)*x275)<=x276);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x281 = 124U;
	int8_t x282 = -1;
	int32_t x283 = -55;
	int8_t x284 = 12;
	volatile int32_t t51 = -251384;

	t51 = (((x281+x282)*x283)<=x284);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x293 = INT16_MIN;
	volatile uint16_t x294 = 488U;
	static uint32_t x295 = UINT32_MAX;
	int32_t t52 = 0;

	t52 = (((x293+x294)*x295)<=x296);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x297 = INT16_MAX;
	int16_t x298 = -13;
	uint64_t x299 = UINT64_MAX;
	static int64_t x300 = INT64_MIN;
	volatile int32_t t53 = 1;

	t53 = (((x297+x298)*x299)<=x300);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x301 = -1;
	static int16_t x302 = -2947;
	static int16_t x303 = -1;
	uint32_t x304 = 22541U;
	static int32_t t54 = 4139;

	t54 = (((x301+x302)*x303)<=x304);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x313 = UINT64_MAX;
	int16_t x314 = INT16_MIN;
	uint32_t x315 = 108717U;
	int32_t t55 = -262094440;

	t55 = (((x313+x314)*x315)<=x316);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x318 = -1LL;
	uint16_t x320 = 8877U;

	t56 = (((x317+x318)*x319)<=x320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	static int32_t t57 = 44;

	t57 = (((x321+x322)*x323)<=x324);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x325 = 2525;
	uint16_t x326 = 1U;
	static int16_t x328 = INT16_MIN;
	volatile int32_t t58 = 0;

	t58 = (((x325+x326)*x327)<=x328);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x329 = INT16_MIN;
	uint64_t x330 = 10784LLU;
	static int64_t x332 = 15297083592LL;

	t59 = (((x329+x330)*x331)<=x332);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x337 = -1LL;
	int32_t x338 = -1;
	static volatile int64_t x339 = 88479410658271LL;
	int32_t x340 = -1;

	t60 = (((x337+x338)*x339)<=x340);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x362 = INT8_MAX;
	int16_t x364 = 0;

	t61 = (((x361+x362)*x363)<=x364);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x366 = -1;
	volatile uint32_t x367 = UINT32_MAX;
	static uint8_t x368 = 28U;
	volatile int32_t t62 = 3;

	t62 = (((x365+x366)*x367)<=x368);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x369 = 1210540LLU;
	volatile int64_t x370 = INT64_MIN;
	uint32_t x371 = 1059768162U;

	t63 = (((x369+x370)*x371)<=x372);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x374 = UINT32_MAX;
	uint32_t x375 = 6U;
	int64_t x376 = INT64_MAX;
	static int32_t t64 = 32;

	t64 = (((x373+x374)*x375)<=x376);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x377 = 15763U;
	volatile uint32_t x378 = 1U;
	volatile uint32_t x379 = UINT32_MAX;
	int8_t x380 = -6;

	t65 = (((x377+x378)*x379)<=x380);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x381 = 14U;
	uint64_t x382 = 7393966959276LLU;
	int32_t x383 = INT32_MIN;
	int8_t x384 = 46;
	volatile int32_t t66 = 152586589;

	t66 = (((x381+x382)*x383)<=x384);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x385 = INT16_MAX;
	static int8_t x386 = 0;
	int32_t t67 = 50675;

	t67 = (((x385+x386)*x387)<=x388);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x393 = 118018388LLU;
	uint32_t x395 = 21U;
	uint32_t x396 = 1607U;
	static int32_t t68 = 57;

	t68 = (((x393+x394)*x395)<=x396);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x397 = 149978142LLU;
	uint8_t x399 = UINT8_MAX;
	uint32_t x400 = 901383U;
	static volatile int32_t t69 = 35249;

	t69 = (((x397+x398)*x399)<=x400);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x401 = 1003301U;
	int64_t x402 = -1LL;
	int32_t x403 = INT32_MIN;
	int16_t x404 = INT16_MIN;
	volatile int32_t t70 = -8240889;

	t70 = (((x401+x402)*x403)<=x404);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x405 = -1;
	int32_t x406 = -1;
	volatile int16_t x407 = -4;

	t71 = (((x405+x406)*x407)<=x408);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x409 = -21;
	int8_t x412 = INT8_MAX;
	static int32_t t72 = 54;

	t72 = (((x409+x410)*x411)<=x412);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x415 = -1;
	static int64_t x416 = 14835876472LL;
	int32_t t73 = 168571495;

	t73 = (((x413+x414)*x415)<=x416);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x417 = -1;
	uint16_t x418 = UINT16_MAX;
	int8_t x419 = 63;

	t74 = (((x417+x418)*x419)<=x420);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x421 = 238518091793789LLU;
	int8_t x422 = -1;
	int16_t x423 = 35;
	uint32_t x424 = 338140U;
	int32_t t75 = -6754;

	t75 = (((x421+x422)*x423)<=x424);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x425 = 199217204U;
	volatile int8_t x426 = INT8_MIN;
	static uint64_t x427 = 1LLU;
	volatile int32_t x428 = INT32_MIN;

	t76 = (((x425+x426)*x427)<=x428);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x429 = UINT8_MAX;
	static volatile uint16_t x430 = 4U;
	volatile uint32_t x432 = 3U;
	volatile int32_t t77 = -6823;

	t77 = (((x429+x430)*x431)<=x432);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x433 = INT8_MAX;
	volatile uint16_t x434 = UINT16_MAX;
	uint8_t x435 = UINT8_MAX;
	static int8_t x436 = -10;
	volatile int32_t t78 = -3828;

	t78 = (((x433+x434)*x435)<=x436);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x441 = INT32_MIN;
	int64_t x442 = 119670985539LL;
	static uint64_t x444 = UINT64_MAX;

	t79 = (((x441+x442)*x443)<=x444);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x445 = 93U;
	int32_t x446 = -98;
	volatile int16_t x447 = INT16_MIN;
	uint8_t x448 = 0U;
	int32_t t80 = 6;

	t80 = (((x445+x446)*x447)<=x448);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x457 = 344;
	int8_t x459 = -1;
	int64_t x460 = INT64_MIN;

	t81 = (((x457+x458)*x459)<=x460);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x461 = 58;
	int8_t x463 = -1;
	static int64_t x464 = INT64_MIN;

	t82 = (((x461+x462)*x463)<=x464);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = 0;
	int16_t x470 = INT16_MIN;
	uint8_t x471 = 7U;
	int64_t x472 = -1LL;
	int32_t t83 = 107984;

	t83 = (((x469+x470)*x471)<=x472);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x473 = INT8_MIN;
	uint32_t x474 = 1U;
	int16_t x475 = -1;
	volatile int32_t t84 = 459;

	t84 = (((x473+x474)*x475)<=x476);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x477 = INT16_MIN;
	int16_t x478 = -45;
	int16_t x479 = INT16_MIN;
	int16_t x480 = -6345;

	t85 = (((x477+x478)*x479)<=x480);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x481 = INT64_MAX;
	int8_t x482 = -1;
	static volatile uint64_t x483 = 7289735863138LLU;
	static int8_t x484 = -3;
	int32_t t86 = 0;

	t86 = (((x481+x482)*x483)<=x484);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x485 = INT8_MIN;
	int8_t x486 = INT8_MIN;
	int8_t x488 = INT8_MAX;
	static volatile int32_t t87 = 64;

	t87 = (((x485+x486)*x487)<=x488);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x493 = INT32_MAX;
	int64_t x494 = -1LL;
	uint16_t x495 = 278U;
	static uint8_t x496 = 5U;
	volatile int32_t t88 = -46630016;

	t88 = (((x493+x494)*x495)<=x496);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x498 = INT32_MIN;
	int16_t x499 = 1;
	static int8_t x500 = 1;
	int32_t t89 = 19885297;

	t89 = (((x497+x498)*x499)<=x500);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x501 = 211676;
	int16_t x502 = INT16_MAX;
	volatile uint32_t x503 = UINT32_MAX;
	static uint64_t x504 = 64LLU;
	int32_t t90 = 208315;

	t90 = (((x501+x502)*x503)<=x504);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x506 = UINT32_MAX;
	uint8_t x507 = 1U;
	uint32_t x508 = UINT32_MAX;
	int32_t t91 = -469;

	t91 = (((x505+x506)*x507)<=x508);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x510 = INT16_MIN;
	uint8_t x511 = UINT8_MAX;
	volatile int64_t x512 = INT64_MAX;
	static int32_t t92 = -63153120;

	t92 = (((x509+x510)*x511)<=x512);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x513 = -539357LL;
	int32_t x514 = -1;
	int16_t x516 = INT16_MAX;
	volatile int32_t t93 = -497049050;

	t93 = (((x513+x514)*x515)<=x516);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x533 = 59581068LLU;
	uint32_t x534 = UINT32_MAX;
	int8_t x536 = -1;
	int32_t t94 = 1;

	t94 = (((x533+x534)*x535)<=x536);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x537 = 10U;
	uint64_t x538 = 5804245895511LLU;
	int16_t x539 = INT16_MAX;
	uint32_t x540 = 23U;
	volatile int32_t t95 = 0;

	t95 = (((x537+x538)*x539)<=x540);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x541 = 15U;
	uint8_t x542 = UINT8_MAX;
	int64_t x543 = -1LL;
	volatile uint16_t x544 = 55U;

	t96 = (((x541+x542)*x543)<=x544);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x553 = -1;
	int32_t x554 = -878561442;
	volatile int32_t t97 = 11;

	t97 = (((x553+x554)*x555)<=x556);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x558 = INT16_MIN;
	static volatile int32_t t98 = 3;

	t98 = (((x557+x558)*x559)<=x560);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x565 = 2U;
	static uint16_t x567 = UINT16_MAX;
	static uint8_t x568 = 41U;
	int32_t t99 = 17454;

	t99 = (((x565+x566)*x567)<=x568);

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

