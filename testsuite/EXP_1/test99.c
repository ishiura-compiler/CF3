#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -1;
int16_t x6 = -1;
uint16_t x12 = UINT16_MAX;
int32_t t2 = 7754;
static int16_t x15 = 1;
int32_t x16 = INT32_MIN;
volatile int32_t x22 = INT32_MAX;
int32_t x31 = -31325215;
int32_t t7 = 31952;
int8_t x33 = INT8_MIN;
static volatile int32_t x35 = -1955;
volatile int8_t x36 = INT8_MIN;
volatile int32_t t8 = 1013042170;
int32_t x38 = 214214810;
static uint8_t x41 = 24U;
static uint32_t x43 = UINT32_MAX;
int8_t x55 = -8;
uint32_t x60 = 29206931U;
int8_t x72 = INT8_MAX;
int32_t x97 = -1;
int64_t x99 = 231087757LL;
uint64_t x104 = 3306849215LLU;
uint32_t x105 = 5539U;
int16_t x107 = -1;
static volatile int16_t x121 = INT16_MIN;
static uint32_t x124 = 463358U;
static volatile int8_t x127 = 5;
static volatile uint8_t x150 = 44U;
uint32_t x154 = 275050U;
int16_t x157 = INT16_MAX;
uint32_t x162 = UINT32_MAX;
uint32_t x173 = 111U;
int8_t x174 = INT8_MIN;
int16_t x187 = INT16_MIN;
uint8_t x191 = UINT8_MAX;
uint16_t x196 = UINT16_MAX;
uint32_t x207 = UINT32_MAX;
int8_t x211 = -1;
volatile int32_t x213 = INT32_MIN;
int16_t x217 = INT16_MAX;
volatile int32_t t45 = 357;
static int64_t x222 = INT64_MAX;
int16_t x227 = INT16_MAX;
static int8_t x231 = INT8_MIN;
int16_t x242 = -1;
uint8_t x243 = 4U;
int8_t x244 = 5;
int8_t x246 = INT8_MIN;
volatile int32_t t53 = 1382676;
int64_t x268 = INT64_MIN;
int32_t t55 = -5042;
uint32_t x286 = 1636013U;
volatile int32_t t60 = -26;
int64_t x302 = INT64_MIN;
int32_t x311 = INT32_MIN;
int32_t x313 = 13412;
uint16_t x338 = UINT16_MAX;
int16_t x340 = INT16_MIN;
int32_t t69 = 1;
volatile int32_t t70 = -12;
int16_t x345 = INT16_MAX;
int32_t t71 = 1624328;
static uint32_t x350 = 2003U;
volatile uint16_t x358 = 2799U;
uint64_t x359 = 1999LLU;
volatile int8_t x367 = INT8_MIN;
volatile int64_t x368 = 33827LL;
volatile int32_t t76 = -34;
volatile int32_t t78 = -5640878;
uint64_t x384 = 22604706LLU;
static uint8_t x386 = UINT8_MAX;
int8_t x391 = INT8_MIN;
volatile uint64_t x396 = 54266463434443LLU;
volatile int8_t x398 = -14;
static uint64_t x400 = 13529611880424LLU;
static int32_t t85 = -39;
uint16_t x414 = UINT16_MAX;
volatile int32_t t89 = 217;
uint16_t x427 = UINT16_MAX;
int64_t x433 = -1LL;
static int8_t x435 = INT8_MIN;
int64_t x439 = -1LL;
int32_t x443 = INT32_MIN;
int64_t x456 = INT64_MAX;
int32_t t97 = -159326082;
int64_t x463 = 150935171654386LL;
volatile int32_t t98 = 8110;


