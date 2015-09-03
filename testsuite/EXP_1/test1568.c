#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 91227347U;
static volatile int32_t t3 = -963112;
int64_t x17 = INT64_MAX;
volatile uint8_t x26 = 16U;
uint16_t x29 = 2173U;
volatile int32_t x30 = INT32_MAX;
int32_t t7 = 11900324;
int16_t x33 = -1;
uint8_t x34 = 6U;
int8_t x35 = INT8_MAX;
uint8_t x37 = 4U;
int64_t x47 = INT64_MIN;
volatile int32_t t11 = 130223279;
int8_t x50 = INT8_MIN;
int8_t x55 = INT8_MAX;
int8_t x58 = INT8_MAX;
static uint8_t x71 = UINT8_MAX;
uint16_t x73 = 8U;
int64_t x76 = INT64_MIN;
uint8_t x82 = 3U;
uint16_t x84 = 3U;
int32_t t20 = -192304;
int16_t x86 = INT16_MAX;
int32_t x88 = INT32_MIN;
int64_t x89 = -22228011660103465LL;
uint8_t x90 = UINT8_MAX;
volatile int32_t t23 = 76109;
static uint16_t x98 = 10640U;
uint32_t x102 = UINT32_MAX;
int8_t x107 = INT8_MIN;
uint32_t x119 = 309930564U;
volatile int32_t x129 = INT32_MIN;
uint64_t x132 = 87799791219120834LLU;
static uint8_t x133 = 1U;
int32_t t33 = -486580727;
volatile int32_t t34 = -2518786;
int64_t x148 = -1LL;
int8_t x149 = -1;
volatile int32_t x160 = INT32_MAX;
volatile int32_t t39 = -227445;
int64_t x169 = -1LL;
uint16_t x171 = 362U;
volatile int32_t t40 = -3865533;
uint8_t x176 = 111U;
int32_t t43 = 9448;
volatile int8_t x190 = INT8_MAX;
int32_t x191 = -1;
int8_t x193 = INT8_MAX;
int8_t x194 = 0;
uint64_t x195 = UINT64_MAX;
static int8_t x203 = INT8_MAX;
int16_t x204 = -1;
static uint8_t x205 = 18U;
volatile int32_t t51 = 5;
static volatile int32_t x217 = -121;
int32_t t52 = 574466;
int16_t x223 = INT16_MIN;
volatile int32_t t53 = 7974;
static uint32_t x228 = 7530651U;
uint32_t x230 = 1652U;
int16_t x242 = INT16_MIN;
uint16_t x245 = 1U;
uint32_t x249 = UINT32_MAX;
int64_t x250 = -1LL;
int32_t x252 = INT32_MAX;
static int32_t x253 = -31923172;
static uint64_t x256 = 5575581862LLU;
int32_t x257 = INT32_MIN;
volatile uint64_t x263 = UINT64_MAX;
static int64_t x264 = INT64_MIN;
volatile int32_t t63 = -22670;
int32_t t64 = -72;
uint64_t x274 = UINT64_MAX;
static int8_t x278 = INT8_MIN;
static uint16_t x284 = 0U;
static int64_t x293 = 29815569488LL;
int64_t x295 = INT64_MAX;
static uint16_t x296 = UINT16_MAX;
volatile int32_t t70 = -2624450;
int64_t x297 = 59408611364LL;
int8_t x298 = INT8_MAX;
static int64_t x311 = -939LL;
int32_t t76 = -811067;
int64_t x327 = INT64_MIN;
int16_t x332 = INT16_MIN;
int32_t t78 = -446;
volatile uint8_t x333 = UINT8_MAX;
int64_t x335 = INT64_MIN;
static volatile int8_t x338 = 18;
int16_t x340 = -1;
int32_t t80 = -33326843;
static volatile int32_t t81 = -56108699;
int32_t t83 = -9941;
int16_t x354 = -1;
volatile int32_t t84 = -13867;
int32_t x359 = INT32_MAX;
static uint64_t x361 = UINT64_MAX;
int32_t t88 = -23312;
int64_t x374 = -1LL;
static int32_t x378 = -1;
uint8_t x380 = UINT8_MAX;
volatile int8_t x386 = INT8_MIN;
int32_t t92 = -1;
volatile uint64_t x399 = UINT64_MAX;
int32_t x403 = INT32_MIN;
int64_t x405 = INT64_MAX;
int64_t x406 = 10266529510LL;
uint32_t x418 = 9U;
static int32_t x420 = INT32_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MIN;
	static int32_t t0 = 12;

	t0 = (((x1<=x2)/x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static uint16_t x6 = 10400U;
	static int32_t x7 = -120;
	int32_t x8 = INT32_MAX;
	int32_t t1 = -258012610;

	t1 = (((x5<=x6)/x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 260LLU;
	static int32_t x10 = -1;
	uint16_t x11 = 6993U;
	uint16_t x12 = 6U;
	volatile int32_t t2 = 47212263;

	t2 = (((x9<=x10)/x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static int16_t x14 = INT16_MIN;
	int8_t x15 = -1;
	static volatile uint16_t x16 = UINT16_MAX;

	t3 = (((x13<=x14)/x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x18 = 636U;
	static int8_t x19 = INT8_MIN;
	static int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = -175;

	t4 = (((x17<=x18)/x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 60U;
	uint8_t x22 = 1U;
	int8_t x23 = -1;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 565025555;

	t5 = (((x21<=x22)/x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	int32_t x27 = 50266304;
	volatile uint64_t x28 = UINT64_MAX;
	int32_t t6 = 437686551;

	t6 = (((x25<=x26)/x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x31 = 19;
	uint32_t x32 = UINT32_MAX;

	t7 = (((x29<=x30)/x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x36 = UINT32_MAX;
	int32_t t8 = -354006522;

	t8 = (((x33<=x34)/x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MAX;
	int32_t x40 = -1;
	volatile int32_t t9 = -127124601;

	t9 = (((x37<=x38)/x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile uint16_t x42 = 4018U;
	int16_t x43 = INT16_MIN;
	static uint16_t x44 = 5U;
	int32_t t10 = -127407375;

	t10 = (((x41<=x42)/x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 4491;
	int64_t x46 = -1LL;
	static int32_t x48 = 1287435;

	t11 = (((x45<=x46)/x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int64_t x51 = -1003472875LL;
	static int64_t x52 = -1LL;
	int32_t t12 = -13734274;

	t12 = (((x49<=x50)/x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 7306343LLU;
	static int32_t x54 = INT32_MIN;
	volatile int32_t x56 = -44503;
	volatile int32_t t13 = 1677326;

	t13 = (((x53<=x54)/x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static uint32_t x59 = 1U;
	int32_t x60 = -1;
	static int32_t t14 = 1;

	t14 = (((x57<=x58)/x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = -59;
	int8_t x62 = 48;
	uint16_t x63 = UINT16_MAX;
	uint16_t x64 = 7291U;
	volatile int32_t t15 = 2282;

	t15 = (((x61<=x62)/x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -439836857;
	volatile uint32_t x66 = UINT32_MAX;
	int8_t x67 = INT8_MAX;
	uint8_t x68 = UINT8_MAX;
	static volatile int32_t t16 = 28438783;

	t16 = (((x65<=x66)/x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	volatile int8_t x70 = -7;
	int32_t x72 = -7;
	static volatile int32_t t17 = -29614934;

	t17 = (((x69<=x70)/x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x74 = -1LL;
	int8_t x75 = -1;
	static volatile int32_t t18 = -27353253;

	t18 = (((x73<=x74)/x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 82U;
	uint64_t x78 = 0LLU;
	uint32_t x79 = UINT32_MAX;
	uint16_t x80 = 11860U;
	volatile int32_t t19 = -72;

	t19 = (((x77<=x78)/x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 2528U;
	int64_t x83 = INT64_MIN;

	t20 = (((x81<=x82)/x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int16_t x87 = INT16_MIN;
	volatile int32_t t21 = -285581349;

	t21 = (((x85<=x86)/x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x91 = -30311522089607054LL;
	volatile int8_t x92 = INT8_MIN;
	int32_t t22 = 81482190;

	t22 = (((x89<=x90)/x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -2538;
	uint64_t x94 = 8991672669LLU;
	int64_t x95 = 49042LL;
	int8_t x96 = INT8_MIN;

	t23 = (((x93<=x94)/x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 367809LL;
	volatile int32_t x99 = INT32_MAX;
	int64_t x100 = -10996LL;
	static int32_t t24 = 90068;

	t24 = (((x97<=x98)/x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -1LL;
	volatile int64_t x103 = INT64_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t25 = 0;

	t25 = (((x101<=x102)/x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = 39LL;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 132;

	t26 = (((x105<=x106)/x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -6984703;
	int32_t x110 = -216;
	int8_t x111 = -1;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 1;

	t27 = (((x109<=x110)/x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = INT8_MIN;
	static uint32_t x115 = 305979314U;
	uint16_t x116 = 13U;
	volatile int32_t t28 = -29006312;

	t28 = (((x113<=x114)/x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = -79;
	int64_t x120 = -28920LL;
	int32_t t29 = 1169563;

	t29 = (((x117<=x118)/x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1673639;
	uint8_t x122 = 0U;
	int16_t x123 = -1;
	int64_t x124 = -2846025LL;
	static volatile int32_t t30 = -635;

	t30 = (((x121<=x122)/x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 5354LLU;
	static uint32_t x126 = 2U;
	int32_t x127 = INT32_MAX;
	uint64_t x128 = 48780771959369742LLU;
	static int32_t t31 = 0;

	t31 = (((x125<=x126)/x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x130 = 0;
	uint8_t x131 = UINT8_MAX;
	volatile int32_t t32 = -424694;

	t32 = (((x129<=x130)/x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -510202;
	static int64_t x135 = -1886158LL;
	static int16_t x136 = INT16_MIN;

	t33 = (((x133<=x134)/x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	volatile uint32_t x142 = 7U;
	uint32_t x143 = 555043U;
	uint64_t x144 = 4045LLU;

	t34 = (((x141<=x142)/x143)==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x145 = UINT64_MAX;
	static uint32_t x146 = 7915311U;
	uint32_t x147 = 17340876U;
	static int32_t t35 = -214710;

	t35 = (((x145<=x146)/x147)==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = 1;
	static int8_t x151 = -2;
	volatile uint64_t x152 = UINT64_MAX;
	int32_t t36 = 50415807;

	t36 = (((x149<=x150)/x151)==x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x157 = -1;
	uint16_t x158 = 5U;
	int8_t x159 = 51;
	static int32_t t37 = 0;

	t37 = (((x157<=x158)/x159)==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	volatile int32_t x162 = -1;
	volatile int32_t x163 = INT32_MIN;
	volatile int8_t x164 = 41;
	volatile int32_t t38 = -1;

	t38 = (((x161<=x162)/x163)==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x165 = 638;
	int64_t x166 = INT64_MIN;
	int16_t x167 = 60;
	int16_t x168 = -3;

	t39 = (((x165<=x166)/x167)==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x170 = -1LL;
	int64_t x172 = -30629393LL;

	t40 = (((x169<=x170)/x171)==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = -1;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = 51049205430LLU;
	int32_t t41 = 720264;

	t41 = (((x173<=x174)/x175)==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = 7;
	int16_t x178 = 26;
	uint8_t x179 = 11U;
	uint64_t x180 = 412LLU;
	int32_t t42 = -12173660;

	t42 = (((x177<=x178)/x179)==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x181 = UINT64_MAX;
	uint16_t x182 = 0U;
	volatile int64_t x183 = INT64_MIN;
	uint16_t x184 = UINT16_MAX;

	t43 = (((x181<=x182)/x183)==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -1;
	volatile uint16_t x186 = 19U;
	volatile int16_t x187 = -253;
	static int16_t x188 = -3977;
	int32_t t44 = -359332;

	t44 = (((x185<=x186)/x187)==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t45 = -357;

	t45 = (((x189<=x190)/x191)==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x196 = INT64_MIN;
	int32_t t46 = 781651;

	t46 = (((x193<=x194)/x195)==x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = INT32_MAX;
	static volatile uint16_t x198 = UINT16_MAX;
	volatile int32_t x199 = -28605;
	int32_t x200 = 703435;
	static int32_t t47 = -9100604;

	t47 = (((x197<=x198)/x199)==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -2025;
	int64_t x202 = -2123491883430LL;
	int32_t t48 = 92;

	t48 = (((x201<=x202)/x203)==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x206 = INT16_MAX;
	static int64_t x207 = 13274369571LL;
	uint64_t x208 = 695610689623057078LLU;
	static int32_t t49 = -38637214;

	t49 = (((x205<=x206)/x207)==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x209 = INT64_MAX;
	int32_t x210 = INT32_MIN;
	int32_t x211 = 481;
	static uint16_t x212 = UINT16_MAX;
	int32_t t50 = -3731;

	t50 = (((x209<=x210)/x211)==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 104U;
	volatile uint8_t x214 = 0U;
	static int64_t x215 = 267556305LL;
	volatile uint32_t x216 = UINT32_MAX;

	t51 = (((x213<=x214)/x215)==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x218 = 22U;
	int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;

	t52 = (((x217<=x218)/x219)==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x221 = INT64_MIN;
	static volatile int32_t x222 = INT32_MIN;
	uint32_t x224 = 22058404U;

	t53 = (((x221<=x222)/x223)==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -50427012;
	uint64_t x226 = 729LLU;
	int8_t x227 = -1;
	volatile int32_t t54 = 410295;

	t54 = (((x225<=x226)/x227)==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x229 = -1;
	uint16_t x231 = 2U;
	uint32_t x232 = 4U;
	volatile int32_t t55 = -225;

	t55 = (((x229<=x230)/x231)==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	volatile int64_t x234 = -2004993529263LL;
	int8_t x235 = INT8_MIN;
	static int8_t x236 = INT8_MIN;
	int32_t t56 = -37101;

	t56 = (((x233<=x234)/x235)==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = 2005;
	int64_t x238 = -803812LL;
	volatile int32_t x239 = INT32_MAX;
	int64_t x240 = INT64_MIN;
	int32_t t57 = -842453;

	t57 = (((x237<=x238)/x239)==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -1LL;
	int8_t x243 = INT8_MAX;
	static int32_t x244 = -50099;
	int32_t t58 = 30;

	t58 = (((x241<=x242)/x243)==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x246 = 0;
	volatile int16_t x247 = INT16_MIN;
	int32_t x248 = -1;
	int32_t t59 = 7;

	t59 = (((x245<=x246)/x247)==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x251 = 25U;
	static int32_t t60 = 19852691;

	t60 = (((x249<=x250)/x251)==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x254 = 9U;
	volatile int8_t x255 = INT8_MIN;
	volatile int32_t t61 = -1737;

	t61 = (((x253<=x254)/x255)==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x258 = INT8_MIN;
	uint64_t x259 = 3374605LLU;
	int32_t x260 = INT32_MAX;
	static int32_t t62 = -44;

	t62 = (((x257<=x258)/x259)==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MAX;

	t63 = (((x261<=x262)/x263)==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MAX;
	static int8_t x266 = 18;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = INT8_MIN;

	t64 = (((x265<=x266)/x267)==x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x273 = 0U;
	static uint64_t x275 = 61LLU;
	uint32_t x276 = 1U;
	volatile int32_t t65 = 1;

	t65 = (((x273<=x274)/x275)==x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x277 = 1407;
	static int16_t x279 = -1;
	int32_t x280 = INT32_MIN;
	volatile int32_t t66 = 61181;

	t66 = (((x277<=x278)/x279)==x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x281 = INT64_MIN;
	int16_t x282 = INT16_MAX;
	int8_t x283 = INT8_MIN;
	int32_t t67 = -4776;

	t67 = (((x281<=x282)/x283)==x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = UINT16_MAX;
	static uint64_t x286 = 9526963LLU;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t68 = 4374922;

	t68 = (((x285<=x286)/x287)==x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MAX;
	uint64_t x290 = 2377895327212877LLU;
	int32_t x291 = INT32_MAX;
	static volatile int64_t x292 = -1LL;
	volatile int32_t t69 = -8150970;

	t69 = (((x289<=x290)/x291)==x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x294 = INT64_MIN;

	t70 = (((x293<=x294)/x295)==x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x299 = 1U;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t71 = -13333295;

	t71 = (((x297<=x298)/x299)==x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x301 = 3U;
	uint16_t x302 = 447U;
	int32_t x303 = -1;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t72 = 2093262;

	t72 = (((x301<=x302)/x303)==x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = INT8_MAX;
	uint16_t x306 = 20U;
	static int16_t x307 = INT16_MAX;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t73 = 20;

	t73 = (((x305<=x306)/x307)==x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = 14;
	int64_t x310 = INT64_MIN;
	int64_t x312 = INT64_MAX;
	int32_t t74 = 536;

	t74 = (((x309<=x310)/x311)==x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x313 = UINT8_MAX;
	int8_t x314 = 63;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t75 = -44370;

	t75 = (((x313<=x314)/x315)==x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = 3011748U;
	int16_t x322 = -245;
	int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MAX;

	t76 = (((x321<=x322)/x323)==x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = -542248820LL;
	int16_t x326 = INT16_MIN;
	int8_t x328 = INT8_MAX;
	static int32_t t77 = 48837792;

	t77 = (((x325<=x326)/x327)==x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x329 = -2;
	uint16_t x330 = UINT16_MAX;
	static int8_t x331 = 6;

	t78 = (((x329<=x330)/x331)==x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x334 = INT64_MIN;
	int64_t x336 = INT64_MIN;
	int32_t t79 = -1;

	t79 = (((x333<=x334)/x335)==x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = 3014U;
	int8_t x339 = -11;

	t80 = (((x337<=x338)/x339)==x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = INT8_MAX;
	static volatile uint8_t x342 = UINT8_MAX;
	int16_t x343 = INT16_MIN;
	volatile int64_t x344 = INT64_MIN;

	t81 = (((x341<=x342)/x343)==x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = 1U;
	volatile uint64_t x346 = 2639534555532992LLU;
	int64_t x347 = INT64_MAX;
	static int8_t x348 = -19;
	int32_t t82 = 51136;

	t82 = (((x345<=x346)/x347)==x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = 11U;
	int8_t x350 = -1;
	static int32_t x351 = INT32_MAX;
	static volatile int32_t x352 = INT32_MIN;

	t83 = (((x349<=x350)/x351)==x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	int8_t x355 = -1;
	uint32_t x356 = UINT32_MAX;

	t84 = (((x353<=x354)/x355)==x356);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x357 = -1;
	static volatile int16_t x358 = 6;
	int8_t x360 = INT8_MAX;
	int32_t t85 = 90902845;

	t85 = (((x357<=x358)/x359)==x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x362 = INT8_MAX;
	int32_t x363 = INT32_MAX;
	volatile int64_t x364 = INT64_MIN;
	volatile int32_t t86 = -1;

	t86 = (((x361<=x362)/x363)==x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = -236073200039559514LL;
	static int16_t x366 = INT16_MAX;
	uint16_t x367 = UINT16_MAX;
	static uint8_t x368 = 3U;
	volatile int32_t t87 = 1279;

	t87 = (((x365<=x366)/x367)==x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x369 = INT8_MIN;
	int32_t x370 = -1;
	int64_t x371 = INT64_MAX;
	int16_t x372 = -1;

	t88 = (((x369<=x370)/x371)==x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x373 = 110U;
	int64_t x375 = INT64_MIN;
	int32_t x376 = 1;
	volatile int32_t t89 = 196;

	t89 = (((x373<=x374)/x375)==x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x377 = INT8_MAX;
	static int64_t x379 = INT64_MIN;
	static volatile int32_t t90 = -12013852;

	t90 = (((x377<=x378)/x379)==x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = -1;
	int64_t x382 = 245549LL;
	uint32_t x383 = UINT32_MAX;
	uint8_t x384 = 28U;
	volatile int32_t t91 = -288622;

	t91 = (((x381<=x382)/x383)==x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MIN;
	int16_t x387 = INT16_MIN;
	static int32_t x388 = INT32_MIN;

	t92 = (((x385<=x386)/x387)==x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = INT64_MIN;
	static volatile int32_t x390 = 170250341;
	int64_t x391 = INT64_MAX;
	int32_t x392 = -13;
	int32_t t93 = -39053318;

	t93 = (((x389<=x390)/x391)==x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x393 = -1;
	volatile int8_t x394 = INT8_MAX;
	static int32_t x395 = INT32_MAX;
	uint8_t x396 = 25U;
	static int32_t t94 = 388105;

	t94 = (((x393<=x394)/x395)==x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = 1420LLU;
	static volatile int32_t x398 = INT32_MIN;
	static int32_t x400 = INT32_MAX;
	int32_t t95 = 3;

	t95 = (((x397<=x398)/x399)==x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x401 = UINT64_MAX;
	static uint8_t x402 = UINT8_MAX;
	uint32_t x404 = 1483U;
	volatile int32_t t96 = 1908;

	t96 = (((x401<=x402)/x403)==x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x407 = 1U;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t97 = 7;

	t97 = (((x405<=x406)/x407)==x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = 7156340;
	static uint8_t x411 = 1U;
	uint16_t x412 = 1495U;
	volatile int32_t t98 = 54;

	t98 = (((x409<=x410)/x411)==x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x417 = UINT32_MAX;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t t99 = 1;

	t99 = (((x417<=x418)/x419)==x420);

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

