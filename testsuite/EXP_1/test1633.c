#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = INT64_MAX;
static int32_t x6 = INT32_MIN;
static int32_t t3 = 722396072;
int32_t x31 = -1;
int32_t x32 = INT32_MAX;
int32_t t7 = -454186;
volatile int8_t x35 = INT8_MAX;
volatile int16_t x44 = 2;
volatile uint8_t x54 = 126U;
static int32_t x58 = -1;
static volatile int16_t x65 = INT16_MIN;
int32_t t16 = -28683617;
static volatile int8_t x75 = INT8_MIN;
volatile int64_t x76 = 142234710738156678LL;
int32_t t18 = 3838196;
uint32_t x79 = UINT32_MAX;
static uint64_t x83 = 1666261162939559LLU;
int64_t x95 = INT64_MIN;
static uint64_t x96 = UINT64_MAX;
static uint8_t x98 = UINT8_MAX;
int8_t x102 = -30;
static volatile uint8_t x107 = UINT8_MAX;
int32_t x112 = 15;
uint32_t x118 = 61988U;
int32_t x130 = INT32_MAX;
static volatile uint64_t x131 = UINT64_MAX;
volatile int16_t x132 = -217;
int32_t t33 = -226;
volatile int64_t x139 = INT64_MIN;
volatile int32_t t35 = -58;
uint16_t x146 = 69U;
int32_t x151 = INT32_MIN;
volatile int32_t t37 = -1;
volatile int32_t t38 = 132091431;
int32_t x157 = -1;
int32_t t39 = 1;
int8_t x175 = 3;
volatile int32_t t43 = 22;
int16_t x185 = INT16_MIN;
int32_t t46 = 910649966;
int32_t x195 = INT32_MIN;
static volatile int8_t x204 = INT8_MIN;
volatile int32_t t50 = 142;
int8_t x206 = INT8_MAX;
int32_t x207 = -875833;
int16_t x212 = -8;
volatile int16_t x213 = -1;
int32_t t54 = 422;
int16_t x223 = 883;
uint32_t x224 = UINT32_MAX;
int32_t t55 = -17;
uint16_t x227 = 6073U;
int32_t t56 = 7075;
static volatile uint64_t x236 = 403049134192445LLU;
static volatile int64_t x239 = INT64_MAX;
int32_t x243 = INT32_MIN;
static volatile int32_t x245 = 2898;
int32_t x247 = INT32_MIN;
static volatile int64_t x248 = -1LL;
static uint16_t x253 = UINT16_MAX;
int8_t x255 = -14;
static volatile int32_t t64 = -95;
static uint8_t x269 = UINT8_MAX;
uint16_t x270 = UINT16_MAX;
int32_t t67 = 6;
volatile uint8_t x274 = 1U;
uint64_t x279 = 27LLU;
uint32_t x282 = 16U;
volatile int8_t x285 = INT8_MIN;
int16_t x286 = -104;
static int32_t t72 = -30;
uint32_t x302 = 113885U;
int64_t x311 = INT64_MIN;
int32_t x314 = INT32_MIN;
uint64_t x318 = 14954LLU;
uint16_t x325 = 1U;
uint64_t x326 = 1LLU;
int16_t x345 = INT16_MIN;
static int16_t x348 = INT16_MIN;
int8_t x358 = -1;
int8_t x361 = 1;
int32_t t90 = -330936;
static int8_t x372 = -1;
static int16_t x373 = INT16_MAX;
static volatile uint16_t x383 = 1U;
volatile int32_t t97 = 55;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	volatile int64_t x2 = INT64_MIN;
	int64_t x4 = 241259631447LL;
	static volatile int32_t t0 = -111596527;

	t0 = (((x1<=x2)<x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 8909386069513370868LLU;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = 2390080992034LLU;
	static volatile int32_t t1 = 9330;

	t1 = (((x5<=x6)<x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int32_t x10 = INT32_MAX;
	int64_t x11 = -1LL;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 3783;

	t2 = (((x9<=x10)<x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint32_t x14 = 704380U;
	static int32_t x15 = INT32_MAX;
	static uint32_t x16 = 1U;

	t3 = (((x13<=x14)<x15)==x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint8_t x18 = 7U;
	static uint16_t x19 = 10663U;
	int64_t x20 = -6977172028064594LL;
	int32_t t4 = -40646;

	t4 = (((x17<=x18)<x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 2U;
	int32_t x22 = INT32_MIN;
	int8_t x23 = 41;
	uint8_t x24 = 39U;
	static int32_t t5 = 2493002;

	t5 = (((x21<=x22)<x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint32_t x26 = UINT32_MAX;
	int32_t x27 = -1;
	int64_t x28 = 152699857LL;
	volatile int32_t t6 = -1640;

	t6 = (((x25<=x26)<x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	uint8_t x30 = UINT8_MAX;

	t7 = (((x29<=x30)<x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int32_t x34 = -1;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 156919;

	t8 = (((x33<=x34)<x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 10;
	int64_t x38 = -21115379955163LL;
	uint16_t x39 = 11U;
	int8_t x40 = -2;
	volatile int32_t t9 = 29;

	t9 = (((x37<=x38)<x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 1684698910LLU;
	static int16_t x42 = INT16_MAX;
	uint32_t x43 = 18U;
	volatile int32_t t10 = -165228471;

	t10 = (((x41<=x42)<x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = -53756;
	int32_t x46 = -1;
	static int64_t x47 = INT64_MAX;
	uint8_t x48 = 0U;
	int32_t t11 = -988;

	t11 = (((x45<=x46)<x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile uint8_t x50 = UINT8_MAX;
	int32_t x51 = 319155619;
	uint32_t x52 = UINT32_MAX;
	int32_t t12 = 2228;

	t12 = (((x49<=x50)<x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	int16_t x55 = 293;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -13;

	t13 = (((x53<=x54)<x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	int32_t x59 = -1;
	int64_t x60 = 12761LL;
	int32_t t14 = -350;

	t14 = (((x57<=x58)<x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -12084638;
	int32_t x62 = -1;
	int64_t x63 = 5413000197110849LL;
	volatile int64_t x64 = -10618388780LL;
	static volatile int32_t t15 = 3;

	t15 = (((x61<=x62)<x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x66 = INT16_MIN;
	int8_t x67 = 1;
	int64_t x68 = INT64_MAX;

	t16 = (((x65<=x66)<x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint16_t x70 = UINT16_MAX;
	volatile int32_t x71 = 168989161;
	uint16_t x72 = 219U;
	static volatile int32_t t17 = 719425093;

	t17 = (((x69<=x70)<x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 1U;
	int16_t x74 = INT16_MAX;

	t18 = (((x73<=x74)<x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 5LL;
	int16_t x78 = 0;
	int32_t x80 = 23776156;
	int32_t t19 = 4155445;

	t19 = (((x77<=x78)<x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint32_t x82 = 1U;
	static int8_t x84 = -1;
	int32_t t20 = 1542040;

	t20 = (((x81<=x82)<x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 1;
	int64_t x86 = -1LL;
	uint16_t x87 = 25U;
	volatile uint8_t x88 = 115U;
	int32_t t21 = -1;

	t21 = (((x85<=x86)<x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	uint8_t x90 = 0U;
	int64_t x91 = 107177150370981103LL;
	static int8_t x92 = -1;
	int32_t t22 = 1891563;

	t22 = (((x89<=x90)<x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile uint32_t x94 = 12203U;
	volatile int32_t t23 = -42180;

	t23 = (((x93<=x94)<x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int64_t x99 = -1LL;
	volatile int16_t x100 = INT16_MAX;
	volatile int32_t t24 = -3967;

	t24 = (((x97<=x98)<x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	volatile uint64_t x103 = UINT64_MAX;
	int16_t x104 = 7;
	volatile int32_t t25 = 14681663;

	t25 = (((x101<=x102)<x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -35;
	static uint16_t x106 = UINT16_MAX;
	uint8_t x108 = 9U;
	volatile int32_t t26 = 49;

	t26 = (((x105<=x106)<x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = 1005491038678233701LL;
	int64_t x110 = -1LL;
	uint16_t x111 = 29805U;
	volatile int32_t t27 = -54498353;

	t27 = (((x109<=x110)<x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	int32_t x114 = 2;
	volatile int8_t x115 = 1;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = -503352708;

	t28 = (((x113<=x114)<x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x119 = 1;
	static volatile uint64_t x120 = UINT64_MAX;
	int32_t t29 = -235060;

	t29 = (((x117<=x118)<x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = 282;
	static int32_t x122 = INT32_MIN;
	int32_t x123 = INT32_MIN;
	volatile int16_t x124 = INT16_MIN;
	static int32_t t30 = -79;

	t30 = (((x121<=x122)<x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = UINT32_MAX;
	int64_t x126 = -31LL;
	int64_t x127 = -1LL;
	int16_t x128 = 507;
	int32_t t31 = -26097168;

	t31 = (((x125<=x126)<x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -8094998449376LL;
	static int32_t t32 = -4641;

	t32 = (((x129<=x130)<x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 1765545U;
	int32_t x134 = INT32_MAX;
	volatile int64_t x135 = INT64_MIN;
	uint8_t x136 = UINT8_MAX;

	t33 = (((x133<=x134)<x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -4;
	uint64_t x138 = 1LLU;
	int64_t x140 = -1LL;
	volatile int32_t t34 = 1029580654;

	t34 = (((x137<=x138)<x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	volatile int16_t x142 = -2;
	static int64_t x143 = -4052795584050175LL;
	volatile uint32_t x144 = 1969443U;

	t35 = (((x141<=x142)<x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x147 = UINT32_MAX;
	uint32_t x148 = UINT32_MAX;
	static int32_t t36 = -11352;

	t36 = (((x145<=x146)<x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = 5614;
	volatile int16_t x150 = INT16_MAX;
	int16_t x152 = INT16_MAX;

	t37 = (((x149<=x150)<x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	static volatile int8_t x154 = INT8_MAX;
	int8_t x155 = 11;
	uint64_t x156 = 171LLU;

	t38 = (((x153<=x154)<x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x158 = INT8_MAX;
	uint64_t x159 = 3LLU;
	uint32_t x160 = UINT32_MAX;

	t39 = (((x157<=x158)<x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile uint8_t x162 = UINT8_MAX;
	int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	static int32_t t40 = 1333;

	t40 = (((x161<=x162)<x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	static int64_t x166 = -1592LL;
	uint64_t x167 = 302942340598LLU;
	uint32_t x168 = UINT32_MAX;
	static int32_t t41 = 10;

	t41 = (((x165<=x166)<x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	uint16_t x170 = 29U;
	static uint16_t x171 = 116U;
	int16_t x172 = 6;
	int32_t t42 = 130101004;

	t42 = (((x169<=x170)<x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -663;
	uint8_t x174 = 0U;
	int64_t x176 = -3312528552LL;

	t43 = (((x173<=x174)<x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	int16_t x178 = INT16_MAX;
	static int8_t x179 = INT8_MAX;
	volatile uint8_t x180 = 5U;
	int32_t t44 = -2442723;

	t44 = (((x177<=x178)<x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int32_t x182 = INT32_MIN;
	volatile uint32_t x183 = 168844031U;
	static int16_t x184 = INT16_MIN;
	int32_t t45 = -30;

	t45 = (((x181<=x182)<x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x186 = 0;
	static int64_t x187 = -1LL;
	int8_t x188 = INT8_MIN;

	t46 = (((x185<=x186)<x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	uint8_t x190 = 28U;
	uint64_t x191 = 205937147LLU;
	uint8_t x192 = 3U;
	static int32_t t47 = 953;

	t47 = (((x189<=x190)<x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	volatile uint64_t x194 = UINT64_MAX;
	uint8_t x196 = 54U;
	static int32_t t48 = -1143;

	t48 = (((x193<=x194)<x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -15;
	static int8_t x198 = INT8_MIN;
	volatile uint8_t x199 = 9U;
	int16_t x200 = INT16_MAX;
	int32_t t49 = 13074299;

	t49 = (((x197<=x198)<x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 0LLU;
	static volatile int16_t x202 = -8;
	volatile int32_t x203 = 345;

	t50 = (((x201<=x202)<x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -1;
	int16_t x208 = INT16_MAX;
	int32_t t51 = 25779;

	t51 = (((x205<=x206)<x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x209 = -25297123;
	static int8_t x210 = -1;
	uint32_t x211 = 118U;
	int32_t t52 = 9;

	t52 = (((x209<=x210)<x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = INT16_MAX;
	static uint16_t x215 = UINT16_MAX;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -3;

	t53 = (((x213<=x214)<x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 34U;
	static volatile int8_t x218 = 0;
	int16_t x219 = INT16_MAX;
	int64_t x220 = INT64_MIN;

	t54 = (((x217<=x218)<x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int64_t x222 = -95632432LL;

	t55 = (((x221<=x222)<x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 32740429919509906LL;
	volatile int16_t x226 = -1;
	static volatile int8_t x228 = INT8_MIN;

	t56 = (((x225<=x226)<x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -48306948;
	volatile int32_t x230 = INT32_MAX;
	static uint8_t x231 = 3U;
	uint32_t x232 = UINT32_MAX;
	static int32_t t57 = 24407;

	t57 = (((x229<=x230)<x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MAX;
	int32_t x235 = 1484;
	int32_t t58 = -40999;

	t58 = (((x233<=x234)<x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 4U;
	int64_t x238 = INT64_MAX;
	uint64_t x240 = 22847859LLU;
	static int32_t t59 = -10;

	t59 = (((x237<=x238)<x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 26979U;
	int16_t x242 = -7;
	static int32_t x244 = -1;
	volatile int32_t t60 = -511618716;

	t60 = (((x241<=x242)<x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x246 = UINT32_MAX;
	int32_t t61 = -491932;

	t61 = (((x245<=x246)<x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MAX;
	int64_t x250 = INT64_MIN;
	int8_t x251 = 1;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t62 = -219973;

	t62 = (((x249<=x250)<x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x254 = -5678173285323LL;
	int16_t x256 = INT16_MIN;
	static volatile int32_t t63 = -629602560;

	t63 = (((x253<=x254)<x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	uint16_t x258 = 8U;
	static uint8_t x259 = 91U;
	int8_t x260 = INT8_MAX;

	t64 = (((x257<=x258)<x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = 0;
	int64_t x262 = -68016842910093LL;
	int16_t x263 = INT16_MIN;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 2000060;

	t65 = (((x261<=x262)<x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	uint32_t x266 = 188422U;
	int32_t x267 = INT32_MAX;
	static uint8_t x268 = 20U;
	int32_t t66 = -68557;

	t66 = (((x265<=x266)<x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x271 = -1LL;
	uint64_t x272 = 1525468570177431LLU;

	t67 = (((x269<=x270)<x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint8_t x275 = 1U;
	static volatile int64_t x276 = -1053706455919LL;
	int32_t t68 = 150909;

	t68 = (((x273<=x274)<x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -1;
	int16_t x278 = INT16_MIN;
	static uint16_t x280 = 9U;
	volatile int32_t t69 = 1027;

	t69 = (((x277<=x278)<x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	uint32_t x283 = 183826140U;
	static int8_t x284 = -7;
	volatile int32_t t70 = -228007952;

	t70 = (((x281<=x282)<x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x287 = -67125646;
	uint32_t x288 = 279579U;
	int32_t t71 = -2392259;

	t71 = (((x285<=x286)<x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint8_t x290 = 0U;
	int32_t x291 = -1;
	volatile uint64_t x292 = UINT64_MAX;

	t72 = (((x289<=x290)<x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	uint16_t x294 = 245U;
	int16_t x295 = INT16_MIN;
	int64_t x296 = -2523LL;
	volatile int32_t t73 = -157;

	t73 = (((x293<=x294)<x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	uint32_t x298 = 652286U;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 10;

	t74 = (((x297<=x298)<x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -1;
	int8_t x303 = INT8_MAX;
	volatile uint16_t x304 = 3289U;
	int32_t t75 = 4;

	t75 = (((x301<=x302)<x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = 3650;
	int64_t x307 = 3060378LL;
	volatile int32_t x308 = INT32_MIN;
	static int32_t t76 = -90271709;

	t76 = (((x305<=x306)<x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = 2815;
	static volatile uint64_t x310 = 1408130351LLU;
	int8_t x312 = -6;
	int32_t t77 = -657295;

	t77 = (((x309<=x310)<x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	volatile uint32_t x315 = 87863U;
	int8_t x316 = INT8_MAX;
	int32_t t78 = -28197137;

	t78 = (((x313<=x314)<x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	static int8_t x319 = -1;
	volatile int16_t x320 = 1;
	int32_t t79 = -1750;

	t79 = (((x317<=x318)<x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	static uint16_t x322 = UINT16_MAX;
	volatile uint16_t x323 = 144U;
	static int16_t x324 = -1;
	volatile int32_t t80 = -343711432;

	t80 = (((x321<=x322)<x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x327 = INT64_MAX;
	int16_t x328 = 373;
	volatile int32_t t81 = 161128;

	t81 = (((x325<=x326)<x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 426391U;
	int32_t x330 = -1;
	uint64_t x331 = UINT64_MAX;
	uint16_t x332 = 2181U;
	volatile int32_t t82 = 89;

	t82 = (((x329<=x330)<x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 10U;
	int64_t x334 = INT64_MIN;
	int16_t x335 = -1;
	int8_t x336 = INT8_MIN;
	int32_t t83 = 9347;

	t83 = (((x333<=x334)<x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 0U;
	volatile int32_t x338 = 94278572;
	int64_t x339 = -1453LL;
	static int64_t x340 = INT64_MIN;
	static volatile int32_t t84 = 3;

	t84 = (((x337<=x338)<x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static int64_t x342 = 383LL;
	uint8_t x343 = 75U;
	volatile int64_t x344 = INT64_MIN;
	volatile int32_t t85 = 32695;

	t85 = (((x341<=x342)<x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = INT32_MIN;
	volatile int32_t x347 = INT32_MAX;
	int32_t t86 = 1210;

	t86 = (((x345<=x346)<x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	int64_t x351 = -3808142799888598LL;
	static uint32_t x352 = 5934718U;
	volatile int32_t t87 = 455374;

	t87 = (((x349<=x350)<x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	int8_t x356 = -1;
	int32_t t88 = -21;

	t88 = (((x353<=x354)<x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = -1;
	int16_t x359 = INT16_MIN;
	uint16_t x360 = 3U;
	volatile int32_t t89 = -2;

	t89 = (((x357<=x358)<x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x362 = INT64_MIN;
	static int64_t x363 = INT64_MIN;
	int8_t x364 = -18;

	t90 = (((x361<=x362)<x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x365 = 2093606982515522LLU;
	volatile int8_t x366 = INT8_MIN;
	uint8_t x367 = 7U;
	int64_t x368 = INT64_MAX;
	volatile int32_t t91 = 1;

	t91 = (((x365<=x366)<x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int64_t x370 = INT64_MIN;
	static uint16_t x371 = 78U;
	volatile int32_t t92 = 29279;

	t92 = (((x369<=x370)<x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MIN;
	static int32_t x375 = 749;
	int64_t x376 = INT64_MAX;
	volatile int32_t t93 = -13063;

	t93 = (((x373<=x374)<x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	volatile int32_t x378 = INT32_MAX;
	int16_t x379 = INT16_MIN;
	int64_t x380 = 38892263885089LL;
	volatile int32_t t94 = -25950;

	t94 = (((x377<=x378)<x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 6U;
	int16_t x382 = 1;
	static uint8_t x384 = UINT8_MAX;
	int32_t t95 = 3;

	t95 = (((x381<=x382)<x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MAX;
	uint8_t x386 = UINT8_MAX;
	uint32_t x387 = 1351659476U;
	int64_t x388 = 2335LL;
	int32_t t96 = -7640;

	t96 = (((x385<=x386)<x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -13LL;
	int64_t x390 = 511557LL;
	int16_t x391 = -1;
	int32_t x392 = INT32_MAX;

	t97 = (((x389<=x390)<x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 3;
	static uint8_t x394 = 9U;
	static int8_t x395 = INT8_MIN;
	uint64_t x396 = 20419762396LLU;
	static volatile int32_t t98 = 535873;

	t98 = (((x393<=x394)<x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = 6U;
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MAX;
	int64_t x400 = -49142LL;
	static volatile int32_t t99 = 827281;

	t99 = (((x397<=x398)<x399)==x400);

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

