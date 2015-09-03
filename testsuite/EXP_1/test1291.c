#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 24738710U;
volatile int32_t t1 = -3540424;
static int64_t x9 = INT64_MIN;
volatile uint64_t x11 = 6899371861908328LLU;
volatile uint16_t x15 = 60U;
volatile int32_t t3 = 7210;
int16_t x19 = INT16_MAX;
int64_t x24 = -326820834129LL;
int16_t x27 = INT16_MAX;
uint64_t x32 = 26622LLU;
volatile uint32_t x42 = UINT32_MAX;
int16_t x47 = -1;
uint16_t x48 = UINT16_MAX;
int8_t x56 = -1;
int32_t t13 = -1219;
uint8_t x59 = 0U;
int32_t t15 = 2;
volatile int32_t t16 = 298;
int32_t x69 = 18028;
uint8_t x71 = 0U;
int64_t x74 = INT64_MIN;
volatile int64_t x78 = 60965LL;
int16_t x83 = INT16_MIN;
int32_t x87 = INT32_MIN;
int16_t x99 = -1;
static int32_t t27 = -1;
static uint16_t x118 = 120U;
static volatile int32_t t29 = 0;
int32_t x125 = INT32_MIN;
int8_t x136 = INT8_MIN;
volatile int8_t x140 = -1;
int16_t x142 = -1;
int16_t x145 = -1;
volatile uint16_t x147 = 385U;
static volatile int32_t t35 = 893;
uint8_t x150 = 49U;
volatile int32_t t37 = 0;
uint32_t x157 = UINT32_MAX;
volatile uint16_t x160 = UINT16_MAX;
int64_t x165 = -1LL;
volatile int16_t x169 = 236;
int32_t x171 = INT32_MIN;
int64_t x172 = -1LL;
int16_t x173 = 1;
int8_t x180 = -1;
volatile int32_t t44 = 0;
static volatile uint8_t x188 = 61U;
int16_t x190 = INT16_MIN;
static int16_t x192 = -13;
int64_t x196 = INT64_MIN;
int32_t x200 = -65959785;
int32_t t48 = -215829;
static int8_t x202 = -1;
volatile int16_t x208 = INT16_MIN;
int16_t x213 = -1;
uint8_t x217 = 6U;
uint16_t x220 = 1757U;
int32_t t53 = 1389;
uint64_t x221 = 9634677LLU;
int16_t x223 = 5;
uint8_t x227 = 1U;
static int32_t x229 = -1;
uint16_t x230 = 857U;
volatile uint16_t x237 = 0U;
uint8_t x239 = 75U;
int32_t t58 = -854286;
volatile int32_t t59 = 16997;
static uint64_t t60 = 50LLU;
uint16_t x250 = 16U;
uint8_t x251 = UINT8_MAX;
int64_t t61 = 3362624302901964LL;
int8_t x253 = INT8_MAX;
volatile int32_t x255 = -565634;
uint8_t x256 = UINT8_MAX;
static uint32_t x259 = 66U;
int32_t x261 = INT32_MIN;
volatile int32_t t69 = 3854674;
static int64_t x289 = INT64_MIN;
static uint32_t t71 = 201U;
int8_t x295 = INT8_MIN;
uint16_t x300 = UINT16_MAX;
volatile int32_t t73 = -180;
int8_t x319 = INT8_MAX;
uint64_t x322 = 250538951966708819LLU;
volatile uint8_t x326 = 28U;
int32_t t79 = 0;
static int8_t x333 = INT8_MAX;
volatile int32_t x334 = -100842472;
volatile int64_t t81 = 560073594895LL;
volatile int64_t x340 = INT64_MAX;
static int64_t t82 = -8161LL;
uint8_t x341 = UINT8_MAX;
int64_t x345 = INT64_MIN;
int16_t x359 = -57;
int8_t x375 = -1;
volatile uint64_t t90 = 772LLU;
static volatile int16_t x383 = 91;
int16_t x384 = INT16_MAX;
volatile int64_t x388 = -1LL;
int64_t t93 = -44589LL;
int64_t x395 = -1LL;
static uint32_t t95 = 3U;
uint32_t x399 = 73936U;
static int32_t t96 = 582980;
int32_t x401 = INT32_MAX;
volatile int8_t x402 = INT8_MAX;
int16_t x405 = INT16_MIN;
volatile int64_t t98 = -4065LL;