void f0(void) {
	uint32_t x1 = 59645U;
	volatile int8_t x2 = INT8_MAX;
	int8_t x3 = -1;
	volatile int32_t t0 = -86049077;

	t0 = (((x1+x2)==x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 11U;
	uint16_t x7 = 3589U;
	volatile int8_t x8 = 29;
	volatile int32_t t1 = -6973773;

	t1 = (((x5+x6)==x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 2U;
	int8_t x10 = INT8_MIN;
	int8_t x11 = -27;

	t2 = (((x9+x10)==x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 539502604LLU;
	int16_t x14 = 2167;
	int32_t t3 = 0;

	t3 = (((x13+x14)==x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static volatile int16_t x18 = -8021;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = -843;

	t4 = (((x17+x18)==x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int8_t x23 = -7;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -2648806;

	t5 = (((x21+x22)==x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	static uint64_t x26 = 1533LLU;
	static int64_t x27 = -359113LL;
	int32_t x28 = -65352;
	volatile int32_t t6 = 39;

	t6 = (((x25+x26)==x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	int32_t x30 = -6;
	static uint32_t x32 = 4818756U;

	t7 = (((x29+x30)==x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;

	t8 = (((x33+x34)==x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 3U;
	int16_t x39 = -95;
	int32_t x40 = -1;
	int32_t t9 = 13;

	t9 = (((x37+x38)==x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MIN;
	static volatile int16_t x44 = 1344;
	int32_t t10 = 73485;

	t10 = (((x41+x42)==x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int8_t x46 = 12;
	int16_t x47 = INT16_MIN;
	uint32_t x48 = 247440271U;
	volatile int32_t t11 = -53978560;

	t11 = (((x45+x46)==x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int32_t x50 = 6172;
	int32_t x51 = -1;
	volatile int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 653991018;

	t12 = (((x49+x50)==x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = 2409;
	int32_t x54 = -897117;
	int64_t x56 = -1LL;
	volatile int32_t t13 = 0;

	t13 = (((x53+x54)==x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -7;
	volatile int8_t x58 = -1;
	uint64_t x59 = 1667438LLU;
	static volatile int32_t t14 = 0;

	t14 = (((x57+x58)==x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 29920879U;
	static int8_t x62 = -1;
	uint32_t x63 = 99U;
	static int16_t x64 = INT16_MAX;
	int32_t t15 = 88472;

	t15 = (((x61+x62)==x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	uint8_t x70 = UINT8_MAX;
	volatile uint16_t x71 = 0U;
	volatile int32_t t16 = -834839784;

	t16 = (((x69+x70)==x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	volatile uint32_t x74 = 20U;
	static uint16_t x75 = UINT16_MAX;
	int16_t x76 = -257;
	static int32_t t17 = 11296812;

	t17 = (((x73+x74)==x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 1101748243260LLU;
	int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	volatile int16_t x80 = INT16_MIN;
	static volatile int32_t t18 = -2812;

	t18 = (((x77+x78)==x79)==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	volatile uint32_t x86 = 300292U;
	uint32_t x87 = 1001U;
	volatile int16_t x88 = -51;
	volatile int32_t t19 = -191;

	t19 = (((x85+x86)==x87)==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	static int16_t x90 = 239;
	volatile uint8_t x91 = 18U;
	static uint16_t x92 = 217U;
	int32_t t20 = -168922217;

	t20 = (((x89+x90)==x91)==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = 63510367;
	int16_t x94 = -1;
	static volatile int64_t x95 = INT64_MIN;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t21 = -1023935;

	t21 = (((x93+x94)==x95)==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = -34149949486LL;
	uint16_t x100 = 13265U;
	volatile int32_t t22 = 20;

	t22 = (((x97+x98)==x99)==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 19;
	int32_t x102 = 408694441;
	int16_t x103 = INT16_MAX;
	volatile int32_t t23 = -55890566;

	t23 = (((x101+x102)==x103)==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x106 = -656;
	int16_t x108 = -1;
	int32_t t24 = -4455;

	t24 = (((x105+x106)==x107)==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x109 = -1;
	uint64_t x110 = UINT64_MAX;
	uint64_t x111 = 3551LLU;
	uint8_t x112 = 8U;
	volatile int32_t t25 = 7805;

	t25 = (((x109+x110)==x111)==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MIN;
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = -1;
	int64_t x120 = INT64_MIN;
	static int32_t t26 = -36300907;

	t26 = (((x117+x118)==x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x122 = -1844;
	int64_t x123 = -24597401687LL;
	int32_t t27 = -1385;

	t27 = (((x121+x122)==x123)==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = -1LL;
	static uint32_t x126 = 554073397U;
	int32_t x128 = INT32_MIN;
	int32_t t28 = 52;

	t28 = (((x125+x126)==x127)==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = INT8_MAX;
	static volatile uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MIN;
	int32_t x144 = 148362792;
	int32_t t29 = 7437945;

	t29 = (((x141+x142)==x143)==x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MIN;
	int8_t x146 = INT8_MAX;
	int8_t x147 = 61;
	uint64_t x148 = 8896564LLU;
	volatile int32_t t30 = -37;

	t30 = (((x145+x146)==x147)==x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x149 = -1;
	volatile uint16_t x151 = UINT16_MAX;
	uint16_t x152 = 13601U;
	volatile int32_t t31 = -63272957;

	t31 = (((x149+x150)==x151)==x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x153 = 0;
	uint16_t x155 = 6477U;
	int32_t x156 = -105926;
	volatile int32_t t32 = 4564;

	t32 = (((x153+x154)==x155)==x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x158 = 123U;
	static int32_t x159 = INT32_MAX;
	uint16_t x160 = UINT16_MAX;
	int32_t t33 = 223587602;

	t33 = (((x157+x158)==x159)==x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x161 = 12238810LL;
	volatile uint16_t x163 = 11501U;
	int32_t x164 = -1;
	volatile int32_t t34 = 1606172;

	t34 = (((x161+x162)==x163)==x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x165 = 10717U;
	static int16_t x166 = 0;
	volatile int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t35 = -715410592;

	t35 = (((x165+x166)==x167)==x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x169 = INT64_MIN;
	int16_t x170 = 0;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MIN;
	volatile int32_t t36 = -45;

	t36 = (((x169+x170)==x171)==x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x175 = INT64_MAX;
	int16_t x176 = INT16_MIN;
	int32_t t37 = 495892;

	t37 = (((x173+x174)==x175)==x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x185 = -1;
	static int32_t x186 = 10881;
	int64_t x188 = INT64_MAX;
	int32_t t38 = -4851;

	t38 = (((x185+x186)==x187)==x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x189 = 5;
	uint8_t x190 = 4U;
	static volatile int64_t x192 = -23LL;
	volatile int32_t t39 = -31;

	t39 = (((x189+x190)==x191)==x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = UINT32_MAX;
	int32_t x194 = -1;
	static int8_t x195 = INT8_MIN;
	volatile int32_t t40 = 46204227;

	t40 = (((x193+x194)==x195)==x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x197 = -4755361LL;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = UINT16_MAX;
	static int32_t x200 = -1;
	int32_t t41 = 1565073;

	t41 = (((x197+x198)==x199)==x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x205 = 359432U;
	volatile int16_t x206 = -1;
	int16_t x208 = INT16_MAX;
	volatile int32_t t42 = -299;

	t42 = (((x205+x206)==x207)==x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x209 = UINT64_MAX;
	int8_t x210 = -2;
	static volatile int16_t x212 = INT16_MIN;
	volatile int32_t t43 = 398954722;

	t43 = (((x209+x210)==x211)==x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x214 = 3521545LLU;
	int16_t x215 = INT16_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t44 = -57148;

	t44 = (((x213+x214)==x215)==x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x218 = 32837376U;
	static volatile int16_t x219 = -1;
	static uint64_t x220 = UINT64_MAX;

	t45 = (((x217+x218)==x219)==x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x221 = -6577;
	int16_t x223 = INT16_MAX;
	static int16_t x224 = INT16_MAX;
	volatile int32_t t46 = 0;

	t46 = (((x221+x222)==x223)==x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x225 = 76155U;
	int32_t x226 = -1;
	uint64_t x228 = UINT64_MAX;
	static volatile int32_t t47 = -309;

	t47 = (((x225+x226)==x227)==x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x229 = 49783071U;
	int8_t x230 = INT8_MAX;
	int32_t x232 = INT32_MAX;
	volatile int32_t t48 = -2;

	t48 = (((x229+x230)==x231)==x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x233 = UINT64_MAX;
	uint32_t x234 = 876396542U;
	int32_t x235 = INT32_MAX;
	static int64_t x236 = -1LL;
	volatile int32_t t49 = -1;

	t49 = (((x233+x234)==x235)==x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x237 = INT16_MAX;
	int32_t x238 = 374733472;
	static int64_t x239 = INT64_MIN;
	uint64_t x240 = 32438704881729LLU;
	volatile int32_t t50 = -7602;

	t50 = (((x237+x238)==x239)==x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x241 = UINT64_MAX;
	static volatile int32_t t51 = -58377;

	t51 = (((x241+x242)==x243)==x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x245 = -110LL;
	int64_t x247 = -1LL;
	uint32_t x248 = 212795203U;
	int32_t t52 = 38;

	t52 = (((x245+x246)==x247)==x248);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = INT16_MIN;
	volatile int32_t x250 = INT32_MAX;
	int8_t x251 = -13;
	int32_t x252 = INT32_MAX;

	t53 = (((x249+x250)==x251)==x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = 31;
	uint64_t x258 = 37LLU;
	int8_t x259 = 0;
	volatile int16_t x260 = 0;
	volatile int32_t t54 = -6;

	t54 = (((x257+x258)==x259)==x260);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x265 = 0U;
	static uint64_t x266 = UINT64_MAX;
	static uint16_t x267 = UINT16_MAX;

	t55 = (((x265+x266)==x267)==x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x273 = INT16_MAX;
	int16_t x274 = INT16_MAX;
	volatile int32_t x275 = -776;
	int64_t x276 = 0LL;
	int32_t t56 = -1991517;

	t56 = (((x273+x274)==x275)==x276);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x277 = -91302126;
	int8_t x278 = INT8_MIN;
	static int64_t x279 = INT64_MAX;
	uint32_t x280 = 1927625U;
	int32_t t57 = -1;

	t57 = (((x277+x278)==x279)==x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x281 = 1626556466415LLU;
	volatile int16_t x282 = INT16_MAX;
	int64_t x283 = INT64_MAX;
	volatile uint32_t x284 = UINT32_MAX;
	static volatile int32_t t58 = -190960;

	t58 = (((x281+x282)==x283)==x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x285 = 208976732U;
	int64_t x287 = INT64_MIN;
	volatile int8_t x288 = -1;
	int32_t t59 = 23;

	t59 = (((x285+x286)==x287)==x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x289 = 119766793242851LLU;
	uint64_t x290 = 27518521447531LLU;
	int8_t x291 = -11;
	int32_t x292 = INT32_MAX;

	t60 = (((x289+x290)==x291)==x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = INT8_MIN;
	static volatile int8_t x294 = INT8_MIN;
	int8_t x295 = -2;
	volatile uint64_t x296 = UINT64_MAX;
	static volatile int32_t t61 = 253;

	t61 = (((x293+x294)==x295)==x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = -1;
	volatile int16_t x298 = 680;
	uint8_t x299 = 6U;
	int32_t x300 = INT32_MIN;
	int32_t t62 = 15448822;

	t62 = (((x297+x298)==x299)==x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = 938U;
	int8_t x303 = INT8_MAX;
	int64_t x304 = -1730314658LL;
	volatile int32_t t63 = -21581;

	t63 = (((x301+x302)==x303)==x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x309 = INT8_MIN;
	volatile int64_t x310 = INT64_MAX;
	int16_t x312 = -1;
	volatile int32_t t64 = -5;

	t64 = (((x309+x310)==x311)==x312);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x314 = UINT32_MAX;
	static volatile uint16_t x315 = 0U;
	int16_t x316 = -20;
	int32_t t65 = 6132071;

	t65 = (((x313+x314)==x315)==x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x321 = -1LL;
	volatile uint8_t x322 = 6U;
	uint64_t x323 = 177665100309LLU;
	uint8_t x324 = 6U;
	volatile int32_t t66 = 66;

	t66 = (((x321+x322)==x323)==x324);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x325 = INT32_MIN;
	volatile uint32_t x326 = UINT32_MAX;
	volatile uint16_t x327 = 1612U;
	int64_t x328 = 8137225887264LL;
	static volatile int32_t t67 = 57;

	t67 = (((x325+x326)==x327)==x328);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x329 = -29;
	volatile int32_t x330 = -147;
	int8_t x331 = INT8_MIN;
	int64_t x332 = 0LL;
	int32_t t68 = 2951;

	t68 = (((x329+x330)==x331)==x332);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x337 = -14225LL;
	volatile uint8_t x339 = 69U;

	t69 = (((x337+x338)==x339)==x340);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x341 = INT64_MAX;
	int64_t x342 = -1LL;
	int64_t x343 = -75510654108LL;
	volatile uint32_t x344 = 214U;

	t70 = (((x341+x342)==x343)==x344);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x346 = -21;
	int8_t x347 = -3;
	uint16_t x348 = UINT16_MAX;

	t71 = (((x345+x346)==x347)==x348);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x349 = INT8_MIN;
	static int32_t x351 = INT32_MIN;
	static int32_t x352 = 64874;
	int32_t t72 = -3815;

	t72 = (((x349+x350)==x351)==x352);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x353 = INT32_MIN;
	uint64_t x354 = UINT64_MAX;
	static volatile uint64_t x355 = UINT64_MAX;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t73 = -267205797;

	t73 = (((x353+x354)==x355)==x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x357 = 2028099994983576LLU;
	int32_t x360 = 177;
	int32_t t74 = -24;

	t74 = (((x357+x358)==x359)==x360);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x361 = 524;
	uint8_t x362 = 3U;
	static int64_t x363 = INT64_MIN;
	static uint8_t x364 = UINT8_MAX;
	static volatile int32_t t75 = 8212648;

	t75 = (((x361+x362)==x363)==x364);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x365 = INT16_MAX;
	int16_t x366 = -2013;

	t76 = (((x365+x366)==x367)==x368);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x369 = -39;
	int32_t x370 = INT32_MAX;
	int64_t x371 = INT64_MIN;
	static int8_t x372 = INT8_MIN;
	volatile int32_t t77 = -27;

	t77 = (((x369+x370)==x371)==x372);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x377 = INT64_MIN;
	volatile uint8_t x378 = UINT8_MAX;
	static int8_t x379 = INT8_MIN;
	static int32_t x380 = INT32_MIN;

	t78 = (((x377+x378)==x379)==x380);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x381 = 7656U;
	int64_t x382 = INT64_MIN;
	volatile int8_t x383 = -1;
	int32_t t79 = 58486091;

	t79 = (((x381+x382)==x383)==x384);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x385 = 32818;
	uint16_t x387 = 96U;
	volatile uint32_t x388 = UINT32_MAX;
	int32_t t80 = 3;

	t80 = (((x385+x386)==x387)==x388);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x389 = UINT32_MAX;
	uint32_t x390 = 4905U;
	int8_t x392 = 29;
	int32_t t81 = 5490;

	t81 = (((x389+x390)==x391)==x392);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x393 = 0;
	uint16_t x394 = 217U;
	int16_t x395 = INT16_MIN;
	int32_t t82 = 729531;

	t82 = (((x393+x394)==x395)==x396);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x397 = INT32_MAX;
	int32_t x399 = INT32_MAX;
	int32_t t83 = 4231;

	t83 = (((x397+x398)==x399)==x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MAX;
	int64_t x403 = INT64_MIN;
	static uint16_t x404 = 194U;
	int32_t t84 = -137338;

	t84 = (((x401+x402)==x403)==x404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x405 = INT32_MAX;
	volatile int16_t x406 = INT16_MIN;
	static uint8_t x407 = 31U;
	static int32_t x408 = INT32_MIN;

	t85 = (((x405+x406)==x407)==x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x409 = INT32_MIN;
	int64_t x410 = -1LL;
	int8_t x411 = INT8_MIN;
	int64_t x412 = -1LL;
	static volatile int32_t t86 = 1347;

	t86 = (((x409+x410)==x411)==x412);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x413 = 5;
	int32_t x415 = 34;
	int32_t x416 = INT32_MIN;
	volatile int32_t t87 = 1722;

	t87 = (((x413+x414)==x415)==x416);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x417 = 8801011943453507LLU;
	int32_t x418 = -6629017;
	int16_t x419 = INT16_MIN;
	int16_t x420 = -1;
	volatile int32_t t88 = -48771422;

	t88 = (((x417+x418)==x419)==x420);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x421 = 11810705864577949LLU;
	int32_t x422 = INT32_MIN;
	static int64_t x423 = -385157855209508578LL;
	uint32_t x424 = 1698085U;

	t89 = (((x421+x422)==x423)==x424);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x425 = 26440909355LLU;
	int32_t x426 = -7;
	int16_t x428 = -1;
	int32_t t90 = 3877;

	t90 = (((x425+x426)==x427)==x428);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = INT16_MAX;
	int16_t x430 = -32;
	int32_t x431 = INT32_MAX;
	int8_t x432 = INT8_MAX;
	volatile int32_t t91 = -568;

	t91 = (((x429+x430)==x431)==x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x434 = 1;
	volatile uint8_t x436 = UINT8_MAX;
	static int32_t t92 = 2819;

	t92 = (((x433+x434)==x435)==x436);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = 2;
	int64_t x438 = 2070020LL;
	static uint64_t x440 = UINT64_MAX;
	int32_t t93 = 233141365;

	t93 = (((x437+x438)==x439)==x440);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = INT8_MAX;
	volatile uint32_t x442 = 725521U;
	int8_t x444 = 31;
	int32_t t94 = -1;

	t94 = (((x441+x442)==x443)==x444);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x445 = -1;
	uint16_t x446 = UINT16_MAX;
	int32_t x447 = 3808084;
	uint64_t x448 = 1082787876488256906LLU;
	int32_t t95 = -20478197;

	t95 = (((x445+x446)==x447)==x448);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x453 = INT32_MIN;
	int8_t x454 = 27;
	int32_t x455 = -1;
	volatile int32_t t96 = 10;

	t96 = (((x453+x454)==x455)==x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x457 = UINT32_MAX;
	uint64_t x458 = UINT64_MAX;
	int8_t x459 = INT8_MAX;
	static uint16_t x460 = 15U;

	t97 = (((x457+x458)==x459)==x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = -3;
	int16_t x462 = INT16_MIN;
	uint64_t x464 = UINT64_MAX;

	t98 = (((x461+x462)==x463)==x464);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x465 = -4878;
	uint16_t x466 = 8774U;
	int64_t x467 = INT64_MIN;
	static int32_t x468 = INT32_MIN;
	volatile int32_t t99 = 259;

	t99 = (((x465+x466)==x467)==x468);

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