void f0(void) {
	int64_t x1 = 1941408669LL;
	volatile uint16_t x2 = UINT16_MAX;
	static uint32_t x3 = UINT32_MAX;
	uint32_t x4 = 477414U;

	t0 = (((x1==x2)<x3)/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 3422744331529LLU;
	int8_t x6 = INT8_MAX;
	volatile int64_t x7 = INT64_MAX;
	uint8_t x8 = 39U;

	t1 = (((x5==x6)<x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -481320;

	t2 = (((x9==x10)<x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint16_t x14 = 164U;
	uint8_t x16 = 112U;

	t3 = (((x13==x14)<x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -127;
	volatile int8_t x18 = 0;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = 430981;

	t4 = (((x17==x18)<x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 6U;
	volatile uint16_t x22 = UINT16_MAX;
	int8_t x23 = -1;
	volatile int64_t t5 = 1910LL;

	t5 = (((x21==x22)<x23)/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	static int8_t x26 = -1;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 16228;

	t6 = (((x25==x26)<x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	int32_t x30 = -147029572;
	uint8_t x31 = 27U;
	uint64_t t7 = 745848923124863410LLU;

	t7 = (((x29==x30)<x31)/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 113283018898305947LL;
	uint32_t x34 = 155351705U;
	int32_t x35 = INT32_MAX;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = -192313409;

	t8 = (((x33==x34)<x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = -119;
	int64_t x38 = INT64_MIN;
	int8_t x39 = -1;
	uint32_t x40 = 200U;
	uint32_t t9 = 143534057U;

	t9 = (((x37==x38)<x39)/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	static uint16_t x43 = UINT16_MAX;
	int32_t x44 = INT32_MAX;
	int32_t t10 = 285;

	t10 = (((x41==x42)<x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int32_t x46 = -1;
	static int32_t t11 = 734221;

	t11 = (((x45==x46)<x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	volatile int64_t x50 = INT64_MIN;
	int8_t x51 = 16;
	static int32_t x52 = -281897445;
	volatile int32_t t12 = -4578;

	t12 = (((x49==x50)<x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 670117U;
	int32_t x54 = -1;
	uint16_t x55 = 1U;

	t13 = (((x53==x54)<x55)/x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 6490781494047002271LLU;
	uint64_t x58 = 33LLU;
	uint16_t x60 = 294U;
	volatile int32_t t14 = -499;

	t14 = (((x57==x58)<x59)/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int8_t x62 = 0;
	uint32_t x63 = 2058526U;
	static int8_t x64 = -1;

	t15 = (((x61==x62)<x63)/x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint8_t x66 = 2U;
	uint8_t x67 = 32U;
	static int8_t x68 = -1;

	t16 = (((x65==x66)<x67)/x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -14;
	int32_t x72 = 179605;
	int32_t t17 = -358147;

	t17 = (((x69==x70)<x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 34U;
	int64_t x75 = INT64_MAX;
	uint16_t x76 = UINT16_MAX;
	static volatile int32_t t18 = -2900169;

	t18 = (((x73==x74)<x75)/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 116U;
	uint16_t x79 = 123U;
	int32_t x80 = 11;
	volatile int32_t t19 = -1313853;

	t19 = (((x77==x78)<x79)/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	volatile int8_t x82 = INT8_MIN;
	int64_t x84 = INT64_MIN;
	static int64_t t20 = 52LL;

	t20 = (((x81==x82)<x83)/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int8_t x86 = -1;
	volatile uint32_t x88 = 26751U;
	static uint32_t t21 = 376950394U;

	t21 = (((x85==x86)<x87)/x88);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -510645;
	static uint32_t x90 = UINT32_MAX;
	int16_t x91 = -1;
	int32_t x92 = INT32_MIN;
	static int32_t t22 = 917;

	t22 = (((x89==x90)<x91)/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x94 = 18;
	uint32_t x95 = 388855U;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = 142105167;

	t23 = (((x93==x94)<x95)/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -2888;
	int8_t x98 = INT8_MIN;
	int16_t x100 = 72;
	int32_t t24 = -233460058;

	t24 = (((x97==x98)<x99)/x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static uint32_t x102 = UINT32_MAX;
	int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MAX;
	volatile int64_t t25 = 896193084633045610LL;

	t25 = (((x101==x102)<x103)/x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = 616;
	int32_t x107 = 1;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t26 = 55286587799779LLU;

	t26 = (((x105==x106)<x107)/x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 4U;
	static int64_t x110 = INT64_MIN;
	static uint64_t x111 = 425830569853151882LLU;
	uint16_t x112 = UINT16_MAX;

	t27 = (((x109==x110)<x111)/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	static volatile int32_t x119 = -1;
	static int16_t x120 = -1;
	volatile int32_t t28 = -19;

	t28 = (((x117==x118)<x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -113953818294868048LL;
	static uint64_t x122 = 920314266LLU;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MIN;

	t29 = (((x121==x122)<x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x126 = -10577310LL;
	uint8_t x127 = UINT8_MAX;
	volatile int64_t x128 = INT64_MAX;
	volatile int64_t t30 = -87011LL;

	t30 = (((x125==x126)<x127)/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = 11578661;
	uint16_t x130 = 924U;
	int16_t x131 = -1;
	volatile uint64_t x132 = UINT64_MAX;
	volatile uint64_t t31 = 7LLU;

	t31 = (((x129==x130)<x131)/x132);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 11024231U;
	uint32_t x134 = 57546355U;
	int16_t x135 = INT16_MAX;
	static volatile int32_t t32 = 184;

	t32 = (((x133==x134)<x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 1906439LLU;
	static uint64_t x138 = 5713197586LLU;
	uint8_t x139 = UINT8_MAX;
	int32_t t33 = -1;

	t33 = (((x137==x138)<x139)/x140);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	int64_t x143 = INT64_MAX;
	static int64_t x144 = -81236809406LL;
	int64_t t34 = -443371139369LL;

	t34 = (((x141==x142)<x143)/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x146 = -1;
	int8_t x148 = -1;

	t35 = (((x145==x146)<x147)/x148);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -1LL;
	uint16_t x151 = 2U;
	static int64_t x152 = INT64_MAX;
	volatile int64_t t36 = -19003001576LL;

	t36 = (((x149==x150)<x151)/x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -1LL;
	int16_t x154 = INT16_MAX;
	uint32_t x155 = UINT32_MAX;
	int16_t x156 = INT16_MIN;

	t37 = (((x153==x154)<x155)/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x158 = 873U;
	int16_t x159 = INT16_MIN;
	volatile int32_t t38 = -67741;

	t38 = (((x157==x158)<x159)/x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 0U;
	volatile int16_t x162 = -6821;
	uint32_t x163 = 268293073U;
	volatile uint8_t x164 = UINT8_MAX;
	volatile int32_t t39 = -2553821;

	t39 = (((x161==x162)<x163)/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = -1LL;
	int64_t x167 = -1LL;
	int64_t x168 = -1LL;
	volatile int64_t t40 = 346058372430970LL;

	t40 = (((x165==x166)<x167)/x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x170 = -1;
	int64_t t41 = -3940864912008110LL;

	t41 = (((x169==x170)<x171)/x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x174 = 54001403U;
	static uint64_t x175 = 776902941692LLU;
	static int8_t x176 = -1;
	int32_t t42 = 790;

	t42 = (((x173==x174)<x175)/x176);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MAX;
	volatile uint64_t x179 = 377778934516LLU;
	volatile int32_t t43 = -802591802;

	t43 = (((x177==x178)<x179)/x180);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = -1;
	static int32_t x182 = INT32_MIN;
	uint64_t x183 = 512492753767046LLU;
	int32_t x184 = -8094;

	t44 = (((x181==x182)<x183)/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 0U;
	static int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MIN;
	int32_t t45 = 47;

	t45 = (((x185==x186)<x187)/x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x189 = 3297574761984507300LLU;
	int16_t x191 = INT16_MAX;
	static volatile int32_t t46 = 418150;

	t46 = (((x189==x190)<x191)/x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x193 = UINT8_MAX;
	int8_t x194 = INT8_MIN;
	static int32_t x195 = INT32_MIN;
	volatile int64_t t47 = 52790659313263035LL;

	t47 = (((x193==x194)<x195)/x196);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = UINT32_MAX;
	uint16_t x198 = 2824U;
	int16_t x199 = INT16_MAX;

	t48 = (((x197==x198)<x199)/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x201 = 121U;
	int8_t x203 = 6;
	int16_t x204 = 346;
	volatile int32_t t49 = -137761;

	t49 = (((x201==x202)<x203)/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = -1;
	uint64_t x206 = 3426544944190LLU;
	uint32_t x207 = 752468417U;
	static int32_t t50 = 197525;

	t50 = (((x205==x206)<x207)/x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x209 = INT64_MIN;
	static volatile int32_t x210 = INT32_MIN;
	volatile uint8_t x211 = 1U;
	static volatile int16_t x212 = INT16_MIN;
	volatile int32_t t51 = -450;

	t51 = (((x209==x210)<x211)/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x214 = UINT64_MAX;
	static uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MIN;
	int64_t t52 = -4094LL;

	t52 = (((x213==x214)<x215)/x216);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x218 = -1;
	int8_t x219 = INT8_MIN;

	t53 = (((x217==x218)<x219)/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x222 = INT32_MIN;
	int8_t x224 = -3;
	int32_t t54 = 224025;

	t54 = (((x221==x222)<x223)/x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	uint64_t x226 = UINT64_MAX;
	uint64_t x228 = UINT64_MAX;
	uint64_t t55 = 494112879457390508LLU;

	t55 = (((x225==x226)<x227)/x228);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x231 = 574U;
	int64_t x232 = INT64_MAX;
	int64_t t56 = 1140560867LL;

	t56 = (((x229==x230)<x231)/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = 1;
	int64_t x234 = 7681LL;
	int64_t x235 = INT64_MIN;
	int32_t x236 = 16173428;
	static volatile int32_t t57 = 537476492;

	t57 = (((x233==x234)<x235)/x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x238 = 95U;
	static volatile int8_t x240 = -1;

	t58 = (((x237==x238)<x239)/x240);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x241 = 1LL;
	volatile int8_t x242 = 19;
	volatile uint32_t x243 = UINT32_MAX;
	int8_t x244 = INT8_MIN;

	t59 = (((x241==x242)<x243)/x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MIN;
	uint16_t x246 = UINT16_MAX;
	uint32_t x247 = 30U;
	volatile uint64_t x248 = 7882LLU;

	t60 = (((x245==x246)<x247)/x248);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = -1LL;
	int64_t x252 = -1LL;

	t61 = (((x249==x250)<x251)/x252);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = INT16_MIN;
	int32_t t62 = 33620;

	t62 = (((x253==x254)<x255)/x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = 12643962155LL;
	static int16_t x258 = -11;
	uint8_t x260 = 1U;
	volatile int32_t t63 = -67;

	t63 = (((x257==x258)<x259)/x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MAX;
	int8_t x264 = INT8_MAX;
	int32_t t64 = 5285;

	t64 = (((x261==x262)<x263)/x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x265 = UINT16_MAX;
	volatile int64_t x266 = -1LL;
	int32_t x267 = 2244311;
	static int64_t x268 = 4598688081432820711LL;
	static int64_t t65 = -1705443728000406LL;

	t65 = (((x265==x266)<x267)/x268);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x269 = INT16_MAX;
	volatile int16_t x270 = -1;
	uint16_t x271 = 2148U;
	int64_t x272 = 79708824LL;
	int64_t t66 = -14356325921695235LL;

	t66 = (((x269==x270)<x271)/x272);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = 0;
	uint32_t x274 = 1U;
	int8_t x275 = -28;
	static volatile int8_t x276 = INT8_MAX;
	static volatile int32_t t67 = 8731;

	t67 = (((x273==x274)<x275)/x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = 226193396;
	static int8_t x278 = -1;
	int8_t x279 = INT8_MIN;
	uint64_t x280 = 951482535388123454LLU;
	volatile uint64_t t68 = 1LLU;

	t68 = (((x277==x278)<x279)/x280);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = INT8_MIN;
	static uint64_t x282 = UINT64_MAX;
	int64_t x283 = INT64_MIN;
	uint16_t x284 = 5U;

	t69 = (((x281==x282)<x283)/x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MIN;
	static volatile int16_t x286 = INT16_MIN;
	volatile int32_t x287 = INT32_MIN;
	int64_t x288 = 19234LL;
	static int64_t t70 = -5853581558LL;

	t70 = (((x285==x286)<x287)/x288);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x290 = -6;
	uint16_t x291 = UINT16_MAX;
	uint32_t x292 = UINT32_MAX;

	t71 = (((x289==x290)<x291)/x292);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = 4LLU;
	static volatile int32_t x294 = INT32_MIN;
	int32_t x296 = -748;
	volatile int32_t t72 = -3346257;

	t72 = (((x293==x294)<x295)/x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	static volatile int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MIN;

	t73 = (((x297==x298)<x299)/x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = UINT8_MAX;
	int32_t t74 = -2;

	t74 = (((x305==x306)<x307)/x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = INT8_MIN;
	static uint32_t x310 = 1794U;
	int32_t x311 = -494;
	static int32_t x312 = -1;
	volatile int32_t t75 = -32;

	t75 = (((x309==x310)<x311)/x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = INT64_MIN;
	static int32_t x314 = 33623974;
	static int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MIN;
	volatile int32_t t76 = -1;

	t76 = (((x313==x314)<x315)/x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = 26102882421092384LL;
	int8_t x318 = INT8_MIN;
	int64_t x320 = INT64_MIN;
	volatile int64_t t77 = 0LL;

	t77 = (((x317==x318)<x319)/x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = UINT32_MAX;
	uint8_t x323 = UINT8_MAX;
	static uint16_t x324 = 177U;
	static volatile int32_t t78 = -320;

	t78 = (((x321==x322)<x323)/x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x325 = INT32_MAX;
	static int16_t x327 = INT16_MIN;
	static int16_t x328 = INT16_MIN;

	t79 = (((x325==x326)<x327)/x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MIN;
	int32_t x331 = -54629;
	int8_t x332 = -1;
	volatile int32_t t80 = 47;

	t80 = (((x329==x330)<x331)/x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x335 = 2332922U;
	volatile int64_t x336 = INT64_MIN;

	t81 = (((x333==x334)<x335)/x336);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x337 = 260347569172LLU;
	int64_t x338 = -1LL;
	uint32_t x339 = 25U;

	t82 = (((x337==x338)<x339)/x340);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x342 = UINT64_MAX;
	int16_t x343 = INT16_MIN;
	static int32_t x344 = -1576;
	int32_t t83 = -647;

	t83 = (((x341==x342)<x343)/x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x346 = INT32_MIN;
	int16_t x347 = INT16_MIN;
	int16_t x348 = -1;
	int32_t t84 = -1;

	t84 = (((x345==x346)<x347)/x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x353 = 0U;
	int32_t x354 = INT32_MAX;
	static int16_t x355 = -10;
	uint8_t x356 = 49U;
	int32_t t85 = -536016008;

	t85 = (((x353==x354)<x355)/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = UINT64_MAX;
	static uint32_t x358 = UINT32_MAX;
	int64_t x360 = INT64_MIN;
	int64_t t86 = 2LL;

	t86 = (((x357==x358)<x359)/x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = UINT16_MAX;
	uint64_t x362 = 2LLU;
	static volatile int8_t x363 = 0;
	int8_t x364 = INT8_MAX;
	volatile int32_t t87 = 1580554;

	t87 = (((x361==x362)<x363)/x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	uint64_t x367 = 8116727236934609819LLU;
	uint32_t x368 = 17U;
	volatile uint32_t t88 = 169061U;

	t88 = (((x365==x366)<x367)/x368);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x369 = -84257402;
	uint16_t x370 = 484U;
	volatile uint8_t x371 = 40U;
	uint8_t x372 = 22U;
	volatile int32_t t89 = 2;

	t89 = (((x369==x370)<x371)/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x373 = 2;
	uint32_t x374 = 8569U;
	uint64_t x376 = UINT64_MAX;

	t90 = (((x373==x374)<x375)/x376);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	int16_t x379 = -1;
	volatile int16_t x380 = -1;
	volatile int32_t t91 = -5647685;

	t91 = (((x377==x378)<x379)/x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x381 = -1;
	static int16_t x382 = -1;
	volatile int32_t t92 = -96426;

	t92 = (((x381==x382)<x383)/x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MAX;
	static volatile int8_t x386 = INT8_MIN;
	uint16_t x387 = 1U;

	t93 = (((x385==x386)<x387)/x388);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x389 = INT8_MAX;
	volatile int8_t x390 = INT8_MIN;
	static int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MIN;
	static int32_t t94 = 917;

	t94 = (((x389==x390)<x391)/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x393 = -1LL;
	volatile int32_t x394 = -61570446;
	uint32_t x396 = 68U;

	t95 = (((x393==x394)<x395)/x396);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x397 = 31230U;
	uint16_t x398 = 1U;
	static uint8_t x400 = 6U;

	t96 = (((x397==x398)<x399)/x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x403 = INT8_MIN;
	volatile int16_t x404 = 864;
	volatile int32_t t97 = 883572;

	t97 = (((x401==x402)<x403)/x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x406 = INT32_MIN;
	int8_t x407 = -4;
	volatile int64_t x408 = INT64_MAX;

	t98 = (((x405==x406)<x407)/x408);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x409 = UINT16_MAX;
	int64_t x410 = -1LL;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t99 = 16;

	t99 = (((x409==x410)<x411)/x412);

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

